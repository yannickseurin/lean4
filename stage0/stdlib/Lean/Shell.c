// Lean compiler output
// Module: Lean.Shell
// Imports: import Lean.Elab.Frontend import Lean.Elab.ParseImportsFast import Lean.Server.Watchdog import Lean.Server.FileWorker import Lean.Compiler.LCNF.EmitC import Init.System.Platform import Lean.Compiler.Options import Std.Async.Process
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_eprint___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
uint32_t lean_internal_get_hardware_concurrency(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Lean_version_specialDesc;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_versionStringCore;
extern uint8_t l_Lean_version_isRelease;
lean_object* lean_uv_os_getpid();
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_System_Platform_target;
lean_object* lean_get_stdout();
lean_object* l_String_toName(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_load_dynlib(lean_object*);
lean_object* lean_load_plugin(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printImportsJson(lean_object*);
lean_object* lean_io_exit(uint8_t);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Options_mergeBy(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_moduleNameOfFileName(lean_object*, lean_object*);
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lean_get_stdin();
lean_object* l_IO_FS_Stream_readBinToEnd(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_IO_FS_Stream_lines(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain(lean_object*);
lean_object* l_Lean_Server_FileWorker_workerMain(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_getBuildDir();
lean_object* l_Lean_getLibDir(lean_object*);
lean_object* lean_decode_lossy_utf8(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object*);
uint32_t lean_eval_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_init_llvm();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object*);
lean_object* lean_emit_llvm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_internal_has_address_sanitizer(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object*);
uint8_t lean_internal_is_multi_thread(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object*);
uint8_t lean_internal_is_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object*);
lean_object* lean_internal_get_build_type(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object*);
lean_object* lean_internal_get_default_max_memory(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object*);
lean_object* lean_internal_set_max_memory(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object*, lean_object*);
lean_object* lean_internal_get_default_max_heartbeat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object*);
lean_object* lean_internal_set_max_heartbeat(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object*, lean_object*);
uint8_t lean_internal_get_default_verbose(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object*);
lean_object* lean_internal_set_exit_on_panic(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object*, lean_object*);
lean_object* lean_internal_set_thread_stack_size(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object*, lean_object*);
lean_object* lean_internal_enable_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-pre"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shortVersionString;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean (version "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_versionHeader;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_featuresString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_featuresString___closed__0;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[LLVM]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_featuresString;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "      -D name=value      set a configuration option (see set_option command)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --plugin=file[=fn] load and initialize Lean shared library for registering linters etc."};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --load-dynlib=file load shared library to make its symbols available to the interpreter"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "      --setup=file       JSON file with module setup data (supersedes the file's header)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "      --json             report Lean output (e.g., messages) as JSON (one per line)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "  -E, --error=kind       report Lean messages of kind as errors"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "      --deps             just print dependencies of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "      --src-deps         just print dependency sources of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "      --print-prefix     print the installation prefix for Lean and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "      --print-libdir     print the installation directory for Lean's built-in libraries and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "      --profile          display elaboration/type checking time for each definition/theorem"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "      --stats            display environment statistics"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = "      --incr-save=file   EXPERIMENTAL: save a full incremental snapshot of post-elaboration state at end of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "      --incr-load=file   EXPERIMENTAL: reuse a snapshot saved by `--incr-(header-)save` at start of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "      --incr-header-save=file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "                         EXPERIMENTAL: like `--incr-save`, but save only the header (state after importing)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "      --debug=tag        enable assertions with the given tag"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Miscellaneous"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "  -h, --help             display this message"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "      --features         display features compiler provides (eg. LLVM support)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "  -v, --version          display version information"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "  -V, --short-version    display short version number"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "  -g, --githash          display the git commit hash number used to build this binary"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "      --run <file>       call the 'main' definition in the given file with the remaining arguments"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -o, --o=oname          create olean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -i, --i=iname          create ilean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "  -c, --c=fname          name of the C output file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -b, --bc=fname         name of the LLVM bitcode file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__28 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "      --stdin            take input from stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "  -R, --root=dir         set package root directory from which the module name\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "                         of the input file is calculated\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "                         (default: current working directory)\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "  -t, --trust=num        trust level (default: max) 0 means do not trust any macro,\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "                         and type check all imported modules\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -q, --quiet            do not print verbose messages"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "  -M, --memory=num       maximum amount of memory that should be used by Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "                         (in megabytes)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "  -T, --timeout=num      maximum number of memory allocations per task"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "                         this is a deterministic way of interrupting long running tasks"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__39 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__40;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "  -j, --threads=num      number of threads used to process lean files"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__41 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__41_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "  -s, --tstack=num       thread stack size in Kb"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__42 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "      --server           start lean in server mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__43 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "      --worker           start lean in server-worker mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__44 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "max_memory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 81, 94, 214, 186, 212, 139, 105)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Shell"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxMemory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__14_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__14_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_maxMemory;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 201, 121, 146, 245, 42, 97, 81)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_timeout;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verbose"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 17, 151, 162, 143, 207, 214, 14)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_verbose;
lean_object* lean_internal_get_option_overrides(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getOptionOverrides___boxed(lean_object*);
uint32_t lean_internal_get_believer_trust_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads;
static const lean_array_object l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0;
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "argument missing for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value)}};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "error: expected numeric argument for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "error: argument value for '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Unknown command line option\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "H"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Y"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "E"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-t' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-t'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-T'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-M'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-s' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-s'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-j' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-j'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tmp"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "#lang"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object**);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_shellMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shellMain___closed__1;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LLVM code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Expected exactly one file name"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__4_value;
static const lean_array_object l___private_Lean_Shell_0__Lean_shellMain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__6_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__6_value),LEAN_SCALAR_PTR_LITERAL(37, 142, 62, 167, 41, 238, 22, 79)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean4"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__8_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__9;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__10;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown language '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<stdin>"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__12_value;
LEAN_EXPORT lean_object* lean_shell_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object* v_a_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_decode_lossy_utf8(v_a_2_);
lean_dec_ref(v_a_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object* v_env_8_, lean_object* v_opts_9_, lean_object* v_args_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
uint32_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = lean_eval_main(v_env_8_, v_opts_9_, v_args_10_);
lean_dec(v_args_10_);
lean_dec_ref(v_opts_9_);
lean_dec_ref(v_env_8_);
v_r_13_ = lean_box_uint32(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object* v_a_00___x40___internal___hyg_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lean_init_llvm();
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object* v_env_21_, lean_object* v_modName_22_, lean_object* v_filepath_23_, lean_object* v_a_00___x40___internal___hyg_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lean_emit_llvm(v_env_21_, v_modName_22_, v_filepath_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object* v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = lean_internal_has_address_sanitizer(v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_27_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object* v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = lean_internal_is_multi_thread(v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object* v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = lean_internal_is_debug(v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_35_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object* v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = lean_internal_get_build_type(v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = lean_internal_get_default_max_memory(v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* v_max_46_, lean_object* v_a_00___x40___internal___hyg_47_){
_start:
{
size_t v_max_boxed_48_; lean_object* v_res_49_; 
v_max_boxed_48_ = lean_unbox_usize(v_max_46_);
lean_dec(v_max_46_);
v_res_49_ = lean_internal_set_max_memory(v_max_boxed_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object* v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = lean_internal_get_default_max_heartbeat(v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object* v_max_55_, lean_object* v_a_00___x40___internal___hyg_56_){
_start:
{
size_t v_max_boxed_57_; lean_object* v_res_58_; 
v_max_boxed_57_ = lean_unbox_usize(v_max_55_);
lean_dec(v_max_55_);
v_res_58_ = lean_internal_set_max_heartbeat(v_max_boxed_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object* v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = lean_internal_get_default_verbose(v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_60_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object* v_exit_65_, lean_object* v_a_00___x40___internal___hyg_66_){
_start:
{
uint8_t v_exit_boxed_67_; lean_object* v_res_68_; 
v_exit_boxed_67_ = lean_unbox(v_exit_65_);
v_res_68_ = lean_internal_set_exit_on_panic(v_exit_boxed_67_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object* v_sz_71_, lean_object* v_a_00___x40___internal___hyg_72_){
_start:
{
size_t v_sz_boxed_73_; lean_object* v_res_74_; 
v_sz_boxed_73_ = lean_unbox_usize(v_sz_71_);
lean_dec(v_sz_71_);
v_res_74_ = lean_internal_set_thread_stack_size(v_sz_boxed_73_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object* v_tag_77_, lean_object* v_a_00___x40___internal___hyg_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = lean_internal_enable_debug(v_tag_77_);
lean_dec_ref(v_tag_77_);
return v_res_79_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_81_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_82_ = l_Lean_version_specialDesc;
v___x_83_ = lean_string_dec_eq(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__2));
v___x_86_ = l_Lean_versionStringCore;
v___x_87_ = lean_string_append(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = l_Lean_version_specialDesc;
v___x_89_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__3, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3);
v___x_90_ = lean_string_append(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__5));
v___x_93_ = l_Lean_versionStringCore;
v___x_94_ = lean_string_append(v___x_93_, v___x_92_);
return v___x_94_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString(void){
_start:
{
uint8_t v___x_95_; 
v___x_95_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__1, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__4, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4);
return v___x_96_;
}
else
{
uint8_t v___x_97_; 
v___x_97_ = l_Lean_version_isRelease;
if (v___x_97_ == 0)
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__6, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6);
return v___x_98_;
}
else
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_versionStringCore;
return v___x_99_;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_box(0);
v___x_103_ = lean_internal_get_build_type(v___x_102_);
return v___x_103_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_105_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_106_ = l_Lean_githash;
v___x_107_ = lean_string_dec_eq(v___x_106_, v___x_105_);
return v___x_107_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_109_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_110_ = l_System_Platform_target;
v___x_111_ = lean_string_dec_eq(v___x_110_, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7(void){
_start:
{
lean_object* v___x_112_; lean_object* v_ver_113_; lean_object* v___x_114_; 
v___x_112_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v_ver_113_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_114_ = lean_string_append(v_ver_113_, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_ver_117_; 
v___x_115_ = l_System_Platform_target;
v___x_116_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__7, &l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7);
v_ver_117_ = lean_string_append(v___x_116_, v___x_115_);
return v_ver_117_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader(void){
_start:
{
lean_object* v_ver_119_; lean_object* v_ver_129_; lean_object* v_ver_135_; uint8_t v___x_136_; 
v_ver_135_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_136_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__6, &l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6);
if (v___x_136_ == 0)
{
lean_object* v_ver_137_; 
v_ver_137_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__8, &l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8);
v_ver_129_ = v_ver_137_;
goto v___jp_128_;
}
else
{
v_ver_129_ = v_ver_135_;
goto v___jp_128_;
}
v___jp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_120_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__0));
v___x_121_ = lean_string_append(v___x_120_, v_ver_119_);
lean_dec_ref(v_ver_119_);
v___x_122_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v___x_123_ = lean_string_append(v___x_121_, v___x_122_);
v___x_124_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__2, &l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2);
v___x_125_ = lean_string_append(v___x_123_, v___x_124_);
v___x_126_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__3));
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
return v___x_127_;
}
v___jp_128_:
{
lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_130_ = l_Lean_githash;
v___x_131_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__4, &l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v_ver_134_; 
v___x_132_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__5));
lean_inc_ref(v_ver_129_);
v___x_133_ = lean_string_append(v_ver_129_, v___x_132_);
v_ver_134_ = lean_string_append(v___x_133_, v___x_130_);
v_ver_119_ = v_ver_134_;
goto v___jp_118_;
}
else
{
lean_inc_ref(v_ver_129_);
v_ver_119_ = v_ver_129_;
goto v___jp_118_;
}
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0(void){
_start:
{
lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = lean_box(0);
v___x_139_ = lean_internal_has_llvm_backend(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_featuresString(void){
_start:
{
uint8_t v___x_142_; 
v___x_142_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_featuresString___closed__0, &l___private_Lean_Shell_0__Lean_featuresString___closed__0_once, _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__1));
return v___x_143_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__2));
return v___x_144_;
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16(void){
_start:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_box(0);
v___x_162_ = lean_internal_is_debug(v___x_161_);
return v___x_162_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40(void){
_start:
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = lean_internal_is_multi_thread(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t v_useStderr_192_){
_start:
{
lean_object* v___y_195_; lean_object* v___y_199_; lean_object* v_out_234_; 
if (v_useStderr_192_ == 0)
{
lean_object* v___x_290_; 
v___x_290_ = lean_get_stdout();
v_out_234_ = v___x_290_;
goto v___jp_233_;
}
else
{
lean_object* v___x_291_; 
v___x_291_ = lean_get_stderr();
v_out_234_ = v___x_291_;
goto v___jp_233_;
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__0));
v___x_197_ = l_IO_FS_Stream_putStrLn(v___y_195_, v___x_196_);
return v___x_197_;
}
v___jp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__1));
lean_inc_ref(v___y_199_);
v___x_201_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_200_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec_ref_known(v___x_201_, 1);
v___x_202_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__2));
lean_inc_ref(v___y_199_);
v___x_203_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec_ref_known(v___x_203_, 1);
v___x_204_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__3));
lean_inc_ref(v___y_199_);
v___x_205_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_204_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec_ref_known(v___x_205_, 1);
v___x_206_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__4));
lean_inc_ref(v___y_199_);
v___x_207_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_206_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec_ref_known(v___x_207_, 1);
v___x_208_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__5));
lean_inc_ref(v___y_199_);
v___x_209_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_208_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec_ref_known(v___x_209_, 1);
v___x_210_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__6));
lean_inc_ref(v___y_199_);
v___x_211_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_210_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec_ref_known(v___x_211_, 1);
v___x_212_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__7));
lean_inc_ref(v___y_199_);
v___x_213_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec_ref_known(v___x_213_, 1);
v___x_214_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__8));
lean_inc_ref(v___y_199_);
v___x_215_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_214_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec_ref_known(v___x_215_, 1);
v___x_216_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__9));
lean_inc_ref(v___y_199_);
v___x_217_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref_known(v___x_217_, 1);
v___x_218_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__10));
lean_inc_ref(v___y_199_);
v___x_219_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_218_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec_ref_known(v___x_219_, 1);
v___x_220_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__11));
lean_inc_ref(v___y_199_);
v___x_221_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec_ref_known(v___x_221_, 1);
v___x_222_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__12));
lean_inc_ref(v___y_199_);
v___x_223_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_222_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_dec_ref_known(v___x_223_, 1);
v___x_224_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__13));
lean_inc_ref(v___y_199_);
v___x_225_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_224_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec_ref_known(v___x_225_, 1);
v___x_226_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__14));
lean_inc_ref(v___y_199_);
v___x_227_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_226_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; 
lean_dec_ref_known(v___x_227_, 1);
v___x_228_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__15));
lean_inc_ref(v___y_199_);
v___x_229_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_228_);
if (lean_obj_tag(v___x_229_) == 0)
{
uint8_t v___x_230_; 
lean_dec_ref_known(v___x_229_, 1);
v___x_230_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_230_ == 0)
{
v___y_195_ = v___y_199_;
goto v___jp_194_;
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__17));
lean_inc_ref(v___y_199_);
v___x_232_ = l_IO_FS_Stream_putStrLn(v___y_199_, v___x_231_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_dec_ref_known(v___x_232_, 1);
v___y_195_ = v___y_199_;
goto v___jp_194_;
}
else
{
lean_dec_ref(v___y_199_);
return v___x_232_;
}
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_229_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_227_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_225_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_223_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_221_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_219_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_217_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_215_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_213_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_211_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_209_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_207_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_205_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_203_;
}
}
else
{
lean_dec_ref(v___y_199_);
return v___x_201_;
}
}
v___jp_233_:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(v_out_234_);
v___x_236_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_235_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec_ref_known(v___x_236_, 1);
v___x_237_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__18));
lean_inc_ref(v_out_234_);
v___x_238_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_237_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec_ref_known(v___x_238_, 1);
v___x_239_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__19));
lean_inc_ref(v_out_234_);
v___x_240_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_239_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref_known(v___x_240_, 1);
v___x_241_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__20));
lean_inc_ref(v_out_234_);
v___x_242_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_241_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref_known(v___x_242_, 1);
v___x_243_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__21));
lean_inc_ref(v_out_234_);
v___x_244_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; 
lean_dec_ref_known(v___x_244_, 1);
v___x_245_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__22));
lean_inc_ref(v_out_234_);
v___x_246_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_245_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec_ref_known(v___x_246_, 1);
v___x_247_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__23));
lean_inc_ref(v_out_234_);
v___x_248_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec_ref_known(v___x_248_, 1);
v___x_249_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__24));
lean_inc_ref(v_out_234_);
v___x_250_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_249_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec_ref_known(v___x_250_, 1);
v___x_251_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__25));
lean_inc_ref(v_out_234_);
v___x_252_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_251_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec_ref_known(v___x_252_, 1);
v___x_253_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__26));
lean_inc_ref(v_out_234_);
v___x_254_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec_ref_known(v___x_254_, 1);
v___x_255_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__27));
lean_inc_ref(v_out_234_);
v___x_256_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec_ref_known(v___x_256_, 1);
v___x_257_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__28));
lean_inc_ref(v_out_234_);
v___x_258_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref_known(v___x_258_, 1);
v___x_259_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__29));
lean_inc_ref(v_out_234_);
v___x_260_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref_known(v___x_260_, 1);
v___x_261_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__30));
lean_inc_ref(v_out_234_);
v___x_262_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_261_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec_ref_known(v___x_262_, 1);
v___x_263_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__31));
lean_inc_ref(v_out_234_);
v___x_264_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_263_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v___x_265_; lean_object* v___x_266_; 
lean_dec_ref_known(v___x_264_, 1);
v___x_265_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__32));
lean_inc_ref(v_out_234_);
v___x_266_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec_ref_known(v___x_266_, 1);
v___x_267_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__33));
lean_inc_ref(v_out_234_);
v___x_268_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec_ref_known(v___x_268_, 1);
v___x_269_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__34));
lean_inc_ref(v_out_234_);
v___x_270_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_269_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec_ref_known(v___x_270_, 1);
v___x_271_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__35));
lean_inc_ref(v_out_234_);
v___x_272_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_271_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec_ref_known(v___x_272_, 1);
v___x_273_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__36));
lean_inc_ref(v_out_234_);
v___x_274_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_273_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec_ref_known(v___x_274_, 1);
v___x_275_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__37));
lean_inc_ref(v_out_234_);
v___x_276_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_275_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v___x_277_; lean_object* v___x_278_; 
lean_dec_ref_known(v___x_276_, 1);
v___x_277_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__38));
lean_inc_ref(v_out_234_);
v___x_278_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
lean_dec_ref_known(v___x_278_, 1);
v___x_279_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__39));
lean_inc_ref(v_out_234_);
v___x_280_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
uint8_t v___x_281_; 
lean_dec_ref_known(v___x_280_, 1);
v___x_281_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_281_ == 0)
{
v___y_199_ = v_out_234_;
goto v___jp_198_;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__41));
lean_inc_ref(v_out_234_);
v___x_283_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_282_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec_ref_known(v___x_283_, 1);
v___x_284_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__42));
lean_inc_ref(v_out_234_);
v___x_285_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_284_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
lean_dec_ref_known(v___x_285_, 1);
v___x_286_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__43));
lean_inc_ref(v_out_234_);
v___x_287_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_286_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec_ref_known(v___x_287_, 1);
v___x_288_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__44));
lean_inc_ref(v_out_234_);
v___x_289_ = l_IO_FS_Stream_putStrLn(v_out_234_, v___x_288_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_dec_ref_known(v___x_289_, 1);
v___y_199_ = v_out_234_;
goto v___jp_198_;
}
else
{
lean_dec_ref(v_out_234_);
return v___x_289_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_287_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_285_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_283_;
}
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_280_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_278_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_276_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_274_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_272_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_270_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_268_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_266_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_264_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_262_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_260_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_258_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_256_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_254_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_252_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_250_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_248_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_246_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_244_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_242_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_240_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_238_;
}
}
else
{
lean_dec_ref(v_out_234_);
return v___x_236_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* v_useStderr_292_, lean_object* v_a_293_){
_start:
{
uint8_t v_useStderr_boxed_294_; lean_object* v_res_295_; 
v_useStderr_boxed_294_ = lean_unbox(v_useStderr_292_);
v_res_295_ = l___private_Lean_Shell_0__Lean_displayHelp(v_useStderr_boxed_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t v_x_296_){
_start:
{
switch(v_x_296_)
{
case 0:
{
lean_object* v___x_297_; 
v___x_297_ = lean_unsigned_to_nat(0u);
return v___x_297_;
}
case 1:
{
lean_object* v___x_298_; 
v___x_298_ = lean_unsigned_to_nat(1u);
return v___x_298_;
}
default: 
{
lean_object* v___x_299_; 
v___x_299_ = lean_unsigned_to_nat(2u);
return v___x_299_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object* v_x_300_){
_start:
{
uint8_t v_x_boxed_301_; lean_object* v_res_302_; 
v_x_boxed_301_ = lean_unbox(v_x_300_);
v_res_302_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_boxed_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* v_k_303_){
_start:
{
lean_inc(v_k_303_);
return v_k_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* v_k_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(v_k_304_);
lean_dec(v_k_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* v_motive_306_, lean_object* v_ctorIdx_307_, uint8_t v_t_308_, lean_object* v_h_309_, lean_object* v_k_310_){
_start:
{
lean_inc(v_k_310_);
return v_k_310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* v_motive_311_, lean_object* v_ctorIdx_312_, lean_object* v_t_313_, lean_object* v_h_314_, lean_object* v_k_315_){
_start:
{
uint8_t v_t_boxed_316_; lean_object* v_res_317_; 
v_t_boxed_316_ = lean_unbox(v_t_313_);
v_res_317_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(v_motive_311_, v_ctorIdx_312_, v_t_boxed_316_, v_h_314_, v_k_315_);
lean_dec(v_k_315_);
lean_dec(v_ctorIdx_312_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* v_frontend_318_){
_start:
{
lean_inc(v_frontend_318_);
return v_frontend_318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* v_frontend_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(v_frontend_319_);
lean_dec(v_frontend_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* v_motive_321_, uint8_t v_t_322_, lean_object* v_h_323_, lean_object* v_frontend_324_){
_start:
{
lean_inc(v_frontend_324_);
return v_frontend_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* v_motive_325_, lean_object* v_t_326_, lean_object* v_h_327_, lean_object* v_frontend_328_){
_start:
{
uint8_t v_t_boxed_329_; lean_object* v_res_330_; 
v_t_boxed_329_ = lean_unbox(v_t_326_);
v_res_330_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(v_motive_325_, v_t_boxed_329_, v_h_327_, v_frontend_328_);
lean_dec(v_frontend_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* v_watchdog_331_){
_start:
{
lean_inc(v_watchdog_331_);
return v_watchdog_331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* v_watchdog_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(v_watchdog_332_);
lean_dec(v_watchdog_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* v_motive_334_, uint8_t v_t_335_, lean_object* v_h_336_, lean_object* v_watchdog_337_){
_start:
{
lean_inc(v_watchdog_337_);
return v_watchdog_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* v_motive_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_watchdog_341_){
_start:
{
uint8_t v_t_boxed_342_; lean_object* v_res_343_; 
v_t_boxed_342_ = lean_unbox(v_t_339_);
v_res_343_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(v_motive_338_, v_t_boxed_342_, v_h_340_, v_watchdog_341_);
lean_dec(v_watchdog_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* v_worker_344_){
_start:
{
lean_inc(v_worker_344_);
return v_worker_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* v_worker_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(v_worker_345_);
lean_dec(v_worker_345_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* v_motive_347_, uint8_t v_t_348_, lean_object* v_h_349_, lean_object* v_worker_350_){
_start:
{
lean_inc(v_worker_350_);
return v_worker_350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* v_motive_351_, lean_object* v_t_352_, lean_object* v_h_353_, lean_object* v_worker_354_){
_start:
{
uint8_t v_t_boxed_355_; lean_object* v_res_356_; 
v_t_boxed_355_ = lean_unbox(v_t_352_);
v_res_356_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(v_motive_351_, v_t_boxed_355_, v_h_353_, v_worker_354_);
lean_dec(v_worker_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object* v_name_357_, lean_object* v_decl_358_, lean_object* v_ref_359_){
_start:
{
lean_object* v_defValue_361_; lean_object* v_descr_362_; lean_object* v_deprecation_x3f_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_defValue_361_ = lean_ctor_get(v_decl_358_, 0);
v_descr_362_ = lean_ctor_get(v_decl_358_, 1);
v_deprecation_x3f_363_ = lean_ctor_get(v_decl_358_, 2);
lean_inc(v_defValue_361_);
v___x_364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_364_, 0, v_defValue_361_);
lean_inc(v_deprecation_x3f_363_);
lean_inc_ref(v_descr_362_);
lean_inc_n(v_name_357_, 2);
v___x_365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_365_, 0, v_name_357_);
lean_ctor_set(v___x_365_, 1, v_ref_359_);
lean_ctor_set(v___x_365_, 2, v___x_364_);
lean_ctor_set(v___x_365_, 3, v_descr_362_);
lean_ctor_set(v___x_365_, 4, v_deprecation_x3f_363_);
v___x_366_ = lean_register_option(v_name_357_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v___x_366_, 0);
lean_dec(v_unused_375_);
v___x_368_ = v___x_366_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_dec(v___x_366_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_372_; 
lean_inc(v_defValue_361_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v_name_357_);
lean_ctor_set(v___x_370_, 1, v_defValue_361_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_370_);
v___x_372_ = v___x_368_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec(v_name_357_);
v_a_376_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_366_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_366_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_384_, lean_object* v_decl_385_, lean_object* v_ref_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v_name_384_, v_decl_385_, v_ref_386_);
lean_dec_ref(v_decl_385_);
return v_res_388_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_box(0);
v___x_393_ = lean_internal_get_default_max_memory(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = lean_box(0);
v___x_395_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_396_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
lean_ctor_set(v___x_397_, 1, v___x_395_);
lean_ctor_set(v___x_397_, 2, v___x_394_);
return v___x_397_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_box(0);
v___x_399_ = l_unsafeCast___redArg(v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_402_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_403_ = l_Lean_Name_str___override(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_406_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_407_ = l_Lean_Name_str___override(v___x_406_, v___x_405_);
return v___x_407_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_410_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_411_ = l_Lean_Name_str___override(v___x_410_, v___x_409_);
return v___x_411_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_414_ = l_Lean_Name_num___override(v___x_413_, v___x_412_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_416_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_417_ = l_Lean_Name_str___override(v___x_416_, v___x_415_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__14_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_420_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_421_ = l_Lean_Name_str___override(v___x_420_, v___x_419_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_423_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_424_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_425_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__14_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__14_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__14_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_426_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_423_, v___x_424_, v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
return v_res_428_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_box(0);
v___x_433_ = lean_internal_get_default_max_heartbeat(v___x_432_);
return v___x_433_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_434_ = lean_box(0);
v___x_435_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_436_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_437_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_435_);
lean_ctor_set(v___x_437_, 2, v___x_434_);
return v___x_437_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_439_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_440_ = l_Lean_Name_str___override(v___x_439_, v___x_438_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_442_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_443_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_444_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_445_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_442_, v___x_443_, v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object* v_name_448_, lean_object* v_decl_449_, lean_object* v_ref_450_){
_start:
{
lean_object* v_defValue_452_; lean_object* v_descr_453_; lean_object* v_deprecation_x3f_454_; lean_object* v___x_455_; uint8_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_defValue_452_ = lean_ctor_get(v_decl_449_, 0);
v_descr_453_ = lean_ctor_get(v_decl_449_, 1);
v_deprecation_x3f_454_ = lean_ctor_get(v_decl_449_, 2);
v___x_455_ = lean_alloc_ctor(1, 0, 1);
v___x_456_ = lean_unbox(v_defValue_452_);
lean_ctor_set_uint8(v___x_455_, 0, v___x_456_);
lean_inc(v_deprecation_x3f_454_);
lean_inc_ref(v_descr_453_);
lean_inc_n(v_name_448_, 2);
v___x_457_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_457_, 0, v_name_448_);
lean_ctor_set(v___x_457_, 1, v_ref_450_);
lean_ctor_set(v___x_457_, 2, v___x_455_);
lean_ctor_set(v___x_457_, 3, v_descr_453_);
lean_ctor_set(v___x_457_, 4, v_deprecation_x3f_454_);
v___x_458_ = lean_register_option(v_name_448_, v___x_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_466_; 
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_466_ == 0)
{
lean_object* v_unused_467_; 
v_unused_467_ = lean_ctor_get(v___x_458_, 0);
lean_dec(v_unused_467_);
v___x_460_ = v___x_458_;
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
else
{
lean_dec(v___x_458_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
lean_inc(v_defValue_452_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v_name_448_);
lean_ctor_set(v___x_462_, 1, v_defValue_452_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_dec(v_name_448_);
v_a_468_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_458_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_458_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_476_, lean_object* v_decl_477_, lean_object* v_ref_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v_name_476_, v_decl_477_, v_ref_478_);
lean_dec_ref(v_decl_477_);
return v_res_480_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = lean_box(0);
v___x_485_ = lean_internal_get_default_verbose(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_486_ = lean_box(0);
v___x_487_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_488_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_489_ = lean_box(v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v___x_487_);
lean_ctor_set(v___x_490_, 2, v___x_486_);
return v___x_490_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_492_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_493_ = l_Lean_Name_str___override(v___x_492_, v___x_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_495_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_496_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_497_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_498_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v___x_495_, v___x_496_, v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getOptionOverrides___boxed(lean_object* v_x_00___x40_Lean_Shell_1930944040____hygCtx___hyg_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = lean_internal_get_option_overrides(v_x_00___x40_Lean_Shell_1930944040____hygCtx___hyg_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object* v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_505_){
_start:
{
uint32_t v_res_506_; lean_object* v_r_507_; 
v_res_506_ = lean_internal_get_believer_trust_level(v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_505_);
v_r_507_ = lean_box_uint32(v_res_506_);
return v_r_507_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0(void){
_start:
{
lean_object* v___x_508_; uint32_t v___x_509_; 
v___x_508_ = lean_box(0);
v___x_509_ = lean_internal_get_believer_trust_level(v___x_508_);
return v___x_509_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1(void){
_start:
{
uint32_t v___x_510_; uint32_t v___x_511_; uint32_t v___x_512_; 
v___x_510_ = 1;
v___x_511_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0);
v___x_512_ = lean_uint32_add(v___x_511_, v___x_510_);
return v___x_512_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel(void){
_start:
{
uint32_t v___x_513_; 
v___x_513_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1);
return v___x_513_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0(void){
_start:
{
lean_object* v___x_514_; uint32_t v___x_515_; 
v___x_514_ = lean_box(0);
v___x_515_ = lean_internal_get_hardware_concurrency(v___x_514_);
return v___x_515_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads(void){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_516_ == 0)
{
uint32_t v___x_517_; 
v___x_517_ = 0;
return v___x_517_;
}
else
{
uint32_t v___x_518_; 
v___x_518_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0, &l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0);
return v___x_518_;
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1(void){
_start:
{
lean_object* v___x_521_; uint32_t v___x_522_; uint32_t v___x_523_; uint8_t v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_521_ = lean_box(0);
v___x_522_ = l___private_Lean_Shell_0__Lean_defaultNumThreads;
v___x_523_ = l___private_Lean_Shell_0__Lean_defaultTrustLevel;
v___x_524_ = 0;
v___x_525_ = 0;
v___x_526_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0));
v___x_527_ = l_Lean_Options_empty;
v___x_528_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___x_526_);
lean_ctor_set(v___x_528_, 2, v___x_527_);
lean_ctor_set(v___x_528_, 3, v___x_521_);
lean_ctor_set(v___x_528_, 4, v___x_521_);
lean_ctor_set(v___x_528_, 5, v___x_521_);
lean_ctor_set(v___x_528_, 6, v___x_521_);
lean_ctor_set(v___x_528_, 7, v___x_521_);
lean_ctor_set(v___x_528_, 8, v___x_521_);
lean_ctor_set(v___x_528_, 9, v___x_526_);
lean_ctor_set(v___x_528_, 10, v___x_521_);
lean_ctor_set(v___x_528_, 11, v___x_521_);
lean_ctor_set(v___x_528_, 12, v___x_521_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 8, v___x_525_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 9, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 10, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 11, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 12, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 13, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 14, v___x_524_);
lean_ctor_set_uint32(v___x_528_, sizeof(void*)*13, v___x_523_);
lean_ctor_set_uint32(v___x_528_, sizeof(void*)*13 + 4, v___x_522_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 15, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 16, v___x_524_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*13 + 17, v___x_524_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg(){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1, &l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___boxed(lean_object* v___dummy_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Shell_0__Lean_mkShellOptions___redArg();
return v_res_532_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0(void){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l___private_Lean_Shell_0__Lean_mkShellOptions___redArg();
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object* v_x_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0);
return v___x_535_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object* v_opts_536_){
_start:
{
uint8_t v_run_537_; 
v_run_537_ = lean_ctor_get_uint8(v_opts_536_, sizeof(void*)*13 + 17);
lean_dec_ref(v_opts_536_);
return v_run_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object* v_opts_538_){
_start:
{
uint8_t v_res_539_; lean_object* v_r_540_; 
v_res_539_ = lean_shell_options_get_run(v_opts_538_);
v_r_540_ = lean_box(v_res_539_);
return v_r_540_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(lean_object* v_opts_541_, lean_object* v_opt_542_){
_start:
{
lean_object* v_name_543_; lean_object* v_defValue_544_; lean_object* v_map_545_; lean_object* v___x_546_; 
v_name_543_ = lean_ctor_get(v_opt_542_, 0);
v_defValue_544_ = lean_ctor_get(v_opt_542_, 1);
v_map_545_ = lean_ctor_get(v_opts_541_, 0);
v___x_546_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_545_, v_name_543_);
if (lean_obj_tag(v___x_546_) == 0)
{
uint8_t v___x_547_; 
v___x_547_ = lean_unbox(v_defValue_544_);
return v___x_547_;
}
else
{
lean_object* v_val_548_; 
v_val_548_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_val_548_);
lean_dec_ref_known(v___x_546_, 1);
if (lean_obj_tag(v_val_548_) == 1)
{
uint8_t v_v_549_; 
v_v_549_ = lean_ctor_get_uint8(v_val_548_, 0);
lean_dec_ref_known(v_val_548_, 0);
return v_v_549_;
}
else
{
uint8_t v___x_550_; 
lean_dec(v_val_548_);
v___x_550_ = lean_unbox(v_defValue_544_);
return v___x_550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0___boxed(lean_object* v_opts_551_, lean_object* v_opt_552_){
_start:
{
uint8_t v_res_553_; lean_object* v_r_554_; 
v_res_553_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v_opts_551_, v_opt_552_);
lean_dec_ref(v_opt_552_);
lean_dec_ref(v_opts_551_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object* v_opts_555_){
_start:
{
lean_object* v_leanOpts_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v_leanOpts_556_ = lean_ctor_get(v_opts_555_, 0);
lean_inc_ref(v_leanOpts_556_);
lean_dec_ref(v_opts_555_);
v___x_557_ = l_Lean_profiler;
v___x_558_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v_leanOpts_556_, v___x_557_);
lean_dec_ref(v_leanOpts_556_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object* v_opts_559_){
_start:
{
uint8_t v_res_560_; lean_object* v_r_561_; 
v_res_560_ = lean_shell_options_get_profiler(v_opts_559_);
v_r_561_ = lean_box(v_res_560_);
return v_r_561_;
}
}
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object* v_opts_562_){
_start:
{
uint32_t v_numThreads_563_; 
v_numThreads_563_ = lean_ctor_get_uint32(v_opts_562_, sizeof(void*)*13 + 4);
lean_dec_ref(v_opts_562_);
return v_numThreads_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object* v_opts_564_){
_start:
{
uint32_t v_res_565_; lean_object* v_r_566_; 
v_res_565_ = lean_shell_options_get_num_threads(v_opts_564_);
v_r_566_ = lean_box_uint32(v_res_565_);
return v_r_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object* v_optName_569_, lean_object* v_optArg_x3f_570_){
_start:
{
if (lean_obj_tag(v_optArg_x3f_570_) == 1)
{
lean_object* v_val_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
v_val_572_ = lean_ctor_get(v_optArg_x3f_570_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v_optArg_x3f_570_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v_optArg_x3f_570_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_val_572_);
lean_dec(v_optArg_x3f_570_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 0);
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_val_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec(v_optArg_x3f_570_);
v___x_580_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__0));
v___x_581_ = lean_string_append(v___x_580_, v_optName_569_);
v___x_582_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_583_ = lean_string_append(v___x_581_, v___x_582_);
v___x_584_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
v___x_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object* v_optName_586_, lean_object* v_optArg_x3f_587_, lean_object* v_a_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l___private_Lean_Shell_0__Lean_checkOptArg(v_optName_586_, v_optArg_x3f_587_);
lean_dec_ref(v_optName_586_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object* v_o_593_, lean_object* v_k_594_, lean_object* v_v_595_){
_start:
{
lean_object* v_map_596_; uint8_t v_hasTrace_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_611_; 
v_map_596_ = lean_ctor_get(v_o_593_, 0);
v_hasTrace_597_ = lean_ctor_get_uint8(v_o_593_, sizeof(void*)*1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_o_593_);
if (v_isSharedCheck_611_ == 0)
{
v___x_599_ = v_o_593_;
v_isShared_600_ = v_isSharedCheck_611_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_map_596_);
lean_dec(v_o_593_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_611_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v_v_595_);
lean_inc(v_k_594_);
v___x_602_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_594_, v___x_601_, v_map_596_);
if (v_hasTrace_597_ == 0)
{
lean_object* v___x_603_; uint8_t v___x_604_; lean_object* v___x_606_; 
v___x_603_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_604_ = l_Lean_Name_isPrefixOf(v___x_603_, v_k_594_);
lean_dec(v_k_594_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_602_);
v___x_606_ = v___x_599_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_602_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_ctor_set_uint8(v___x_606_, sizeof(void*)*1, v___x_604_);
return v___x_606_;
}
}
else
{
lean_object* v___x_609_; 
lean_dec(v_k_594_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_602_);
v___x_609_ = v___x_599_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_602_);
lean_ctor_set_uint8(v_reuseFailAlloc_610_, sizeof(void*)*1, v_hasTrace_597_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object* v___x_612_, lean_object* v_arg_613_, lean_object* v_a_614_, lean_object* v_b_615_){
_start:
{
uint8_t v_decide_616_; 
v_decide_616_ = lean_nat_dec_eq(v_a_614_, v___x_612_);
if (v_decide_616_ == 0)
{
uint32_t v___x_617_; uint32_t v___x_618_; uint8_t v___x_619_; 
v___x_617_ = lean_string_utf8_get_fast(v_arg_613_, v_a_614_);
v___x_618_ = 61;
v___x_619_ = lean_uint32_dec_eq(v___x_617_, v___x_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_box(0);
v___x_621_ = lean_string_utf8_next_fast(v_arg_613_, v_a_614_);
lean_dec(v_a_614_);
v_a_614_ = v___x_621_;
v_b_615_ = v___x_620_;
goto _start;
}
else
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v_a_614_);
return v___x_623_;
}
}
else
{
lean_dec(v_a_614_);
lean_inc(v_b_615_);
return v_b_615_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object* v___x_624_, lean_object* v_arg_625_, lean_object* v_a_626_, lean_object* v_b_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_624_, v_arg_625_, v_a_626_, v_b_627_);
lean_dec(v_b_627_);
lean_dec_ref(v_arg_625_);
lean_dec(v___x_624_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object* v_opts_632_, lean_object* v_arg_633_){
_start:
{
lean_object* v___y_636_; lean_object* v_searcher_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_searcher_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_string_utf8_byte_size(v_arg_633_);
v___x_669_ = lean_box(0);
v___x_670_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_668_, v_arg_633_, v_searcher_667_, v___x_669_);
if (lean_obj_tag(v___x_670_) == 0)
{
v___y_636_ = v___x_668_;
goto v___jp_635_;
}
else
{
lean_object* v_val_671_; 
v_val_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_val_671_);
lean_dec_ref_known(v___x_670_, 1);
v___y_636_ = v_val_671_;
goto v___jp_635_;
}
v___jp_635_:
{
lean_object* v___x_637_; uint8_t v_decide_638_; 
v___x_637_ = lean_string_utf8_byte_size(v_arg_633_);
v_decide_638_ = lean_nat_dec_eq(v___y_636_, v___x_637_);
if (v_decide_638_ == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v_name_641_; lean_object* v___x_642_; lean_object* v_val_643_; lean_object* v___x_644_; 
v___x_639_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_636_);
lean_inc_ref(v_arg_633_);
v___x_640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_640_, 0, v_arg_633_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
lean_ctor_set(v___x_640_, 2, v___y_636_);
v_name_641_ = l_String_Slice_toName(v___x_640_);
lean_dec_ref_known(v___x_640_, 3);
v___x_642_ = lean_string_utf8_next_fast(v_arg_633_, v___y_636_);
lean_dec(v___y_636_);
v_val_643_ = lean_string_utf8_extract_fast(v_arg_633_, v___x_642_, v___x_637_);
lean_dec_ref(v_arg_633_);
v___x_644_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_656_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_656_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; 
v___x_649_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_645_, v_name_641_);
lean_dec(v_a_645_);
if (lean_obj_tag(v___x_649_) == 1)
{
lean_object* v_val_650_; lean_object* v___x_651_; 
lean_del_object(v___x_647_);
v_val_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v___x_649_, 1);
v___x_651_ = l_Lean_Language_Lean_setOption(v_opts_632_, v_val_650_, v_name_641_, v_val_643_);
return v___x_651_;
}
else
{
lean_object* v___x_652_; lean_object* v___x_654_; 
lean_dec(v___x_649_);
v___x_652_ = l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(v_opts_632_, v_name_641_, v_val_643_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_652_);
v___x_654_ = v___x_647_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec_ref(v_val_643_);
lean_dec(v_name_641_);
lean_dec_ref(v_opts_632_);
v_a_657_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_644_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_644_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; 
lean_dec(v___y_636_);
lean_dec_ref(v_arg_633_);
lean_dec_ref(v_opts_632_);
v___x_665_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_setConfigOption___closed__1));
v___x_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object* v_opts_672_, lean_object* v_arg_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_opts_672_, v_arg_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object* v___x_676_, lean_object* v___x_677_, lean_object* v_arg_678_, lean_object* v_inst_679_, lean_object* v_R_680_, lean_object* v_a_681_, lean_object* v_b_682_, lean_object* v_c_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_676_, v_arg_678_, v_a_681_, v_b_682_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object* v___x_685_, lean_object* v___x_686_, lean_object* v_arg_687_, lean_object* v_inst_688_, lean_object* v_R_689_, lean_object* v_a_690_, lean_object* v_b_691_, lean_object* v_c_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(v___x_685_, v___x_686_, v_arg_687_, v_inst_688_, v_R_689_, v_a_690_, v_b_691_, v_c_692_);
lean_dec(v_b_691_);
lean_dec_ref(v_arg_687_);
lean_dec_ref(v___x_686_);
lean_dec(v___x_685_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object* v_msg_695_){
_start:
{
lean_object* v___f_697_; lean_object* v___x_698_; 
v___f_697_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_698_ = l_IO_eprint___redArg(v___f_697_, v_msg_695_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
else
{
lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_714_; 
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_714_ == 0)
{
lean_object* v_unused_715_; 
v_unused_715_ = lean_ctor_get(v___x_698_, 0);
lean_dec(v_unused_715_);
v___x_708_ = v___x_698_;
v_isShared_709_ = v_isSharedCheck_714_;
goto v_resetjp_707_;
}
else
{
lean_dec(v___x_698_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_714_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_710_ = lean_box(0);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 0);
lean_ctor_set(v___x_708_, 0, v___x_710_);
v___x_712_ = v___x_708_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object* v_msg_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(v_msg_716_);
return v_res_718_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_721_; lean_object* v___x_722_; 
v___x_721_ = 1;
v___x_722_ = lean_box_uint32(v___x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object* v_x_723_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = lean_apply_1(v_x_723_, lean_box(0));
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___x_748_; 
v_a_741_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_732_, 1);
v___x_746_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_747_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_748_ = l_IO_eprint___redArg(v___f_747_, v___x_746_);
lean_dec_ref(v___x_748_);
goto v___jp_742_;
v___jp_742_:
{
lean_object* v___x_743_; lean_object* v___f_744_; lean_object* v___x_745_; 
v___x_743_ = lean_io_error_to_string(v_a_741_);
v___f_744_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_745_ = l_IO_eprint___redArg(v___f_744_, v___x_743_);
lean_dec_ref(v___x_745_);
goto v___jp_728_;
}
}
v___jp_725_:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
v___jp_728_:
{
lean_object* v___x_729_; lean_object* v___f_730_; lean_object* v___x_731_; 
v___x_729_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_730_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_731_ = l_IO_eprint___redArg(v___f_730_, v___x_729_);
lean_dec_ref(v___x_731_);
goto v___jp_725_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object* v_x_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(v_x_749_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object* v_00_u03b1_752_, lean_object* v_x_753_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = lean_apply_1(v_x_753_, lean_box(0));
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_762_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_762_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
else
{
lean_object* v_a_771_; lean_object* v___x_776_; lean_object* v___f_777_; lean_object* v___x_778_; 
v_a_771_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_762_, 1);
v___x_776_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_777_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_778_ = l_IO_eprint___redArg(v___f_777_, v___x_776_);
lean_dec_ref(v___x_778_);
goto v___jp_772_;
v___jp_772_:
{
lean_object* v___x_773_; lean_object* v___f_774_; lean_object* v___x_775_; 
v___x_773_ = lean_io_error_to_string(v_a_771_);
v___f_774_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_775_ = l_IO_eprint___redArg(v___f_774_, v___x_773_);
lean_dec_ref(v___x_775_);
goto v___jp_758_;
}
}
v___jp_755_:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
return v___x_757_;
}
v___jp_758_:
{
lean_object* v___x_759_; lean_object* v___f_760_; lean_object* v___x_761_; 
v___x_759_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_760_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_761_ = l_IO_eprint___redArg(v___f_760_, v___x_759_);
lean_dec_ref(v___x_761_);
goto v___jp_755_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object* v_00_u03b1_779_, lean_object* v_x_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(v_00_u03b1_779_, v_x_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object* v_opt_785_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___f_794_; lean_object* v___x_795_; 
v___x_790_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0));
v___x_791_ = lean_string_append(v___x_790_, v_opt_785_);
v___x_792_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_793_ = lean_string_append(v___x_791_, v___x_792_);
v___f_794_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_795_ = l_IO_eprint___redArg(v___f_794_, v___x_793_);
lean_dec_ref(v___x_795_);
goto v___jp_787_;
v___jp_787_:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
return v___x_789_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object* v_opt_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(v_opt_796_);
lean_dec_ref(v_opt_796_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object* v_opt_801_){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___f_810_; lean_object* v___x_811_; 
v___x_806_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0));
v___x_807_ = lean_string_append(v___x_806_, v_opt_801_);
v___x_808_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1));
v___x_809_ = lean_string_append(v___x_807_, v___x_808_);
v___f_810_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_811_ = l_IO_eprint___redArg(v___f_810_, v___x_809_);
lean_dec_ref(v___x_811_);
goto v___jp_803_;
v___jp_803_:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object* v_opt_812_, lean_object* v_a_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(v_opt_812_);
lean_dec_ref(v_opt_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object* v_s_815_){
_start:
{
lean_object* v___x_817_; lean_object* v_putStr_818_; lean_object* v___x_819_; 
v___x_817_ = lean_get_stderr();
v_putStr_818_ = lean_ctor_get(v___x_817_, 4);
lean_inc_ref(v_putStr_818_);
lean_dec_ref(v___x_817_);
v___x_819_ = lean_apply_2(v_putStr_818_, v_s_815_, lean_box(0));
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object* v_s_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_s_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object* v_s_823_){
_start:
{
lean_object* v___x_825_; lean_object* v_putStr_826_; lean_object* v___x_827_; 
v___x_825_ = lean_get_stdout();
v_putStr_826_ = lean_ctor_get(v___x_825_, 4);
lean_inc_ref(v_putStr_826_);
lean_dec_ref(v___x_825_);
v___x_827_ = lean_apply_2(v_putStr_826_, v_s_823_, lean_box(0));
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object* v_s_828_, lean_object* v_a_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v_s_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object* v_s_831_){
_start:
{
uint32_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = 10;
v___x_834_ = lean_string_push(v_s_831_, v___x_833_);
v___x_835_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object* v_s_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v_s_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object* v_o_839_, lean_object* v_k_840_, uint8_t v_v_841_){
_start:
{
lean_object* v_map_842_; uint8_t v_hasTrace_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_857_; 
v_map_842_ = lean_ctor_get(v_o_839_, 0);
v_hasTrace_843_ = lean_ctor_get_uint8(v_o_839_, sizeof(void*)*1);
v_isSharedCheck_857_ = !lean_is_exclusive(v_o_839_);
if (v_isSharedCheck_857_ == 0)
{
v___x_845_ = v_o_839_;
v_isShared_846_ = v_isSharedCheck_857_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_map_842_);
lean_dec(v_o_839_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_857_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_847_, 0, v_v_841_);
lean_inc(v_k_840_);
v___x_848_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_840_, v___x_847_, v_map_842_);
if (v_hasTrace_843_ == 0)
{
lean_object* v___x_849_; uint8_t v___x_850_; lean_object* v___x_852_; 
v___x_849_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_850_ = l_Lean_Name_isPrefixOf(v___x_849_, v_k_840_);
lean_dec(v_k_840_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_848_);
v___x_852_ = v___x_845_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_848_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_ctor_set_uint8(v___x_852_, sizeof(void*)*1, v___x_850_);
return v___x_852_;
}
}
else
{
lean_object* v___x_855_; 
lean_dec(v_k_840_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_848_);
v___x_855_ = v___x_845_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_848_);
lean_ctor_set_uint8(v_reuseFailAlloc_856_, sizeof(void*)*1, v_hasTrace_843_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object* v_o_858_, lean_object* v_k_859_, lean_object* v_v_860_){
_start:
{
uint8_t v_v_boxed_861_; lean_object* v_res_862_; 
v_v_boxed_861_ = lean_unbox(v_v_860_);
v_res_862_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_o_858_, v_k_859_, v_v_boxed_861_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object* v_opts_863_, lean_object* v_opt_864_, uint8_t v_val_865_){
_start:
{
lean_object* v_name_866_; lean_object* v___x_867_; 
v_name_866_ = lean_ctor_get(v_opt_864_, 0);
lean_inc(v_name_866_);
lean_dec_ref(v_opt_864_);
v___x_867_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_opts_863_, v_name_866_, v_val_865_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object* v_opts_868_, lean_object* v_opt_869_, lean_object* v_val_870_){
_start:
{
uint8_t v_val_boxed_871_; lean_object* v_res_872_; 
v_val_boxed_871_ = lean_unbox(v_val_870_);
v_res_872_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_opts_868_, v_opt_869_, v_val_boxed_871_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object* v_o_873_, lean_object* v_k_874_, lean_object* v_v_875_){
_start:
{
lean_object* v_map_876_; uint8_t v_hasTrace_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_891_; 
v_map_876_ = lean_ctor_get(v_o_873_, 0);
v_hasTrace_877_ = lean_ctor_get_uint8(v_o_873_, sizeof(void*)*1);
v_isSharedCheck_891_ = !lean_is_exclusive(v_o_873_);
if (v_isSharedCheck_891_ == 0)
{
v___x_879_ = v_o_873_;
v_isShared_880_ = v_isSharedCheck_891_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_map_876_);
lean_dec(v_o_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_891_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_881_, 0, v_v_875_);
lean_inc(v_k_874_);
v___x_882_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_874_, v___x_881_, v_map_876_);
if (v_hasTrace_877_ == 0)
{
lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_886_; 
v___x_883_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_884_ = l_Lean_Name_isPrefixOf(v___x_883_, v_k_874_);
lean_dec(v_k_874_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_882_);
v___x_886_ = v___x_879_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_882_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_ctor_set_uint8(v___x_886_, sizeof(void*)*1, v___x_884_);
return v___x_886_;
}
}
else
{
lean_object* v___x_889_; 
lean_dec(v_k_874_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_882_);
v___x_889_ = v___x_879_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_882_);
lean_ctor_set_uint8(v_reuseFailAlloc_890_, sizeof(void*)*1, v_hasTrace_877_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object* v_opts_892_, lean_object* v_opt_893_, lean_object* v_val_894_){
_start:
{
lean_object* v_name_895_; lean_object* v___x_896_; 
v_name_895_ = lean_ctor_get(v_opt_893_, 0);
lean_inc(v_name_895_);
lean_dec_ref(v_opt_893_);
v___x_896_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(v_opts_892_, v_name_895_, v_val_894_);
return v___x_896_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_925_ = l_System_Platform_numBits;
v___x_926_ = lean_unsigned_to_nat(2u);
v___x_927_ = lean_nat_pow(v___x_926_, v___x_925_);
return v___x_927_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1(void){
_start:
{
uint32_t v___x_937_; lean_object* v___x_938_; 
v___x_937_ = 0;
v___x_938_ = lean_box_uint32(v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object* v_opts_939_, uint32_t v_opt_940_, lean_object* v_optArg_x3f_941_){
_start:
{
lean_object* v___y_1049_; lean_object* v___y_1107_; uint32_t v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = 101;
v___x_1162_ = lean_uint32_dec_eq(v_opt_940_, v___x_1161_);
if (v___x_1162_ == 0)
{
uint32_t v___x_1163_; uint8_t v___x_1164_; 
v___x_1163_ = 106;
v___x_1164_ = lean_uint32_dec_eq(v_opt_940_, v___x_1163_);
if (v___x_1164_ == 0)
{
uint32_t v___x_1165_; uint8_t v___x_1166_; 
v___x_1165_ = 118;
v___x_1166_ = lean_uint32_dec_eq(v_opt_940_, v___x_1165_);
if (v___x_1166_ == 0)
{
uint32_t v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = 86;
v___x_1168_ = lean_uint32_dec_eq(v_opt_940_, v___x_1167_);
if (v___x_1168_ == 0)
{
uint32_t v___x_1169_; uint8_t v___x_1170_; 
v___x_1169_ = 103;
v___x_1170_ = lean_uint32_dec_eq(v_opt_940_, v___x_1169_);
if (v___x_1170_ == 0)
{
uint32_t v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = 104;
v___x_1172_ = lean_uint32_dec_eq(v_opt_940_, v___x_1171_);
if (v___x_1172_ == 0)
{
uint32_t v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = 102;
v___x_1174_ = lean_uint32_dec_eq(v_opt_940_, v___x_1173_);
if (v___x_1174_ == 0)
{
uint32_t v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = 99;
v___x_1176_ = lean_uint32_dec_eq(v_opt_940_, v___x_1175_);
if (v___x_1176_ == 0)
{
uint32_t v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = 98;
v___x_1178_ = lean_uint32_dec_eq(v_opt_940_, v___x_1177_);
if (v___x_1178_ == 0)
{
uint32_t v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = 115;
v___x_1180_ = lean_uint32_dec_eq(v_opt_940_, v___x_1179_);
if (v___x_1180_ == 0)
{
uint32_t v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = 73;
v___x_1182_ = lean_uint32_dec_eq(v_opt_940_, v___x_1181_);
if (v___x_1182_ == 0)
{
uint32_t v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = 114;
v___x_1184_ = lean_uint32_dec_eq(v_opt_940_, v___x_1183_);
if (v___x_1184_ == 0)
{
uint32_t v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = 111;
v___x_1186_ = lean_uint32_dec_eq(v_opt_940_, v___x_1185_);
if (v___x_1186_ == 0)
{
uint32_t v___x_1187_; uint8_t v___x_1188_; 
v___x_1187_ = 105;
v___x_1188_ = lean_uint32_dec_eq(v_opt_940_, v___x_1187_);
if (v___x_1188_ == 0)
{
uint32_t v___x_1189_; uint8_t v___x_1190_; 
v___x_1189_ = 82;
v___x_1190_ = lean_uint32_dec_eq(v_opt_940_, v___x_1189_);
if (v___x_1190_ == 0)
{
uint32_t v___x_1191_; uint8_t v___x_1192_; 
v___x_1191_ = 77;
v___x_1192_ = lean_uint32_dec_eq(v_opt_940_, v___x_1191_);
if (v___x_1192_ == 0)
{
uint32_t v___x_1193_; uint8_t v___x_1194_; 
v___x_1193_ = 84;
v___x_1194_ = lean_uint32_dec_eq(v_opt_940_, v___x_1193_);
if (v___x_1194_ == 0)
{
uint32_t v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = 116;
v___x_1196_ = lean_uint32_dec_eq(v_opt_940_, v___x_1195_);
if (v___x_1196_ == 0)
{
uint32_t v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = 113;
v___x_1198_ = lean_uint32_dec_eq(v_opt_940_, v___x_1197_);
if (v___x_1198_ == 0)
{
uint32_t v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = 100;
v___x_1200_ = lean_uint32_dec_eq(v_opt_940_, v___x_1199_);
if (v___x_1200_ == 0)
{
uint32_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = 79;
v___x_1202_ = lean_uint32_dec_eq(v_opt_940_, v___x_1201_);
if (v___x_1202_ == 0)
{
uint32_t v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = 78;
v___x_1204_ = lean_uint32_dec_eq(v_opt_940_, v___x_1203_);
if (v___x_1204_ == 0)
{
uint32_t v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = 74;
v___x_1206_ = lean_uint32_dec_eq(v_opt_940_, v___x_1205_);
if (v___x_1206_ == 0)
{
uint32_t v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = 97;
v___x_1208_ = lean_uint32_dec_eq(v_opt_940_, v___x_1207_);
if (v___x_1208_ == 0)
{
uint32_t v___x_1209_; uint8_t v___x_1210_; 
v___x_1209_ = 120;
v___x_1210_ = lean_uint32_dec_eq(v_opt_940_, v___x_1209_);
if (v___x_1210_ == 0)
{
uint32_t v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = 76;
v___x_1212_ = lean_uint32_dec_eq(v_opt_940_, v___x_1211_);
if (v___x_1212_ == 0)
{
uint32_t v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = 68;
v___x_1214_ = lean_uint32_dec_eq(v_opt_940_, v___x_1213_);
if (v___x_1214_ == 0)
{
uint32_t v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = 83;
v___x_1216_ = lean_uint32_dec_eq(v_opt_940_, v___x_1215_);
if (v___x_1216_ == 0)
{
uint32_t v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = 87;
v___x_1218_ = lean_uint32_dec_eq(v_opt_940_, v___x_1217_);
if (v___x_1218_ == 0)
{
uint32_t v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = 80;
v___x_1220_ = lean_uint32_dec_eq(v_opt_940_, v___x_1219_);
if (v___x_1220_ == 0)
{
uint32_t v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = 66;
v___x_1222_ = lean_uint32_dec_eq(v_opt_940_, v___x_1221_);
if (v___x_1222_ == 0)
{
uint32_t v___x_1223_; uint8_t v___x_1224_; 
v___x_1223_ = 112;
v___x_1224_ = lean_uint32_dec_eq(v_opt_940_, v___x_1223_);
if (v___x_1224_ == 0)
{
uint32_t v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = 108;
v___x_1226_ = lean_uint32_dec_eq(v_opt_940_, v___x_1225_);
if (v___x_1226_ == 0)
{
uint32_t v___x_1227_; uint8_t v___x_1228_; 
v___x_1227_ = 117;
v___x_1228_ = lean_uint32_dec_eq(v_opt_940_, v___x_1227_);
if (v___x_1228_ == 0)
{
uint32_t v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = 69;
v___x_1230_ = lean_uint32_dec_eq(v_opt_940_, v___x_1229_);
if (v___x_1230_ == 0)
{
uint32_t v___x_1231_; uint8_t v___x_1232_; 
v___x_1231_ = 89;
v___x_1232_ = lean_uint32_dec_eq(v_opt_940_, v___x_1231_);
if (v___x_1232_ == 0)
{
uint32_t v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = 90;
v___x_1234_ = lean_uint32_dec_eq(v_opt_940_, v___x_1233_);
if (v___x_1234_ == 0)
{
uint32_t v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = 72;
v___x_1236_ = lean_uint32_dec_eq(v_opt_940_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1));
v___x_1238_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1237_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1279_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1241_ = v___x_1238_;
v_isShared_1242_ = v_isSharedCheck_1279_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1238_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1279_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v_leanOpts_1243_; lean_object* v_forwardedArgs_1244_; uint8_t v_component_1245_; uint8_t v_printPrefix_1246_; uint8_t v_printLibDir_1247_; uint8_t v_useStdin_1248_; uint8_t v_onlyDeps_1249_; uint8_t v_onlySrcDeps_1250_; uint8_t v_depsJson_1251_; lean_object* v_opts_1252_; uint32_t v_trustLevel_1253_; uint32_t v_numThreads_1254_; lean_object* v_rootDir_x3f_1255_; lean_object* v_setupFileName_x3f_1256_; lean_object* v_oleanFileName_x3f_1257_; lean_object* v_ileanFileName_x3f_1258_; lean_object* v_cFileName_x3f_1259_; lean_object* v_bcFileName_x3f_1260_; uint8_t v_jsonOutput_1261_; lean_object* v_errorOnKinds_1262_; uint8_t v_printStats_1263_; uint8_t v_run_1264_; lean_object* v_incrSaveFileName_x3f_1265_; lean_object* v_incrLoadFileName_x3f_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1277_; 
v_leanOpts_1243_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1244_ = lean_ctor_get(v_opts_939_, 1);
v_component_1245_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1246_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1247_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1248_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1249_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1250_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1251_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1252_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1253_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1254_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1255_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1256_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1257_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1258_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1259_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1260_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1261_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1262_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1263_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1264_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1265_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1266_ = lean_ctor_get(v_opts_939_, 11);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v_opts_939_, 12);
lean_dec(v_unused_1278_);
v___x_1268_ = v_opts_939_;
v_isShared_1269_ = v_isSharedCheck_1277_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_incrLoadFileName_x3f_1266_);
lean_inc(v_incrSaveFileName_x3f_1265_);
lean_inc(v_errorOnKinds_1262_);
lean_inc(v_bcFileName_x3f_1260_);
lean_inc(v_cFileName_x3f_1259_);
lean_inc(v_ileanFileName_x3f_1258_);
lean_inc(v_oleanFileName_x3f_1257_);
lean_inc(v_setupFileName_x3f_1256_);
lean_inc(v_rootDir_x3f_1255_);
lean_inc(v_opts_1252_);
lean_inc(v_forwardedArgs_1244_);
lean_inc(v_leanOpts_1243_);
lean_dec(v_opts_939_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1277_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v_a_1239_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 12, v___x_1270_);
v___x_1272_ = v___x_1268_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_leanOpts_1243_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v_forwardedArgs_1244_);
lean_ctor_set(v_reuseFailAlloc_1276_, 2, v_opts_1252_);
lean_ctor_set(v_reuseFailAlloc_1276_, 3, v_rootDir_x3f_1255_);
lean_ctor_set(v_reuseFailAlloc_1276_, 4, v_setupFileName_x3f_1256_);
lean_ctor_set(v_reuseFailAlloc_1276_, 5, v_oleanFileName_x3f_1257_);
lean_ctor_set(v_reuseFailAlloc_1276_, 6, v_ileanFileName_x3f_1258_);
lean_ctor_set(v_reuseFailAlloc_1276_, 7, v_cFileName_x3f_1259_);
lean_ctor_set(v_reuseFailAlloc_1276_, 8, v_bcFileName_x3f_1260_);
lean_ctor_set(v_reuseFailAlloc_1276_, 9, v_errorOnKinds_1262_);
lean_ctor_set(v_reuseFailAlloc_1276_, 10, v_incrSaveFileName_x3f_1265_);
lean_ctor_set(v_reuseFailAlloc_1276_, 11, v_incrLoadFileName_x3f_1266_);
lean_ctor_set(v_reuseFailAlloc_1276_, 12, v___x_1270_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 8, v_component_1245_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 9, v_printPrefix_1246_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 10, v_printLibDir_1247_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 11, v_useStdin_1248_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 12, v_onlyDeps_1249_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 13, v_onlySrcDeps_1250_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 14, v_depsJson_1251_);
lean_ctor_set_uint32(v_reuseFailAlloc_1276_, sizeof(void*)*13, v_trustLevel_1253_);
lean_ctor_set_uint32(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 4, v_numThreads_1254_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 15, v_jsonOutput_1261_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 16, v_printStats_1263_);
lean_ctor_set_uint8(v_reuseFailAlloc_1276_, sizeof(void*)*13 + 17, v_run_1264_);
v___x_1272_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1274_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1272_);
v___x_1274_ = v___x_1241_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1272_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_dec_ref(v_opts_939_);
v_a_1280_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1284_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1285_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1284_);
lean_dec_ref(v___x_1285_);
goto v___jp_1281_;
v___jp_1281_:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = lean_io_error_to_string(v_a_1280_);
v___x_1283_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1282_);
lean_dec_ref(v___x_1283_);
goto v___jp_1039_;
}
}
}
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2));
v___x_1287_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1286_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1328_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1290_ = v___x_1287_;
v_isShared_1291_ = v_isSharedCheck_1328_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1287_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1328_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v_leanOpts_1292_; lean_object* v_forwardedArgs_1293_; uint8_t v_component_1294_; uint8_t v_printPrefix_1295_; uint8_t v_printLibDir_1296_; uint8_t v_useStdin_1297_; uint8_t v_onlyDeps_1298_; uint8_t v_onlySrcDeps_1299_; uint8_t v_depsJson_1300_; lean_object* v_opts_1301_; uint32_t v_trustLevel_1302_; uint32_t v_numThreads_1303_; lean_object* v_rootDir_x3f_1304_; lean_object* v_setupFileName_x3f_1305_; lean_object* v_oleanFileName_x3f_1306_; lean_object* v_ileanFileName_x3f_1307_; lean_object* v_cFileName_x3f_1308_; lean_object* v_bcFileName_x3f_1309_; uint8_t v_jsonOutput_1310_; lean_object* v_errorOnKinds_1311_; uint8_t v_printStats_1312_; uint8_t v_run_1313_; lean_object* v_incrSaveFileName_x3f_1314_; lean_object* v_incrHeaderSaveFileName_x3f_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1326_; 
v_leanOpts_1292_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1293_ = lean_ctor_get(v_opts_939_, 1);
v_component_1294_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1295_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1296_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1297_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1298_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1299_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1300_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1301_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1302_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1303_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1304_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1305_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1306_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1307_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1308_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1309_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1310_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1311_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1312_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1313_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1314_ = lean_ctor_get(v_opts_939_, 10);
v_incrHeaderSaveFileName_x3f_1315_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1326_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1326_ == 0)
{
lean_object* v_unused_1327_; 
v_unused_1327_ = lean_ctor_get(v_opts_939_, 11);
lean_dec(v_unused_1327_);
v___x_1317_ = v_opts_939_;
v_isShared_1318_ = v_isSharedCheck_1326_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1315_);
lean_inc(v_incrSaveFileName_x3f_1314_);
lean_inc(v_errorOnKinds_1311_);
lean_inc(v_bcFileName_x3f_1309_);
lean_inc(v_cFileName_x3f_1308_);
lean_inc(v_ileanFileName_x3f_1307_);
lean_inc(v_oleanFileName_x3f_1306_);
lean_inc(v_setupFileName_x3f_1305_);
lean_inc(v_rootDir_x3f_1304_);
lean_inc(v_opts_1301_);
lean_inc(v_forwardedArgs_1293_);
lean_inc(v_leanOpts_1292_);
lean_dec(v_opts_939_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1326_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1319_, 0, v_a_1288_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 11, v___x_1319_);
v___x_1321_ = v___x_1317_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_leanOpts_1292_);
lean_ctor_set(v_reuseFailAlloc_1325_, 1, v_forwardedArgs_1293_);
lean_ctor_set(v_reuseFailAlloc_1325_, 2, v_opts_1301_);
lean_ctor_set(v_reuseFailAlloc_1325_, 3, v_rootDir_x3f_1304_);
lean_ctor_set(v_reuseFailAlloc_1325_, 4, v_setupFileName_x3f_1305_);
lean_ctor_set(v_reuseFailAlloc_1325_, 5, v_oleanFileName_x3f_1306_);
lean_ctor_set(v_reuseFailAlloc_1325_, 6, v_ileanFileName_x3f_1307_);
lean_ctor_set(v_reuseFailAlloc_1325_, 7, v_cFileName_x3f_1308_);
lean_ctor_set(v_reuseFailAlloc_1325_, 8, v_bcFileName_x3f_1309_);
lean_ctor_set(v_reuseFailAlloc_1325_, 9, v_errorOnKinds_1311_);
lean_ctor_set(v_reuseFailAlloc_1325_, 10, v_incrSaveFileName_x3f_1314_);
lean_ctor_set(v_reuseFailAlloc_1325_, 11, v___x_1319_);
lean_ctor_set(v_reuseFailAlloc_1325_, 12, v_incrHeaderSaveFileName_x3f_1315_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 8, v_component_1294_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 9, v_printPrefix_1295_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 10, v_printLibDir_1296_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 11, v_useStdin_1297_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 12, v_onlyDeps_1298_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 13, v_onlySrcDeps_1299_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 14, v_depsJson_1300_);
lean_ctor_set_uint32(v_reuseFailAlloc_1325_, sizeof(void*)*13, v_trustLevel_1302_);
lean_ctor_set_uint32(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 4, v_numThreads_1303_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 15, v_jsonOutput_1310_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 16, v_printStats_1312_);
lean_ctor_set_uint8(v_reuseFailAlloc_1325_, sizeof(void*)*13 + 17, v_run_1313_);
v___x_1321_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1323_; 
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___x_1321_);
v___x_1323_ = v___x_1290_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
lean_dec_ref(v_opts_939_);
v_a_1329_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1333_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1334_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1333_);
lean_dec_ref(v___x_1334_);
goto v___jp_1330_;
v___jp_1330_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_io_error_to_string(v_a_1329_);
v___x_1332_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1331_);
lean_dec_ref(v___x_1332_);
goto v___jp_1073_;
}
}
}
}
else
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3));
v___x_1336_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1335_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1377_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1339_ = v___x_1336_;
v_isShared_1340_ = v_isSharedCheck_1377_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1336_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1377_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v_leanOpts_1341_; lean_object* v_forwardedArgs_1342_; uint8_t v_component_1343_; uint8_t v_printPrefix_1344_; uint8_t v_printLibDir_1345_; uint8_t v_useStdin_1346_; uint8_t v_onlyDeps_1347_; uint8_t v_onlySrcDeps_1348_; uint8_t v_depsJson_1349_; lean_object* v_opts_1350_; uint32_t v_trustLevel_1351_; uint32_t v_numThreads_1352_; lean_object* v_rootDir_x3f_1353_; lean_object* v_setupFileName_x3f_1354_; lean_object* v_oleanFileName_x3f_1355_; lean_object* v_ileanFileName_x3f_1356_; lean_object* v_cFileName_x3f_1357_; lean_object* v_bcFileName_x3f_1358_; uint8_t v_jsonOutput_1359_; lean_object* v_errorOnKinds_1360_; uint8_t v_printStats_1361_; uint8_t v_run_1362_; lean_object* v_incrLoadFileName_x3f_1363_; lean_object* v_incrHeaderSaveFileName_x3f_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1375_; 
v_leanOpts_1341_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1342_ = lean_ctor_get(v_opts_939_, 1);
v_component_1343_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1344_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1345_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1346_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1347_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1348_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1349_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1350_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1351_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1352_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1353_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1354_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1355_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1356_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1357_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1358_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1359_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1360_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1361_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1362_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrLoadFileName_x3f_1363_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1364_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1375_ == 0)
{
lean_object* v_unused_1376_; 
v_unused_1376_ = lean_ctor_get(v_opts_939_, 10);
lean_dec(v_unused_1376_);
v___x_1366_ = v_opts_939_;
v_isShared_1367_ = v_isSharedCheck_1375_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1364_);
lean_inc(v_incrLoadFileName_x3f_1363_);
lean_inc(v_errorOnKinds_1360_);
lean_inc(v_bcFileName_x3f_1358_);
lean_inc(v_cFileName_x3f_1357_);
lean_inc(v_ileanFileName_x3f_1356_);
lean_inc(v_oleanFileName_x3f_1355_);
lean_inc(v_setupFileName_x3f_1354_);
lean_inc(v_rootDir_x3f_1353_);
lean_inc(v_opts_1350_);
lean_inc(v_forwardedArgs_1342_);
lean_inc(v_leanOpts_1341_);
lean_dec(v_opts_939_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1375_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; lean_object* v___x_1370_; 
v___x_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1368_, 0, v_a_1337_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 10, v___x_1368_);
v___x_1370_ = v___x_1366_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_leanOpts_1341_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v_forwardedArgs_1342_);
lean_ctor_set(v_reuseFailAlloc_1374_, 2, v_opts_1350_);
lean_ctor_set(v_reuseFailAlloc_1374_, 3, v_rootDir_x3f_1353_);
lean_ctor_set(v_reuseFailAlloc_1374_, 4, v_setupFileName_x3f_1354_);
lean_ctor_set(v_reuseFailAlloc_1374_, 5, v_oleanFileName_x3f_1355_);
lean_ctor_set(v_reuseFailAlloc_1374_, 6, v_ileanFileName_x3f_1356_);
lean_ctor_set(v_reuseFailAlloc_1374_, 7, v_cFileName_x3f_1357_);
lean_ctor_set(v_reuseFailAlloc_1374_, 8, v_bcFileName_x3f_1358_);
lean_ctor_set(v_reuseFailAlloc_1374_, 9, v_errorOnKinds_1360_);
lean_ctor_set(v_reuseFailAlloc_1374_, 10, v___x_1368_);
lean_ctor_set(v_reuseFailAlloc_1374_, 11, v_incrLoadFileName_x3f_1363_);
lean_ctor_set(v_reuseFailAlloc_1374_, 12, v_incrHeaderSaveFileName_x3f_1364_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 8, v_component_1343_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 9, v_printPrefix_1344_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 10, v_printLibDir_1345_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 11, v_useStdin_1346_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 12, v_onlyDeps_1347_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 13, v_onlySrcDeps_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 14, v_depsJson_1349_);
lean_ctor_set_uint32(v_reuseFailAlloc_1374_, sizeof(void*)*13, v_trustLevel_1351_);
lean_ctor_set_uint32(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 4, v_numThreads_1352_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 15, v_jsonOutput_1359_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 16, v_printStats_1361_);
lean_ctor_set_uint8(v_reuseFailAlloc_1374_, sizeof(void*)*13 + 17, v_run_1362_);
v___x_1370_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
lean_object* v___x_1372_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v___x_1370_);
v___x_1372_ = v___x_1339_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
}
else
{
lean_object* v_a_1378_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
lean_dec_ref(v_opts_939_);
v_a_1378_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1336_, 1);
v___x_1382_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1383_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1382_);
lean_dec_ref(v___x_1383_);
goto v___jp_1379_;
v___jp_1379_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = lean_io_error_to_string(v_a_1378_);
v___x_1381_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1380_);
lean_dec_ref(v___x_1381_);
goto v___jp_1033_;
}
}
}
}
else
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4));
v___x_1385_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1384_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1427_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1427_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1427_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v_leanOpts_1390_; lean_object* v_forwardedArgs_1391_; uint8_t v_component_1392_; uint8_t v_printPrefix_1393_; uint8_t v_printLibDir_1394_; uint8_t v_useStdin_1395_; uint8_t v_onlyDeps_1396_; uint8_t v_onlySrcDeps_1397_; uint8_t v_depsJson_1398_; lean_object* v_opts_1399_; uint32_t v_trustLevel_1400_; uint32_t v_numThreads_1401_; lean_object* v_rootDir_x3f_1402_; lean_object* v_setupFileName_x3f_1403_; lean_object* v_oleanFileName_x3f_1404_; lean_object* v_ileanFileName_x3f_1405_; lean_object* v_cFileName_x3f_1406_; lean_object* v_bcFileName_x3f_1407_; uint8_t v_jsonOutput_1408_; lean_object* v_errorOnKinds_1409_; uint8_t v_printStats_1410_; uint8_t v_run_1411_; lean_object* v_incrSaveFileName_x3f_1412_; lean_object* v_incrLoadFileName_x3f_1413_; lean_object* v_incrHeaderSaveFileName_x3f_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1426_; 
v_leanOpts_1390_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1391_ = lean_ctor_get(v_opts_939_, 1);
v_component_1392_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1393_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1394_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1395_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1396_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1397_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1398_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1399_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1400_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1401_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1402_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1403_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1404_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1405_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1406_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1407_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1408_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1409_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1410_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1411_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1412_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1413_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1414_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1426_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1416_ = v_opts_939_;
v_isShared_1417_ = v_isSharedCheck_1426_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1414_);
lean_inc(v_incrLoadFileName_x3f_1413_);
lean_inc(v_incrSaveFileName_x3f_1412_);
lean_inc(v_errorOnKinds_1409_);
lean_inc(v_bcFileName_x3f_1407_);
lean_inc(v_cFileName_x3f_1406_);
lean_inc(v_ileanFileName_x3f_1405_);
lean_inc(v_oleanFileName_x3f_1404_);
lean_inc(v_setupFileName_x3f_1403_);
lean_inc(v_rootDir_x3f_1402_);
lean_inc(v_opts_1399_);
lean_inc(v_forwardedArgs_1391_);
lean_inc(v_leanOpts_1390_);
lean_dec(v_opts_939_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1426_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1418_ = l_String_toName(v_a_1386_);
v___x_1419_ = lean_array_push(v_errorOnKinds_1409_, v___x_1418_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 9, v___x_1419_);
v___x_1421_ = v___x_1416_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_leanOpts_1390_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v_forwardedArgs_1391_);
lean_ctor_set(v_reuseFailAlloc_1425_, 2, v_opts_1399_);
lean_ctor_set(v_reuseFailAlloc_1425_, 3, v_rootDir_x3f_1402_);
lean_ctor_set(v_reuseFailAlloc_1425_, 4, v_setupFileName_x3f_1403_);
lean_ctor_set(v_reuseFailAlloc_1425_, 5, v_oleanFileName_x3f_1404_);
lean_ctor_set(v_reuseFailAlloc_1425_, 6, v_ileanFileName_x3f_1405_);
lean_ctor_set(v_reuseFailAlloc_1425_, 7, v_cFileName_x3f_1406_);
lean_ctor_set(v_reuseFailAlloc_1425_, 8, v_bcFileName_x3f_1407_);
lean_ctor_set(v_reuseFailAlloc_1425_, 9, v___x_1419_);
lean_ctor_set(v_reuseFailAlloc_1425_, 10, v_incrSaveFileName_x3f_1412_);
lean_ctor_set(v_reuseFailAlloc_1425_, 11, v_incrLoadFileName_x3f_1413_);
lean_ctor_set(v_reuseFailAlloc_1425_, 12, v_incrHeaderSaveFileName_x3f_1414_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 8, v_component_1392_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 9, v_printPrefix_1393_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 10, v_printLibDir_1394_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 11, v_useStdin_1395_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 12, v_onlyDeps_1396_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 13, v_onlySrcDeps_1397_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 14, v_depsJson_1398_);
lean_ctor_set_uint32(v_reuseFailAlloc_1425_, sizeof(void*)*13, v_trustLevel_1400_);
lean_ctor_set_uint32(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 4, v_numThreads_1401_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 15, v_jsonOutput_1408_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 16, v_printStats_1410_);
lean_ctor_set_uint8(v_reuseFailAlloc_1425_, sizeof(void*)*13 + 17, v_run_1411_);
v___x_1421_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1423_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1421_);
v___x_1423_ = v___x_1388_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_dec_ref(v_opts_939_);
v_a_1428_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1428_);
lean_dec_ref_known(v___x_1385_, 1);
v___x_1432_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1433_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1432_);
lean_dec_ref(v___x_1433_);
goto v___jp_1429_;
v___jp_1429_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1430_ = lean_io_error_to_string(v_a_1428_);
v___x_1431_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1430_);
lean_dec_ref(v___x_1431_);
goto v___jp_1079_;
}
}
}
}
else
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5));
v___x_1435_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1434_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1476_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1438_ = v___x_1435_;
v_isShared_1439_ = v_isSharedCheck_1476_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1435_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1476_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v_leanOpts_1440_; lean_object* v_forwardedArgs_1441_; uint8_t v_component_1442_; uint8_t v_printPrefix_1443_; uint8_t v_printLibDir_1444_; uint8_t v_useStdin_1445_; uint8_t v_onlyDeps_1446_; uint8_t v_onlySrcDeps_1447_; uint8_t v_depsJson_1448_; lean_object* v_opts_1449_; uint32_t v_trustLevel_1450_; uint32_t v_numThreads_1451_; lean_object* v_rootDir_x3f_1452_; lean_object* v_oleanFileName_x3f_1453_; lean_object* v_ileanFileName_x3f_1454_; lean_object* v_cFileName_x3f_1455_; lean_object* v_bcFileName_x3f_1456_; uint8_t v_jsonOutput_1457_; lean_object* v_errorOnKinds_1458_; uint8_t v_printStats_1459_; uint8_t v_run_1460_; lean_object* v_incrSaveFileName_x3f_1461_; lean_object* v_incrLoadFileName_x3f_1462_; lean_object* v_incrHeaderSaveFileName_x3f_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1474_; 
v_leanOpts_1440_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1441_ = lean_ctor_get(v_opts_939_, 1);
v_component_1442_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1443_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1444_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1445_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1446_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1447_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1448_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1449_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1450_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1451_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1452_ = lean_ctor_get(v_opts_939_, 3);
v_oleanFileName_x3f_1453_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1454_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1455_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1456_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1457_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1458_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1459_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1460_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1461_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1462_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1463_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1474_ == 0)
{
lean_object* v_unused_1475_; 
v_unused_1475_ = lean_ctor_get(v_opts_939_, 4);
lean_dec(v_unused_1475_);
v___x_1465_ = v_opts_939_;
v_isShared_1466_ = v_isSharedCheck_1474_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1463_);
lean_inc(v_incrLoadFileName_x3f_1462_);
lean_inc(v_incrSaveFileName_x3f_1461_);
lean_inc(v_errorOnKinds_1458_);
lean_inc(v_bcFileName_x3f_1456_);
lean_inc(v_cFileName_x3f_1455_);
lean_inc(v_ileanFileName_x3f_1454_);
lean_inc(v_oleanFileName_x3f_1453_);
lean_inc(v_rootDir_x3f_1452_);
lean_inc(v_opts_1449_);
lean_inc(v_forwardedArgs_1441_);
lean_inc(v_leanOpts_1440_);
lean_dec(v_opts_939_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1474_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1467_, 0, v_a_1436_);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 4, v___x_1467_);
v___x_1469_ = v___x_1465_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_leanOpts_1440_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_forwardedArgs_1441_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_opts_1449_);
lean_ctor_set(v_reuseFailAlloc_1473_, 3, v_rootDir_x3f_1452_);
lean_ctor_set(v_reuseFailAlloc_1473_, 4, v___x_1467_);
lean_ctor_set(v_reuseFailAlloc_1473_, 5, v_oleanFileName_x3f_1453_);
lean_ctor_set(v_reuseFailAlloc_1473_, 6, v_ileanFileName_x3f_1454_);
lean_ctor_set(v_reuseFailAlloc_1473_, 7, v_cFileName_x3f_1455_);
lean_ctor_set(v_reuseFailAlloc_1473_, 8, v_bcFileName_x3f_1456_);
lean_ctor_set(v_reuseFailAlloc_1473_, 9, v_errorOnKinds_1458_);
lean_ctor_set(v_reuseFailAlloc_1473_, 10, v_incrSaveFileName_x3f_1461_);
lean_ctor_set(v_reuseFailAlloc_1473_, 11, v_incrLoadFileName_x3f_1462_);
lean_ctor_set(v_reuseFailAlloc_1473_, 12, v_incrHeaderSaveFileName_x3f_1463_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 8, v_component_1442_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 9, v_printPrefix_1443_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 10, v_printLibDir_1444_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 11, v_useStdin_1445_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 12, v_onlyDeps_1446_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 13, v_onlySrcDeps_1447_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 14, v_depsJson_1448_);
lean_ctor_set_uint32(v_reuseFailAlloc_1473_, sizeof(void*)*13, v_trustLevel_1450_);
lean_ctor_set_uint32(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 4, v_numThreads_1451_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 15, v_jsonOutput_1457_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 16, v_printStats_1459_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*13 + 17, v_run_1460_);
v___x_1469_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
lean_object* v___x_1471_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1469_);
v___x_1471_ = v___x_1438_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1469_);
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
else
{
lean_object* v_a_1477_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
lean_dec_ref(v_opts_939_);
v_a_1477_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v___x_1435_, 1);
v___x_1481_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1482_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1481_);
lean_dec_ref(v___x_1482_);
goto v___jp_1478_;
v___jp_1478_:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_io_error_to_string(v_a_1477_);
v___x_1480_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1479_);
lean_dec_ref(v___x_1480_);
goto v___jp_1027_;
}
}
}
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1483_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6));
v___x_1484_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1483_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_a_1485_; lean_object* v___x_1486_; 
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc_n(v_a_1485_, 2);
lean_dec_ref_known(v___x_1484_, 1);
v___x_1486_ = lean_load_dynlib(v_a_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1528_; 
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1528_ == 0)
{
lean_object* v_unused_1529_; 
v_unused_1529_ = lean_ctor_get(v___x_1486_, 0);
lean_dec(v_unused_1529_);
v___x_1488_ = v___x_1486_;
v_isShared_1489_ = v_isSharedCheck_1528_;
goto v_resetjp_1487_;
}
else
{
lean_dec(v___x_1486_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1528_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v_leanOpts_1490_; lean_object* v_forwardedArgs_1491_; uint8_t v_component_1492_; uint8_t v_printPrefix_1493_; uint8_t v_printLibDir_1494_; uint8_t v_useStdin_1495_; uint8_t v_onlyDeps_1496_; uint8_t v_onlySrcDeps_1497_; uint8_t v_depsJson_1498_; lean_object* v_opts_1499_; uint32_t v_trustLevel_1500_; uint32_t v_numThreads_1501_; lean_object* v_rootDir_x3f_1502_; lean_object* v_setupFileName_x3f_1503_; lean_object* v_oleanFileName_x3f_1504_; lean_object* v_ileanFileName_x3f_1505_; lean_object* v_cFileName_x3f_1506_; lean_object* v_bcFileName_x3f_1507_; uint8_t v_jsonOutput_1508_; lean_object* v_errorOnKinds_1509_; uint8_t v_printStats_1510_; uint8_t v_run_1511_; lean_object* v_incrSaveFileName_x3f_1512_; lean_object* v_incrLoadFileName_x3f_1513_; lean_object* v_incrHeaderSaveFileName_x3f_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1527_; 
v_leanOpts_1490_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1491_ = lean_ctor_get(v_opts_939_, 1);
v_component_1492_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1493_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1494_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1495_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1496_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1497_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1498_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1499_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1500_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1501_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1502_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1503_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1504_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1505_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1506_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1507_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1508_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1509_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1510_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1511_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1512_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1513_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1514_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1516_ = v_opts_939_;
v_isShared_1517_ = v_isSharedCheck_1527_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1514_);
lean_inc(v_incrLoadFileName_x3f_1513_);
lean_inc(v_incrSaveFileName_x3f_1512_);
lean_inc(v_errorOnKinds_1509_);
lean_inc(v_bcFileName_x3f_1507_);
lean_inc(v_cFileName_x3f_1506_);
lean_inc(v_ileanFileName_x3f_1505_);
lean_inc(v_oleanFileName_x3f_1504_);
lean_inc(v_setupFileName_x3f_1503_);
lean_inc(v_rootDir_x3f_1502_);
lean_inc(v_opts_1499_);
lean_inc(v_forwardedArgs_1491_);
lean_inc(v_leanOpts_1490_);
lean_dec(v_opts_939_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1527_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1522_; 
v___x_1518_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7));
v___x_1519_ = lean_string_append(v___x_1518_, v_a_1485_);
lean_dec(v_a_1485_);
v___x_1520_ = lean_array_push(v_forwardedArgs_1491_, v___x_1519_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1520_);
v___x_1522_ = v___x_1516_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_leanOpts_1490_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___x_1520_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v_opts_1499_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v_rootDir_x3f_1502_);
lean_ctor_set(v_reuseFailAlloc_1526_, 4, v_setupFileName_x3f_1503_);
lean_ctor_set(v_reuseFailAlloc_1526_, 5, v_oleanFileName_x3f_1504_);
lean_ctor_set(v_reuseFailAlloc_1526_, 6, v_ileanFileName_x3f_1505_);
lean_ctor_set(v_reuseFailAlloc_1526_, 7, v_cFileName_x3f_1506_);
lean_ctor_set(v_reuseFailAlloc_1526_, 8, v_bcFileName_x3f_1507_);
lean_ctor_set(v_reuseFailAlloc_1526_, 9, v_errorOnKinds_1509_);
lean_ctor_set(v_reuseFailAlloc_1526_, 10, v_incrSaveFileName_x3f_1512_);
lean_ctor_set(v_reuseFailAlloc_1526_, 11, v_incrLoadFileName_x3f_1513_);
lean_ctor_set(v_reuseFailAlloc_1526_, 12, v_incrHeaderSaveFileName_x3f_1514_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 8, v_component_1492_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 9, v_printPrefix_1493_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 10, v_printLibDir_1494_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 11, v_useStdin_1495_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 12, v_onlyDeps_1496_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 13, v_onlySrcDeps_1497_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 14, v_depsJson_1498_);
lean_ctor_set_uint32(v_reuseFailAlloc_1526_, sizeof(void*)*13, v_trustLevel_1500_);
lean_ctor_set_uint32(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 4, v_numThreads_1501_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 15, v_jsonOutput_1508_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 16, v_printStats_1510_);
lean_ctor_set_uint8(v_reuseFailAlloc_1526_, sizeof(void*)*13 + 17, v_run_1511_);
v___x_1522_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1524_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1522_);
v___x_1524_ = v___x_1488_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
lean_dec(v_a_1485_);
lean_dec_ref(v_opts_939_);
v_a_1530_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1486_, 1);
v___x_1534_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1535_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1534_);
lean_dec_ref(v___x_1535_);
goto v___jp_1531_;
v___jp_1531_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_io_error_to_string(v_a_1530_);
v___x_1533_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1532_);
lean_dec_ref(v___x_1533_);
goto v___jp_1085_;
}
}
}
else
{
lean_object* v_a_1536_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec_ref(v_opts_939_);
v_a_1536_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1484_, 1);
v___x_1540_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1541_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1540_);
lean_dec_ref(v___x_1541_);
goto v___jp_1537_;
v___jp_1537_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = lean_io_error_to_string(v_a_1536_);
v___x_1539_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1538_);
lean_dec_ref(v___x_1539_);
goto v___jp_1091_;
}
}
}
}
else
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8));
v___x_1543_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1542_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1615_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1546_ = v___x_1543_;
v_isShared_1547_ = v_isSharedCheck_1615_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1543_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1615_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_fst_1549_; lean_object* v_snd_1550_; lean_object* v___y_1599_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1610_ = lean_unsigned_to_nat(0u);
v___x_1611_ = lean_string_utf8_byte_size(v_a_1544_);
v___x_1612_ = lean_box(0);
v___x_1613_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1611_, v_a_1544_, v___x_1610_, v___x_1612_);
if (lean_obj_tag(v___x_1613_) == 0)
{
v___y_1599_ = v___x_1611_;
goto v___jp_1598_;
}
else
{
lean_object* v_val_1614_; 
v_val_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_val_1614_);
lean_dec_ref_known(v___x_1613_, 1);
v___y_1599_ = v_val_1614_;
goto v___jp_1598_;
}
v___jp_1548_:
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_load_plugin(v_fst_1549_, v_snd_1550_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1593_; 
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; 
v_unused_1594_ = lean_ctor_get(v___x_1551_, 0);
lean_dec(v_unused_1594_);
v___x_1553_ = v___x_1551_;
v_isShared_1554_ = v_isSharedCheck_1593_;
goto v_resetjp_1552_;
}
else
{
lean_dec(v___x_1551_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1593_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v_leanOpts_1555_; lean_object* v_forwardedArgs_1556_; uint8_t v_component_1557_; uint8_t v_printPrefix_1558_; uint8_t v_printLibDir_1559_; uint8_t v_useStdin_1560_; uint8_t v_onlyDeps_1561_; uint8_t v_onlySrcDeps_1562_; uint8_t v_depsJson_1563_; lean_object* v_opts_1564_; uint32_t v_trustLevel_1565_; uint32_t v_numThreads_1566_; lean_object* v_rootDir_x3f_1567_; lean_object* v_setupFileName_x3f_1568_; lean_object* v_oleanFileName_x3f_1569_; lean_object* v_ileanFileName_x3f_1570_; lean_object* v_cFileName_x3f_1571_; lean_object* v_bcFileName_x3f_1572_; uint8_t v_jsonOutput_1573_; lean_object* v_errorOnKinds_1574_; uint8_t v_printStats_1575_; uint8_t v_run_1576_; lean_object* v_incrSaveFileName_x3f_1577_; lean_object* v_incrLoadFileName_x3f_1578_; lean_object* v_incrHeaderSaveFileName_x3f_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1592_; 
v_leanOpts_1555_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1556_ = lean_ctor_get(v_opts_939_, 1);
v_component_1557_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1558_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1559_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1560_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1561_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1562_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1563_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1564_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1565_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1566_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1567_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1568_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1569_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1570_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1571_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1572_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1573_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1574_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1575_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1576_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1577_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1578_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1579_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1581_ = v_opts_939_;
v_isShared_1582_ = v_isSharedCheck_1592_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1579_);
lean_inc(v_incrLoadFileName_x3f_1578_);
lean_inc(v_incrSaveFileName_x3f_1577_);
lean_inc(v_errorOnKinds_1574_);
lean_inc(v_bcFileName_x3f_1572_);
lean_inc(v_cFileName_x3f_1571_);
lean_inc(v_ileanFileName_x3f_1570_);
lean_inc(v_oleanFileName_x3f_1569_);
lean_inc(v_setupFileName_x3f_1568_);
lean_inc(v_rootDir_x3f_1567_);
lean_inc(v_opts_1564_);
lean_inc(v_forwardedArgs_1556_);
lean_inc(v_leanOpts_1555_);
lean_dec(v_opts_939_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1592_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1583_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9));
v___x_1584_ = lean_string_append(v___x_1583_, v_a_1544_);
lean_dec(v_a_1544_);
v___x_1585_ = lean_array_push(v_forwardedArgs_1556_, v___x_1584_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 1, v___x_1585_);
v___x_1587_ = v___x_1581_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_leanOpts_1555_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1591_, 2, v_opts_1564_);
lean_ctor_set(v_reuseFailAlloc_1591_, 3, v_rootDir_x3f_1567_);
lean_ctor_set(v_reuseFailAlloc_1591_, 4, v_setupFileName_x3f_1568_);
lean_ctor_set(v_reuseFailAlloc_1591_, 5, v_oleanFileName_x3f_1569_);
lean_ctor_set(v_reuseFailAlloc_1591_, 6, v_ileanFileName_x3f_1570_);
lean_ctor_set(v_reuseFailAlloc_1591_, 7, v_cFileName_x3f_1571_);
lean_ctor_set(v_reuseFailAlloc_1591_, 8, v_bcFileName_x3f_1572_);
lean_ctor_set(v_reuseFailAlloc_1591_, 9, v_errorOnKinds_1574_);
lean_ctor_set(v_reuseFailAlloc_1591_, 10, v_incrSaveFileName_x3f_1577_);
lean_ctor_set(v_reuseFailAlloc_1591_, 11, v_incrLoadFileName_x3f_1578_);
lean_ctor_set(v_reuseFailAlloc_1591_, 12, v_incrHeaderSaveFileName_x3f_1579_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 8, v_component_1557_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 9, v_printPrefix_1558_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 10, v_printLibDir_1559_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 11, v_useStdin_1560_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 12, v_onlyDeps_1561_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 13, v_onlySrcDeps_1562_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 14, v_depsJson_1563_);
lean_ctor_set_uint32(v_reuseFailAlloc_1591_, sizeof(void*)*13, v_trustLevel_1565_);
lean_ctor_set_uint32(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 4, v_numThreads_1566_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 15, v_jsonOutput_1573_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 16, v_printStats_1575_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 17, v_run_1576_);
v___x_1587_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1589_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v___x_1587_);
v___x_1589_ = v___x_1553_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1587_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec(v_a_1544_);
lean_dec_ref(v_opts_939_);
v_a_1595_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1551_, 1);
v___x_1596_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1597_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1596_);
lean_dec_ref(v___x_1597_);
v___y_1107_ = v_a_1595_;
goto v___jp_1106_;
}
}
v___jp_1598_:
{
lean_object* v___x_1600_; uint8_t v_decide_1601_; 
v___x_1600_ = lean_string_utf8_byte_size(v_a_1544_);
v_decide_1601_ = lean_nat_dec_eq(v___y_1599_, v___x_1600_);
if (v_decide_1601_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1602_ = lean_unsigned_to_nat(0u);
v___x_1603_ = lean_string_utf8_next_fast(v_a_1544_, v___y_1599_);
v___x_1604_ = lean_string_utf8_extract_fast(v_a_1544_, v___x_1602_, v___y_1599_);
lean_dec(v___y_1599_);
v___x_1605_ = lean_string_utf8_extract_fast(v_a_1544_, v___x_1603_, v___x_1600_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set_tag(v___x_1546_, 1);
lean_ctor_set(v___x_1546_, 0, v___x_1605_);
v___x_1607_ = v___x_1546_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
v_fst_1549_ = v___x_1604_;
v_snd_1550_ = v___x_1607_;
goto v___jp_1548_;
}
}
else
{
lean_object* v___x_1609_; 
lean_dec(v___y_1599_);
lean_del_object(v___x_1546_);
v___x_1609_ = lean_box(0);
lean_inc(v_a_1544_);
v_fst_1549_ = v_a_1544_;
v_snd_1550_ = v___x_1609_;
goto v___jp_1548_;
}
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec_ref(v_opts_939_);
v_a_1616_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1543_, 1);
v___x_1620_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1621_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1620_);
lean_dec_ref(v___x_1621_);
goto v___jp_1617_;
v___jp_1617_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = lean_io_error_to_string(v_a_1616_);
v___x_1619_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1618_);
lean_dec_ref(v___x_1619_);
goto v___jp_1103_;
}
}
}
}
else
{
uint8_t v___x_1622_; 
v___x_1622_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_1622_ == 0)
{
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10));
v___x_1624_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1623_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1633_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1627_ = v___x_1624_;
v_isShared_1628_ = v_isSharedCheck_1633_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1624_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1633_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1629_; lean_object* v___x_1631_; 
v___x_1629_ = lean_internal_enable_debug(v_a_1625_);
lean_dec(v_a_1625_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 0, v_opts_939_);
v___x_1631_ = v___x_1627_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_opts_939_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref(v_opts_939_);
v_a_1634_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1638_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1639_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1638_);
lean_dec_ref(v___x_1639_);
goto v___jp_1635_;
v___jp_1635_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = lean_io_error_to_string(v_a_1634_);
v___x_1637_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1636_);
lean_dec_ref(v___x_1637_);
goto v___jp_1113_;
}
}
}
}
}
else
{
lean_object* v_leanOpts_1640_; lean_object* v_forwardedArgs_1641_; uint8_t v_component_1642_; uint8_t v_printPrefix_1643_; uint8_t v_printLibDir_1644_; uint8_t v_useStdin_1645_; uint8_t v_onlyDeps_1646_; uint8_t v_onlySrcDeps_1647_; uint8_t v_depsJson_1648_; lean_object* v_opts_1649_; uint32_t v_trustLevel_1650_; uint32_t v_numThreads_1651_; lean_object* v_rootDir_x3f_1652_; lean_object* v_setupFileName_x3f_1653_; lean_object* v_oleanFileName_x3f_1654_; lean_object* v_ileanFileName_x3f_1655_; lean_object* v_cFileName_x3f_1656_; lean_object* v_bcFileName_x3f_1657_; uint8_t v_jsonOutput_1658_; lean_object* v_errorOnKinds_1659_; uint8_t v_printStats_1660_; uint8_t v_run_1661_; lean_object* v_incrSaveFileName_x3f_1662_; lean_object* v_incrLoadFileName_x3f_1663_; lean_object* v_incrHeaderSaveFileName_x3f_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1674_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1640_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1641_ = lean_ctor_get(v_opts_939_, 1);
v_component_1642_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1643_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1644_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1645_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1646_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1647_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1648_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1649_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1650_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1651_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1652_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1653_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1654_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1655_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1656_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1657_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1658_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1659_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1660_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1661_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1662_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1663_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1664_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1666_ = v_opts_939_;
v_isShared_1667_ = v_isSharedCheck_1674_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1664_);
lean_inc(v_incrLoadFileName_x3f_1663_);
lean_inc(v_incrSaveFileName_x3f_1662_);
lean_inc(v_errorOnKinds_1659_);
lean_inc(v_bcFileName_x3f_1657_);
lean_inc(v_cFileName_x3f_1656_);
lean_inc(v_ileanFileName_x3f_1655_);
lean_inc(v_oleanFileName_x3f_1654_);
lean_inc(v_setupFileName_x3f_1653_);
lean_inc(v_rootDir_x3f_1652_);
lean_inc(v_opts_1649_);
lean_inc(v_forwardedArgs_1641_);
lean_inc(v_leanOpts_1640_);
lean_dec(v_opts_939_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1674_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1671_; 
v___x_1668_ = l_Lean_profiler;
v___x_1669_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_1640_, v___x_1668_, v___x_1220_);
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 0, v___x_1669_);
v___x_1671_ = v___x_1666_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1669_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_forwardedArgs_1641_);
lean_ctor_set(v_reuseFailAlloc_1673_, 2, v_opts_1649_);
lean_ctor_set(v_reuseFailAlloc_1673_, 3, v_rootDir_x3f_1652_);
lean_ctor_set(v_reuseFailAlloc_1673_, 4, v_setupFileName_x3f_1653_);
lean_ctor_set(v_reuseFailAlloc_1673_, 5, v_oleanFileName_x3f_1654_);
lean_ctor_set(v_reuseFailAlloc_1673_, 6, v_ileanFileName_x3f_1655_);
lean_ctor_set(v_reuseFailAlloc_1673_, 7, v_cFileName_x3f_1656_);
lean_ctor_set(v_reuseFailAlloc_1673_, 8, v_bcFileName_x3f_1657_);
lean_ctor_set(v_reuseFailAlloc_1673_, 9, v_errorOnKinds_1659_);
lean_ctor_set(v_reuseFailAlloc_1673_, 10, v_incrSaveFileName_x3f_1662_);
lean_ctor_set(v_reuseFailAlloc_1673_, 11, v_incrLoadFileName_x3f_1663_);
lean_ctor_set(v_reuseFailAlloc_1673_, 12, v_incrHeaderSaveFileName_x3f_1664_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 8, v_component_1642_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 9, v_printPrefix_1643_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 10, v_printLibDir_1644_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 11, v_useStdin_1645_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 12, v_onlyDeps_1646_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 13, v_onlySrcDeps_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 14, v_depsJson_1648_);
lean_ctor_set_uint32(v_reuseFailAlloc_1673_, sizeof(void*)*13, v_trustLevel_1650_);
lean_ctor_set_uint32(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 4, v_numThreads_1651_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 15, v_jsonOutput_1658_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 16, v_printStats_1660_);
lean_ctor_set_uint8(v_reuseFailAlloc_1673_, sizeof(void*)*13 + 17, v_run_1661_);
v___x_1671_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1672_; 
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
return v___x_1672_;
}
}
}
}
else
{
lean_object* v_leanOpts_1675_; lean_object* v_forwardedArgs_1676_; uint8_t v_printPrefix_1677_; uint8_t v_printLibDir_1678_; uint8_t v_useStdin_1679_; uint8_t v_onlyDeps_1680_; uint8_t v_onlySrcDeps_1681_; uint8_t v_depsJson_1682_; lean_object* v_opts_1683_; uint32_t v_trustLevel_1684_; uint32_t v_numThreads_1685_; lean_object* v_rootDir_x3f_1686_; lean_object* v_setupFileName_x3f_1687_; lean_object* v_oleanFileName_x3f_1688_; lean_object* v_ileanFileName_x3f_1689_; lean_object* v_cFileName_x3f_1690_; lean_object* v_bcFileName_x3f_1691_; uint8_t v_jsonOutput_1692_; lean_object* v_errorOnKinds_1693_; uint8_t v_printStats_1694_; uint8_t v_run_1695_; lean_object* v_incrSaveFileName_x3f_1696_; lean_object* v_incrLoadFileName_x3f_1697_; lean_object* v_incrHeaderSaveFileName_x3f_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1707_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1675_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1676_ = lean_ctor_get(v_opts_939_, 1);
v_printPrefix_1677_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1678_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1679_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1680_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1681_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1682_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1683_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1684_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1685_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1686_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1687_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1688_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1689_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1690_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1691_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1692_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1693_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1694_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1695_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1696_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1697_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1698_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1700_ = v_opts_939_;
v_isShared_1701_ = v_isSharedCheck_1707_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1698_);
lean_inc(v_incrLoadFileName_x3f_1697_);
lean_inc(v_incrSaveFileName_x3f_1696_);
lean_inc(v_errorOnKinds_1693_);
lean_inc(v_bcFileName_x3f_1691_);
lean_inc(v_cFileName_x3f_1690_);
lean_inc(v_ileanFileName_x3f_1689_);
lean_inc(v_oleanFileName_x3f_1688_);
lean_inc(v_setupFileName_x3f_1687_);
lean_inc(v_rootDir_x3f_1686_);
lean_inc(v_opts_1683_);
lean_inc(v_forwardedArgs_1676_);
lean_inc(v_leanOpts_1675_);
lean_dec(v_opts_939_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1707_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
uint8_t v___x_1702_; lean_object* v___x_1704_; 
v___x_1702_ = 2;
if (v_isShared_1701_ == 0)
{
v___x_1704_ = v___x_1700_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_leanOpts_1675_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_forwardedArgs_1676_);
lean_ctor_set(v_reuseFailAlloc_1706_, 2, v_opts_1683_);
lean_ctor_set(v_reuseFailAlloc_1706_, 3, v_rootDir_x3f_1686_);
lean_ctor_set(v_reuseFailAlloc_1706_, 4, v_setupFileName_x3f_1687_);
lean_ctor_set(v_reuseFailAlloc_1706_, 5, v_oleanFileName_x3f_1688_);
lean_ctor_set(v_reuseFailAlloc_1706_, 6, v_ileanFileName_x3f_1689_);
lean_ctor_set(v_reuseFailAlloc_1706_, 7, v_cFileName_x3f_1690_);
lean_ctor_set(v_reuseFailAlloc_1706_, 8, v_bcFileName_x3f_1691_);
lean_ctor_set(v_reuseFailAlloc_1706_, 9, v_errorOnKinds_1693_);
lean_ctor_set(v_reuseFailAlloc_1706_, 10, v_incrSaveFileName_x3f_1696_);
lean_ctor_set(v_reuseFailAlloc_1706_, 11, v_incrLoadFileName_x3f_1697_);
lean_ctor_set(v_reuseFailAlloc_1706_, 12, v_incrHeaderSaveFileName_x3f_1698_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 9, v_printPrefix_1677_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 10, v_printLibDir_1678_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 11, v_useStdin_1679_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 12, v_onlyDeps_1680_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 13, v_onlySrcDeps_1681_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 14, v_depsJson_1682_);
lean_ctor_set_uint32(v_reuseFailAlloc_1706_, sizeof(void*)*13, v_trustLevel_1684_);
lean_ctor_set_uint32(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 4, v_numThreads_1685_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 15, v_jsonOutput_1692_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 16, v_printStats_1694_);
lean_ctor_set_uint8(v_reuseFailAlloc_1706_, sizeof(void*)*13 + 17, v_run_1695_);
v___x_1704_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1705_; 
lean_ctor_set_uint8(v___x_1704_, sizeof(void*)*13 + 8, v___x_1702_);
v___x_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
return v___x_1705_;
}
}
}
}
else
{
lean_object* v_leanOpts_1708_; lean_object* v_forwardedArgs_1709_; uint8_t v_printPrefix_1710_; uint8_t v_printLibDir_1711_; uint8_t v_useStdin_1712_; uint8_t v_onlyDeps_1713_; uint8_t v_onlySrcDeps_1714_; uint8_t v_depsJson_1715_; lean_object* v_opts_1716_; uint32_t v_trustLevel_1717_; uint32_t v_numThreads_1718_; lean_object* v_rootDir_x3f_1719_; lean_object* v_setupFileName_x3f_1720_; lean_object* v_oleanFileName_x3f_1721_; lean_object* v_ileanFileName_x3f_1722_; lean_object* v_cFileName_x3f_1723_; lean_object* v_bcFileName_x3f_1724_; uint8_t v_jsonOutput_1725_; lean_object* v_errorOnKinds_1726_; uint8_t v_printStats_1727_; uint8_t v_run_1728_; lean_object* v_incrSaveFileName_x3f_1729_; lean_object* v_incrLoadFileName_x3f_1730_; lean_object* v_incrHeaderSaveFileName_x3f_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1740_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1708_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1709_ = lean_ctor_get(v_opts_939_, 1);
v_printPrefix_1710_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1711_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1712_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1713_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1714_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1715_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1716_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1717_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1718_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1719_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1720_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1721_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1722_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1723_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1724_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1725_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1726_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1727_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1728_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1729_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1730_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1731_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1733_ = v_opts_939_;
v_isShared_1734_ = v_isSharedCheck_1740_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1731_);
lean_inc(v_incrLoadFileName_x3f_1730_);
lean_inc(v_incrSaveFileName_x3f_1729_);
lean_inc(v_errorOnKinds_1726_);
lean_inc(v_bcFileName_x3f_1724_);
lean_inc(v_cFileName_x3f_1723_);
lean_inc(v_ileanFileName_x3f_1722_);
lean_inc(v_oleanFileName_x3f_1721_);
lean_inc(v_setupFileName_x3f_1720_);
lean_inc(v_rootDir_x3f_1719_);
lean_inc(v_opts_1716_);
lean_inc(v_forwardedArgs_1709_);
lean_inc(v_leanOpts_1708_);
lean_dec(v_opts_939_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1740_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
uint8_t v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = 1;
if (v_isShared_1734_ == 0)
{
v___x_1737_ = v___x_1733_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_leanOpts_1708_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v_forwardedArgs_1709_);
lean_ctor_set(v_reuseFailAlloc_1739_, 2, v_opts_1716_);
lean_ctor_set(v_reuseFailAlloc_1739_, 3, v_rootDir_x3f_1719_);
lean_ctor_set(v_reuseFailAlloc_1739_, 4, v_setupFileName_x3f_1720_);
lean_ctor_set(v_reuseFailAlloc_1739_, 5, v_oleanFileName_x3f_1721_);
lean_ctor_set(v_reuseFailAlloc_1739_, 6, v_ileanFileName_x3f_1722_);
lean_ctor_set(v_reuseFailAlloc_1739_, 7, v_cFileName_x3f_1723_);
lean_ctor_set(v_reuseFailAlloc_1739_, 8, v_bcFileName_x3f_1724_);
lean_ctor_set(v_reuseFailAlloc_1739_, 9, v_errorOnKinds_1726_);
lean_ctor_set(v_reuseFailAlloc_1739_, 10, v_incrSaveFileName_x3f_1729_);
lean_ctor_set(v_reuseFailAlloc_1739_, 11, v_incrLoadFileName_x3f_1730_);
lean_ctor_set(v_reuseFailAlloc_1739_, 12, v_incrHeaderSaveFileName_x3f_1731_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 9, v_printPrefix_1710_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 10, v_printLibDir_1711_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 11, v_useStdin_1712_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 12, v_onlyDeps_1713_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 13, v_onlySrcDeps_1714_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 14, v_depsJson_1715_);
lean_ctor_set_uint32(v_reuseFailAlloc_1739_, sizeof(void*)*13, v_trustLevel_1717_);
lean_ctor_set_uint32(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 4, v_numThreads_1718_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 15, v_jsonOutput_1725_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 16, v_printStats_1727_);
lean_ctor_set_uint8(v_reuseFailAlloc_1739_, sizeof(void*)*13 + 17, v_run_1728_);
v___x_1737_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; 
lean_ctor_set_uint8(v___x_1737_, sizeof(void*)*13 + 8, v___x_1735_);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
return v___x_1738_;
}
}
}
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11));
v___x_1742_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1741_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v_leanOpts_1744_; lean_object* v_forwardedArgs_1745_; uint8_t v_component_1746_; uint8_t v_printPrefix_1747_; uint8_t v_printLibDir_1748_; uint8_t v_useStdin_1749_; uint8_t v_onlyDeps_1750_; uint8_t v_onlySrcDeps_1751_; uint8_t v_depsJson_1752_; lean_object* v_opts_1753_; uint32_t v_trustLevel_1754_; uint32_t v_numThreads_1755_; lean_object* v_rootDir_x3f_1756_; lean_object* v_setupFileName_x3f_1757_; lean_object* v_oleanFileName_x3f_1758_; lean_object* v_ileanFileName_x3f_1759_; lean_object* v_cFileName_x3f_1760_; lean_object* v_bcFileName_x3f_1761_; uint8_t v_jsonOutput_1762_; lean_object* v_errorOnKinds_1763_; uint8_t v_printStats_1764_; uint8_t v_run_1765_; lean_object* v_incrSaveFileName_x3f_1766_; lean_object* v_incrLoadFileName_x3f_1767_; lean_object* v_incrHeaderSaveFileName_x3f_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1793_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v_leanOpts_1744_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1745_ = lean_ctor_get(v_opts_939_, 1);
v_component_1746_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1747_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1748_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1749_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1750_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1751_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1752_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1753_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1754_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1755_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1756_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1757_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1758_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1759_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1760_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1761_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1762_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1763_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1764_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1765_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1766_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1767_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1768_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1793_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1770_ = v_opts_939_;
v_isShared_1771_ = v_isSharedCheck_1793_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1768_);
lean_inc(v_incrLoadFileName_x3f_1767_);
lean_inc(v_incrSaveFileName_x3f_1766_);
lean_inc(v_errorOnKinds_1763_);
lean_inc(v_bcFileName_x3f_1761_);
lean_inc(v_cFileName_x3f_1760_);
lean_inc(v_ileanFileName_x3f_1759_);
lean_inc(v_oleanFileName_x3f_1758_);
lean_inc(v_setupFileName_x3f_1757_);
lean_inc(v_rootDir_x3f_1756_);
lean_inc(v_opts_1753_);
lean_inc(v_forwardedArgs_1745_);
lean_inc(v_leanOpts_1744_);
lean_dec(v_opts_939_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1793_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; 
lean_inc(v_a_1743_);
v___x_1772_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_leanOpts_1744_, v_a_1743_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1786_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1775_ = v___x_1772_;
v_isShared_1776_ = v_isSharedCheck_1786_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1772_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1786_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1781_; 
v___x_1777_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12));
v___x_1778_ = lean_string_append(v___x_1777_, v_a_1743_);
lean_dec(v_a_1743_);
v___x_1779_ = lean_array_push(v_forwardedArgs_1745_, v___x_1778_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 1, v___x_1779_);
lean_ctor_set(v___x_1770_, 0, v_a_1773_);
v___x_1781_ = v___x_1770_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1773_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v___x_1779_);
lean_ctor_set(v_reuseFailAlloc_1785_, 2, v_opts_1753_);
lean_ctor_set(v_reuseFailAlloc_1785_, 3, v_rootDir_x3f_1756_);
lean_ctor_set(v_reuseFailAlloc_1785_, 4, v_setupFileName_x3f_1757_);
lean_ctor_set(v_reuseFailAlloc_1785_, 5, v_oleanFileName_x3f_1758_);
lean_ctor_set(v_reuseFailAlloc_1785_, 6, v_ileanFileName_x3f_1759_);
lean_ctor_set(v_reuseFailAlloc_1785_, 7, v_cFileName_x3f_1760_);
lean_ctor_set(v_reuseFailAlloc_1785_, 8, v_bcFileName_x3f_1761_);
lean_ctor_set(v_reuseFailAlloc_1785_, 9, v_errorOnKinds_1763_);
lean_ctor_set(v_reuseFailAlloc_1785_, 10, v_incrSaveFileName_x3f_1766_);
lean_ctor_set(v_reuseFailAlloc_1785_, 11, v_incrLoadFileName_x3f_1767_);
lean_ctor_set(v_reuseFailAlloc_1785_, 12, v_incrHeaderSaveFileName_x3f_1768_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 8, v_component_1746_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 9, v_printPrefix_1747_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 10, v_printLibDir_1748_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 11, v_useStdin_1749_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 12, v_onlyDeps_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 13, v_onlySrcDeps_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 14, v_depsJson_1752_);
lean_ctor_set_uint32(v_reuseFailAlloc_1785_, sizeof(void*)*13, v_trustLevel_1754_);
lean_ctor_set_uint32(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 4, v_numThreads_1755_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 15, v_jsonOutput_1762_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 16, v_printStats_1764_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*13 + 17, v_run_1765_);
v___x_1781_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1783_; 
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 0, v___x_1781_);
v___x_1783_ = v___x_1775_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
lean_del_object(v___x_1770_);
lean_dec(v_incrHeaderSaveFileName_x3f_1768_);
lean_dec(v_incrLoadFileName_x3f_1767_);
lean_dec(v_incrSaveFileName_x3f_1766_);
lean_dec_ref(v_errorOnKinds_1763_);
lean_dec(v_bcFileName_x3f_1761_);
lean_dec(v_cFileName_x3f_1760_);
lean_dec(v_ileanFileName_x3f_1759_);
lean_dec(v_oleanFileName_x3f_1758_);
lean_dec(v_setupFileName_x3f_1757_);
lean_dec(v_rootDir_x3f_1756_);
lean_dec_ref(v_opts_1753_);
lean_dec_ref(v_forwardedArgs_1745_);
lean_dec(v_a_1743_);
v_a_1787_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1791_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1792_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1791_);
lean_dec_ref(v___x_1792_);
goto v___jp_1788_;
v___jp_1788_:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_io_error_to_string(v_a_1787_);
v___x_1790_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1789_);
lean_dec_ref(v___x_1790_);
goto v___jp_1015_;
}
}
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
lean_dec_ref(v_opts_939_);
v_a_1794_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1742_, 1);
v___x_1798_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1799_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1798_);
lean_dec_ref(v___x_1799_);
goto v___jp_1795_;
v___jp_1795_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = lean_io_error_to_string(v_a_1794_);
v___x_1797_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1796_);
lean_dec_ref(v___x_1797_);
goto v___jp_1021_;
}
}
}
}
else
{
lean_object* v_leanOpts_1800_; lean_object* v_forwardedArgs_1801_; uint8_t v_component_1802_; uint8_t v_printPrefix_1803_; uint8_t v_useStdin_1804_; uint8_t v_onlyDeps_1805_; uint8_t v_onlySrcDeps_1806_; uint8_t v_depsJson_1807_; lean_object* v_opts_1808_; uint32_t v_trustLevel_1809_; uint32_t v_numThreads_1810_; lean_object* v_rootDir_x3f_1811_; lean_object* v_setupFileName_x3f_1812_; lean_object* v_oleanFileName_x3f_1813_; lean_object* v_ileanFileName_x3f_1814_; lean_object* v_cFileName_x3f_1815_; lean_object* v_bcFileName_x3f_1816_; uint8_t v_jsonOutput_1817_; lean_object* v_errorOnKinds_1818_; uint8_t v_printStats_1819_; uint8_t v_run_1820_; lean_object* v_incrSaveFileName_x3f_1821_; lean_object* v_incrLoadFileName_x3f_1822_; lean_object* v_incrHeaderSaveFileName_x3f_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1831_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1800_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1801_ = lean_ctor_get(v_opts_939_, 1);
v_component_1802_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1803_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_useStdin_1804_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1805_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1806_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1807_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1808_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1809_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1810_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1811_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1812_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1813_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1814_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1815_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1816_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1817_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1818_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1819_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1820_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1821_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1822_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1823_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1825_ = v_opts_939_;
v_isShared_1826_ = v_isSharedCheck_1831_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1823_);
lean_inc(v_incrLoadFileName_x3f_1822_);
lean_inc(v_incrSaveFileName_x3f_1821_);
lean_inc(v_errorOnKinds_1818_);
lean_inc(v_bcFileName_x3f_1816_);
lean_inc(v_cFileName_x3f_1815_);
lean_inc(v_ileanFileName_x3f_1814_);
lean_inc(v_oleanFileName_x3f_1813_);
lean_inc(v_setupFileName_x3f_1812_);
lean_inc(v_rootDir_x3f_1811_);
lean_inc(v_opts_1808_);
lean_inc(v_forwardedArgs_1801_);
lean_inc(v_leanOpts_1800_);
lean_dec(v_opts_939_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1831_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_leanOpts_1800_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_forwardedArgs_1801_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_opts_1808_);
lean_ctor_set(v_reuseFailAlloc_1830_, 3, v_rootDir_x3f_1811_);
lean_ctor_set(v_reuseFailAlloc_1830_, 4, v_setupFileName_x3f_1812_);
lean_ctor_set(v_reuseFailAlloc_1830_, 5, v_oleanFileName_x3f_1813_);
lean_ctor_set(v_reuseFailAlloc_1830_, 6, v_ileanFileName_x3f_1814_);
lean_ctor_set(v_reuseFailAlloc_1830_, 7, v_cFileName_x3f_1815_);
lean_ctor_set(v_reuseFailAlloc_1830_, 8, v_bcFileName_x3f_1816_);
lean_ctor_set(v_reuseFailAlloc_1830_, 9, v_errorOnKinds_1818_);
lean_ctor_set(v_reuseFailAlloc_1830_, 10, v_incrSaveFileName_x3f_1821_);
lean_ctor_set(v_reuseFailAlloc_1830_, 11, v_incrLoadFileName_x3f_1822_);
lean_ctor_set(v_reuseFailAlloc_1830_, 12, v_incrHeaderSaveFileName_x3f_1823_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 8, v_component_1802_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 9, v_printPrefix_1803_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 11, v_useStdin_1804_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 12, v_onlyDeps_1805_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 13, v_onlySrcDeps_1806_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 14, v_depsJson_1807_);
lean_ctor_set_uint32(v_reuseFailAlloc_1830_, sizeof(void*)*13, v_trustLevel_1809_);
lean_ctor_set_uint32(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 4, v_numThreads_1810_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 15, v_jsonOutput_1817_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 16, v_printStats_1819_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*13 + 17, v_run_1820_);
v___x_1828_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
lean_object* v___x_1829_; 
lean_ctor_set_uint8(v___x_1828_, sizeof(void*)*13 + 10, v___x_1212_);
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
return v___x_1829_;
}
}
}
}
else
{
lean_object* v_leanOpts_1832_; lean_object* v_forwardedArgs_1833_; uint8_t v_component_1834_; uint8_t v_printLibDir_1835_; uint8_t v_useStdin_1836_; uint8_t v_onlyDeps_1837_; uint8_t v_onlySrcDeps_1838_; uint8_t v_depsJson_1839_; lean_object* v_opts_1840_; uint32_t v_trustLevel_1841_; uint32_t v_numThreads_1842_; lean_object* v_rootDir_x3f_1843_; lean_object* v_setupFileName_x3f_1844_; lean_object* v_oleanFileName_x3f_1845_; lean_object* v_ileanFileName_x3f_1846_; lean_object* v_cFileName_x3f_1847_; lean_object* v_bcFileName_x3f_1848_; uint8_t v_jsonOutput_1849_; lean_object* v_errorOnKinds_1850_; uint8_t v_printStats_1851_; uint8_t v_run_1852_; lean_object* v_incrSaveFileName_x3f_1853_; lean_object* v_incrLoadFileName_x3f_1854_; lean_object* v_incrHeaderSaveFileName_x3f_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1863_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1832_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1833_ = lean_ctor_get(v_opts_939_, 1);
v_component_1834_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printLibDir_1835_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1836_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1837_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1838_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1839_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1840_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1841_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1842_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1843_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1844_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1845_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1846_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1847_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1848_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1849_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1850_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1851_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1852_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1853_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1854_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1855_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1857_ = v_opts_939_;
v_isShared_1858_ = v_isSharedCheck_1863_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1855_);
lean_inc(v_incrLoadFileName_x3f_1854_);
lean_inc(v_incrSaveFileName_x3f_1853_);
lean_inc(v_errorOnKinds_1850_);
lean_inc(v_bcFileName_x3f_1848_);
lean_inc(v_cFileName_x3f_1847_);
lean_inc(v_ileanFileName_x3f_1846_);
lean_inc(v_oleanFileName_x3f_1845_);
lean_inc(v_setupFileName_x3f_1844_);
lean_inc(v_rootDir_x3f_1843_);
lean_inc(v_opts_1840_);
lean_inc(v_forwardedArgs_1833_);
lean_inc(v_leanOpts_1832_);
lean_dec(v_opts_939_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1863_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_leanOpts_1832_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v_forwardedArgs_1833_);
lean_ctor_set(v_reuseFailAlloc_1862_, 2, v_opts_1840_);
lean_ctor_set(v_reuseFailAlloc_1862_, 3, v_rootDir_x3f_1843_);
lean_ctor_set(v_reuseFailAlloc_1862_, 4, v_setupFileName_x3f_1844_);
lean_ctor_set(v_reuseFailAlloc_1862_, 5, v_oleanFileName_x3f_1845_);
lean_ctor_set(v_reuseFailAlloc_1862_, 6, v_ileanFileName_x3f_1846_);
lean_ctor_set(v_reuseFailAlloc_1862_, 7, v_cFileName_x3f_1847_);
lean_ctor_set(v_reuseFailAlloc_1862_, 8, v_bcFileName_x3f_1848_);
lean_ctor_set(v_reuseFailAlloc_1862_, 9, v_errorOnKinds_1850_);
lean_ctor_set(v_reuseFailAlloc_1862_, 10, v_incrSaveFileName_x3f_1853_);
lean_ctor_set(v_reuseFailAlloc_1862_, 11, v_incrLoadFileName_x3f_1854_);
lean_ctor_set(v_reuseFailAlloc_1862_, 12, v_incrHeaderSaveFileName_x3f_1855_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 8, v_component_1834_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 10, v_printLibDir_1835_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 11, v_useStdin_1836_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 12, v_onlyDeps_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 13, v_onlySrcDeps_1838_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 14, v_depsJson_1839_);
lean_ctor_set_uint32(v_reuseFailAlloc_1862_, sizeof(void*)*13, v_trustLevel_1841_);
lean_ctor_set_uint32(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 4, v_numThreads_1842_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 15, v_jsonOutput_1849_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 16, v_printStats_1851_);
lean_ctor_set_uint8(v_reuseFailAlloc_1862_, sizeof(void*)*13 + 17, v_run_1852_);
v___x_1860_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1861_; 
lean_ctor_set_uint8(v___x_1860_, sizeof(void*)*13 + 9, v___x_1210_);
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1860_);
return v___x_1861_;
}
}
}
}
else
{
lean_object* v_leanOpts_1864_; lean_object* v_forwardedArgs_1865_; uint8_t v_component_1866_; uint8_t v_printPrefix_1867_; uint8_t v_printLibDir_1868_; uint8_t v_useStdin_1869_; uint8_t v_onlyDeps_1870_; uint8_t v_onlySrcDeps_1871_; uint8_t v_depsJson_1872_; lean_object* v_opts_1873_; uint32_t v_trustLevel_1874_; uint32_t v_numThreads_1875_; lean_object* v_rootDir_x3f_1876_; lean_object* v_setupFileName_x3f_1877_; lean_object* v_oleanFileName_x3f_1878_; lean_object* v_ileanFileName_x3f_1879_; lean_object* v_cFileName_x3f_1880_; lean_object* v_bcFileName_x3f_1881_; uint8_t v_jsonOutput_1882_; lean_object* v_errorOnKinds_1883_; uint8_t v_run_1884_; lean_object* v_incrSaveFileName_x3f_1885_; lean_object* v_incrLoadFileName_x3f_1886_; lean_object* v_incrHeaderSaveFileName_x3f_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1895_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1864_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1865_ = lean_ctor_get(v_opts_939_, 1);
v_component_1866_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1867_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1868_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1869_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1870_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1871_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1872_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1873_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1874_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1875_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1876_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1877_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1878_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1879_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1880_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1881_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1882_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1883_ = lean_ctor_get(v_opts_939_, 9);
v_run_1884_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1885_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1886_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1887_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1889_ = v_opts_939_;
v_isShared_1890_ = v_isSharedCheck_1895_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1887_);
lean_inc(v_incrLoadFileName_x3f_1886_);
lean_inc(v_incrSaveFileName_x3f_1885_);
lean_inc(v_errorOnKinds_1883_);
lean_inc(v_bcFileName_x3f_1881_);
lean_inc(v_cFileName_x3f_1880_);
lean_inc(v_ileanFileName_x3f_1879_);
lean_inc(v_oleanFileName_x3f_1878_);
lean_inc(v_setupFileName_x3f_1877_);
lean_inc(v_rootDir_x3f_1876_);
lean_inc(v_opts_1873_);
lean_inc(v_forwardedArgs_1865_);
lean_inc(v_leanOpts_1864_);
lean_dec(v_opts_939_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1895_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_leanOpts_1864_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v_forwardedArgs_1865_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_opts_1873_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v_rootDir_x3f_1876_);
lean_ctor_set(v_reuseFailAlloc_1894_, 4, v_setupFileName_x3f_1877_);
lean_ctor_set(v_reuseFailAlloc_1894_, 5, v_oleanFileName_x3f_1878_);
lean_ctor_set(v_reuseFailAlloc_1894_, 6, v_ileanFileName_x3f_1879_);
lean_ctor_set(v_reuseFailAlloc_1894_, 7, v_cFileName_x3f_1880_);
lean_ctor_set(v_reuseFailAlloc_1894_, 8, v_bcFileName_x3f_1881_);
lean_ctor_set(v_reuseFailAlloc_1894_, 9, v_errorOnKinds_1883_);
lean_ctor_set(v_reuseFailAlloc_1894_, 10, v_incrSaveFileName_x3f_1885_);
lean_ctor_set(v_reuseFailAlloc_1894_, 11, v_incrLoadFileName_x3f_1886_);
lean_ctor_set(v_reuseFailAlloc_1894_, 12, v_incrHeaderSaveFileName_x3f_1887_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 8, v_component_1866_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 9, v_printPrefix_1867_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 10, v_printLibDir_1868_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 11, v_useStdin_1869_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 12, v_onlyDeps_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 13, v_onlySrcDeps_1871_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 14, v_depsJson_1872_);
lean_ctor_set_uint32(v_reuseFailAlloc_1894_, sizeof(void*)*13, v_trustLevel_1874_);
lean_ctor_set_uint32(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 4, v_numThreads_1875_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 15, v_jsonOutput_1882_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*13 + 17, v_run_1884_);
v___x_1892_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1893_; 
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*13 + 16, v___x_1208_);
v___x_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
return v___x_1893_;
}
}
}
}
else
{
lean_object* v_leanOpts_1896_; lean_object* v_forwardedArgs_1897_; uint8_t v_component_1898_; uint8_t v_printPrefix_1899_; uint8_t v_printLibDir_1900_; uint8_t v_useStdin_1901_; uint8_t v_onlyDeps_1902_; uint8_t v_onlySrcDeps_1903_; uint8_t v_depsJson_1904_; lean_object* v_opts_1905_; uint32_t v_trustLevel_1906_; uint32_t v_numThreads_1907_; lean_object* v_rootDir_x3f_1908_; lean_object* v_setupFileName_x3f_1909_; lean_object* v_oleanFileName_x3f_1910_; lean_object* v_ileanFileName_x3f_1911_; lean_object* v_cFileName_x3f_1912_; lean_object* v_bcFileName_x3f_1913_; lean_object* v_errorOnKinds_1914_; uint8_t v_printStats_1915_; uint8_t v_run_1916_; lean_object* v_incrSaveFileName_x3f_1917_; lean_object* v_incrLoadFileName_x3f_1918_; lean_object* v_incrHeaderSaveFileName_x3f_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1927_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1896_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1897_ = lean_ctor_get(v_opts_939_, 1);
v_component_1898_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1899_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1900_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1901_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1902_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1903_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1904_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1905_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1906_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1907_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1908_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1909_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1910_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1911_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1912_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1913_ = lean_ctor_get(v_opts_939_, 8);
v_errorOnKinds_1914_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1915_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1916_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1917_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1918_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1919_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1921_ = v_opts_939_;
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1919_);
lean_inc(v_incrLoadFileName_x3f_1918_);
lean_inc(v_incrSaveFileName_x3f_1917_);
lean_inc(v_errorOnKinds_1914_);
lean_inc(v_bcFileName_x3f_1913_);
lean_inc(v_cFileName_x3f_1912_);
lean_inc(v_ileanFileName_x3f_1911_);
lean_inc(v_oleanFileName_x3f_1910_);
lean_inc(v_setupFileName_x3f_1909_);
lean_inc(v_rootDir_x3f_1908_);
lean_inc(v_opts_1905_);
lean_inc(v_forwardedArgs_1897_);
lean_inc(v_leanOpts_1896_);
lean_dec(v_opts_939_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_leanOpts_1896_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v_forwardedArgs_1897_);
lean_ctor_set(v_reuseFailAlloc_1926_, 2, v_opts_1905_);
lean_ctor_set(v_reuseFailAlloc_1926_, 3, v_rootDir_x3f_1908_);
lean_ctor_set(v_reuseFailAlloc_1926_, 4, v_setupFileName_x3f_1909_);
lean_ctor_set(v_reuseFailAlloc_1926_, 5, v_oleanFileName_x3f_1910_);
lean_ctor_set(v_reuseFailAlloc_1926_, 6, v_ileanFileName_x3f_1911_);
lean_ctor_set(v_reuseFailAlloc_1926_, 7, v_cFileName_x3f_1912_);
lean_ctor_set(v_reuseFailAlloc_1926_, 8, v_bcFileName_x3f_1913_);
lean_ctor_set(v_reuseFailAlloc_1926_, 9, v_errorOnKinds_1914_);
lean_ctor_set(v_reuseFailAlloc_1926_, 10, v_incrSaveFileName_x3f_1917_);
lean_ctor_set(v_reuseFailAlloc_1926_, 11, v_incrLoadFileName_x3f_1918_);
lean_ctor_set(v_reuseFailAlloc_1926_, 12, v_incrHeaderSaveFileName_x3f_1919_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 8, v_component_1898_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 9, v_printPrefix_1899_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 10, v_printLibDir_1900_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 11, v_useStdin_1901_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 12, v_onlyDeps_1902_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 13, v_onlySrcDeps_1903_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 14, v_depsJson_1904_);
lean_ctor_set_uint32(v_reuseFailAlloc_1926_, sizeof(void*)*13, v_trustLevel_1906_);
lean_ctor_set_uint32(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 4, v_numThreads_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 16, v_printStats_1915_);
lean_ctor_set_uint8(v_reuseFailAlloc_1926_, sizeof(void*)*13 + 17, v_run_1916_);
v___x_1924_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1925_; 
lean_ctor_set_uint8(v___x_1924_, sizeof(void*)*13 + 15, v___x_1206_);
v___x_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_leanOpts_1928_; lean_object* v_forwardedArgs_1929_; uint8_t v_component_1930_; uint8_t v_printPrefix_1931_; uint8_t v_printLibDir_1932_; uint8_t v_useStdin_1933_; uint8_t v_onlySrcDeps_1934_; lean_object* v_opts_1935_; uint32_t v_trustLevel_1936_; uint32_t v_numThreads_1937_; lean_object* v_rootDir_x3f_1938_; lean_object* v_setupFileName_x3f_1939_; lean_object* v_oleanFileName_x3f_1940_; lean_object* v_ileanFileName_x3f_1941_; lean_object* v_cFileName_x3f_1942_; lean_object* v_bcFileName_x3f_1943_; uint8_t v_jsonOutput_1944_; lean_object* v_errorOnKinds_1945_; uint8_t v_printStats_1946_; uint8_t v_run_1947_; lean_object* v_incrSaveFileName_x3f_1948_; lean_object* v_incrLoadFileName_x3f_1949_; lean_object* v_incrHeaderSaveFileName_x3f_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1958_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1928_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1929_ = lean_ctor_get(v_opts_939_, 1);
v_component_1930_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1931_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1932_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1933_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlySrcDeps_1934_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_opts_1935_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1936_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1937_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1938_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1939_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1940_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1941_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1942_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1943_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1944_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1945_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1946_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1947_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1948_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1949_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1950_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1952_ = v_opts_939_;
v_isShared_1953_ = v_isSharedCheck_1958_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1950_);
lean_inc(v_incrLoadFileName_x3f_1949_);
lean_inc(v_incrSaveFileName_x3f_1948_);
lean_inc(v_errorOnKinds_1945_);
lean_inc(v_bcFileName_x3f_1943_);
lean_inc(v_cFileName_x3f_1942_);
lean_inc(v_ileanFileName_x3f_1941_);
lean_inc(v_oleanFileName_x3f_1940_);
lean_inc(v_setupFileName_x3f_1939_);
lean_inc(v_rootDir_x3f_1938_);
lean_inc(v_opts_1935_);
lean_inc(v_forwardedArgs_1929_);
lean_inc(v_leanOpts_1928_);
lean_dec(v_opts_939_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1958_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_leanOpts_1928_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_forwardedArgs_1929_);
lean_ctor_set(v_reuseFailAlloc_1957_, 2, v_opts_1935_);
lean_ctor_set(v_reuseFailAlloc_1957_, 3, v_rootDir_x3f_1938_);
lean_ctor_set(v_reuseFailAlloc_1957_, 4, v_setupFileName_x3f_1939_);
lean_ctor_set(v_reuseFailAlloc_1957_, 5, v_oleanFileName_x3f_1940_);
lean_ctor_set(v_reuseFailAlloc_1957_, 6, v_ileanFileName_x3f_1941_);
lean_ctor_set(v_reuseFailAlloc_1957_, 7, v_cFileName_x3f_1942_);
lean_ctor_set(v_reuseFailAlloc_1957_, 8, v_bcFileName_x3f_1943_);
lean_ctor_set(v_reuseFailAlloc_1957_, 9, v_errorOnKinds_1945_);
lean_ctor_set(v_reuseFailAlloc_1957_, 10, v_incrSaveFileName_x3f_1948_);
lean_ctor_set(v_reuseFailAlloc_1957_, 11, v_incrLoadFileName_x3f_1949_);
lean_ctor_set(v_reuseFailAlloc_1957_, 12, v_incrHeaderSaveFileName_x3f_1950_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 8, v_component_1930_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 9, v_printPrefix_1931_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 10, v_printLibDir_1932_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 11, v_useStdin_1933_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 13, v_onlySrcDeps_1934_);
lean_ctor_set_uint32(v_reuseFailAlloc_1957_, sizeof(void*)*13, v_trustLevel_1936_);
lean_ctor_set_uint32(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 4, v_numThreads_1937_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 15, v_jsonOutput_1944_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 16, v_printStats_1946_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13 + 17, v_run_1947_);
v___x_1955_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; 
lean_ctor_set_uint8(v___x_1955_, sizeof(void*)*13 + 12, v___x_1204_);
lean_ctor_set_uint8(v___x_1955_, sizeof(void*)*13 + 14, v___x_1204_);
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
return v___x_1956_;
}
}
}
}
else
{
lean_object* v_leanOpts_1959_; lean_object* v_forwardedArgs_1960_; uint8_t v_component_1961_; uint8_t v_printPrefix_1962_; uint8_t v_printLibDir_1963_; uint8_t v_useStdin_1964_; uint8_t v_onlyDeps_1965_; uint8_t v_depsJson_1966_; lean_object* v_opts_1967_; uint32_t v_trustLevel_1968_; uint32_t v_numThreads_1969_; lean_object* v_rootDir_x3f_1970_; lean_object* v_setupFileName_x3f_1971_; lean_object* v_oleanFileName_x3f_1972_; lean_object* v_ileanFileName_x3f_1973_; lean_object* v_cFileName_x3f_1974_; lean_object* v_bcFileName_x3f_1975_; uint8_t v_jsonOutput_1976_; lean_object* v_errorOnKinds_1977_; uint8_t v_printStats_1978_; uint8_t v_run_1979_; lean_object* v_incrSaveFileName_x3f_1980_; lean_object* v_incrLoadFileName_x3f_1981_; lean_object* v_incrHeaderSaveFileName_x3f_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1990_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1959_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1960_ = lean_ctor_get(v_opts_939_, 1);
v_component_1961_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1962_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1963_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1964_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_1965_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_depsJson_1966_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1967_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_1968_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_1969_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1970_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_1971_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_1972_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_1973_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_1974_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_1975_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_1976_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_1977_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_1978_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_1979_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1980_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_1981_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_1982_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_1990_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1984_ = v_opts_939_;
v_isShared_1985_ = v_isSharedCheck_1990_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1982_);
lean_inc(v_incrLoadFileName_x3f_1981_);
lean_inc(v_incrSaveFileName_x3f_1980_);
lean_inc(v_errorOnKinds_1977_);
lean_inc(v_bcFileName_x3f_1975_);
lean_inc(v_cFileName_x3f_1974_);
lean_inc(v_ileanFileName_x3f_1973_);
lean_inc(v_oleanFileName_x3f_1972_);
lean_inc(v_setupFileName_x3f_1971_);
lean_inc(v_rootDir_x3f_1970_);
lean_inc(v_opts_1967_);
lean_inc(v_forwardedArgs_1960_);
lean_inc(v_leanOpts_1959_);
lean_dec(v_opts_939_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1990_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_leanOpts_1959_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v_forwardedArgs_1960_);
lean_ctor_set(v_reuseFailAlloc_1989_, 2, v_opts_1967_);
lean_ctor_set(v_reuseFailAlloc_1989_, 3, v_rootDir_x3f_1970_);
lean_ctor_set(v_reuseFailAlloc_1989_, 4, v_setupFileName_x3f_1971_);
lean_ctor_set(v_reuseFailAlloc_1989_, 5, v_oleanFileName_x3f_1972_);
lean_ctor_set(v_reuseFailAlloc_1989_, 6, v_ileanFileName_x3f_1973_);
lean_ctor_set(v_reuseFailAlloc_1989_, 7, v_cFileName_x3f_1974_);
lean_ctor_set(v_reuseFailAlloc_1989_, 8, v_bcFileName_x3f_1975_);
lean_ctor_set(v_reuseFailAlloc_1989_, 9, v_errorOnKinds_1977_);
lean_ctor_set(v_reuseFailAlloc_1989_, 10, v_incrSaveFileName_x3f_1980_);
lean_ctor_set(v_reuseFailAlloc_1989_, 11, v_incrLoadFileName_x3f_1981_);
lean_ctor_set(v_reuseFailAlloc_1989_, 12, v_incrHeaderSaveFileName_x3f_1982_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 8, v_component_1961_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 9, v_printPrefix_1962_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 10, v_printLibDir_1963_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 11, v_useStdin_1964_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 12, v_onlyDeps_1965_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 14, v_depsJson_1966_);
lean_ctor_set_uint32(v_reuseFailAlloc_1989_, sizeof(void*)*13, v_trustLevel_1968_);
lean_ctor_set_uint32(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 4, v_numThreads_1969_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 15, v_jsonOutput_1976_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 16, v_printStats_1978_);
lean_ctor_set_uint8(v_reuseFailAlloc_1989_, sizeof(void*)*13 + 17, v_run_1979_);
v___x_1987_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1988_; 
lean_ctor_set_uint8(v___x_1987_, sizeof(void*)*13 + 13, v___x_1202_);
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1987_);
return v___x_1988_;
}
}
}
}
else
{
lean_object* v_leanOpts_1991_; lean_object* v_forwardedArgs_1992_; uint8_t v_component_1993_; uint8_t v_printPrefix_1994_; uint8_t v_printLibDir_1995_; uint8_t v_useStdin_1996_; uint8_t v_onlySrcDeps_1997_; uint8_t v_depsJson_1998_; lean_object* v_opts_1999_; uint32_t v_trustLevel_2000_; uint32_t v_numThreads_2001_; lean_object* v_rootDir_x3f_2002_; lean_object* v_setupFileName_x3f_2003_; lean_object* v_oleanFileName_x3f_2004_; lean_object* v_ileanFileName_x3f_2005_; lean_object* v_cFileName_x3f_2006_; lean_object* v_bcFileName_x3f_2007_; uint8_t v_jsonOutput_2008_; lean_object* v_errorOnKinds_2009_; uint8_t v_printStats_2010_; uint8_t v_run_2011_; lean_object* v_incrSaveFileName_x3f_2012_; lean_object* v_incrLoadFileName_x3f_2013_; lean_object* v_incrHeaderSaveFileName_x3f_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2022_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_1991_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_1992_ = lean_ctor_get(v_opts_939_, 1);
v_component_1993_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_1994_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_1995_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_1996_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlySrcDeps_1997_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_1998_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_1999_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2000_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2001_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2002_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2003_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2004_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2005_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2006_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2007_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2008_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2009_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2010_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2011_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2012_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2013_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2014_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2016_ = v_opts_939_;
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2014_);
lean_inc(v_incrLoadFileName_x3f_2013_);
lean_inc(v_incrSaveFileName_x3f_2012_);
lean_inc(v_errorOnKinds_2009_);
lean_inc(v_bcFileName_x3f_2007_);
lean_inc(v_cFileName_x3f_2006_);
lean_inc(v_ileanFileName_x3f_2005_);
lean_inc(v_oleanFileName_x3f_2004_);
lean_inc(v_setupFileName_x3f_2003_);
lean_inc(v_rootDir_x3f_2002_);
lean_inc(v_opts_1999_);
lean_inc(v_forwardedArgs_1992_);
lean_inc(v_leanOpts_1991_);
lean_dec(v_opts_939_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_leanOpts_1991_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v_forwardedArgs_1992_);
lean_ctor_set(v_reuseFailAlloc_2021_, 2, v_opts_1999_);
lean_ctor_set(v_reuseFailAlloc_2021_, 3, v_rootDir_x3f_2002_);
lean_ctor_set(v_reuseFailAlloc_2021_, 4, v_setupFileName_x3f_2003_);
lean_ctor_set(v_reuseFailAlloc_2021_, 5, v_oleanFileName_x3f_2004_);
lean_ctor_set(v_reuseFailAlloc_2021_, 6, v_ileanFileName_x3f_2005_);
lean_ctor_set(v_reuseFailAlloc_2021_, 7, v_cFileName_x3f_2006_);
lean_ctor_set(v_reuseFailAlloc_2021_, 8, v_bcFileName_x3f_2007_);
lean_ctor_set(v_reuseFailAlloc_2021_, 9, v_errorOnKinds_2009_);
lean_ctor_set(v_reuseFailAlloc_2021_, 10, v_incrSaveFileName_x3f_2012_);
lean_ctor_set(v_reuseFailAlloc_2021_, 11, v_incrLoadFileName_x3f_2013_);
lean_ctor_set(v_reuseFailAlloc_2021_, 12, v_incrHeaderSaveFileName_x3f_2014_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 8, v_component_1993_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 9, v_printPrefix_1994_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 10, v_printLibDir_1995_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 11, v_useStdin_1996_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 13, v_onlySrcDeps_1997_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 14, v_depsJson_1998_);
lean_ctor_set_uint32(v_reuseFailAlloc_2021_, sizeof(void*)*13, v_trustLevel_2000_);
lean_ctor_set_uint32(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 4, v_numThreads_2001_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 15, v_jsonOutput_2008_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 16, v_printStats_2010_);
lean_ctor_set_uint8(v_reuseFailAlloc_2021_, sizeof(void*)*13 + 17, v_run_2011_);
v___x_2019_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2020_; 
lean_ctor_set_uint8(v___x_2019_, sizeof(void*)*13 + 12, v___x_1200_);
v___x_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
return v___x_2020_;
}
}
}
}
else
{
lean_object* v_leanOpts_2023_; lean_object* v_forwardedArgs_2024_; uint8_t v_component_2025_; uint8_t v_printPrefix_2026_; uint8_t v_printLibDir_2027_; uint8_t v_useStdin_2028_; uint8_t v_onlyDeps_2029_; uint8_t v_onlySrcDeps_2030_; uint8_t v_depsJson_2031_; lean_object* v_opts_2032_; uint32_t v_trustLevel_2033_; uint32_t v_numThreads_2034_; lean_object* v_rootDir_x3f_2035_; lean_object* v_setupFileName_x3f_2036_; lean_object* v_oleanFileName_x3f_2037_; lean_object* v_ileanFileName_x3f_2038_; lean_object* v_cFileName_x3f_2039_; lean_object* v_bcFileName_x3f_2040_; uint8_t v_jsonOutput_2041_; lean_object* v_errorOnKinds_2042_; uint8_t v_printStats_2043_; uint8_t v_run_2044_; lean_object* v_incrSaveFileName_x3f_2045_; lean_object* v_incrLoadFileName_x3f_2046_; lean_object* v_incrHeaderSaveFileName_x3f_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2057_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_2023_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2024_ = lean_ctor_get(v_opts_939_, 1);
v_component_2025_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2026_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2027_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2028_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2029_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2030_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2031_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2032_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2033_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2034_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2035_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2036_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2037_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2038_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2039_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2040_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2041_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2042_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2043_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2044_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2045_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2046_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2047_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2049_ = v_opts_939_;
v_isShared_2050_ = v_isSharedCheck_2057_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2047_);
lean_inc(v_incrLoadFileName_x3f_2046_);
lean_inc(v_incrSaveFileName_x3f_2045_);
lean_inc(v_errorOnKinds_2042_);
lean_inc(v_bcFileName_x3f_2040_);
lean_inc(v_cFileName_x3f_2039_);
lean_inc(v_ileanFileName_x3f_2038_);
lean_inc(v_oleanFileName_x3f_2037_);
lean_inc(v_setupFileName_x3f_2036_);
lean_inc(v_rootDir_x3f_2035_);
lean_inc(v_opts_2032_);
lean_inc(v_forwardedArgs_2024_);
lean_inc(v_leanOpts_2023_);
lean_dec(v_opts_939_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2057_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2054_; 
v___x_2051_ = l___private_Lean_Shell_0__Lean_verbose;
v___x_2052_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2023_, v___x_2051_, v___x_1196_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2052_);
v___x_2054_ = v___x_2049_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2052_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v_forwardedArgs_2024_);
lean_ctor_set(v_reuseFailAlloc_2056_, 2, v_opts_2032_);
lean_ctor_set(v_reuseFailAlloc_2056_, 3, v_rootDir_x3f_2035_);
lean_ctor_set(v_reuseFailAlloc_2056_, 4, v_setupFileName_x3f_2036_);
lean_ctor_set(v_reuseFailAlloc_2056_, 5, v_oleanFileName_x3f_2037_);
lean_ctor_set(v_reuseFailAlloc_2056_, 6, v_ileanFileName_x3f_2038_);
lean_ctor_set(v_reuseFailAlloc_2056_, 7, v_cFileName_x3f_2039_);
lean_ctor_set(v_reuseFailAlloc_2056_, 8, v_bcFileName_x3f_2040_);
lean_ctor_set(v_reuseFailAlloc_2056_, 9, v_errorOnKinds_2042_);
lean_ctor_set(v_reuseFailAlloc_2056_, 10, v_incrSaveFileName_x3f_2045_);
lean_ctor_set(v_reuseFailAlloc_2056_, 11, v_incrLoadFileName_x3f_2046_);
lean_ctor_set(v_reuseFailAlloc_2056_, 12, v_incrHeaderSaveFileName_x3f_2047_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 8, v_component_2025_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 9, v_printPrefix_2026_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 10, v_printLibDir_2027_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 11, v_useStdin_2028_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 12, v_onlyDeps_2029_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 13, v_onlySrcDeps_2030_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 14, v_depsJson_2031_);
lean_ctor_set_uint32(v_reuseFailAlloc_2056_, sizeof(void*)*13, v_trustLevel_2033_);
lean_ctor_set_uint32(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 4, v_numThreads_2034_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 15, v_jsonOutput_2041_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 16, v_printStats_2043_);
lean_ctor_set_uint8(v_reuseFailAlloc_2056_, sizeof(void*)*13 + 17, v_run_2044_);
v___x_2054_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2054_);
return v___x_2055_;
}
}
}
}
else
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13));
v___x_2059_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2058_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2113_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2113_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2113_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = lean_string_utf8_byte_size(v_a_2060_);
lean_inc(v_a_2060_);
v___x_2066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2066_, 0, v_a_2060_);
lean_ctor_set(v___x_2066_, 1, v___x_2064_);
lean_ctor_set(v___x_2066_, 2, v___x_2065_);
v___x_2067_ = l_String_Slice_toNat_x3f(v___x_2066_);
lean_dec_ref_known(v___x_2066_, 3);
if (lean_obj_tag(v___x_2067_) == 1)
{
lean_object* v_val_2068_; lean_object* v___x_2069_; uint8_t v___x_2070_; 
v_val_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_val_2068_);
lean_dec_ref_known(v___x_2067_, 1);
v___x_2069_ = lean_cstr_to_nat("4294967296");
v___x_2070_ = lean_nat_dec_lt(v_val_2068_, v___x_2069_);
if (v___x_2070_ == 0)
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
lean_dec(v_val_2068_);
lean_del_object(v___x_2062_);
lean_dec(v_a_2060_);
lean_dec_ref(v_opts_939_);
v___x_2071_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14));
v___x_2072_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2071_);
lean_dec_ref(v___x_2072_);
goto v___jp_1003_;
}
else
{
lean_object* v_leanOpts_2073_; lean_object* v_forwardedArgs_2074_; uint8_t v_component_2075_; uint8_t v_printPrefix_2076_; uint8_t v_printLibDir_2077_; uint8_t v_useStdin_2078_; uint8_t v_onlyDeps_2079_; uint8_t v_onlySrcDeps_2080_; uint8_t v_depsJson_2081_; lean_object* v_opts_2082_; uint32_t v_numThreads_2083_; lean_object* v_rootDir_x3f_2084_; lean_object* v_setupFileName_x3f_2085_; lean_object* v_oleanFileName_x3f_2086_; lean_object* v_ileanFileName_x3f_2087_; lean_object* v_cFileName_x3f_2088_; lean_object* v_bcFileName_x3f_2089_; uint8_t v_jsonOutput_2090_; lean_object* v_errorOnKinds_2091_; uint8_t v_printStats_2092_; uint8_t v_run_2093_; lean_object* v_incrSaveFileName_x3f_2094_; lean_object* v_incrLoadFileName_x3f_2095_; lean_object* v_incrHeaderSaveFileName_x3f_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2110_; 
v_leanOpts_2073_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2074_ = lean_ctor_get(v_opts_939_, 1);
v_component_2075_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2076_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2077_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2078_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2079_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2080_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2081_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2082_ = lean_ctor_get(v_opts_939_, 2);
v_numThreads_2083_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2084_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2085_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2086_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2087_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2088_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2089_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2090_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2091_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2092_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2093_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2094_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2095_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2096_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2110_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2098_ = v_opts_939_;
v_isShared_2099_ = v_isSharedCheck_2110_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2096_);
lean_inc(v_incrLoadFileName_x3f_2095_);
lean_inc(v_incrSaveFileName_x3f_2094_);
lean_inc(v_errorOnKinds_2091_);
lean_inc(v_bcFileName_x3f_2089_);
lean_inc(v_cFileName_x3f_2088_);
lean_inc(v_ileanFileName_x3f_2087_);
lean_inc(v_oleanFileName_x3f_2086_);
lean_inc(v_setupFileName_x3f_2085_);
lean_inc(v_rootDir_x3f_2084_);
lean_inc(v_opts_2082_);
lean_inc(v_forwardedArgs_2074_);
lean_inc(v_leanOpts_2073_);
lean_dec(v_opts_939_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2110_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
uint32_t v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
v___x_2100_ = lean_uint32_of_nat(v_val_2068_);
lean_dec(v_val_2068_);
v___x_2101_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15));
v___x_2102_ = lean_string_append(v___x_2101_, v_a_2060_);
lean_dec(v_a_2060_);
v___x_2103_ = lean_array_push(v_forwardedArgs_2074_, v___x_2102_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 1, v___x_2103_);
v___x_2105_ = v___x_2098_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_leanOpts_2073_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v___x_2103_);
lean_ctor_set(v_reuseFailAlloc_2109_, 2, v_opts_2082_);
lean_ctor_set(v_reuseFailAlloc_2109_, 3, v_rootDir_x3f_2084_);
lean_ctor_set(v_reuseFailAlloc_2109_, 4, v_setupFileName_x3f_2085_);
lean_ctor_set(v_reuseFailAlloc_2109_, 5, v_oleanFileName_x3f_2086_);
lean_ctor_set(v_reuseFailAlloc_2109_, 6, v_ileanFileName_x3f_2087_);
lean_ctor_set(v_reuseFailAlloc_2109_, 7, v_cFileName_x3f_2088_);
lean_ctor_set(v_reuseFailAlloc_2109_, 8, v_bcFileName_x3f_2089_);
lean_ctor_set(v_reuseFailAlloc_2109_, 9, v_errorOnKinds_2091_);
lean_ctor_set(v_reuseFailAlloc_2109_, 10, v_incrSaveFileName_x3f_2094_);
lean_ctor_set(v_reuseFailAlloc_2109_, 11, v_incrLoadFileName_x3f_2095_);
lean_ctor_set(v_reuseFailAlloc_2109_, 12, v_incrHeaderSaveFileName_x3f_2096_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 8, v_component_2075_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 9, v_printPrefix_2076_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 10, v_printLibDir_2077_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 11, v_useStdin_2078_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 12, v_onlyDeps_2079_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 13, v_onlySrcDeps_2080_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 14, v_depsJson_2081_);
lean_ctor_set_uint32(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 4, v_numThreads_2083_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 15, v_jsonOutput_2090_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 16, v_printStats_2092_);
lean_ctor_set_uint8(v_reuseFailAlloc_2109_, sizeof(void*)*13 + 17, v_run_2093_);
v___x_2105_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
lean_object* v___x_2107_; 
lean_ctor_set_uint32(v___x_2105_, sizeof(void*)*13, v___x_2100_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2105_);
v___x_2107_ = v___x_2062_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
}
else
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_dec(v___x_2067_);
lean_del_object(v___x_2062_);
lean_dec(v_a_2060_);
lean_dec_ref(v_opts_939_);
v___x_2111_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16));
v___x_2112_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2111_);
lean_dec_ref(v___x_2112_);
goto v___jp_1000_;
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
lean_dec_ref(v_opts_939_);
v_a_2114_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2059_, 1);
v___x_2118_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2119_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2118_);
lean_dec_ref(v___x_2119_);
goto v___jp_2115_;
v___jp_2115_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_io_error_to_string(v_a_2114_);
v___x_2117_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2116_);
lean_dec_ref(v___x_2117_);
goto v___jp_1009_;
}
}
}
}
else
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17));
v___x_2121_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2120_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2173_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2173_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2173_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = lean_string_utf8_byte_size(v_a_2122_);
lean_inc(v_a_2122_);
v___x_2128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2128_, 0, v_a_2122_);
lean_ctor_set(v___x_2128_, 1, v___x_2126_);
lean_ctor_set(v___x_2128_, 2, v___x_2127_);
v___x_2129_ = l_String_Slice_toNat_x3f(v___x_2128_);
lean_dec_ref_known(v___x_2128_, 3);
if (lean_obj_tag(v___x_2129_) == 1)
{
lean_object* v_val_2130_; lean_object* v_leanOpts_2131_; lean_object* v_forwardedArgs_2132_; uint8_t v_component_2133_; uint8_t v_printPrefix_2134_; uint8_t v_printLibDir_2135_; uint8_t v_useStdin_2136_; uint8_t v_onlyDeps_2137_; uint8_t v_onlySrcDeps_2138_; uint8_t v_depsJson_2139_; lean_object* v_opts_2140_; uint32_t v_trustLevel_2141_; uint32_t v_numThreads_2142_; lean_object* v_rootDir_x3f_2143_; lean_object* v_setupFileName_x3f_2144_; lean_object* v_oleanFileName_x3f_2145_; lean_object* v_ileanFileName_x3f_2146_; lean_object* v_cFileName_x3f_2147_; lean_object* v_bcFileName_x3f_2148_; uint8_t v_jsonOutput_2149_; lean_object* v_errorOnKinds_2150_; uint8_t v_printStats_2151_; uint8_t v_run_2152_; lean_object* v_incrSaveFileName_x3f_2153_; lean_object* v_incrLoadFileName_x3f_2154_; lean_object* v_incrHeaderSaveFileName_x3f_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2170_; 
v_val_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_val_2130_);
lean_dec_ref_known(v___x_2129_, 1);
v_leanOpts_2131_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2132_ = lean_ctor_get(v_opts_939_, 1);
v_component_2133_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2134_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2135_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2136_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2137_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2138_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2139_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2140_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2141_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2142_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2143_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2144_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2145_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2146_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2147_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2148_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2149_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2150_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2151_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2152_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2153_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2154_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2155_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2157_ = v_opts_939_;
v_isShared_2158_ = v_isSharedCheck_2170_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2155_);
lean_inc(v_incrLoadFileName_x3f_2154_);
lean_inc(v_incrSaveFileName_x3f_2153_);
lean_inc(v_errorOnKinds_2150_);
lean_inc(v_bcFileName_x3f_2148_);
lean_inc(v_cFileName_x3f_2147_);
lean_inc(v_ileanFileName_x3f_2146_);
lean_inc(v_oleanFileName_x3f_2145_);
lean_inc(v_setupFileName_x3f_2144_);
lean_inc(v_rootDir_x3f_2143_);
lean_inc(v_opts_2140_);
lean_inc(v_forwardedArgs_2132_);
lean_inc(v_leanOpts_2131_);
lean_dec(v_opts_939_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2170_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2159_ = l___private_Lean_Shell_0__Lean_timeout;
v___x_2160_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2131_, v___x_2159_, v_val_2130_);
v___x_2161_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18));
v___x_2162_ = lean_string_append(v___x_2161_, v_a_2122_);
lean_dec(v_a_2122_);
v___x_2163_ = lean_array_push(v_forwardedArgs_2132_, v___x_2162_);
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 1, v___x_2163_);
lean_ctor_set(v___x_2157_, 0, v___x_2160_);
v___x_2165_ = v___x_2157_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2160_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v___x_2163_);
lean_ctor_set(v_reuseFailAlloc_2169_, 2, v_opts_2140_);
lean_ctor_set(v_reuseFailAlloc_2169_, 3, v_rootDir_x3f_2143_);
lean_ctor_set(v_reuseFailAlloc_2169_, 4, v_setupFileName_x3f_2144_);
lean_ctor_set(v_reuseFailAlloc_2169_, 5, v_oleanFileName_x3f_2145_);
lean_ctor_set(v_reuseFailAlloc_2169_, 6, v_ileanFileName_x3f_2146_);
lean_ctor_set(v_reuseFailAlloc_2169_, 7, v_cFileName_x3f_2147_);
lean_ctor_set(v_reuseFailAlloc_2169_, 8, v_bcFileName_x3f_2148_);
lean_ctor_set(v_reuseFailAlloc_2169_, 9, v_errorOnKinds_2150_);
lean_ctor_set(v_reuseFailAlloc_2169_, 10, v_incrSaveFileName_x3f_2153_);
lean_ctor_set(v_reuseFailAlloc_2169_, 11, v_incrLoadFileName_x3f_2154_);
lean_ctor_set(v_reuseFailAlloc_2169_, 12, v_incrHeaderSaveFileName_x3f_2155_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 8, v_component_2133_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 9, v_printPrefix_2134_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 10, v_printLibDir_2135_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 11, v_useStdin_2136_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 12, v_onlyDeps_2137_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 13, v_onlySrcDeps_2138_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 14, v_depsJson_2139_);
lean_ctor_set_uint32(v_reuseFailAlloc_2169_, sizeof(void*)*13, v_trustLevel_2141_);
lean_ctor_set_uint32(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 4, v_numThreads_2142_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 15, v_jsonOutput_2149_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 16, v_printStats_2151_);
lean_ctor_set_uint8(v_reuseFailAlloc_2169_, sizeof(void*)*13 + 17, v_run_2152_);
v___x_2165_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
lean_object* v___x_2167_; 
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v___x_2165_);
v___x_2167_ = v___x_2124_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec(v___x_2129_);
lean_del_object(v___x_2124_);
lean_dec(v_a_2122_);
lean_dec_ref(v_opts_939_);
v___x_2171_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19));
v___x_2172_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2171_);
lean_dec_ref(v___x_2172_);
goto v___jp_1116_;
}
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_dec_ref(v_opts_939_);
v_a_2174_ = lean_ctor_get(v___x_2121_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2121_, 1);
v___x_2178_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2179_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2178_);
lean_dec_ref(v___x_2179_);
goto v___jp_2175_;
v___jp_2175_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = lean_io_error_to_string(v_a_2174_);
v___x_2177_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2176_);
lean_dec_ref(v___x_2177_);
goto v___jp_1122_;
}
}
}
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2180_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20));
v___x_2181_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2180_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2233_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2184_ = v___x_2181_;
v_isShared_2185_ = v_isSharedCheck_2233_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2181_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2233_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2186_ = lean_unsigned_to_nat(0u);
v___x_2187_ = lean_string_utf8_byte_size(v_a_2182_);
lean_inc(v_a_2182_);
v___x_2188_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2188_, 0, v_a_2182_);
lean_ctor_set(v___x_2188_, 1, v___x_2186_);
lean_ctor_set(v___x_2188_, 2, v___x_2187_);
v___x_2189_ = l_String_Slice_toNat_x3f(v___x_2188_);
lean_dec_ref_known(v___x_2188_, 3);
if (lean_obj_tag(v___x_2189_) == 1)
{
lean_object* v_val_2190_; lean_object* v_leanOpts_2191_; lean_object* v_forwardedArgs_2192_; uint8_t v_component_2193_; uint8_t v_printPrefix_2194_; uint8_t v_printLibDir_2195_; uint8_t v_useStdin_2196_; uint8_t v_onlyDeps_2197_; uint8_t v_onlySrcDeps_2198_; uint8_t v_depsJson_2199_; lean_object* v_opts_2200_; uint32_t v_trustLevel_2201_; uint32_t v_numThreads_2202_; lean_object* v_rootDir_x3f_2203_; lean_object* v_setupFileName_x3f_2204_; lean_object* v_oleanFileName_x3f_2205_; lean_object* v_ileanFileName_x3f_2206_; lean_object* v_cFileName_x3f_2207_; lean_object* v_bcFileName_x3f_2208_; uint8_t v_jsonOutput_2209_; lean_object* v_errorOnKinds_2210_; uint8_t v_printStats_2211_; uint8_t v_run_2212_; lean_object* v_incrSaveFileName_x3f_2213_; lean_object* v_incrLoadFileName_x3f_2214_; lean_object* v_incrHeaderSaveFileName_x3f_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2230_; 
v_val_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_val_2190_);
lean_dec_ref_known(v___x_2189_, 1);
v_leanOpts_2191_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2192_ = lean_ctor_get(v_opts_939_, 1);
v_component_2193_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2194_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2195_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2196_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2197_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2198_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2199_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2200_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2201_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2202_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2203_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2204_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2205_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2206_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2207_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2208_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2209_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2210_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2211_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2212_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2213_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2214_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2215_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2230_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2217_ = v_opts_939_;
v_isShared_2218_ = v_isSharedCheck_2230_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2215_);
lean_inc(v_incrLoadFileName_x3f_2214_);
lean_inc(v_incrSaveFileName_x3f_2213_);
lean_inc(v_errorOnKinds_2210_);
lean_inc(v_bcFileName_x3f_2208_);
lean_inc(v_cFileName_x3f_2207_);
lean_inc(v_ileanFileName_x3f_2206_);
lean_inc(v_oleanFileName_x3f_2205_);
lean_inc(v_setupFileName_x3f_2204_);
lean_inc(v_rootDir_x3f_2203_);
lean_inc(v_opts_2200_);
lean_inc(v_forwardedArgs_2192_);
lean_inc(v_leanOpts_2191_);
lean_dec(v_opts_939_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2230_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2225_; 
v___x_2219_ = l___private_Lean_Shell_0__Lean_maxMemory;
v___x_2220_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2191_, v___x_2219_, v_val_2190_);
v___x_2221_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21));
v___x_2222_ = lean_string_append(v___x_2221_, v_a_2182_);
lean_dec(v_a_2182_);
v___x_2223_ = lean_array_push(v_forwardedArgs_2192_, v___x_2222_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 1, v___x_2223_);
lean_ctor_set(v___x_2217_, 0, v___x_2220_);
v___x_2225_ = v___x_2217_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v___x_2223_);
lean_ctor_set(v_reuseFailAlloc_2229_, 2, v_opts_2200_);
lean_ctor_set(v_reuseFailAlloc_2229_, 3, v_rootDir_x3f_2203_);
lean_ctor_set(v_reuseFailAlloc_2229_, 4, v_setupFileName_x3f_2204_);
lean_ctor_set(v_reuseFailAlloc_2229_, 5, v_oleanFileName_x3f_2205_);
lean_ctor_set(v_reuseFailAlloc_2229_, 6, v_ileanFileName_x3f_2206_);
lean_ctor_set(v_reuseFailAlloc_2229_, 7, v_cFileName_x3f_2207_);
lean_ctor_set(v_reuseFailAlloc_2229_, 8, v_bcFileName_x3f_2208_);
lean_ctor_set(v_reuseFailAlloc_2229_, 9, v_errorOnKinds_2210_);
lean_ctor_set(v_reuseFailAlloc_2229_, 10, v_incrSaveFileName_x3f_2213_);
lean_ctor_set(v_reuseFailAlloc_2229_, 11, v_incrLoadFileName_x3f_2214_);
lean_ctor_set(v_reuseFailAlloc_2229_, 12, v_incrHeaderSaveFileName_x3f_2215_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 8, v_component_2193_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 9, v_printPrefix_2194_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 10, v_printLibDir_2195_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 11, v_useStdin_2196_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 12, v_onlyDeps_2197_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 13, v_onlySrcDeps_2198_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 14, v_depsJson_2199_);
lean_ctor_set_uint32(v_reuseFailAlloc_2229_, sizeof(void*)*13, v_trustLevel_2201_);
lean_ctor_set_uint32(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 4, v_numThreads_2202_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 15, v_jsonOutput_2209_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 16, v_printStats_2211_);
lean_ctor_set_uint8(v_reuseFailAlloc_2229_, sizeof(void*)*13 + 17, v_run_2212_);
v___x_2225_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2227_; 
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 0, v___x_2225_);
v___x_2227_ = v___x_2184_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2225_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v___x_2231_; lean_object* v___x_2232_; 
lean_dec(v___x_2189_);
lean_del_object(v___x_2184_);
lean_dec(v_a_2182_);
lean_dec_ref(v_opts_939_);
v___x_2231_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22));
v___x_2232_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2231_);
lean_dec_ref(v___x_2232_);
goto v___jp_991_;
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
lean_dec_ref(v_opts_939_);
v_a_2234_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2234_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2238_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2239_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2238_);
lean_dec_ref(v___x_2239_);
goto v___jp_2235_;
v___jp_2235_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = lean_io_error_to_string(v_a_2234_);
v___x_2237_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2236_);
lean_dec_ref(v___x_2237_);
goto v___jp_997_;
}
}
}
}
else
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2240_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23));
v___x_2241_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2240_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2285_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2244_ = v___x_2241_;
v_isShared_2245_ = v_isSharedCheck_2285_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2285_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v_leanOpts_2246_; lean_object* v_forwardedArgs_2247_; uint8_t v_component_2248_; uint8_t v_printPrefix_2249_; uint8_t v_printLibDir_2250_; uint8_t v_useStdin_2251_; uint8_t v_onlyDeps_2252_; uint8_t v_onlySrcDeps_2253_; uint8_t v_depsJson_2254_; lean_object* v_opts_2255_; uint32_t v_trustLevel_2256_; uint32_t v_numThreads_2257_; lean_object* v_setupFileName_x3f_2258_; lean_object* v_oleanFileName_x3f_2259_; lean_object* v_ileanFileName_x3f_2260_; lean_object* v_cFileName_x3f_2261_; lean_object* v_bcFileName_x3f_2262_; uint8_t v_jsonOutput_2263_; lean_object* v_errorOnKinds_2264_; uint8_t v_printStats_2265_; uint8_t v_run_2266_; lean_object* v_incrSaveFileName_x3f_2267_; lean_object* v_incrLoadFileName_x3f_2268_; lean_object* v_incrHeaderSaveFileName_x3f_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2283_; 
v_leanOpts_2246_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2247_ = lean_ctor_get(v_opts_939_, 1);
v_component_2248_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2249_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2250_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2251_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2252_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2253_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2254_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2255_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2256_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2257_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_setupFileName_x3f_2258_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2259_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2260_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2261_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2262_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2263_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2264_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2265_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2266_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2267_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2268_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2269_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2283_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2283_ == 0)
{
lean_object* v_unused_2284_; 
v_unused_2284_ = lean_ctor_get(v_opts_939_, 3);
lean_dec(v_unused_2284_);
v___x_2271_ = v_opts_939_;
v_isShared_2272_ = v_isSharedCheck_2283_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2269_);
lean_inc(v_incrLoadFileName_x3f_2268_);
lean_inc(v_incrSaveFileName_x3f_2267_);
lean_inc(v_errorOnKinds_2264_);
lean_inc(v_bcFileName_x3f_2262_);
lean_inc(v_cFileName_x3f_2261_);
lean_inc(v_ileanFileName_x3f_2260_);
lean_inc(v_oleanFileName_x3f_2259_);
lean_inc(v_setupFileName_x3f_2258_);
lean_inc(v_opts_2255_);
lean_inc(v_forwardedArgs_2247_);
lean_inc(v_leanOpts_2246_);
lean_dec(v_opts_939_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2283_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2278_; 
v___x_2273_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24));
v___x_2274_ = lean_string_append(v___x_2273_, v_a_2242_);
v___x_2275_ = lean_array_push(v_forwardedArgs_2247_, v___x_2274_);
v___x_2276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2276_, 0, v_a_2242_);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 3, v___x_2276_);
lean_ctor_set(v___x_2271_, 1, v___x_2275_);
v___x_2278_ = v___x_2271_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_leanOpts_2246_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2282_, 2, v_opts_2255_);
lean_ctor_set(v_reuseFailAlloc_2282_, 3, v___x_2276_);
lean_ctor_set(v_reuseFailAlloc_2282_, 4, v_setupFileName_x3f_2258_);
lean_ctor_set(v_reuseFailAlloc_2282_, 5, v_oleanFileName_x3f_2259_);
lean_ctor_set(v_reuseFailAlloc_2282_, 6, v_ileanFileName_x3f_2260_);
lean_ctor_set(v_reuseFailAlloc_2282_, 7, v_cFileName_x3f_2261_);
lean_ctor_set(v_reuseFailAlloc_2282_, 8, v_bcFileName_x3f_2262_);
lean_ctor_set(v_reuseFailAlloc_2282_, 9, v_errorOnKinds_2264_);
lean_ctor_set(v_reuseFailAlloc_2282_, 10, v_incrSaveFileName_x3f_2267_);
lean_ctor_set(v_reuseFailAlloc_2282_, 11, v_incrLoadFileName_x3f_2268_);
lean_ctor_set(v_reuseFailAlloc_2282_, 12, v_incrHeaderSaveFileName_x3f_2269_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 8, v_component_2248_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 9, v_printPrefix_2249_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 10, v_printLibDir_2250_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 11, v_useStdin_2251_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 12, v_onlyDeps_2252_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 13, v_onlySrcDeps_2253_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 14, v_depsJson_2254_);
lean_ctor_set_uint32(v_reuseFailAlloc_2282_, sizeof(void*)*13, v_trustLevel_2256_);
lean_ctor_set_uint32(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 4, v_numThreads_2257_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 15, v_jsonOutput_2263_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 16, v_printStats_2265_);
lean_ctor_set_uint8(v_reuseFailAlloc_2282_, sizeof(void*)*13 + 17, v_run_2266_);
v___x_2278_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
lean_object* v___x_2280_; 
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 0, v___x_2278_);
v___x_2280_ = v___x_2244_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2278_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
lean_dec_ref(v_opts_939_);
v_a_2286_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2241_, 1);
v___x_2290_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2291_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2290_);
lean_dec_ref(v___x_2291_);
goto v___jp_2287_;
v___jp_2287_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = lean_io_error_to_string(v_a_2286_);
v___x_2289_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2288_);
lean_dec_ref(v___x_2289_);
goto v___jp_1128_;
}
}
}
}
else
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25));
v___x_2293_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2292_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2334_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2334_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2334_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v_leanOpts_2298_; lean_object* v_forwardedArgs_2299_; uint8_t v_component_2300_; uint8_t v_printPrefix_2301_; uint8_t v_printLibDir_2302_; uint8_t v_useStdin_2303_; uint8_t v_onlyDeps_2304_; uint8_t v_onlySrcDeps_2305_; uint8_t v_depsJson_2306_; lean_object* v_opts_2307_; uint32_t v_trustLevel_2308_; uint32_t v_numThreads_2309_; lean_object* v_rootDir_x3f_2310_; lean_object* v_setupFileName_x3f_2311_; lean_object* v_oleanFileName_x3f_2312_; lean_object* v_cFileName_x3f_2313_; lean_object* v_bcFileName_x3f_2314_; uint8_t v_jsonOutput_2315_; lean_object* v_errorOnKinds_2316_; uint8_t v_printStats_2317_; uint8_t v_run_2318_; lean_object* v_incrSaveFileName_x3f_2319_; lean_object* v_incrLoadFileName_x3f_2320_; lean_object* v_incrHeaderSaveFileName_x3f_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2332_; 
v_leanOpts_2298_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2299_ = lean_ctor_get(v_opts_939_, 1);
v_component_2300_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2301_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2302_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2303_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2304_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2305_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2306_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2307_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2308_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2309_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2310_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2311_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2312_ = lean_ctor_get(v_opts_939_, 5);
v_cFileName_x3f_2313_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2314_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2315_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2316_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2317_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2318_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2319_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2320_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2321_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2332_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2332_ == 0)
{
lean_object* v_unused_2333_; 
v_unused_2333_ = lean_ctor_get(v_opts_939_, 6);
lean_dec(v_unused_2333_);
v___x_2323_ = v_opts_939_;
v_isShared_2324_ = v_isSharedCheck_2332_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2321_);
lean_inc(v_incrLoadFileName_x3f_2320_);
lean_inc(v_incrSaveFileName_x3f_2319_);
lean_inc(v_errorOnKinds_2316_);
lean_inc(v_bcFileName_x3f_2314_);
lean_inc(v_cFileName_x3f_2313_);
lean_inc(v_oleanFileName_x3f_2312_);
lean_inc(v_setupFileName_x3f_2311_);
lean_inc(v_rootDir_x3f_2310_);
lean_inc(v_opts_2307_);
lean_inc(v_forwardedArgs_2299_);
lean_inc(v_leanOpts_2298_);
lean_dec(v_opts_939_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2332_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2325_; lean_object* v___x_2327_; 
v___x_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2325_, 0, v_a_2294_);
if (v_isShared_2324_ == 0)
{
lean_ctor_set(v___x_2323_, 6, v___x_2325_);
v___x_2327_ = v___x_2323_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_leanOpts_2298_);
lean_ctor_set(v_reuseFailAlloc_2331_, 1, v_forwardedArgs_2299_);
lean_ctor_set(v_reuseFailAlloc_2331_, 2, v_opts_2307_);
lean_ctor_set(v_reuseFailAlloc_2331_, 3, v_rootDir_x3f_2310_);
lean_ctor_set(v_reuseFailAlloc_2331_, 4, v_setupFileName_x3f_2311_);
lean_ctor_set(v_reuseFailAlloc_2331_, 5, v_oleanFileName_x3f_2312_);
lean_ctor_set(v_reuseFailAlloc_2331_, 6, v___x_2325_);
lean_ctor_set(v_reuseFailAlloc_2331_, 7, v_cFileName_x3f_2313_);
lean_ctor_set(v_reuseFailAlloc_2331_, 8, v_bcFileName_x3f_2314_);
lean_ctor_set(v_reuseFailAlloc_2331_, 9, v_errorOnKinds_2316_);
lean_ctor_set(v_reuseFailAlloc_2331_, 10, v_incrSaveFileName_x3f_2319_);
lean_ctor_set(v_reuseFailAlloc_2331_, 11, v_incrLoadFileName_x3f_2320_);
lean_ctor_set(v_reuseFailAlloc_2331_, 12, v_incrHeaderSaveFileName_x3f_2321_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 8, v_component_2300_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 9, v_printPrefix_2301_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 10, v_printLibDir_2302_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 11, v_useStdin_2303_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 12, v_onlyDeps_2304_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 13, v_onlySrcDeps_2305_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 14, v_depsJson_2306_);
lean_ctor_set_uint32(v_reuseFailAlloc_2331_, sizeof(void*)*13, v_trustLevel_2308_);
lean_ctor_set_uint32(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 4, v_numThreads_2309_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 15, v_jsonOutput_2315_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 16, v_printStats_2317_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*13 + 17, v_run_2318_);
v___x_2327_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2329_; 
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v___x_2327_);
v___x_2329_ = v___x_2296_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2327_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_dec_ref(v_opts_939_);
v_a_2335_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_a_2335_);
lean_dec_ref_known(v___x_2293_, 1);
v___x_2339_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2340_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2339_);
lean_dec_ref(v___x_2340_);
goto v___jp_2336_;
v___jp_2336_:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2337_ = lean_io_error_to_string(v_a_2335_);
v___x_2338_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2337_);
lean_dec_ref(v___x_2338_);
goto v___jp_988_;
}
}
}
}
else
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26));
v___x_2342_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2341_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2383_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2345_ = v___x_2342_;
v_isShared_2346_ = v_isSharedCheck_2383_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2342_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2383_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v_leanOpts_2347_; lean_object* v_forwardedArgs_2348_; uint8_t v_component_2349_; uint8_t v_printPrefix_2350_; uint8_t v_printLibDir_2351_; uint8_t v_useStdin_2352_; uint8_t v_onlyDeps_2353_; uint8_t v_onlySrcDeps_2354_; uint8_t v_depsJson_2355_; lean_object* v_opts_2356_; uint32_t v_trustLevel_2357_; uint32_t v_numThreads_2358_; lean_object* v_rootDir_x3f_2359_; lean_object* v_setupFileName_x3f_2360_; lean_object* v_ileanFileName_x3f_2361_; lean_object* v_cFileName_x3f_2362_; lean_object* v_bcFileName_x3f_2363_; uint8_t v_jsonOutput_2364_; lean_object* v_errorOnKinds_2365_; uint8_t v_printStats_2366_; uint8_t v_run_2367_; lean_object* v_incrSaveFileName_x3f_2368_; lean_object* v_incrLoadFileName_x3f_2369_; lean_object* v_incrHeaderSaveFileName_x3f_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2381_; 
v_leanOpts_2347_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2348_ = lean_ctor_get(v_opts_939_, 1);
v_component_2349_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2350_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2351_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2352_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2353_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2354_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2355_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2356_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2357_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2358_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2359_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2360_ = lean_ctor_get(v_opts_939_, 4);
v_ileanFileName_x3f_2361_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2362_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2363_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2364_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2365_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2366_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2367_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2368_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2369_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2370_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2381_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2381_ == 0)
{
lean_object* v_unused_2382_; 
v_unused_2382_ = lean_ctor_get(v_opts_939_, 5);
lean_dec(v_unused_2382_);
v___x_2372_ = v_opts_939_;
v_isShared_2373_ = v_isSharedCheck_2381_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2370_);
lean_inc(v_incrLoadFileName_x3f_2369_);
lean_inc(v_incrSaveFileName_x3f_2368_);
lean_inc(v_errorOnKinds_2365_);
lean_inc(v_bcFileName_x3f_2363_);
lean_inc(v_cFileName_x3f_2362_);
lean_inc(v_ileanFileName_x3f_2361_);
lean_inc(v_setupFileName_x3f_2360_);
lean_inc(v_rootDir_x3f_2359_);
lean_inc(v_opts_2356_);
lean_inc(v_forwardedArgs_2348_);
lean_inc(v_leanOpts_2347_);
lean_dec(v_opts_939_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2381_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_a_2343_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 5, v___x_2374_);
v___x_2376_ = v___x_2372_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_leanOpts_2347_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v_forwardedArgs_2348_);
lean_ctor_set(v_reuseFailAlloc_2380_, 2, v_opts_2356_);
lean_ctor_set(v_reuseFailAlloc_2380_, 3, v_rootDir_x3f_2359_);
lean_ctor_set(v_reuseFailAlloc_2380_, 4, v_setupFileName_x3f_2360_);
lean_ctor_set(v_reuseFailAlloc_2380_, 5, v___x_2374_);
lean_ctor_set(v_reuseFailAlloc_2380_, 6, v_ileanFileName_x3f_2361_);
lean_ctor_set(v_reuseFailAlloc_2380_, 7, v_cFileName_x3f_2362_);
lean_ctor_set(v_reuseFailAlloc_2380_, 8, v_bcFileName_x3f_2363_);
lean_ctor_set(v_reuseFailAlloc_2380_, 9, v_errorOnKinds_2365_);
lean_ctor_set(v_reuseFailAlloc_2380_, 10, v_incrSaveFileName_x3f_2368_);
lean_ctor_set(v_reuseFailAlloc_2380_, 11, v_incrLoadFileName_x3f_2369_);
lean_ctor_set(v_reuseFailAlloc_2380_, 12, v_incrHeaderSaveFileName_x3f_2370_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 8, v_component_2349_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 9, v_printPrefix_2350_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 10, v_printLibDir_2351_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 11, v_useStdin_2352_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 12, v_onlyDeps_2353_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 13, v_onlySrcDeps_2354_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 14, v_depsJson_2355_);
lean_ctor_set_uint32(v_reuseFailAlloc_2380_, sizeof(void*)*13, v_trustLevel_2357_);
lean_ctor_set_uint32(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 4, v_numThreads_2358_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 15, v_jsonOutput_2364_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 16, v_printStats_2366_);
lean_ctor_set_uint8(v_reuseFailAlloc_2380_, sizeof(void*)*13 + 17, v_run_2367_);
v___x_2376_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2378_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v___x_2376_);
v___x_2378_ = v___x_2345_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
lean_dec_ref(v_opts_939_);
v_a_2384_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2342_, 1);
v___x_2388_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2389_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2388_);
lean_dec_ref(v___x_2389_);
goto v___jp_2385_;
v___jp_2385_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = lean_io_error_to_string(v_a_2384_);
v___x_2387_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2386_);
lean_dec_ref(v___x_2387_);
goto v___jp_1134_;
}
}
}
}
else
{
lean_object* v_leanOpts_2390_; lean_object* v_forwardedArgs_2391_; uint8_t v_component_2392_; uint8_t v_printPrefix_2393_; uint8_t v_printLibDir_2394_; uint8_t v_useStdin_2395_; uint8_t v_onlyDeps_2396_; uint8_t v_onlySrcDeps_2397_; uint8_t v_depsJson_2398_; lean_object* v_opts_2399_; uint32_t v_trustLevel_2400_; uint32_t v_numThreads_2401_; lean_object* v_rootDir_x3f_2402_; lean_object* v_setupFileName_x3f_2403_; lean_object* v_oleanFileName_x3f_2404_; lean_object* v_ileanFileName_x3f_2405_; lean_object* v_cFileName_x3f_2406_; lean_object* v_bcFileName_x3f_2407_; uint8_t v_jsonOutput_2408_; lean_object* v_errorOnKinds_2409_; uint8_t v_printStats_2410_; lean_object* v_incrSaveFileName_x3f_2411_; lean_object* v_incrLoadFileName_x3f_2412_; lean_object* v_incrHeaderSaveFileName_x3f_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2423_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_2390_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2391_ = lean_ctor_get(v_opts_939_, 1);
v_component_2392_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2393_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2394_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2395_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2396_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2397_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2398_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2399_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2400_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2401_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2402_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2403_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2404_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2405_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2406_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2407_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2408_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2409_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2410_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_incrSaveFileName_x3f_2411_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2412_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2413_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2423_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2415_ = v_opts_939_;
v_isShared_2416_ = v_isSharedCheck_2423_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2413_);
lean_inc(v_incrLoadFileName_x3f_2412_);
lean_inc(v_incrSaveFileName_x3f_2411_);
lean_inc(v_errorOnKinds_2409_);
lean_inc(v_bcFileName_x3f_2407_);
lean_inc(v_cFileName_x3f_2406_);
lean_inc(v_ileanFileName_x3f_2405_);
lean_inc(v_oleanFileName_x3f_2404_);
lean_inc(v_setupFileName_x3f_2403_);
lean_inc(v_rootDir_x3f_2402_);
lean_inc(v_opts_2399_);
lean_inc(v_forwardedArgs_2391_);
lean_inc(v_leanOpts_2390_);
lean_dec(v_opts_939_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2423_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2420_; 
v___x_2417_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_2418_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2390_, v___x_2417_, v___x_1182_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2418_);
v___x_2420_ = v___x_2415_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2418_);
lean_ctor_set(v_reuseFailAlloc_2422_, 1, v_forwardedArgs_2391_);
lean_ctor_set(v_reuseFailAlloc_2422_, 2, v_opts_2399_);
lean_ctor_set(v_reuseFailAlloc_2422_, 3, v_rootDir_x3f_2402_);
lean_ctor_set(v_reuseFailAlloc_2422_, 4, v_setupFileName_x3f_2403_);
lean_ctor_set(v_reuseFailAlloc_2422_, 5, v_oleanFileName_x3f_2404_);
lean_ctor_set(v_reuseFailAlloc_2422_, 6, v_ileanFileName_x3f_2405_);
lean_ctor_set(v_reuseFailAlloc_2422_, 7, v_cFileName_x3f_2406_);
lean_ctor_set(v_reuseFailAlloc_2422_, 8, v_bcFileName_x3f_2407_);
lean_ctor_set(v_reuseFailAlloc_2422_, 9, v_errorOnKinds_2409_);
lean_ctor_set(v_reuseFailAlloc_2422_, 10, v_incrSaveFileName_x3f_2411_);
lean_ctor_set(v_reuseFailAlloc_2422_, 11, v_incrLoadFileName_x3f_2412_);
lean_ctor_set(v_reuseFailAlloc_2422_, 12, v_incrHeaderSaveFileName_x3f_2413_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 8, v_component_2392_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 9, v_printPrefix_2393_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 10, v_printLibDir_2394_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 11, v_useStdin_2395_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 12, v_onlyDeps_2396_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 13, v_onlySrcDeps_2397_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 14, v_depsJson_2398_);
lean_ctor_set_uint32(v_reuseFailAlloc_2422_, sizeof(void*)*13, v_trustLevel_2400_);
lean_ctor_set_uint32(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 4, v_numThreads_2401_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 15, v_jsonOutput_2408_);
lean_ctor_set_uint8(v_reuseFailAlloc_2422_, sizeof(void*)*13 + 16, v_printStats_2410_);
v___x_2420_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
lean_object* v___x_2421_; 
lean_ctor_set_uint8(v___x_2420_, sizeof(void*)*13 + 17, v___x_1184_);
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
return v___x_2421_;
}
}
}
}
else
{
lean_object* v_leanOpts_2424_; lean_object* v_forwardedArgs_2425_; uint8_t v_component_2426_; uint8_t v_printPrefix_2427_; uint8_t v_printLibDir_2428_; uint8_t v_onlyDeps_2429_; uint8_t v_onlySrcDeps_2430_; uint8_t v_depsJson_2431_; lean_object* v_opts_2432_; uint32_t v_trustLevel_2433_; uint32_t v_numThreads_2434_; lean_object* v_rootDir_x3f_2435_; lean_object* v_setupFileName_x3f_2436_; lean_object* v_oleanFileName_x3f_2437_; lean_object* v_ileanFileName_x3f_2438_; lean_object* v_cFileName_x3f_2439_; lean_object* v_bcFileName_x3f_2440_; uint8_t v_jsonOutput_2441_; lean_object* v_errorOnKinds_2442_; uint8_t v_printStats_2443_; uint8_t v_run_2444_; lean_object* v_incrSaveFileName_x3f_2445_; lean_object* v_incrLoadFileName_x3f_2446_; lean_object* v_incrHeaderSaveFileName_x3f_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2455_; 
lean_dec(v_optArg_x3f_941_);
v_leanOpts_2424_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2425_ = lean_ctor_get(v_opts_939_, 1);
v_component_2426_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2427_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2428_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_onlyDeps_2429_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2430_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2431_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2432_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2433_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2434_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2435_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2436_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2437_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2438_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2439_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2440_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2441_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2442_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2443_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2444_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2445_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2446_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2447_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2455_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2449_ = v_opts_939_;
v_isShared_2450_ = v_isSharedCheck_2455_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2447_);
lean_inc(v_incrLoadFileName_x3f_2446_);
lean_inc(v_incrSaveFileName_x3f_2445_);
lean_inc(v_errorOnKinds_2442_);
lean_inc(v_bcFileName_x3f_2440_);
lean_inc(v_cFileName_x3f_2439_);
lean_inc(v_ileanFileName_x3f_2438_);
lean_inc(v_oleanFileName_x3f_2437_);
lean_inc(v_setupFileName_x3f_2436_);
lean_inc(v_rootDir_x3f_2435_);
lean_inc(v_opts_2432_);
lean_inc(v_forwardedArgs_2425_);
lean_inc(v_leanOpts_2424_);
lean_dec(v_opts_939_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2455_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v_leanOpts_2424_);
lean_ctor_set(v_reuseFailAlloc_2454_, 1, v_forwardedArgs_2425_);
lean_ctor_set(v_reuseFailAlloc_2454_, 2, v_opts_2432_);
lean_ctor_set(v_reuseFailAlloc_2454_, 3, v_rootDir_x3f_2435_);
lean_ctor_set(v_reuseFailAlloc_2454_, 4, v_setupFileName_x3f_2436_);
lean_ctor_set(v_reuseFailAlloc_2454_, 5, v_oleanFileName_x3f_2437_);
lean_ctor_set(v_reuseFailAlloc_2454_, 6, v_ileanFileName_x3f_2438_);
lean_ctor_set(v_reuseFailAlloc_2454_, 7, v_cFileName_x3f_2439_);
lean_ctor_set(v_reuseFailAlloc_2454_, 8, v_bcFileName_x3f_2440_);
lean_ctor_set(v_reuseFailAlloc_2454_, 9, v_errorOnKinds_2442_);
lean_ctor_set(v_reuseFailAlloc_2454_, 10, v_incrSaveFileName_x3f_2445_);
lean_ctor_set(v_reuseFailAlloc_2454_, 11, v_incrLoadFileName_x3f_2446_);
lean_ctor_set(v_reuseFailAlloc_2454_, 12, v_incrHeaderSaveFileName_x3f_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 8, v_component_2426_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 9, v_printPrefix_2427_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 10, v_printLibDir_2428_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 12, v_onlyDeps_2429_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 13, v_onlySrcDeps_2430_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 14, v_depsJson_2431_);
lean_ctor_set_uint32(v_reuseFailAlloc_2454_, sizeof(void*)*13, v_trustLevel_2433_);
lean_ctor_set_uint32(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 4, v_numThreads_2434_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 15, v_jsonOutput_2441_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 16, v_printStats_2443_);
lean_ctor_set_uint8(v_reuseFailAlloc_2454_, sizeof(void*)*13 + 17, v_run_2444_);
v___x_2452_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
lean_object* v___x_2453_; 
lean_ctor_set_uint8(v___x_2452_, sizeof(void*)*13 + 11, v___x_1182_);
v___x_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
return v___x_2453_;
}
}
}
}
else
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2456_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27));
v___x_2457_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2456_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2519_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2460_ = v___x_2457_;
v_isShared_2461_ = v_isSharedCheck_2519_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2457_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2519_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2462_ = lean_unsigned_to_nat(0u);
v___x_2463_ = lean_string_utf8_byte_size(v_a_2458_);
lean_inc(v_a_2458_);
v___x_2464_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2464_, 0, v_a_2458_);
lean_ctor_set(v___x_2464_, 1, v___x_2462_);
lean_ctor_set(v___x_2464_, 2, v___x_2463_);
v___x_2465_ = l_String_Slice_toNat_x3f(v___x_2464_);
lean_dec_ref_known(v___x_2464_, 3);
if (lean_obj_tag(v___x_2465_) == 1)
{
lean_object* v_val_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; uint8_t v___x_2474_; 
v_val_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_val_2466_);
lean_dec_ref_known(v___x_2465_, 1);
v___x_2467_ = lean_unsigned_to_nat(4u);
v___x_2468_ = lean_unsigned_to_nat(2u);
v___x_2469_ = lean_nat_shiftr(v_val_2466_, v___x_2468_);
lean_dec(v_val_2466_);
v___x_2470_ = lean_nat_mul(v___x_2469_, v___x_2467_);
lean_dec(v___x_2469_);
v___x_2471_ = lean_unsigned_to_nat(1024u);
v___x_2472_ = lean_nat_mul(v___x_2470_, v___x_2471_);
lean_dec(v___x_2470_);
v___x_2473_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28, &l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once, _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28);
v___x_2474_ = lean_nat_dec_lt(v___x_2472_, v___x_2473_);
if (v___x_2474_ == 0)
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
lean_dec(v___x_2472_);
lean_del_object(v___x_2460_);
lean_dec(v_a_2458_);
lean_dec_ref(v_opts_939_);
v___x_2475_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29));
v___x_2476_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2475_);
lean_dec_ref(v___x_2476_);
goto v___jp_976_;
}
else
{
size_t v___x_2477_; lean_object* v___x_2478_; lean_object* v_leanOpts_2479_; lean_object* v_forwardedArgs_2480_; uint8_t v_component_2481_; uint8_t v_printPrefix_2482_; uint8_t v_printLibDir_2483_; uint8_t v_useStdin_2484_; uint8_t v_onlyDeps_2485_; uint8_t v_onlySrcDeps_2486_; uint8_t v_depsJson_2487_; lean_object* v_opts_2488_; uint32_t v_trustLevel_2489_; uint32_t v_numThreads_2490_; lean_object* v_rootDir_x3f_2491_; lean_object* v_setupFileName_x3f_2492_; lean_object* v_oleanFileName_x3f_2493_; lean_object* v_ileanFileName_x3f_2494_; lean_object* v_cFileName_x3f_2495_; lean_object* v_bcFileName_x3f_2496_; uint8_t v_jsonOutput_2497_; lean_object* v_errorOnKinds_2498_; uint8_t v_printStats_2499_; uint8_t v_run_2500_; lean_object* v_incrSaveFileName_x3f_2501_; lean_object* v_incrLoadFileName_x3f_2502_; lean_object* v_incrHeaderSaveFileName_x3f_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2516_; 
v___x_2477_ = lean_usize_of_nat(v___x_2472_);
lean_dec(v___x_2472_);
v___x_2478_ = lean_internal_set_thread_stack_size(v___x_2477_);
v_leanOpts_2479_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2480_ = lean_ctor_get(v_opts_939_, 1);
v_component_2481_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2482_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2483_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2484_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2485_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2486_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2487_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2488_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2489_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2490_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2491_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2492_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2493_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2494_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2495_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2496_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2497_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2498_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2499_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2500_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2501_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2502_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2503_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2505_ = v_opts_939_;
v_isShared_2506_ = v_isSharedCheck_2516_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2503_);
lean_inc(v_incrLoadFileName_x3f_2502_);
lean_inc(v_incrSaveFileName_x3f_2501_);
lean_inc(v_errorOnKinds_2498_);
lean_inc(v_bcFileName_x3f_2496_);
lean_inc(v_cFileName_x3f_2495_);
lean_inc(v_ileanFileName_x3f_2494_);
lean_inc(v_oleanFileName_x3f_2493_);
lean_inc(v_setupFileName_x3f_2492_);
lean_inc(v_rootDir_x3f_2491_);
lean_inc(v_opts_2488_);
lean_inc(v_forwardedArgs_2480_);
lean_inc(v_leanOpts_2479_);
lean_dec(v_opts_939_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2516_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2511_; 
v___x_2507_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30));
v___x_2508_ = lean_string_append(v___x_2507_, v_a_2458_);
lean_dec(v_a_2458_);
v___x_2509_ = lean_array_push(v_forwardedArgs_2480_, v___x_2508_);
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 1, v___x_2509_);
v___x_2511_ = v___x_2505_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_leanOpts_2479_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v___x_2509_);
lean_ctor_set(v_reuseFailAlloc_2515_, 2, v_opts_2488_);
lean_ctor_set(v_reuseFailAlloc_2515_, 3, v_rootDir_x3f_2491_);
lean_ctor_set(v_reuseFailAlloc_2515_, 4, v_setupFileName_x3f_2492_);
lean_ctor_set(v_reuseFailAlloc_2515_, 5, v_oleanFileName_x3f_2493_);
lean_ctor_set(v_reuseFailAlloc_2515_, 6, v_ileanFileName_x3f_2494_);
lean_ctor_set(v_reuseFailAlloc_2515_, 7, v_cFileName_x3f_2495_);
lean_ctor_set(v_reuseFailAlloc_2515_, 8, v_bcFileName_x3f_2496_);
lean_ctor_set(v_reuseFailAlloc_2515_, 9, v_errorOnKinds_2498_);
lean_ctor_set(v_reuseFailAlloc_2515_, 10, v_incrSaveFileName_x3f_2501_);
lean_ctor_set(v_reuseFailAlloc_2515_, 11, v_incrLoadFileName_x3f_2502_);
lean_ctor_set(v_reuseFailAlloc_2515_, 12, v_incrHeaderSaveFileName_x3f_2503_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 8, v_component_2481_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 9, v_printPrefix_2482_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 10, v_printLibDir_2483_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 11, v_useStdin_2484_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 12, v_onlyDeps_2485_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 13, v_onlySrcDeps_2486_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 14, v_depsJson_2487_);
lean_ctor_set_uint32(v_reuseFailAlloc_2515_, sizeof(void*)*13, v_trustLevel_2489_);
lean_ctor_set_uint32(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 4, v_numThreads_2490_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 15, v_jsonOutput_2497_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 16, v_printStats_2499_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*13 + 17, v_run_2500_);
v___x_2511_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
lean_object* v___x_2513_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 0, v___x_2511_);
v___x_2513_ = v___x_2460_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec(v___x_2465_);
lean_del_object(v___x_2460_);
lean_dec(v_a_2458_);
lean_dec_ref(v_opts_939_);
v___x_2517_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31));
v___x_2518_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2517_);
lean_dec_ref(v___x_2518_);
goto v___jp_973_;
}
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
lean_dec_ref(v_opts_939_);
v_a_2520_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2524_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2525_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2524_);
lean_dec_ref(v___x_2525_);
goto v___jp_2521_;
v___jp_2521_:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = lean_io_error_to_string(v_a_2520_);
v___x_2523_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2522_);
lean_dec_ref(v___x_2523_);
goto v___jp_982_;
}
}
}
}
else
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32));
v___x_2527_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2526_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2527_) == 0)
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2568_; 
v_a_2528_ = lean_ctor_get(v___x_2527_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2530_ = v___x_2527_;
v_isShared_2531_ = v_isSharedCheck_2568_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2527_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2568_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v_leanOpts_2532_; lean_object* v_forwardedArgs_2533_; uint8_t v_component_2534_; uint8_t v_printPrefix_2535_; uint8_t v_printLibDir_2536_; uint8_t v_useStdin_2537_; uint8_t v_onlyDeps_2538_; uint8_t v_onlySrcDeps_2539_; uint8_t v_depsJson_2540_; lean_object* v_opts_2541_; uint32_t v_trustLevel_2542_; uint32_t v_numThreads_2543_; lean_object* v_rootDir_x3f_2544_; lean_object* v_setupFileName_x3f_2545_; lean_object* v_oleanFileName_x3f_2546_; lean_object* v_ileanFileName_x3f_2547_; lean_object* v_cFileName_x3f_2548_; uint8_t v_jsonOutput_2549_; lean_object* v_errorOnKinds_2550_; uint8_t v_printStats_2551_; uint8_t v_run_2552_; lean_object* v_incrSaveFileName_x3f_2553_; lean_object* v_incrLoadFileName_x3f_2554_; lean_object* v_incrHeaderSaveFileName_x3f_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2566_; 
v_leanOpts_2532_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2533_ = lean_ctor_get(v_opts_939_, 1);
v_component_2534_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2535_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2536_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2537_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2538_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2539_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2540_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2541_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2542_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2543_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2544_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2545_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2546_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2547_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2548_ = lean_ctor_get(v_opts_939_, 7);
v_jsonOutput_2549_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2550_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2551_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2552_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2553_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2554_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2555_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2566_ == 0)
{
lean_object* v_unused_2567_; 
v_unused_2567_ = lean_ctor_get(v_opts_939_, 8);
lean_dec(v_unused_2567_);
v___x_2557_ = v_opts_939_;
v_isShared_2558_ = v_isSharedCheck_2566_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2555_);
lean_inc(v_incrLoadFileName_x3f_2554_);
lean_inc(v_incrSaveFileName_x3f_2553_);
lean_inc(v_errorOnKinds_2550_);
lean_inc(v_cFileName_x3f_2548_);
lean_inc(v_ileanFileName_x3f_2547_);
lean_inc(v_oleanFileName_x3f_2546_);
lean_inc(v_setupFileName_x3f_2545_);
lean_inc(v_rootDir_x3f_2544_);
lean_inc(v_opts_2541_);
lean_inc(v_forwardedArgs_2533_);
lean_inc(v_leanOpts_2532_);
lean_dec(v_opts_939_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2566_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2559_; lean_object* v___x_2561_; 
v___x_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2528_);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 8, v___x_2559_);
v___x_2561_ = v___x_2557_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_leanOpts_2532_);
lean_ctor_set(v_reuseFailAlloc_2565_, 1, v_forwardedArgs_2533_);
lean_ctor_set(v_reuseFailAlloc_2565_, 2, v_opts_2541_);
lean_ctor_set(v_reuseFailAlloc_2565_, 3, v_rootDir_x3f_2544_);
lean_ctor_set(v_reuseFailAlloc_2565_, 4, v_setupFileName_x3f_2545_);
lean_ctor_set(v_reuseFailAlloc_2565_, 5, v_oleanFileName_x3f_2546_);
lean_ctor_set(v_reuseFailAlloc_2565_, 6, v_ileanFileName_x3f_2547_);
lean_ctor_set(v_reuseFailAlloc_2565_, 7, v_cFileName_x3f_2548_);
lean_ctor_set(v_reuseFailAlloc_2565_, 8, v___x_2559_);
lean_ctor_set(v_reuseFailAlloc_2565_, 9, v_errorOnKinds_2550_);
lean_ctor_set(v_reuseFailAlloc_2565_, 10, v_incrSaveFileName_x3f_2553_);
lean_ctor_set(v_reuseFailAlloc_2565_, 11, v_incrLoadFileName_x3f_2554_);
lean_ctor_set(v_reuseFailAlloc_2565_, 12, v_incrHeaderSaveFileName_x3f_2555_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 8, v_component_2534_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 9, v_printPrefix_2535_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 10, v_printLibDir_2536_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 11, v_useStdin_2537_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 12, v_onlyDeps_2538_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 13, v_onlySrcDeps_2539_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 14, v_depsJson_2540_);
lean_ctor_set_uint32(v_reuseFailAlloc_2565_, sizeof(void*)*13, v_trustLevel_2542_);
lean_ctor_set_uint32(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 4, v_numThreads_2543_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 15, v_jsonOutput_2549_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 16, v_printStats_2551_);
lean_ctor_set_uint8(v_reuseFailAlloc_2565_, sizeof(void*)*13 + 17, v_run_2552_);
v___x_2561_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2563_; 
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 0, v___x_2561_);
v___x_2563_ = v___x_2530_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v___x_2561_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
lean_dec_ref(v_opts_939_);
v_a_2569_ = lean_ctor_get(v___x_2527_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2527_, 1);
v___x_2573_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2574_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2573_);
lean_dec_ref(v___x_2574_);
goto v___jp_2570_;
v___jp_2570_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2571_ = lean_io_error_to_string(v_a_2569_);
v___x_2572_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2571_);
lean_dec_ref(v___x_2572_);
goto v___jp_1140_;
}
}
}
}
else
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33));
v___x_2576_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2575_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2617_; 
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2579_ = v___x_2576_;
v_isShared_2580_ = v_isSharedCheck_2617_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2576_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2617_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v_leanOpts_2581_; lean_object* v_forwardedArgs_2582_; uint8_t v_component_2583_; uint8_t v_printPrefix_2584_; uint8_t v_printLibDir_2585_; uint8_t v_useStdin_2586_; uint8_t v_onlyDeps_2587_; uint8_t v_onlySrcDeps_2588_; uint8_t v_depsJson_2589_; lean_object* v_opts_2590_; uint32_t v_trustLevel_2591_; uint32_t v_numThreads_2592_; lean_object* v_rootDir_x3f_2593_; lean_object* v_setupFileName_x3f_2594_; lean_object* v_oleanFileName_x3f_2595_; lean_object* v_ileanFileName_x3f_2596_; lean_object* v_bcFileName_x3f_2597_; uint8_t v_jsonOutput_2598_; lean_object* v_errorOnKinds_2599_; uint8_t v_printStats_2600_; uint8_t v_run_2601_; lean_object* v_incrSaveFileName_x3f_2602_; lean_object* v_incrLoadFileName_x3f_2603_; lean_object* v_incrHeaderSaveFileName_x3f_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2615_; 
v_leanOpts_2581_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2582_ = lean_ctor_get(v_opts_939_, 1);
v_component_2583_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2584_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2585_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2586_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2587_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2588_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2589_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2590_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2591_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_numThreads_2592_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2593_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2594_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2595_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2596_ = lean_ctor_get(v_opts_939_, 6);
v_bcFileName_x3f_2597_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2598_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2599_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2600_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2601_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2602_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2603_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2604_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2615_ == 0)
{
lean_object* v_unused_2616_; 
v_unused_2616_ = lean_ctor_get(v_opts_939_, 7);
lean_dec(v_unused_2616_);
v___x_2606_ = v_opts_939_;
v_isShared_2607_ = v_isSharedCheck_2615_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2604_);
lean_inc(v_incrLoadFileName_x3f_2603_);
lean_inc(v_incrSaveFileName_x3f_2602_);
lean_inc(v_errorOnKinds_2599_);
lean_inc(v_bcFileName_x3f_2597_);
lean_inc(v_ileanFileName_x3f_2596_);
lean_inc(v_oleanFileName_x3f_2595_);
lean_inc(v_setupFileName_x3f_2594_);
lean_inc(v_rootDir_x3f_2593_);
lean_inc(v_opts_2590_);
lean_inc(v_forwardedArgs_2582_);
lean_inc(v_leanOpts_2581_);
lean_dec(v_opts_939_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2615_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2608_; lean_object* v___x_2610_; 
v___x_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2608_, 0, v_a_2577_);
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 7, v___x_2608_);
v___x_2610_ = v___x_2606_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_leanOpts_2581_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v_forwardedArgs_2582_);
lean_ctor_set(v_reuseFailAlloc_2614_, 2, v_opts_2590_);
lean_ctor_set(v_reuseFailAlloc_2614_, 3, v_rootDir_x3f_2593_);
lean_ctor_set(v_reuseFailAlloc_2614_, 4, v_setupFileName_x3f_2594_);
lean_ctor_set(v_reuseFailAlloc_2614_, 5, v_oleanFileName_x3f_2595_);
lean_ctor_set(v_reuseFailAlloc_2614_, 6, v_ileanFileName_x3f_2596_);
lean_ctor_set(v_reuseFailAlloc_2614_, 7, v___x_2608_);
lean_ctor_set(v_reuseFailAlloc_2614_, 8, v_bcFileName_x3f_2597_);
lean_ctor_set(v_reuseFailAlloc_2614_, 9, v_errorOnKinds_2599_);
lean_ctor_set(v_reuseFailAlloc_2614_, 10, v_incrSaveFileName_x3f_2602_);
lean_ctor_set(v_reuseFailAlloc_2614_, 11, v_incrLoadFileName_x3f_2603_);
lean_ctor_set(v_reuseFailAlloc_2614_, 12, v_incrHeaderSaveFileName_x3f_2604_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 8, v_component_2583_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 9, v_printPrefix_2584_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 10, v_printLibDir_2585_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 11, v_useStdin_2586_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 12, v_onlyDeps_2587_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 13, v_onlySrcDeps_2588_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 14, v_depsJson_2589_);
lean_ctor_set_uint32(v_reuseFailAlloc_2614_, sizeof(void*)*13, v_trustLevel_2591_);
lean_ctor_set_uint32(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 4, v_numThreads_2592_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 15, v_jsonOutput_2598_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 16, v_printStats_2600_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*13 + 17, v_run_2601_);
v___x_2610_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
lean_object* v___x_2612_; 
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2610_);
v___x_2612_ = v___x_2579_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
}
else
{
lean_object* v_a_2618_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
lean_dec_ref(v_opts_939_);
v_a_2618_ = lean_ctor_get(v___x_2576_, 0);
lean_inc(v_a_2618_);
lean_dec_ref_known(v___x_2576_, 1);
v___x_2622_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2623_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2622_);
lean_dec_ref(v___x_2623_);
goto v___jp_2619_;
v___jp_2619_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2620_ = lean_io_error_to_string(v_a_2618_);
v___x_2621_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2620_);
lean_dec_ref(v___x_2621_);
goto v___jp_970_;
}
}
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
v___x_2624_ = l___private_Lean_Shell_0__Lean_featuresString;
v___x_2625_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2624_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2633_; 
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2633_ == 0)
{
lean_object* v_unused_2634_; 
v_unused_2634_ = lean_ctor_get(v___x_2625_, 0);
lean_dec(v_unused_2634_);
v___x_2627_ = v___x_2625_;
v_isShared_2628_ = v_isSharedCheck_2633_;
goto v_resetjp_2626_;
}
else
{
lean_dec(v___x_2625_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2633_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2629_; lean_object* v___x_2631_; 
v___x_2629_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2628_ == 0)
{
lean_ctor_set_tag(v___x_2627_, 1);
lean_ctor_set(v___x_2627_, 0, v___x_2629_);
v___x_2631_ = v___x_2627_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
else
{
lean_object* v_a_2635_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v_a_2635_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2625_, 1);
v___x_2639_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2640_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2639_);
lean_dec_ref(v___x_2640_);
goto v___jp_2636_;
v___jp_2636_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = lean_io_error_to_string(v_a_2635_);
v___x_2638_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2637_);
lean_dec_ref(v___x_2638_);
goto v___jp_1146_;
}
}
}
}
else
{
lean_object* v___x_2641_; 
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
v___x_2641_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1170_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2649_; 
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; 
v_unused_2650_ = lean_ctor_get(v___x_2641_, 0);
lean_dec(v_unused_2650_);
v___x_2643_ = v___x_2641_;
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
else
{
lean_dec(v___x_2641_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2645_; lean_object* v___x_2647_; 
v___x_2645_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2644_ == 0)
{
lean_ctor_set_tag(v___x_2643_, 1);
lean_ctor_set(v___x_2643_, 0, v___x_2645_);
v___x_2647_ = v___x_2643_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v_a_2651_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2641_, 1);
v___x_2655_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2656_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2655_);
lean_dec_ref(v___x_2656_);
goto v___jp_2652_;
v___jp_2652_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2653_ = lean_io_error_to_string(v_a_2651_);
v___x_2654_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2653_);
lean_dec_ref(v___x_2654_);
goto v___jp_964_;
}
}
}
}
else
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
v___x_2657_ = l_Lean_githash;
v___x_2658_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2657_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2666_; 
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2666_ == 0)
{
lean_object* v_unused_2667_; 
v_unused_2667_ = lean_ctor_get(v___x_2658_, 0);
lean_dec(v_unused_2667_);
v___x_2660_ = v___x_2658_;
v_isShared_2661_ = v_isSharedCheck_2666_;
goto v_resetjp_2659_;
}
else
{
lean_dec(v___x_2658_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2666_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; lean_object* v___x_2664_; 
v___x_2662_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2661_ == 0)
{
lean_ctor_set_tag(v___x_2660_, 1);
lean_ctor_set(v___x_2660_, 0, v___x_2662_);
v___x_2664_ = v___x_2660_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v___x_2662_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v_a_2668_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2672_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2673_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2672_);
lean_dec_ref(v___x_2673_);
goto v___jp_2669_;
v___jp_2669_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = lean_io_error_to_string(v_a_2668_);
v___x_2671_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2670_);
lean_dec_ref(v___x_2671_);
goto v___jp_1152_;
}
}
}
}
else
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
v___x_2674_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_2675_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2674_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2683_; 
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2683_ == 0)
{
lean_object* v_unused_2684_; 
v_unused_2684_ = lean_ctor_get(v___x_2675_, 0);
lean_dec(v_unused_2684_);
v___x_2677_ = v___x_2675_;
v_isShared_2678_ = v_isSharedCheck_2683_;
goto v_resetjp_2676_;
}
else
{
lean_dec(v___x_2675_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2683_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2679_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2678_ == 0)
{
lean_ctor_set_tag(v___x_2677_, 1);
lean_ctor_set(v___x_2677_, 0, v___x_2679_);
v___x_2681_ = v___x_2677_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
else
{
lean_object* v_a_2685_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_a_2685_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2675_, 1);
v___x_2689_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2690_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2689_);
lean_dec_ref(v___x_2690_);
goto v___jp_2686_;
v___jp_2686_:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = lean_io_error_to_string(v_a_2685_);
v___x_2688_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2687_);
lean_dec_ref(v___x_2688_);
goto v___jp_958_;
}
}
}
}
else
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
lean_dec(v_optArg_x3f_941_);
lean_dec_ref(v_opts_939_);
v___x_2691_ = l___private_Lean_Shell_0__Lean_versionHeader;
v___x_2692_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2691_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2700_; 
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v___x_2692_, 0);
lean_dec(v_unused_2701_);
v___x_2694_ = v___x_2692_;
v_isShared_2695_ = v_isSharedCheck_2700_;
goto v_resetjp_2693_;
}
else
{
lean_dec(v___x_2692_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2700_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2696_; lean_object* v___x_2698_; 
v___x_2696_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2695_ == 0)
{
lean_ctor_set_tag(v___x_2694_, 1);
lean_ctor_set(v___x_2694_, 0, v___x_2696_);
v___x_2698_ = v___x_2694_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v_a_2702_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2702_);
lean_dec_ref_known(v___x_2692_, 1);
v___x_2706_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2707_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2706_);
lean_dec_ref(v___x_2707_);
goto v___jp_2703_;
v___jp_2703_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = lean_io_error_to_string(v_a_2702_);
v___x_2705_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2704_);
lean_dec_ref(v___x_2705_);
goto v___jp_1158_;
}
}
}
}
else
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2708_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34));
v___x_2709_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2708_, v_optArg_x3f_941_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2763_; 
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2763_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2763_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2714_ = lean_unsigned_to_nat(0u);
v___x_2715_ = lean_string_utf8_byte_size(v_a_2710_);
lean_inc(v_a_2710_);
v___x_2716_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2716_, 0, v_a_2710_);
lean_ctor_set(v___x_2716_, 1, v___x_2714_);
lean_ctor_set(v___x_2716_, 2, v___x_2715_);
v___x_2717_ = l_String_Slice_toNat_x3f(v___x_2716_);
lean_dec_ref_known(v___x_2716_, 3);
if (lean_obj_tag(v___x_2717_) == 1)
{
lean_object* v_val_2718_; lean_object* v___x_2719_; uint8_t v___x_2720_; 
v_val_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_val_2718_);
lean_dec_ref_known(v___x_2717_, 1);
v___x_2719_ = lean_cstr_to_nat("4294967296");
v___x_2720_ = lean_nat_dec_lt(v_val_2718_, v___x_2719_);
if (v___x_2720_ == 0)
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_dec(v_val_2718_);
lean_del_object(v___x_2712_);
lean_dec(v_a_2710_);
lean_dec_ref(v_opts_939_);
v___x_2721_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35));
v___x_2722_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2721_);
lean_dec_ref(v___x_2722_);
goto v___jp_946_;
}
else
{
lean_object* v_leanOpts_2723_; lean_object* v_forwardedArgs_2724_; uint8_t v_component_2725_; uint8_t v_printPrefix_2726_; uint8_t v_printLibDir_2727_; uint8_t v_useStdin_2728_; uint8_t v_onlyDeps_2729_; uint8_t v_onlySrcDeps_2730_; uint8_t v_depsJson_2731_; lean_object* v_opts_2732_; uint32_t v_trustLevel_2733_; lean_object* v_rootDir_x3f_2734_; lean_object* v_setupFileName_x3f_2735_; lean_object* v_oleanFileName_x3f_2736_; lean_object* v_ileanFileName_x3f_2737_; lean_object* v_cFileName_x3f_2738_; lean_object* v_bcFileName_x3f_2739_; uint8_t v_jsonOutput_2740_; lean_object* v_errorOnKinds_2741_; uint8_t v_printStats_2742_; uint8_t v_run_2743_; lean_object* v_incrSaveFileName_x3f_2744_; lean_object* v_incrLoadFileName_x3f_2745_; lean_object* v_incrHeaderSaveFileName_x3f_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2760_; 
v_leanOpts_2723_ = lean_ctor_get(v_opts_939_, 0);
v_forwardedArgs_2724_ = lean_ctor_get(v_opts_939_, 1);
v_component_2725_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 8);
v_printPrefix_2726_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 9);
v_printLibDir_2727_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 10);
v_useStdin_2728_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 11);
v_onlyDeps_2729_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2730_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 13);
v_depsJson_2731_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 14);
v_opts_2732_ = lean_ctor_get(v_opts_939_, 2);
v_trustLevel_2733_ = lean_ctor_get_uint32(v_opts_939_, sizeof(void*)*13);
v_rootDir_x3f_2734_ = lean_ctor_get(v_opts_939_, 3);
v_setupFileName_x3f_2735_ = lean_ctor_get(v_opts_939_, 4);
v_oleanFileName_x3f_2736_ = lean_ctor_get(v_opts_939_, 5);
v_ileanFileName_x3f_2737_ = lean_ctor_get(v_opts_939_, 6);
v_cFileName_x3f_2738_ = lean_ctor_get(v_opts_939_, 7);
v_bcFileName_x3f_2739_ = lean_ctor_get(v_opts_939_, 8);
v_jsonOutput_2740_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 15);
v_errorOnKinds_2741_ = lean_ctor_get(v_opts_939_, 9);
v_printStats_2742_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 16);
v_run_2743_ = lean_ctor_get_uint8(v_opts_939_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2744_ = lean_ctor_get(v_opts_939_, 10);
v_incrLoadFileName_x3f_2745_ = lean_ctor_get(v_opts_939_, 11);
v_incrHeaderSaveFileName_x3f_2746_ = lean_ctor_get(v_opts_939_, 12);
v_isSharedCheck_2760_ = !lean_is_exclusive(v_opts_939_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2748_ = v_opts_939_;
v_isShared_2749_ = v_isSharedCheck_2760_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2746_);
lean_inc(v_incrLoadFileName_x3f_2745_);
lean_inc(v_incrSaveFileName_x3f_2744_);
lean_inc(v_errorOnKinds_2741_);
lean_inc(v_bcFileName_x3f_2739_);
lean_inc(v_cFileName_x3f_2738_);
lean_inc(v_ileanFileName_x3f_2737_);
lean_inc(v_oleanFileName_x3f_2736_);
lean_inc(v_setupFileName_x3f_2735_);
lean_inc(v_rootDir_x3f_2734_);
lean_inc(v_opts_2732_);
lean_inc(v_forwardedArgs_2724_);
lean_inc(v_leanOpts_2723_);
lean_dec(v_opts_939_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2760_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
uint32_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2755_; 
v___x_2750_ = lean_uint32_of_nat(v_val_2718_);
lean_dec(v_val_2718_);
v___x_2751_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36));
v___x_2752_ = lean_string_append(v___x_2751_, v_a_2710_);
lean_dec(v_a_2710_);
v___x_2753_ = lean_array_push(v_forwardedArgs_2724_, v___x_2752_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 1, v___x_2753_);
v___x_2755_ = v___x_2748_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_leanOpts_2723_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v___x_2753_);
lean_ctor_set(v_reuseFailAlloc_2759_, 2, v_opts_2732_);
lean_ctor_set(v_reuseFailAlloc_2759_, 3, v_rootDir_x3f_2734_);
lean_ctor_set(v_reuseFailAlloc_2759_, 4, v_setupFileName_x3f_2735_);
lean_ctor_set(v_reuseFailAlloc_2759_, 5, v_oleanFileName_x3f_2736_);
lean_ctor_set(v_reuseFailAlloc_2759_, 6, v_ileanFileName_x3f_2737_);
lean_ctor_set(v_reuseFailAlloc_2759_, 7, v_cFileName_x3f_2738_);
lean_ctor_set(v_reuseFailAlloc_2759_, 8, v_bcFileName_x3f_2739_);
lean_ctor_set(v_reuseFailAlloc_2759_, 9, v_errorOnKinds_2741_);
lean_ctor_set(v_reuseFailAlloc_2759_, 10, v_incrSaveFileName_x3f_2744_);
lean_ctor_set(v_reuseFailAlloc_2759_, 11, v_incrLoadFileName_x3f_2745_);
lean_ctor_set(v_reuseFailAlloc_2759_, 12, v_incrHeaderSaveFileName_x3f_2746_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 8, v_component_2725_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 9, v_printPrefix_2726_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 10, v_printLibDir_2727_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 11, v_useStdin_2728_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 12, v_onlyDeps_2729_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 13, v_onlySrcDeps_2730_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 14, v_depsJson_2731_);
lean_ctor_set_uint32(v_reuseFailAlloc_2759_, sizeof(void*)*13, v_trustLevel_2733_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 15, v_jsonOutput_2740_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 16, v_printStats_2742_);
lean_ctor_set_uint8(v_reuseFailAlloc_2759_, sizeof(void*)*13 + 17, v_run_2743_);
v___x_2755_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
lean_object* v___x_2757_; 
lean_ctor_set_uint32(v___x_2755_, sizeof(void*)*13 + 4, v___x_2750_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2755_);
v___x_2757_ = v___x_2712_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
else
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
lean_dec(v___x_2717_);
lean_del_object(v___x_2712_);
lean_dec(v_a_2710_);
lean_dec_ref(v_opts_939_);
v___x_2761_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37));
v___x_2762_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2761_);
lean_dec_ref(v___x_2762_);
goto v___jp_943_;
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
lean_dec_ref(v_opts_939_);
v_a_2764_ = lean_ctor_get(v___x_2709_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2709_, 1);
v___x_2768_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2769_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2768_);
lean_dec_ref(v___x_2769_);
goto v___jp_2765_;
v___jp_2765_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2766_ = lean_io_error_to_string(v_a_2764_);
v___x_2767_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2766_);
lean_dec_ref(v___x_2767_);
goto v___jp_952_;
}
}
}
}
else
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
lean_dec(v_optArg_x3f_941_);
v___x_2770_ = lean_internal_set_exit_on_panic(v___x_1162_);
v___x_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2771_, 0, v_opts_939_);
return v___x_2771_;
}
v___jp_943_:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
v___jp_946_:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
return v___x_948_;
}
v___jp_949_:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v___x_950_);
return v___x_951_;
}
v___jp_952_:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_954_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_953_);
lean_dec_ref(v___x_954_);
goto v___jp_949_;
}
v___jp_955_:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
return v___x_957_;
}
v___jp_958_:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_960_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_959_);
lean_dec_ref(v___x_960_);
goto v___jp_955_;
}
v___jp_961_:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
return v___x_963_;
}
v___jp_964_:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_966_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_965_);
lean_dec_ref(v___x_966_);
goto v___jp_961_;
}
v___jp_967_:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
return v___x_969_;
}
v___jp_970_:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_972_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_971_);
lean_dec_ref(v___x_972_);
goto v___jp_967_;
}
v___jp_973_:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
v___jp_976_:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
return v___x_978_;
}
v___jp_979_:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
v___jp_982_:
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_984_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_983_);
lean_dec_ref(v___x_984_);
goto v___jp_979_;
}
v___jp_985_:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
return v___x_987_;
}
v___jp_988_:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_990_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_989_);
lean_dec_ref(v___x_990_);
goto v___jp_985_;
}
v___jp_991_:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
return v___x_993_;
}
v___jp_994_:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
v___jp_997_:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_999_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_998_);
lean_dec_ref(v___x_999_);
goto v___jp_994_;
}
v___jp_1000_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
v___jp_1003_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
v___jp_1006_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
return v___x_1008_;
}
v___jp_1009_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1011_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1010_);
lean_dec_ref(v___x_1011_);
goto v___jp_1006_;
}
v___jp_1012_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
return v___x_1014_;
}
v___jp_1015_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1017_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1016_);
lean_dec_ref(v___x_1017_);
goto v___jp_1012_;
}
v___jp_1018_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
v___jp_1021_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1023_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1022_);
lean_dec_ref(v___x_1023_);
goto v___jp_1018_;
}
v___jp_1024_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
return v___x_1026_;
}
v___jp_1027_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1029_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1028_);
lean_dec_ref(v___x_1029_);
goto v___jp_1024_;
}
v___jp_1030_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
v___jp_1033_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1035_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1034_);
lean_dec_ref(v___x_1035_);
goto v___jp_1030_;
}
v___jp_1036_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
return v___x_1038_;
}
v___jp_1039_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1041_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1040_);
lean_dec_ref(v___x_1041_);
goto v___jp_1036_;
}
v___jp_1042_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
return v___x_1044_;
}
v___jp_1045_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1047_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1046_);
lean_dec_ref(v___x_1047_);
goto v___jp_1042_;
}
v___jp_1048_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_io_error_to_string(v___y_1049_);
v___x_1051_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1050_);
lean_dec_ref(v___x_1051_);
goto v___jp_1045_;
}
v___jp_1052_:
{
uint8_t v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = 1;
v___x_1054_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1053_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1062_; 
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1062_ == 0)
{
lean_object* v_unused_1063_; 
v_unused_1063_ = lean_ctor_get(v___x_1054_, 0);
lean_dec(v_unused_1063_);
v___x_1056_ = v___x_1054_;
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
else
{
lean_dec(v___x_1054_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_1057_ == 0)
{
lean_ctor_set_tag(v___x_1056_, 1);
lean_ctor_set(v___x_1056_, 0, v___x_1058_);
v___x_1060_ = v___x_1056_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_a_1064_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1054_, 1);
v___x_1065_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1066_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1065_);
lean_dec_ref(v___x_1066_);
v___y_1049_ = v_a_1064_;
goto v___jp_1048_;
}
}
v___jp_1067_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0));
v___x_1069_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1068_);
lean_dec_ref(v___x_1069_);
goto v___jp_1052_;
}
v___jp_1070_:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
return v___x_1072_;
}
v___jp_1073_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1075_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1074_);
lean_dec_ref(v___x_1075_);
goto v___jp_1070_;
}
v___jp_1076_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1077_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
return v___x_1078_;
}
v___jp_1079_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1081_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1080_);
lean_dec_ref(v___x_1081_);
goto v___jp_1076_;
}
v___jp_1082_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
return v___x_1084_;
}
v___jp_1085_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1087_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1086_);
lean_dec_ref(v___x_1087_);
goto v___jp_1082_;
}
v___jp_1088_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
v___jp_1091_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1093_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1092_);
lean_dec_ref(v___x_1093_);
goto v___jp_1088_;
}
v___jp_1094_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
return v___x_1096_;
}
v___jp_1097_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1099_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1098_);
lean_dec_ref(v___x_1099_);
goto v___jp_1094_;
}
v___jp_1100_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
v___jp_1103_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1105_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1104_);
lean_dec_ref(v___x_1105_);
goto v___jp_1100_;
}
v___jp_1106_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = lean_io_error_to_string(v___y_1107_);
v___x_1109_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1108_);
lean_dec_ref(v___x_1109_);
goto v___jp_1097_;
}
v___jp_1110_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
v___jp_1113_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1115_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1114_);
lean_dec_ref(v___x_1115_);
goto v___jp_1110_;
}
v___jp_1116_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
v___jp_1119_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
v___jp_1122_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1124_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1123_);
lean_dec_ref(v___x_1124_);
goto v___jp_1119_;
}
v___jp_1125_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
return v___x_1127_;
}
v___jp_1128_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1130_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1129_);
lean_dec_ref(v___x_1130_);
goto v___jp_1125_;
}
v___jp_1131_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
return v___x_1133_;
}
v___jp_1134_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1136_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1135_);
lean_dec_ref(v___x_1136_);
goto v___jp_1131_;
}
v___jp_1137_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
return v___x_1139_;
}
v___jp_1140_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1142_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1141_);
lean_dec_ref(v___x_1142_);
goto v___jp_1137_;
}
v___jp_1143_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
v___jp_1146_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1148_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1147_);
lean_dec_ref(v___x_1148_);
goto v___jp_1143_;
}
v___jp_1149_:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
v___jp_1152_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1154_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1153_);
lean_dec_ref(v___x_1154_);
goto v___jp_1149_;
}
v___jp_1155_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
return v___x_1157_;
}
v___jp_1158_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1160_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1159_);
lean_dec_ref(v___x_1160_);
goto v___jp_1155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object* v_opts_2772_, lean_object* v_opt_2773_, lean_object* v_optArg_x3f_2774_, lean_object* v_a_2775_){
_start:
{
uint32_t v_opt_boxed_2776_; lean_object* v_res_2777_; 
v_opt_boxed_2776_ = lean_unbox_uint32(v_opt_2773_);
lean_dec(v_opt_2773_);
v_res_2777_ = lean_shell_options_process(v_opts_2772_, v_opt_boxed_2776_, v_optArg_x3f_2774_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(lean_object* v_name_2779_, lean_object* v_f_2780_){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_uv_os_getpid();
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2818_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2785_ = v___x_2782_;
v_isShared_2786_ = v_isSharedCheck_2818_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2782_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2818_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2787_; uint64_t v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v_a_2794_; uint8_t v___x_2808_; lean_object* v___x_2809_; 
v___x_2787_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0));
v___x_2788_ = lean_unbox_uint64(v_a_2783_);
lean_dec(v_a_2783_);
v___x_2789_ = lean_uint64_to_nat(v___x_2788_);
v___x_2790_ = l_Nat_reprFast(v___x_2789_);
v___x_2791_ = lean_string_append(v___x_2787_, v___x_2790_);
lean_dec_ref(v___x_2790_);
lean_inc_ref(v_name_2779_);
v___x_2792_ = l_System_FilePath_addExtension(v_name_2779_, v___x_2791_);
lean_dec_ref(v___x_2791_);
v___x_2808_ = 1;
v___x_2809_ = lean_io_prim_handle_mk(v___x_2792_, v___x_2808_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2811_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc_n(v_a_2810_, 2);
lean_dec_ref_known(v___x_2809_, 1);
v___x_2811_ = lean_apply_2(v_f_2780_, v_a_2810_, lean_box(0));
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v___x_2812_; 
lean_dec_ref_known(v___x_2811_, 1);
v___x_2812_ = lean_io_prim_handle_flush(v_a_2810_);
lean_dec(v_a_2810_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v___x_2813_; 
lean_dec_ref_known(v___x_2812_, 1);
v___x_2813_ = lean_io_rename(v___x_2792_, v_name_2779_);
lean_dec_ref(v_name_2779_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_dec_ref(v___x_2792_);
lean_del_object(v___x_2785_);
return v___x_2813_;
}
else
{
lean_object* v_a_2814_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v_a_2794_ = v_a_2814_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_2815_; 
lean_dec_ref(v_name_2779_);
v_a_2815_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2812_, 1);
v_a_2794_ = v_a_2815_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_2816_; 
lean_dec(v_a_2810_);
lean_dec_ref(v_name_2779_);
v_a_2816_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2811_, 1);
v_a_2794_ = v_a_2816_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_2817_; 
lean_dec_ref(v_f_2780_);
lean_dec_ref(v_name_2779_);
v_a_2817_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___x_2809_, 1);
v_a_2794_ = v_a_2817_;
goto v___jp_2793_;
}
v___jp_2793_:
{
uint8_t v___x_2795_; 
v___x_2795_ = l_System_FilePath_pathExists(v___x_2792_);
if (v___x_2795_ == 0)
{
lean_object* v___x_2797_; 
lean_dec_ref(v___x_2792_);
if (v_isShared_2786_ == 0)
{
lean_ctor_set_tag(v___x_2785_, 1);
lean_ctor_set(v___x_2785_, 0, v_a_2794_);
v___x_2797_ = v___x_2785_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2794_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
else
{
lean_object* v___x_2799_; 
lean_del_object(v___x_2785_);
v___x_2799_ = lean_io_remove_file(v___x_2792_);
lean_dec_ref(v___x_2792_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2806_ == 0)
{
lean_object* v_unused_2807_; 
v_unused_2807_ = lean_ctor_get(v___x_2799_, 0);
lean_dec(v_unused_2807_);
v___x_2801_ = v___x_2799_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_dec(v___x_2799_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
lean_ctor_set_tag(v___x_2801_, 1);
lean_ctor_set(v___x_2801_, 0, v_a_2794_);
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2794_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
else
{
lean_dec(v_a_2794_);
return v___x_2799_;
}
}
}
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v_f_2780_);
lean_dec_ref(v_name_2779_);
v_a_2819_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2782_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2782_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___boxed(lean_object* v_name_2827_, lean_object* v_f_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(v_name_2827_, v_f_2828_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* v_opts_2831_, lean_object* v_opt_2832_){
_start:
{
lean_object* v_name_2833_; lean_object* v_defValue_2834_; lean_object* v_map_2835_; lean_object* v___x_2836_; 
v_name_2833_ = lean_ctor_get(v_opt_2832_, 0);
v_defValue_2834_ = lean_ctor_get(v_opt_2832_, 1);
v_map_2835_ = lean_ctor_get(v_opts_2831_, 0);
v___x_2836_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2835_, v_name_2833_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_inc(v_defValue_2834_);
return v_defValue_2834_;
}
else
{
lean_object* v_val_2837_; 
v_val_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_val_2837_);
lean_dec_ref_known(v___x_2836_, 1);
if (lean_obj_tag(v_val_2837_) == 3)
{
lean_object* v_v_2838_; 
v_v_2838_ = lean_ctor_get(v_val_2837_, 0);
lean_inc(v_v_2838_);
lean_dec_ref_known(v_val_2837_, 1);
return v_v_2838_;
}
else
{
lean_dec(v_val_2837_);
lean_inc(v_defValue_2834_);
return v_defValue_2834_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* v_opts_2839_, lean_object* v_opt_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v_opts_2839_, v_opt_2840_);
lean_dec_ref(v_opt_2840_);
lean_dec_ref(v_opts_2839_);
return v_res_2841_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0));
v___x_2844_ = lean_string_utf8_byte_size(v___x_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object* v_s_2845_){
_start:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; uint8_t v___x_2849_; 
v___x_2846_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0));
v___x_2847_ = lean_string_utf8_byte_size(v_s_2845_);
v___x_2848_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__1);
v___x_2849_ = lean_nat_dec_le(v___x_2848_, v___x_2847_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; 
lean_dec_ref(v_s_2845_);
v___x_2850_ = lean_box(0);
return v___x_2850_;
}
else
{
lean_object* v___x_2851_; uint8_t v___x_2852_; 
v___x_2851_ = lean_unsigned_to_nat(0u);
v___x_2852_ = lean_string_memcmp(v_s_2845_, v___x_2846_, v___x_2851_, v___x_2851_, v___x_2848_);
if (v___x_2852_ == 0)
{
lean_object* v___x_2853_; 
lean_dec_ref(v_s_2845_);
v___x_2853_ = lean_box(0);
return v___x_2853_;
}
else
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
lean_inc_ref(v_s_2845_);
v___x_2854_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2854_, 0, v_s_2845_);
lean_ctor_set(v___x_2854_, 1, v___x_2851_);
lean_ctor_set(v___x_2854_, 2, v___x_2847_);
v___x_2855_ = l_String_Slice_pos_x21(v___x_2854_, v___x_2848_);
lean_dec_ref_known(v___x_2854_, 3);
v___x_2856_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2856_, 0, v_s_2845_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
lean_ctor_set(v___x_2856_, 2, v___x_2847_);
v___x_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2856_);
return v___x_2857_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object* v_s_2858_, lean_object* v_pat_2859_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_s_2858_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object* v_s_2861_, lean_object* v_pat_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(v_s_2861_, v_pat_2862_);
lean_dec_ref(v_pat_2862_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* v_x_2864_, lean_object* v_x_2865_, lean_object* v_v_2866_){
_start:
{
lean_inc_ref(v_v_2866_);
return v_v_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* v_x_2867_, lean_object* v_x_2868_, lean_object* v_v_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l___private_Lean_Shell_0__Lean_shellMain___lam__0(v_x_2867_, v_x_2868_, v_v_2869_);
lean_dec_ref(v_v_2869_);
lean_dec_ref(v_x_2868_);
lean_dec(v_x_2867_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v_fileName_2876_, lean_object* v___x_2877_, lean_object* v___x_2878_, lean_object* v___x_2879_, lean_object* v___x_2880_, lean_object* v___x_2881_, lean_object* v___x_2882_, lean_object* v___x_2883_, lean_object* v___x_2884_, uint8_t v_run_2885_, lean_object* v_mainModuleName_2886_, lean_object* v_out_2887_, uint8_t v___x_2888_, lean_object* v___x_2889_){
_start:
{
lean_object* v_a_2892_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; uint8_t v___x_2900_; lean_object* v___y_2902_; lean_object* v___x_2934_; uint8_t v___y_2936_; lean_object* v_env_2956_; uint8_t v___x_2957_; 
v___x_2895_ = lean_io_get_num_heartbeats();
v___x_2896_ = lean_st_mk_ref(v___x_2874_);
v___x_2897_ = l_Lean_inheritedTraceOptions;
v___x_2898_ = lean_st_ref_get(v___x_2897_);
v___x_2899_ = l_Lean_diagnostics;
v___x_2900_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v___x_2875_, v___x_2899_);
v___x_2934_ = lean_st_ref_get(v___x_2896_);
v_env_2956_ = lean_ctor_get(v___x_2934_, 0);
lean_inc_ref(v_env_2956_);
lean_dec(v___x_2934_);
v___x_2957_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2956_);
lean_dec_ref(v_env_2956_);
if (v___x_2900_ == 0)
{
if (v___x_2957_ == 0)
{
lean_dec_ref(v___x_2889_);
lean_inc(v___x_2896_);
v___y_2902_ = v___x_2896_;
goto v___jp_2901_;
}
else
{
v___y_2936_ = v___x_2900_;
goto v___jp_2935_;
}
}
else
{
v___y_2936_ = v___x_2957_;
goto v___jp_2935_;
}
v___jp_2891_:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2893_ = lean_mk_io_user_error(v_a_2892_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
v___jp_2901_:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2903_ = l_Lean_maxRecDepth;
v___x_2904_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v___x_2875_, v___x_2903_);
lean_inc(v___x_2878_);
v___x_2905_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2905_, 0, v_fileName_2876_);
lean_ctor_set(v___x_2905_, 1, v___x_2877_);
lean_ctor_set(v___x_2905_, 2, v___x_2875_);
lean_ctor_set(v___x_2905_, 3, v___x_2904_);
lean_ctor_set(v___x_2905_, 4, v___x_2878_);
lean_ctor_set(v___x_2905_, 5, v___x_2879_);
lean_ctor_set(v___x_2905_, 6, v___x_2895_);
lean_ctor_set(v___x_2905_, 7, v___x_2880_);
lean_ctor_set(v___x_2905_, 8, v___x_2878_);
lean_ctor_set(v___x_2905_, 9, v___x_2881_);
lean_ctor_set(v___x_2905_, 10, v___x_2882_);
lean_ctor_set(v___x_2905_, 11, v___x_2898_);
v___x_2906_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
lean_ctor_set(v___x_2906_, 1, v___x_2883_);
lean_ctor_set(v___x_2906_, 2, v___x_2884_);
lean_ctor_set_uint8(v___x_2906_, sizeof(void*)*3, v___x_2900_);
lean_ctor_set_uint8(v___x_2906_, sizeof(void*)*3 + 1, v_run_2885_);
v___x_2907_ = l_Lean_Compiler_LCNF_emitC(v_mainModuleName_2886_, v___x_2906_, v___y_2902_);
lean_dec(v___y_2902_);
lean_dec_ref_known(v___x_2906_, 3);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_a_2908_);
lean_dec_ref_known(v___x_2907_, 1);
v___x_2909_ = lean_st_ref_get(v___x_2896_);
lean_dec(v___x_2896_);
lean_dec(v___x_2909_);
v___x_2910_ = lean_string_to_utf8(v_a_2908_);
lean_dec(v_a_2908_);
v___x_2911_ = lean_io_prim_handle_write(v_out_2887_, v___x_2910_);
lean_dec_ref(v___x_2910_);
return v___x_2911_;
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2933_; 
lean_dec(v___x_2896_);
v_a_2912_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2914_ = v___x_2907_;
v_isShared_2915_ = v_isSharedCheck_2933_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2907_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2933_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
if (lean_obj_tag(v_a_2912_) == 0)
{
lean_object* v_msg_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2920_; 
v_msg_2916_ = lean_ctor_get(v_a_2912_, 1);
lean_inc_ref(v_msg_2916_);
lean_dec_ref_known(v_a_2912_, 2);
v___x_2917_ = l_Lean_MessageData_toString(v_msg_2916_);
v___x_2918_ = lean_mk_io_user_error(v___x_2917_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v___x_2918_);
v___x_2920_ = v___x_2914_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2918_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
else
{
lean_object* v_id_2922_; lean_object* v___x_2923_; 
lean_del_object(v___x_2914_);
v_id_2922_ = lean_ctor_get(v_a_2912_, 0);
lean_inc(v_id_2922_);
lean_dec_ref_known(v_a_2912_, 2);
v___x_2923_ = l_Lean_InternalExceptionId_getName(v_id_2922_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
lean_dec(v_id_2922_);
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref_known(v___x_2923_, 1);
v___x_2925_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0));
v___x_2926_ = l_Lean_Name_toString(v_a_2924_, v___x_2888_);
v___x_2927_ = lean_string_append(v___x_2925_, v___x_2926_);
lean_dec_ref(v___x_2926_);
v_a_2892_ = v___x_2927_;
goto v___jp_2891_;
}
else
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
lean_dec_ref_known(v___x_2923_, 1);
v___x_2928_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1));
v___x_2929_ = l_Nat_reprFast(v_id_2922_);
v___x_2930_ = lean_string_append(v___x_2928_, v___x_2929_);
lean_dec_ref(v___x_2929_);
v___x_2931_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2));
v___x_2932_ = lean_string_append(v___x_2930_, v___x_2931_);
v_a_2892_ = v___x_2932_;
goto v___jp_2891_;
}
}
}
}
}
v___jp_2935_:
{
if (v___y_2936_ == 0)
{
lean_object* v___x_2937_; lean_object* v_env_2938_; lean_object* v_nextMacroScope_2939_; lean_object* v_ngen_2940_; lean_object* v_auxDeclNGen_2941_; lean_object* v_traceState_2942_; lean_object* v_messages_2943_; lean_object* v_infoState_2944_; lean_object* v_snapshotTasks_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2954_; 
v___x_2937_ = lean_st_ref_take(v___x_2896_);
v_env_2938_ = lean_ctor_get(v___x_2937_, 0);
v_nextMacroScope_2939_ = lean_ctor_get(v___x_2937_, 1);
v_ngen_2940_ = lean_ctor_get(v___x_2937_, 2);
v_auxDeclNGen_2941_ = lean_ctor_get(v___x_2937_, 3);
v_traceState_2942_ = lean_ctor_get(v___x_2937_, 4);
v_messages_2943_ = lean_ctor_get(v___x_2937_, 6);
v_infoState_2944_ = lean_ctor_get(v___x_2937_, 7);
v_snapshotTasks_2945_ = lean_ctor_get(v___x_2937_, 8);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2954_ == 0)
{
lean_object* v_unused_2955_; 
v_unused_2955_ = lean_ctor_get(v___x_2937_, 5);
lean_dec(v_unused_2955_);
v___x_2947_ = v___x_2937_;
v_isShared_2948_ = v_isSharedCheck_2954_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_snapshotTasks_2945_);
lean_inc(v_infoState_2944_);
lean_inc(v_messages_2943_);
lean_inc(v_traceState_2942_);
lean_inc(v_auxDeclNGen_2941_);
lean_inc(v_ngen_2940_);
lean_inc(v_nextMacroScope_2939_);
lean_inc(v_env_2938_);
lean_dec(v___x_2937_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2954_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2949_; lean_object* v___x_2951_; 
v___x_2949_ = l_Lean_Kernel_enableDiag(v_env_2938_, v___x_2900_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 5, v___x_2889_);
lean_ctor_set(v___x_2947_, 0, v___x_2949_);
v___x_2951_ = v___x_2947_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v___x_2949_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v_nextMacroScope_2939_);
lean_ctor_set(v_reuseFailAlloc_2953_, 2, v_ngen_2940_);
lean_ctor_set(v_reuseFailAlloc_2953_, 3, v_auxDeclNGen_2941_);
lean_ctor_set(v_reuseFailAlloc_2953_, 4, v_traceState_2942_);
lean_ctor_set(v_reuseFailAlloc_2953_, 5, v___x_2889_);
lean_ctor_set(v_reuseFailAlloc_2953_, 6, v_messages_2943_);
lean_ctor_set(v_reuseFailAlloc_2953_, 7, v_infoState_2944_);
lean_ctor_set(v_reuseFailAlloc_2953_, 8, v_snapshotTasks_2945_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_st_ref_put(v___x_2896_, v___x_2951_);
lean_inc(v___x_2896_);
v___y_2902_ = v___x_2896_;
goto v___jp_2901_;
}
}
}
else
{
lean_dec_ref(v___x_2889_);
lean_inc(v___x_2896_);
v___y_2902_ = v___x_2896_;
goto v___jp_2901_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object** _args){
lean_object* v___x_2958_ = _args[0];
lean_object* v___x_2959_ = _args[1];
lean_object* v_fileName_2960_ = _args[2];
lean_object* v___x_2961_ = _args[3];
lean_object* v___x_2962_ = _args[4];
lean_object* v___x_2963_ = _args[5];
lean_object* v___x_2964_ = _args[6];
lean_object* v___x_2965_ = _args[7];
lean_object* v___x_2966_ = _args[8];
lean_object* v___x_2967_ = _args[9];
lean_object* v___x_2968_ = _args[10];
lean_object* v_run_2969_ = _args[11];
lean_object* v_mainModuleName_2970_ = _args[12];
lean_object* v_out_2971_ = _args[13];
lean_object* v___x_2972_ = _args[14];
lean_object* v___x_2973_ = _args[15];
lean_object* v___y_2974_ = _args[16];
_start:
{
uint8_t v_run_boxed_2975_; uint8_t v___x_12447__boxed_2976_; lean_object* v_res_2977_; 
v_run_boxed_2975_ = lean_unbox(v_run_2969_);
v___x_12447__boxed_2976_ = lean_unbox(v___x_2972_);
v_res_2977_ = l___private_Lean_Shell_0__Lean_shellMain___lam__1(v___x_2958_, v___x_2959_, v_fileName_2960_, v___x_2961_, v___x_2962_, v___x_2963_, v___x_2964_, v___x_2965_, v___x_2966_, v___x_2967_, v___x_2968_, v_run_boxed_2975_, v_mainModuleName_2970_, v_out_2971_, v___x_12447__boxed_2976_, v___x_2973_);
lean_dec(v_out_2971_);
return v_res_2977_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = l_Lean_Options_empty;
v___x_2980_ = l_Lean_Core_getMaxHeartbeats(v___x_2979_);
return v___x_2980_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2981_ = lean_unsigned_to_nat(1u);
v___x_2982_ = l_Lean_firstFrontendMacroScope;
v___x_2983_ = lean_nat_add(v___x_2982_, v___x_2981_);
return v___x_2983_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6(void){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2990_ = lean_box(0);
v___x_2991_ = lean_unsigned_to_nat(1u);
v___x_2992_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_2993_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2992_);
lean_ctor_set(v___x_2993_, 1, v___x_2991_);
lean_ctor_set(v___x_2993_, 2, v___x_2990_);
return v___x_2993_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7(void){
_start:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2994_ = lean_unsigned_to_nat(32u);
v___x_2995_ = lean_mk_empty_array_with_capacity(v___x_2994_);
v___x_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
return v___x_2996_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8(void){
_start:
{
lean_object* v___x_2997_; 
v___x_2997_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2997_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9(void){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8);
v___x_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2998_);
return v___x_2999_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9);
v___x_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
return v___x_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2(lean_object* v___x_3002_, uint8_t v___x_3003_, lean_object* v_val_3004_, lean_object* v_fileName_3005_, uint8_t v_run_3006_, lean_object* v_mainModuleName_3007_, lean_object* v___x_3008_, lean_object* v_out_3009_){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; uint64_t v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; size_t v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___f_3039_; lean_object* v___x_3040_; 
v___x_3011_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0));
v___x_3012_ = l_Lean_instInhabitedFileMap_default;
v___x_3013_ = l_Lean_Options_empty;
v___x_3014_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_3015_ = lean_box(0);
v___x_3016_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1);
v___x_3017_ = l_Lean_firstFrontendMacroScope;
v___x_3018_ = lean_box(0);
v___x_3019_ = lean_box(0);
v___x_3020_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2);
v___x_3021_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5));
v___x_3022_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6);
v___x_3023_ = 0ULL;
v___x_3024_ = lean_unsigned_to_nat(32u);
v___x_3025_ = lean_mk_empty_array_with_capacity(v___x_3024_);
v___x_3026_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7);
v___x_3027_ = ((size_t)5ULL);
lean_inc_n(v___x_3002_, 2);
v___x_3028_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3028_, 0, v___x_3026_);
lean_ctor_set(v___x_3028_, 1, v___x_3025_);
lean_ctor_set(v___x_3028_, 2, v___x_3002_);
lean_ctor_set(v___x_3028_, 3, v___x_3002_);
lean_ctor_set_usize(v___x_3028_, 4, v___x_3027_);
lean_inc_ref_n(v___x_3028_, 3);
v___x_3029_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
lean_ctor_set_uint64(v___x_3029_, sizeof(void*)*1, v___x_3023_);
v___x_3030_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9);
v___x_3031_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10);
v___x_3032_ = l_Lean_NameSet_empty;
v___x_3033_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3028_);
lean_ctor_set(v___x_3033_, 1, v___x_3028_);
lean_ctor_set(v___x_3033_, 2, v___x_3032_);
v___x_3034_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3034_, 0, v___x_3030_);
lean_ctor_set(v___x_3034_, 1, v___x_3030_);
lean_ctor_set(v___x_3034_, 2, v___x_3028_);
lean_ctor_set_uint8(v___x_3034_, sizeof(void*)*3, v___x_3003_);
v___x_3035_ = lean_mk_empty_array_with_capacity(v___x_3002_);
v___x_3036_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3036_, 0, v_val_3004_);
lean_ctor_set(v___x_3036_, 1, v___x_3020_);
lean_ctor_set(v___x_3036_, 2, v___x_3021_);
lean_ctor_set(v___x_3036_, 3, v___x_3022_);
lean_ctor_set(v___x_3036_, 4, v___x_3029_);
lean_ctor_set(v___x_3036_, 5, v___x_3031_);
lean_ctor_set(v___x_3036_, 6, v___x_3033_);
lean_ctor_set(v___x_3036_, 7, v___x_3034_);
lean_ctor_set(v___x_3036_, 8, v___x_3035_);
v___x_3037_ = lean_box(v_run_3006_);
v___x_3038_ = lean_box(v___x_3003_);
v___f_3039_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed), 17, 16);
lean_closure_set(v___f_3039_, 0, v___x_3036_);
lean_closure_set(v___f_3039_, 1, v___x_3013_);
lean_closure_set(v___f_3039_, 2, v_fileName_3005_);
lean_closure_set(v___f_3039_, 3, v___x_3012_);
lean_closure_set(v___f_3039_, 4, v___x_3014_);
lean_closure_set(v___f_3039_, 5, v___x_3015_);
lean_closure_set(v___f_3039_, 6, v___x_3016_);
lean_closure_set(v___f_3039_, 7, v___x_3017_);
lean_closure_set(v___f_3039_, 8, v___x_3018_);
lean_closure_set(v___f_3039_, 9, v___x_3002_);
lean_closure_set(v___f_3039_, 10, v___x_3019_);
lean_closure_set(v___f_3039_, 11, v___x_3037_);
lean_closure_set(v___f_3039_, 12, v_mainModuleName_3007_);
lean_closure_set(v___f_3039_, 13, v_out_3009_);
lean_closure_set(v___f_3039_, 14, v___x_3038_);
lean_closure_set(v___f_3039_, 15, v___x_3031_);
v___x_3040_ = l_Lean_profileitIOUnsafe___redArg(v___x_3011_, v___x_3008_, v___f_3039_, v___x_3014_);
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___boxed(lean_object* v___x_3041_, lean_object* v___x_3042_, lean_object* v_val_3043_, lean_object* v_fileName_3044_, lean_object* v_run_3045_, lean_object* v_mainModuleName_3046_, lean_object* v___x_3047_, lean_object* v_out_3048_, lean_object* v___y_3049_){
_start:
{
uint8_t v___x_12651__boxed_3050_; uint8_t v_run_boxed_3051_; lean_object* v_res_3052_; 
v___x_12651__boxed_3050_ = lean_unbox(v___x_3042_);
v_run_boxed_3051_ = lean_unbox(v_run_3045_);
v_res_3052_ = l___private_Lean_Shell_0__Lean_shellMain___lam__2(v___x_3041_, v___x_12651__boxed_3050_, v_val_3043_, v_fileName_3044_, v_run_boxed_3051_, v_mainModuleName_3046_, v___x_3047_, v_out_3048_);
lean_dec_ref(v___x_3047_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(lean_object* v_val_3053_, lean_object* v_a_3054_, lean_object* v_b_3055_){
_start:
{
lean_object* v_str_3056_; lean_object* v_startInclusive_3057_; lean_object* v_endExclusive_3058_; lean_object* v___x_3059_; uint8_t v_decide_3060_; 
v_str_3056_ = lean_ctor_get(v_val_3053_, 0);
v_startInclusive_3057_ = lean_ctor_get(v_val_3053_, 1);
v_endExclusive_3058_ = lean_ctor_get(v_val_3053_, 2);
v___x_3059_ = lean_nat_sub(v_endExclusive_3058_, v_startInclusive_3057_);
v_decide_3060_ = lean_nat_dec_eq(v_a_3054_, v___x_3059_);
lean_dec(v___x_3059_);
if (v_decide_3060_ == 0)
{
lean_object* v___x_3061_; uint32_t v___x_3062_; uint32_t v___x_3063_; uint8_t v___x_3064_; 
v___x_3061_ = lean_nat_add(v_startInclusive_3057_, v_a_3054_);
v___x_3062_ = lean_string_utf8_get_fast(v_str_3056_, v___x_3061_);
v___x_3063_ = 10;
v___x_3064_ = lean_uint32_dec_eq(v___x_3062_, v___x_3063_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
lean_dec(v_a_3054_);
v___x_3065_ = lean_box(0);
v___x_3066_ = lean_string_utf8_next_fast(v_str_3056_, v___x_3061_);
lean_dec(v___x_3061_);
v___x_3067_ = lean_nat_sub(v___x_3066_, v_startInclusive_3057_);
v_a_3054_ = v___x_3067_;
v_b_3055_ = v___x_3065_;
goto _start;
}
else
{
lean_object* v___x_3069_; 
lean_dec(v___x_3061_);
v___x_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3069_, 0, v_a_3054_);
return v___x_3069_;
}
}
else
{
lean_dec(v_a_3054_);
lean_inc(v_b_3055_);
return v_b_3055_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg___boxed(lean_object* v_val_3070_, lean_object* v_a_3071_, lean_object* v_b_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(v_val_3070_, v_a_3071_, v_b_3072_);
lean_dec(v_b_3072_);
lean_dec_ref(v_val_3070_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* v_s_3074_){
_start:
{
uint32_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3076_ = 10;
v___x_3077_ = lean_string_push(v_s_3074_, v___x_3076_);
v___x_3078_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3077_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* v_s_3079_, lean_object* v_a_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v_s_3079_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(lean_object* v_s_3082_){
_start:
{
uint32_t v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3084_ = 10;
v___x_3085_ = lean_string_push(v_s_3082_, v___x_3084_);
v___x_3086_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4___boxed(lean_object* v_s_3087_, lean_object* v_a_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(v_s_3087_);
return v_res_3089_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1(void){
_start:
{
lean_object* v___x_3091_; uint8_t v___x_3092_; 
v___x_3091_ = lean_box(0);
v___x_3092_ = lean_internal_has_address_sanitizer(v___x_3091_);
return v___x_3092_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2(void){
_start:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = lean_box(0);
v___x_3094_ = lean_internal_get_option_overrides(v___x_3093_);
return v___x_3094_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__9(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___x_3104_ = lean_string_utf8_byte_size(v___x_3103_);
return v___x_3104_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3105_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__9, &l___private_Lean_Shell_0__Lean_shellMain___closed__9_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__9);
v___x_3106_ = lean_unsigned_to_nat(0u);
v___x_3107_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___x_3108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3107_);
lean_ctor_set(v___x_3108_, 1, v___x_3106_);
lean_ctor_set(v___x_3108_, 2, v___x_3105_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* v_args_3111_, lean_object* v_opts_3112_){
_start:
{
lean_object* v_fns_3115_; uint8_t v_printPrefix_3140_; 
v_printPrefix_3140_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 9);
if (v_printPrefix_3140_ == 0)
{
uint8_t v_printLibDir_3141_; 
v_printLibDir_3141_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 10);
if (v_printLibDir_3141_ == 0)
{
lean_object* v_leanOpts_3142_; lean_object* v_forwardedArgs_3143_; uint8_t v_component_3144_; uint8_t v_useStdin_3145_; uint8_t v_onlyDeps_3146_; uint8_t v_onlySrcDeps_3147_; uint8_t v_depsJson_3148_; uint32_t v_trustLevel_3149_; lean_object* v_rootDir_x3f_3150_; lean_object* v_setupFileName_x3f_3151_; lean_object* v_oleanFileName_x3f_3152_; lean_object* v_ileanFileName_x3f_3153_; lean_object* v_cFileName_x3f_3154_; lean_object* v_bcFileName_x3f_3155_; uint8_t v_jsonOutput_3156_; lean_object* v_errorOnKinds_3157_; uint8_t v_printStats_3158_; uint8_t v_run_3159_; lean_object* v_incrSaveFileName_x3f_3160_; lean_object* v_incrLoadFileName_x3f_3161_; lean_object* v_incrHeaderSaveFileName_x3f_3162_; lean_object* v___f_3163_; lean_object* v___y_3165_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3184_; uint8_t v___x_3207_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v_mainModuleName_3243_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; lean_object* v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v_contents_3302_; lean_object* v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v_str_3332_; lean_object* v_startInclusive_3333_; lean_object* v_endExclusive_3334_; lean_object* v___y_3335_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3432_; lean_object* v___y_3433_; lean_object* v_fileName_3434_; lean_object* v___y_3439_; lean_object* v___y_3440_; uint8_t v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; uint8_t v___y_3477_; lean_object* v_fst_3478_; lean_object* v_snd_3479_; uint8_t v___y_3481_; lean_object* v___x_3511_; lean_object* v_maxMemory_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v_leanOpts_3142_ = lean_ctor_get(v_opts_3112_, 0);
lean_inc_ref(v_leanOpts_3142_);
v_forwardedArgs_3143_ = lean_ctor_get(v_opts_3112_, 1);
lean_inc_ref(v_forwardedArgs_3143_);
v_component_3144_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 8);
v_useStdin_3145_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 11);
v_onlyDeps_3146_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3147_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 13);
v_depsJson_3148_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 14);
v_trustLevel_3149_ = lean_ctor_get_uint32(v_opts_3112_, sizeof(void*)*13);
v_rootDir_x3f_3150_ = lean_ctor_get(v_opts_3112_, 3);
lean_inc(v_rootDir_x3f_3150_);
v_setupFileName_x3f_3151_ = lean_ctor_get(v_opts_3112_, 4);
lean_inc(v_setupFileName_x3f_3151_);
v_oleanFileName_x3f_3152_ = lean_ctor_get(v_opts_3112_, 5);
lean_inc(v_oleanFileName_x3f_3152_);
v_ileanFileName_x3f_3153_ = lean_ctor_get(v_opts_3112_, 6);
lean_inc(v_ileanFileName_x3f_3153_);
v_cFileName_x3f_3154_ = lean_ctor_get(v_opts_3112_, 7);
lean_inc(v_cFileName_x3f_3154_);
v_bcFileName_x3f_3155_ = lean_ctor_get(v_opts_3112_, 8);
lean_inc(v_bcFileName_x3f_3155_);
v_jsonOutput_3156_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 15);
v_errorOnKinds_3157_ = lean_ctor_get(v_opts_3112_, 9);
lean_inc_ref(v_errorOnKinds_3157_);
v_printStats_3158_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 16);
v_run_3159_ = lean_ctor_get_uint8(v_opts_3112_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3160_ = lean_ctor_get(v_opts_3112_, 10);
lean_inc(v_incrSaveFileName_x3f_3160_);
v_incrLoadFileName_x3f_3161_ = lean_ctor_get(v_opts_3112_, 11);
lean_inc(v_incrLoadFileName_x3f_3161_);
v_incrHeaderSaveFileName_x3f_3162_ = lean_ctor_get(v_opts_3112_, 12);
lean_inc(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec_ref(v_opts_3112_);
v___f_3163_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__0));
v___x_3179_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__2, &l___private_Lean_Shell_0__Lean_shellMain___closed__2_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2);
v___x_3180_ = l_Lean_Options_mergeBy(v___f_3163_, v_leanOpts_3142_, v___x_3179_);
v___x_3207_ = 1;
v___x_3511_ = l___private_Lean_Shell_0__Lean_maxMemory;
v_maxMemory_3512_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v___x_3180_, v___x_3511_);
v___x_3513_ = lean_unsigned_to_nat(0u);
v___x_3514_ = lean_nat_dec_eq(v_maxMemory_3512_, v___x_3513_);
if (v___x_3514_ == 0)
{
size_t v___x_3515_; size_t v___x_3516_; size_t v___x_3517_; size_t v___x_3518_; lean_object* v___x_3519_; 
v___x_3515_ = lean_usize_of_nat(v_maxMemory_3512_);
lean_dec(v_maxMemory_3512_);
v___x_3516_ = ((size_t)10ULL);
v___x_3517_ = lean_usize_shift_left(v___x_3515_, v___x_3516_);
v___x_3518_ = lean_usize_shift_left(v___x_3517_, v___x_3516_);
v___x_3519_ = lean_internal_set_max_memory(v___x_3518_);
goto v___jp_3502_;
}
else
{
lean_dec(v_maxMemory_3512_);
goto v___jp_3502_;
}
v___jp_3164_:
{
lean_object* v___x_3166_; uint8_t v___x_3167_; 
v___x_3166_ = lean_display_cumulative_profiling_times();
v___x_3167_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__1, &l___private_Lean_Shell_0__Lean_shellMain___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1);
if (v___x_3167_ == 0)
{
if (lean_obj_tag(v___y_3165_) == 0)
{
if (v___x_3167_ == 0)
{
uint8_t v___x_3168_; lean_object* v___x_3169_; 
v___x_3168_ = 1;
v___x_3169_ = lean_io_exit(v___x_3168_);
return v___x_3169_;
}
else
{
goto v___jp_3134_;
}
}
else
{
lean_dec_ref_known(v___y_3165_, 1);
goto v___jp_3134_;
}
}
else
{
if (lean_obj_tag(v___y_3165_) == 0)
{
goto v___jp_3137_;
}
else
{
lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3177_; 
v_isSharedCheck_3177_ = !lean_is_exclusive(v___y_3165_);
if (v_isSharedCheck_3177_ == 0)
{
lean_object* v_unused_3178_; 
v_unused_3178_ = lean_ctor_get(v___y_3165_, 0);
lean_dec(v_unused_3178_);
v___x_3171_ = v___y_3165_;
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
else
{
lean_dec(v___y_3165_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
if (v___x_3167_ == 0)
{
lean_del_object(v___x_3171_);
goto v___jp_3137_;
}
else
{
lean_object* v___x_3173_; lean_object* v___x_3175_; 
v___x_3173_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3172_ == 0)
{
lean_ctor_set_tag(v___x_3171_, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3173_);
v___x_3175_ = v___x_3171_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
}
}
}
v___jp_3181_:
{
if (lean_obj_tag(v_bcFileName_x3f_3155_) == 1)
{
lean_object* v_val_3185_; lean_object* v___x_3186_; 
v_val_3185_ = lean_ctor_get(v_bcFileName_x3f_3155_, 0);
lean_inc(v_val_3185_);
lean_dec_ref_known(v_bcFileName_x3f_3155_, 1);
v___x_3186_ = lean_init_llvm();
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
lean_dec_ref_known(v___x_3186_, 1);
v___x_3187_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__3));
v___x_3188_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
lean_closure_set(v___x_3188_, 0, v___y_3182_);
lean_closure_set(v___x_3188_, 1, v___y_3184_);
lean_closure_set(v___x_3188_, 2, v_val_3185_);
v___x_3189_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_3190_ = l_Lean_profileitIOUnsafe___redArg(v___x_3187_, v___x_3180_, v___x_3188_, v___x_3189_);
lean_dec_ref(v___x_3180_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_dec_ref_known(v___x_3190_, 1);
v___y_3165_ = v___y_3183_;
goto v___jp_3164_;
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec(v___y_3183_);
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3190_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3190_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_dec(v_val_3185_);
lean_dec(v___y_3184_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___x_3180_);
v_a_3199_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3186_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3186_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
else
{
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___x_3180_);
lean_dec(v_bcFileName_x3f_3155_);
v___y_3165_ = v___y_3183_;
goto v___jp_3164_;
}
}
v___jp_3208_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
v___x_3210_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3209_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v___x_3211_; 
lean_dec_ref_known(v___x_3210_, 1);
v___x_3211_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3207_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3219_; 
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3219_ == 0)
{
lean_object* v_unused_3220_; 
v_unused_3220_ = lean_ctor_get(v___x_3211_, 0);
lean_dec(v_unused_3220_);
v___x_3213_ = v___x_3211_;
v_isShared_3214_ = v_isSharedCheck_3219_;
goto v_resetjp_3212_;
}
else
{
lean_dec(v___x_3211_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3219_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3215_; lean_object* v___x_3217_; 
v___x_3215_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v___x_3215_);
v___x_3217_ = v___x_3213_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v___x_3215_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
v_a_3221_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3211_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3211_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_a_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
else
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3236_; 
v_a_3229_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3231_ = v___x_3210_;
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3210_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3234_; 
if (v_isShared_3232_ == 0)
{
v___x_3234_ = v___x_3231_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v_a_3229_);
v___x_3234_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
return v___x_3234_;
}
}
}
}
v___jp_3237_:
{
lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; 
v___x_3244_ = lean_unsigned_to_nat(0u);
v___x_3245_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__5));
lean_inc(v_mainModuleName_3243_);
lean_inc_ref(v___x_3180_);
v___x_3246_ = l_Lean_Elab_runFrontend(v___y_3239_, v___x_3180_, v___y_3242_, v_mainModuleName_3243_, v_trustLevel_3149_, v_oleanFileName_x3f_3152_, v_ileanFileName_x3f_3153_, v_jsonOutput_3156_, v_errorOnKinds_3157_, v___x_3245_, v_printStats_3158_, v___y_3241_, v_incrSaveFileName_x3f_3160_, v_incrLoadFileName_x3f_3161_, v_incrHeaderSaveFileName_x3f_3162_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_ileanFileName_x3f_3153_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3272_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3249_ = v___x_3246_;
v_isShared_3250_ = v_isSharedCheck_3272_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3246_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3272_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
if (lean_obj_tag(v_a_3247_) == 1)
{
if (v_run_3159_ == 0)
{
lean_del_object(v___x_3249_);
lean_dec(v___y_3240_);
if (lean_obj_tag(v_cFileName_x3f_3154_) == 1)
{
lean_object* v_val_3251_; lean_object* v_val_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___f_3255_; lean_object* v___x_3256_; 
v_val_3251_ = lean_ctor_get(v_a_3247_, 0);
lean_inc_n(v_val_3251_, 2);
v_val_3252_ = lean_ctor_get(v_cFileName_x3f_3154_, 0);
lean_inc(v_val_3252_);
lean_dec_ref_known(v_cFileName_x3f_3154_, 1);
v___x_3253_ = lean_box(v___x_3207_);
v___x_3254_ = lean_box(v_run_3159_);
lean_inc_ref(v___x_3180_);
lean_inc(v_mainModuleName_3243_);
v___f_3255_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___boxed), 9, 7);
lean_closure_set(v___f_3255_, 0, v___x_3244_);
lean_closure_set(v___f_3255_, 1, v___x_3253_);
lean_closure_set(v___f_3255_, 2, v_val_3251_);
lean_closure_set(v___f_3255_, 3, v___y_3238_);
lean_closure_set(v___f_3255_, 4, v___x_3254_);
lean_closure_set(v___f_3255_, 5, v_mainModuleName_3243_);
lean_closure_set(v___f_3255_, 6, v___x_3180_);
v___x_3256_ = l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(v_val_3252_, v___f_3255_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_dec_ref_known(v___x_3256_, 1);
v___y_3182_ = v_val_3251_;
v___y_3183_ = v_a_3247_;
v___y_3184_ = v_mainModuleName_3243_;
goto v___jp_3181_;
}
else
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3264_; 
lean_dec(v_val_3251_);
lean_dec_ref_known(v_a_3247_, 1);
lean_dec(v_mainModuleName_3243_);
lean_dec_ref(v___x_3180_);
lean_dec(v_bcFileName_x3f_3155_);
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3259_ = v___x_3256_;
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3256_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3262_; 
if (v_isShared_3260_ == 0)
{
v___x_3262_ = v___x_3259_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v_a_3257_);
v___x_3262_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
return v___x_3262_;
}
}
}
}
else
{
lean_object* v_val_3265_; 
lean_dec_ref(v___y_3238_);
lean_dec(v_cFileName_x3f_3154_);
v_val_3265_ = lean_ctor_get(v_a_3247_, 0);
lean_inc(v_val_3265_);
v___y_3182_ = v_val_3265_;
v___y_3183_ = v_a_3247_;
v___y_3184_ = v_mainModuleName_3243_;
goto v___jp_3181_;
}
}
else
{
lean_object* v_val_3266_; uint32_t v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3270_; 
lean_dec(v_mainModuleName_3243_);
lean_dec_ref(v___y_3238_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
v_val_3266_ = lean_ctor_get(v_a_3247_, 0);
lean_inc(v_val_3266_);
lean_dec_ref_known(v_a_3247_, 1);
v___x_3267_ = lean_eval_main(v_val_3266_, v___x_3180_, v___y_3240_);
lean_dec(v___y_3240_);
lean_dec_ref(v___x_3180_);
lean_dec(v_val_3266_);
v___x_3268_ = lean_box_uint32(v___x_3267_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v___x_3268_);
v___x_3270_ = v___x_3249_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v___x_3268_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
else
{
lean_del_object(v___x_3249_);
lean_dec(v_mainModuleName_3243_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3238_);
lean_dec_ref(v___x_3180_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
v___y_3165_ = v_a_3247_;
goto v___jp_3164_;
}
}
}
else
{
lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
lean_dec(v_mainModuleName_3243_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3238_);
lean_dec_ref(v___x_3180_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
v_a_3273_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v___x_3246_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v___x_3246_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
v___jp_3281_:
{
if (lean_obj_tag(v___y_3287_) == 0)
{
lean_object* v_a_3288_; 
v_a_3288_ = lean_ctor_get(v___y_3287_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___y_3287_, 1);
v___y_3238_ = v___y_3282_;
v___y_3239_ = v___y_3283_;
v___y_3240_ = v___y_3284_;
v___y_3241_ = v___y_3285_;
v___y_3242_ = v___y_3286_;
v_mainModuleName_3243_ = v_a_3288_;
goto v___jp_3237_;
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_dec_ref(v___y_3286_);
lean_dec(v___y_3285_);
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec_ref(v___y_3282_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
v_a_3289_ = lean_ctor_get(v___y_3287_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___y_3287_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___y_3287_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___y_3287_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
v___jp_3297_:
{
if (lean_obj_tag(v_setupFileName_x3f_3151_) == 0)
{
lean_object* v___x_3303_; 
v___x_3303_ = lean_box(0);
if (lean_obj_tag(v___y_3300_) == 1)
{
lean_object* v_val_3304_; lean_object* v___x_3305_; 
v_val_3304_ = lean_ctor_get(v___y_3300_, 0);
lean_inc(v_val_3304_);
lean_dec_ref_known(v___y_3300_, 1);
v___x_3305_ = l_Lean_moduleNameOfFileName(v_val_3304_, v_rootDir_x3f_3150_);
if (lean_obj_tag(v___x_3305_) == 0)
{
v___y_3282_ = v___y_3298_;
v___y_3283_ = v_contents_3302_;
v___y_3284_ = v___y_3299_;
v___y_3285_ = v___x_3303_;
v___y_3286_ = v___y_3301_;
v___y_3287_ = v___x_3305_;
goto v___jp_3281_;
}
else
{
if (lean_obj_tag(v_oleanFileName_x3f_3152_) == 0)
{
if (lean_obj_tag(v_cFileName_x3f_3154_) == 0)
{
lean_object* v___x_3306_; 
lean_dec_ref_known(v___x_3305_, 1);
v___x_3306_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__7));
v___y_3238_ = v___y_3298_;
v___y_3239_ = v_contents_3302_;
v___y_3240_ = v___y_3299_;
v___y_3241_ = v___x_3303_;
v___y_3242_ = v___y_3301_;
v_mainModuleName_3243_ = v___x_3306_;
goto v___jp_3237_;
}
else
{
v___y_3282_ = v___y_3298_;
v___y_3283_ = v_contents_3302_;
v___y_3284_ = v___y_3299_;
v___y_3285_ = v___x_3303_;
v___y_3286_ = v___y_3301_;
v___y_3287_ = v___x_3305_;
goto v___jp_3281_;
}
}
else
{
v___y_3282_ = v___y_3298_;
v___y_3283_ = v_contents_3302_;
v___y_3284_ = v___y_3299_;
v___y_3285_ = v___x_3303_;
v___y_3286_ = v___y_3301_;
v___y_3287_ = v___x_3305_;
goto v___jp_3281_;
}
}
}
else
{
lean_object* v___x_3307_; 
lean_dec(v___y_3300_);
lean_dec(v_rootDir_x3f_3150_);
v___x_3307_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__7));
v___y_3238_ = v___y_3298_;
v___y_3239_ = v_contents_3302_;
v___y_3240_ = v___y_3299_;
v___y_3241_ = v___x_3303_;
v___y_3242_ = v___y_3301_;
v_mainModuleName_3243_ = v___x_3307_;
goto v___jp_3237_;
}
}
else
{
lean_object* v_val_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3326_; 
lean_dec(v___y_3300_);
lean_dec(v_rootDir_x3f_3150_);
v_val_3308_ = lean_ctor_get(v_setupFileName_x3f_3151_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v_setupFileName_x3f_3151_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3310_ = v_setupFileName_x3f_3151_;
v_isShared_3311_ = v_isSharedCheck_3326_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_val_3308_);
lean_dec(v_setupFileName_x3f_3151_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3326_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3312_; 
v___x_3312_ = l_Lean_ModuleSetup_load(v_val_3308_);
lean_dec(v_val_3308_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; lean_object* v_name_3314_; lean_object* v___x_3316_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3312_, 1);
v_name_3314_ = lean_ctor_get(v_a_3313_, 0);
lean_inc(v_name_3314_);
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 0, v_a_3313_);
v___x_3316_ = v___x_3310_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3313_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
v___y_3238_ = v___y_3298_;
v___y_3239_ = v_contents_3302_;
v___y_3240_ = v___y_3299_;
v___y_3241_ = v___x_3316_;
v___y_3242_ = v___y_3301_;
v_mainModuleName_3243_ = v_name_3314_;
goto v___jp_3237_;
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_del_object(v___x_3310_);
lean_dec_ref(v_contents_3302_);
lean_dec_ref(v___y_3301_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
v_a_3318_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3312_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3312_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
}
v___jp_3327_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; uint8_t v___x_3340_; 
v___x_3336_ = lean_nat_add(v_startInclusive_3333_, v___y_3335_);
lean_dec(v___y_3335_);
lean_inc(v___x_3336_);
lean_inc_ref(v_str_3332_);
v___x_3337_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3337_, 0, v_str_3332_);
lean_ctor_set(v___x_3337_, 1, v_startInclusive_3333_);
lean_ctor_set(v___x_3337_, 2, v___x_3336_);
v___x_3338_ = l_String_Slice_trimAscii(v___x_3337_);
v___x_3339_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__10, &l___private_Lean_Shell_0__Lean_shellMain___closed__10_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10);
v___x_3340_ = l_String_Slice_beq(v___x_3338_, v___x_3339_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
lean_dec(v___x_3336_);
lean_dec(v_endExclusive_3334_);
lean_dec_ref(v_str_3332_);
lean_dec_ref(v___y_3331_);
lean_dec(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
v___x_3341_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__11));
v___x_3342_ = l_String_Slice_toString(v___x_3338_);
lean_dec_ref(v___x_3338_);
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
lean_dec_ref(v___x_3342_);
v___x_3344_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_3345_ = lean_string_append(v___x_3343_, v___x_3344_);
v___x_3346_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3345_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3354_; 
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3354_ == 0)
{
lean_object* v_unused_3355_; 
v_unused_3355_ = lean_ctor_get(v___x_3346_, 0);
lean_dec(v_unused_3355_);
v___x_3348_ = v___x_3346_;
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
else
{
lean_dec(v___x_3346_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3350_; lean_object* v___x_3352_; 
v___x_3350_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 0, v___x_3350_);
v___x_3352_ = v___x_3348_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3363_; 
v_a_3356_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3358_ = v___x_3346_;
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_a_3356_);
lean_dec(v___x_3346_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_a_3356_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
}
else
{
lean_object* v___x_3364_; 
lean_dec_ref(v___x_3338_);
v___x_3364_ = lean_string_utf8_extract_fast(v_str_3332_, v___x_3336_, v_endExclusive_3334_);
lean_dec(v_endExclusive_3334_);
lean_dec(v___x_3336_);
lean_dec_ref(v_str_3332_);
v___y_3298_ = v___y_3328_;
v___y_3299_ = v___y_3329_;
v___y_3300_ = v___y_3330_;
v___y_3301_ = v___y_3331_;
v_contents_3302_ = v___x_3364_;
goto v___jp_3297_;
}
}
v___jp_3365_:
{
if (lean_obj_tag(v___y_3369_) == 0)
{
lean_object* v_a_3370_; lean_object* v___x_3371_; 
v_a_3370_ = lean_ctor_get(v___y_3369_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v___y_3369_, 1);
v___x_3371_ = lean_decode_lossy_utf8(v_a_3370_);
lean_dec(v_a_3370_);
if (v_onlyDeps_3146_ == 0)
{
if (v_onlySrcDeps_3147_ == 0)
{
lean_object* v___x_3372_; 
lean_inc_ref(v___x_3371_);
v___x_3372_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v___x_3371_);
if (lean_obj_tag(v___x_3372_) == 1)
{
lean_object* v_val_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
lean_dec_ref(v___x_3371_);
v_val_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_val_3373_);
lean_dec_ref_known(v___x_3372_, 1);
v___x_3374_ = lean_unsigned_to_nat(0u);
v___x_3375_ = lean_box(0);
v___x_3376_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(v_val_3373_, v___x_3374_, v___x_3375_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_str_3377_; lean_object* v_startInclusive_3378_; lean_object* v_endExclusive_3379_; lean_object* v___x_3380_; 
v_str_3377_ = lean_ctor_get(v_val_3373_, 0);
lean_inc_ref(v_str_3377_);
v_startInclusive_3378_ = lean_ctor_get(v_val_3373_, 1);
lean_inc(v_startInclusive_3378_);
v_endExclusive_3379_ = lean_ctor_get(v_val_3373_, 2);
lean_inc(v_endExclusive_3379_);
lean_dec(v_val_3373_);
v___x_3380_ = lean_nat_sub(v_endExclusive_3379_, v_startInclusive_3378_);
lean_inc_ref(v___y_3368_);
v___y_3328_ = v___y_3368_;
v___y_3329_ = v___y_3366_;
v___y_3330_ = v___y_3367_;
v___y_3331_ = v___y_3368_;
v_str_3332_ = v_str_3377_;
v_startInclusive_3333_ = v_startInclusive_3378_;
v_endExclusive_3334_ = v_endExclusive_3379_;
v___y_3335_ = v___x_3380_;
goto v___jp_3327_;
}
else
{
lean_object* v_val_3381_; lean_object* v_str_3382_; lean_object* v_startInclusive_3383_; lean_object* v_endExclusive_3384_; 
v_val_3381_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_val_3381_);
lean_dec_ref_known(v___x_3376_, 1);
v_str_3382_ = lean_ctor_get(v_val_3373_, 0);
lean_inc_ref(v_str_3382_);
v_startInclusive_3383_ = lean_ctor_get(v_val_3373_, 1);
lean_inc(v_startInclusive_3383_);
v_endExclusive_3384_ = lean_ctor_get(v_val_3373_, 2);
lean_inc(v_endExclusive_3384_);
lean_dec(v_val_3373_);
lean_inc_ref(v___y_3368_);
v___y_3328_ = v___y_3368_;
v___y_3329_ = v___y_3366_;
v___y_3330_ = v___y_3367_;
v___y_3331_ = v___y_3368_;
v_str_3332_ = v_str_3382_;
v_startInclusive_3333_ = v_startInclusive_3383_;
v_endExclusive_3334_ = v_endExclusive_3384_;
v___y_3335_ = v_val_3381_;
goto v___jp_3327_;
}
}
else
{
lean_dec(v___x_3372_);
lean_inc_ref(v___y_3368_);
v___y_3298_ = v___y_3368_;
v___y_3299_ = v___y_3366_;
v___y_3300_ = v___y_3367_;
v___y_3301_ = v___y_3368_;
v_contents_3302_ = v___x_3371_;
goto v___jp_3297_;
}
}
else
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
lean_dec(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
v___x_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3385_, 0, v___y_3368_);
v___x_3386_ = l_Lean_Elab_printImportSrcs(v___x_3371_, v___x_3385_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3394_; 
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3394_ == 0)
{
lean_object* v_unused_3395_; 
v_unused_3395_ = lean_ctor_get(v___x_3386_, 0);
lean_dec(v_unused_3395_);
v___x_3388_ = v___x_3386_;
v_isShared_3389_ = v_isSharedCheck_3394_;
goto v_resetjp_3387_;
}
else
{
lean_dec(v___x_3386_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3394_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3390_; lean_object* v___x_3392_; 
v___x_3390_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3389_ == 0)
{
lean_ctor_set(v___x_3388_, 0, v___x_3390_);
v___x_3392_ = v___x_3388_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
else
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3403_; 
v_a_3396_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3398_ = v___x_3386_;
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3386_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3401_; 
if (v_isShared_3399_ == 0)
{
v___x_3401_ = v___x_3398_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_a_3396_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
}
}
else
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
lean_dec(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
v___x_3404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3404_, 0, v___y_3368_);
v___x_3405_ = l_Lean_Elab_printImports(v___x_3371_, v___x_3404_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3413_; 
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3413_ == 0)
{
lean_object* v_unused_3414_; 
v_unused_3414_ = lean_ctor_get(v___x_3405_, 0);
lean_dec(v_unused_3414_);
v___x_3407_ = v___x_3405_;
v_isShared_3408_ = v_isSharedCheck_3413_;
goto v_resetjp_3406_;
}
else
{
lean_dec(v___x_3405_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3413_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3409_; lean_object* v___x_3411_; 
v___x_3409_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 0, v___x_3409_);
v___x_3411_ = v___x_3407_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3409_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
v_a_3415_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3405_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3405_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec_ref(v___y_3368_);
lean_dec(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
v_a_3423_ = lean_ctor_get(v___y_3369_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___y_3369_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___y_3369_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___y_3369_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
v___jp_3431_:
{
if (v_useStdin_3145_ == 0)
{
lean_object* v___x_3435_; 
v___x_3435_ = l_IO_FS_readBinFile(v_fileName_3434_);
v___y_3366_ = v___y_3432_;
v___y_3367_ = v___y_3433_;
v___y_3368_ = v_fileName_3434_;
v___y_3369_ = v___x_3435_;
goto v___jp_3365_;
}
else
{
lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3436_ = lean_get_stdin();
v___x_3437_ = l_IO_FS_Stream_readBinToEnd(v___x_3436_);
v___y_3366_ = v___y_3432_;
v___y_3367_ = v___y_3433_;
v___y_3368_ = v_fileName_3434_;
v___y_3369_ = v___x_3437_;
goto v___jp_3365_;
}
}
v___jp_3438_:
{
if (lean_obj_tag(v___y_3440_) == 1)
{
lean_object* v_val_3441_; 
v_val_3441_ = lean_ctor_get(v___y_3440_, 0);
lean_inc(v_val_3441_);
v___y_3432_ = v___y_3439_;
v___y_3433_ = v___y_3440_;
v_fileName_3434_ = v_val_3441_;
goto v___jp_3431_;
}
else
{
if (v_useStdin_3145_ == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
lean_dec(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
v___x_3442_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
v___x_3443_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3442_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v___x_3444_; 
lean_dec_ref_known(v___x_3443_, 1);
v___x_3444_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3207_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3452_; 
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; 
v_unused_3453_ = lean_ctor_get(v___x_3444_, 0);
lean_dec(v_unused_3453_);
v___x_3446_ = v___x_3444_;
v_isShared_3447_ = v_isSharedCheck_3452_;
goto v_resetjp_3445_;
}
else
{
lean_dec(v___x_3444_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3452_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3448_; lean_object* v___x_3450_; 
v___x_3448_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 0, v___x_3448_);
v___x_3450_ = v___x_3446_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3448_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
return v___x_3450_;
}
}
}
else
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3461_; 
v_a_3454_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3456_ = v___x_3444_;
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3444_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
v_a_3462_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3443_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3443_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
else
{
lean_object* v___x_3470_; 
v___x_3470_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__12));
v___y_3432_ = v___y_3439_;
v___y_3433_ = v___y_3440_;
v_fileName_3434_ = v___x_3470_;
goto v___jp_3431_;
}
}
}
v___jp_3471_:
{
uint8_t v___x_3475_; 
v___x_3475_ = l_List_isEmpty___redArg(v___y_3473_);
if (v___x_3475_ == 0)
{
lean_dec(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
goto v___jp_3208_;
}
else
{
if (v___y_3472_ == 0)
{
v___y_3439_ = v___y_3473_;
v___y_3440_ = v___y_3474_;
goto v___jp_3438_;
}
else
{
lean_dec(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
goto v___jp_3208_;
}
}
}
v___jp_3476_:
{
if (v_run_3159_ == 0)
{
v___y_3472_ = v___y_3477_;
v___y_3473_ = v_snd_3479_;
v___y_3474_ = v_fst_3478_;
goto v___jp_3471_;
}
else
{
if (v___y_3477_ == 0)
{
v___y_3439_ = v_snd_3479_;
v___y_3440_ = v_fst_3478_;
goto v___jp_3438_;
}
else
{
v___y_3472_ = v___y_3477_;
v___y_3473_ = v_snd_3479_;
v___y_3474_ = v_fst_3478_;
goto v___jp_3471_;
}
}
}
v___jp_3480_:
{
if (lean_obj_tag(v_args_3111_) == 0)
{
lean_object* v___x_3482_; 
v___x_3482_ = lean_box(0);
v___y_3477_ = v___y_3481_;
v_fst_3478_ = v___x_3482_;
v_snd_3479_ = v_args_3111_;
goto v___jp_3476_;
}
else
{
lean_object* v_head_3483_; lean_object* v_tail_3484_; lean_object* v___x_3485_; 
v_head_3483_ = lean_ctor_get(v_args_3111_, 0);
lean_inc(v_head_3483_);
v_tail_3484_ = lean_ctor_get(v_args_3111_, 1);
lean_inc(v_tail_3484_);
lean_dec_ref_known(v_args_3111_, 2);
v___x_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3485_, 0, v_head_3483_);
v___y_3477_ = v___y_3481_;
v_fst_3478_ = v___x_3485_;
v_snd_3479_ = v_tail_3484_;
goto v___jp_3476_;
}
}
v___jp_3486_:
{
switch(v_component_3144_)
{
case 0:
{
lean_dec_ref(v_forwardedArgs_3143_);
if (v_onlyDeps_3146_ == 0)
{
v___y_3481_ = v_printLibDir_3141_;
goto v___jp_3480_;
}
else
{
if (v_depsJson_3148_ == 0)
{
v___y_3481_ = v_depsJson_3148_;
goto v___jp_3480_;
}
else
{
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
if (v_useStdin_3145_ == 0)
{
lean_object* v___x_3487_; 
v___x_3487_ = lean_array_mk(v_args_3111_);
v_fns_3115_ = v___x_3487_;
goto v___jp_3114_;
}
else
{
lean_object* v___x_3488_; lean_object* v___x_3489_; 
lean_dec(v_args_3111_);
v___x_3488_ = lean_get_stdin();
v___x_3489_ = l_IO_FS_Stream_lines(v___x_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
v_fns_3115_ = v_a_3490_;
goto v___jp_3114_;
}
else
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
v_a_3491_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3489_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3489_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; 
lean_dec_ref(v___x_3180_);
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
lean_dec(v_args_3111_);
v___x_3499_ = lean_array_to_list(v_forwardedArgs_3143_);
v___x_3500_ = l_Lean_Server_Watchdog_watchdogMain(v___x_3499_);
return v___x_3500_;
}
default: 
{
lean_object* v___x_3501_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3162_);
lean_dec(v_incrLoadFileName_x3f_3161_);
lean_dec(v_incrSaveFileName_x3f_3160_);
lean_dec_ref(v_errorOnKinds_3157_);
lean_dec(v_bcFileName_x3f_3155_);
lean_dec(v_cFileName_x3f_3154_);
lean_dec(v_ileanFileName_x3f_3153_);
lean_dec(v_oleanFileName_x3f_3152_);
lean_dec(v_setupFileName_x3f_3151_);
lean_dec(v_rootDir_x3f_3150_);
lean_dec_ref(v_forwardedArgs_3143_);
lean_dec(v_args_3111_);
v___x_3501_ = l_Lean_Server_FileWorker_workerMain(v___x_3180_);
return v___x_3501_;
}
}
}
v___jp_3502_:
{
lean_object* v___x_3503_; lean_object* v_timeout_3504_; lean_object* v___x_3505_; uint8_t v___x_3506_; 
v___x_3503_ = l___private_Lean_Shell_0__Lean_timeout;
v_timeout_3504_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v___x_3180_, v___x_3503_);
v___x_3505_ = lean_unsigned_to_nat(0u);
v___x_3506_ = lean_nat_dec_eq(v_timeout_3504_, v___x_3505_);
if (v___x_3506_ == 0)
{
size_t v___x_3507_; size_t v___x_3508_; size_t v___x_3509_; lean_object* v___x_3510_; 
v___x_3507_ = lean_usize_of_nat(v_timeout_3504_);
lean_dec(v_timeout_3504_);
v___x_3508_ = ((size_t)1000ULL);
v___x_3509_ = lean_usize_mul(v___x_3507_, v___x_3508_);
v___x_3510_ = lean_internal_set_max_heartbeat(v___x_3509_);
goto v___jp_3486_;
}
else
{
lean_dec(v_timeout_3504_);
goto v___jp_3486_;
}
}
}
else
{
lean_object* v___x_3520_; 
lean_dec_ref(v_opts_3112_);
lean_dec(v_args_3111_);
v___x_3520_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; lean_object* v___x_3522_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3521_);
lean_dec_ref_known(v___x_3520_, 1);
v___x_3522_ = l_Lean_getLibDir(v_a_3521_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3524_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3523_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3524_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(v_a_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3532_; 
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3532_ == 0)
{
lean_object* v_unused_3533_; 
v_unused_3533_ = lean_ctor_get(v___x_3524_, 0);
lean_dec(v_unused_3533_);
v___x_3526_ = v___x_3524_;
v_isShared_3527_ = v_isSharedCheck_3532_;
goto v_resetjp_3525_;
}
else
{
lean_dec(v___x_3524_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3532_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3528_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 0, v___x_3528_);
v___x_3530_ = v___x_3526_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
v_a_3534_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3524_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3524_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
else
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3549_; 
v_a_3542_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3544_ = v___x_3522_;
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3522_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_a_3542_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
return v___x_3547_;
}
}
}
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3557_; 
v_a_3550_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3552_ = v___x_3520_;
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3520_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3555_; 
if (v_isShared_3553_ == 0)
{
v___x_3555_ = v___x_3552_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_a_3550_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
}
else
{
lean_object* v___x_3558_; 
lean_dec_ref(v_opts_3112_);
lean_dec(v_args_3111_);
v___x_3558_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3560_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref_known(v___x_3558_, 1);
v___x_3560_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(v_a_3559_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3568_; 
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3568_ == 0)
{
lean_object* v_unused_3569_; 
v_unused_3569_ = lean_ctor_get(v___x_3560_, 0);
lean_dec(v_unused_3569_);
v___x_3562_ = v___x_3560_;
v_isShared_3563_ = v_isSharedCheck_3568_;
goto v_resetjp_3561_;
}
else
{
lean_dec(v___x_3560_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3568_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3564_; lean_object* v___x_3566_; 
v___x_3564_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v___x_3564_);
v___x_3566_ = v___x_3562_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3564_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
else
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3577_; 
v_a_3570_ = lean_ctor_get(v___x_3560_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3572_ = v___x_3560_;
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3560_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3575_; 
if (v_isShared_3573_ == 0)
{
v___x_3575_ = v___x_3572_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v_a_3570_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
v_a_3578_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3558_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3558_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
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
v___jp_3114_:
{
lean_object* v___x_3116_; 
v___x_3116_ = l_Lean_printImportsJson(v_fns_3115_);
lean_dec_ref(v_fns_3115_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3124_; 
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3124_ == 0)
{
lean_object* v_unused_3125_; 
v_unused_3125_ = lean_ctor_get(v___x_3116_, 0);
lean_dec(v_unused_3125_);
v___x_3118_ = v___x_3116_;
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
else
{
lean_dec(v___x_3116_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3120_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 0, v___x_3120_);
v___x_3122_ = v___x_3118_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
v_a_3126_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3116_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3116_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
v___jp_3134_:
{
uint8_t v___x_3135_; lean_object* v___x_3136_; 
v___x_3135_ = 0;
v___x_3136_ = lean_io_exit(v___x_3135_);
return v___x_3136_;
}
v___jp_3137_:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3138_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_3139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
return v___x_3139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object* v_args_3586_, lean_object* v_opts_3587_, lean_object* v_a_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = lean_shell_main(v_args_3586_, v_opts_3587_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* v_val_3590_, lean_object* v_inst_3591_, lean_object* v_R_3592_, lean_object* v_a_3593_, lean_object* v_b_3594_, lean_object* v_c_3595_){
_start:
{
lean_object* v___x_3596_; 
v___x_3596_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(v_val_3590_, v_a_3593_, v_b_3594_);
return v___x_3596_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* v_val_3597_, lean_object* v_inst_3598_, lean_object* v_R_3599_, lean_object* v_a_3600_, lean_object* v_b_3601_, lean_object* v_c_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_val_3597_, v_inst_3598_, v_R_3599_, v_a_3600_, v_b_3601_, v_c_3602_);
lean_dec(v_b_3601_);
lean_dec_ref(v_val_3597_);
return v_res_3603_;
}
}
lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Process(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_shortVersionString = _init_l___private_Lean_Shell_0__Lean_shortVersionString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString);
l___private_Lean_Shell_0__Lean_versionHeader = _init_l___private_Lean_Shell_0__Lean_versionHeader();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader);
l___private_Lean_Shell_0__Lean_featuresString = _init_l___private_Lean_Shell_0__Lean_featuresString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_featuresString);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_maxMemory = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_maxMemory);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_timeout = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_timeout);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_verbose = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_verbose);
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_defaultTrustLevel = _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel();
l___private_Lean_Shell_0__Lean_defaultNumThreads = _init_l___private_Lean_Shell_0__Lean_defaultNumThreads();
l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1);
l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Std_Async_Process(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Shell(builtin);
}
#ifdef __cplusplus
}
#endif

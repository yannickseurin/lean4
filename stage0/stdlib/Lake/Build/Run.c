// Lean compiler output
// Module: Lake.Build.Run
// Imports: public import Lake.Config.Workspace import Lake.Config.Monad import Lake.Build.Job.Monad import Lake.Build.Index import Init.Omega
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
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
uint8_t l_Lake_BuildConfig_showProgress(lean_object*);
lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_String_quote(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_io_exit(uint8_t);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_CacheMap_writeFile(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_OptDataKind_anonymous___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Bool_decEq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* l_Lake_Ansi_chalk(lean_object*, lean_object*);
lean_object* l_Lake_LogLevel_ansiColor(uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t l_Lake_instOrdJobAction_ord(uint8_t, uint8_t);
lean_object* l_Lake_JobAction_verb(uint8_t, uint8_t);
uint32_t l_Lake_LogLevel_icon(uint8_t);
uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
uint8_t lean_strict_and(uint8_t, uint8_t);
uint8_t l_Lake_Log_maxLv(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_IO_sleep(uint32_t);
lean_object* l_IO_CancelToken_set(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_computeTextFileHash(lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
lean_object* l_Lake_Env_leanGithash(lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
extern lean_object* l_Lean_versionStringCore;
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* lean_io_getenv(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_CancelToken_new();
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "\033[2K\r"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Run_0__Lake_Ansi_resetLine = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__0;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.Build.Run"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "_private.Lake.Build.Run.0.Lake.print!"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__4;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__6;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__8;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Build"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__10;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Run"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__11 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__12;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__13;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__14;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "print!"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__15 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__16;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__17;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__18;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " failed: "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__19 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__20;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__21 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Running "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " (+ "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " more)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ms"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "32"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " (Optional)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk___boxed(lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lake_noBuildCode;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Tracked package not found. (This is likely a bug in Lake.)\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Bool_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instBEqOfDecidableEq___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4_value)} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5_value;
static const lean_array_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "There were issues saving input-to-output mappings from the build:\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Failed to save input-to-output mappings from the build.\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 162, .m_capacity = 162, .m_length = 161, .m_data = ": the artifact cache is not enabled for this package, so the artifacts described by the mappings produced by `-o` will not necessarily be available in the cache."};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "Build missing input-to-output mappings. (This is likely a bug in Lake.)\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "- "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Build completed successfully ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ").\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "All targets up-to-date ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " jobs"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "1 job"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Nothing to build.\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__6;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__7;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__8;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Some required targets logged failures:\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__9_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__10;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__11;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__12;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg();
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "build failed"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "uncaught top-level build failure (this is likely a bug in Lake)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0 = (const lean_object*)&l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "include"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean includes"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lean.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "config.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "version.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mimalloc.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Lean "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "MACOSX_DEPLOYMENT_TARGET"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "99.0"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed__const__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "uncaught top-level build failure (this is likely a bug in the build script)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_Workspace_checkNoBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(3, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_checkNoBuild___redArg___closed__0 = (const lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_checkNoBuild___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 8, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 1, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_checkNoBuild___redArg___closed__1 = (const lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__1_value;
static const lean_string_object l_Lake_Workspace_checkNoBuild___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "job computation"};
static const lean_object* l_Lake_Workspace_checkNoBuild___redArg___closed__2 = (const lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__2_value;
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 10493;
v___x_2_ = lean_box_uint32(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2(void){
_start:
{
uint32_t v___x_3_; lean_object* v___x_4_; 
v___x_3_ = 10491;
v___x_4_ = lean_box_uint32(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3(void){
_start:
{
uint32_t v___x_5_; lean_object* v___x_6_; 
v___x_5_ = 10431;
v___x_6_ = lean_box_uint32(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4(void){
_start:
{
uint32_t v___x_7_; lean_object* v___x_8_; 
v___x_7_ = 10367;
v___x_8_ = lean_box_uint32(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5(void){
_start:
{
uint32_t v___x_9_; lean_object* v___x_10_; 
v___x_9_ = 10463;
v___x_10_ = lean_box_uint32(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6(void){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; 
v___x_11_ = 10479;
v___x_12_ = lean_box_uint32(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7(void){
_start:
{
uint32_t v___x_13_; lean_object* v___x_14_; 
v___x_13_ = 10487;
v___x_14_ = lean_box_uint32(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8(void){
_start:
{
uint32_t v___x_15_; lean_object* v___x_16_; 
v___x_15_ = 10494;
v___x_16_ = lean_box_uint32(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_17_ = lean_unsigned_to_nat(8u);
v___x_18_ = lean_mk_empty_array_with_capacity(v___x_17_);
v___x_19_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8;
v___x_20_ = lean_array_push(v___x_18_, v___x_19_);
v___x_21_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7;
v___x_22_ = lean_array_push(v___x_20_, v___x_21_);
v___x_23_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6;
v___x_24_ = lean_array_push(v___x_22_, v___x_23_);
v___x_25_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5;
v___x_26_ = lean_array_push(v___x_24_, v___x_25_);
v___x_27_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4;
v___x_28_ = lean_array_push(v___x_26_, v___x_27_);
v___x_29_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3;
v___x_30_ = lean_array_push(v___x_28_, v___x_29_);
v___x_31_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2;
v___x_32_ = lean_array_push(v___x_30_, v___x_31_);
v___x_33_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1;
v___x_34_ = lean_array_push(v___x_32_, v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0, &l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0(lean_object* v_out_36_, uint8_t v_outLv_37_, uint8_t v_useAnsi_38_, lean_object* v_e_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_logToStream(v_e_39_, v_out_36_, v_outLv_37_, v_useAnsi_38_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0___boxed(lean_object* v_out_42_, lean_object* v_outLv_43_, lean_object* v_useAnsi_44_, lean_object* v_e_45_, lean_object* v___y_46_){
_start:
{
uint8_t v_outLv_boxed_47_; uint8_t v_useAnsi_boxed_48_; lean_object* v_res_49_; 
v_outLv_boxed_47_ = lean_unbox(v_outLv_43_);
v_useAnsi_boxed_48_ = lean_unbox(v_useAnsi_44_);
v_res_49_ = l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0(v_out_42_, v_outLv_boxed_47_, v_useAnsi_boxed_48_, v_e_45_);
lean_dec_ref(v_e_45_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger(lean_object* v_ctx_50_){
_start:
{
lean_object* v_out_51_; uint8_t v_outLv_52_; uint8_t v_useAnsi_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___f_56_; 
v_out_51_ = lean_ctor_get(v_ctx_50_, 1);
lean_inc_ref(v_out_51_);
v_outLv_52_ = lean_ctor_get_uint8(v_ctx_50_, sizeof(void*)*4);
v_useAnsi_53_ = lean_ctor_get_uint8(v_ctx_50_, sizeof(void*)*4 + 4);
lean_dec_ref(v_ctx_50_);
v___x_54_ = lean_box(v_outLv_52_);
v___x_55_ = lean_box(v_useAnsi_53_);
v___f_56_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0___boxed), 5, 3);
lean_closure_set(v___f_56_, 0, v_out_51_);
lean_closure_set(v___f_56_, 1, v___x_54_);
lean_closure_set(v___f_56_, 2, v___x_55_);
return v___f_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg(lean_object* v_ctx_57_, lean_object* v_s_58_, lean_object* v_self_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_apply_3(v_self_59_, v_ctx_57_, v_s_58_, lean_box(0));
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg___boxed(lean_object* v_ctx_62_, lean_object* v_s_63_, lean_object* v_self_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg(v_ctx_62_, v_s_63_, v_self_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run(lean_object* v_00_u03b1_67_, lean_object* v_ctx_68_, lean_object* v_s_69_, lean_object* v_self_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_apply_3(v_self_70_, v_ctx_68_, v_s_69_, lean_box(0));
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___boxed(lean_object* v_00_u03b1_73_, lean_object* v_ctx_74_, lean_object* v_s_75_, lean_object* v_self_76_, lean_object* v_a_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l___private_Lake_Build_Run_0__Lake_MonitorM_run(v_00_u03b1_73_, v_ctx_74_, v_s_75_, v_self_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush(lean_object* v_out_81_){
_start:
{
lean_object* v_flush_83_; lean_object* v___x_84_; 
v_flush_83_ = lean_ctor_get(v_out_81_, 0);
lean_inc_ref(v_flush_83_);
lean_dec_ref(v_out_81_);
v___x_84_ = lean_apply_1(v_flush_83_, lean_box(0));
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; 
v_a_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_a_85_);
lean_dec_ref_known(v___x_84_, 1);
return v_a_85_;
}
else
{
lean_object* v___x_86_; 
lean_dec_ref_known(v___x_84_, 1);
v___x_86_ = lean_box(0);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush___boxed(lean_object* v_out_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l___private_Lake_Build_Run_0__Lake_flush(v_out_87_);
return v_res_89_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_box(0);
v___x_91_ = l_instMonadBaseIO;
v___x_92_ = l_instInhabitedOfMonad___redArg(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__4(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_box(0);
v___x_97_ = l_unsafeCast___redArg(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__6(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__5));
v___x_100_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__4, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__4);
v___x_101_ = l_Lean_Name_str___override(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__8(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__7));
v___x_104_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__6, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__6);
v___x_105_ = l_Lean_Name_str___override(v___x_104_, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__10(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__9));
v___x_108_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__8, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__8);
v___x_109_ = l_Lean_Name_str___override(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__12(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__11));
v___x_112_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__10, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__10);
v___x_113_ = l_Lean_Name_str___override(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__13(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__12, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__12);
v___x_116_ = l_Lean_Name_num___override(v___x_115_, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__14(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__7));
v___x_118_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__13, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__13);
v___x_119_ = l_Lean_Name_str___override(v___x_118_, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_122_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__14, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__14);
v___x_123_ = l_Lean_Name_str___override(v___x_122_, v___x_121_);
return v___x_123_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__17(void){
_start:
{
uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = 1;
v___x_125_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_126_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_125_, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__18(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__17, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__17);
v___x_128_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_129_ = lean_string_append(v___x_128_, v___x_127_);
return v___x_129_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_132_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__18, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__18);
v___x_133_ = lean_string_append(v___x_132_, v___x_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21(lean_object* v_out_135_, lean_object* v_s_136_){
_start:
{
lean_object* v_putStr_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_putStr_138_ = lean_ctor_get(v_out_135_, 4);
lean_inc_ref(v_putStr_138_);
lean_dec_ref(v_out_135_);
v___x_139_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
lean_inc_ref(v_s_136_);
v___x_140_ = lean_apply_2(v_putStr_138_, v_s_136_, lean_box(0));
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; 
lean_dec_ref(v_s_136_);
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc(v_a_141_);
lean_dec_ref_known(v___x_140_, 1);
return v_a_141_;
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_166_; 
v_a_142_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_166_ == 0)
{
v___x_144_ = v___x_140_;
v_isShared_145_ = v_isSharedCheck_166_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_140_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_166_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_146_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_147_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_148_ = lean_unsigned_to_nat(82u);
v___x_149_ = lean_unsigned_to_nat(4u);
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_152_ = lean_io_error_to_string(v_a_142_);
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
lean_dec_ref(v___x_152_);
v___x_154_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_155_ = lean_string_append(v___x_153_, v___x_154_);
v___x_156_ = l_String_quote(v_s_136_);
if (v_isShared_145_ == 0)
{
lean_ctor_set_tag(v___x_144_, 3);
lean_ctor_set(v___x_144_, 0, v___x_156_);
v___x_158_ = v___x_144_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_165_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_187__overap_163_; lean_object* v___x_164_; 
v___x_159_ = l_Std_Format_defWidth;
v___x_160_ = l_Std_Format_pretty(v___x_158_, v___x_159_, v___x_150_, v___x_150_);
v___x_161_ = lean_string_append(v___x_155_, v___x_160_);
lean_dec_ref(v___x_160_);
v___x_162_ = l_mkPanicMessageWithDecl(v___x_146_, v___x_147_, v___x_148_, v___x_149_, v___x_161_);
lean_dec_ref(v___x_161_);
v___x_187__overap_163_ = l_panic___redArg(v___x_139_, v___x_162_);
v___x_164_ = lean_apply_1(v___x_187__overap_163_, lean_box(0));
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___boxed(lean_object* v_out_167_, lean_object* v_s_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l___private_Lake_Build_Run_0__Lake_print_x21(v_out_167_, v_s_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print(lean_object* v_s_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_val_176_; lean_object* v_out_178_; lean_object* v_putStr_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_out_178_ = lean_ctor_get(v_a_172_, 1);
v_putStr_179_ = lean_ctor_get(v_out_178_, 4);
v___x_180_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
lean_inc_ref(v_putStr_179_);
lean_inc_ref(v_s_171_);
v___x_181_ = lean_apply_2(v_putStr_179_, v_s_171_, lean_box(0));
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; 
lean_dec_ref(v_s_171_);
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v_val_176_ = v_a_182_;
goto v___jp_175_;
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_207_; 
v_a_183_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_207_ == 0)
{
v___x_185_ = v___x_181_;
v_isShared_186_ = v_isSharedCheck_207_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_181_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_207_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_187_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_188_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_189_ = lean_unsigned_to_nat(82u);
v___x_190_ = lean_unsigned_to_nat(4u);
v___x_191_ = lean_unsigned_to_nat(0u);
v___x_192_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_193_ = lean_io_error_to_string(v_a_183_);
v___x_194_ = lean_string_append(v___x_192_, v___x_193_);
lean_dec_ref(v___x_193_);
v___x_195_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_196_ = lean_string_append(v___x_194_, v___x_195_);
v___x_197_ = l_String_quote(v_s_171_);
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 3);
lean_ctor_set(v___x_185_, 0, v___x_197_);
v___x_199_ = v___x_185_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_197_);
v___x_199_ = v_reuseFailAlloc_206_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_1133__overap_204_; lean_object* v___x_205_; 
v___x_200_ = l_Std_Format_defWidth;
v___x_201_ = l_Std_Format_pretty(v___x_199_, v___x_200_, v___x_191_, v___x_191_);
v___x_202_ = lean_string_append(v___x_196_, v___x_201_);
lean_dec_ref(v___x_201_);
v___x_203_ = l_mkPanicMessageWithDecl(v___x_187_, v___x_188_, v___x_189_, v___x_190_, v___x_202_);
lean_dec_ref(v___x_202_);
v___x_1133__overap_204_ = l_panic___redArg(v___x_180_, v___x_203_);
v___x_205_ = lean_apply_1(v___x_1133__overap_204_, lean_box(0));
v_val_176_ = v___x_205_;
goto v___jp_175_;
}
}
}
v___jp_175_:
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v_val_176_);
lean_ctor_set(v___x_177_, 1, v_a_173_);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print___boxed(lean_object* v_s_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lake_Build_Run_0__Lake_Monitor_print(v_s_208_, v_a_209_, v_a_210_);
lean_dec_ref(v_a_209_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush(lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_val_217_; lean_object* v_out_219_; lean_object* v_flush_220_; lean_object* v___x_221_; 
v_out_219_ = lean_ctor_get(v_a_213_, 1);
v_flush_220_ = lean_ctor_get(v_out_219_, 0);
lean_inc_ref(v_flush_220_);
v___x_221_ = lean_apply_1(v_flush_220_, lean_box(0));
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_a_222_);
lean_dec_ref_known(v___x_221_, 1);
v_val_217_ = v_a_222_;
goto v___jp_216_;
}
else
{
lean_object* v___x_223_; 
lean_dec_ref_known(v___x_221_, 1);
v___x_223_ = lean_box(0);
v_val_217_ = v___x_223_;
goto v___jp_216_;
}
v___jp_216_:
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v_val_217_);
lean_ctor_set(v___x_218_, 1, v_a_214_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush___boxed(lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Lake_Build_Run_0__Lake_Monitor_flush(v_a_224_, v_a_225_);
lean_dec_ref(v_a_224_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(lean_object* v_msg_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_7489__overap_231_; lean_object* v___x_232_; 
v___x_230_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_7489__overap_231_ = lean_panic_fn_borrowed(v___x_230_, v_msg_228_);
v___x_232_ = lean_apply_1(v___x_7489__overap_231_, lean_box(0));
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0___boxed(lean_object* v_msg_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v_msg_233_);
return v_res_235_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
v___x_237_ = lean_array_get_size(v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(lean_object* v_running_244_, lean_object* v_unfinished_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
uint8_t v_showProgress_252_; 
v_showProgress_252_ = lean_ctor_get_uint8(v_a_246_, sizeof(void*)*4 + 5);
if (v_showProgress_252_ == 0)
{
goto v___jp_249_;
}
else
{
uint8_t v_useAnsi_253_; 
v_useAnsi_253_ = lean_ctor_get_uint8(v_a_246_, sizeof(void*)*4 + 4);
if (v_useAnsi_253_ == 0)
{
goto v___jp_249_;
}
else
{
lean_object* v_jobNo_254_; lean_object* v_totalJobs_255_; uint8_t v_wantsRebuild_256_; lean_object* v_failures_257_; lean_object* v_resetCtrl_258_; lean_object* v_lastUpdate_259_; lean_object* v_spinnerIdx_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_349_; 
v_jobNo_254_ = lean_ctor_get(v_a_247_, 0);
v_totalJobs_255_ = lean_ctor_get(v_a_247_, 1);
v_wantsRebuild_256_ = lean_ctor_get_uint8(v_a_247_, sizeof(void*)*6);
v_failures_257_ = lean_ctor_get(v_a_247_, 2);
v_resetCtrl_258_ = lean_ctor_get(v_a_247_, 3);
v_lastUpdate_259_ = lean_ctor_get(v_a_247_, 4);
v_spinnerIdx_260_ = lean_ctor_get(v_a_247_, 5);
v_isSharedCheck_349_ = !lean_is_exclusive(v_a_247_);
if (v_isSharedCheck_349_ == 0)
{
v___x_262_ = v_a_247_;
v_isShared_263_ = v_isSharedCheck_349_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_spinnerIdx_260_);
lean_inc(v_lastUpdate_259_);
lean_inc(v_resetCtrl_258_);
lean_inc(v_failures_257_);
lean_inc(v_totalJobs_255_);
lean_inc(v_jobNo_254_);
lean_dec(v_a_247_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_349_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v_out_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_272_; 
v_out_264_ = lean_ctor_get(v_a_246_, 1);
v___x_265_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
v___x_266_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0);
v___x_267_ = lean_array_fget_borrowed(v___x_265_, v_spinnerIdx_260_);
v___x_268_ = lean_unsigned_to_nat(1u);
v___x_269_ = l_Fin_add(v___x_266_, v_spinnerIdx_260_, v___x_268_);
lean_dec(v_spinnerIdx_260_);
v___x_270_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0));
lean_inc(v_totalJobs_255_);
lean_inc(v_jobNo_254_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 5, v___x_269_);
lean_ctor_set(v___x_262_, 3, v___x_270_);
v___x_272_ = v___x_262_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_jobNo_254_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_totalJobs_255_);
lean_ctor_set(v_reuseFailAlloc_348_, 2, v_failures_257_);
lean_ctor_set(v_reuseFailAlloc_348_, 3, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_348_, 4, v_lastUpdate_259_);
lean_ctor_set(v_reuseFailAlloc_348_, 5, v___x_269_);
lean_ctor_set_uint8(v_reuseFailAlloc_348_, sizeof(void*)*6, v_wantsRebuild_256_);
v___x_272_ = v_reuseFailAlloc_348_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v_val_274_; lean_object* v___y_282_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = lean_array_get_size(v_running_244_);
v___x_330_ = lean_nat_dec_lt(v___x_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v_caption_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_331_ = lean_array_get_size(v_unfinished_245_);
v___x_332_ = lean_nat_sub(v___x_331_, v___x_268_);
v___x_333_ = lean_array_fget_borrowed(v_unfinished_245_, v___x_332_);
lean_dec(v___x_332_);
v_caption_334_ = lean_ctor_get(v___x_333_, 2);
v___x_335_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4));
v___x_336_ = lean_string_append(v___x_335_, v_caption_334_);
v___y_282_ = v___x_336_;
goto v___jp_281_;
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v_caption_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_337_ = lean_nat_sub(v___x_329_, v___x_268_);
v___x_338_ = lean_array_fget_borrowed(v_running_244_, v___x_337_);
v_caption_339_ = lean_ctor_get(v___x_338_, 2);
v___x_340_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4));
v___x_341_ = lean_string_append(v___x_340_, v_caption_339_);
v___x_342_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5));
v___x_343_ = lean_string_append(v___x_341_, v___x_342_);
v___x_344_ = l_Nat_reprFast(v___x_337_);
v___x_345_ = lean_string_append(v___x_343_, v___x_344_);
lean_dec_ref(v___x_344_);
v___x_346_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6));
v___x_347_ = lean_string_append(v___x_345_, v___x_346_);
v___y_282_ = v___x_347_;
goto v___jp_281_;
}
v___jp_273_:
{
lean_object* v___x_275_; 
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v_val_274_);
lean_ctor_set(v___x_275_, 1, v___x_272_);
return v___x_275_;
}
v___jp_276_:
{
lean_object* v_flush_277_; lean_object* v___x_278_; 
v_flush_277_ = lean_ctor_get(v_out_264_, 0);
lean_inc_ref(v_flush_277_);
v___x_278_ = lean_apply_1(v_flush_277_, lean_box(0));
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_278_, 1);
v_val_274_ = v_a_279_;
goto v___jp_273_;
}
else
{
lean_object* v___x_280_; 
lean_dec_ref_known(v___x_278_, 1);
v___x_280_ = lean_box(0);
v_val_274_ = v___x_280_;
goto v___jp_273_;
}
}
v___jp_281_:
{
lean_object* v_putStr_283_; lean_object* v___x_284_; uint32_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_putStr_283_ = lean_ctor_get(v_out_264_, 4);
v___x_284_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_285_ = lean_unbox_uint32(v___x_267_);
v___x_286_ = lean_string_push(v___x_284_, v___x_285_);
v___x_287_ = lean_string_append(v_resetCtrl_258_, v___x_286_);
lean_dec_ref(v___x_286_);
v___x_288_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_289_ = lean_string_append(v___x_287_, v___x_288_);
v___x_290_ = l_Nat_reprFast(v_jobNo_254_);
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
lean_dec_ref(v___x_290_);
v___x_292_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
v___x_294_ = l_Nat_reprFast(v_totalJobs_255_);
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_297_ = lean_string_append(v___x_295_, v___x_296_);
v___x_298_ = lean_string_append(v___x_297_, v___y_282_);
lean_dec_ref(v___y_282_);
lean_inc_ref(v_putStr_283_);
lean_inc_ref(v___x_298_);
v___x_299_ = lean_apply_2(v_putStr_283_, v___x_298_, lean_box(0));
if (lean_obj_tag(v___x_299_) == 0)
{
lean_dec_ref_known(v___x_299_, 1);
lean_dec_ref(v___x_298_);
goto v___jp_276_;
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_327_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_327_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_327_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_327_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_304_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_305_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_306_ = lean_unsigned_to_nat(82u);
v___x_307_ = lean_unsigned_to_nat(4u);
v___x_308_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_311_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_310_, v_useAnsi_253_);
v___x_312_ = lean_string_append(v___x_308_, v___x_311_);
lean_dec_ref(v___x_311_);
v___x_313_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
v___x_315_ = lean_io_error_to_string(v_a_300_);
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
lean_dec_ref(v___x_315_);
v___x_317_ = lean_string_append(v___x_316_, v___x_296_);
v___x_318_ = l_String_quote(v___x_298_);
if (v_isShared_303_ == 0)
{
lean_ctor_set_tag(v___x_302_, 3);
lean_ctor_set(v___x_302_, 0, v___x_318_);
v___x_320_ = v___x_302_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_326_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_321_ = l_Std_Format_defWidth;
v___x_322_ = l_Std_Format_pretty(v___x_320_, v___x_321_, v___x_309_, v___x_309_);
v___x_323_ = lean_string_append(v___x_317_, v___x_322_);
lean_dec_ref(v___x_322_);
v___x_324_ = l_mkPanicMessageWithDecl(v___x_304_, v___x_305_, v___x_306_, v___x_307_, v___x_323_);
lean_dec_ref(v___x_323_);
v___x_325_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_324_);
goto v___jp_276_;
}
}
}
}
}
}
}
}
v___jp_249_:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_box(0);
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v_a_247_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___boxed(lean_object* v_running_350_, lean_object* v_unfinished_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_350_, v_unfinished_351_, v_a_352_, v_a_353_);
lean_dec_ref(v_a_352_);
lean_dec_ref(v_unfinished_351_);
lean_dec_ref(v_running_350_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(lean_object* v_running_356_, lean_object* v_unfinished_357_, lean_object* v_h_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_356_, v_unfinished_357_, v_a_359_, v_a_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___boxed(lean_object* v_running_363_, lean_object* v_unfinished_364_, lean_object* v_h_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(v_running_363_, v_unfinished_364_, v_h_365_, v_a_366_, v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec_ref(v_unfinished_364_);
lean_dec_ref(v_running_363_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(lean_object* v_ms_373_){
_start:
{
lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_374_ = lean_unsigned_to_nat(10000u);
v___x_375_ = lean_nat_dec_lt(v___x_374_, v_ms_373_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_376_ = lean_unsigned_to_nat(1000u);
v___x_377_ = lean_nat_dec_lt(v___x_376_, v_ms_373_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = l_Nat_reprFast(v_ms_373_);
v___x_379_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0));
v___x_380_ = lean_string_append(v___x_378_, v___x_379_);
return v___x_380_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_381_ = lean_nat_div(v_ms_373_, v___x_376_);
v___x_382_ = l_Nat_reprFast(v___x_381_);
v___x_383_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1));
v___x_384_ = lean_string_append(v___x_382_, v___x_383_);
v___x_385_ = lean_unsigned_to_nat(50u);
v___x_386_ = lean_nat_add(v_ms_373_, v___x_385_);
lean_dec(v_ms_373_);
v___x_387_ = lean_unsigned_to_nat(100u);
v___x_388_ = lean_nat_div(v___x_386_, v___x_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_unsigned_to_nat(10u);
v___x_390_ = lean_nat_mod(v___x_388_, v___x_389_);
lean_dec(v___x_388_);
v___x_391_ = l_Nat_reprFast(v___x_390_);
v___x_392_ = lean_string_append(v___x_384_, v___x_391_);
lean_dec_ref(v___x_391_);
v___x_393_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2));
v___x_394_ = lean_string_append(v___x_392_, v___x_393_);
return v___x_394_;
}
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_395_ = lean_unsigned_to_nat(1000u);
v___x_396_ = lean_nat_div(v_ms_373_, v___x_395_);
lean_dec(v_ms_373_);
v___x_397_ = l_Nat_reprFast(v___x_396_);
v___x_398_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2));
v___x_399_ = lean_string_append(v___x_397_, v___x_398_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(lean_object* v_out_400_, uint8_t v___y_401_, uint8_t v_useAnsi_402_, lean_object* v_as_403_, size_t v_i_404_, size_t v_stop_405_, lean_object* v_b_406_, lean_object* v___y_407_){
_start:
{
uint8_t v___x_409_; 
v___x_409_ = lean_usize_dec_eq(v_i_404_, v_stop_405_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; size_t v___x_412_; size_t v___x_413_; 
v___x_410_ = lean_array_uget_borrowed(v_as_403_, v_i_404_);
lean_inc_ref(v_out_400_);
v___x_411_ = l_Lake_logToStream(v___x_410_, v_out_400_, v___y_401_, v_useAnsi_402_);
v___x_412_ = ((size_t)1ULL);
v___x_413_ = lean_usize_add(v_i_404_, v___x_412_);
v_i_404_ = v___x_413_;
v_b_406_ = v___x_411_;
goto _start;
}
else
{
lean_object* v___x_415_; 
lean_dec_ref(v_out_400_);
v___x_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_415_, 0, v_b_406_);
lean_ctor_set(v___x_415_, 1, v___y_407_);
return v___x_415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg___boxed(lean_object* v_out_416_, lean_object* v___y_417_, lean_object* v_useAnsi_418_, lean_object* v_as_419_, lean_object* v_i_420_, lean_object* v_stop_421_, lean_object* v_b_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
uint8_t v___y_13777__boxed_425_; uint8_t v_useAnsi_13778__boxed_426_; size_t v_i_boxed_427_; size_t v_stop_boxed_428_; lean_object* v_res_429_; 
v___y_13777__boxed_425_ = lean_unbox(v___y_417_);
v_useAnsi_13778__boxed_426_ = lean_unbox(v_useAnsi_418_);
v_i_boxed_427_ = lean_unbox_usize(v_i_420_);
lean_dec(v_i_420_);
v_stop_boxed_428_ = lean_unbox_usize(v_stop_421_);
lean_dec(v_stop_421_);
v_res_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_416_, v___y_13777__boxed_425_, v_useAnsi_13778__boxed_426_, v_as_419_, v_i_boxed_427_, v_stop_boxed_428_, v_b_422_, v___y_423_);
lean_dec_ref(v_as_419_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(lean_object* v_job_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
lean_object* v___y_442_; lean_object* v___y_446_; lean_object* v_val_447_; lean_object* v___y_450_; lean_object* v___y_451_; lean_object* v_jobNo_457_; lean_object* v_totalJobs_458_; uint8_t v_wantsRebuild_459_; lean_object* v_failures_460_; lean_object* v_resetCtrl_461_; lean_object* v_lastUpdate_462_; lean_object* v_spinnerIdx_463_; lean_object* v_out_464_; uint8_t v_outLv_465_; uint8_t v_failLv_466_; uint8_t v_minAction_467_; uint8_t v_showOptional_468_; uint8_t v_useAnsi_469_; uint8_t v_showProgress_470_; uint8_t v_showTime_471_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; uint8_t v___y_478_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_489_; uint8_t v___y_490_; lean_object* v___y_491_; uint8_t v___y_492_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; uint8_t v___y_498_; lean_object* v___y_499_; uint8_t v___y_500_; lean_object* v___y_501_; uint8_t v___y_502_; lean_object* v___y_503_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; uint8_t v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; uint8_t v___y_565_; lean_object* v___y_566_; uint8_t v___y_567_; lean_object* v___y_568_; lean_object* v_task_570_; lean_object* v_caption_571_; uint8_t v_optional_572_; lean_object* v___y_574_; lean_object* v___y_575_; uint8_t v___y_576_; lean_object* v___y_577_; uint32_t v___y_578_; uint8_t v___y_579_; uint8_t v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; uint8_t v___y_585_; lean_object* v___y_586_; lean_object* v___y_609_; lean_object* v___y_610_; uint8_t v___y_611_; lean_object* v___y_612_; uint32_t v___y_613_; uint8_t v___y_614_; uint8_t v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; uint8_t v___y_620_; lean_object* v___y_623_; uint8_t v___y_624_; lean_object* v___y_625_; uint32_t v___y_626_; uint8_t v___y_627_; uint8_t v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; uint8_t v___y_634_; lean_object* v___y_635_; lean_object* v___y_643_; uint8_t v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; uint8_t v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; uint8_t v___y_651_; uint8_t v___y_652_; lean_object* v___y_653_; uint32_t v___y_654_; lean_object* v___y_658_; uint8_t v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; uint8_t v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; uint8_t v___y_666_; uint8_t v___y_667_; lean_object* v___y_674_; uint8_t v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; uint8_t v___y_681_; uint8_t v___y_682_; uint8_t v___y_683_; uint8_t v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; uint8_t v___y_689_; lean_object* v___y_690_; uint8_t v___y_691_; uint8_t v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; uint8_t v___y_712_; uint8_t v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; uint8_t v___y_717_; lean_object* v___y_718_; uint8_t v___y_719_; uint8_t v___y_720_; uint8_t v___y_736_; lean_object* v___y_737_; uint8_t v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; uint8_t v___y_742_; uint8_t v___y_743_; lean_object* v___y_748_; lean_object* v___x_759_; lean_object* v_a_760_; 
v_jobNo_457_ = lean_ctor_get(v_a_439_, 0);
lean_inc(v_jobNo_457_);
v_totalJobs_458_ = lean_ctor_get(v_a_439_, 1);
lean_inc(v_totalJobs_458_);
v_wantsRebuild_459_ = lean_ctor_get_uint8(v_a_439_, sizeof(void*)*6);
v_failures_460_ = lean_ctor_get(v_a_439_, 2);
v_resetCtrl_461_ = lean_ctor_get(v_a_439_, 3);
v_lastUpdate_462_ = lean_ctor_get(v_a_439_, 4);
v_spinnerIdx_463_ = lean_ctor_get(v_a_439_, 5);
v_out_464_ = lean_ctor_get(v_a_438_, 1);
v_outLv_465_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4);
v_failLv_466_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 1);
v_minAction_467_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 2);
v_showOptional_468_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 3);
v_useAnsi_469_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 4);
v_showProgress_470_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 5);
v_showTime_471_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 6);
v_task_570_ = lean_ctor_get(v_job_437_, 0);
lean_inc_ref(v_task_570_);
v_caption_571_ = lean_ctor_get(v_job_437_, 2);
lean_inc_ref(v_caption_571_);
v_optional_572_ = lean_ctor_get_uint8(v_job_437_, sizeof(void*)*3);
lean_dec_ref(v_job_437_);
v___x_759_ = lean_task_get_own(v_task_570_);
v_a_760_ = lean_ctor_get(v___x_759_, 1);
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___y_748_ = v_a_760_;
goto v___jp_747_;
v___jp_441_:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_box(0);
v___x_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___y_442_);
return v___x_444_;
}
v___jp_445_:
{
lean_object* v___x_448_; 
v___x_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_448_, 0, v_val_447_);
lean_ctor_set(v___x_448_, 1, v___y_446_);
return v___x_448_;
}
v___jp_449_:
{
lean_object* v_out_452_; lean_object* v_flush_453_; lean_object* v___x_454_; 
v_out_452_ = lean_ctor_get(v___y_450_, 1);
v_flush_453_ = lean_ctor_get(v_out_452_, 0);
lean_inc_ref(v_flush_453_);
v___x_454_ = lean_apply_1(v_flush_453_, lean_box(0));
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
v___y_446_ = v___y_451_;
v_val_447_ = v_a_455_;
goto v___jp_445_;
}
else
{
lean_object* v___x_456_; 
lean_dec_ref_known(v___x_454_, 1);
v___x_456_ = lean_box(0);
v___y_446_ = v___y_451_;
v_val_447_ = v___x_456_;
goto v___jp_445_;
}
}
v___jp_472_:
{
uint8_t v___x_479_; 
v___x_479_ = lean_nat_dec_lt(v___y_475_, v___y_477_);
lean_dec(v___y_475_);
if (v___x_479_ == 0)
{
lean_dec(v___y_477_);
lean_dec_ref(v___y_474_);
v___y_450_ = v___y_473_;
v___y_451_ = v___y_476_;
goto v___jp_449_;
}
else
{
lean_object* v___x_480_; size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; lean_object* v_snd_484_; 
v___x_480_ = lean_box(0);
v___x_481_ = ((size_t)0ULL);
v___x_482_ = lean_usize_of_nat(v___y_477_);
lean_dec(v___y_477_);
lean_inc_ref(v_out_464_);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_464_, v___y_478_, v_useAnsi_469_, v___y_474_, v___x_481_, v___x_482_, v___x_480_, v___y_476_);
lean_dec_ref(v___y_474_);
v_snd_484_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_snd_484_);
lean_dec_ref(v___x_483_);
v___y_450_ = v___y_473_;
v___y_451_ = v_snd_484_;
goto v___jp_449_;
}
}
v___jp_485_:
{
if (v___y_490_ == 0)
{
lean_dec(v___y_491_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
v___y_450_ = v___y_486_;
v___y_451_ = v___y_489_;
goto v___jp_449_;
}
else
{
if (v___y_492_ == 0)
{
v___y_473_ = v___y_486_;
v___y_474_ = v___y_487_;
v___y_475_ = v___y_488_;
v___y_476_ = v___y_489_;
v___y_477_ = v___y_491_;
v___y_478_ = v_outLv_465_;
goto v___jp_472_;
}
else
{
uint8_t v___x_493_; 
v___x_493_ = 0;
v___y_473_ = v___y_486_;
v___y_474_ = v___y_487_;
v___y_475_ = v___y_488_;
v___y_476_ = v___y_489_;
v___y_477_ = v___y_491_;
v___y_478_ = v___x_493_;
goto v___jp_472_;
}
}
}
v___jp_494_:
{
lean_object* v_out_504_; lean_object* v_jobNo_505_; lean_object* v_totalJobs_506_; uint8_t v_wantsRebuild_507_; lean_object* v_failures_508_; lean_object* v_resetCtrl_509_; lean_object* v_lastUpdate_510_; lean_object* v_spinnerIdx_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_557_; 
v_out_504_ = lean_ctor_get(v___y_495_, 1);
v_jobNo_505_ = lean_ctor_get(v___y_501_, 0);
v_totalJobs_506_ = lean_ctor_get(v___y_501_, 1);
v_wantsRebuild_507_ = lean_ctor_get_uint8(v___y_501_, sizeof(void*)*6);
v_failures_508_ = lean_ctor_get(v___y_501_, 2);
v_resetCtrl_509_ = lean_ctor_get(v___y_501_, 3);
v_lastUpdate_510_ = lean_ctor_get(v___y_501_, 4);
v_spinnerIdx_511_ = lean_ctor_get(v___y_501_, 5);
v_isSharedCheck_557_ = !lean_is_exclusive(v___y_501_);
if (v_isSharedCheck_557_ == 0)
{
v___x_513_ = v___y_501_;
v_isShared_514_ = v_isSharedCheck_557_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_spinnerIdx_511_);
lean_inc(v_lastUpdate_510_);
lean_inc(v_resetCtrl_509_);
lean_inc(v_failures_508_);
lean_inc(v_totalJobs_506_);
lean_inc(v_jobNo_505_);
lean_dec(v___y_501_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_557_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v_putStr_515_; lean_object* v___x_516_; lean_object* v___x_518_; 
v_putStr_515_ = lean_ctor_get(v_out_504_, 4);
v___x_516_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 3, v___x_516_);
v___x_518_ = v___x_513_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_jobNo_505_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_totalJobs_506_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_failures_508_);
lean_ctor_set(v_reuseFailAlloc_556_, 3, v___x_516_);
lean_ctor_set(v_reuseFailAlloc_556_, 4, v_lastUpdate_510_);
lean_ctor_set(v_reuseFailAlloc_556_, 5, v_spinnerIdx_511_);
lean_ctor_set_uint8(v_reuseFailAlloc_556_, sizeof(void*)*6, v_wantsRebuild_507_);
v___x_518_ = v_reuseFailAlloc_556_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_519_ = lean_string_append(v_resetCtrl_509_, v___y_503_);
lean_dec_ref(v___y_503_);
v___x_520_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_521_ = lean_string_append(v___x_519_, v___x_520_);
lean_inc_ref(v_putStr_515_);
lean_inc_ref(v___x_521_);
v___x_522_ = lean_apply_2(v_putStr_515_, v___x_521_, lean_box(0));
if (lean_obj_tag(v___x_522_) == 0)
{
lean_dec_ref_known(v___x_522_, 1);
lean_dec_ref(v___x_521_);
v___y_486_ = v___y_495_;
v___y_487_ = v___y_496_;
v___y_488_ = v___y_497_;
v___y_489_ = v___x_518_;
v___y_490_ = v___y_498_;
v___y_491_ = v___y_499_;
v___y_492_ = v___y_502_;
goto v___jp_485_;
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_555_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_555_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_555_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_555_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_527_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_528_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_529_ = lean_unsigned_to_nat(82u);
v___x_530_ = lean_unsigned_to_nat(4u);
v___x_531_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_532_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__7));
v___x_533_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__12, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__12);
lean_inc(v___y_497_);
v___x_534_ = l_Lean_Name_num___override(v___x_533_, v___y_497_);
v___x_535_ = l_Lean_Name_str___override(v___x_534_, v___x_532_);
v___x_536_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_537_ = l_Lean_Name_str___override(v___x_535_, v___x_536_);
v___x_538_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_537_, v___y_500_);
v___x_539_ = lean_string_append(v___x_531_, v___x_538_);
lean_dec_ref(v___x_538_);
v___x_540_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_541_ = lean_string_append(v___x_539_, v___x_540_);
v___x_542_ = lean_io_error_to_string(v_a_523_);
v___x_543_ = lean_string_append(v___x_541_, v___x_542_);
lean_dec_ref(v___x_542_);
v___x_544_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_545_ = lean_string_append(v___x_543_, v___x_544_);
v___x_546_ = l_String_quote(v___x_521_);
if (v_isShared_526_ == 0)
{
lean_ctor_set_tag(v___x_525_, 3);
lean_ctor_set(v___x_525_, 0, v___x_546_);
v___x_548_ = v___x_525_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_546_);
v___x_548_ = v_reuseFailAlloc_554_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_549_ = l_Std_Format_defWidth;
lean_inc_n(v___y_497_, 2);
v___x_550_ = l_Std_Format_pretty(v___x_548_, v___x_549_, v___y_497_, v___y_497_);
v___x_551_ = lean_string_append(v___x_545_, v___x_550_);
lean_dec_ref(v___x_550_);
v___x_552_ = l_mkPanicMessageWithDecl(v___x_527_, v___x_528_, v___x_529_, v___x_530_, v___x_551_);
lean_dec_ref(v___x_551_);
v___x_553_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_552_);
v___y_486_ = v___y_495_;
v___y_487_ = v___y_496_;
v___y_488_ = v___y_497_;
v___y_489_ = v___x_518_;
v___y_490_ = v___y_498_;
v___y_491_ = v___y_499_;
v___y_492_ = v___y_502_;
goto v___jp_485_;
}
}
}
}
}
}
v___jp_558_:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lake_Ansi_chalk(v___y_568_, v___y_566_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v___y_568_);
v___y_495_ = v___y_559_;
v___y_496_ = v___y_560_;
v___y_497_ = v___y_561_;
v___y_498_ = v___y_562_;
v___y_499_ = v___y_563_;
v___y_500_ = v___y_565_;
v___y_501_ = v___y_564_;
v___y_502_ = v___y_567_;
v___y_503_ = v___x_569_;
goto v___jp_494_;
}
v___jp_573_:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_587_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_588_ = lean_string_push(v___x_587_, v___y_578_);
v___x_589_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
v___x_591_ = l_Nat_reprFast(v_jobNo_457_);
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
lean_dec_ref(v___x_591_);
v___x_593_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
v___x_595_ = l_Nat_reprFast(v_totalJobs_458_);
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
lean_dec_ref(v___x_595_);
v___x_597_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1));
v___x_598_ = lean_string_append(v___x_596_, v___x_597_);
v___x_599_ = lean_string_append(v___x_598_, v___y_575_);
v___x_600_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2));
v___x_601_ = lean_string_append(v___x_599_, v___x_600_);
v___x_602_ = lean_string_append(v___x_601_, v___y_581_);
lean_dec_ref(v___y_581_);
v___x_603_ = lean_string_append(v___x_602_, v___x_600_);
v___x_604_ = lean_string_append(v___x_603_, v_caption_571_);
lean_dec_ref(v_caption_571_);
v___x_605_ = lean_string_append(v___x_604_, v___y_586_);
lean_dec_ref(v___y_586_);
if (v_useAnsi_469_ == 0)
{
v___y_495_ = v___y_574_;
v___y_496_ = v___y_582_;
v___y_497_ = v___y_577_;
v___y_498_ = v___y_579_;
v___y_499_ = v___y_583_;
v___y_500_ = v___y_580_;
v___y_501_ = v___y_584_;
v___y_502_ = v___y_585_;
v___y_503_ = v___x_605_;
goto v___jp_494_;
}
else
{
if (v___y_579_ == 0)
{
lean_object* v___x_606_; 
v___x_606_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3));
v___y_559_ = v___y_574_;
v___y_560_ = v___y_582_;
v___y_561_ = v___y_577_;
v___y_562_ = v___y_579_;
v___y_563_ = v___y_583_;
v___y_564_ = v___y_584_;
v___y_565_ = v___y_580_;
v___y_566_ = v___x_605_;
v___y_567_ = v___y_585_;
v___y_568_ = v___x_606_;
goto v___jp_558_;
}
else
{
lean_object* v___x_607_; 
v___x_607_ = l_Lake_LogLevel_ansiColor(v___y_576_);
v___y_559_ = v___y_574_;
v___y_560_ = v___y_582_;
v___y_561_ = v___y_577_;
v___y_562_ = v___y_579_;
v___y_563_ = v___y_583_;
v___y_564_ = v___y_584_;
v___y_565_ = v___y_580_;
v___y_566_ = v___x_605_;
v___y_567_ = v___y_585_;
v___y_568_ = v___x_607_;
goto v___jp_558_;
}
}
}
v___jp_608_:
{
lean_object* v___x_621_; 
v___x_621_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_574_ = v___y_609_;
v___y_575_ = v___y_610_;
v___y_576_ = v___y_611_;
v___y_577_ = v___y_612_;
v___y_578_ = v___y_613_;
v___y_579_ = v___y_614_;
v___y_580_ = v___y_615_;
v___y_581_ = v___y_616_;
v___y_582_ = v___y_617_;
v___y_583_ = v___y_618_;
v___y_584_ = v___y_619_;
v___y_585_ = v___y_620_;
v___y_586_ = v___x_621_;
goto v___jp_573_;
}
v___jp_622_:
{
if (v_showTime_471_ == 0)
{
lean_dec(v___y_631_);
v___y_609_ = v___y_623_;
v___y_610_ = v___y_635_;
v___y_611_ = v___y_624_;
v___y_612_ = v___y_625_;
v___y_613_ = v___y_626_;
v___y_614_ = v___y_627_;
v___y_615_ = v___y_628_;
v___y_616_ = v___y_629_;
v___y_617_ = v___y_630_;
v___y_618_ = v___y_632_;
v___y_619_ = v___y_633_;
v___y_620_ = v___y_634_;
goto v___jp_608_;
}
else
{
uint8_t v___x_636_; 
v___x_636_ = lean_nat_dec_lt(v___y_625_, v___y_631_);
if (v___x_636_ == 0)
{
lean_dec(v___y_631_);
v___y_609_ = v___y_623_;
v___y_610_ = v___y_635_;
v___y_611_ = v___y_624_;
v___y_612_ = v___y_625_;
v___y_613_ = v___y_626_;
v___y_614_ = v___y_627_;
v___y_615_ = v___y_628_;
v___y_616_ = v___y_629_;
v___y_617_ = v___y_630_;
v___y_618_ = v___y_632_;
v___y_619_ = v___y_633_;
v___y_620_ = v___y_634_;
goto v___jp_608_;
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_637_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4));
v___x_638_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(v___y_631_);
v___x_639_ = lean_string_append(v___x_637_, v___x_638_);
lean_dec_ref(v___x_638_);
v___x_640_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5));
v___x_641_ = lean_string_append(v___x_639_, v___x_640_);
v___y_574_ = v___y_623_;
v___y_575_ = v___y_635_;
v___y_576_ = v___y_624_;
v___y_577_ = v___y_625_;
v___y_578_ = v___y_626_;
v___y_579_ = v___y_627_;
v___y_580_ = v___y_628_;
v___y_581_ = v___y_629_;
v___y_582_ = v___y_630_;
v___y_583_ = v___y_632_;
v___y_584_ = v___y_633_;
v___y_585_ = v___y_634_;
v___y_586_ = v___x_641_;
goto v___jp_573_;
}
}
}
v___jp_642_:
{
if (v_optional_572_ == 0)
{
lean_object* v___x_655_; 
v___x_655_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_623_ = v___y_643_;
v___y_624_ = v___y_644_;
v___y_625_ = v___y_647_;
v___y_626_ = v___y_654_;
v___y_627_ = v___y_648_;
v___y_628_ = v___y_651_;
v___y_629_ = v___y_653_;
v___y_630_ = v___y_645_;
v___y_631_ = v___y_646_;
v___y_632_ = v___y_649_;
v___y_633_ = v___y_650_;
v___y_634_ = v___y_652_;
v___y_635_ = v___x_655_;
goto v___jp_622_;
}
else
{
lean_object* v___x_656_; 
v___x_656_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6));
v___y_623_ = v___y_643_;
v___y_624_ = v___y_644_;
v___y_625_ = v___y_647_;
v___y_626_ = v___y_654_;
v___y_627_ = v___y_648_;
v___y_628_ = v___y_651_;
v___y_629_ = v___y_653_;
v___y_630_ = v___y_645_;
v___y_631_ = v___y_646_;
v___y_632_ = v___y_649_;
v___y_633_ = v___y_650_;
v___y_634_ = v___y_652_;
v___y_635_ = v___x_656_;
goto v___jp_622_;
}
}
v___jp_657_:
{
if (v___y_663_ == 0)
{
if (v_showProgress_470_ == 0)
{
lean_dec(v___y_664_);
lean_dec(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec_ref(v_caption_571_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_665_;
goto v___jp_441_;
}
else
{
if (v_useAnsi_469_ == 0)
{
uint8_t v___x_668_; 
v___x_668_ = l_Lake_instOrdJobAction_ord(v_minAction_467_, v___y_667_);
if (v___x_668_ == 2)
{
lean_dec(v___y_664_);
lean_dec(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec_ref(v_caption_571_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_665_;
goto v___jp_441_;
}
else
{
lean_object* v___x_669_; uint32_t v___x_670_; 
v___x_669_ = l_Lake_JobAction_verb(v___y_666_, v___y_667_);
v___x_670_ = 10004;
v___y_643_ = v___y_658_;
v___y_644_ = v___y_659_;
v___y_645_ = v___y_660_;
v___y_646_ = v___y_662_;
v___y_647_ = v___y_661_;
v___y_648_ = v___y_663_;
v___y_649_ = v___y_664_;
v___y_650_ = v___y_665_;
v___y_651_ = v_showProgress_470_;
v___y_652_ = v___y_666_;
v___y_653_ = v___x_669_;
v___y_654_ = v___x_670_;
goto v___jp_642_;
}
}
else
{
lean_dec(v___y_664_);
lean_dec(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec_ref(v_caption_571_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_665_;
goto v___jp_441_;
}
}
}
else
{
lean_object* v___x_671_; uint32_t v___x_672_; 
v___x_671_ = l_Lake_JobAction_verb(v___y_666_, v___y_667_);
v___x_672_ = l_Lake_LogLevel_icon(v___y_659_);
v___y_643_ = v___y_658_;
v___y_644_ = v___y_659_;
v___y_645_ = v___y_660_;
v___y_646_ = v___y_662_;
v___y_647_ = v___y_661_;
v___y_648_ = v___y_663_;
v___y_649_ = v___y_664_;
v___y_650_ = v___y_665_;
v___y_651_ = v___y_663_;
v___y_652_ = v___y_666_;
v___y_653_ = v___x_671_;
v___y_654_ = v___x_672_;
goto v___jp_642_;
}
}
v___jp_673_:
{
if (v_optional_572_ == 0)
{
v___y_658_ = v___y_674_;
v___y_659_ = v___y_675_;
v___y_660_ = v___y_676_;
v___y_661_ = v___y_677_;
v___y_662_ = v___y_678_;
v___y_663_ = v___y_683_;
v___y_664_ = v___y_679_;
v___y_665_ = v___y_680_;
v___y_666_ = v___y_681_;
v___y_667_ = v___y_682_;
goto v___jp_657_;
}
else
{
if (v_showOptional_468_ == 0)
{
lean_dec(v___y_679_);
lean_dec(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec_ref(v_caption_571_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_680_;
goto v___jp_441_;
}
else
{
v___y_658_ = v___y_674_;
v___y_659_ = v___y_675_;
v___y_660_ = v___y_676_;
v___y_661_ = v___y_677_;
v___y_662_ = v___y_678_;
v___y_663_ = v___y_683_;
v___y_664_ = v___y_679_;
v___y_665_ = v___y_680_;
v___y_666_ = v___y_681_;
v___y_667_ = v___y_682_;
goto v___jp_657_;
}
}
}
v___jp_684_:
{
if (v___y_692_ == 0)
{
if (v___y_689_ == 0)
{
v___y_674_ = v___y_693_;
v___y_675_ = v___y_685_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_688_;
v___y_678_ = v___y_687_;
v___y_679_ = v___y_690_;
v___y_680_ = v___y_694_;
v___y_681_ = v___y_692_;
v___y_682_ = v___y_691_;
v___y_683_ = v___y_689_;
goto v___jp_673_;
}
else
{
uint8_t v___x_695_; 
v___x_695_ = l_Lake_instOrdLogLevel_ord(v_outLv_465_, v___y_685_);
if (v___x_695_ == 2)
{
v___y_674_ = v___y_693_;
v___y_675_ = v___y_685_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_688_;
v___y_678_ = v___y_687_;
v___y_679_ = v___y_690_;
v___y_680_ = v___y_694_;
v___y_681_ = v___y_692_;
v___y_682_ = v___y_691_;
v___y_683_ = v___y_692_;
goto v___jp_673_;
}
else
{
v___y_674_ = v___y_693_;
v___y_675_ = v___y_685_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_688_;
v___y_678_ = v___y_687_;
v___y_679_ = v___y_690_;
v___y_680_ = v___y_694_;
v___y_681_ = v___y_692_;
v___y_682_ = v___y_691_;
v___y_683_ = v___y_689_;
goto v___jp_673_;
}
}
}
else
{
if (v_optional_572_ == 0)
{
lean_object* v_jobNo_696_; lean_object* v_totalJobs_697_; uint8_t v_wantsRebuild_698_; lean_object* v_failures_699_; lean_object* v_resetCtrl_700_; lean_object* v_lastUpdate_701_; lean_object* v_spinnerIdx_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
v_jobNo_696_ = lean_ctor_get(v___y_694_, 0);
v_totalJobs_697_ = lean_ctor_get(v___y_694_, 1);
v_wantsRebuild_698_ = lean_ctor_get_uint8(v___y_694_, sizeof(void*)*6);
v_failures_699_ = lean_ctor_get(v___y_694_, 2);
v_resetCtrl_700_ = lean_ctor_get(v___y_694_, 3);
v_lastUpdate_701_ = lean_ctor_get(v___y_694_, 4);
v_spinnerIdx_702_ = lean_ctor_get(v___y_694_, 5);
v_isSharedCheck_710_ = !lean_is_exclusive(v___y_694_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v___y_694_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_spinnerIdx_702_);
lean_inc(v_lastUpdate_701_);
lean_inc(v_resetCtrl_700_);
lean_inc(v_failures_699_);
lean_inc(v_totalJobs_697_);
lean_inc(v_jobNo_696_);
lean_dec(v___y_694_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
lean_inc_ref(v_caption_571_);
v___x_706_ = lean_array_push(v_failures_699_, v_caption_571_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 2, v___x_706_);
v___x_708_ = v___x_704_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_jobNo_696_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v_totalJobs_697_);
lean_ctor_set(v_reuseFailAlloc_709_, 2, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_709_, 3, v_resetCtrl_700_);
lean_ctor_set(v_reuseFailAlloc_709_, 4, v_lastUpdate_701_);
lean_ctor_set(v_reuseFailAlloc_709_, 5, v_spinnerIdx_702_);
lean_ctor_set_uint8(v_reuseFailAlloc_709_, sizeof(void*)*6, v_wantsRebuild_698_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
v___y_674_ = v___y_693_;
v___y_675_ = v___y_685_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_688_;
v___y_678_ = v___y_687_;
v___y_679_ = v___y_690_;
v___y_680_ = v___x_708_;
v___y_681_ = v___y_692_;
v___y_682_ = v___y_691_;
v___y_683_ = v___y_692_;
goto v___jp_673_;
}
}
}
else
{
v___y_674_ = v___y_693_;
v___y_675_ = v___y_685_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_688_;
v___y_678_ = v___y_687_;
v___y_679_ = v___y_690_;
v___y_680_ = v___y_694_;
v___y_681_ = v___y_692_;
v___y_682_ = v___y_691_;
v___y_683_ = v___y_692_;
goto v___jp_673_;
}
}
}
v___jp_711_:
{
uint8_t v___x_721_; 
v___x_721_ = lean_strict_and(v___y_717_, v___y_720_);
if (v___y_713_ == 0)
{
v___y_685_ = v___y_712_;
v___y_686_ = v___y_714_;
v___y_687_ = v___y_716_;
v___y_688_ = v___y_715_;
v___y_689_ = v___y_717_;
v___y_690_ = v___y_718_;
v___y_691_ = v___y_719_;
v___y_692_ = v___x_721_;
v___y_693_ = v_a_438_;
v___y_694_ = v_a_439_;
goto v___jp_684_;
}
else
{
if (v_wantsRebuild_459_ == 0)
{
lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_inc(v_spinnerIdx_463_);
lean_inc(v_lastUpdate_462_);
lean_inc_ref(v_resetCtrl_461_);
lean_inc_ref(v_failures_460_);
v_isSharedCheck_728_ = !lean_is_exclusive(v_a_439_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; lean_object* v_unused_730_; lean_object* v_unused_731_; lean_object* v_unused_732_; lean_object* v_unused_733_; lean_object* v_unused_734_; 
v_unused_729_ = lean_ctor_get(v_a_439_, 5);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_a_439_, 4);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v_a_439_, 3);
lean_dec(v_unused_731_);
v_unused_732_ = lean_ctor_get(v_a_439_, 2);
lean_dec(v_unused_732_);
v_unused_733_ = lean_ctor_get(v_a_439_, 1);
lean_dec(v_unused_733_);
v_unused_734_ = lean_ctor_get(v_a_439_, 0);
lean_dec(v_unused_734_);
v___x_723_ = v_a_439_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_dec(v_a_439_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
lean_inc(v_totalJobs_458_);
lean_inc(v_jobNo_457_);
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_jobNo_457_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_totalJobs_458_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_failures_460_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_resetCtrl_461_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_lastUpdate_462_);
lean_ctor_set(v_reuseFailAlloc_727_, 5, v_spinnerIdx_463_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*6, v___y_713_);
v___y_685_ = v___y_712_;
v___y_686_ = v___y_714_;
v___y_687_ = v___y_716_;
v___y_688_ = v___y_715_;
v___y_689_ = v___y_717_;
v___y_690_ = v___y_718_;
v___y_691_ = v___y_719_;
v___y_692_ = v___x_721_;
v___y_693_ = v_a_438_;
v___y_694_ = v___x_726_;
goto v___jp_684_;
}
}
}
else
{
v___y_685_ = v___y_712_;
v___y_686_ = v___y_714_;
v___y_687_ = v___y_716_;
v___y_688_ = v___y_715_;
v___y_689_ = v___y_717_;
v___y_690_ = v___y_718_;
v___y_691_ = v___y_719_;
v___y_692_ = v___x_721_;
v___y_693_ = v_a_438_;
v___y_694_ = v_a_439_;
goto v___jp_684_;
}
}
}
v___jp_735_:
{
uint8_t v___x_744_; 
v___x_744_ = l_Lake_instOrdLogLevel_ord(v_failLv_466_, v___y_736_);
if (v___x_744_ == 2)
{
uint8_t v___x_745_; 
v___x_745_ = 0;
v___y_712_ = v___y_736_;
v___y_713_ = v___y_738_;
v___y_714_ = v___y_737_;
v___y_715_ = v___y_740_;
v___y_716_ = v___y_739_;
v___y_717_ = v___y_743_;
v___y_718_ = v___y_741_;
v___y_719_ = v___y_742_;
v___y_720_ = v___x_745_;
goto v___jp_711_;
}
else
{
uint8_t v___x_746_; 
v___x_746_ = 1;
v___y_712_ = v___y_736_;
v___y_713_ = v___y_738_;
v___y_714_ = v___y_737_;
v___y_715_ = v___y_740_;
v___y_716_ = v___y_739_;
v___y_717_ = v___y_743_;
v___y_718_ = v___y_741_;
v___y_719_ = v___y_742_;
v___y_720_ = v___x_746_;
goto v___jp_711_;
}
}
v___jp_747_:
{
lean_object* v_log_749_; uint8_t v_action_750_; uint8_t v_wantsRebuild_751_; lean_object* v_buildTime_752_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v_log_749_ = lean_ctor_get(v___y_748_, 0);
lean_inc_ref(v_log_749_);
v_action_750_ = lean_ctor_get_uint8(v___y_748_, sizeof(void*)*3);
v_wantsRebuild_751_ = lean_ctor_get_uint8(v___y_748_, sizeof(void*)*3 + 1);
v_buildTime_752_ = lean_ctor_get(v___y_748_, 2);
lean_inc(v_buildTime_752_);
lean_dec_ref(v___y_748_);
v___x_753_ = l_Lake_Log_maxLv(v_log_749_);
v___x_754_ = lean_array_get_size(v_log_749_);
v___x_755_ = lean_unsigned_to_nat(0u);
v___x_756_ = lean_nat_dec_eq(v___x_754_, v___x_755_);
if (v___x_756_ == 0)
{
uint8_t v___x_757_; 
v___x_757_ = 1;
v___y_736_ = v___x_753_;
v___y_737_ = v_log_749_;
v___y_738_ = v_wantsRebuild_751_;
v___y_739_ = v_buildTime_752_;
v___y_740_ = v___x_755_;
v___y_741_ = v___x_754_;
v___y_742_ = v_action_750_;
v___y_743_ = v___x_757_;
goto v___jp_735_;
}
else
{
uint8_t v___x_758_; 
v___x_758_ = 0;
v___y_736_ = v___x_753_;
v___y_737_ = v_log_749_;
v___y_738_ = v_wantsRebuild_751_;
v___y_739_ = v_buildTime_752_;
v___y_740_ = v___x_755_;
v___y_741_ = v___x_754_;
v___y_742_ = v_action_750_;
v___y_743_ = v___x_758_;
goto v___jp_735_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___boxed(lean_object* v_job_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v_job_761_, v_a_762_, v_a_763_);
lean_dec_ref(v_a_762_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(lean_object* v_out_766_, uint8_t v___y_767_, uint8_t v_useAnsi_768_, lean_object* v_as_769_, size_t v_i_770_, size_t v_stop_771_, lean_object* v_b_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_766_, v___y_767_, v_useAnsi_768_, v_as_769_, v_i_770_, v_stop_771_, v_b_772_, v___y_774_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___boxed(lean_object* v_out_777_, lean_object* v___y_778_, lean_object* v_useAnsi_779_, lean_object* v_as_780_, lean_object* v_i_781_, lean_object* v_stop_782_, lean_object* v_b_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
uint8_t v___y_14479__boxed_787_; uint8_t v_useAnsi_14480__boxed_788_; size_t v_i_boxed_789_; size_t v_stop_boxed_790_; lean_object* v_res_791_; 
v___y_14479__boxed_787_ = lean_unbox(v___y_778_);
v_useAnsi_14480__boxed_788_ = lean_unbox(v_useAnsi_779_);
v_i_boxed_789_ = lean_unbox_usize(v_i_781_);
lean_dec(v_i_781_);
v_stop_boxed_790_ = lean_unbox_usize(v_stop_782_);
lean_dec(v_stop_782_);
v_res_791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(v_out_777_, v___y_14479__boxed_787_, v_useAnsi_14480__boxed_788_, v_as_780_, v_i_boxed_789_, v_stop_boxed_790_, v_b_783_, v___y_784_, v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec_ref(v_as_780_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_jobs_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v_jobNo_801_; lean_object* v_totalJobs_802_; uint8_t v_wantsRebuild_803_; lean_object* v_failures_804_; lean_object* v_resetCtrl_805_; lean_object* v_lastUpdate_806_; lean_object* v_spinnerIdx_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_817_; 
v_jobs_797_ = lean_ctor_get(v_a_794_, 0);
v___x_798_ = lean_st_ref_take(v_jobs_797_);
v___x_799_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_800_ = lean_st_ref_put(v_jobs_797_, v___x_799_);
v_jobNo_801_ = lean_ctor_get(v_a_795_, 0);
v_totalJobs_802_ = lean_ctor_get(v_a_795_, 1);
v_wantsRebuild_803_ = lean_ctor_get_uint8(v_a_795_, sizeof(void*)*6);
v_failures_804_ = lean_ctor_get(v_a_795_, 2);
v_resetCtrl_805_ = lean_ctor_get(v_a_795_, 3);
v_lastUpdate_806_ = lean_ctor_get(v_a_795_, 4);
v_spinnerIdx_807_ = lean_ctor_get(v_a_795_, 5);
v_isSharedCheck_817_ = !lean_is_exclusive(v_a_795_);
if (v_isSharedCheck_817_ == 0)
{
v___x_809_ = v_a_795_;
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_spinnerIdx_807_);
lean_inc(v_lastUpdate_806_);
lean_inc(v_resetCtrl_805_);
lean_inc(v_failures_804_);
lean_inc(v_totalJobs_802_);
lean_inc(v_jobNo_801_);
lean_dec(v_a_795_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_811_ = lean_array_get_size(v___x_798_);
v___x_812_ = lean_nat_add(v_totalJobs_802_, v___x_811_);
lean_dec(v_totalJobs_802_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 1, v___x_812_);
v___x_814_ = v___x_809_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_jobNo_801_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_failures_804_);
lean_ctor_set(v_reuseFailAlloc_816_, 3, v_resetCtrl_805_);
lean_ctor_set(v_reuseFailAlloc_816_, 4, v_lastUpdate_806_);
lean_ctor_set(v_reuseFailAlloc_816_, 5, v_spinnerIdx_807_);
lean_ctor_set_uint8(v_reuseFailAlloc_816_, sizeof(void*)*6, v_wantsRebuild_803_);
v___x_814_ = v_reuseFailAlloc_816_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v___x_815_; 
v___x_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_798_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
return v___x_815_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___boxed(lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v_a_818_, v_a_819_);
lean_dec_ref(v_a_818_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(lean_object* v_as_822_, size_t v_i_823_, size_t v_stop_824_, lean_object* v_b_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_fst_830_; lean_object* v_snd_831_; uint8_t v___x_835_; 
v___x_835_ = lean_usize_dec_eq(v_i_823_, v_stop_824_);
if (v___x_835_ == 0)
{
lean_object* v_fst_836_; lean_object* v_snd_837_; lean_object* v___x_838_; lean_object* v_task_839_; uint8_t v___x_840_; 
v_fst_836_ = lean_ctor_get(v_b_825_, 0);
v_snd_837_ = lean_ctor_get(v_b_825_, 1);
v___x_838_ = lean_array_uget_borrowed(v_as_822_, v_i_823_);
v_task_839_ = lean_ctor_get(v___x_838_, 0);
v___x_840_ = lean_io_get_task_state(v_task_839_);
switch(v___x_840_)
{
case 0:
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_848_; 
lean_inc(v_snd_837_);
lean_inc(v_fst_836_);
v_isSharedCheck_848_ = !lean_is_exclusive(v_b_825_);
if (v_isSharedCheck_848_ == 0)
{
lean_object* v_unused_849_; lean_object* v_unused_850_; 
v_unused_849_ = lean_ctor_get(v_b_825_, 1);
lean_dec(v_unused_849_);
v_unused_850_ = lean_ctor_get(v_b_825_, 0);
lean_dec(v_unused_850_);
v___x_842_ = v_b_825_;
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
else
{
lean_dec(v_b_825_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_846_; 
lean_inc(v___x_838_);
v___x_844_ = lean_array_push(v_snd_837_, v___x_838_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 1, v___x_844_);
v___x_846_ = v___x_842_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_fst_836_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
v_fst_830_ = v___x_846_;
v_snd_831_ = v___y_827_;
goto v___jp_829_;
}
}
}
case 1:
{
lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_859_; 
lean_inc(v_snd_837_);
lean_inc(v_fst_836_);
v_isSharedCheck_859_ = !lean_is_exclusive(v_b_825_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; lean_object* v_unused_861_; 
v_unused_860_ = lean_ctor_get(v_b_825_, 1);
lean_dec(v_unused_860_);
v_unused_861_ = lean_ctor_get(v_b_825_, 0);
lean_dec(v_unused_861_);
v___x_852_ = v_b_825_;
v_isShared_853_ = v_isSharedCheck_859_;
goto v_resetjp_851_;
}
else
{
lean_dec(v_b_825_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_859_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_857_; 
lean_inc_n(v___x_838_, 2);
v___x_854_ = lean_array_push(v_fst_836_, v___x_838_);
v___x_855_ = lean_array_push(v_snd_837_, v___x_838_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 1, v___x_855_);
lean_ctor_set(v___x_852_, 0, v___x_854_);
v___x_857_ = v___x_852_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
v_fst_830_ = v___x_857_;
v_snd_831_ = v___y_827_;
goto v___jp_829_;
}
}
}
default: 
{
lean_object* v___x_862_; lean_object* v_snd_863_; lean_object* v_jobNo_864_; lean_object* v_totalJobs_865_; uint8_t v_wantsRebuild_866_; lean_object* v_failures_867_; lean_object* v_resetCtrl_868_; lean_object* v_lastUpdate_869_; lean_object* v_spinnerIdx_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_879_; 
lean_inc(v___x_838_);
v___x_862_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v___x_838_, v___y_826_, v___y_827_);
v_snd_863_ = lean_ctor_get(v___x_862_, 1);
lean_inc(v_snd_863_);
lean_dec_ref(v___x_862_);
v_jobNo_864_ = lean_ctor_get(v_snd_863_, 0);
v_totalJobs_865_ = lean_ctor_get(v_snd_863_, 1);
v_wantsRebuild_866_ = lean_ctor_get_uint8(v_snd_863_, sizeof(void*)*6);
v_failures_867_ = lean_ctor_get(v_snd_863_, 2);
v_resetCtrl_868_ = lean_ctor_get(v_snd_863_, 3);
v_lastUpdate_869_ = lean_ctor_get(v_snd_863_, 4);
v_spinnerIdx_870_ = lean_ctor_get(v_snd_863_, 5);
v_isSharedCheck_879_ = !lean_is_exclusive(v_snd_863_);
if (v_isSharedCheck_879_ == 0)
{
v___x_872_ = v_snd_863_;
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_spinnerIdx_870_);
lean_inc(v_lastUpdate_869_);
lean_inc(v_resetCtrl_868_);
lean_inc(v_failures_867_);
lean_inc(v_totalJobs_865_);
lean_inc(v_jobNo_864_);
lean_dec(v_snd_863_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_877_; 
v___x_874_ = lean_unsigned_to_nat(1u);
v___x_875_ = lean_nat_add(v_jobNo_864_, v___x_874_);
lean_dec(v_jobNo_864_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_875_);
v___x_877_ = v___x_872_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_totalJobs_865_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v_failures_867_);
lean_ctor_set(v_reuseFailAlloc_878_, 3, v_resetCtrl_868_);
lean_ctor_set(v_reuseFailAlloc_878_, 4, v_lastUpdate_869_);
lean_ctor_set(v_reuseFailAlloc_878_, 5, v_spinnerIdx_870_);
lean_ctor_set_uint8(v_reuseFailAlloc_878_, sizeof(void*)*6, v_wantsRebuild_866_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
v_fst_830_ = v_b_825_;
v_snd_831_ = v___x_877_;
goto v___jp_829_;
}
}
}
}
}
else
{
lean_object* v___x_880_; 
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v_b_825_);
lean_ctor_set(v___x_880_, 1, v___y_827_);
return v___x_880_;
}
v___jp_829_:
{
size_t v___x_832_; size_t v___x_833_; 
v___x_832_ = ((size_t)1ULL);
v___x_833_ = lean_usize_add(v_i_823_, v___x_832_);
v_i_823_ = v___x_833_;
v_b_825_ = v_fst_830_;
v___y_827_ = v_snd_831_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0___boxed(lean_object* v_as_881_, lean_object* v_i_882_, lean_object* v_stop_883_, lean_object* v_b_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
size_t v_i_boxed_888_; size_t v_stop_boxed_889_; lean_object* v_res_890_; 
v_i_boxed_888_ = lean_unbox_usize(v_i_882_);
lean_dec(v_i_882_);
v_stop_boxed_889_ = lean_unbox_usize(v_stop_883_);
lean_dec(v_stop_883_);
v_res_890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_as_881_, v_i_boxed_888_, v_stop_boxed_889_, v_b_884_, v___y_885_, v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec_ref(v_as_881_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(lean_object* v_new_893_, lean_object* v_unfinished_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
lean_object* v___x_898_; lean_object* v___y_900_; lean_object* v_fst_901_; lean_object* v_snd_902_; lean_object* v___y_913_; lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_916_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0));
v___x_917_ = lean_array_get_size(v_unfinished_894_);
v___x_918_ = lean_nat_dec_lt(v___x_898_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; 
lean_inc_ref(v_a_896_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_916_);
lean_ctor_set(v___x_919_, 1, v_a_896_);
v___y_900_ = v___x_919_;
v_fst_901_ = v___x_916_;
v_snd_902_ = v_a_896_;
goto v___jp_899_;
}
else
{
uint8_t v___x_920_; 
v___x_920_ = lean_nat_dec_le(v___x_917_, v___x_917_);
if (v___x_920_ == 0)
{
if (v___x_918_ == 0)
{
lean_object* v___x_921_; 
lean_inc_ref(v_a_896_);
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_916_);
lean_ctor_set(v___x_921_, 1, v_a_896_);
v___y_900_ = v___x_921_;
v_fst_901_ = v___x_916_;
v_snd_902_ = v_a_896_;
goto v___jp_899_;
}
else
{
size_t v___x_922_; size_t v___x_923_; lean_object* v___x_924_; 
v___x_922_ = ((size_t)0ULL);
v___x_923_ = lean_usize_of_nat(v___x_917_);
v___x_924_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_894_, v___x_922_, v___x_923_, v___x_916_, v_a_895_, v_a_896_);
v___y_913_ = v___x_924_;
goto v___jp_912_;
}
}
else
{
size_t v___x_925_; size_t v___x_926_; lean_object* v___x_927_; 
v___x_925_ = ((size_t)0ULL);
v___x_926_ = lean_usize_of_nat(v___x_917_);
v___x_927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_894_, v___x_925_, v___x_926_, v___x_916_, v_a_895_, v_a_896_);
v___y_913_ = v___x_927_;
goto v___jp_912_;
}
}
v___jp_899_:
{
lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_903_ = lean_array_get_size(v_new_893_);
v___x_904_ = lean_nat_dec_lt(v___x_898_, v___x_903_);
if (v___x_904_ == 0)
{
lean_dec_ref(v_snd_902_);
lean_dec_ref(v_fst_901_);
return v___y_900_;
}
else
{
uint8_t v___x_905_; 
v___x_905_ = lean_nat_dec_le(v___x_903_, v___x_903_);
if (v___x_905_ == 0)
{
if (v___x_904_ == 0)
{
lean_dec_ref(v_snd_902_);
lean_dec_ref(v_fst_901_);
return v___y_900_;
}
else
{
size_t v___x_906_; size_t v___x_907_; lean_object* v___x_908_; 
lean_dec_ref(v___y_900_);
v___x_906_ = ((size_t)0ULL);
v___x_907_ = lean_usize_of_nat(v___x_903_);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_893_, v___x_906_, v___x_907_, v_fst_901_, v_a_895_, v_snd_902_);
return v___x_908_;
}
}
else
{
size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; 
lean_dec_ref(v___y_900_);
v___x_909_ = ((size_t)0ULL);
v___x_910_ = lean_usize_of_nat(v___x_903_);
v___x_911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_893_, v___x_909_, v___x_910_, v_fst_901_, v_a_895_, v_snd_902_);
return v___x_911_;
}
}
}
v___jp_912_:
{
lean_object* v_fst_914_; lean_object* v_snd_915_; 
v_fst_914_ = lean_ctor_get(v___y_913_, 0);
lean_inc(v_fst_914_);
v_snd_915_ = lean_ctor_get(v___y_913_, 1);
lean_inc(v_snd_915_);
v___y_900_ = v___y_913_;
v_fst_901_ = v_fst_914_;
v_snd_902_ = v_snd_915_;
goto v___jp_899_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___boxed(lean_object* v_new_928_, lean_object* v_unfinished_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_928_, v_unfinished_929_, v_a_930_, v_a_931_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_unfinished_929_);
lean_dec_ref(v_new_928_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep(lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
lean_object* v___y_938_; lean_object* v___x_956_; lean_object* v_lastUpdate_957_; lean_object* v_updateFrequency_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; uint8_t v___x_962_; 
v___x_956_ = lean_io_mono_ms_now();
v_lastUpdate_957_ = lean_ctor_get(v_a_935_, 4);
v_updateFrequency_958_ = lean_ctor_get(v_a_934_, 2);
v___x_959_ = lean_nat_sub(v___x_956_, v_lastUpdate_957_);
lean_dec(v___x_956_);
v___x_960_ = lean_nat_sub(v_updateFrequency_958_, v___x_959_);
lean_dec(v___x_959_);
v___x_961_ = lean_unsigned_to_nat(0u);
v___x_962_ = lean_nat_dec_lt(v___x_961_, v___x_960_);
if (v___x_962_ == 0)
{
lean_dec(v___x_960_);
v___y_938_ = v_a_935_;
goto v___jp_937_;
}
else
{
uint32_t v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_uint32_of_nat(v___x_960_);
lean_dec(v___x_960_);
v___x_964_ = l_IO_sleep(v___x_963_);
v___y_938_ = v_a_935_;
goto v___jp_937_;
}
v___jp_937_:
{
lean_object* v___x_939_; lean_object* v_jobNo_940_; lean_object* v_totalJobs_941_; uint8_t v_wantsRebuild_942_; lean_object* v_failures_943_; lean_object* v_resetCtrl_944_; lean_object* v_spinnerIdx_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_954_; 
v___x_939_ = lean_io_mono_ms_now();
v_jobNo_940_ = lean_ctor_get(v___y_938_, 0);
v_totalJobs_941_ = lean_ctor_get(v___y_938_, 1);
v_wantsRebuild_942_ = lean_ctor_get_uint8(v___y_938_, sizeof(void*)*6);
v_failures_943_ = lean_ctor_get(v___y_938_, 2);
v_resetCtrl_944_ = lean_ctor_get(v___y_938_, 3);
v_spinnerIdx_945_ = lean_ctor_get(v___y_938_, 5);
v_isSharedCheck_954_ = !lean_is_exclusive(v___y_938_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; 
v_unused_955_ = lean_ctor_get(v___y_938_, 4);
lean_dec(v_unused_955_);
v___x_947_ = v___y_938_;
v_isShared_948_ = v_isSharedCheck_954_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_spinnerIdx_945_);
lean_inc(v_resetCtrl_944_);
lean_inc(v_failures_943_);
lean_inc(v_totalJobs_941_);
lean_inc(v_jobNo_940_);
lean_dec(v___y_938_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_954_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_949_ = lean_box(0);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 4, v___x_939_);
v___x_951_ = v___x_947_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_jobNo_940_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_totalJobs_941_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v_failures_943_);
lean_ctor_set(v_reuseFailAlloc_953_, 3, v_resetCtrl_944_);
lean_ctor_set(v_reuseFailAlloc_953_, 4, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_953_, 5, v_spinnerIdx_945_);
lean_ctor_set_uint8(v_reuseFailAlloc_953_, sizeof(void*)*6, v_wantsRebuild_942_);
v___x_951_ = v_reuseFailAlloc_953_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_949_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep___boxed(lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v_a_965_, v_a_966_);
lean_dec_ref(v_a_965_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop(lean_object* v_new_969_, lean_object* v_unfinished_970_, lean_object* v_a_971_, lean_object* v_a_972_){
_start:
{
lean_object* v___x_974_; lean_object* v_fst_975_; lean_object* v_snd_976_; lean_object* v_fst_977_; lean_object* v_snd_978_; lean_object* v___y_980_; lean_object* v___y_981_; uint8_t v_failFast_1007_; 
v___x_974_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_969_, v_unfinished_970_, v_a_971_, v_a_972_);
lean_dec_ref(v_unfinished_970_);
lean_dec_ref(v_new_969_);
v_fst_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_fst_975_);
v_snd_976_ = lean_ctor_get(v___x_974_, 1);
lean_inc(v_snd_976_);
lean_dec_ref(v___x_974_);
v_fst_977_ = lean_ctor_get(v_fst_975_, 0);
lean_inc(v_fst_977_);
v_snd_978_ = lean_ctor_get(v_fst_975_, 1);
lean_inc(v_snd_978_);
lean_dec(v_fst_975_);
v_failFast_1007_ = lean_ctor_get_uint8(v_a_971_, sizeof(void*)*4 + 7);
if (v_failFast_1007_ == 0)
{
v___y_980_ = v_a_971_;
v___y_981_ = v_snd_976_;
goto v___jp_979_;
}
else
{
lean_object* v_cancelTk_x3f_1008_; 
v_cancelTk_x3f_1008_ = lean_ctor_get(v_a_971_, 3);
if (lean_obj_tag(v_cancelTk_x3f_1008_) == 1)
{
lean_object* v_val_1009_; lean_object* v_failures_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; 
v_val_1009_ = lean_ctor_get(v_cancelTk_x3f_1008_, 0);
v_failures_1010_ = lean_ctor_get(v_snd_976_, 2);
v___x_1011_ = lean_array_get_size(v_failures_1010_);
v___x_1012_ = lean_unsigned_to_nat(0u);
v___x_1013_ = lean_nat_dec_eq(v___x_1011_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; 
v___x_1014_ = l_IO_CancelToken_set(v_val_1009_);
v___y_980_ = v_a_971_;
v___y_981_ = v_snd_976_;
goto v___jp_979_;
}
else
{
v___y_980_ = v_a_971_;
v___y_981_ = v_snd_976_;
goto v___jp_979_;
}
}
else
{
v___y_980_ = v_a_971_;
v___y_981_ = v_snd_976_;
goto v___jp_979_;
}
}
v___jp_979_:
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = lean_unsigned_to_nat(0u);
v___x_983_ = lean_array_get_size(v_snd_978_);
v___x_984_ = lean_nat_dec_lt(v___x_982_, v___x_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v_fst_986_; lean_object* v_snd_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_998_; 
lean_dec(v_fst_977_);
v___x_985_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_980_, v___y_981_);
v_fst_986_ = lean_ctor_get(v___x_985_, 0);
v_snd_987_ = lean_ctor_get(v___x_985_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_998_ == 0)
{
v___x_989_ = v___x_985_;
v_isShared_990_ = v_isSharedCheck_998_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_snd_987_);
lean_inc(v_fst_986_);
lean_dec(v___x_985_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_998_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_array_get_size(v_fst_986_);
v___x_992_ = lean_nat_dec_lt(v___x_982_, v___x_991_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; lean_object* v___x_995_; 
lean_dec(v_fst_986_);
lean_dec(v_snd_978_);
v___x_993_ = lean_box(0);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 0, v___x_993_);
v___x_995_ = v___x_989_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v_snd_987_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
else
{
lean_del_object(v___x_989_);
v_new_969_ = v_fst_986_;
v_unfinished_970_ = v_snd_978_;
v_a_971_ = v___y_980_;
v_a_972_ = v_snd_987_;
goto _start;
}
}
}
else
{
lean_object* v___x_999_; lean_object* v_snd_1000_; lean_object* v___x_1001_; lean_object* v_snd_1002_; lean_object* v___x_1003_; lean_object* v_fst_1004_; lean_object* v_snd_1005_; 
v___x_999_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_fst_977_, v_snd_978_, v___y_980_, v___y_981_);
lean_dec(v_fst_977_);
v_snd_1000_ = lean_ctor_get(v___x_999_, 1);
lean_inc(v_snd_1000_);
lean_dec_ref(v___x_999_);
v___x_1001_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v___y_980_, v_snd_1000_);
v_snd_1002_ = lean_ctor_get(v___x_1001_, 1);
lean_inc(v_snd_1002_);
lean_dec_ref(v___x_1001_);
v___x_1003_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_980_, v_snd_1002_);
v_fst_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc(v_fst_1004_);
v_snd_1005_ = lean_ctor_get(v___x_1003_, 1);
lean_inc(v_snd_1005_);
lean_dec_ref(v___x_1003_);
v_new_969_ = v_fst_1004_;
v_unfinished_970_ = v_snd_978_;
v_a_971_ = v___y_980_;
v_a_972_ = v_snd_1005_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop___boxed(lean_object* v_new_1015_, lean_object* v_unfinished_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_new_1015_, v_unfinished_1016_, v_a_1017_, v_a_1018_);
lean_dec_ref(v_a_1017_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main(lean_object* v_init_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v___x_1025_; lean_object* v_fst_1026_; lean_object* v_snd_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1096_; 
v___x_1025_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v_a_1022_, v_a_1023_);
v_fst_1026_ = lean_ctor_get(v___x_1025_, 0);
v_snd_1027_ = lean_ctor_get(v___x_1025_, 1);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1029_ = v___x_1025_;
v_isShared_1030_ = v_isSharedCheck_1096_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_snd_1027_);
lean_inc(v_fst_1026_);
lean_dec(v___x_1025_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1096_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; lean_object* v_snd_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1094_; 
v___x_1031_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_fst_1026_, v_init_1021_, v_a_1022_, v_snd_1027_);
v_snd_1032_ = lean_ctor_get(v___x_1031_, 1);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1094_ == 0)
{
lean_object* v_unused_1095_; 
v_unused_1095_ = lean_ctor_get(v___x_1031_, 0);
lean_dec(v_unused_1095_);
v___x_1034_ = v___x_1031_;
v_isShared_1035_ = v_isSharedCheck_1094_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_snd_1032_);
lean_dec(v___x_1031_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1094_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v_jobNo_1036_; lean_object* v_totalJobs_1037_; uint8_t v_wantsRebuild_1038_; lean_object* v_failures_1039_; lean_object* v_resetCtrl_1040_; lean_object* v_lastUpdate_1041_; lean_object* v_spinnerIdx_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1093_; 
v_jobNo_1036_ = lean_ctor_get(v_snd_1032_, 0);
v_totalJobs_1037_ = lean_ctor_get(v_snd_1032_, 1);
v_wantsRebuild_1038_ = lean_ctor_get_uint8(v_snd_1032_, sizeof(void*)*6);
v_failures_1039_ = lean_ctor_get(v_snd_1032_, 2);
v_resetCtrl_1040_ = lean_ctor_get(v_snd_1032_, 3);
v_lastUpdate_1041_ = lean_ctor_get(v_snd_1032_, 4);
v_spinnerIdx_1042_ = lean_ctor_get(v_snd_1032_, 5);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_snd_1032_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1044_ = v_snd_1032_;
v_isShared_1045_ = v_isSharedCheck_1093_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_spinnerIdx_1042_);
lean_inc(v_lastUpdate_1041_);
lean_inc(v_resetCtrl_1040_);
lean_inc(v_failures_1039_);
lean_inc(v_totalJobs_1037_);
lean_inc(v_jobNo_1036_);
lean_dec(v_snd_1032_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1093_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1046_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 3, v___x_1046_);
v___x_1048_ = v___x_1044_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_jobNo_1036_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_totalJobs_1037_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v_failures_1039_);
lean_ctor_set(v_reuseFailAlloc_1092_, 3, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1092_, 4, v_lastUpdate_1041_);
lean_ctor_set(v_reuseFailAlloc_1092_, 5, v_spinnerIdx_1042_);
lean_ctor_set_uint8(v_reuseFailAlloc_1092_, sizeof(void*)*6, v_wantsRebuild_1038_);
v___x_1048_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v_val_1050_; lean_object* v___x_1054_; lean_object* v___x_1055_; uint8_t v___x_1056_; 
v___x_1054_ = lean_string_utf8_byte_size(v_resetCtrl_1040_);
v___x_1055_ = lean_unsigned_to_nat(0u);
v___x_1056_ = lean_nat_dec_eq(v___x_1054_, v___x_1055_);
if (v___x_1056_ == 0)
{
lean_object* v_out_1057_; lean_object* v_flush_1058_; lean_object* v_putStr_1059_; lean_object* v___x_1064_; 
lean_del_object(v___x_1029_);
v_out_1057_ = lean_ctor_get(v_a_1022_, 1);
v_flush_1058_ = lean_ctor_get(v_out_1057_, 0);
v_putStr_1059_ = lean_ctor_get(v_out_1057_, 4);
lean_inc_ref(v_putStr_1059_);
lean_inc_ref(v_resetCtrl_1040_);
v___x_1064_ = lean_apply_2(v_putStr_1059_, v_resetCtrl_1040_, lean_box(0));
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_dec_ref_known(v___x_1064_, 1);
lean_dec_ref(v_resetCtrl_1040_);
goto v___jp_1060_;
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1087_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1067_ = v___x_1064_;
v_isShared_1068_ = v_isSharedCheck_1087_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1087_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1080_; 
v___x_1069_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1070_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1071_ = lean_unsigned_to_nat(82u);
v___x_1072_ = lean_unsigned_to_nat(4u);
v___x_1073_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_1074_ = lean_io_error_to_string(v_a_1065_);
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
lean_dec_ref(v___x_1074_);
v___x_1076_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1077_ = lean_string_append(v___x_1075_, v___x_1076_);
v___x_1078_ = l_String_quote(v_resetCtrl_1040_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 3);
lean_ctor_set(v___x_1067_, 0, v___x_1078_);
v___x_1080_ = v___x_1067_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1081_ = l_Std_Format_defWidth;
v___x_1082_ = l_Std_Format_pretty(v___x_1080_, v___x_1081_, v___x_1055_, v___x_1055_);
v___x_1083_ = lean_string_append(v___x_1077_, v___x_1082_);
lean_dec_ref(v___x_1082_);
v___x_1084_ = l_mkPanicMessageWithDecl(v___x_1069_, v___x_1070_, v___x_1071_, v___x_1072_, v___x_1083_);
lean_dec_ref(v___x_1083_);
v___x_1085_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1084_);
goto v___jp_1060_;
}
}
}
v___jp_1060_:
{
lean_object* v___x_1061_; 
lean_inc_ref(v_flush_1058_);
v___x_1061_ = lean_apply_1(v_flush_1058_, lean_box(0));
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
v_val_1050_ = v_a_1062_;
goto v___jp_1049_;
}
else
{
lean_object* v___x_1063_; 
lean_dec_ref_known(v___x_1061_, 1);
v___x_1063_ = lean_box(0);
v_val_1050_ = v___x_1063_;
goto v___jp_1049_;
}
}
}
else
{
lean_object* v___x_1088_; lean_object* v___x_1090_; 
lean_dec_ref(v_resetCtrl_1040_);
lean_del_object(v___x_1034_);
v___x_1088_ = lean_box(0);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1048_);
lean_ctor_set(v___x_1029_, 0, v___x_1088_);
v___x_1090_ = v___x_1029_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v___x_1048_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
v___jp_1049_:
{
lean_object* v___x_1052_; 
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 1, v___x_1048_);
lean_ctor_set(v___x_1034_, 0, v_val_1050_);
v___x_1052_ = v___x_1034_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_val_1050_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v___x_1048_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main___boxed(lean_object* v_init_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_init_1097_, v_a_1098_, v_a_1099_);
lean_dec_ref(v_a_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(lean_object* v_self_1102_){
_start:
{
lean_object* v_failures_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v_failures_1103_ = lean_ctor_get(v_self_1102_, 0);
v___x_1104_ = lean_array_get_size(v_failures_1103_);
v___x_1105_ = lean_unsigned_to_nat(0u);
v___x_1106_ = lean_nat_dec_eq(v___x_1104_, v___x_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk___boxed(lean_object* v_self_1107_){
_start:
{
uint8_t v_res_1108_; lean_object* v_r_1109_; 
v_res_1108_ = l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(v_self_1107_);
lean_dec_ref(v_self_1107_);
v_r_1109_ = lean_box(v_res_1108_);
return v_r_1109_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0(void){
_start:
{
uint8_t v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = 2;
v___x_1111_ = l_Lake_Verbosity_ctorIdx(v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object* v_cfg_1112_, lean_object* v_jobs_1113_, lean_object* v_cancelTk_x3f_1114_){
_start:
{
lean_object* v_toLogConfig_1116_; uint8_t v_failFast_1117_; uint8_t v_verbosity_1118_; uint8_t v_failLv_1119_; uint8_t v_outLv_1120_; uint8_t v_ansiMode_1121_; lean_object* v_out_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; uint8_t v___y_1130_; uint8_t v___y_1131_; uint8_t v___y_1135_; 
v_toLogConfig_1116_ = lean_ctor_get(v_cfg_1112_, 0);
v_failFast_1117_ = lean_ctor_get_uint8(v_cfg_1112_, sizeof(void*)*5 + 3);
v_verbosity_1118_ = lean_ctor_get_uint8(v_cfg_1112_, sizeof(void*)*5 + 4);
v_failLv_1119_ = lean_ctor_get_uint8(v_toLogConfig_1116_, sizeof(void*)*1);
v_outLv_1120_ = lean_ctor_get_uint8(v_toLogConfig_1116_, sizeof(void*)*1 + 1);
v_ansiMode_1121_ = lean_ctor_get_uint8(v_toLogConfig_1116_, sizeof(void*)*1 + 2);
v_out_1122_ = lean_ctor_get(v_toLogConfig_1116_, 0);
v___x_1123_ = l_Lake_OutStream_get(v_out_1122_);
lean_inc_ref(v___x_1123_);
v___x_1124_ = l_Lake_AnsiMode_isEnabled(v___x_1123_, v_ansiMode_1121_);
v___x_1125_ = l_Lake_BuildConfig_showProgress(v_cfg_1112_);
v___x_1126_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1118_);
v___x_1127_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0, &l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0);
v___x_1128_ = lean_nat_dec_eq(v___x_1126_, v___x_1127_);
lean_dec(v___x_1126_);
if (v___x_1128_ == 0)
{
uint8_t v___x_1137_; 
v___x_1137_ = 3;
v___y_1135_ = v___x_1137_;
goto v___jp_1134_;
}
else
{
uint8_t v___x_1138_; 
v___x_1138_ = 0;
v___y_1135_ = v___x_1138_;
goto v___jp_1134_;
}
v___jp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = lean_unsigned_to_nat(100u);
v___x_1133_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v___x_1133_, 0, v_jobs_1113_);
lean_ctor_set(v___x_1133_, 1, v___x_1123_);
lean_ctor_set(v___x_1133_, 2, v___x_1132_);
lean_ctor_set(v___x_1133_, 3, v_cancelTk_x3f_1114_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4, v_outLv_1120_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 1, v_failLv_1119_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 2, v___y_1130_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 3, v___x_1128_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 4, v___x_1124_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 5, v___x_1125_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 6, v___y_1131_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*4 + 7, v_failFast_1117_);
return v___x_1133_;
}
v___jp_1134_:
{
if (v___x_1128_ == 0)
{
if (v___x_1124_ == 0)
{
uint8_t v___x_1136_; 
v___x_1136_ = 1;
v___y_1130_ = v___y_1135_;
v___y_1131_ = v___x_1136_;
goto v___jp_1129_;
}
else
{
v___y_1130_ = v___y_1135_;
v___y_1131_ = v___x_1128_;
goto v___jp_1129_;
}
}
else
{
v___y_1130_ = v___y_1135_;
v___y_1131_ = v___x_1128_;
goto v___jp_1129_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object* v_cfg_1139_, lean_object* v_jobs_1140_, lean_object* v_cancelTk_x3f_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_1139_, v_jobs_1140_, v_cancelTk_x3f_1141_);
lean_dec_ref(v_cfg_1139_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object* v_ctx_1144_, lean_object* v_initJobs_1145_, lean_object* v_initFailures_1146_, lean_object* v_resetCtrl_1147_){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v_snd_1154_; lean_object* v_totalJobs_1155_; uint8_t v_wantsRebuild_1156_; lean_object* v_failures_1157_; lean_object* v___x_1158_; 
v___x_1149_ = lean_io_mono_ms_now();
v___x_1150_ = lean_unsigned_to_nat(0u);
v___x_1151_ = 0;
v___x_1152_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1152_, 0, v___x_1150_);
lean_ctor_set(v___x_1152_, 1, v___x_1150_);
lean_ctor_set(v___x_1152_, 2, v_initFailures_1146_);
lean_ctor_set(v___x_1152_, 3, v_resetCtrl_1147_);
lean_ctor_set(v___x_1152_, 4, v___x_1149_);
lean_ctor_set(v___x_1152_, 5, v___x_1150_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*6, v___x_1151_);
v___x_1153_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_initJobs_1145_, v_ctx_1144_, v___x_1152_);
v_snd_1154_ = lean_ctor_get(v___x_1153_, 1);
lean_inc(v_snd_1154_);
lean_dec_ref(v___x_1153_);
v_totalJobs_1155_ = lean_ctor_get(v_snd_1154_, 1);
lean_inc(v_totalJobs_1155_);
v_wantsRebuild_1156_ = lean_ctor_get_uint8(v_snd_1154_, sizeof(void*)*6);
v_failures_1157_ = lean_ctor_get(v_snd_1154_, 2);
lean_inc_ref(v_failures_1157_);
lean_dec(v_snd_1154_);
v___x_1158_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1158_, 0, v_failures_1157_);
lean_ctor_set(v___x_1158_, 1, v_totalJobs_1155_);
lean_ctor_set_uint8(v___x_1158_, sizeof(void*)*2, v_wantsRebuild_1156_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object* v_ctx_1159_, lean_object* v_initJobs_1160_, lean_object* v_initFailures_1161_, lean_object* v_resetCtrl_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1159_, v_initJobs_1160_, v_initFailures_1161_, v_resetCtrl_1162_);
lean_dec_ref(v_ctx_1159_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object* v_initJobs_1165_, lean_object* v_jobs_1166_, lean_object* v_out_1167_, uint8_t v_failLv_1168_, uint8_t v_outLv_1169_, uint8_t v_minAction_1170_, uint8_t v_showOptional_1171_, uint8_t v_useAnsi_1172_, uint8_t v_showProgress_1173_, uint8_t v_showTime_1174_, lean_object* v_resetCtrl_1175_, lean_object* v_initFailures_1176_, lean_object* v_updateFrequency_1177_){
_start:
{
uint8_t v___x_1179_; lean_object* v___x_1180_; lean_object* v_ctx_1181_; lean_object* v___x_1182_; 
v___x_1179_ = 0;
v___x_1180_ = lean_box(0);
v_ctx_1181_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v_ctx_1181_, 0, v_jobs_1166_);
lean_ctor_set(v_ctx_1181_, 1, v_out_1167_);
lean_ctor_set(v_ctx_1181_, 2, v_updateFrequency_1177_);
lean_ctor_set(v_ctx_1181_, 3, v___x_1180_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4, v_outLv_1169_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 1, v_failLv_1168_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 2, v_minAction_1170_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 3, v_showOptional_1171_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 4, v_useAnsi_1172_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 5, v_showProgress_1173_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 6, v_showTime_1174_);
lean_ctor_set_uint8(v_ctx_1181_, sizeof(void*)*4 + 7, v___x_1179_);
v___x_1182_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1181_, v_initJobs_1165_, v_initFailures_1176_, v_resetCtrl_1175_);
lean_dec_ref_known(v_ctx_1181_, 4);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object* v_initJobs_1183_, lean_object* v_jobs_1184_, lean_object* v_out_1185_, lean_object* v_failLv_1186_, lean_object* v_outLv_1187_, lean_object* v_minAction_1188_, lean_object* v_showOptional_1189_, lean_object* v_useAnsi_1190_, lean_object* v_showProgress_1191_, lean_object* v_showTime_1192_, lean_object* v_resetCtrl_1193_, lean_object* v_initFailures_1194_, lean_object* v_updateFrequency_1195_, lean_object* v_a_1196_){
_start:
{
uint8_t v_failLv_boxed_1197_; uint8_t v_outLv_boxed_1198_; uint8_t v_minAction_boxed_1199_; uint8_t v_showOptional_boxed_1200_; uint8_t v_useAnsi_boxed_1201_; uint8_t v_showProgress_boxed_1202_; uint8_t v_showTime_boxed_1203_; lean_object* v_res_1204_; 
v_failLv_boxed_1197_ = lean_unbox(v_failLv_1186_);
v_outLv_boxed_1198_ = lean_unbox(v_outLv_1187_);
v_minAction_boxed_1199_ = lean_unbox(v_minAction_1188_);
v_showOptional_boxed_1200_ = lean_unbox(v_showOptional_1189_);
v_useAnsi_boxed_1201_ = lean_unbox(v_useAnsi_1190_);
v_showProgress_boxed_1202_ = lean_unbox(v_showProgress_1191_);
v_showTime_boxed_1203_ = lean_unbox(v_showTime_1192_);
v_res_1204_ = l_Lake_monitorJobs(v_initJobs_1183_, v_jobs_1184_, v_out_1185_, v_failLv_boxed_1197_, v_outLv_boxed_1198_, v_minAction_boxed_1199_, v_showOptional_boxed_1200_, v_useAnsi_boxed_1201_, v_showProgress_boxed_1202_, v_showTime_boxed_1203_, v_resetCtrl_1193_, v_initFailures_1194_, v_updateFrequency_1195_);
return v_res_1204_;
}
}
static uint32_t _init_l_Lake_noBuildCode(void){
_start:
{
uint32_t v___x_1205_; 
v___x_1205_ = 3;
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0(lean_object* v_logger_1206_, lean_object* v_x_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_apply_2(v_logger_1206_, v___y_1208_, lean_box(0));
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0___boxed(lean_object* v_logger_1211_, lean_object* v_x_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0(v_logger_1211_, v_x_1212_, v___y_1213_);
return v_res_1215_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0));
v___x_1218_ = l_String_quote(v___x_1217_);
return v___x_1218_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1);
v___x_1220_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = l_Std_Format_defWidth;
v___x_1223_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2);
v___x_1224_ = l_Std_Format_pretty(v___x_1223_, v___x_1222_, v___x_1221_, v___x_1221_);
return v___x_1224_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7));
v___x_1232_ = l_String_quote(v___x_1231_);
return v___x_1232_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8);
v___x_1234_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1235_ = lean_unsigned_to_nat(0u);
v___x_1236_ = l_Std_Format_defWidth;
v___x_1237_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9);
v___x_1238_ = l_Std_Format_pretty(v___x_1237_, v___x_1236_, v___x_1235_, v___x_1235_);
return v___x_1238_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11));
v___x_1241_ = l_String_quote(v___x_1240_);
return v___x_1241_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12);
v___x_1243_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
return v___x_1243_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14(void){
_start:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1244_ = lean_unsigned_to_nat(0u);
v___x_1245_ = l_Std_Format_defWidth;
v___x_1246_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13);
v___x_1247_ = l_Std_Format_pretty(v___x_1246_, v___x_1245_, v___x_1244_, v___x_1244_);
return v___x_1247_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16));
v___x_1251_ = l_String_quote(v___x_1250_);
return v___x_1251_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17);
v___x_1253_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1254_ = lean_unsigned_to_nat(0u);
v___x_1255_ = l_Std_Format_defWidth;
v___x_1256_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18);
v___x_1257_ = l_Std_Format_pretty(v___x_1256_, v___x_1255_, v___x_1254_, v___x_1254_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs(lean_object* v_logger_1258_, lean_object* v_bctx_1259_, lean_object* v_out_1260_, lean_object* v_outputsFile_1261_){
_start:
{
lean_object* v___x_1269_; lean_object* v_outputsRef_x3f_1270_; 
v___x_1269_ = l_instMonadBaseIO;
v_outputsRef_x3f_1270_ = lean_ctor_get(v_bctx_1259_, 5);
lean_inc(v_outputsRef_x3f_1270_);
if (lean_obj_tag(v_outputsRef_x3f_1270_) == 1)
{
lean_object* v_toBuildConfig_1271_; lean_object* v_toContext_1272_; lean_object* v_val_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1421_; 
v_toBuildConfig_1271_ = lean_ctor_get(v_bctx_1259_, 0);
lean_inc_ref(v_toBuildConfig_1271_);
v_toContext_1272_ = lean_ctor_get(v_bctx_1259_, 1);
lean_inc(v_toContext_1272_);
lean_dec_ref(v_bctx_1259_);
v_val_1273_ = lean_ctor_get(v_outputsRef_x3f_1270_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_outputsRef_x3f_1270_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1275_ = v_outputsRef_x3f_1270_;
v_isShared_1276_ = v_isSharedCheck_1421_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_val_1273_);
lean_dec(v_outputsRef_x3f_1270_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1421_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v_ws_1277_; lean_object* v_lakeEnv_1278_; lean_object* v_packages_1279_; uint8_t v_verbosity_1280_; lean_object* v_outputsIdx_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v_ws_1277_ = l_unsafeCast___redArg(v_toContext_1272_);
lean_dec(v_toContext_1272_);
v_lakeEnv_1278_ = lean_ctor_get(v_ws_1277_, 0);
lean_inc_ref(v_lakeEnv_1278_);
v_packages_1279_ = lean_ctor_get(v_ws_1277_, 4);
lean_inc_ref(v_packages_1279_);
lean_dec(v_ws_1277_);
v_verbosity_1280_ = lean_ctor_get_uint8(v_toBuildConfig_1271_, sizeof(void*)*5 + 4);
v_outputsIdx_1281_ = lean_ctor_get(v_toBuildConfig_1271_, 2);
lean_inc(v_outputsIdx_1281_);
lean_dec_ref(v_toBuildConfig_1271_);
v___x_1282_ = lean_array_get_size(v_packages_1279_);
v___x_1283_ = lean_nat_dec_lt(v_outputsIdx_1281_, v___x_1282_);
if (v___x_1283_ == 0)
{
lean_object* v_putStr_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec(v_outputsIdx_1281_);
lean_dec_ref(v_packages_1279_);
lean_dec_ref(v_lakeEnv_1278_);
lean_del_object(v___x_1275_);
lean_dec(v_val_1273_);
lean_dec_ref(v_outputsFile_1261_);
lean_dec_ref(v_logger_1258_);
v_putStr_1284_ = lean_ctor_get(v_out_1260_, 4);
lean_inc_ref(v_putStr_1284_);
lean_dec_ref(v_out_1260_);
v___x_1285_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0));
v___x_1286_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1287_ = lean_apply_2(v_putStr_1284_, v___x_1285_, lean_box(0));
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_dec_ref_known(v___x_1287_, 1);
goto v___jp_1265_;
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_2582__overap_1301_; lean_object* v___x_1302_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1289_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1290_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1291_ = lean_unsigned_to_nat(82u);
v___x_1292_ = lean_unsigned_to_nat(4u);
v___x_1293_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_1294_ = lean_io_error_to_string(v_a_1288_);
v___x_1295_ = lean_string_append(v___x_1293_, v___x_1294_);
lean_dec_ref(v___x_1294_);
v___x_1296_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1297_ = lean_string_append(v___x_1295_, v___x_1296_);
v___x_1298_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3);
v___x_1299_ = lean_string_append(v___x_1297_, v___x_1298_);
v___x_1300_ = l_mkPanicMessageWithDecl(v___x_1289_, v___x_1290_, v___x_1291_, v___x_1292_, v___x_1299_);
lean_dec_ref(v___x_1299_);
v___x_2582__overap_1301_ = l_panic___redArg(v___x_1286_, v___x_1300_);
v___x_1302_ = lean_apply_1(v___x_2582__overap_1301_, lean_box(0));
lean_dec(v___x_1302_);
goto v___jp_1265_;
}
}
else
{
lean_object* v___x_1303_; lean_object* v_config_1304_; lean_object* v_enableArtifactCache_x3f_1305_; lean_object* v___f_1306_; lean_object* v___y_1308_; lean_object* v___y_1309_; uint8_t v___y_1310_; lean_object* v___y_1320_; lean_object* v___y_1321_; uint8_t v___y_1330_; uint8_t v___y_1399_; uint8_t v___y_1408_; 
v___x_1303_ = lean_array_fget(v_packages_1279_, v_outputsIdx_1281_);
lean_dec(v_outputsIdx_1281_);
v_config_1304_ = lean_ctor_get(v___x_1303_, 6);
v_enableArtifactCache_x3f_1305_ = lean_ctor_get(v_config_1304_, 24);
lean_inc_ref(v_logger_1258_);
v___f_1306_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1306_, 0, v_logger_1258_);
if (lean_obj_tag(v_enableArtifactCache_x3f_1305_) == 0)
{
lean_object* v_enableArtifactCache_x3f_1409_; 
v_enableArtifactCache_x3f_1409_ = lean_ctor_get(v_lakeEnv_1278_, 6);
lean_inc(v_enableArtifactCache_x3f_1409_);
lean_dec_ref(v_lakeEnv_1278_);
if (lean_obj_tag(v_enableArtifactCache_x3f_1409_) == 0)
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v_config_1412_; lean_object* v_enableArtifactCache_x3f_1413_; 
v___x_1410_ = lean_unsigned_to_nat(0u);
v___x_1411_ = lean_array_fget(v_packages_1279_, v___x_1410_);
lean_dec_ref(v_packages_1279_);
v_config_1412_ = lean_ctor_get(v___x_1411_, 6);
lean_inc_ref(v_config_1412_);
lean_dec(v___x_1411_);
v_enableArtifactCache_x3f_1413_ = lean_ctor_get(v_config_1412_, 24);
lean_inc(v_enableArtifactCache_x3f_1413_);
lean_dec_ref(v_config_1412_);
if (lean_obj_tag(v_enableArtifactCache_x3f_1413_) == 0)
{
uint8_t v___x_1414_; 
v___x_1414_ = 0;
v___y_1399_ = v___x_1414_;
goto v___jp_1398_;
}
else
{
lean_object* v_val_1415_; uint8_t v___x_1416_; 
v_val_1415_ = lean_ctor_get(v_enableArtifactCache_x3f_1413_, 0);
lean_inc(v_val_1415_);
lean_dec_ref_known(v_enableArtifactCache_x3f_1413_, 1);
v___x_1416_ = lean_unbox(v_val_1415_);
lean_dec(v_val_1415_);
v___y_1408_ = v___x_1416_;
goto v___jp_1407_;
}
}
else
{
lean_object* v_val_1417_; uint8_t v___x_1418_; 
lean_dec_ref(v_packages_1279_);
v_val_1417_ = lean_ctor_get(v_enableArtifactCache_x3f_1409_, 0);
lean_inc(v_val_1417_);
lean_dec_ref_known(v_enableArtifactCache_x3f_1409_, 1);
v___x_1418_ = lean_unbox(v_val_1417_);
lean_dec(v_val_1417_);
v___y_1408_ = v___x_1418_;
goto v___jp_1407_;
}
}
else
{
lean_object* v_val_1419_; uint8_t v___x_1420_; 
lean_dec_ref(v_packages_1279_);
lean_dec_ref(v_lakeEnv_1278_);
v_val_1419_ = lean_ctor_get(v_enableArtifactCache_x3f_1305_, 0);
v___x_1420_ = lean_unbox(v_val_1419_);
v___y_1408_ = v___x_1420_;
goto v___jp_1407_;
}
v___jp_1307_:
{
if (v___y_1310_ == 0)
{
lean_object* v___x_1311_; 
lean_dec_ref(v___y_1309_);
lean_dec_ref(v___f_1306_);
v___x_1311_ = lean_box(0);
return v___x_1311_;
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; 
v___x_1312_ = lean_array_get_size(v___y_1309_);
v___x_1313_ = lean_box(0);
v___x_1314_ = lean_nat_dec_lt(v___y_1308_, v___x_1312_);
if (v___x_1314_ == 0)
{
lean_dec_ref(v___y_1309_);
lean_dec_ref(v___f_1306_);
return v___x_1313_;
}
else
{
size_t v___x_1315_; size_t v___x_1316_; lean_object* v___x_2394__overap_1317_; lean_object* v___x_1318_; 
v___x_1315_ = ((size_t)0ULL);
v___x_1316_ = lean_usize_of_nat(v___x_1312_);
v___x_2394__overap_1317_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1269_, v___f_1306_, v___y_1309_, v___x_1315_, v___x_1316_, v___x_1313_);
v___x_1318_ = lean_apply_1(v___x_2394__overap_1317_, lean_box(0));
return v___x_1318_;
}
}
}
v___jp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
v___x_1322_ = lean_array_get_size(v___y_1321_);
v___x_1323_ = lean_box(0);
v___x_1324_ = lean_nat_dec_lt(v___y_1320_, v___x_1322_);
if (v___x_1324_ == 0)
{
lean_dec_ref(v___y_1321_);
lean_dec_ref(v___f_1306_);
return v___x_1323_;
}
else
{
size_t v___x_1325_; size_t v___x_1326_; lean_object* v___x_2324__overap_1327_; lean_object* v___x_1328_; 
v___x_1325_ = ((size_t)0ULL);
v___x_1326_ = lean_usize_of_nat(v___x_1322_);
v___x_2324__overap_1327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1269_, v___f_1306_, v___y_1321_, v___x_1325_, v___x_1326_, v___x_1323_);
v___x_1328_ = lean_apply_1(v___x_2324__overap_1327_, lean_box(0));
return v___x_1328_;
}
}
v___jp_1329_:
{
lean_object* v___x_1331_; lean_object* v_config_1332_; lean_object* v_toLeanConfig_1333_; lean_object* v_platformIndependent_1334_; lean_object* v___f_1335_; lean_object* v___x_1336_; lean_object* v___x_1338_; 
v___x_1331_ = lean_st_ref_get(v_val_1273_);
lean_dec(v_val_1273_);
v_config_1332_ = lean_ctor_get(v___x_1303_, 6);
lean_inc_ref(v_config_1332_);
lean_dec(v___x_1303_);
v_toLeanConfig_1333_ = lean_ctor_get(v_config_1332_, 1);
lean_inc_ref(v_toLeanConfig_1333_);
lean_dec_ref(v_config_1332_);
v_platformIndependent_1334_ = lean_ctor_get(v_toLeanConfig_1333_, 10);
lean_inc(v_platformIndependent_1334_);
lean_dec_ref(v_toLeanConfig_1333_);
v___f_1335_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5));
v___x_1336_ = lean_box(v___x_1283_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1336_);
v___x_1338_ = v___x_1275_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
uint8_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1339_ = l_Option_instBEq_beq___redArg(v___f_1335_, v_platformIndependent_1334_, v___x_1338_);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6));
v___x_1342_ = l_Lake_CacheMap_writeFile(v_outputsFile_1261_, v___x_1331_, v___x_1339_, v___x_1341_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 1);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1342_, 2);
v___x_1344_ = lean_array_get_size(v_a_1343_);
v___x_1345_ = lean_nat_dec_eq(v___x_1344_, v___x_1340_);
if (v___x_1345_ == 0)
{
if (v___y_1330_ == 0)
{
lean_dec(v_a_1343_);
lean_dec_ref(v___f_1306_);
lean_dec_ref(v_out_1260_);
goto v___jp_1263_;
}
else
{
lean_object* v_putStr_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v_putStr_1346_ = lean_ctor_get(v_out_1260_, 4);
lean_inc_ref(v_putStr_1346_);
lean_dec_ref(v_out_1260_);
v___x_1347_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7));
v___x_1348_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1349_ = lean_apply_2(v_putStr_1346_, v___x_1347_, lean_box(0));
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_dec_ref_known(v___x_1349_, 1);
v___y_1320_ = v___x_1340_;
v___y_1321_ = v_a_1343_;
goto v___jp_1319_;
}
else
{
lean_object* v_a_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_2591__overap_1368_; lean_object* v___x_1369_; 
v_a_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_a_1350_);
lean_dec_ref_known(v___x_1349_, 1);
v___x_1351_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1352_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1353_ = lean_unsigned_to_nat(82u);
v___x_1354_ = lean_unsigned_to_nat(4u);
v___x_1355_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1356_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_1357_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1356_, v___y_1330_);
v___x_1358_ = lean_string_append(v___x_1355_, v___x_1357_);
lean_dec_ref(v___x_1357_);
v___x_1359_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_1360_ = lean_string_append(v___x_1358_, v___x_1359_);
v___x_1361_ = lean_io_error_to_string(v_a_1350_);
v___x_1362_ = lean_string_append(v___x_1360_, v___x_1361_);
lean_dec_ref(v___x_1361_);
v___x_1363_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1364_ = lean_string_append(v___x_1362_, v___x_1363_);
v___x_1365_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10);
v___x_1366_ = lean_string_append(v___x_1364_, v___x_1365_);
v___x_1367_ = l_mkPanicMessageWithDecl(v___x_1351_, v___x_1352_, v___x_1353_, v___x_1354_, v___x_1366_);
lean_dec_ref(v___x_1366_);
v___x_2591__overap_1368_ = l_panic___redArg(v___x_1348_, v___x_1367_);
v___x_1369_ = lean_apply_1(v___x_2591__overap_1368_, lean_box(0));
lean_dec(v___x_1369_);
v___y_1320_ = v___x_1340_;
v___y_1321_ = v_a_1343_;
goto v___jp_1319_;
}
}
}
else
{
lean_dec(v_a_1343_);
lean_dec_ref(v___f_1306_);
lean_dec_ref(v_out_1260_);
goto v___jp_1263_;
}
}
else
{
lean_object* v_a_1370_; lean_object* v_putStr_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v_a_1370_ = lean_ctor_get(v___x_1342_, 1);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1342_, 2);
v_putStr_1371_ = lean_ctor_get(v_out_1260_, 4);
lean_inc_ref(v_putStr_1371_);
lean_dec_ref(v_out_1260_);
v___x_1372_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11));
v___x_1373_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1374_ = lean_apply_2(v_putStr_1371_, v___x_1372_, lean_box(0));
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_dec_ref_known(v___x_1374_, 1);
v___y_1308_ = v___x_1340_;
v___y_1309_ = v_a_1370_;
v___y_1310_ = v___y_1330_;
goto v___jp_1307_;
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_2597__overap_1393_; lean_object* v___x_1394_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_a_1375_);
lean_dec_ref_known(v___x_1374_, 1);
v___x_1376_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1377_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1378_ = lean_unsigned_to_nat(82u);
v___x_1379_ = lean_unsigned_to_nat(4u);
v___x_1380_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1381_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_1382_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1381_, v___x_1283_);
v___x_1383_ = lean_string_append(v___x_1380_, v___x_1382_);
lean_dec_ref(v___x_1382_);
v___x_1384_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_1385_ = lean_string_append(v___x_1383_, v___x_1384_);
v___x_1386_ = lean_io_error_to_string(v_a_1375_);
v___x_1387_ = lean_string_append(v___x_1385_, v___x_1386_);
lean_dec_ref(v___x_1386_);
v___x_1388_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1389_ = lean_string_append(v___x_1387_, v___x_1388_);
v___x_1390_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14);
v___x_1391_ = lean_string_append(v___x_1389_, v___x_1390_);
v___x_1392_ = l_mkPanicMessageWithDecl(v___x_1376_, v___x_1377_, v___x_1378_, v___x_1379_, v___x_1391_);
lean_dec_ref(v___x_1391_);
v___x_2597__overap_1393_ = l_panic___redArg(v___x_1373_, v___x_1392_);
v___x_1394_ = lean_apply_1(v___x_2597__overap_1393_, lean_box(0));
lean_dec(v___x_1394_);
v___y_1308_ = v___x_1340_;
v___y_1309_ = v_a_1370_;
v___y_1310_ = v___y_1330_;
goto v___jp_1307_;
}
}
}
}
v___jp_1396_:
{
if (v_verbosity_1280_ == 2)
{
v___y_1330_ = v___x_1283_;
goto v___jp_1329_;
}
else
{
uint8_t v___x_1397_; 
v___x_1397_ = 0;
v___y_1330_ = v___x_1397_;
goto v___jp_1329_;
}
}
v___jp_1398_:
{
lean_object* v_baseName_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v_baseName_1400_ = lean_ctor_get(v___x_1303_, 1);
lean_inc(v_baseName_1400_);
v___x_1401_ = l_Lean_Name_toString(v_baseName_1400_, v___y_1399_);
v___x_1402_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15));
v___x_1403_ = lean_string_append(v___x_1401_, v___x_1402_);
v___x_1404_ = 2;
v___x_1405_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set_uint8(v___x_1405_, sizeof(void*)*1, v___x_1404_);
v___x_1406_ = lean_apply_2(v_logger_1258_, v___x_1405_, lean_box(0));
goto v___jp_1396_;
}
v___jp_1407_:
{
if (v___y_1408_ == 0)
{
v___y_1399_ = v___y_1408_;
goto v___jp_1398_;
}
else
{
lean_dec_ref(v_logger_1258_);
goto v___jp_1396_;
}
}
}
}
}
else
{
lean_object* v_putStr_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
lean_dec(v_outputsRef_x3f_1270_);
lean_dec_ref(v_outputsFile_1261_);
lean_dec_ref(v_bctx_1259_);
lean_dec_ref(v_logger_1258_);
v_putStr_1422_ = lean_ctor_get(v_out_1260_, 4);
lean_inc_ref(v_putStr_1422_);
lean_dec_ref(v_out_1260_);
v___x_1423_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16));
v___x_1424_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1425_ = lean_apply_2(v_putStr_1422_, v___x_1423_, lean_box(0));
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_dec_ref_known(v___x_1425_, 1);
goto v___jp_1267_;
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_2603__overap_1439_; lean_object* v___x_1440_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v___x_1427_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1428_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1429_ = lean_unsigned_to_nat(82u);
v___x_1430_ = lean_unsigned_to_nat(4u);
v___x_1431_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_1432_ = lean_io_error_to_string(v_a_1426_);
v___x_1433_ = lean_string_append(v___x_1431_, v___x_1432_);
lean_dec_ref(v___x_1432_);
v___x_1434_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1435_ = lean_string_append(v___x_1433_, v___x_1434_);
v___x_1436_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19);
v___x_1437_ = lean_string_append(v___x_1435_, v___x_1436_);
v___x_1438_ = l_mkPanicMessageWithDecl(v___x_1427_, v___x_1428_, v___x_1429_, v___x_1430_, v___x_1437_);
lean_dec_ref(v___x_1437_);
v___x_2603__overap_1439_ = l_panic___redArg(v___x_1424_, v___x_1438_);
v___x_1440_ = lean_apply_1(v___x_2603__overap_1439_, lean_box(0));
lean_dec(v___x_1440_);
goto v___jp_1267_;
}
}
v___jp_1263_:
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_box(0);
return v___x_1264_;
}
v___jp_1265_:
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_box(0);
return v___x_1266_;
}
v___jp_1267_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_box(0);
return v___x_1268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___boxed(lean_object* v_logger_1441_, lean_object* v_bctx_1442_, lean_object* v_out_1443_, lean_object* v_outputsFile_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs(v_logger_1441_, v_bctx_1442_, v_out_1443_, v_outputsFile_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object* v_out_1448_, lean_object* v_as_1449_, size_t v_i_1450_, size_t v_stop_1451_, lean_object* v_b_1452_){
_start:
{
lean_object* v_val_1455_; uint8_t v___x_1459_; 
v___x_1459_ = lean_usize_dec_eq(v_i_1450_, v_stop_1451_);
if (v___x_1459_ == 0)
{
lean_object* v_putStr_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v_putStr_1460_ = lean_ctor_get(v_out_1448_, 4);
v___x_1461_ = lean_array_uget_borrowed(v_as_1449_, v_i_1450_);
v___x_1462_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0));
v___x_1463_ = lean_string_append(v___x_1462_, v___x_1461_);
v___x_1464_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_1465_ = lean_string_append(v___x_1463_, v___x_1464_);
lean_inc_ref(v_putStr_1460_);
lean_inc_ref(v___x_1465_);
v___x_1466_ = lean_apply_2(v_putStr_1460_, v___x_1465_, lean_box(0));
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; 
lean_dec_ref(v___x_1465_);
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v_val_1455_ = v_a_1467_;
goto v___jp_1454_;
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1491_; 
v_a_1468_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1470_ = v___x_1466_;
v_isShared_1471_ = v_isSharedCheck_1491_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1466_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1491_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1484_; 
v___x_1472_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1473_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1474_ = lean_unsigned_to_nat(82u);
v___x_1475_ = lean_unsigned_to_nat(4u);
v___x_1476_ = lean_unsigned_to_nat(0u);
v___x_1477_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_1478_ = lean_io_error_to_string(v_a_1468_);
v___x_1479_ = lean_string_append(v___x_1477_, v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1481_ = lean_string_append(v___x_1479_, v___x_1480_);
v___x_1482_ = l_String_quote(v___x_1465_);
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 3);
lean_ctor_set(v___x_1470_, 0, v___x_1482_);
v___x_1484_ = v___x_1470_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1482_);
v___x_1484_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1485_ = l_Std_Format_defWidth;
v___x_1486_ = l_Std_Format_pretty(v___x_1484_, v___x_1485_, v___x_1476_, v___x_1476_);
v___x_1487_ = lean_string_append(v___x_1481_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = l_mkPanicMessageWithDecl(v___x_1472_, v___x_1473_, v___x_1474_, v___x_1475_, v___x_1487_);
lean_dec_ref(v___x_1487_);
v___x_1489_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1488_);
v_val_1455_ = v___x_1489_;
goto v___jp_1454_;
}
}
}
}
else
{
lean_dec_ref(v_out_1448_);
return v_b_1452_;
}
v___jp_1454_:
{
size_t v___x_1456_; size_t v___x_1457_; 
v___x_1456_ = ((size_t)1ULL);
v___x_1457_ = lean_usize_add(v_i_1450_, v___x_1456_);
v_i_1450_ = v___x_1457_;
v_b_1452_ = v_val_1455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object* v_out_1492_, lean_object* v_as_1493_, lean_object* v_i_1494_, lean_object* v_stop_1495_, lean_object* v_b_1496_, lean_object* v___y_1497_){
_start:
{
size_t v_i_boxed_1498_; size_t v_stop_boxed_1499_; lean_object* v_res_1500_; 
v_i_boxed_1498_ = lean_unbox_usize(v_i_1494_);
lean_dec(v_i_1494_);
v_stop_boxed_1499_ = lean_unbox_usize(v_stop_1495_);
lean_dec(v_stop_1495_);
v_res_1500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1492_, v_as_1493_, v_i_boxed_1498_, v_stop_boxed_1499_, v_b_1496_);
lean_dec_ref(v_as_1493_);
return v_res_1500_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__6(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1508_ = l_String_quote(v___x_1507_);
return v___x_1508_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__7(void){
_start:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1509_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__6, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__6);
v___x_1510_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1509_);
return v___x_1510_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__8(void){
_start:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1511_ = lean_unsigned_to_nat(0u);
v___x_1512_ = l_Std_Format_defWidth;
v___x_1513_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__7, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__7);
v___x_1514_ = l_Std_Format_pretty(v___x_1513_, v___x_1512_, v___x_1511_, v___x_1511_);
return v___x_1514_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10(void){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
v___x_1517_ = l_String_quote(v___x_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__10, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10);
v___x_1519_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
return v___x_1519_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = l_Std_Format_defWidth;
v___x_1522_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__11, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11);
v___x_1523_ = l_Std_Format_pretty(v___x_1522_, v___x_1521_, v___x_1520_, v___x_1520_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult(lean_object* v_cfg_1524_, lean_object* v_out_1525_, lean_object* v_result_1526_){
_start:
{
uint8_t v___y_1529_; lean_object* v___y_1530_; lean_object* v_failures_1604_; lean_object* v_numJobs_1605_; uint8_t v___y_1607_; lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; 
v_failures_1604_ = lean_ctor_get(v_result_1526_, 0);
lean_inc_ref(v_failures_1604_);
v_numJobs_1605_ = lean_ctor_get(v_result_1526_, 1);
lean_inc(v_numJobs_1605_);
lean_dec_ref(v_result_1526_);
v___x_1640_ = lean_array_get_size(v_failures_1604_);
v___x_1641_ = lean_unsigned_to_nat(0u);
v___x_1642_ = lean_nat_dec_eq(v___x_1640_, v___x_1641_);
if (v___x_1642_ == 0)
{
lean_object* v_flush_1643_; lean_object* v_putStr_1644_; lean_object* v___y_1650_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
lean_dec(v_numJobs_1605_);
v_flush_1643_ = lean_ctor_get(v_out_1525_, 0);
lean_inc_ref(v_flush_1643_);
v_putStr_1644_ = lean_ctor_get(v_out_1525_, 4);
v___x_1661_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
lean_inc_ref(v_putStr_1644_);
v___x_1662_ = lean_apply_2(v_putStr_1644_, v___x_1661_, lean_box(0));
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_dec_ref_known(v___x_1662_, 1);
goto v___jp_1651_;
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1665_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1666_ = lean_unsigned_to_nat(82u);
v___x_1667_ = lean_unsigned_to_nat(4u);
v___x_1668_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_1669_ = lean_io_error_to_string(v_a_1663_);
v___x_1670_ = lean_string_append(v___x_1668_, v___x_1669_);
lean_dec_ref(v___x_1669_);
v___x_1671_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1672_ = lean_string_append(v___x_1670_, v___x_1671_);
v___x_1673_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__12, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12);
v___x_1674_ = lean_string_append(v___x_1672_, v___x_1673_);
v___x_1675_ = l_mkPanicMessageWithDecl(v___x_1664_, v___x_1665_, v___x_1666_, v___x_1667_, v___x_1674_);
lean_dec_ref(v___x_1674_);
v___x_1676_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1675_);
goto v___jp_1651_;
}
v___jp_1645_:
{
lean_object* v___x_1646_; 
v___x_1646_ = lean_apply_1(v_flush_1643_, lean_box(0));
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
return v_a_1647_;
}
else
{
lean_object* v___x_1648_; 
lean_dec_ref_known(v___x_1646_, 1);
v___x_1648_ = lean_box(0);
return v___x_1648_;
}
}
v___jp_1649_:
{
goto v___jp_1645_;
}
v___jp_1651_:
{
uint8_t v___x_1652_; 
v___x_1652_ = lean_nat_dec_lt(v___x_1641_, v___x_1640_);
if (v___x_1652_ == 0)
{
lean_dec_ref(v_failures_1604_);
lean_dec_ref(v_out_1525_);
goto v___jp_1645_;
}
else
{
lean_object* v___x_1653_; uint8_t v___x_1654_; 
v___x_1653_ = lean_box(0);
v___x_1654_ = lean_nat_dec_le(v___x_1640_, v___x_1640_);
if (v___x_1654_ == 0)
{
if (v___x_1652_ == 0)
{
lean_dec_ref(v_failures_1604_);
lean_dec_ref(v_out_1525_);
goto v___jp_1645_;
}
else
{
size_t v___x_1655_; size_t v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = ((size_t)0ULL);
v___x_1656_ = lean_usize_of_nat(v___x_1640_);
v___x_1657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1525_, v_failures_1604_, v___x_1655_, v___x_1656_, v___x_1653_);
lean_dec_ref(v_failures_1604_);
v___y_1650_ = v___x_1657_;
goto v___jp_1649_;
}
}
else
{
size_t v___x_1658_; size_t v___x_1659_; lean_object* v___x_1660_; 
v___x_1658_ = ((size_t)0ULL);
v___x_1659_ = lean_usize_of_nat(v___x_1640_);
v___x_1660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1525_, v_failures_1604_, v___x_1658_, v___x_1659_, v___x_1653_);
lean_dec_ref(v_failures_1604_);
v___y_1650_ = v___x_1660_;
goto v___jp_1649_;
}
}
}
}
else
{
uint8_t v___x_1677_; 
lean_dec_ref(v_failures_1604_);
v___x_1677_ = l_Lake_BuildConfig_showProgress(v_cfg_1524_);
if (v___x_1677_ == 0)
{
v___y_1607_ = v___x_1677_;
goto v___jp_1606_;
}
else
{
uint8_t v_showSuccess_1678_; 
v_showSuccess_1678_ = lean_ctor_get_uint8(v_cfg_1524_, sizeof(void*)*5 + 5);
v___y_1607_ = v_showSuccess_1678_;
goto v___jp_1606_;
}
}
v___jp_1528_:
{
uint8_t v_noBuild_1531_; 
v_noBuild_1531_ = lean_ctor_get_uint8(v_cfg_1524_, sizeof(void*)*5 + 2);
if (v_noBuild_1531_ == 0)
{
lean_object* v_putStr_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v_putStr_1532_ = lean_ctor_get(v_out_1525_, 4);
lean_inc_ref(v_putStr_1532_);
lean_dec_ref(v_out_1525_);
v___x_1533_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__0));
v___x_1534_ = lean_string_append(v___x_1533_, v___y_1530_);
lean_dec_ref(v___y_1530_);
v___x_1535_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__1));
v___x_1536_ = lean_string_append(v___x_1534_, v___x_1535_);
lean_inc_ref(v___x_1536_);
v___x_1537_ = lean_apply_2(v_putStr_1532_, v___x_1536_, lean_box(0));
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; 
lean_dec_ref(v___x_1536_);
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
return v_a_1538_;
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1567_; 
v_a_1539_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1541_ = v___x_1537_;
v_isShared_1542_ = v_isSharedCheck_1567_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1537_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1567_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1543_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1544_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1545_ = lean_unsigned_to_nat(82u);
v___x_1546_ = lean_unsigned_to_nat(4u);
v___x_1547_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1548_ = lean_unsigned_to_nat(0u);
v___x_1549_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_1550_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1549_, v___y_1529_);
v___x_1551_ = lean_string_append(v___x_1547_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v___x_1552_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_1553_ = lean_string_append(v___x_1551_, v___x_1552_);
v___x_1554_ = lean_io_error_to_string(v_a_1539_);
v___x_1555_ = lean_string_append(v___x_1553_, v___x_1554_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1557_ = lean_string_append(v___x_1555_, v___x_1556_);
v___x_1558_ = l_String_quote(v___x_1536_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set_tag(v___x_1541_, 3);
lean_ctor_set(v___x_1541_, 0, v___x_1558_);
v___x_1560_ = v___x_1541_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1561_ = l_Std_Format_defWidth;
v___x_1562_ = l_Std_Format_pretty(v___x_1560_, v___x_1561_, v___x_1548_, v___x_1548_);
v___x_1563_ = lean_string_append(v___x_1557_, v___x_1562_);
lean_dec_ref(v___x_1562_);
v___x_1564_ = l_mkPanicMessageWithDecl(v___x_1543_, v___x_1544_, v___x_1545_, v___x_1546_, v___x_1563_);
lean_dec_ref(v___x_1563_);
v___x_1565_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1564_);
return v___x_1565_;
}
}
}
}
else
{
lean_object* v_putStr_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_putStr_1568_ = lean_ctor_get(v_out_1525_, 4);
lean_inc_ref(v_putStr_1568_);
lean_dec_ref(v_out_1525_);
v___x_1569_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__2));
v___x_1570_ = lean_string_append(v___x_1569_, v___y_1530_);
lean_dec_ref(v___y_1530_);
v___x_1571_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__1));
v___x_1572_ = lean_string_append(v___x_1570_, v___x_1571_);
lean_inc_ref(v___x_1572_);
v___x_1573_ = lean_apply_2(v_putStr_1568_, v___x_1572_, lean_box(0));
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; 
lean_dec_ref(v___x_1572_);
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1574_);
lean_dec_ref_known(v___x_1573_, 1);
return v_a_1574_;
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1603_; 
v_a_1575_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1577_ = v___x_1573_;
v_isShared_1578_ = v_isSharedCheck_1603_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1603_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1596_; 
v___x_1579_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1580_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1581_ = lean_unsigned_to_nat(82u);
v___x_1582_ = lean_unsigned_to_nat(4u);
v___x_1583_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1584_ = lean_unsigned_to_nat(0u);
v___x_1585_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_1586_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1585_, v_noBuild_1531_);
v___x_1587_ = lean_string_append(v___x_1583_, v___x_1586_);
lean_dec_ref(v___x_1586_);
v___x_1588_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_1589_ = lean_string_append(v___x_1587_, v___x_1588_);
v___x_1590_ = lean_io_error_to_string(v_a_1575_);
v___x_1591_ = lean_string_append(v___x_1589_, v___x_1590_);
lean_dec_ref(v___x_1590_);
v___x_1592_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1593_ = lean_string_append(v___x_1591_, v___x_1592_);
v___x_1594_ = l_String_quote(v___x_1572_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set_tag(v___x_1577_, 3);
lean_ctor_set(v___x_1577_, 0, v___x_1594_);
v___x_1596_ = v___x_1577_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1594_);
v___x_1596_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1597_ = l_Std_Format_defWidth;
v___x_1598_ = l_Std_Format_pretty(v___x_1596_, v___x_1597_, v___x_1584_, v___x_1584_);
v___x_1599_ = lean_string_append(v___x_1593_, v___x_1598_);
lean_dec_ref(v___x_1598_);
v___x_1600_ = l_mkPanicMessageWithDecl(v___x_1579_, v___x_1580_, v___x_1581_, v___x_1582_, v___x_1599_);
lean_dec_ref(v___x_1599_);
v___x_1601_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1600_);
return v___x_1601_;
}
}
}
}
}
v___jp_1606_:
{
if (v___y_1607_ == 0)
{
lean_object* v___x_1608_; 
lean_dec(v_numJobs_1605_);
lean_dec_ref(v_out_1525_);
v___x_1608_ = lean_box(0);
return v___x_1608_;
}
else
{
lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1609_ = lean_unsigned_to_nat(0u);
v___x_1610_ = lean_nat_dec_eq(v_numJobs_1605_, v___x_1609_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; uint8_t v___x_1612_; 
v___x_1611_ = lean_unsigned_to_nat(1u);
v___x_1612_ = lean_nat_dec_eq(v_numJobs_1605_, v___x_1611_);
if (v___x_1612_ == 0)
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1613_ = l_Nat_reprFast(v_numJobs_1605_);
v___x_1614_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__3));
v___x_1615_ = lean_string_append(v___x_1613_, v___x_1614_);
v___y_1529_ = v___y_1607_;
v___y_1530_ = v___x_1615_;
goto v___jp_1528_;
}
else
{
lean_object* v___x_1616_; 
lean_dec(v_numJobs_1605_);
v___x_1616_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__4));
v___y_1529_ = v___y_1607_;
v___y_1530_ = v___x_1616_;
goto v___jp_1528_;
}
}
else
{
lean_object* v_putStr_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_dec(v_numJobs_1605_);
v_putStr_1617_ = lean_ctor_get(v_out_1525_, 4);
lean_inc_ref(v_putStr_1617_);
lean_dec_ref(v_out_1525_);
v___x_1618_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1619_ = lean_apply_2(v_putStr_1617_, v___x_1618_, lean_box(0));
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v___x_1619_, 1);
return v_a_1620_;
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v_a_1621_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v___x_1619_, 1);
v___x_1622_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1623_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1624_ = lean_unsigned_to_nat(82u);
v___x_1625_ = lean_unsigned_to_nat(4u);
v___x_1626_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1627_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_1628_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1627_, v___x_1610_);
v___x_1629_ = lean_string_append(v___x_1626_, v___x_1628_);
lean_dec_ref(v___x_1628_);
v___x_1630_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_1631_ = lean_string_append(v___x_1629_, v___x_1630_);
v___x_1632_ = lean_io_error_to_string(v_a_1621_);
v___x_1633_ = lean_string_append(v___x_1631_, v___x_1632_);
lean_dec_ref(v___x_1632_);
v___x_1634_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_1635_ = lean_string_append(v___x_1633_, v___x_1634_);
v___x_1636_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__8, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__8);
v___x_1637_ = lean_string_append(v___x_1635_, v___x_1636_);
v___x_1638_ = l_mkPanicMessageWithDecl(v___x_1622_, v___x_1623_, v___x_1624_, v___x_1625_, v___x_1637_);
lean_dec_ref(v___x_1637_);
v___x_1639_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1638_);
return v___x_1639_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___boxed(lean_object* v_cfg_1679_, lean_object* v_out_1680_, lean_object* v_result_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_1679_, v_out_1680_, v_result_1681_);
lean_dec_ref(v_cfg_1679_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(lean_object* v_self_1684_){
_start:
{
lean_object* v_toMonitorResult_1685_; 
v_toMonitorResult_1685_ = lean_ctor_get(v_self_1684_, 0);
lean_inc_ref(v_toMonitorResult_1685_);
return v_toMonitorResult_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed(lean_object* v_self_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(v_self_1686_);
lean_dec_ref(v_self_1686_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg(){
_start:
{
lean_object* v___f_1690_; 
v___f_1690_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___boxed(lean_object* v___dummy_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg();
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult(lean_object* v_00_u03b1_1693_){
_start:
{
lean_object* v___f_1694_; 
v___f_1694_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1694_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(lean_object* v_self_1695_){
_start:
{
lean_object* v_out_1696_; 
v_out_1696_ = lean_ctor_get(v_self_1695_, 1);
if (lean_obj_tag(v_out_1696_) == 0)
{
uint8_t v___x_1697_; 
v___x_1697_ = 0;
return v___x_1697_;
}
else
{
uint8_t v___x_1698_; 
v___x_1698_ = 1;
return v___x_1698_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg___boxed(lean_object* v_self_1699_){
_start:
{
uint8_t v_res_1700_; lean_object* v_r_1701_; 
v_res_1700_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(v_self_1699_);
lean_dec_ref(v_self_1699_);
v_r_1701_ = lean_box(v_res_1700_);
return v_r_1701_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(lean_object* v_00_u03b1_1702_, lean_object* v_self_1703_){
_start:
{
lean_object* v_out_1704_; 
v_out_1704_ = lean_ctor_get(v_self_1703_, 1);
if (lean_obj_tag(v_out_1704_) == 0)
{
uint8_t v___x_1705_; 
v___x_1705_ = 0;
return v___x_1705_;
}
else
{
uint8_t v___x_1706_; 
v___x_1706_ = 1;
return v___x_1706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___boxed(lean_object* v_00_u03b1_1707_, lean_object* v_self_1708_){
_start:
{
uint8_t v_res_1709_; lean_object* v_r_1710_; 
v_res_1709_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(v_00_u03b1_1707_, v_self_1708_);
lean_dec_ref(v_self_1708_);
v_r_1710_ = lean_box(v_res_1709_);
return v_r_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(lean_object* v_ctx_1719_, lean_object* v_job_1720_){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v_failures_1730_; lean_object* v___x_1731_; uint8_t v___x_1732_; 
lean_inc_ref(v_job_1720_);
v___x_1722_ = l_Lake_Job_toOpaque___redArg(v_job_1720_);
v___x_1723_ = lean_unsigned_to_nat(1u);
v___x_1724_ = lean_mk_empty_array_with_capacity(v___x_1723_);
v___x_1725_ = lean_array_push(v___x_1724_, v___x_1722_);
v___x_1726_ = lean_unsigned_to_nat(0u);
v___x_1727_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0));
v___x_1728_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_1729_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1719_, v___x_1725_, v___x_1727_, v___x_1728_);
v_failures_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc_ref(v_failures_1730_);
v___x_1731_ = lean_array_get_size(v_failures_1730_);
lean_dec_ref(v_failures_1730_);
v___x_1732_ = lean_nat_dec_eq(v___x_1731_, v___x_1726_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec_ref(v_job_1720_);
v___x_1733_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2));
v___x_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1729_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
return v___x_1734_;
}
else
{
lean_object* v_task_1735_; lean_object* v___x_1736_; 
v_task_1735_ = lean_ctor_get(v_job_1720_, 0);
lean_inc_ref(v_task_1735_);
lean_dec_ref(v_job_1720_);
v___x_1736_ = lean_io_wait(v_task_1735_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1745_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1745_ == 0)
{
lean_object* v_unused_1746_; 
v_unused_1746_ = lean_ctor_get(v___x_1736_, 1);
lean_dec(v_unused_1746_);
v___x_1739_ = v___x_1736_;
v_isShared_1740_ = v_isSharedCheck_1745_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1736_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1745_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1741_; lean_object* v___x_1743_; 
v___x_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1741_, 0, v_a_1737_);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 1, v___x_1741_);
lean_ctor_set(v___x_1739_, 0, v___x_1729_);
v___x_1743_ = v___x_1739_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1729_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v___x_1741_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
else
{
lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1754_; 
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1754_ == 0)
{
lean_object* v_unused_1755_; lean_object* v_unused_1756_; 
v_unused_1755_ = lean_ctor_get(v___x_1736_, 1);
lean_dec(v_unused_1755_);
v_unused_1756_ = lean_ctor_get(v___x_1736_, 0);
lean_dec(v_unused_1756_);
v___x_1748_ = v___x_1736_;
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
else
{
lean_dec(v___x_1736_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1750_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4));
if (v_isShared_1749_ == 0)
{
lean_ctor_set_tag(v___x_1748_, 0);
lean_ctor_set(v___x_1748_, 1, v___x_1750_);
lean_ctor_set(v___x_1748_, 0, v___x_1729_);
v___x_1752_ = v___x_1748_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1729_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___boxed(lean_object* v_ctx_1757_, lean_object* v_job_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1757_, v_job_1758_);
lean_dec_ref(v_ctx_1757_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob(lean_object* v_00_u03b1_1761_, lean_object* v_ctx_1762_, lean_object* v_job_1763_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1762_, v_job_1763_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___boxed(lean_object* v_00_u03b1_1766_, lean_object* v_ctx_1767_, lean_object* v_job_1768_, lean_object* v_a_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l___private_Lake_Build_Run_0__Lake_monitorJob(v_00_u03b1_1766_, v_ctx_1767_, v_job_1768_);
lean_dec_ref(v_ctx_1767_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(lean_object* v_info_1773_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lake_computeTextFileHash(v_info_1773_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1777_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1776_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1777_ = lean_io_metadata(v_info_1773_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1789_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1780_ = v___x_1777_;
v_isShared_1781_ = v_isSharedCheck_1789_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1777_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1789_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v_modified_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; uint64_t v___x_1785_; lean_object* v___x_1787_; 
v_modified_1782_ = lean_ctor_get(v_a_1778_, 1);
lean_inc_ref(v_modified_1782_);
lean_dec(v_a_1778_);
v___x_1783_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1784_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1784_, 0, v_info_1773_);
lean_ctor_set(v___x_1784_, 1, v___x_1783_);
lean_ctor_set(v___x_1784_, 2, v_modified_1782_);
v___x_1785_ = lean_unbox_uint64(v_a_1776_);
lean_dec(v_a_1776_);
lean_ctor_set_uint64(v___x_1784_, sizeof(void*)*3, v___x_1785_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v___x_1784_);
v___x_1787_ = v___x_1780_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1784_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec(v_a_1776_);
lean_dec_ref(v_info_1773_);
v_a_1790_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1777_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1777_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref(v_info_1773_);
v_a_1798_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1775_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1775_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___boxed(lean_object* v_info_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v_info_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(lean_object* v___x_1812_, lean_object* v_as_1813_, size_t v_sz_1814_, size_t v_i_1815_, lean_object* v_b_1816_){
_start:
{
lean_object* v_a_1819_; uint8_t v___x_1823_; 
v___x_1823_ = lean_usize_dec_lt(v_i_1815_, v_sz_1814_);
if (v___x_1823_ == 0)
{
lean_dec_ref(v___x_1812_);
return v_b_1816_;
}
else
{
lean_object* v_snd_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1847_; 
v_snd_1824_ = lean_ctor_get(v_b_1816_, 1);
v_isSharedCheck_1847_ = !lean_is_exclusive(v_b_1816_);
if (v_isSharedCheck_1847_ == 0)
{
lean_object* v_unused_1848_; 
v_unused_1848_ = lean_ctor_get(v_b_1816_, 0);
lean_dec(v_unused_1848_);
v___x_1826_ = v_b_1816_;
v_isShared_1827_ = v_isSharedCheck_1847_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_snd_1824_);
lean_dec(v_b_1816_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1847_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1828_ = lean_box(0);
v_a_1829_ = lean_array_uget_borrowed(v_as_1813_, v_i_1815_);
v___x_1830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0));
lean_inc_ref(v___x_1812_);
v___x_1831_ = l_Lake_joinRelative(v___x_1812_, v___x_1830_);
lean_inc(v_a_1829_);
v___x_1832_ = l_Lake_joinRelative(v___x_1831_, v_a_1829_);
v___x_1833_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v___x_1832_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; lean_object* v___x_1837_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = l_Lake_BuildTrace_mix(v_snd_1824_, v_a_1834_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v___x_1835_);
lean_ctor_set(v___x_1826_, 0, v___x_1828_);
v___x_1837_ = v___x_1826_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1828_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
v_a_1819_ = v___x_1837_;
goto v___jp_1818_;
}
}
else
{
lean_object* v_a_1839_; 
v_a_1839_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v___x_1833_, 1);
if (lean_obj_tag(v_a_1839_) == 11)
{
lean_object* v___x_1841_; 
lean_dec_ref_known(v_a_1839_, 2);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1828_);
v___x_1841_ = v___x_1826_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1828_);
lean_ctor_set(v_reuseFailAlloc_1842_, 1, v_snd_1824_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
v_a_1819_ = v___x_1841_;
goto v___jp_1818_;
}
}
else
{
lean_object* v___x_1843_; lean_object* v___x_1845_; 
lean_dec(v_a_1839_);
lean_dec_ref(v___x_1812_);
v___x_1843_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1));
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1843_);
v___x_1845_ = v___x_1826_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1843_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_snd_1824_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
}
v___jp_1818_:
{
size_t v___x_1820_; size_t v___x_1821_; 
v___x_1820_ = ((size_t)1ULL);
v___x_1821_ = lean_usize_add(v_i_1815_, v___x_1820_);
v_i_1815_ = v___x_1821_;
v_b_1816_ = v_a_1819_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___boxed(lean_object* v___x_1849_, lean_object* v_as_1850_, lean_object* v_sz_1851_, lean_object* v_i_1852_, lean_object* v_b_1853_, lean_object* v___y_1854_){
_start:
{
size_t v_sz_boxed_1855_; size_t v_i_boxed_1856_; lean_object* v_res_1857_; 
v_sz_boxed_1855_ = lean_unbox_usize(v_sz_1851_);
lean_dec(v_sz_1851_);
v_i_boxed_1856_ = lean_unbox_usize(v_i_1852_);
lean_dec(v_i_1852_);
v_res_1857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1849_, v_as_1850_, v_sz_boxed_1855_, v_i_boxed_1856_, v_b_1853_);
lean_dec_ref(v_as_1850_);
return v_res_1857_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1));
v___x_1861_ = l_Lake_BuildTrace_nil(v___x_1860_);
return v___x_1861_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2);
v___x_1877_ = lean_box(0);
v___x_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
lean_ctor_set(v___x_1878_, 1, v___x_1876_);
return v___x_1878_;
}
}
static size_t _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1879_; size_t v_sz_1880_; 
v___x_1879_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v_sz_1880_ = lean_array_size(v___x_1879_);
return v_sz_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(size_t v_sz_1881_, size_t v_i_1882_, lean_object* v_bs_1883_){
_start:
{
uint8_t v___x_1885_; 
v___x_1885_ = lean_usize_dec_lt(v_i_1882_, v_sz_1881_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; 
v___x_1886_ = l_unsafeCast___redArg(v_bs_1883_);
lean_dec_ref(v_bs_1883_);
return v___x_1886_;
}
else
{
lean_object* v_v_1887_; lean_object* v___x_1888_; lean_object* v_config_1889_; lean_object* v_dir_1890_; uint8_t v_bootstrap_1891_; lean_object* v_buildDir_1892_; lean_object* v___x_1893_; lean_object* v_bs_x27_1894_; lean_object* v_val_1896_; 
v_v_1887_ = lean_array_uget_borrowed(v_bs_1883_, v_i_1882_);
v___x_1888_ = l_unsafeCast___redArg(v_v_1887_);
v_config_1889_ = lean_ctor_get(v___x_1888_, 6);
lean_inc_ref(v_config_1889_);
v_dir_1890_ = lean_ctor_get(v___x_1888_, 4);
lean_inc_ref(v_dir_1890_);
lean_dec(v___x_1888_);
v_bootstrap_1891_ = lean_ctor_get_uint8(v_config_1889_, sizeof(void*)*28);
v_buildDir_1892_ = lean_ctor_get(v_config_1889_, 5);
lean_inc_ref(v_buildDir_1892_);
lean_dec_ref(v_config_1889_);
v___x_1893_ = lean_unsigned_to_nat(0u);
v_bs_x27_1894_ = lean_array_uset(v_bs_1883_, v_i_1882_, v___x_1893_);
if (v_bootstrap_1891_ == 0)
{
lean_object* v___x_1902_; 
lean_dec_ref(v_buildDir_1892_);
lean_dec_ref(v_dir_1890_);
v___x_1902_ = lean_box(0);
v_val_1896_ = v___x_1902_;
goto v___jp_1895_;
}
else
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; size_t v_sz_1909_; size_t v___x_1910_; lean_object* v___x_1911_; lean_object* v_fst_1912_; 
v___x_1903_ = l_System_FilePath_normalize(v_buildDir_1892_);
v___x_1904_ = l_Lake_joinRelative(v_dir_1890_, v___x_1903_);
v___x_1905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0));
v___x_1906_ = l_Lake_joinRelative(v___x_1904_, v___x_1905_);
v___x_1907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v___x_1908_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8);
v_sz_1909_ = lean_usize_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9);
v___x_1910_ = ((size_t)0ULL);
lean_inc_ref(v___x_1906_);
v___x_1911_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1906_, v___x_1907_, v_sz_1909_, v___x_1910_, v___x_1908_);
v_fst_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_fst_1912_);
if (lean_obj_tag(v_fst_1912_) == 0)
{
lean_object* v_snd_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1921_; 
v_snd_1913_ = lean_ctor_get(v___x_1911_, 1);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1921_ == 0)
{
lean_object* v_unused_1922_; 
v_unused_1922_ = lean_ctor_get(v___x_1911_, 0);
lean_dec(v_unused_1922_);
v___x_1915_ = v___x_1911_;
v_isShared_1916_ = v_isSharedCheck_1921_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_snd_1913_);
lean_dec(v___x_1911_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1921_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 0, v___x_1906_);
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v___x_1906_);
lean_ctor_set(v_reuseFailAlloc_1920_, 1, v_snd_1913_);
v___x_1918_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1918_);
v_val_1896_ = v___x_1919_;
goto v___jp_1895_;
}
}
}
else
{
lean_object* v_val_1923_; 
lean_dec_ref(v___x_1911_);
lean_dec_ref(v___x_1906_);
v_val_1923_ = lean_ctor_get(v_fst_1912_, 0);
lean_inc(v_val_1923_);
lean_dec_ref_known(v_fst_1912_, 1);
v_val_1896_ = v_val_1923_;
goto v___jp_1895_;
}
}
v___jp_1895_:
{
size_t v___x_1897_; size_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1897_ = ((size_t)1ULL);
v___x_1898_ = lean_usize_add(v_i_1882_, v___x_1897_);
v___x_1899_ = l_unsafeCast___redArg(v_val_1896_);
lean_dec(v_val_1896_);
v___x_1900_ = lean_array_uset(v_bs_x27_1894_, v_i_1882_, v___x_1899_);
v_i_1882_ = v___x_1898_;
v_bs_1883_ = v___x_1900_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed(lean_object* v_sz_1924_, lean_object* v_i_1925_, lean_object* v_bs_1926_, lean_object* v___y_1927_){
_start:
{
size_t v_sz_boxed_1928_; size_t v_i_boxed_1929_; lean_object* v_res_1930_; 
v_sz_boxed_1928_ = lean_unbox_usize(v_sz_1924_);
lean_dec(v_sz_1924_);
v_i_boxed_1929_ = lean_unbox_usize(v_i_1925_);
lean_dec(v_i_1925_);
v_res_1930_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_boxed_1928_, v_i_boxed_1929_, v_bs_1926_);
return v_res_1930_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1932_ = l_Lean_versionStringCore;
v___x_1933_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0));
v___x_1934_ = lean_string_append(v___x_1933_, v___x_1932_);
return v___x_1934_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2));
v___x_1937_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1);
v___x_1938_ = lean_string_append(v___x_1937_, v___x_1936_);
return v___x_1938_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4(void){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = lean_unsigned_to_nat(0u);
v___x_1940_ = lean_nat_to_int(v___x_1939_);
return v___x_1940_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5(void){
_start:
{
uint32_t v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1941_ = 0;
v___x_1942_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4);
v___x_1943_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
lean_ctor_set_uint32(v___x_1943_, sizeof(void*)*1, v___x_1941_);
return v___x_1943_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6(void){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1944_ = lean_box(0);
v___x_1945_ = lean_unsigned_to_nat(16u);
v___x_1946_ = lean_mk_array(v___x_1945_, v___x_1944_);
return v___x_1946_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1947_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6);
v___x_1948_ = lean_unsigned_to_nat(0u);
v___x_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
lean_ctor_set(v___x_1949_, 1, v___x_1947_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext(lean_object* v_ws_1954_, lean_object* v_cfg_1955_, lean_object* v_jobs_1956_, lean_object* v_cancelTk_x3f_1957_){
_start:
{
lean_object* v___y_1960_; lean_object* v___y_1961_; uint8_t v___y_1962_; uint8_t v___y_1963_; uint8_t v___y_1964_; uint8_t v___y_1965_; lean_object* v___y_1966_; uint8_t v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; uint8_t v___y_1970_; lean_object* v_val_1971_; lean_object* v___y_2007_; lean_object* v___y_2008_; uint8_t v___y_2009_; uint8_t v___y_2010_; uint8_t v___y_2011_; uint8_t v___y_2012_; uint8_t v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; uint8_t v___y_2017_; lean_object* v_val_2020_; uint8_t v___x_2046_; 
v___x_2046_ = l_System_Platform_isOSX;
if (v___x_2046_ == 0)
{
lean_object* v_macosxDeploymentTarget_x3f_2047_; 
v_macosxDeploymentTarget_x3f_2047_ = lean_ctor_get(v_cfg_1955_, 4);
lean_inc(v_macosxDeploymentTarget_x3f_2047_);
v_val_2020_ = v_macosxDeploymentTarget_x3f_2047_;
goto v___jp_2019_;
}
else
{
lean_object* v_macosxDeploymentTarget_x3f_2048_; 
v_macosxDeploymentTarget_x3f_2048_ = lean_ctor_get(v_cfg_1955_, 4);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_2048_) == 0)
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___y_2052_; 
v___x_2049_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8));
v___x_2050_ = lean_io_getenv(v___x_2049_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v___x_2054_; 
v___x_2054_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9));
v___y_2052_ = v___x_2054_;
goto v___jp_2051_;
}
else
{
lean_object* v_val_2055_; 
v_val_2055_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_val_2055_);
lean_dec_ref_known(v___x_2050_, 1);
v___y_2052_ = v_val_2055_;
goto v___jp_2051_;
}
v___jp_2051_:
{
lean_object* v___x_2053_; 
v___x_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2053_, 0, v___y_2052_);
v_val_2020_ = v___x_2053_;
goto v___jp_2019_;
}
}
else
{
lean_inc_ref(v_macosxDeploymentTarget_x3f_2048_);
v_val_2020_ = v_macosxDeploymentTarget_x3f_2048_;
goto v___jp_2019_;
}
}
v___jp_1959_:
{
lean_object* v_lakeEnv_1972_; lean_object* v_packages_1973_; size_t v_sz_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_2236__overap_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1998_; 
v_lakeEnv_1972_ = lean_ctor_get(v_ws_1954_, 0);
lean_inc_ref(v_lakeEnv_1972_);
v_packages_1973_ = lean_ctor_get(v_ws_1954_, 4);
v_sz_1974_ = lean_array_size(v_packages_1973_);
v___x_1975_ = l_unsafeCast___redArg(v_packages_1973_);
v___x_1976_ = lean_box_usize(v_sz_1974_);
v___x_1977_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed__const__1));
v___x_1978_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed), 4, 3);
lean_closure_set(v___x_1978_, 0, v___x_1976_);
lean_closure_set(v___x_1978_, 1, v___x_1977_);
lean_closure_set(v___x_1978_, 2, v___x_1975_);
v___x_2236__overap_1979_ = l_unsafeCast___redArg(v___x_1978_);
lean_dec_ref(v___x_1978_);
v___x_1980_ = lean_apply_1(v___x_2236__overap_1979_, lean_box(0));
v___x_1981_ = lean_alloc_ctor(0, 5, 6);
lean_ctor_set(v___x_1981_, 0, v___y_1969_);
lean_ctor_set(v___x_1981_, 1, v___y_1968_);
lean_ctor_set(v___x_1981_, 2, v___y_1960_);
lean_ctor_set(v___x_1981_, 3, v___y_1961_);
lean_ctor_set(v___x_1981_, 4, v___y_1966_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*5, v___y_1970_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*5 + 1, v___y_1964_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*5 + 2, v___y_1963_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*5 + 3, v___y_1965_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*5 + 4, v___y_1967_);
lean_ctor_set_uint8(v___x_1981_, sizeof(void*)*5 + 5, v___y_1962_);
v___x_1982_ = l_unsafeCast___redArg(v_ws_1954_);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_ws_1954_);
if (v_isSharedCheck_1998_ == 0)
{
lean_object* v_unused_1999_; lean_object* v_unused_2000_; lean_object* v_unused_2001_; lean_object* v_unused_2002_; lean_object* v_unused_2003_; lean_object* v_unused_2004_; lean_object* v_unused_2005_; 
v_unused_1999_ = lean_ctor_get(v_ws_1954_, 6);
lean_dec(v_unused_1999_);
v_unused_2000_ = lean_ctor_get(v_ws_1954_, 5);
lean_dec(v_unused_2000_);
v_unused_2001_ = lean_ctor_get(v_ws_1954_, 4);
lean_dec(v_unused_2001_);
v_unused_2002_ = lean_ctor_get(v_ws_1954_, 3);
lean_dec(v_unused_2002_);
v_unused_2003_ = lean_ctor_get(v_ws_1954_, 2);
lean_dec(v_unused_2003_);
v_unused_2004_ = lean_ctor_get(v_ws_1954_, 1);
lean_dec(v_unused_2004_);
v_unused_2005_ = lean_ctor_get(v_ws_1954_, 0);
lean_dec(v_unused_2005_);
v___x_1984_ = v_ws_1954_;
v_isShared_1985_ = v_isSharedCheck_1998_;
goto v_resetjp_1983_;
}
else
{
lean_dec(v_ws_1954_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1998_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; uint64_t v___x_1987_; uint64_t v___x_1988_; uint64_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1986_ = l_Lake_Env_leanGithash(v_lakeEnv_1972_);
lean_dec_ref(v_lakeEnv_1972_);
v___x_1987_ = l_Lake_Hash_nil;
v___x_1988_ = lean_string_hash(v___x_1986_);
v___x_1989_ = lean_uint64_mix_hash(v___x_1987_, v___x_1988_);
v___x_1990_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3);
v___x_1991_ = lean_string_append(v___x_1990_, v___x_1986_);
lean_dec_ref(v___x_1986_);
v___x_1992_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1993_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5);
v___x_1994_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1994_, 0, v___x_1991_);
lean_ctor_set(v___x_1994_, 1, v___x_1992_);
lean_ctor_set(v___x_1994_, 2, v___x_1993_);
lean_ctor_set_uint64(v___x_1994_, sizeof(void*)*3, v___x_1989_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 6, v_cancelTk_x3f_1957_);
lean_ctor_set(v___x_1984_, 5, v_val_1971_);
lean_ctor_set(v___x_1984_, 4, v_jobs_1956_);
lean_ctor_set(v___x_1984_, 3, v___x_1980_);
lean_ctor_set(v___x_1984_, 2, v___x_1994_);
lean_ctor_set(v___x_1984_, 1, v___x_1982_);
lean_ctor_set(v___x_1984_, 0, v___x_1981_);
v___x_1996_ = v___x_1984_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1981_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v___x_1982_);
lean_ctor_set(v_reuseFailAlloc_1997_, 2, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_1997_, 3, v___x_1980_);
lean_ctor_set(v_reuseFailAlloc_1997_, 4, v_jobs_1956_);
lean_ctor_set(v_reuseFailAlloc_1997_, 5, v_val_1971_);
lean_ctor_set(v_reuseFailAlloc_1997_, 6, v_cancelTk_x3f_1957_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
v___jp_2006_:
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_box(0);
v___y_1960_ = v___y_2007_;
v___y_1961_ = v___y_2008_;
v___y_1962_ = v___y_2009_;
v___y_1963_ = v___y_2010_;
v___y_1964_ = v___y_2011_;
v___y_1965_ = v___y_2012_;
v___y_1966_ = v___y_2014_;
v___y_1967_ = v___y_2013_;
v___y_1968_ = v___y_2016_;
v___y_1969_ = v___y_2015_;
v___y_1970_ = v___y_2017_;
v_val_1971_ = v___x_2018_;
goto v___jp_1959_;
}
v___jp_2019_:
{
lean_object* v_outputsFile_x3f_2021_; 
v_outputsFile_x3f_2021_ = lean_ctor_get(v_cfg_1955_, 1);
lean_inc(v_outputsFile_x3f_2021_);
if (lean_obj_tag(v_outputsFile_x3f_2021_) == 0)
{
lean_object* v_toLogConfig_2022_; uint8_t v_oldMode_2023_; uint8_t v_trustHash_2024_; uint8_t v_noBuild_2025_; uint8_t v_failFast_2026_; uint8_t v_verbosity_2027_; uint8_t v_showSuccess_2028_; lean_object* v_outputsIdx_2029_; lean_object* v_leanOptOverrides_2030_; 
v_toLogConfig_2022_ = lean_ctor_get(v_cfg_1955_, 0);
lean_inc_ref(v_toLogConfig_2022_);
v_oldMode_2023_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5);
v_trustHash_2024_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 1);
v_noBuild_2025_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 2);
v_failFast_2026_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 3);
v_verbosity_2027_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 4);
v_showSuccess_2028_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 5);
v_outputsIdx_2029_ = lean_ctor_get(v_cfg_1955_, 2);
lean_inc(v_outputsIdx_2029_);
v_leanOptOverrides_2030_ = lean_ctor_get(v_cfg_1955_, 3);
lean_inc(v_leanOptOverrides_2030_);
lean_dec_ref(v_cfg_1955_);
v___y_2007_ = v_outputsIdx_2029_;
v___y_2008_ = v_leanOptOverrides_2030_;
v___y_2009_ = v_showSuccess_2028_;
v___y_2010_ = v_noBuild_2025_;
v___y_2011_ = v_trustHash_2024_;
v___y_2012_ = v_failFast_2026_;
v___y_2013_ = v_verbosity_2027_;
v___y_2014_ = v_val_2020_;
v___y_2015_ = v_toLogConfig_2022_;
v___y_2016_ = v_outputsFile_x3f_2021_;
v___y_2017_ = v_oldMode_2023_;
goto v___jp_2006_;
}
else
{
lean_object* v_toLogConfig_2031_; uint8_t v_oldMode_2032_; uint8_t v_trustHash_2033_; uint8_t v_noBuild_2034_; uint8_t v_failFast_2035_; uint8_t v_verbosity_2036_; uint8_t v_showSuccess_2037_; lean_object* v_outputsIdx_2038_; lean_object* v_leanOptOverrides_2039_; lean_object* v_packages_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v_toLogConfig_2031_ = lean_ctor_get(v_cfg_1955_, 0);
lean_inc_ref(v_toLogConfig_2031_);
v_oldMode_2032_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5);
v_trustHash_2033_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 1);
v_noBuild_2034_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 2);
v_failFast_2035_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 3);
v_verbosity_2036_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 4);
v_showSuccess_2037_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*5 + 5);
v_outputsIdx_2038_ = lean_ctor_get(v_cfg_1955_, 2);
lean_inc(v_outputsIdx_2038_);
v_leanOptOverrides_2039_ = lean_ctor_get(v_cfg_1955_, 3);
lean_inc(v_leanOptOverrides_2039_);
lean_dec_ref(v_cfg_1955_);
v_packages_2040_ = lean_ctor_get(v_ws_1954_, 4);
v___x_2041_ = lean_array_get_size(v_packages_2040_);
v___x_2042_ = lean_nat_dec_lt(v_outputsIdx_2038_, v___x_2041_);
if (v___x_2042_ == 0)
{
v___y_2007_ = v_outputsIdx_2038_;
v___y_2008_ = v_leanOptOverrides_2039_;
v___y_2009_ = v_showSuccess_2037_;
v___y_2010_ = v_noBuild_2034_;
v___y_2011_ = v_trustHash_2033_;
v___y_2012_ = v_failFast_2035_;
v___y_2013_ = v_verbosity_2036_;
v___y_2014_ = v_val_2020_;
v___y_2015_ = v_toLogConfig_2031_;
v___y_2016_ = v_outputsFile_x3f_2021_;
v___y_2017_ = v_oldMode_2032_;
goto v___jp_2006_;
}
else
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7);
v___x_2044_ = lean_st_mk_ref(v___x_2043_);
v___x_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
v___y_1960_ = v_outputsIdx_2038_;
v___y_1961_ = v_leanOptOverrides_2039_;
v___y_1962_ = v_showSuccess_2037_;
v___y_1963_ = v_noBuild_2034_;
v___y_1964_ = v_trustHash_2033_;
v___y_1965_ = v_failFast_2035_;
v___y_1966_ = v_val_2020_;
v___y_1967_ = v_verbosity_2036_;
v___y_1968_ = v_outputsFile_x3f_2021_;
v___y_1969_ = v_toLogConfig_2031_;
v___y_1970_ = v_oldMode_2032_;
v_val_1971_ = v___x_2045_;
goto v___jp_1959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed(lean_object* v_ws_2056_, lean_object* v_cfg_2057_, lean_object* v_jobs_2058_, lean_object* v_cancelTk_x3f_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2056_, v_cfg_2057_, v_jobs_2058_, v_cancelTk_x3f_2059_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(lean_object* v_build_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v_log_2070_; uint8_t v_action_2071_; uint8_t v_wantsRebuild_2072_; lean_object* v_trace_2073_; lean_object* v_buildTime_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2103_; 
v_log_2070_ = lean_ctor_get(v___y_2068_, 0);
v_action_2071_ = lean_ctor_get_uint8(v___y_2068_, sizeof(void*)*3);
v_wantsRebuild_2072_ = lean_ctor_get_uint8(v___y_2068_, sizeof(void*)*3 + 1);
v_trace_2073_ = lean_ctor_get(v___y_2068_, 1);
v_buildTime_2074_ = lean_ctor_get(v___y_2068_, 2);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___y_2068_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2076_ = v___y_2068_;
v_isShared_2077_ = v_isSharedCheck_2103_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_buildTime_2074_);
lean_inc(v_trace_2073_);
lean_inc(v_log_2070_);
lean_dec(v___y_2068_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2103_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_apply_7(v_build_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v_log_2070_, lean_box(0));
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2090_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
v_a_2080_ = lean_ctor_get(v___x_2078_, 1);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2082_ = v___x_2078_;
v_isShared_2083_ = v_isSharedCheck_2090_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_inc(v_a_2079_);
lean_dec(v___x_2078_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2090_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v_a_2080_);
v___x_2085_ = v___x_2076_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2080_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v_trace_2073_);
lean_ctor_set(v_reuseFailAlloc_2089_, 2, v_buildTime_2074_);
lean_ctor_set_uint8(v_reuseFailAlloc_2089_, sizeof(void*)*3, v_action_2071_);
lean_ctor_set_uint8(v_reuseFailAlloc_2089_, sizeof(void*)*3 + 1, v_wantsRebuild_2072_);
v___x_2085_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2087_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v___x_2085_);
v___x_2087_ = v___x_2082_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2079_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2102_; 
v_a_2091_ = lean_ctor_get(v___x_2078_, 0);
v_a_2092_ = lean_ctor_get(v___x_2078_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2094_ = v___x_2078_;
v_isShared_2095_ = v_isSharedCheck_2102_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_inc(v_a_2091_);
lean_dec(v___x_2078_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2102_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v_a_2092_);
v___x_2097_ = v___x_2076_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2092_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_trace_2073_);
lean_ctor_set(v_reuseFailAlloc_2101_, 2, v_buildTime_2074_);
lean_ctor_set_uint8(v_reuseFailAlloc_2101_, sizeof(void*)*3, v_action_2071_);
lean_ctor_set_uint8(v_reuseFailAlloc_2101_, sizeof(void*)*3 + 1, v_wantsRebuild_2072_);
v___x_2097_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2099_; 
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 1, v___x_2097_);
v___x_2099_ = v___x_2094_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2091_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v___x_2097_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed(lean_object* v_build_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(v_build_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_);
return v_res_2112_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0(void){
_start:
{
lean_object* v___x_2113_; 
v___x_2113_ = l_Lake_OptDataKind_anonymous___redArg();
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(lean_object* v_bctx_2115_, lean_object* v_build_2116_, lean_object* v_caption_2117_){
_start:
{
lean_object* v___f_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___f_2119_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2119_, 0, v_build_2116_);
v___x_2120_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = lean_box(0);
v___x_2123_ = lean_box(1);
v___x_2124_ = lean_box(0);
v___x_2125_ = lean_st_mk_ref(v___x_2123_);
v___x_2126_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__1));
v___x_2127_ = l_Lake_Job_async___redArg(v___x_2120_, v___f_2119_, v___x_2121_, v_caption_2117_, v___x_2126_, v___x_2124_, v___x_2122_, v___x_2125_, v_bctx_2115_);
v___x_2128_ = lean_st_ref_get(v___x_2125_);
lean_dec(v___x_2125_);
lean_dec(v___x_2128_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___boxed(lean_object* v_bctx_2129_, lean_object* v_build_2130_, lean_object* v_caption_2131_, lean_object* v_a_2132_){
_start:
{
lean_object* v_res_2133_; 
v_res_2133_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2129_, v_build_2130_, v_caption_2131_);
lean_dec_ref(v_bctx_2129_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(lean_object* v_00_u03b1_2134_, lean_object* v_bctx_2135_, lean_object* v_build_2136_, lean_object* v_caption_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2135_, v_build_2136_, v_caption_2137_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___boxed(lean_object* v_00_u03b1_2140_, lean_object* v_bctx_2141_, lean_object* v_build_2142_, lean_object* v_caption_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(v_00_u03b1_2140_, v_bctx_2141_, v_build_2142_, v_caption_2143_);
lean_dec_ref(v_bctx_2141_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object* v___x_2146_, uint8_t v___x_2147_, uint8_t v___x_2148_, lean_object* v_as_2149_, size_t v_i_2150_, size_t v_stop_2151_, lean_object* v_b_2152_){
_start:
{
uint8_t v___x_2154_; 
v___x_2154_ = lean_usize_dec_eq(v_i_2150_, v_stop_2151_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; lean_object* v___x_2156_; size_t v___x_2157_; size_t v___x_2158_; 
v___x_2155_ = lean_array_uget_borrowed(v_as_2149_, v_i_2150_);
lean_inc_ref(v___x_2146_);
v___x_2156_ = l_Lake_logToStream(v___x_2155_, v___x_2146_, v___x_2147_, v___x_2148_);
v___x_2157_ = ((size_t)1ULL);
v___x_2158_ = lean_usize_add(v_i_2150_, v___x_2157_);
v_i_2150_ = v___x_2158_;
v_b_2152_ = v___x_2156_;
goto _start;
}
else
{
lean_dec_ref(v___x_2146_);
return v_b_2152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object* v___x_2160_, lean_object* v___x_2161_, lean_object* v___x_2162_, lean_object* v_as_2163_, lean_object* v_i_2164_, lean_object* v_stop_2165_, lean_object* v_b_2166_, lean_object* v___y_2167_){
_start:
{
uint8_t v___x_1096__boxed_2168_; uint8_t v___x_1097__boxed_2169_; size_t v_i_boxed_2170_; size_t v_stop_boxed_2171_; lean_object* v_res_2172_; 
v___x_1096__boxed_2168_ = lean_unbox(v___x_2161_);
v___x_1097__boxed_2169_ = lean_unbox(v___x_2162_);
v_i_boxed_2170_ = lean_unbox_usize(v_i_2164_);
lean_dec(v_i_2164_);
v_stop_boxed_2171_ = lean_unbox_usize(v_stop_2165_);
lean_dec(v_stop_2165_);
v_res_2172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2160_, v___x_1096__boxed_2168_, v___x_1097__boxed_2169_, v_as_2163_, v_i_boxed_2170_, v_stop_boxed_2171_, v_b_2166_);
lean_dec_ref(v_as_2163_);
return v_res_2172_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object* v___x_2173_, lean_object* v___x_2174_, lean_object* v_x_2175_, lean_object* v_x_2176_){
_start:
{
if (lean_obj_tag(v_x_2175_) == 0)
{
if (lean_obj_tag(v_x_2176_) == 0)
{
uint8_t v___x_2177_; 
v___x_2177_ = 1;
return v___x_2177_;
}
else
{
uint8_t v___x_2178_; 
v___x_2178_ = 0;
return v___x_2178_;
}
}
else
{
if (lean_obj_tag(v_x_2176_) == 0)
{
uint8_t v___x_2179_; 
v___x_2179_ = 0;
return v___x_2179_;
}
else
{
lean_object* v_val_2180_; uint8_t v___x_2181_; 
v_val_2180_ = lean_ctor_get(v_x_2176_, 0);
v___x_2181_ = lean_unbox(v_val_2180_);
if (v___x_2181_ == 0)
{
lean_object* v_val_2182_; uint8_t v___x_2183_; 
v_val_2182_ = lean_ctor_get(v_x_2175_, 0);
v___x_2183_ = lean_unbox(v_val_2182_);
if (v___x_2183_ == 0)
{
uint8_t v___x_2184_; 
v___x_2184_ = lean_nat_dec_lt(v___x_2173_, v___x_2174_);
return v___x_2184_;
}
else
{
uint8_t v___x_2185_; 
v___x_2185_ = lean_unbox(v_val_2180_);
return v___x_2185_;
}
}
else
{
lean_object* v_val_2186_; uint8_t v___x_2187_; 
v_val_2186_ = lean_ctor_get(v_x_2175_, 0);
v___x_2187_ = lean_unbox(v_val_2186_);
return v___x_2187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object* v___x_2188_, lean_object* v___x_2189_, lean_object* v_x_2190_, lean_object* v_x_2191_){
_start:
{
uint8_t v_res_2192_; lean_object* v_r_2193_; 
v_res_2192_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v___x_2188_, v___x_2189_, v_x_2190_, v_x_2191_);
lean_dec(v_x_2191_);
lean_dec(v_x_2190_);
lean_dec(v___x_2189_);
lean_dec(v___x_2188_);
v_r_2193_ = lean_box(v_res_2192_);
return v_r_2193_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object* v___x_2194_, uint8_t v___x_2195_, uint8_t v___x_2196_, lean_object* v_bctx_2197_, lean_object* v_out_2198_, lean_object* v_outputsFile_2199_){
_start:
{
lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2213_; uint8_t v___y_2214_; lean_object* v___y_2215_; lean_object* v_outputsRef_x3f_2227_; 
v_outputsRef_x3f_2227_ = lean_ctor_get(v_bctx_2197_, 5);
lean_inc(v_outputsRef_x3f_2227_);
if (lean_obj_tag(v_outputsRef_x3f_2227_) == 1)
{
lean_object* v_toBuildConfig_2228_; lean_object* v_toContext_2229_; lean_object* v_val_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2348_; 
v_toBuildConfig_2228_ = lean_ctor_get(v_bctx_2197_, 0);
lean_inc_ref(v_toBuildConfig_2228_);
v_toContext_2229_ = lean_ctor_get(v_bctx_2197_, 1);
lean_inc(v_toContext_2229_);
lean_dec_ref(v_bctx_2197_);
v_val_2230_ = lean_ctor_get(v_outputsRef_x3f_2227_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v_outputsRef_x3f_2227_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2232_ = v_outputsRef_x3f_2227_;
v_isShared_2233_ = v_isSharedCheck_2348_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_val_2230_);
lean_dec(v_outputsRef_x3f_2227_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2348_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v_ws_2234_; lean_object* v_lakeEnv_2235_; lean_object* v_packages_2236_; uint8_t v_verbosity_2237_; lean_object* v_outputsIdx_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; 
v_ws_2234_ = l_unsafeCast___redArg(v_toContext_2229_);
lean_dec(v_toContext_2229_);
v_lakeEnv_2235_ = lean_ctor_get(v_ws_2234_, 0);
lean_inc_ref(v_lakeEnv_2235_);
v_packages_2236_ = lean_ctor_get(v_ws_2234_, 4);
lean_inc_ref(v_packages_2236_);
lean_dec(v_ws_2234_);
v_verbosity_2237_ = lean_ctor_get_uint8(v_toBuildConfig_2228_, sizeof(void*)*5 + 4);
v_outputsIdx_2238_ = lean_ctor_get(v_toBuildConfig_2228_, 2);
lean_inc(v_outputsIdx_2238_);
lean_dec_ref(v_toBuildConfig_2228_);
v___x_2239_ = lean_array_get_size(v_packages_2236_);
v___x_2240_ = lean_nat_dec_lt(v_outputsIdx_2238_, v___x_2239_);
if (v___x_2240_ == 0)
{
lean_object* v_putStr_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
lean_dec(v_outputsIdx_2238_);
lean_dec_ref(v_packages_2236_);
lean_dec_ref(v_lakeEnv_2235_);
lean_del_object(v___x_2232_);
lean_dec(v_val_2230_);
lean_dec_ref(v_outputsFile_2199_);
lean_dec_ref(v___x_2194_);
v_putStr_2241_ = lean_ctor_get(v_out_2198_, 4);
lean_inc_ref(v_putStr_2241_);
lean_dec_ref(v_out_2198_);
v___x_2242_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0));
v___x_2243_ = lean_apply_2(v_putStr_2241_, v___x_2242_, lean_box(0));
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_dec_ref_known(v___x_2243_, 1);
goto v___jp_2223_;
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
lean_inc(v_a_2244_);
lean_dec_ref_known(v___x_2243_, 1);
v___x_2245_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2246_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2247_ = lean_unsigned_to_nat(82u);
v___x_2248_ = lean_unsigned_to_nat(4u);
v___x_2249_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_2250_ = lean_io_error_to_string(v_a_2244_);
v___x_2251_ = lean_string_append(v___x_2249_, v___x_2250_);
lean_dec_ref(v___x_2250_);
v___x_2252_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_2253_ = lean_string_append(v___x_2251_, v___x_2252_);
v___x_2254_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3);
v___x_2255_ = lean_string_append(v___x_2253_, v___x_2254_);
v___x_2256_ = l_mkPanicMessageWithDecl(v___x_2245_, v___x_2246_, v___x_2247_, v___x_2248_, v___x_2255_);
lean_dec_ref(v___x_2255_);
v___x_2257_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2256_);
goto v___jp_2223_;
}
}
else
{
lean_object* v___x_2258_; uint8_t v___y_2260_; uint8_t v___y_2324_; uint8_t v___y_2333_; lean_object* v_config_2334_; lean_object* v_enableArtifactCache_x3f_2335_; 
v___x_2258_ = lean_array_fget(v_packages_2236_, v_outputsIdx_2238_);
v_config_2334_ = lean_ctor_get(v___x_2258_, 6);
v_enableArtifactCache_x3f_2335_ = lean_ctor_get(v_config_2334_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_2335_) == 0)
{
lean_object* v_enableArtifactCache_x3f_2336_; 
v_enableArtifactCache_x3f_2336_ = lean_ctor_get(v_lakeEnv_2235_, 6);
lean_inc(v_enableArtifactCache_x3f_2336_);
lean_dec_ref(v_lakeEnv_2235_);
if (lean_obj_tag(v_enableArtifactCache_x3f_2336_) == 0)
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v_config_2339_; lean_object* v_enableArtifactCache_x3f_2340_; 
v___x_2337_ = lean_unsigned_to_nat(0u);
v___x_2338_ = lean_array_fget(v_packages_2236_, v___x_2337_);
lean_dec_ref(v_packages_2236_);
v_config_2339_ = lean_ctor_get(v___x_2338_, 6);
lean_inc_ref(v_config_2339_);
lean_dec(v___x_2338_);
v_enableArtifactCache_x3f_2340_ = lean_ctor_get(v_config_2339_, 24);
lean_inc(v_enableArtifactCache_x3f_2340_);
lean_dec_ref(v_config_2339_);
if (lean_obj_tag(v_enableArtifactCache_x3f_2340_) == 0)
{
uint8_t v___x_2341_; 
v___x_2341_ = 0;
v___y_2324_ = v___x_2341_;
goto v___jp_2323_;
}
else
{
lean_object* v_val_2342_; uint8_t v___x_2343_; 
v_val_2342_ = lean_ctor_get(v_enableArtifactCache_x3f_2340_, 0);
lean_inc(v_val_2342_);
lean_dec_ref_known(v_enableArtifactCache_x3f_2340_, 1);
v___x_2343_ = lean_unbox(v_val_2342_);
lean_dec(v_val_2342_);
v___y_2333_ = v___x_2343_;
goto v___jp_2332_;
}
}
else
{
lean_object* v_val_2344_; uint8_t v___x_2345_; 
lean_dec_ref(v_packages_2236_);
v_val_2344_ = lean_ctor_get(v_enableArtifactCache_x3f_2336_, 0);
lean_inc(v_val_2344_);
lean_dec_ref_known(v_enableArtifactCache_x3f_2336_, 1);
v___x_2345_ = lean_unbox(v_val_2344_);
lean_dec(v_val_2344_);
v___y_2333_ = v___x_2345_;
goto v___jp_2332_;
}
}
else
{
lean_object* v_val_2346_; uint8_t v___x_2347_; 
lean_dec_ref(v_packages_2236_);
lean_dec_ref(v_lakeEnv_2235_);
v_val_2346_ = lean_ctor_get(v_enableArtifactCache_x3f_2335_, 0);
v___x_2347_ = lean_unbox(v_val_2346_);
v___y_2333_ = v___x_2347_;
goto v___jp_2332_;
}
v___jp_2259_:
{
lean_object* v___x_2261_; lean_object* v_config_2262_; lean_object* v_toLeanConfig_2263_; lean_object* v_platformIndependent_2264_; lean_object* v___x_2265_; lean_object* v___x_2267_; 
v___x_2261_ = lean_st_ref_get(v_val_2230_);
lean_dec(v_val_2230_);
v_config_2262_ = lean_ctor_get(v___x_2258_, 6);
lean_inc_ref(v_config_2262_);
lean_dec(v___x_2258_);
v_toLeanConfig_2263_ = lean_ctor_get(v_config_2262_, 1);
lean_inc_ref(v_toLeanConfig_2263_);
lean_dec_ref(v_config_2262_);
v_platformIndependent_2264_ = lean_ctor_get(v_toLeanConfig_2263_, 10);
lean_inc(v_platformIndependent_2264_);
lean_dec_ref(v_toLeanConfig_2263_);
v___x_2265_ = lean_box(v___x_2240_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2265_);
v___x_2267_ = v___x_2232_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2265_);
v___x_2267_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
uint8_t v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2268_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v_outputsIdx_2238_, v___x_2239_, v_platformIndependent_2264_, v___x_2267_);
lean_dec_ref(v___x_2267_);
lean_dec(v_platformIndependent_2264_);
lean_dec(v_outputsIdx_2238_);
v___x_2269_ = lean_unsigned_to_nat(0u);
v___x_2270_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6));
v___x_2271_ = l_Lake_CacheMap_writeFile(v_outputsFile_2199_, v___x_2261_, v___x_2268_, v___x_2270_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 1);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 2);
v___x_2273_ = lean_array_get_size(v_a_2272_);
v___x_2274_ = lean_nat_dec_eq(v___x_2273_, v___x_2269_);
if (v___x_2274_ == 0)
{
if (v___y_2260_ == 0)
{
lean_dec(v_a_2272_);
lean_dec_ref(v_out_2198_);
lean_dec_ref(v___x_2194_);
goto v___jp_2201_;
}
else
{
lean_object* v_putStr_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v_putStr_2275_ = lean_ctor_get(v_out_2198_, 4);
lean_inc_ref(v_putStr_2275_);
lean_dec_ref(v_out_2198_);
v___x_2276_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7));
v___x_2277_ = lean_apply_2(v_putStr_2275_, v___x_2276_, lean_box(0));
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_dec_ref_known(v___x_2277_, 1);
v___y_2204_ = v_a_2272_;
v___y_2205_ = v___x_2269_;
goto v___jp_2203_;
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2280_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2281_ = lean_unsigned_to_nat(82u);
v___x_2282_ = lean_unsigned_to_nat(4u);
v___x_2283_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_2284_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_2285_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2284_, v___y_2260_);
v___x_2286_ = lean_string_append(v___x_2283_, v___x_2285_);
lean_dec_ref(v___x_2285_);
v___x_2287_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_2288_ = lean_string_append(v___x_2286_, v___x_2287_);
v___x_2289_ = lean_io_error_to_string(v_a_2278_);
v___x_2290_ = lean_string_append(v___x_2288_, v___x_2289_);
lean_dec_ref(v___x_2289_);
v___x_2291_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_2292_ = lean_string_append(v___x_2290_, v___x_2291_);
v___x_2293_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10);
v___x_2294_ = lean_string_append(v___x_2292_, v___x_2293_);
v___x_2295_ = l_mkPanicMessageWithDecl(v___x_2279_, v___x_2280_, v___x_2281_, v___x_2282_, v___x_2294_);
lean_dec_ref(v___x_2294_);
v___x_2296_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2295_);
v___y_2204_ = v_a_2272_;
v___y_2205_ = v___x_2269_;
goto v___jp_2203_;
}
}
}
else
{
lean_dec(v_a_2272_);
lean_dec_ref(v_out_2198_);
lean_dec_ref(v___x_2194_);
goto v___jp_2201_;
}
}
else
{
lean_object* v_a_2297_; lean_object* v_putStr_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v_a_2297_ = lean_ctor_get(v___x_2271_, 1);
lean_inc(v_a_2297_);
lean_dec_ref_known(v___x_2271_, 2);
v_putStr_2298_ = lean_ctor_get(v_out_2198_, 4);
lean_inc_ref(v_putStr_2298_);
lean_dec_ref(v_out_2198_);
v___x_2299_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11));
v___x_2300_ = lean_apply_2(v_putStr_2298_, v___x_2299_, lean_box(0));
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_dec_ref_known(v___x_2300_, 1);
v___y_2213_ = v_a_2297_;
v___y_2214_ = v___y_2260_;
v___y_2215_ = v___x_2269_;
goto v___jp_2212_;
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v___x_2302_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2303_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2304_ = lean_unsigned_to_nat(82u);
v___x_2305_ = lean_unsigned_to_nat(4u);
v___x_2306_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_2307_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_2308_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2307_, v___x_2240_);
v___x_2309_ = lean_string_append(v___x_2306_, v___x_2308_);
lean_dec_ref(v___x_2308_);
v___x_2310_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__19));
v___x_2311_ = lean_string_append(v___x_2309_, v___x_2310_);
v___x_2312_ = lean_io_error_to_string(v_a_2301_);
v___x_2313_ = lean_string_append(v___x_2311_, v___x_2312_);
lean_dec_ref(v___x_2312_);
v___x_2314_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_2315_ = lean_string_append(v___x_2313_, v___x_2314_);
v___x_2316_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14);
v___x_2317_ = lean_string_append(v___x_2315_, v___x_2316_);
v___x_2318_ = l_mkPanicMessageWithDecl(v___x_2302_, v___x_2303_, v___x_2304_, v___x_2305_, v___x_2317_);
lean_dec_ref(v___x_2317_);
v___x_2319_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2318_);
v___y_2213_ = v_a_2297_;
v___y_2214_ = v___y_2260_;
v___y_2215_ = v___x_2269_;
goto v___jp_2212_;
}
}
}
}
v___jp_2321_:
{
if (v_verbosity_2237_ == 2)
{
v___y_2260_ = v___x_2240_;
goto v___jp_2259_;
}
else
{
uint8_t v___x_2322_; 
v___x_2322_ = 0;
v___y_2260_ = v___x_2322_;
goto v___jp_2259_;
}
}
v___jp_2323_:
{
lean_object* v_baseName_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v_baseName_2325_ = lean_ctor_get(v___x_2258_, 1);
lean_inc(v_baseName_2325_);
v___x_2326_ = l_Lean_Name_toString(v_baseName_2325_, v___y_2324_);
v___x_2327_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15));
v___x_2328_ = lean_string_append(v___x_2326_, v___x_2327_);
v___x_2329_ = 2;
v___x_2330_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set_uint8(v___x_2330_, sizeof(void*)*1, v___x_2329_);
lean_inc_ref(v___x_2194_);
v___x_2331_ = l_Lake_logToStream(v___x_2330_, v___x_2194_, v___x_2195_, v___x_2196_);
lean_dec_ref_known(v___x_2330_, 1);
goto v___jp_2321_;
}
v___jp_2332_:
{
if (v___y_2333_ == 0)
{
v___y_2324_ = v___y_2333_;
goto v___jp_2323_;
}
else
{
goto v___jp_2321_;
}
}
}
}
}
else
{
lean_object* v_putStr_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
lean_dec(v_outputsRef_x3f_2227_);
lean_dec_ref(v_outputsFile_2199_);
lean_dec_ref(v_bctx_2197_);
lean_dec_ref(v___x_2194_);
v_putStr_2349_ = lean_ctor_get(v_out_2198_, 4);
lean_inc_ref(v_putStr_2349_);
lean_dec_ref(v_out_2198_);
v___x_2350_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16));
v___x_2351_ = lean_apply_2(v_putStr_2349_, v___x_2350_, lean_box(0));
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_dec_ref_known(v___x_2351_, 1);
goto v___jp_2225_;
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2353_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2354_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2355_ = lean_unsigned_to_nat(82u);
v___x_2356_ = lean_unsigned_to_nat(4u);
v___x_2357_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__20);
v___x_2358_ = lean_io_error_to_string(v_a_2352_);
v___x_2359_ = lean_string_append(v___x_2357_, v___x_2358_);
lean_dec_ref(v___x_2358_);
v___x_2360_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__21));
v___x_2361_ = lean_string_append(v___x_2359_, v___x_2360_);
v___x_2362_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19);
v___x_2363_ = lean_string_append(v___x_2361_, v___x_2362_);
v___x_2364_ = l_mkPanicMessageWithDecl(v___x_2353_, v___x_2354_, v___x_2355_, v___x_2356_, v___x_2363_);
lean_dec_ref(v___x_2363_);
v___x_2365_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2364_);
goto v___jp_2225_;
}
}
v___jp_2201_:
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_box(0);
return v___x_2202_;
}
v___jp_2203_:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2206_ = lean_array_get_size(v___y_2204_);
v___x_2207_ = lean_box(0);
v___x_2208_ = lean_nat_dec_lt(v___y_2205_, v___x_2206_);
if (v___x_2208_ == 0)
{
lean_dec_ref(v___y_2204_);
lean_dec_ref(v___x_2194_);
return v___x_2207_;
}
else
{
size_t v___x_2209_; size_t v___x_2210_; lean_object* v___x_2211_; 
v___x_2209_ = ((size_t)0ULL);
v___x_2210_ = lean_usize_of_nat(v___x_2206_);
v___x_2211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2194_, v___x_2195_, v___x_2196_, v___y_2204_, v___x_2209_, v___x_2210_, v___x_2207_);
lean_dec_ref(v___y_2204_);
return v___x_2211_;
}
}
v___jp_2212_:
{
if (v___y_2214_ == 0)
{
lean_object* v___x_2216_; 
lean_dec_ref(v___y_2213_);
lean_dec_ref(v___x_2194_);
v___x_2216_ = lean_box(0);
return v___x_2216_;
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; 
v___x_2217_ = lean_array_get_size(v___y_2213_);
v___x_2218_ = lean_box(0);
v___x_2219_ = lean_nat_dec_lt(v___y_2215_, v___x_2217_);
if (v___x_2219_ == 0)
{
lean_dec_ref(v___y_2213_);
lean_dec_ref(v___x_2194_);
return v___x_2218_;
}
else
{
size_t v___x_2220_; size_t v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = ((size_t)0ULL);
v___x_2221_ = lean_usize_of_nat(v___x_2217_);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2194_, v___x_2195_, v___x_2196_, v___y_2213_, v___x_2220_, v___x_2221_, v___x_2218_);
lean_dec_ref(v___y_2213_);
return v___x_2222_;
}
}
}
v___jp_2223_:
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_box(0);
return v___x_2224_;
}
v___jp_2225_:
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_box(0);
return v___x_2226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object* v___x_2366_, lean_object* v___x_2367_, lean_object* v___x_2368_, lean_object* v_bctx_2369_, lean_object* v_out_2370_, lean_object* v_outputsFile_2371_, lean_object* v_a_2372_){
_start:
{
uint8_t v___x_1348__boxed_2373_; uint8_t v___x_1349__boxed_2374_; lean_object* v_res_2375_; 
v___x_1348__boxed_2373_ = lean_unbox(v___x_2367_);
v___x_1349__boxed_2374_ = lean_unbox(v___x_2368_);
v_res_2375_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v___x_2366_, v___x_1348__boxed_2373_, v___x_1349__boxed_2374_, v_bctx_2369_, v_out_2370_, v_outputsFile_2371_);
return v_res_2375_;
}
}
static uint8_t _init_l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0(void){
_start:
{
uint32_t v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = 3;
v___x_2377_ = lean_uint32_to_uint8(v___x_2376_);
return v___x_2377_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(lean_object* v_cfg_2378_, lean_object* v_bctx_2379_, lean_object* v_mctx_2380_, lean_object* v_result_2381_){
_start:
{
lean_object* v___y_2384_; lean_object* v_out_2387_; uint8_t v_outLv_2388_; uint8_t v_useAnsi_2389_; lean_object* v_toMonitorResult_2390_; lean_object* v_out_2391_; lean_object* v___x_2407_; lean_object* v_outputsFile_x3f_2408_; 
v_out_2387_ = lean_ctor_get(v_mctx_2380_, 1);
lean_inc_ref_n(v_out_2387_, 2);
v_outLv_2388_ = lean_ctor_get_uint8(v_mctx_2380_, sizeof(void*)*4);
v_useAnsi_2389_ = lean_ctor_get_uint8(v_mctx_2380_, sizeof(void*)*4 + 4);
lean_dec_ref(v_mctx_2380_);
v_toMonitorResult_2390_ = lean_ctor_get(v_result_2381_, 0);
lean_inc_ref_n(v_toMonitorResult_2390_, 2);
v_out_2391_ = lean_ctor_get(v_result_2381_, 1);
lean_inc_ref(v_out_2391_);
lean_dec_ref(v_result_2381_);
v___x_2407_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_2378_, v_out_2387_, v_toMonitorResult_2390_);
v_outputsFile_x3f_2408_ = lean_ctor_get(v_cfg_2378_, 1);
if (lean_obj_tag(v_outputsFile_x3f_2408_) == 1)
{
lean_object* v_val_2409_; lean_object* v___x_2410_; 
v_val_2409_ = lean_ctor_get(v_outputsFile_x3f_2408_, 0);
lean_inc(v_val_2409_);
lean_inc_ref(v_out_2387_);
v___x_2410_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v_out_2387_, v_outLv_2388_, v_useAnsi_2389_, v_bctx_2379_, v_out_2387_, v_val_2409_);
goto v___jp_2392_;
}
else
{
lean_dec_ref(v_out_2387_);
lean_dec_ref(v_bctx_2379_);
goto v___jp_2392_;
}
v___jp_2383_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = lean_mk_io_user_error(v___y_2384_);
v___x_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
v___jp_2392_:
{
if (lean_obj_tag(v_out_2391_) == 0)
{
uint8_t v_noBuild_2393_; 
v_noBuild_2393_ = lean_ctor_get_uint8(v_cfg_2378_, sizeof(void*)*5 + 2);
lean_dec_ref(v_cfg_2378_);
if (v_noBuild_2393_ == 0)
{
lean_object* v_a_2394_; 
lean_dec_ref(v_toMonitorResult_2390_);
v_a_2394_ = lean_ctor_get(v_out_2391_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v_out_2391_, 1);
v___y_2384_ = v_a_2394_;
goto v___jp_2383_;
}
else
{
uint8_t v_wantsRebuild_2395_; 
v_wantsRebuild_2395_ = lean_ctor_get_uint8(v_toMonitorResult_2390_, sizeof(void*)*2);
lean_dec_ref(v_toMonitorResult_2390_);
if (v_wantsRebuild_2395_ == 0)
{
lean_object* v_a_2396_; 
v_a_2396_ = lean_ctor_get(v_out_2391_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v_out_2391_, 1);
v___y_2384_ = v_a_2396_;
goto v___jp_2383_;
}
else
{
uint8_t v___x_2397_; lean_object* v___x_2398_; 
lean_dec_ref_known(v_out_2391_, 1);
v___x_2397_ = lean_uint8_once(&l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0);
v___x_2398_ = lean_io_exit(v___x_2397_);
return v___x_2398_;
}
}
}
else
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
lean_dec_ref(v_toMonitorResult_2390_);
lean_dec_ref(v_cfg_2378_);
v_a_2399_ = lean_ctor_get(v_out_2391_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_out_2391_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v_out_2391_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v_out_2391_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
lean_ctor_set_tag(v___x_2401_, 0);
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___boxed(lean_object* v_cfg_2411_, lean_object* v_bctx_2412_, lean_object* v_mctx_2413_, lean_object* v_result_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2411_, v_bctx_2412_, v_mctx_2413_, v_result_2414_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild(lean_object* v_00_u03b1_2417_, lean_object* v_cfg_2418_, lean_object* v_bctx_2419_, lean_object* v_mctx_2420_, lean_object* v_result_2421_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2418_, v_bctx_2419_, v_mctx_2420_, v_result_2421_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___boxed(lean_object* v_00_u03b1_2424_, lean_object* v_cfg_2425_, lean_object* v_bctx_2426_, lean_object* v_mctx_2427_, lean_object* v_result_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild(v_00_u03b1_2424_, v_cfg_2425_, v_bctx_2426_, v_mctx_2427_, v_result_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg(lean_object* v_ws_2431_, lean_object* v_build_2432_, lean_object* v_cfg_2433_, lean_object* v_caption_2434_){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v_cancelTk_x3f_2439_; uint8_t v_failFast_2445_; 
v___x_2436_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2437_ = lean_st_mk_ref(v___x_2436_);
v_failFast_2445_ = lean_ctor_get_uint8(v_cfg_2433_, sizeof(void*)*5 + 3);
if (v_failFast_2445_ == 0)
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_box(0);
v_cancelTk_x3f_2439_ = v___x_2446_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = l_IO_CancelToken_new();
v___x_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
v_cancelTk_x3f_2439_ = v___x_2448_;
goto v___jp_2438_;
}
v___jp_2438_:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
lean_inc(v_cancelTk_x3f_2439_);
lean_inc(v___x_2437_);
v___x_2440_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2433_, v___x_2437_, v_cancelTk_x3f_2439_);
lean_inc_ref(v_cfg_2433_);
v___x_2441_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2431_, v_cfg_2433_, v___x_2437_, v_cancelTk_x3f_2439_);
v___x_2442_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2441_, v_build_2432_, v_caption_2434_);
v___x_2443_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v___x_2440_, v___x_2442_);
v___x_2444_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2433_, v___x_2441_, v___x_2440_, v___x_2443_);
return v___x_2444_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg___boxed(lean_object* v_ws_2449_, lean_object* v_build_2450_, lean_object* v_cfg_2451_, lean_object* v_caption_2452_, lean_object* v_a_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2449_, v_build_2450_, v_cfg_2451_, v_caption_2452_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM(lean_object* v_00_u03b1_2455_, lean_object* v_ws_2456_, lean_object* v_build_2457_, lean_object* v_cfg_2458_, lean_object* v_caption_2459_){
_start:
{
lean_object* v___x_2461_; 
v___x_2461_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2456_, v_build_2457_, v_cfg_2458_, v_caption_2459_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___boxed(lean_object* v_00_u03b1_2462_, lean_object* v_ws_2463_, lean_object* v_build_2464_, lean_object* v_cfg_2465_, lean_object* v_caption_2466_, lean_object* v_a_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l_Lake_Workspace_runFetchM(v_00_u03b1_2462_, v_ws_2463_, v_build_2464_, v_cfg_2465_, v_caption_2466_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(lean_object* v_mctx_2472_, lean_object* v_job_2473_){
_start:
{
lean_object* v___x_2475_; lean_object* v_out_2476_; 
v___x_2475_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_mctx_2472_, v_job_2473_);
v_out_2476_ = lean_ctor_get(v___x_2475_, 1);
lean_inc_ref(v_out_2476_);
if (lean_obj_tag(v_out_2476_) == 0)
{
lean_object* v_toMonitorResult_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2492_; 
v_toMonitorResult_2477_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2475_, 1);
lean_dec(v_unused_2493_);
v___x_2479_ = v___x_2475_;
v_isShared_2480_ = v_isSharedCheck_2492_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_toMonitorResult_2477_);
lean_dec(v___x_2475_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2492_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2491_; 
v_a_2481_ = lean_ctor_get(v_out_2476_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_out_2476_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2483_ = v_out_2476_;
v_isShared_2484_ = v_isSharedCheck_2491_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v_out_2476_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2491_;
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
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2488_; 
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 1, v___x_2486_);
v___x_2488_ = v___x_2479_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_toMonitorResult_2477_);
lean_ctor_set(v_reuseFailAlloc_2489_, 1, v___x_2486_);
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
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2517_; 
v_a_2494_ = lean_ctor_get(v_out_2476_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v_out_2476_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2496_ = v_out_2476_;
v_isShared_2497_ = v_isSharedCheck_2517_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v_out_2476_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2517_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v_toMonitorResult_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2515_; 
v_toMonitorResult_2498_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2515_ == 0)
{
lean_object* v_unused_2516_; 
v_unused_2516_ = lean_ctor_get(v___x_2475_, 1);
lean_dec(v_unused_2516_);
v___x_2500_ = v___x_2475_;
v_isShared_2501_ = v_isSharedCheck_2515_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_toMonitorResult_2498_);
lean_dec(v___x_2475_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2515_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v_task_2502_; lean_object* v___x_2503_; 
v_task_2502_ = lean_ctor_get(v_a_2494_, 0);
lean_inc_ref(v_task_2502_);
lean_dec(v_a_2494_);
v___x_2503_ = lean_io_wait(v_task_2502_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2506_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___x_2503_, 2);
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 0, v_a_2504_);
v___x_2506_ = v___x_2496_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_a_2504_);
v___x_2506_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
lean_object* v___x_2508_; 
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 1, v___x_2506_);
v___x_2508_ = v___x_2500_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_toMonitorResult_2498_);
lean_ctor_set(v_reuseFailAlloc_2509_, 1, v___x_2506_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
else
{
lean_object* v___x_2511_; lean_object* v___x_2513_; 
lean_dec_ref_known(v___x_2503_, 2);
lean_del_object(v___x_2496_);
v___x_2511_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1));
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 1, v___x_2511_);
v___x_2513_ = v___x_2500_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_toMonitorResult_2498_);
lean_ctor_set(v_reuseFailAlloc_2514_, 1, v___x_2511_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___boxed(lean_object* v_mctx_2518_, lean_object* v_job_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2518_, v_job_2519_);
lean_dec_ref(v_mctx_2518_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild(lean_object* v_00_u03b1_2522_, lean_object* v_mctx_2523_, lean_object* v_job_2524_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2523_, v_job_2524_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___boxed(lean_object* v_00_u03b1_2527_, lean_object* v_mctx_2528_, lean_object* v_job_2529_, lean_object* v_a_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l___private_Lake_Build_Run_0__Lake_monitorBuild(v_00_u03b1_2527_, v_mctx_2528_, v_job_2529_);
lean_dec_ref(v_mctx_2528_);
return v_res_2531_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild___redArg(lean_object* v_ws_2546_, lean_object* v_build_2547_){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; uint8_t v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v_out_2560_; 
v___x_2549_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2550_ = lean_st_mk_ref(v___x_2549_);
v___x_2551_ = 0;
v___x_2552_ = 1;
v___x_2553_ = lean_box(0);
v___x_2554_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__1));
lean_inc(v___x_2550_);
v___x_2555_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v___x_2554_, v___x_2550_, v___x_2553_);
v___x_2556_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2546_, v___x_2554_, v___x_2550_, v___x_2553_);
v___x_2557_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2558_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2556_, v_build_2547_, v___x_2557_);
lean_dec_ref(v___x_2556_);
v___x_2559_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2555_, v___x_2558_);
lean_dec_ref(v___x_2555_);
v_out_2560_ = lean_ctor_get(v___x_2559_, 1);
lean_inc_ref(v_out_2560_);
lean_dec_ref(v___x_2559_);
if (lean_obj_tag(v_out_2560_) == 0)
{
lean_dec_ref_known(v_out_2560_, 1);
return v___x_2551_;
}
else
{
lean_dec_ref_known(v_out_2560_, 1);
return v___x_2552_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___redArg___boxed(lean_object* v_ws_2561_, lean_object* v_build_2562_, lean_object* v_a_2563_){
_start:
{
uint8_t v_res_2564_; lean_object* v_r_2565_; 
v_res_2564_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2561_, v_build_2562_);
v_r_2565_ = lean_box(v_res_2564_);
return v_r_2565_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild(lean_object* v_00_u03b1_2566_, lean_object* v_ws_2567_, lean_object* v_build_2568_){
_start:
{
uint8_t v___x_2570_; 
v___x_2570_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2567_, v_build_2568_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___boxed(lean_object* v_00_u03b1_2571_, lean_object* v_ws_2572_, lean_object* v_build_2573_, lean_object* v_a_2574_){
_start:
{
uint8_t v_res_2575_; lean_object* v_r_2576_; 
v_res_2575_ = l_Lake_Workspace_checkNoBuild(v_00_u03b1_2571_, v_ws_2572_, v_build_2573_);
v_r_2576_ = lean_box(v_res_2575_);
return v_r_2576_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg(lean_object* v_ws_2577_, lean_object* v_build_2578_, lean_object* v_cfg_2579_){
_start:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v_cancelTk_x3f_2584_; uint8_t v_failFast_2591_; 
v___x_2581_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2582_ = lean_st_mk_ref(v___x_2581_);
v_failFast_2591_ = lean_ctor_get_uint8(v_cfg_2579_, sizeof(void*)*5 + 3);
if (v_failFast_2591_ == 0)
{
lean_object* v___x_2592_; 
v___x_2592_ = lean_box(0);
v_cancelTk_x3f_2584_ = v___x_2592_;
goto v___jp_2583_;
}
else
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = l_IO_CancelToken_new();
v___x_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
v_cancelTk_x3f_2584_ = v___x_2594_;
goto v___jp_2583_;
}
v___jp_2583_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
lean_inc(v_cancelTk_x3f_2584_);
lean_inc(v___x_2582_);
v___x_2585_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2579_, v___x_2582_, v_cancelTk_x3f_2584_);
lean_inc_ref(v_cfg_2579_);
v___x_2586_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2577_, v_cfg_2579_, v___x_2582_, v_cancelTk_x3f_2584_);
v___x_2587_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2588_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2586_, v_build_2578_, v___x_2587_);
v___x_2589_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2585_, v___x_2588_);
v___x_2590_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2579_, v___x_2586_, v___x_2585_, v___x_2589_);
return v___x_2590_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg___boxed(lean_object* v_ws_2595_, lean_object* v_build_2596_, lean_object* v_cfg_2597_, lean_object* v_a_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lake_Workspace_runBuild___redArg(v_ws_2595_, v_build_2596_, v_cfg_2597_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild(lean_object* v_00_u03b1_2600_, lean_object* v_ws_2601_, lean_object* v_build_2602_, lean_object* v_cfg_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Lake_Workspace_runBuild___redArg(v_ws_2601_, v_build_2602_, v_cfg_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___boxed(lean_object* v_00_u03b1_2606_, lean_object* v_ws_2607_, lean_object* v_build_2608_, lean_object* v_cfg_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l_Lake_Workspace_runBuild(v_00_u03b1_2606_, v_ws_2607_, v_build_2608_, v_cfg_2609_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg(lean_object* v_build_2612_, lean_object* v_cfg_2613_, lean_object* v_a_2614_){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2616_ = l_unsafeCast___redArg(v_a_2614_);
v___x_2617_ = l_Lake_Workspace_runBuild___redArg(v___x_2616_, v_build_2612_, v_cfg_2613_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg___boxed(lean_object* v_build_2618_, lean_object* v_cfg_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lake_runBuild___redArg(v_build_2618_, v_cfg_2619_, v_a_2620_);
lean_dec(v_a_2620_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild(lean_object* v_00_u03b1_2623_, lean_object* v_build_2624_, lean_object* v_cfg_2625_, lean_object* v_a_2626_){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2628_ = l_unsafeCast___redArg(v_a_2626_);
v___x_2629_ = l_Lake_Workspace_runBuild___redArg(v___x_2628_, v_build_2624_, v_cfg_2625_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___boxed(lean_object* v_00_u03b1_2630_, lean_object* v_build_2631_, lean_object* v_cfg_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lake_runBuild(v_00_u03b1_2630_, v_build_2631_, v_cfg_2632_, v_a_2633_);
lean_dec(v_a_2633_);
return v_res_2635_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Index(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Run(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames);
l_Lake_noBuildCode = _init_l_Lake_noBuildCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Run(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Index(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Run(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Run(builtin);
}
#ifdef __cplusplus
}
#endif

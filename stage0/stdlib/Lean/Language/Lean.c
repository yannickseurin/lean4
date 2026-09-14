// Lean compiler output
// Module: Lean.Language.Lean
// Imports: public import Lean.Language.Util public import Lean.Language.Lean.Types public import Lean.Elab.Import
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_IO_CancelToken_new();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(lean_object*);
uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(lean_object*);
lean_object* l_Lean_Elab_InfoState_substituteLazy(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Language_SnapshotTree_trace(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_waitAll(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
extern lean_object* l_Lean_internal_cmdlineSnapshots;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
extern lean_object* l_Lean_Language_Snapshot_Diagnostics_empty;
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
extern lean_object* l_Lean_Core_stderrAsMessages;
extern lean_object* l_ByteArray_empty;
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* lean_get_set_stdout(lean_object*);
lean_object* lean_get_set_stdin(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_get_set_stderr(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_DeclNameGenerator_ofPrefix(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedDynamicSnapshot;
lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTree_default;
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_Parser_instInhabitedModuleParserState_default;
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_profileit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Language_diagnosticsOfHeaderError(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotLeaf;
extern lean_object* l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object*);
lean_object* l_Lean_Elab_processHeaderCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Name_getRoot(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
lean_object* l_Lean_List_toPArray_x27___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
extern lean_object* l_Lean_trace_profiler_serve;
extern lean_object* l_Lean_instInhabitedTraceState_default;
lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(lean_object*);
lean_object* l_String_firstDiffPos(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0 = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0 = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Language"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "withHeaderExceptions"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_Lean_setOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__0 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__0_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__1 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__1_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid -D parameter, invalid configuration option '"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__2 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__2_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "' value, it must be true/false"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__3 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__3_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' value, it must be a natural number"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__4 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__4_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "invalid -D parameter, configuration option '"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__5 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__5_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "' cannot be set in the command line, use set_option command"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__6 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weak"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 5, 49, 232, 223, 147, 119, 138)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid -D parameter, unknown configuration option '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "'\n\nIf the option is defined in a library, use '-D"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' to set it conditionally"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "experimental"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(201, 138, 38, 81, 136, 39, 83, 32)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(93, 242, 21, 84, 145, 94, 84, 207)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "no-op, deprecated"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 222, 85, 59, 197, 113, 89, 237)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(24, 94, 31, 95, 17, 215, 109, 107)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 160, 244, 111, 154, 6, 107, 146)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_experimental_module;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3_value;
static lean_once_cell_t l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4;
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "process"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElab"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 108, 214, 181, 226, 69, 54, 12)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0_value;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1_value;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snapshotTree"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 136, 72, 78, 187, 126, 217, 153)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parseCmd"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parsing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 201, 190, 222, 246, 15, 232, 234)}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1_value;
static const lean_array_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_import"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 157, 171, 65, 170, 18, 92, 252)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(12, 104, 192, 143, 94, 68, 237, 67)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "processHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Import"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(36, 108, 229, 135, 237, 231, 134, 26)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "importing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parseHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object*);
static const lean_string_object l_Lean_Language_Lean_truncateToHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "truncateToHeader"};
static const lean_object* l_Lean_Language_Lean_truncateToHeader___closed__0 = (const lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__0_value;
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 222, 85, 59, 197, 113, 89, 237)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_2),((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 193, 8, 11, 35, 111, 210, 68)}};
static const lean_object* l_Lean_Language_Lean_truncateToHeader___closed__1 = (const lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__2;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__3;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__4;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object* v_00_u03b1_1_, lean_object* v_act_2_, lean_object* v_ctx_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_apply_2(v_act_2_, v_ctx_3_, lean_box(0));
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object* v_00_u03b1_7_, lean_object* v_act_8_, lean_object* v_ctx_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(v_00_u03b1_7_, v_act_8_, v_ctx_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object* v_00_u03b1_14_, lean_object* v_act_15_, lean_object* v_ctx_16_){
_start:
{
lean_object* v_toProcessingContext_17_; lean_object* v___x_18_; 
v_toProcessingContext_17_ = lean_ctor_get(v_ctx_16_, 0);
lean_inc_ref(v_toProcessingContext_17_);
lean_dec_ref(v_ctx_16_);
v___x_18_ = lean_apply_1(v_act_15_, v_toProcessingContext_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg(){
_start:
{
lean_object* v___f_21_; 
v___f_21_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object* v___dummy_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object* v_m_24_){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object* v_act_26_, lean_object* v_oldInputCtx_x3f_27_, lean_object* v_a_28_){
_start:
{
lean_object* v___y_31_; 
if (lean_obj_tag(v_oldInputCtx_x3f_27_) == 0)
{
lean_object* v___x_34_; 
v___x_34_ = lean_box(0);
v___y_31_ = v___x_34_;
goto v___jp_30_;
}
else
{
lean_object* v_val_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_45_; 
v_val_35_ = lean_ctor_get(v_oldInputCtx_x3f_27_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v_oldInputCtx_x3f_27_);
if (v_isSharedCheck_45_ == 0)
{
v___x_37_ = v_oldInputCtx_x3f_27_;
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_val_35_);
lean_dec(v_oldInputCtx_x3f_27_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v_inputString_39_; lean_object* v_inputString_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v_inputString_39_ = lean_ctor_get(v_val_35_, 0);
lean_inc_ref(v_inputString_39_);
lean_dec(v_val_35_);
v_inputString_40_ = lean_ctor_get(v_a_28_, 0);
v___x_41_ = l_String_firstDiffPos(v_inputString_39_, v_inputString_40_);
lean_dec_ref(v_inputString_39_);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v___x_41_);
v___x_43_ = v___x_37_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
v___y_31_ = v___x_43_;
goto v___jp_30_;
}
}
}
v___jp_30_:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_inc_ref(v_a_28_);
v___x_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_32_, 0, v_a_28_);
lean_ctor_set(v___x_32_, 1, v___y_31_);
v___x_33_ = lean_apply_2(v_act_26_, v___x_32_, lean_box(0));
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object* v_act_46_, lean_object* v_oldInputCtx_x3f_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_46_, v_oldInputCtx_x3f_47_, v_a_48_);
lean_dec_ref(v_a_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object* v_00_u03b1_51_, lean_object* v_act_52_, lean_object* v_oldInputCtx_x3f_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_52_, v_oldInputCtx_x3f_53_, v_a_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object* v_00_u03b1_57_, lean_object* v_act_58_, lean_object* v_oldInputCtx_x3f_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Language_Lean_LeanProcessingM_run(v_00_u03b1_57_, v_act_58_, v_oldInputCtx_x3f_59_, v_a_60_);
lean_dec_ref(v_a_60_);
return v_res_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object* v_pos_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_firstDiffPos_x3f_66_; 
v_firstDiffPos_x3f_66_ = lean_ctor_get(v_a_64_, 1);
if (lean_obj_tag(v_firstDiffPos_x3f_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v_val_68_ = lean_ctor_get(v_firstDiffPos_x3f_66_, 0);
v___x_69_ = lean_unsigned_to_nat(1u);
v___x_70_ = lean_nat_add(v_pos_63_, v___x_69_);
v___x_71_ = lean_nat_dec_le(v___x_70_, v_val_68_);
lean_dec(v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object* v_pos_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_72_, v_a_73_);
lean_dec_ref(v_a_73_);
lean_dec(v_pos_72_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_box(0);
v___x_78_ = l_unsafeCast___redArg(v___x_77_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1));
v___x_81_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0);
v___x_82_ = l_Lean_Name_str___override(v___x_81_, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_85_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2);
v___x_86_ = l_Lean_Name_str___override(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_89_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4);
v___x_90_ = l_Lean_Name_str___override(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_92_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6);
v___x_93_ = l_Lean_Name_str___override(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7);
v___x_96_ = l_Lean_Name_num___override(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_98_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8);
v___x_99_ = l_Lean_Name_str___override(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_101_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9);
v___x_102_ = l_Lean_Name_str___override(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_104_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10);
v___x_105_ = l_Lean_Name_str___override(v___x_104_, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12));
v___x_108_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11);
v___x_109_ = l_Lean_Name_str___override(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14(void){
_start:
{
uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = 1;
v___x_111_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13);
v___x_112_ = l_Lean_Name_toString(v___x_111_, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_unsigned_to_nat(32u);
v___x_114_ = lean_mk_empty_array_with_capacity(v___x_113_);
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16(void){
_start:
{
size_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_116_ = ((size_t)5ULL);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_unsigned_to_nat(32u);
v___x_119_ = lean_mk_empty_array_with_capacity(v___x_118_);
v___x_120_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15);
v___x_121_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_117_);
lean_ctor_set(v___x_121_, 3, v___x_117_);
lean_ctor_set_usize(v___x_121_, 4, v___x_116_);
return v___x_121_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17(void){
_start:
{
lean_object* v___x_122_; uint64_t v___x_123_; lean_object* v___x_124_; 
v___x_122_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_123_ = 0ULL;
v___x_124_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set_uint64(v___x_124_, sizeof(void*)*1, v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object* v_ex_125_, lean_object* v_act_126_, lean_object* v_a_127_){
_start:
{
lean_object* v___x_129_; 
lean_inc_ref(v_a_127_);
v___x_129_ = lean_apply_2(v_act_126_, v_a_127_, lean_box(0));
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v_a_130_; 
lean_dec(v_ex_125_);
v_a_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_130_);
lean_dec_ref_known(v___x_129_, 1);
return v_a_130_;
}
else
{
lean_object* v_a_131_; lean_object* v_toProcessingContext_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_a_131_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_131_);
lean_dec_ref_known(v___x_129_, 1);
v_toProcessingContext_132_ = lean_ctor_get(v_a_127_, 0);
v___x_133_ = lean_io_error_to_string(v_a_131_);
v___x_134_ = l_Lean_Language_diagnosticsOfHeaderError(v___x_133_, v_toProcessingContext_132_);
v___x_135_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_136_ = lean_box(0);
v___x_137_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_138_ = 0;
v___x_139_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_139_, 0, v___x_135_);
lean_ctor_set(v___x_139_, 1, v___x_134_);
lean_ctor_set(v___x_139_, 2, v___x_136_);
lean_ctor_set(v___x_139_, 3, v___x_137_);
lean_ctor_set_uint8(v___x_139_, sizeof(void*)*4, v___x_138_);
v___x_140_ = lean_apply_1(v_ex_125_, v___x_139_);
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object* v_ex_141_, lean_object* v_act_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_141_, v_act_142_, v_a_143_);
lean_dec_ref(v_a_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object* v_00_u03b1_146_, lean_object* v_ex_147_, lean_object* v_act_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_147_, v_act_148_, v_a_149_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object* v_00_u03b1_152_, lean_object* v_ex_153_, lean_object* v_act_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(v_00_u03b1_152_, v_ex_153_, v_act_154_, v_a_155_);
lean_dec_ref(v_a_155_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object* v_o_161_, lean_object* v_k_162_, uint8_t v_v_163_){
_start:
{
lean_object* v_map_164_; uint8_t v_hasTrace_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_179_; 
v_map_164_ = lean_ctor_get(v_o_161_, 0);
v_hasTrace_165_ = lean_ctor_get_uint8(v_o_161_, sizeof(void*)*1);
v_isSharedCheck_179_ = !lean_is_exclusive(v_o_161_);
if (v_isSharedCheck_179_ == 0)
{
v___x_167_ = v_o_161_;
v_isShared_168_ = v_isSharedCheck_179_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_map_164_);
lean_dec(v_o_161_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_179_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_169_, 0, v_v_163_);
lean_inc(v_k_162_);
v___x_170_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_162_, v___x_169_, v_map_164_);
if (v_hasTrace_165_ == 0)
{
lean_object* v___x_171_; uint8_t v___x_172_; lean_object* v___x_174_; 
v___x_171_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_172_ = l_Lean_Name_isPrefixOf(v___x_171_, v_k_162_);
lean_dec(v_k_162_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_170_);
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_170_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_ctor_set_uint8(v___x_174_, sizeof(void*)*1, v___x_172_);
return v___x_174_;
}
}
else
{
lean_object* v___x_177_; 
lean_dec(v_k_162_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_170_);
v___x_177_ = v___x_167_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_170_);
lean_ctor_set_uint8(v_reuseFailAlloc_178_, sizeof(void*)*1, v_hasTrace_165_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object* v_o_180_, lean_object* v_k_181_, lean_object* v_v_182_){
_start:
{
uint8_t v_v_boxed_183_; lean_object* v_res_184_; 
v_v_boxed_183_ = lean_unbox(v_v_182_);
v_res_184_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_o_180_, v_k_181_, v_v_boxed_183_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object* v_o_185_, lean_object* v_k_186_, lean_object* v_v_187_){
_start:
{
lean_object* v_map_188_; uint8_t v_hasTrace_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_203_; 
v_map_188_ = lean_ctor_get(v_o_185_, 0);
v_hasTrace_189_ = lean_ctor_get_uint8(v_o_185_, sizeof(void*)*1);
v_isSharedCheck_203_ = !lean_is_exclusive(v_o_185_);
if (v_isSharedCheck_203_ == 0)
{
v___x_191_ = v_o_185_;
v_isShared_192_ = v_isSharedCheck_203_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_map_188_);
lean_dec(v_o_185_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_203_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_193_, 0, v_v_187_);
lean_inc(v_k_186_);
v___x_194_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_186_, v___x_193_, v_map_188_);
if (v_hasTrace_189_ == 0)
{
lean_object* v___x_195_; uint8_t v___x_196_; lean_object* v___x_198_; 
v___x_195_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_196_ = l_Lean_Name_isPrefixOf(v___x_195_, v_k_186_);
lean_dec(v_k_186_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_194_);
v___x_198_ = v___x_191_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_194_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_ctor_set_uint8(v___x_198_, sizeof(void*)*1, v___x_196_);
return v___x_198_;
}
}
else
{
lean_object* v___x_201_; 
lean_dec(v_k_186_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_194_);
v___x_201_ = v___x_191_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_194_);
lean_ctor_set_uint8(v_reuseFailAlloc_202_, sizeof(void*)*1, v_hasTrace_189_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object* v_o_204_, lean_object* v_k_205_, lean_object* v_v_206_){
_start:
{
lean_object* v_map_207_; uint8_t v_hasTrace_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_222_; 
v_map_207_ = lean_ctor_get(v_o_204_, 0);
v_hasTrace_208_ = lean_ctor_get_uint8(v_o_204_, sizeof(void*)*1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_o_204_);
if (v_isSharedCheck_222_ == 0)
{
v___x_210_ = v_o_204_;
v_isShared_211_ = v_isSharedCheck_222_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_map_207_);
lean_dec(v_o_204_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_222_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v_v_206_);
lean_inc(v_k_205_);
v___x_213_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_205_, v___x_212_, v_map_207_);
if (v_hasTrace_208_ == 0)
{
lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_217_; 
v___x_214_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_215_ = l_Lean_Name_isPrefixOf(v___x_214_, v_k_205_);
lean_dec(v_k_205_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_213_);
v___x_217_ = v___x_210_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_213_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1, v___x_215_);
return v___x_217_;
}
}
else
{
lean_object* v___x_220_; 
lean_dec(v_k_205_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_213_);
v___x_220_ = v___x_210_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_213_);
lean_ctor_set_uint8(v_reuseFailAlloc_221_, sizeof(void*)*1, v_hasTrace_208_);
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
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object* v_opts_230_, lean_object* v_decl_231_, lean_object* v_name_232_, lean_object* v_val_233_){
_start:
{
lean_object* v_defValue_235_; 
v_defValue_235_ = lean_ctor_get(v_decl_231_, 2);
lean_inc_ref(v_defValue_235_);
lean_dec_ref(v_decl_231_);
switch(lean_obj_tag(v_defValue_235_))
{
case 1:
{
lean_object* v___x_236_; uint8_t v___x_237_; 
lean_dec_ref_known(v_defValue_235_, 0);
v___x_236_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__0));
v___x_237_ = lean_string_dec_eq(v_val_233_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__1));
v___x_239_ = lean_string_dec_eq(v_val_233_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_name_232_);
lean_dec_ref(v_opts_230_);
v___x_240_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_241_ = lean_string_append(v___x_240_, v_val_233_);
lean_dec_ref(v_val_233_);
v___x_242_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__3));
v___x_243_ = lean_string_append(v___x_241_, v___x_242_);
v___x_244_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec_ref(v_val_233_);
v___x_246_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_230_, v_name_232_, v___x_237_);
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec_ref(v_val_233_);
v___x_248_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_230_, v_name_232_, v___x_237_);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
return v___x_249_;
}
}
case 3:
{
lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_274_; 
v_isSharedCheck_274_ = !lean_is_exclusive(v_defValue_235_);
if (v_isSharedCheck_274_ == 0)
{
lean_object* v_unused_275_; 
v_unused_275_ = lean_ctor_get(v_defValue_235_, 0);
lean_dec(v_unused_275_);
v___x_251_ = v_defValue_235_;
v_isShared_252_ = v_isSharedCheck_274_;
goto v_resetjp_250_;
}
else
{
lean_dec(v_defValue_235_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_274_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_string_utf8_byte_size(v_val_233_);
lean_inc_ref(v_val_233_);
v___x_255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_255_, 0, v_val_233_);
lean_ctor_set(v___x_255_, 1, v___x_253_);
lean_ctor_set(v___x_255_, 2, v___x_254_);
v___x_256_ = l_String_Slice_toNat_x3f(v___x_255_);
lean_dec_ref_known(v___x_255_, 3);
if (lean_obj_tag(v___x_256_) == 1)
{
lean_object* v_val_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_265_; 
lean_del_object(v___x_251_);
lean_dec_ref(v_val_233_);
v_val_257_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_265_ == 0)
{
v___x_259_ = v___x_256_;
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_val_257_);
lean_dec(v___x_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_261_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(v_opts_230_, v_name_232_, v_val_257_);
if (v_isShared_260_ == 0)
{
lean_ctor_set_tag(v___x_259_, 0);
lean_ctor_set(v___x_259_, 0, v___x_261_);
v___x_263_ = v___x_259_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
lean_dec(v___x_256_);
lean_dec(v_name_232_);
lean_dec_ref(v_opts_230_);
v___x_266_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_267_ = lean_string_append(v___x_266_, v_val_233_);
lean_dec_ref(v_val_233_);
v___x_268_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__4));
v___x_269_ = lean_string_append(v___x_267_, v___x_268_);
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 18);
lean_ctor_set(v___x_251_, 0, v___x_269_);
v___x_271_ = v___x_251_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_273_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; 
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
return v___x_272_;
}
}
}
}
case 0:
{
lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_283_; 
v_isSharedCheck_283_ = !lean_is_exclusive(v_defValue_235_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; 
v_unused_284_ = lean_ctor_get(v_defValue_235_, 0);
lean_dec(v_unused_284_);
v___x_277_ = v_defValue_235_;
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
else
{
lean_dec(v_defValue_235_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(v_opts_230_, v_name_232_, v_val_233_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
default: 
{
lean_object* v___x_285_; uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
lean_dec_ref(v_defValue_235_);
lean_dec_ref(v_val_233_);
lean_dec_ref(v_opts_230_);
v___x_285_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__5));
v___x_286_ = 1;
v___x_287_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_232_, v___x_286_);
v___x_288_ = lean_string_append(v___x_285_, v___x_287_);
lean_dec_ref(v___x_287_);
v___x_289_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__6));
v___x_290_ = lean_string_append(v___x_288_, v___x_289_);
v___x_291_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
v___x_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object* v_opts_293_, lean_object* v_decl_294_, lean_object* v_name_295_, lean_object* v_val_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Language_Lean_setOption(v_opts_293_, v_decl_294_, v_name_295_, v_val_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object* v_o_299_, lean_object* v_k_300_, lean_object* v_v_301_){
_start:
{
lean_object* v_map_302_; uint8_t v_hasTrace_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_316_; 
v_map_302_ = lean_ctor_get(v_o_299_, 0);
v_hasTrace_303_ = lean_ctor_get_uint8(v_o_299_, sizeof(void*)*1);
v_isSharedCheck_316_ = !lean_is_exclusive(v_o_299_);
if (v_isSharedCheck_316_ == 0)
{
v___x_305_ = v_o_299_;
v_isShared_306_ = v_isSharedCheck_316_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_map_302_);
lean_dec(v_o_299_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_316_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; 
lean_inc(v_k_300_);
v___x_307_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_300_, v_v_301_, v_map_302_);
if (v_hasTrace_303_ == 0)
{
lean_object* v___x_308_; uint8_t v___x_309_; lean_object* v___x_311_; 
v___x_308_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_309_ = l_Lean_Name_isPrefixOf(v___x_308_, v_k_300_);
lean_dec(v_k_300_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_307_);
v___x_311_ = v___x_305_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_307_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*1, v___x_309_);
return v___x_311_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v_k_300_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_307_);
v___x_314_ = v___x_305_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_307_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*1, v_hasTrace_303_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object* v_a_323_, lean_object* v_init_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_d_328_; 
if (lean_obj_tag(v_x_325_) == 0)
{
lean_object* v_k_331_; lean_object* v_v_332_; lean_object* v_l_333_; lean_object* v_r_334_; lean_object* v___x_335_; 
v_k_331_ = lean_ctor_get(v_x_325_, 1);
lean_inc(v_k_331_);
v_v_332_ = lean_ctor_get(v_x_325_, 2);
lean_inc(v_v_332_);
v_l_333_ = lean_ctor_get(v_x_325_, 3);
lean_inc(v_l_333_);
v_r_334_ = lean_ctor_get(v_x_325_, 4);
lean_inc(v_r_334_);
lean_dec_ref_known(v_x_325_, 5);
v___x_335_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_323_, v_init_324_, v_l_333_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
if (lean_obj_tag(v_a_336_) == 0)
{
lean_object* v_a_337_; 
lean_dec_ref_known(v___x_335_, 1);
lean_dec(v_r_334_);
lean_dec(v_v_332_);
lean_dec(v_k_331_);
v_a_337_ = lean_ctor_get(v_a_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v_a_336_, 1);
v_d_328_ = v_a_337_;
goto v___jp_327_;
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_389_; 
v_a_338_ = lean_ctor_get(v_a_336_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v_a_336_);
if (v_isSharedCheck_389_ == 0)
{
v___x_340_ = v_a_336_;
v_isShared_341_ = v_isSharedCheck_389_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v_a_336_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_389_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_342_ = l_Lean_Name_getRoot(v_k_331_);
v___x_343_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1));
v___x_344_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0);
v___x_345_ = l_Lean_Name_replacePrefix(v_k_331_, v___x_343_, v___x_344_);
v___x_346_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_323_, v___x_345_);
if (lean_obj_tag(v___x_346_) == 1)
{
lean_dec(v___x_342_);
lean_del_object(v___x_340_);
lean_dec_ref_known(v___x_335_, 1);
if (lean_obj_tag(v_v_332_) == 0)
{
lean_object* v_val_347_; lean_object* v_v_348_; lean_object* v___x_349_; 
v_val_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_val_347_);
lean_dec_ref_known(v___x_346_, 1);
v_v_348_ = lean_ctor_get(v_v_332_, 0);
lean_inc_ref(v_v_348_);
lean_dec_ref_known(v_v_332_, 1);
v___x_349_ = l_Lean_Language_Lean_setOption(v_a_338_, v_val_347_, v___x_345_, v_v_348_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_349_, 1);
v_init_324_ = v_a_350_;
v_x_325_ = v_r_334_;
goto _start;
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec(v_r_334_);
v_a_352_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_349_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_349_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
else
{
lean_object* v___x_360_; 
lean_dec_ref_known(v___x_346_, 1);
v___x_360_ = l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(v_a_338_, v___x_345_, v_v_332_);
v_init_324_ = v___x_360_;
v_x_325_ = v_r_334_;
goto _start;
}
}
else
{
uint8_t v___x_362_; 
lean_dec(v___x_346_);
lean_dec(v_a_338_);
lean_dec(v_v_332_);
v___x_362_ = lean_name_eq(v___x_342_, v___x_343_);
lean_dec(v___x_342_);
if (v___x_362_ == 0)
{
lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_383_; 
lean_dec(v_r_334_);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v___x_335_, 0);
lean_dec(v_unused_384_);
v___x_364_ = v___x_335_;
v_isShared_365_ = v_isSharedCheck_383_;
goto v_resetjp_363_;
}
else
{
lean_dec(v___x_335_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_383_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_366_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2));
v___x_367_ = 1;
lean_inc(v___x_345_);
v___x_368_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_345_, v___x_367_);
v___x_369_ = lean_string_append(v___x_366_, v___x_368_);
lean_dec_ref(v___x_368_);
v___x_370_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3));
v___x_371_ = lean_string_append(v___x_369_, v___x_370_);
v___x_372_ = l_Lean_Name_append(v___x_343_, v___x_345_);
v___x_373_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_372_, v___x_367_);
v___x_374_ = lean_string_append(v___x_371_, v___x_373_);
lean_dec_ref(v___x_373_);
v___x_375_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4));
v___x_376_ = lean_string_append(v___x_374_, v___x_375_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 18);
lean_ctor_set(v___x_340_, 0, v___x_376_);
v___x_378_ = v___x_340_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_382_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_380_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 1);
lean_ctor_set(v___x_364_, 0, v___x_378_);
v___x_380_ = v___x_364_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
else
{
lean_dec(v___x_345_);
lean_del_object(v___x_340_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_385_; 
v_a_385_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_335_, 1);
if (lean_obj_tag(v_a_385_) == 0)
{
lean_object* v_a_386_; 
lean_dec(v_r_334_);
v_a_386_ = lean_ctor_get(v_a_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v_a_385_, 1);
v_d_328_ = v_a_386_;
goto v___jp_327_;
}
else
{
lean_object* v_a_387_; 
v_a_387_ = lean_ctor_get(v_a_385_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v_a_385_, 1);
v_init_324_ = v_a_387_;
v_x_325_ = v_r_334_;
goto _start;
}
}
else
{
lean_dec(v_r_334_);
return v___x_335_;
}
}
}
}
}
}
else
{
lean_dec(v_r_334_);
lean_dec(v_v_332_);
lean_dec(v_k_331_);
return v___x_335_;
}
}
else
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_390_, 0, v_init_324_);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
v___jp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_329_, 0, v_d_328_);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object* v_a_392_, lean_object* v_init_393_, lean_object* v_x_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_392_, v_init_393_, v_x_394_);
lean_dec(v_a_392_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object* v_opts_397_){
_start:
{
lean_object* v_opts_x27_399_; lean_object* v___x_400_; 
v_opts_x27_399_ = l_Lean_Options_empty;
v___x_400_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v_map_402_; lean_object* v___x_403_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_401_);
lean_dec_ref_known(v___x_400_, 1);
v_map_402_ = lean_ctor_get(v_opts_397_, 0);
lean_inc(v_map_402_);
lean_dec_ref(v_opts_397_);
v___x_403_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_401_, v_opts_x27_399_, v_map_402_);
lean_dec(v_a_401_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_412_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_412_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_412_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_412_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_a_408_; lean_object* v___x_410_; 
v_a_408_ = lean_ctor_get(v_a_404_, 0);
lean_inc(v_a_408_);
lean_dec(v_a_404_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_a_408_);
v___x_410_ = v___x_406_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
v_a_413_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_403_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_403_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec_ref(v_opts_397_);
v_a_421_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_400_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_400_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object* v_opts_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Language_Lean_reparseOptions(v_opts_429_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object* v_stx_440_){
_start:
{
lean_object* v_stx_442_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_445_ = lean_unsigned_to_nat(0u);
v___x_446_ = l_Lean_Syntax_getArg(v_stx_440_, v___x_445_);
v___x_447_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3));
v___x_448_ = l_Lean_Syntax_isOfKind(v___x_446_, v___x_447_);
if (v___x_448_ == 0)
{
v_stx_442_ = v_stx_440_;
goto v___jp_441_;
}
else
{
lean_object* v___x_449_; lean_object* v_stx_450_; 
v___x_449_ = lean_unsigned_to_nat(1u);
v_stx_450_ = l_Lean_Syntax_getArg(v_stx_440_, v___x_449_);
lean_dec(v_stx_440_);
v_stx_442_ = v_stx_450_;
goto v___jp_441_;
}
v___jp_441_:
{
uint8_t v___x_443_; lean_object* v___x_444_; 
v___x_443_ = 0;
v___x_444_ = l_Lean_Syntax_getPos_x3f(v_stx_442_, v___x_443_);
lean_dec(v_stx_442_);
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object* v_name_451_, lean_object* v_decl_452_, lean_object* v_ref_453_){
_start:
{
lean_object* v_defValue_455_; lean_object* v_descr_456_; lean_object* v_deprecation_x3f_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_defValue_455_ = lean_ctor_get(v_decl_452_, 0);
v_descr_456_ = lean_ctor_get(v_decl_452_, 1);
v_deprecation_x3f_457_ = lean_ctor_get(v_decl_452_, 2);
v___x_458_ = lean_alloc_ctor(1, 0, 1);
v___x_459_ = lean_unbox(v_defValue_455_);
lean_ctor_set_uint8(v___x_458_, 0, v___x_459_);
lean_inc(v_deprecation_x3f_457_);
lean_inc_ref(v_descr_456_);
lean_inc_n(v_name_451_, 2);
v___x_460_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_460_, 0, v_name_451_);
lean_ctor_set(v___x_460_, 1, v_ref_453_);
lean_ctor_set(v___x_460_, 2, v___x_458_);
lean_ctor_set(v___x_460_, 3, v_descr_456_);
lean_ctor_set(v___x_460_, 4, v_deprecation_x3f_457_);
v___x_461_ = lean_register_option(v_name_451_, v___x_460_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_469_; 
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_469_ == 0)
{
lean_object* v_unused_470_; 
v_unused_470_ = lean_ctor_get(v___x_461_, 0);
lean_dec(v_unused_470_);
v___x_463_ = v___x_461_;
v_isShared_464_ = v_isSharedCheck_469_;
goto v_resetjp_462_;
}
else
{
lean_dec(v___x_461_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_469_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_467_; 
lean_inc(v_defValue_455_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v_name_451_);
lean_ctor_set(v___x_465_, 1, v_defValue_455_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v___x_465_);
v___x_467_ = v___x_463_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
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
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_dec(v_name_451_);
v_a_471_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_461_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_461_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_479_, lean_object* v_decl_480_, lean_object* v_ref_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v_name_479_, v_decl_480_, v_ref_481_);
lean_dec_ref(v_decl_480_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_501_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_502_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_503_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_504_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v___x_501_, v___x_502_, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
return v_res_506_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_unsigned_to_nat(32u);
v___x_508_ = lean_mk_empty_array_with_capacity(v___x_507_);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_510_ = ((size_t)5ULL);
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = lean_unsigned_to_nat(32u);
v___x_513_ = lean_mk_empty_array_with_capacity(v___x_512_);
v___x_514_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0);
v___x_515_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_515_, 0, v___x_514_);
lean_ctor_set(v___x_515_, 1, v___x_513_);
lean_ctor_set(v___x_515_, 2, v___x_511_);
lean_ctor_set(v___x_515_, 3, v___x_511_);
lean_ctor_set_usize(v___x_515_, 4, v___x_510_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object* v___y_516_){
_start:
{
lean_object* v___x_518_; lean_object* v_infoState_519_; lean_object* v_trees_520_; lean_object* v___x_521_; lean_object* v_infoState_522_; lean_object* v_env_523_; lean_object* v_messages_524_; lean_object* v_scopes_525_; lean_object* v_usedQuotCtxts_526_; lean_object* v_nextMacroScope_527_; lean_object* v_maxRecDepth_528_; lean_object* v_ngen_529_; lean_object* v_auxDeclNGen_530_; lean_object* v_traceState_531_; lean_object* v_snapshotTasks_532_; lean_object* v_prevLinterStates_533_; lean_object* v_codeQualityEntryTasks_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_555_; 
v___x_518_ = lean_st_ref_get(v___y_516_);
v_infoState_519_ = lean_ctor_get(v___x_518_, 8);
lean_inc_ref(v_infoState_519_);
lean_dec(v___x_518_);
v_trees_520_ = lean_ctor_get(v_infoState_519_, 2);
lean_inc_ref(v_trees_520_);
lean_dec_ref(v_infoState_519_);
v___x_521_ = lean_st_ref_take(v___y_516_);
v_infoState_522_ = lean_ctor_get(v___x_521_, 8);
v_env_523_ = lean_ctor_get(v___x_521_, 0);
v_messages_524_ = lean_ctor_get(v___x_521_, 1);
v_scopes_525_ = lean_ctor_get(v___x_521_, 2);
v_usedQuotCtxts_526_ = lean_ctor_get(v___x_521_, 3);
v_nextMacroScope_527_ = lean_ctor_get(v___x_521_, 4);
v_maxRecDepth_528_ = lean_ctor_get(v___x_521_, 5);
v_ngen_529_ = lean_ctor_get(v___x_521_, 6);
v_auxDeclNGen_530_ = lean_ctor_get(v___x_521_, 7);
v_traceState_531_ = lean_ctor_get(v___x_521_, 9);
v_snapshotTasks_532_ = lean_ctor_get(v___x_521_, 10);
v_prevLinterStates_533_ = lean_ctor_get(v___x_521_, 11);
v_codeQualityEntryTasks_534_ = lean_ctor_get(v___x_521_, 12);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_555_ == 0)
{
v___x_536_ = v___x_521_;
v_isShared_537_ = v_isSharedCheck_555_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_codeQualityEntryTasks_534_);
lean_inc(v_prevLinterStates_533_);
lean_inc(v_snapshotTasks_532_);
lean_inc(v_traceState_531_);
lean_inc(v_infoState_522_);
lean_inc(v_auxDeclNGen_530_);
lean_inc(v_ngen_529_);
lean_inc(v_maxRecDepth_528_);
lean_inc(v_nextMacroScope_527_);
lean_inc(v_usedQuotCtxts_526_);
lean_inc(v_scopes_525_);
lean_inc(v_messages_524_);
lean_inc(v_env_523_);
lean_dec(v___x_521_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_555_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
uint8_t v_enabled_538_; lean_object* v_assignment_539_; lean_object* v_lazyAssignment_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_553_; 
v_enabled_538_ = lean_ctor_get_uint8(v_infoState_522_, sizeof(void*)*3);
v_assignment_539_ = lean_ctor_get(v_infoState_522_, 0);
v_lazyAssignment_540_ = lean_ctor_get(v_infoState_522_, 1);
v_isSharedCheck_553_ = !lean_is_exclusive(v_infoState_522_);
if (v_isSharedCheck_553_ == 0)
{
lean_object* v_unused_554_; 
v_unused_554_ = lean_ctor_get(v_infoState_522_, 2);
lean_dec(v_unused_554_);
v___x_542_ = v_infoState_522_;
v_isShared_543_ = v_isSharedCheck_553_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_lazyAssignment_540_);
lean_inc(v_assignment_539_);
lean_dec(v_infoState_522_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_553_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_544_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 2, v___x_544_);
v___x_546_ = v___x_542_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_assignment_539_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_lazyAssignment_540_);
lean_ctor_set(v_reuseFailAlloc_552_, 2, v___x_544_);
lean_ctor_set_uint8(v_reuseFailAlloc_552_, sizeof(void*)*3, v_enabled_538_);
v___x_546_ = v_reuseFailAlloc_552_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v___x_548_; 
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 8, v___x_546_);
v___x_548_ = v___x_536_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_env_523_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_messages_524_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v_scopes_525_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v_usedQuotCtxts_526_);
lean_ctor_set(v_reuseFailAlloc_551_, 4, v_nextMacroScope_527_);
lean_ctor_set(v_reuseFailAlloc_551_, 5, v_maxRecDepth_528_);
lean_ctor_set(v_reuseFailAlloc_551_, 6, v_ngen_529_);
lean_ctor_set(v_reuseFailAlloc_551_, 7, v_auxDeclNGen_530_);
lean_ctor_set(v_reuseFailAlloc_551_, 8, v___x_546_);
lean_ctor_set(v_reuseFailAlloc_551_, 9, v_traceState_531_);
lean_ctor_set(v_reuseFailAlloc_551_, 10, v_snapshotTasks_532_);
lean_ctor_set(v_reuseFailAlloc_551_, 11, v_prevLinterStates_533_);
lean_ctor_set(v_reuseFailAlloc_551_, 12, v_codeQualityEntryTasks_534_);
v___x_548_ = v_reuseFailAlloc_551_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_st_ref_put(v___y_516_, v___x_548_);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v_trees_520_);
return v___x_550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_556_);
lean_dec(v___y_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_560_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
return v_res_566_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object* v_opts_567_, lean_object* v_opt_568_){
_start:
{
lean_object* v_name_569_; lean_object* v_defValue_570_; lean_object* v_map_571_; lean_object* v___x_572_; 
v_name_569_ = lean_ctor_get(v_opt_568_, 0);
v_defValue_570_ = lean_ctor_get(v_opt_568_, 1);
v_map_571_ = lean_ctor_get(v_opts_567_, 0);
v___x_572_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_571_, v_name_569_);
if (lean_obj_tag(v___x_572_) == 0)
{
uint8_t v___x_573_; 
v___x_573_ = lean_unbox(v_defValue_570_);
return v___x_573_;
}
else
{
lean_object* v_val_574_; 
v_val_574_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_574_);
lean_dec_ref_known(v___x_572_, 1);
if (lean_obj_tag(v_val_574_) == 1)
{
uint8_t v_v_575_; 
v_v_575_ = lean_ctor_get_uint8(v_val_574_, 0);
lean_dec_ref_known(v_val_574_, 0);
return v_v_575_;
}
else
{
uint8_t v___x_576_; 
lean_dec(v_val_574_);
v___x_576_ = lean_unbox(v_defValue_570_);
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object* v_opts_577_, lean_object* v_opt_578_){
_start:
{
uint8_t v_res_579_; lean_object* v_r_580_; 
v_res_579_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_577_, v_opt_578_);
lean_dec_ref(v_opt_578_);
lean_dec_ref(v_opts_577_);
v_r_580_ = lean_box(v_res_579_);
return v_r_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object* v_val_583_, lean_object* v___y_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_585_ = l_Lean_Language_Snapshot_transform(v_val_583_, v___y_584_);
v___x_586_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object* v_val_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(v_val_588_, v___y_589_);
lean_dec_ref(v___y_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object* v_inst_591_, lean_object* v_val_592_){
_start:
{
lean_object* v___f_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
lean_inc_ref(v_val_592_);
v___f_593_ = lean_alloc_closure((void*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(v___f_593_, 0, v_val_592_);
v___x_594_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_591_, v_val_592_);
lean_dec_ref(v_val_592_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v___f_593_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___boxed(lean_object* v_inst_596_, lean_object* v_val_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(v_inst_596_, v_val_597_);
lean_dec(v_inst_596_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object* v_stx_599_, lean_object* v_cmds_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_602_);
lean_dec_ref(v___x_604_);
v___x_605_ = l_Lean_Elab_Command_elabCommandTopLevel(v_stx_599_, v_cmds_600_, v___y_601_, v___y_602_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object* v_stx_606_, lean_object* v_cmds_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(v_stx_606_, v_cmds_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
return v_res_611_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_612_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_615_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_616_ = lean_unsigned_to_nat(0u);
v___x_617_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
lean_ctor_set(v___x_617_, 2, v___x_616_);
lean_ctor_set(v___x_617_, 3, v___x_616_);
lean_ctor_set(v___x_617_, 4, v___x_615_);
lean_ctor_set(v___x_617_, 5, v___x_615_);
lean_ctor_set(v___x_617_, 6, v___x_615_);
lean_ctor_set(v___x_617_, 7, v___x_615_);
lean_ctor_set(v___x_617_, 8, v___x_615_);
lean_ctor_set(v___x_617_, 9, v___x_615_);
lean_ctor_set(v___x_617_, 10, v___x_615_);
return v___x_617_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_618_ = lean_unsigned_to_nat(32u);
v___x_619_ = lean_mk_empty_array_with_capacity(v___x_618_);
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
return v___x_620_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4(void){
_start:
{
size_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_621_ = ((size_t)5ULL);
v___x_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = lean_unsigned_to_nat(32u);
v___x_624_ = lean_mk_empty_array_with_capacity(v___x_623_);
v___x_625_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3);
v___x_626_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set(v___x_626_, 2, v___x_622_);
lean_ctor_set(v___x_626_, 3, v___x_622_);
lean_ctor_set_usize(v___x_626_, 4, v___x_621_);
return v___x_626_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_627_ = lean_box(1);
v___x_628_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4);
v___x_629_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v___x_628_);
lean_ctor_set(v___x_630_, 2, v___x_627_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object* v_msgData_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___x_634_; lean_object* v_env_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v_scopes_638_; lean_object* v___x_639_; lean_object* v_opts_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_634_ = lean_st_ref_get(v___y_632_);
v_env_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc_ref(v_env_635_);
lean_dec(v___x_634_);
v___x_636_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_637_ = lean_st_ref_get(v___y_632_);
v_scopes_638_ = lean_ctor_get(v___x_637_, 2);
lean_inc(v_scopes_638_);
lean_dec(v___x_637_);
v___x_639_ = l_List_head_x21___redArg(v___x_636_, v_scopes_638_);
lean_dec(v_scopes_638_);
v_opts_640_ = lean_ctor_get(v___x_639_, 1);
lean_inc_ref(v_opts_640_);
lean_dec(v___x_639_);
v___x_641_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2);
v___x_642_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5);
v___x_643_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_643_, 0, v_env_635_);
lean_ctor_set(v___x_643_, 1, v___x_641_);
lean_ctor_set(v___x_643_, 2, v___x_642_);
lean_ctor_set(v___x_643_, 3, v_opts_640_);
v___x_644_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v_msgData_631_);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object* v_msgData_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_646_, v___y_647_);
lean_dec(v___y_647_);
return v_res_649_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t v_suppressElabErrors_650_, uint8_t v___y_651_, lean_object* v_x_652_){
_start:
{
if (lean_obj_tag(v_x_652_) == 1)
{
lean_object* v_pre_653_; 
v_pre_653_ = lean_ctor_get(v_x_652_, 0);
if (lean_obj_tag(v_pre_653_) == 0)
{
lean_object* v_str_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_str_654_ = lean_ctor_get(v_x_652_, 1);
v___x_655_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0));
v___x_656_ = lean_string_dec_eq(v_str_654_, v___x_655_);
if (v___x_656_ == 0)
{
return v___x_656_;
}
else
{
return v_suppressElabErrors_650_;
}
}
else
{
return v___y_651_;
}
}
else
{
return v___y_651_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object* v_suppressElabErrors_657_, lean_object* v___y_658_, lean_object* v_x_659_){
_start:
{
uint8_t v_suppressElabErrors_boxed_660_; uint8_t v___y_9155__boxed_661_; uint8_t v_res_662_; lean_object* v_r_663_; 
v_suppressElabErrors_boxed_660_ = lean_unbox(v_suppressElabErrors_657_);
v___y_9155__boxed_661_ = lean_unbox(v___y_658_);
v_res_662_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(v_suppressElabErrors_boxed_660_, v___y_9155__boxed_661_, v_x_659_);
lean_dec(v_x_659_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object* v_ref_665_, lean_object* v_msgData_666_, uint8_t v_severity_667_, uint8_t v_isSilent_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v___y_673_; lean_object* v___y_674_; uint8_t v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; uint8_t v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; uint8_t v___y_738_; uint8_t v___y_739_; uint8_t v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; uint8_t v___y_766_; uint8_t v___y_767_; uint8_t v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; uint8_t v___y_774_; uint8_t v___y_775_; uint8_t v___y_776_; uint8_t v___x_791_; uint8_t v___y_793_; uint8_t v___y_794_; uint8_t v___y_795_; uint8_t v___y_797_; uint8_t v___x_809_; 
v___x_791_ = 2;
v___x_809_ = l_Lean_instBEqMessageSeverity_beq(v_severity_667_, v___x_791_);
if (v___x_809_ == 0)
{
v___y_797_ = v___x_809_;
goto v___jp_796_;
}
else
{
uint8_t v___x_810_; 
lean_inc_ref(v_msgData_666_);
v___x_810_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_666_);
v___y_797_ = v___x_810_;
goto v___jp_796_;
}
v___jp_672_:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lean_Elab_Command_getScope___redArg(v___y_680_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v_currNamespace_683_; lean_object* v___x_684_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
v_currNamespace_683_ = lean_ctor_get(v_a_682_, 2);
lean_inc(v_currNamespace_683_);
lean_dec(v_a_682_);
v___x_684_ = l_Lean_Elab_Command_getScope___redArg(v___y_680_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_720_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_720_ == 0)
{
v___x_687_ = v___x_684_;
v_isShared_688_ = v_isSharedCheck_720_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_684_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_720_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v_openDecls_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_env_694_; lean_object* v_messages_695_; lean_object* v_scopes_696_; lean_object* v_usedQuotCtxts_697_; lean_object* v_nextMacroScope_698_; lean_object* v_maxRecDepth_699_; lean_object* v_ngen_700_; lean_object* v_auxDeclNGen_701_; lean_object* v_infoState_702_; lean_object* v_traceState_703_; lean_object* v_snapshotTasks_704_; lean_object* v_prevLinterStates_705_; lean_object* v_codeQualityEntryTasks_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_719_; 
v_openDecls_689_ = lean_ctor_get(v_a_685_, 3);
lean_inc(v_openDecls_689_);
lean_dec(v_a_685_);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v_currNamespace_683_);
lean_ctor_set(v___x_690_, 1, v_openDecls_689_);
v___x_691_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v___y_677_);
lean_inc_ref(v___y_674_);
lean_inc_ref(v___y_673_);
v___x_692_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_692_, 0, v___y_673_);
lean_ctor_set(v___x_692_, 1, v___y_676_);
lean_ctor_set(v___x_692_, 2, v___y_679_);
lean_ctor_set(v___x_692_, 3, v___y_674_);
lean_ctor_set(v___x_692_, 4, v___x_691_);
lean_ctor_set_uint8(v___x_692_, sizeof(void*)*5, v___y_675_);
lean_ctor_set_uint8(v___x_692_, sizeof(void*)*5 + 1, v___y_678_);
lean_ctor_set_uint8(v___x_692_, sizeof(void*)*5 + 2, v_isSilent_668_);
v___x_693_ = lean_st_ref_take(v___y_680_);
v_env_694_ = lean_ctor_get(v___x_693_, 0);
v_messages_695_ = lean_ctor_get(v___x_693_, 1);
v_scopes_696_ = lean_ctor_get(v___x_693_, 2);
v_usedQuotCtxts_697_ = lean_ctor_get(v___x_693_, 3);
v_nextMacroScope_698_ = lean_ctor_get(v___x_693_, 4);
v_maxRecDepth_699_ = lean_ctor_get(v___x_693_, 5);
v_ngen_700_ = lean_ctor_get(v___x_693_, 6);
v_auxDeclNGen_701_ = lean_ctor_get(v___x_693_, 7);
v_infoState_702_ = lean_ctor_get(v___x_693_, 8);
v_traceState_703_ = lean_ctor_get(v___x_693_, 9);
v_snapshotTasks_704_ = lean_ctor_get(v___x_693_, 10);
v_prevLinterStates_705_ = lean_ctor_get(v___x_693_, 11);
v_codeQualityEntryTasks_706_ = lean_ctor_get(v___x_693_, 12);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_719_ == 0)
{
v___x_708_ = v___x_693_;
v_isShared_709_ = v_isSharedCheck_719_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_codeQualityEntryTasks_706_);
lean_inc(v_prevLinterStates_705_);
lean_inc(v_snapshotTasks_704_);
lean_inc(v_traceState_703_);
lean_inc(v_infoState_702_);
lean_inc(v_auxDeclNGen_701_);
lean_inc(v_ngen_700_);
lean_inc(v_maxRecDepth_699_);
lean_inc(v_nextMacroScope_698_);
lean_inc(v_usedQuotCtxts_697_);
lean_inc(v_scopes_696_);
lean_inc(v_messages_695_);
lean_inc(v_env_694_);
lean_dec(v___x_693_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_719_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_710_ = lean_box(0);
v___x_711_ = l_Lean_MessageLog_add(v___x_692_, v_messages_695_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 1, v___x_711_);
v___x_713_ = v___x_708_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_env_694_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v_scopes_696_);
lean_ctor_set(v_reuseFailAlloc_718_, 3, v_usedQuotCtxts_697_);
lean_ctor_set(v_reuseFailAlloc_718_, 4, v_nextMacroScope_698_);
lean_ctor_set(v_reuseFailAlloc_718_, 5, v_maxRecDepth_699_);
lean_ctor_set(v_reuseFailAlloc_718_, 6, v_ngen_700_);
lean_ctor_set(v_reuseFailAlloc_718_, 7, v_auxDeclNGen_701_);
lean_ctor_set(v_reuseFailAlloc_718_, 8, v_infoState_702_);
lean_ctor_set(v_reuseFailAlloc_718_, 9, v_traceState_703_);
lean_ctor_set(v_reuseFailAlloc_718_, 10, v_snapshotTasks_704_);
lean_ctor_set(v_reuseFailAlloc_718_, 11, v_prevLinterStates_705_);
lean_ctor_set(v_reuseFailAlloc_718_, 12, v_codeQualityEntryTasks_706_);
v___x_713_ = v_reuseFailAlloc_718_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = lean_st_ref_put(v___y_680_, v___x_713_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_710_);
v___x_716_ = v___x_687_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_710_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec(v_currNamespace_683_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_677_);
lean_dec_ref(v___y_676_);
v_a_721_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_684_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_684_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_dec(v___y_679_);
lean_dec_ref(v___y_677_);
lean_dec_ref(v___y_676_);
v_a_729_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_681_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_681_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
v___jp_737_:
{
lean_object* v_fileName_743_; lean_object* v_fileMap_744_; uint8_t v_suppressElabErrors_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___f_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_764_; 
v_fileName_743_ = lean_ctor_get(v___y_669_, 0);
v_fileMap_744_ = lean_ctor_get(v___y_669_, 1);
v_suppressElabErrors_745_ = lean_ctor_get_uint8(v___y_669_, sizeof(void*)*10);
v___x_746_ = lean_box(v_suppressElabErrors_745_);
v___x_747_ = lean_box(v___y_738_);
v___f_748_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed), 3, 2);
lean_closure_set(v___f_748_, 0, v___x_746_);
lean_closure_set(v___f_748_, 1, v___x_747_);
v___x_749_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_666_);
v___x_750_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v___x_749_, v___y_670_);
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_764_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_764_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_764_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
lean_inc_ref_n(v_fileMap_744_, 2);
v___x_755_ = l_Lean_FileMap_toPosition(v_fileMap_744_, v___y_741_);
lean_dec(v___y_741_);
v___x_756_ = l_Lean_FileMap_toPosition(v_fileMap_744_, v___y_742_);
lean_dec(v___y_742_);
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
if (v_suppressElabErrors_745_ == 0)
{
lean_del_object(v___x_753_);
lean_dec_ref(v___f_748_);
v___y_673_ = v_fileName_743_;
v___y_674_ = v___x_758_;
v___y_675_ = v___y_739_;
v___y_676_ = v___x_755_;
v___y_677_ = v_a_751_;
v___y_678_ = v___y_740_;
v___y_679_ = v___x_757_;
v___y_680_ = v___y_670_;
goto v___jp_672_;
}
else
{
uint8_t v___x_759_; 
lean_inc(v_a_751_);
v___x_759_ = l_Lean_MessageData_hasTag(v___f_748_, v_a_751_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; lean_object* v___x_762_; 
lean_dec_ref_known(v___x_757_, 1);
lean_dec_ref(v___x_755_);
lean_dec(v_a_751_);
v___x_760_ = lean_box(0);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v___x_760_);
v___x_762_ = v___x_753_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
else
{
lean_del_object(v___x_753_);
v___y_673_ = v_fileName_743_;
v___y_674_ = v___x_758_;
v___y_675_ = v___y_739_;
v___y_676_ = v___x_755_;
v___y_677_ = v_a_751_;
v___y_678_ = v___y_740_;
v___y_679_ = v___x_757_;
v___y_680_ = v___y_670_;
goto v___jp_672_;
}
}
}
}
v___jp_765_:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_Syntax_getTailPos_x3f(v___y_769_, v___y_767_);
lean_dec(v___y_769_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_inc(v___y_770_);
v___y_738_ = v___y_766_;
v___y_739_ = v___y_767_;
v___y_740_ = v___y_768_;
v___y_741_ = v___y_770_;
v___y_742_ = v___y_770_;
goto v___jp_737_;
}
else
{
lean_object* v_val_772_; 
v_val_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_val_772_);
lean_dec_ref_known(v___x_771_, 1);
v___y_738_ = v___y_766_;
v___y_739_ = v___y_767_;
v___y_740_ = v___y_768_;
v___y_741_ = v___y_770_;
v___y_742_ = v_val_772_;
goto v___jp_737_;
}
}
v___jp_773_:
{
lean_object* v___x_777_; 
v___x_777_ = l_Lean_Elab_Command_getRef___redArg(v___y_669_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v_ref_779_; lean_object* v___x_780_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v_ref_779_ = l_Lean_replaceRef(v_ref_665_, v_a_778_);
lean_dec(v_a_778_);
v___x_780_ = l_Lean_Syntax_getPos_x3f(v_ref_779_, v___y_775_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v___x_781_; 
v___x_781_ = lean_unsigned_to_nat(0u);
v___y_766_ = v___y_774_;
v___y_767_ = v___y_775_;
v___y_768_ = v___y_776_;
v___y_769_ = v_ref_779_;
v___y_770_ = v___x_781_;
goto v___jp_765_;
}
else
{
lean_object* v_val_782_; 
v_val_782_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_val_782_);
lean_dec_ref_known(v___x_780_, 1);
v___y_766_ = v___y_774_;
v___y_767_ = v___y_775_;
v___y_768_ = v___y_776_;
v___y_769_ = v_ref_779_;
v___y_770_ = v_val_782_;
goto v___jp_765_;
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec_ref(v_msgData_666_);
v_a_783_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_777_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_777_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
v___jp_792_:
{
if (v___y_795_ == 0)
{
v___y_774_ = v___y_793_;
v___y_775_ = v___y_794_;
v___y_776_ = v_severity_667_;
goto v___jp_773_;
}
else
{
v___y_774_ = v___y_793_;
v___y_775_ = v___y_794_;
v___y_776_ = v___x_791_;
goto v___jp_773_;
}
}
v___jp_796_:
{
if (v___y_797_ == 0)
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v_scopes_800_; lean_object* v___x_801_; lean_object* v_opts_802_; uint8_t v___x_803_; uint8_t v___x_804_; 
v___x_798_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_799_ = lean_st_ref_get(v___y_670_);
v_scopes_800_ = lean_ctor_get(v___x_799_, 2);
lean_inc(v_scopes_800_);
lean_dec(v___x_799_);
v___x_801_ = l_List_head_x21___redArg(v___x_798_, v_scopes_800_);
lean_dec(v_scopes_800_);
v_opts_802_ = lean_ctor_get(v___x_801_, 1);
lean_inc_ref(v_opts_802_);
lean_dec(v___x_801_);
v___x_803_ = 1;
v___x_804_ = l_Lean_instBEqMessageSeverity_beq(v_severity_667_, v___x_803_);
if (v___x_804_ == 0)
{
lean_dec_ref(v_opts_802_);
v___y_793_ = v___y_797_;
v___y_794_ = v___y_797_;
v___y_795_ = v___x_804_;
goto v___jp_792_;
}
else
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = l_Lean_warningAsError;
v___x_806_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_802_, v___x_805_);
lean_dec_ref(v_opts_802_);
v___y_793_ = v___y_797_;
v___y_794_ = v___y_797_;
v___y_795_ = v___x_806_;
goto v___jp_792_;
}
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; 
lean_dec_ref(v_msgData_666_);
v___x_807_ = lean_box(0);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object* v_ref_811_, lean_object* v_msgData_812_, lean_object* v_severity_813_, lean_object* v_isSilent_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
uint8_t v_severity_boxed_818_; uint8_t v_isSilent_boxed_819_; lean_object* v_res_820_; 
v_severity_boxed_818_ = lean_unbox(v_severity_813_);
v_isSilent_boxed_819_ = lean_unbox(v_isSilent_814_);
v_res_820_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_811_, v_msgData_812_, v_severity_boxed_818_, v_isSilent_boxed_819_, v___y_815_, v___y_816_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v_ref_811_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object* v_msgData_821_, uint8_t v_severity_822_, uint8_t v_isSilent_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_Elab_Command_getRef___redArg(v___y_824_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_829_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_a_828_, v_msgData_821_, v_severity_822_, v_isSilent_823_, v___y_824_, v___y_825_);
lean_dec(v_a_828_);
return v___x_829_;
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_dec_ref(v_msgData_821_);
v_a_830_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_827_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_827_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object* v_msgData_838_, lean_object* v_severity_839_, lean_object* v_isSilent_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
uint8_t v_severity_boxed_844_; uint8_t v_isSilent_boxed_845_; lean_object* v_res_846_; 
v_severity_boxed_844_ = lean_unbox(v_severity_839_);
v_isSilent_boxed_845_ = lean_unbox(v_isSilent_840_);
v_res_846_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_838_, v_severity_boxed_844_, v_isSilent_boxed_845_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object* v_msgData_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
uint8_t v___x_851_; uint8_t v___x_852_; lean_object* v___x_853_; 
v___x_851_ = 2;
v___x_852_ = 0;
v___x_853_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_847_, v___x_851_, v___x_852_, v___y_848_, v___y_849_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v_msgData_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object* v_ref_859_, lean_object* v_msgData_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
uint8_t v___x_864_; uint8_t v___x_865_; lean_object* v___x_866_; 
v___x_864_ = 2;
v___x_865_ = 0;
v___x_866_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_859_, v_msgData_860_, v___x_864_, v___x_865_, v___y_861_, v___y_862_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object* v_ref_867_, lean_object* v_msgData_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_867_, v_msgData_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v_ref_867_);
return v_res_872_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0));
v___x_875_ = l_Lean_stringToMessageData(v___x_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object* v_ex_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
if (lean_obj_tag(v_ex_876_) == 0)
{
lean_object* v_ref_880_; lean_object* v_msg_881_; lean_object* v___x_882_; 
v_ref_880_ = lean_ctor_get(v_ex_876_, 0);
lean_inc(v_ref_880_);
v_msg_881_ = lean_ctor_get(v_ex_876_, 1);
lean_inc_ref(v_msg_881_);
lean_dec_ref_known(v_ex_876_, 2);
v___x_882_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_880_, v_msg_881_, v___y_877_, v___y_878_);
lean_dec(v_ref_880_);
return v___x_882_;
}
else
{
lean_object* v_id_883_; uint8_t v___y_885_; uint8_t v___x_907_; 
v_id_883_ = lean_ctor_get(v_ex_876_, 0);
lean_inc(v_id_883_);
v___x_907_ = l_Lean_Elab_isAbortExceptionId(v_id_883_);
if (v___x_907_ == 0)
{
uint8_t v___x_908_; 
v___x_908_ = l_Lean_Exception_isInterrupt(v_ex_876_);
lean_dec_ref_known(v_ex_876_, 2);
v___y_885_ = v___x_908_;
goto v___jp_884_;
}
else
{
lean_dec_ref_known(v_ex_876_, 2);
v___y_885_ = v___x_907_;
goto v___jp_884_;
}
v___jp_884_:
{
if (v___y_885_ == 0)
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_InternalExceptionId_getName(v_id_883_);
lean_dec(v_id_883_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v___x_888_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1);
v___x_889_ = l_Lean_MessageData_ofName(v_a_887_);
v___x_890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v___x_890_, v___y_877_, v___y_878_);
return v___x_891_;
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_904_; 
v_a_892_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_904_ == 0)
{
v___x_894_ = v___x_886_;
v_isShared_895_ = v_isSharedCheck_904_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_886_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_904_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v_ref_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v_ref_896_ = lean_ctor_get(v___y_877_, 7);
v___x_897_ = lean_io_error_to_string(v_a_892_);
v___x_898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
v___x_899_ = l_Lean_MessageData_ofFormat(v___x_898_);
lean_inc(v_ref_896_);
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v_ref_896_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_900_);
v___x_902_ = v___x_894_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_900_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
else
{
lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec(v_id_883_);
v___x_905_ = lean_box(0);
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object* v_ex_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_ex_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object* v_x_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v___x_918_; 
lean_inc(v___y_916_);
lean_inc_ref(v___y_915_);
v___x_918_ = lean_apply_3(v_x_914_, v___y_915_, v___y_916_, lean_box(0));
if (lean_obj_tag(v___x_918_) == 0)
{
return v___x_918_;
}
else
{
lean_object* v_a_919_; uint8_t v___x_920_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
v___x_920_ = l_Lean_Exception_isInterrupt(v_a_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; 
lean_dec_ref_known(v___x_918_, 1);
v___x_921_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_a_919_, v___y_915_, v___y_916_);
return v___x_921_;
}
else
{
lean_dec(v_a_919_);
return v___x_918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object* v_x_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_x_922_, v___y_923_, v___y_924_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object* v___f_927_, lean_object* v___x_928_, lean_object* v_val_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_a_933_; lean_object* v___x_935_; 
v___x_935_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v___f_927_, v___x_928_, v_val_929_);
if (lean_obj_tag(v___x_935_) == 0)
{
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v_a_933_ = v_a_936_;
goto v___jp_932_;
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
v_a_937_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_935_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_935_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_object* v___x_945_; 
lean_dec_ref_known(v___x_935_, 1);
v___x_945_ = lean_box(0);
v_a_933_ = v___x_945_;
goto v___jp_932_;
}
v___jp_932_:
{
lean_object* v___x_934_; 
v___x_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_934_, 0, v_a_933_);
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object* v___f_946_, lean_object* v___x_947_, lean_object* v_val_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(v___f_946_, v___x_947_, v_val_948_, v___y_949_);
lean_dec_ref(v___y_949_);
lean_dec(v_val_948_);
lean_dec_ref(v___x_947_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object* v_h_952_, lean_object* v_x_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_956_ = lean_get_set_stderr(v_h_952_);
lean_inc_ref(v___y_954_);
v___x_957_ = lean_apply_2(v_x_953_, v___y_954_, lean_box(0));
v___x_958_ = lean_get_set_stderr(v___x_956_);
lean_dec_ref(v___x_958_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object* v_h_959_, lean_object* v_x_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_959_, v_x_960_, v___y_961_);
lean_dec_ref(v___y_961_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object* v_00_u03b1_964_, lean_object* v_h_965_, lean_object* v_x_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_965_, v_x_966_, v___y_967_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object* v_00_u03b1_970_, lean_object* v_h_971_, lean_object* v_x_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(v_00_u03b1_970_, v_h_971_, v_x_972_, v___y_973_);
lean_dec_ref(v___y_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object* v_h_976_, lean_object* v_x_977_, lean_object* v___y_978_){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_980_ = lean_get_set_stdin(v_h_976_);
lean_inc_ref(v___y_978_);
v___x_981_ = lean_apply_2(v_x_977_, v___y_978_, lean_box(0));
v___x_982_ = lean_get_set_stdin(v___x_980_);
lean_dec_ref(v___x_982_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object* v_h_983_, lean_object* v_x_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_983_, v_x_984_, v___y_985_);
lean_dec_ref(v___y_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object* v_msg_988_){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_990_ = lean_panic_fn_borrowed(v___x_989_, v_msg_988_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object* v_h_991_, lean_object* v_x_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_995_ = lean_get_set_stdout(v_h_991_);
lean_inc_ref(v___y_993_);
v___x_996_ = lean_apply_2(v_x_992_, v___y_993_, lean_box(0));
v___x_997_ = lean_get_set_stdout(v___x_995_);
lean_dec_ref(v___x_997_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object* v_h_998_, lean_object* v_x_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_998_, v_x_999_, v___y_1000_);
lean_dec_ref(v___y_1000_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object* v_00_u03b1_1003_, lean_object* v_h_1004_, lean_object* v_x_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_1004_, v_x_1005_, v___y_1006_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1009_, lean_object* v_h_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(v_00_u03b1_1009_, v_h_1010_, v_x_1011_, v___y_1012_);
lean_dec_ref(v___y_1012_);
return v_res_1014_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = l_ByteArray_empty;
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1021_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3));
v___x_1022_ = lean_unsigned_to_nat(46u);
v___x_1023_ = lean_unsigned_to_nat(193u);
v___x_1024_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2));
v___x_1025_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1));
v___x_1026_ = l_mkPanicMessageWithDecl(v___x_1025_, v___x_1024_, v___x_1023_, v___x_1022_, v___x_1021_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object* v_x_1027_, uint8_t v_isolateStderr_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___y_1041_; 
v___x_1035_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0);
v___x_1036_ = lean_st_mk_ref(v___x_1035_);
v___x_1037_ = lean_st_mk_ref(v___x_1035_);
v___x_1038_ = l_IO_FS_Stream_ofBuffer(v___x_1036_);
lean_inc(v___x_1037_);
v___x_1039_ = l_IO_FS_Stream_ofBuffer(v___x_1037_);
if (v_isolateStderr_1028_ == 0)
{
v___y_1041_ = v_x_1027_;
goto v___jp_1040_;
}
else
{
lean_object* v___x_1050_; 
lean_inc_ref(v___x_1039_);
v___x_1050_ = lean_alloc_closure((void*)(l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed), 5, 3);
lean_closure_set(v___x_1050_, 0, lean_box(0));
lean_closure_set(v___x_1050_, 1, v___x_1039_);
lean_closure_set(v___x_1050_, 2, v_x_1027_);
v___y_1041_ = v___x_1050_;
goto v___jp_1040_;
}
v___jp_1031_:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___y_1033_);
lean_ctor_set(v___x_1034_, 1, v___y_1032_);
return v___x_1034_;
}
v___jp_1040_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v_data_1045_; uint8_t v___x_1046_; 
v___x_1042_ = lean_alloc_closure((void*)(l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed), 5, 3);
lean_closure_set(v___x_1042_, 0, lean_box(0));
lean_closure_set(v___x_1042_, 1, v___x_1039_);
lean_closure_set(v___x_1042_, 2, v___y_1041_);
v___x_1043_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v___x_1038_, v___x_1042_, v___y_1029_);
v___x_1044_ = lean_st_ref_get(v___x_1037_);
lean_dec(v___x_1037_);
v_data_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc_ref(v_data_1045_);
lean_dec(v___x_1044_);
v___x_1046_ = lean_string_validate_utf8(v_data_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec_ref(v_data_1045_);
v___x_1047_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4);
v___x_1048_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(v___x_1047_);
v___y_1032_ = v___x_1043_;
v___y_1033_ = v___x_1048_;
goto v___jp_1031_;
}
else
{
lean_object* v___x_1049_; 
v___x_1049_ = lean_string_from_utf8_unchecked(v_data_1045_);
v___y_1032_ = v___x_1043_;
v___y_1033_ = v___x_1049_;
goto v___jp_1031_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object* v_x_1051_, lean_object* v_isolateStderr_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
uint8_t v_isolateStderr_boxed_1055_; lean_object* v_res_1056_; 
v_isolateStderr_boxed_1055_ = lean_unbox(v_isolateStderr_1052_);
v_res_1056_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1051_, v_isolateStderr_boxed_1055_, v___y_1053_);
lean_dec_ref(v___y_1053_);
return v_res_1056_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_1059_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11);
v___x_1060_ = l_Lean_Name_str___override(v___x_1059_, v___x_1058_);
return v___x_1060_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1062_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2));
v___x_1063_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1);
v___x_1064_ = l_Lean_Name_str___override(v___x_1063_, v___x_1062_);
return v___x_1064_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4(void){
_start:
{
uint8_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1065_ = 1;
v___x_1066_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3);
v___x_1067_ = l_Lean_Name_toString(v___x_1066_, v___x_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object* v_stx_1068_, lean_object* v_cmds_1069_, lean_object* v_cmdState_1070_, lean_object* v_beginPos_1071_, lean_object* v_snap_1072_, lean_object* v_cancelTk_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v_env_1076_; lean_object* v_scopes_1077_; lean_object* v_usedQuotCtxts_1078_; lean_object* v_nextMacroScope_1079_; lean_object* v_maxRecDepth_1080_; lean_object* v_ngen_1081_; lean_object* v_auxDeclNGen_1082_; lean_object* v_infoState_1083_; lean_object* v_prevLinterStates_1084_; lean_object* v_codeQualityEntryTasks_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1167_; 
v_env_1076_ = lean_ctor_get(v_cmdState_1070_, 0);
v_scopes_1077_ = lean_ctor_get(v_cmdState_1070_, 2);
v_usedQuotCtxts_1078_ = lean_ctor_get(v_cmdState_1070_, 3);
v_nextMacroScope_1079_ = lean_ctor_get(v_cmdState_1070_, 4);
v_maxRecDepth_1080_ = lean_ctor_get(v_cmdState_1070_, 5);
v_ngen_1081_ = lean_ctor_get(v_cmdState_1070_, 6);
v_auxDeclNGen_1082_ = lean_ctor_get(v_cmdState_1070_, 7);
v_infoState_1083_ = lean_ctor_get(v_cmdState_1070_, 8);
v_prevLinterStates_1084_ = lean_ctor_get(v_cmdState_1070_, 11);
v_codeQualityEntryTasks_1085_ = lean_ctor_get(v_cmdState_1070_, 12);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_cmdState_1070_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; lean_object* v_unused_1169_; lean_object* v_unused_1170_; 
v_unused_1168_ = lean_ctor_get(v_cmdState_1070_, 10);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v_cmdState_1070_, 9);
lean_dec(v_unused_1169_);
v_unused_1170_ = lean_ctor_get(v_cmdState_1070_, 1);
lean_dec(v_unused_1170_);
v___x_1087_ = v_cmdState_1070_;
v_isShared_1088_ = v_isSharedCheck_1167_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1085_);
lean_inc(v_prevLinterStates_1084_);
lean_inc(v_infoState_1083_);
lean_inc(v_auxDeclNGen_1082_);
lean_inc(v_ngen_1081_);
lean_inc(v_maxRecDepth_1080_);
lean_inc(v_nextMacroScope_1079_);
lean_inc(v_usedQuotCtxts_1078_);
lean_inc(v_scopes_1077_);
lean_inc(v_env_1076_);
lean_dec(v_cmdState_1070_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1167_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___f_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___f_1089_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1089_, 0, v_stx_1068_);
lean_closure_set(v___f_1089_, 1, v_cmds_1069_);
v___x_1090_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1091_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
v___x_1092_ = l_List_head_x21___redArg(v___x_1090_, v_scopes_1077_);
v___x_1093_ = l_Lean_MessageLog_empty;
v___x_1094_ = lean_unsigned_to_nat(0u);
v___x_1095_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_1096_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 10, v___x_1096_);
lean_ctor_set(v___x_1087_, 9, v___x_1095_);
lean_ctor_set(v___x_1087_, 1, v___x_1093_);
v___x_1098_ = v___x_1087_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_env_1076_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1093_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_scopes_1077_);
lean_ctor_set(v_reuseFailAlloc_1166_, 3, v_usedQuotCtxts_1078_);
lean_ctor_set(v_reuseFailAlloc_1166_, 4, v_nextMacroScope_1079_);
lean_ctor_set(v_reuseFailAlloc_1166_, 5, v_maxRecDepth_1080_);
lean_ctor_set(v_reuseFailAlloc_1166_, 6, v_ngen_1081_);
lean_ctor_set(v_reuseFailAlloc_1166_, 7, v_auxDeclNGen_1082_);
lean_ctor_set(v_reuseFailAlloc_1166_, 8, v_infoState_1083_);
lean_ctor_set(v_reuseFailAlloc_1166_, 9, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1166_, 10, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1166_, 11, v_prevLinterStates_1084_);
lean_ctor_set(v_reuseFailAlloc_1166_, 12, v_codeQualityEntryTasks_1085_);
v___x_1098_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_1099_; lean_object* v_toProcessingContext_1100_; lean_object* v_fileName_1101_; lean_object* v_fileMap_1102_; lean_object* v_opts_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; lean_object* v_env_1111_; lean_object* v_scopes_1112_; lean_object* v_usedQuotCtxts_1113_; lean_object* v_nextMacroScope_1114_; lean_object* v_maxRecDepth_1115_; lean_object* v_ngen_1116_; lean_object* v_auxDeclNGen_1117_; lean_object* v_infoState_1118_; lean_object* v_traceState_1119_; lean_object* v_snapshotTasks_1120_; lean_object* v_prevLinterStates_1121_; lean_object* v_codeQualityEntryTasks_1122_; uint8_t v___y_1123_; lean_object* v_messages_1124_; lean_object* v___y_1133_; 
v___x_1099_ = lean_st_mk_ref(v___x_1098_);
v_toProcessingContext_1100_ = lean_ctor_get(v_a_1074_, 0);
v_fileName_1101_ = lean_ctor_get(v_toProcessingContext_1100_, 1);
v_fileMap_1102_ = lean_ctor_get(v_toProcessingContext_1100_, 2);
v_opts_1103_ = lean_ctor_get(v___x_1092_, 1);
lean_inc_ref(v_opts_1103_);
lean_dec(v___x_1092_);
v___x_1104_ = lean_box(0);
v___x_1105_ = lean_box(0);
v___x_1106_ = l_Lean_firstFrontendMacroScope;
v___x_1107_ = lean_box(0);
v___x_1108_ = l_Lean_internal_cmdlineSnapshots;
v___x_1109_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1103_, v___x_1108_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1165_; 
lean_inc_ref(v_snap_1072_);
v___x_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1165_, 0, v_snap_1072_);
v___y_1133_ = v___x_1165_;
goto v___jp_1132_;
}
else
{
v___y_1133_ = v___x_1105_;
goto v___jp_1132_;
}
v___jp_1110_:
{
lean_object* v_new_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v_new_1125_ = lean_ctor_get(v_snap_1072_, 1);
lean_inc(v_new_1125_);
lean_dec_ref(v_snap_1072_);
v___x_1126_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1126_, 0, v_env_1111_);
lean_ctor_set(v___x_1126_, 1, v_messages_1124_);
lean_ctor_set(v___x_1126_, 2, v_scopes_1112_);
lean_ctor_set(v___x_1126_, 3, v_usedQuotCtxts_1113_);
lean_ctor_set(v___x_1126_, 4, v_nextMacroScope_1114_);
lean_ctor_set(v___x_1126_, 5, v_maxRecDepth_1115_);
lean_ctor_set(v___x_1126_, 6, v_ngen_1116_);
lean_ctor_set(v___x_1126_, 7, v_auxDeclNGen_1117_);
lean_ctor_set(v___x_1126_, 8, v_infoState_1118_);
lean_ctor_set(v___x_1126_, 9, v_traceState_1119_);
lean_ctor_set(v___x_1126_, 10, v_snapshotTasks_1120_);
lean_ctor_set(v___x_1126_, 11, v_prevLinterStates_1121_);
lean_ctor_set(v___x_1126_, 12, v_codeQualityEntryTasks_1122_);
v___x_1127_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4);
v___x_1128_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_1129_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1129_, 0, v___x_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
lean_ctor_set(v___x_1129_, 2, v___x_1105_);
lean_ctor_set(v___x_1129_, 3, v___x_1095_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*4, v___y_1123_);
v___x_1130_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(v___x_1091_, v___x_1129_);
v___x_1131_ = lean_io_promise_resolve(v___x_1130_, v_new_1125_);
lean_dec(v_new_1125_);
return v___x_1126_;
}
v___jp_1132_:
{
lean_object* v___x_1134_; uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___f_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v_fst_1141_; lean_object* v___x_1142_; lean_object* v_env_1143_; lean_object* v_messages_1144_; lean_object* v_scopes_1145_; lean_object* v_usedQuotCtxts_1146_; lean_object* v_nextMacroScope_1147_; lean_object* v_maxRecDepth_1148_; lean_object* v_ngen_1149_; lean_object* v_auxDeclNGen_1150_; lean_object* v_infoState_1151_; lean_object* v_traceState_1152_; lean_object* v_snapshotTasks_1153_; lean_object* v_prevLinterStates_1154_; lean_object* v_codeQualityEntryTasks_1155_; lean_object* v___x_1156_; uint8_t v___x_1157_; 
v___x_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1134_, 0, v_cancelTk_1073_);
v___x_1135_ = 0;
lean_inc(v_beginPos_1071_);
lean_inc_ref(v_fileMap_1102_);
lean_inc_ref(v_fileName_1101_);
v___x_1136_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1136_, 0, v_fileName_1101_);
lean_ctor_set(v___x_1136_, 1, v_fileMap_1102_);
lean_ctor_set(v___x_1136_, 2, v___x_1094_);
lean_ctor_set(v___x_1136_, 3, v_beginPos_1071_);
lean_ctor_set(v___x_1136_, 4, v___x_1104_);
lean_ctor_set(v___x_1136_, 5, v___x_1105_);
lean_ctor_set(v___x_1136_, 6, v___x_1106_);
lean_ctor_set(v___x_1136_, 7, v___x_1107_);
lean_ctor_set(v___x_1136_, 8, v___y_1133_);
lean_ctor_set(v___x_1136_, 9, v___x_1134_);
lean_ctor_set_uint8(v___x_1136_, sizeof(void*)*10, v___x_1135_);
lean_inc(v___x_1099_);
v___f_1137_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1137_, 0, v___f_1089_);
lean_closure_set(v___f_1137_, 1, v___x_1136_);
lean_closure_set(v___f_1137_, 2, v___x_1099_);
v___x_1138_ = l_Lean_Core_stderrAsMessages;
v___x_1139_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1103_, v___x_1138_);
lean_dec_ref(v_opts_1103_);
v___x_1140_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v___f_1137_, v___x_1139_, v_a_1074_);
v_fst_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_fst_1141_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = lean_st_ref_get(v___x_1099_);
lean_dec(v___x_1099_);
v_env_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc_ref(v_env_1143_);
v_messages_1144_ = lean_ctor_get(v___x_1142_, 1);
lean_inc_ref(v_messages_1144_);
v_scopes_1145_ = lean_ctor_get(v___x_1142_, 2);
lean_inc(v_scopes_1145_);
v_usedQuotCtxts_1146_ = lean_ctor_get(v___x_1142_, 3);
lean_inc(v_usedQuotCtxts_1146_);
v_nextMacroScope_1147_ = lean_ctor_get(v___x_1142_, 4);
lean_inc(v_nextMacroScope_1147_);
v_maxRecDepth_1148_ = lean_ctor_get(v___x_1142_, 5);
lean_inc(v_maxRecDepth_1148_);
v_ngen_1149_ = lean_ctor_get(v___x_1142_, 6);
lean_inc_ref(v_ngen_1149_);
v_auxDeclNGen_1150_ = lean_ctor_get(v___x_1142_, 7);
lean_inc_ref(v_auxDeclNGen_1150_);
v_infoState_1151_ = lean_ctor_get(v___x_1142_, 8);
lean_inc_ref(v_infoState_1151_);
v_traceState_1152_ = lean_ctor_get(v___x_1142_, 9);
lean_inc_ref(v_traceState_1152_);
v_snapshotTasks_1153_ = lean_ctor_get(v___x_1142_, 10);
lean_inc_ref(v_snapshotTasks_1153_);
v_prevLinterStates_1154_ = lean_ctor_get(v___x_1142_, 11);
lean_inc(v_prevLinterStates_1154_);
v_codeQualityEntryTasks_1155_ = lean_ctor_get(v___x_1142_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1155_);
lean_dec(v___x_1142_);
v___x_1156_ = lean_string_utf8_byte_size(v_fst_1141_);
v___x_1157_ = lean_nat_dec_eq(v___x_1156_, v___x_1094_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; uint8_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
lean_inc_ref(v_fileMap_1102_);
v___x_1158_ = l_Lean_FileMap_toPosition(v_fileMap_1102_, v_beginPos_1071_);
lean_dec(v_beginPos_1071_);
v___x_1159_ = 0;
v___x_1160_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1161_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_fst_1141_);
v___x_1162_ = l_Lean_MessageData_ofFormat(v___x_1161_);
lean_inc_ref(v_fileName_1101_);
v___x_1163_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1163_, 0, v_fileName_1101_);
lean_ctor_set(v___x_1163_, 1, v___x_1158_);
lean_ctor_set(v___x_1163_, 2, v___x_1105_);
lean_ctor_set(v___x_1163_, 3, v___x_1160_);
lean_ctor_set(v___x_1163_, 4, v___x_1162_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*5, v___x_1135_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*5 + 1, v___x_1159_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*5 + 2, v___x_1135_);
v___x_1164_ = l_Lean_MessageLog_add(v___x_1163_, v_messages_1144_);
v_env_1111_ = v_env_1143_;
v_scopes_1112_ = v_scopes_1145_;
v_usedQuotCtxts_1113_ = v_usedQuotCtxts_1146_;
v_nextMacroScope_1114_ = v_nextMacroScope_1147_;
v_maxRecDepth_1115_ = v_maxRecDepth_1148_;
v_ngen_1116_ = v_ngen_1149_;
v_auxDeclNGen_1117_ = v_auxDeclNGen_1150_;
v_infoState_1118_ = v_infoState_1151_;
v_traceState_1119_ = v_traceState_1152_;
v_snapshotTasks_1120_ = v_snapshotTasks_1153_;
v_prevLinterStates_1121_ = v_prevLinterStates_1154_;
v_codeQualityEntryTasks_1122_ = v_codeQualityEntryTasks_1155_;
v___y_1123_ = v___x_1135_;
v_messages_1124_ = v___x_1164_;
goto v___jp_1110_;
}
else
{
lean_dec(v_fst_1141_);
lean_dec(v_beginPos_1071_);
v_env_1111_ = v_env_1143_;
v_scopes_1112_ = v_scopes_1145_;
v_usedQuotCtxts_1113_ = v_usedQuotCtxts_1146_;
v_nextMacroScope_1114_ = v_nextMacroScope_1147_;
v_maxRecDepth_1115_ = v_maxRecDepth_1148_;
v_ngen_1116_ = v_ngen_1149_;
v_auxDeclNGen_1117_ = v_auxDeclNGen_1150_;
v_infoState_1118_ = v_infoState_1151_;
v_traceState_1119_ = v_traceState_1152_;
v_snapshotTasks_1120_ = v_snapshotTasks_1153_;
v_prevLinterStates_1121_ = v_prevLinterStates_1154_;
v_codeQualityEntryTasks_1122_ = v_codeQualityEntryTasks_1155_;
v___y_1123_ = v___x_1135_;
v_messages_1124_ = v_messages_1144_;
goto v___jp_1110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object* v_stx_1171_, lean_object* v_cmds_1172_, lean_object* v_cmdState_1173_, lean_object* v_beginPos_1174_, lean_object* v_snap_1175_, lean_object* v_cancelTk_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_stx_1171_, v_cmds_1172_, v_cmdState_1173_, v_beginPos_1174_, v_snap_1175_, v_cancelTk_1176_, v_a_1177_);
lean_dec_ref(v_a_1177_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object* v_00_u03b1_1180_, lean_object* v_h_1181_, lean_object* v_x_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_1181_, v_x_1182_, v___y_1183_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1186_, lean_object* v_h_1187_, lean_object* v_x_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(v_00_u03b1_1186_, v_h_1187_, v_x_1188_, v___y_1189_);
lean_dec_ref(v___y_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object* v_00_u03b1_1192_, lean_object* v_x_1193_, uint8_t v_isolateStderr_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1193_, v_isolateStderr_1194_, v___y_1195_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object* v_00_u03b1_1198_, lean_object* v_x_1199_, lean_object* v_isolateStderr_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
uint8_t v_isolateStderr_boxed_1203_; lean_object* v_res_1204_; 
v_isolateStderr_boxed_1203_ = lean_unbox(v_isolateStderr_1200_);
v_res_1204_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(v_00_u03b1_1198_, v_x_1199_, v_isolateStderr_boxed_1203_, v___y_1201_);
lean_dec_ref(v___y_1201_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object* v_msgData_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_1205_, v___y_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object* v_msgData_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(v_msgData_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object* v_a_1215_){
_start:
{
lean_object* v_toSnapshotTreeM_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v_toSnapshotTreeM_1216_ = lean_ctor_get(v_a_1215_, 1);
lean_inc_ref(v_toSnapshotTreeM_1216_);
lean_dec_ref(v_a_1215_);
v___x_1217_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1218_ = lean_apply_1(v_toSnapshotTreeM_1216_, v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object* v_a_1219_){
_start:
{
lean_object* v_toSnapshot_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1230_; 
v_toSnapshot_1220_ = lean_ctor_get(v_a_1219_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_a_1219_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; 
v_unused_1231_ = lean_ctor_get(v_a_1219_, 1);
lean_dec(v_unused_1231_);
v___x_1222_ = v_a_1219_;
v_isShared_1223_ = v_isSharedCheck_1230_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_toSnapshot_1220_);
lean_dec(v_a_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1230_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1224_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1225_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_1220_, v___x_1224_);
v___x_1226_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 1, v___x_1226_);
lean_ctor_set(v___x_1222_, 0, v___x_1225_);
v___x_1228_ = v___x_1222_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1225_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object* v_a_1232_){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1233_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1234_ = l_Lean_Language_Snapshot_transform(v_a_1232_, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1234_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object* v_opts_1237_, lean_object* v_opt_1238_){
_start:
{
lean_object* v_name_1239_; lean_object* v_defValue_1240_; lean_object* v_map_1241_; lean_object* v___x_1242_; 
v_name_1239_ = lean_ctor_get(v_opt_1238_, 0);
v_defValue_1240_ = lean_ctor_get(v_opt_1238_, 1);
v_map_1241_ = lean_ctor_get(v_opts_1237_, 0);
v___x_1242_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1241_, v_name_1239_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_inc(v_defValue_1240_);
return v_defValue_1240_;
}
else
{
lean_object* v_val_1243_; 
v_val_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_val_1243_);
lean_dec_ref_known(v___x_1242_, 1);
if (lean_obj_tag(v_val_1243_) == 3)
{
lean_object* v_v_1244_; 
v_v_1244_ = lean_ctor_get(v_val_1243_, 0);
lean_inc(v_v_1244_);
lean_dec_ref_known(v_val_1243_, 1);
return v_v_1244_;
}
else
{
lean_dec(v_val_1243_);
lean_inc(v_defValue_1240_);
return v_defValue_1240_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object* v_opts_1245_, lean_object* v_opt_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1245_, v_opt_1246_);
lean_dec_ref(v_opt_1246_);
lean_dec_ref(v_opts_1245_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object* v_a_1248_){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1250_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_1248_, v___x_1249_);
return v___x_1250_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1257_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1258_ = l_Lean_Name_append(v___x_1257_, v___x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object* v___x_1259_, lean_object* v___x_1260_, uint8_t v_val_1261_, lean_object* v_val_1262_, lean_object* v_val_1263_, lean_object* v___x_1264_, lean_object* v___x_1265_, uint8_t v___x_1266_, lean_object* v_a_1267_, lean_object* v_pos_1268_, lean_object* v___x_1269_, lean_object* v_infoSt_1270_){
_start:
{
lean_object* v___y_1273_; lean_object* v_msgLog_1274_; lean_object* v___y_1280_; lean_object* v_trees_1312_; lean_object* v_size_1313_; uint8_t v___x_1314_; 
v_trees_1312_ = lean_ctor_get(v_infoSt_1270_, 2);
v_size_1313_ = lean_ctor_get(v_trees_1312_, 2);
v___x_1314_ = lean_nat_dec_lt(v___x_1265_, v_size_1313_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; 
v___x_1315_ = l_outOfBounds___redArg(v___x_1269_);
v___y_1280_ = v___x_1315_;
goto v___jp_1279_;
}
else
{
lean_object* v___x_1316_; 
v___x_1316_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1269_, v_trees_1312_, v___x_1265_);
v___y_1280_ = v___x_1316_;
goto v___jp_1279_;
}
v___jp_1272_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1275_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_msgLog_1274_);
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___y_1273_);
v___x_1277_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1277_, 0, v___x_1259_);
lean_ctor_set(v___x_1277_, 1, v___x_1275_);
lean_ctor_set(v___x_1277_, 2, v___x_1276_);
lean_ctor_set(v___x_1277_, 3, v___x_1260_);
lean_ctor_set_uint8(v___x_1277_, sizeof(void*)*4, v_val_1261_);
v___x_1278_ = lean_io_promise_resolve(v___x_1277_, v_val_1262_);
return v___x_1278_;
}
v___jp_1279_:
{
lean_object* v_scopes_1281_; lean_object* v___x_1282_; lean_object* v_opts_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v_hasTrace_1287_; 
v_scopes_1281_ = lean_ctor_get(v_val_1263_, 2);
v___x_1282_ = l_List_head_x21___redArg(v___x_1264_, v_scopes_1281_);
v_opts_1283_ = lean_ctor_get(v___x_1282_, 1);
lean_inc_ref(v_opts_1283_);
lean_dec(v___x_1282_);
v___x_1284_ = l_Lean_MessageLog_empty;
v___x_1285_ = l_Lean_inheritedTraceOptions;
v___x_1286_ = lean_st_ref_get(v___x_1285_);
v_hasTrace_1287_ = lean_ctor_get_uint8(v_opts_1283_, sizeof(void*)*1);
if (v_hasTrace_1287_ == 0)
{
lean_dec(v___x_1286_);
lean_dec_ref(v_opts_1283_);
lean_dec(v___x_1265_);
v___y_1273_ = v___y_1280_;
v_msgLog_1274_ = v___x_1284_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1288_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1289_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1290_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3);
v___x_1291_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1286_, v_opts_1283_, v___x_1290_);
lean_dec_ref(v_opts_1283_);
lean_dec(v___x_1286_);
if (v___x_1291_ == 0)
{
lean_dec(v___x_1265_);
v___y_1273_ = v___y_1280_;
v_msgLog_1274_ = v___x_1284_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_box(0);
lean_inc_ref(v___y_1280_);
v___x_1293_ = l_Lean_Elab_InfoTree_format(v___y_1280_, v___x_1292_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; double v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v_toProcessingContext_1298_; lean_object* v_fileName_1299_; lean_object* v_fileMap_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
lean_dec_ref_known(v___x_1293_, 1);
v___x_1295_ = lean_float_of_nat(v___x_1265_);
v___x_1296_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1297_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1297_, 0, v___x_1288_);
lean_ctor_set(v___x_1297_, 1, v___x_1292_);
lean_ctor_set(v___x_1297_, 2, v___x_1296_);
lean_ctor_set_float(v___x_1297_, sizeof(void*)*3, v___x_1295_);
lean_ctor_set_float(v___x_1297_, sizeof(void*)*3 + 8, v___x_1295_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*3 + 16, v___x_1266_);
v_toProcessingContext_1298_ = lean_ctor_get(v_a_1267_, 0);
v_fileName_1299_ = lean_ctor_get(v_toProcessingContext_1298_, 1);
v_fileMap_1300_ = lean_ctor_get(v_toProcessingContext_1298_, 2);
v___x_1301_ = l_Lean_MessageData_nil;
v___x_1302_ = l_Lean_MessageData_ofFormat(v_a_1294_);
v___x_1303_ = lean_unsigned_to_nat(1u);
v___x_1304_ = lean_mk_empty_array_with_capacity(v___x_1303_);
v___x_1305_ = lean_array_push(v___x_1304_, v___x_1302_);
v___x_1306_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1297_);
lean_ctor_set(v___x_1306_, 1, v___x_1301_);
lean_ctor_set(v___x_1306_, 2, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1289_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
lean_inc_ref(v_fileMap_1300_);
v___x_1308_ = l_Lean_FileMap_toPosition(v_fileMap_1300_, v_pos_1268_);
v___x_1309_ = 0;
lean_inc_ref(v_fileName_1299_);
v___x_1310_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1310_, 0, v_fileName_1299_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
lean_ctor_set(v___x_1310_, 2, v___x_1292_);
lean_ctor_set(v___x_1310_, 3, v___x_1296_);
lean_ctor_set(v___x_1310_, 4, v___x_1307_);
lean_ctor_set_uint8(v___x_1310_, sizeof(void*)*5, v_val_1261_);
lean_ctor_set_uint8(v___x_1310_, sizeof(void*)*5 + 1, v___x_1309_);
lean_ctor_set_uint8(v___x_1310_, sizeof(void*)*5 + 2, v_val_1261_);
v___x_1311_ = l_Lean_MessageLog_add(v___x_1310_, v___x_1284_);
v___y_1273_ = v___y_1280_;
v_msgLog_1274_ = v___x_1311_;
goto v___jp_1272_;
}
else
{
lean_dec_ref_known(v___x_1293_, 1);
lean_dec(v___x_1265_);
v___y_1273_ = v___y_1280_;
v_msgLog_1274_ = v___x_1284_;
goto v___jp_1272_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object* v___x_1317_, lean_object* v___x_1318_, lean_object* v_val_1319_, lean_object* v_val_1320_, lean_object* v_val_1321_, lean_object* v___x_1322_, lean_object* v___x_1323_, lean_object* v___x_1324_, lean_object* v_a_1325_, lean_object* v_pos_1326_, lean_object* v___x_1327_, lean_object* v_infoSt_1328_, lean_object* v___y_1329_){
_start:
{
uint8_t v_val_35233__boxed_1330_; uint8_t v___x_35238__boxed_1331_; lean_object* v_res_1332_; 
v_val_35233__boxed_1330_ = lean_unbox(v_val_1319_);
v___x_35238__boxed_1331_ = lean_unbox(v___x_1324_);
v_res_1332_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(v___x_1317_, v___x_1318_, v_val_35233__boxed_1330_, v_val_1320_, v_val_1321_, v___x_1322_, v___x_1323_, v___x_35238__boxed_1331_, v_a_1325_, v_pos_1326_, v___x_1327_, v_infoSt_1328_);
lean_dec_ref(v_infoSt_1328_);
lean_dec_ref(v___x_1327_);
lean_dec(v_pos_1326_);
lean_dec_ref(v_a_1325_);
lean_dec_ref(v___x_1322_);
lean_dec_ref(v_val_1321_);
lean_dec(v_val_1320_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object* v___x_1333_, lean_object* v___x_1334_, lean_object* v___x_1335_, uint8_t v_val_1336_, lean_object* v_as_1337_, size_t v_sz_1338_, size_t v_i_1339_, lean_object* v_b_1340_){
_start:
{
uint8_t v___x_1342_; 
v___x_1342_ = lean_usize_dec_lt(v_i_1339_, v_sz_1338_);
if (v___x_1342_ == 0)
{
lean_dec_ref(v___x_1335_);
lean_dec_ref(v___x_1333_);
return v_b_1340_;
}
else
{
lean_object* v_snd_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1361_; 
v_snd_1343_ = lean_ctor_get(v_b_1340_, 1);
v_isSharedCheck_1361_ = !lean_is_exclusive(v_b_1340_);
if (v_isSharedCheck_1361_ == 0)
{
lean_object* v_unused_1362_; 
v_unused_1362_ = lean_ctor_get(v_b_1340_, 0);
lean_dec(v_unused_1362_);
v___x_1345_ = v_b_1340_;
v_isShared_1346_ = v_isSharedCheck_1361_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_snd_1343_);
lean_dec(v_b_1340_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1361_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v_a_1347_; lean_object* v_msg_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1356_; 
v_a_1347_ = lean_array_uget_borrowed(v_as_1337_, v_i_1339_);
v_msg_1348_ = lean_ctor_get(v_a_1347_, 1);
v___x_1349_ = lean_box(0);
lean_inc_ref(v___x_1333_);
v___x_1350_ = l_Lean_FileMap_toPosition(v___x_1333_, v___x_1334_);
v___x_1351_ = 0;
v___x_1352_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1348_);
lean_inc_ref(v___x_1335_);
v___x_1353_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1353_, 0, v___x_1335_);
lean_ctor_set(v___x_1353_, 1, v___x_1350_);
lean_ctor_set(v___x_1353_, 2, v___x_1349_);
lean_ctor_set(v___x_1353_, 3, v___x_1352_);
lean_ctor_set(v___x_1353_, 4, v_msg_1348_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*5, v_val_1336_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*5 + 1, v___x_1351_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*5 + 2, v_val_1336_);
v___x_1354_ = l_Lean_MessageLog_add(v___x_1353_, v_snd_1343_);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 1, v___x_1354_);
lean_ctor_set(v___x_1345_, 0, v___x_1349_);
v___x_1356_ = v___x_1345_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
size_t v___x_1357_; size_t v___x_1358_; 
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_add(v_i_1339_, v___x_1357_);
v_i_1339_ = v___x_1358_;
v_b_1340_ = v___x_1356_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object* v___x_1363_, lean_object* v___x_1364_, lean_object* v___x_1365_, lean_object* v_val_1366_, lean_object* v_as_1367_, lean_object* v_sz_1368_, lean_object* v_i_1369_, lean_object* v_b_1370_, lean_object* v___y_1371_){
_start:
{
uint8_t v_val_35346__boxed_1372_; size_t v_sz_boxed_1373_; size_t v_i_boxed_1374_; lean_object* v_res_1375_; 
v_val_35346__boxed_1372_ = lean_unbox(v_val_1366_);
v_sz_boxed_1373_ = lean_unbox_usize(v_sz_1368_);
lean_dec(v_sz_1368_);
v_i_boxed_1374_ = lean_unbox_usize(v_i_1369_);
lean_dec(v_i_1369_);
v_res_1375_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1363_, v___x_1364_, v___x_1365_, v_val_35346__boxed_1372_, v_as_1367_, v_sz_boxed_1373_, v_i_boxed_1374_, v_b_1370_);
lean_dec_ref(v_as_1367_);
lean_dec(v___x_1364_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object* v___x_1376_, lean_object* v___x_1377_, lean_object* v___x_1378_, uint8_t v_val_1379_, lean_object* v_as_1380_, size_t v_sz_1381_, size_t v_i_1382_, lean_object* v_b_1383_){
_start:
{
uint8_t v___x_1385_; 
v___x_1385_ = lean_usize_dec_lt(v_i_1382_, v_sz_1381_);
if (v___x_1385_ == 0)
{
lean_dec_ref(v___x_1378_);
lean_dec_ref(v___x_1376_);
return v_b_1383_;
}
else
{
lean_object* v_snd_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1404_; 
v_snd_1386_ = lean_ctor_get(v_b_1383_, 1);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_b_1383_);
if (v_isSharedCheck_1404_ == 0)
{
lean_object* v_unused_1405_; 
v_unused_1405_ = lean_ctor_get(v_b_1383_, 0);
lean_dec(v_unused_1405_);
v___x_1388_ = v_b_1383_;
v_isShared_1389_ = v_isSharedCheck_1404_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_snd_1386_);
lean_dec(v_b_1383_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1404_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v_a_1390_; lean_object* v_msg_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1399_; 
v_a_1390_ = lean_array_uget_borrowed(v_as_1380_, v_i_1382_);
v_msg_1391_ = lean_ctor_get(v_a_1390_, 1);
v___x_1392_ = lean_box(0);
lean_inc_ref(v___x_1376_);
v___x_1393_ = l_Lean_FileMap_toPosition(v___x_1376_, v___x_1377_);
v___x_1394_ = 0;
v___x_1395_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1391_);
lean_inc_ref(v___x_1378_);
v___x_1396_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1396_, 0, v___x_1378_);
lean_ctor_set(v___x_1396_, 1, v___x_1393_);
lean_ctor_set(v___x_1396_, 2, v___x_1392_);
lean_ctor_set(v___x_1396_, 3, v___x_1395_);
lean_ctor_set(v___x_1396_, 4, v_msg_1391_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*5, v_val_1379_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*5 + 1, v___x_1394_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*5 + 2, v_val_1379_);
v___x_1397_ = l_Lean_MessageLog_add(v___x_1396_, v_snd_1386_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v___x_1397_);
lean_ctor_set(v___x_1388_, 0, v___x_1392_);
v___x_1399_ = v___x_1388_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1392_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v___x_1397_);
v___x_1399_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
size_t v___x_1400_; size_t v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = ((size_t)1ULL);
v___x_1401_ = lean_usize_add(v_i_1382_, v___x_1400_);
v___x_1402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1376_, v___x_1377_, v___x_1378_, v_val_1379_, v_as_1380_, v_sz_1381_, v___x_1401_, v___x_1399_);
return v___x_1402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object* v___x_1406_, lean_object* v___x_1407_, lean_object* v___x_1408_, lean_object* v_val_1409_, lean_object* v_as_1410_, lean_object* v_sz_1411_, lean_object* v_i_1412_, lean_object* v_b_1413_, lean_object* v___y_1414_){
_start:
{
uint8_t v_val_35398__boxed_1415_; size_t v_sz_boxed_1416_; size_t v_i_boxed_1417_; lean_object* v_res_1418_; 
v_val_35398__boxed_1415_ = lean_unbox(v_val_1409_);
v_sz_boxed_1416_ = lean_unbox_usize(v_sz_1411_);
lean_dec(v_sz_1411_);
v_i_boxed_1417_ = lean_unbox_usize(v_i_1412_);
lean_dec(v_i_1412_);
v_res_1418_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1406_, v___x_1407_, v___x_1408_, v_val_35398__boxed_1415_, v_as_1410_, v_sz_boxed_1416_, v_i_boxed_1417_, v_b_1413_);
lean_dec_ref(v_as_1410_);
lean_dec(v___x_1407_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object* v_init_1419_, lean_object* v___x_1420_, lean_object* v___x_1421_, lean_object* v___x_1422_, uint8_t v_val_1423_, lean_object* v_n_1424_, lean_object* v_b_1425_){
_start:
{
if (lean_obj_tag(v_n_1424_) == 0)
{
lean_object* v_cs_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; size_t v_sz_1430_; size_t v___x_1431_; lean_object* v___x_1432_; lean_object* v_fst_1433_; 
v_cs_1427_ = lean_ctor_get(v_n_1424_, 0);
v___x_1428_ = lean_box(0);
v___x_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set(v___x_1429_, 1, v_b_1425_);
v_sz_1430_ = lean_array_size(v_cs_1427_);
v___x_1431_ = ((size_t)0ULL);
v___x_1432_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1419_, v___x_1420_, v___x_1421_, v___x_1422_, v_val_1423_, v_cs_1427_, v_sz_1430_, v___x_1431_, v___x_1429_);
v_fst_1433_ = lean_ctor_get(v___x_1432_, 0);
lean_inc(v_fst_1433_);
if (lean_obj_tag(v_fst_1433_) == 0)
{
lean_object* v_snd_1434_; lean_object* v___x_1435_; 
v_snd_1434_ = lean_ctor_get(v___x_1432_, 1);
lean_inc(v_snd_1434_);
lean_dec_ref(v___x_1432_);
v___x_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_snd_1434_);
return v___x_1435_;
}
else
{
lean_object* v_val_1436_; 
lean_dec_ref(v___x_1432_);
v_val_1436_ = lean_ctor_get(v_fst_1433_, 0);
lean_inc(v_val_1436_);
lean_dec_ref_known(v_fst_1433_, 1);
return v_val_1436_;
}
}
else
{
lean_object* v_vs_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; size_t v_sz_1440_; size_t v___x_1441_; lean_object* v___x_1442_; lean_object* v_fst_1443_; 
v_vs_1437_ = lean_ctor_get(v_n_1424_, 0);
v___x_1438_ = lean_box(0);
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
lean_ctor_set(v___x_1439_, 1, v_b_1425_);
v_sz_1440_ = lean_array_size(v_vs_1437_);
v___x_1441_ = ((size_t)0ULL);
v___x_1442_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1420_, v___x_1421_, v___x_1422_, v_val_1423_, v_vs_1437_, v_sz_1440_, v___x_1441_, v___x_1439_);
v_fst_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_fst_1443_);
if (lean_obj_tag(v_fst_1443_) == 0)
{
lean_object* v_snd_1444_; lean_object* v___x_1445_; 
v_snd_1444_ = lean_ctor_get(v___x_1442_, 1);
lean_inc(v_snd_1444_);
lean_dec_ref(v___x_1442_);
v___x_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_snd_1444_);
return v___x_1445_;
}
else
{
lean_object* v_val_1446_; 
lean_dec_ref(v___x_1442_);
v_val_1446_ = lean_ctor_get(v_fst_1443_, 0);
lean_inc(v_val_1446_);
lean_dec_ref_known(v_fst_1443_, 1);
return v_val_1446_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object* v_init_1447_, lean_object* v___x_1448_, lean_object* v___x_1449_, lean_object* v___x_1450_, uint8_t v_val_1451_, lean_object* v_as_1452_, size_t v_sz_1453_, size_t v_i_1454_, lean_object* v_b_1455_){
_start:
{
uint8_t v___x_1457_; 
v___x_1457_ = lean_usize_dec_lt(v_i_1454_, v_sz_1453_);
if (v___x_1457_ == 0)
{
lean_dec_ref(v___x_1450_);
lean_dec_ref(v___x_1448_);
return v_b_1455_;
}
else
{
lean_object* v_snd_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1476_; 
v_snd_1458_ = lean_ctor_get(v_b_1455_, 1);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_b_1455_);
if (v_isSharedCheck_1476_ == 0)
{
lean_object* v_unused_1477_; 
v_unused_1477_ = lean_ctor_get(v_b_1455_, 0);
lean_dec(v_unused_1477_);
v___x_1460_ = v_b_1455_;
v_isShared_1461_ = v_isSharedCheck_1476_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_snd_1458_);
lean_dec(v_b_1455_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1476_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1462_; lean_object* v_a_1463_; lean_object* v___x_1464_; 
v___x_1462_ = lean_box(0);
v_a_1463_ = lean_array_uget_borrowed(v_as_1452_, v_i_1454_);
lean_inc(v_snd_1458_);
lean_inc_ref(v___x_1450_);
lean_inc_ref(v___x_1448_);
v___x_1464_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1447_, v___x_1448_, v___x_1449_, v___x_1450_, v_val_1451_, v_a_1463_, v_snd_1458_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v___x_1465_; lean_object* v___x_1467_; 
lean_dec_ref(v___x_1450_);
lean_dec_ref(v___x_1448_);
v___x_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1465_);
v___x_1467_ = v___x_1460_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v_snd_1458_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; 
lean_dec(v_snd_1458_);
v_a_1469_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1464_, 1);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 1, v_a_1469_);
lean_ctor_set(v___x_1460_, 0, v___x_1462_);
v___x_1471_ = v___x_1460_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1475_, 1, v_a_1469_);
v___x_1471_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
size_t v___x_1472_; size_t v___x_1473_; 
v___x_1472_ = ((size_t)1ULL);
v___x_1473_ = lean_usize_add(v_i_1454_, v___x_1472_);
v_i_1454_ = v___x_1473_;
v_b_1455_ = v___x_1471_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object* v_init_1478_, lean_object* v___x_1479_, lean_object* v___x_1480_, lean_object* v___x_1481_, lean_object* v_val_1482_, lean_object* v_as_1483_, lean_object* v_sz_1484_, lean_object* v_i_1485_, lean_object* v_b_1486_, lean_object* v___y_1487_){
_start:
{
uint8_t v_val_35449__boxed_1488_; size_t v_sz_boxed_1489_; size_t v_i_boxed_1490_; lean_object* v_res_1491_; 
v_val_35449__boxed_1488_ = lean_unbox(v_val_1482_);
v_sz_boxed_1489_ = lean_unbox_usize(v_sz_1484_);
lean_dec(v_sz_1484_);
v_i_boxed_1490_ = lean_unbox_usize(v_i_1485_);
lean_dec(v_i_1485_);
v_res_1491_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1478_, v___x_1479_, v___x_1480_, v___x_1481_, v_val_35449__boxed_1488_, v_as_1483_, v_sz_boxed_1489_, v_i_boxed_1490_, v_b_1486_);
lean_dec_ref(v_as_1483_);
lean_dec(v___x_1480_);
lean_dec_ref(v_init_1478_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object* v_init_1492_, lean_object* v___x_1493_, lean_object* v___x_1494_, lean_object* v___x_1495_, lean_object* v_val_1496_, lean_object* v_n_1497_, lean_object* v_b_1498_, lean_object* v___y_1499_){
_start:
{
uint8_t v_val_35465__boxed_1500_; lean_object* v_res_1501_; 
v_val_35465__boxed_1500_ = lean_unbox(v_val_1496_);
v_res_1501_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1492_, v___x_1493_, v___x_1494_, v___x_1495_, v_val_35465__boxed_1500_, v_n_1497_, v_b_1498_);
lean_dec_ref(v_n_1497_);
lean_dec(v___x_1494_);
lean_dec_ref(v_init_1492_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object* v___x_1502_, lean_object* v___x_1503_, lean_object* v___x_1504_, uint8_t v_val_1505_, lean_object* v_as_1506_, size_t v_sz_1507_, size_t v_i_1508_, lean_object* v_b_1509_){
_start:
{
uint8_t v___x_1511_; 
v___x_1511_ = lean_usize_dec_lt(v_i_1508_, v_sz_1507_);
if (v___x_1511_ == 0)
{
lean_dec_ref(v___x_1504_);
lean_dec_ref(v___x_1502_);
return v_b_1509_;
}
else
{
lean_object* v_snd_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1530_; 
v_snd_1512_ = lean_ctor_get(v_b_1509_, 1);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_b_1509_);
if (v_isSharedCheck_1530_ == 0)
{
lean_object* v_unused_1531_; 
v_unused_1531_ = lean_ctor_get(v_b_1509_, 0);
lean_dec(v_unused_1531_);
v___x_1514_ = v_b_1509_;
v_isShared_1515_ = v_isSharedCheck_1530_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_snd_1512_);
lean_dec(v_b_1509_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1530_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v_a_1516_; lean_object* v_msg_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1525_; 
v_a_1516_ = lean_array_uget_borrowed(v_as_1506_, v_i_1508_);
v_msg_1517_ = lean_ctor_get(v_a_1516_, 1);
v___x_1518_ = lean_box(0);
lean_inc_ref(v___x_1502_);
v___x_1519_ = l_Lean_FileMap_toPosition(v___x_1502_, v___x_1503_);
v___x_1520_ = 0;
v___x_1521_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1517_);
lean_inc_ref(v___x_1504_);
v___x_1522_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1522_, 0, v___x_1504_);
lean_ctor_set(v___x_1522_, 1, v___x_1519_);
lean_ctor_set(v___x_1522_, 2, v___x_1518_);
lean_ctor_set(v___x_1522_, 3, v___x_1521_);
lean_ctor_set(v___x_1522_, 4, v_msg_1517_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*5, v_val_1505_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*5 + 1, v___x_1520_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*5 + 2, v_val_1505_);
v___x_1523_ = l_Lean_MessageLog_add(v___x_1522_, v_snd_1512_);
if (v_isShared_1515_ == 0)
{
lean_ctor_set(v___x_1514_, 1, v___x_1523_);
lean_ctor_set(v___x_1514_, 0, v___x_1518_);
v___x_1525_ = v___x_1514_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
size_t v___x_1526_; size_t v___x_1527_; 
v___x_1526_ = ((size_t)1ULL);
v___x_1527_ = lean_usize_add(v_i_1508_, v___x_1526_);
v_i_1508_ = v___x_1527_;
v_b_1509_ = v___x_1525_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object* v___x_1532_, lean_object* v___x_1533_, lean_object* v___x_1534_, lean_object* v_val_1535_, lean_object* v_as_1536_, lean_object* v_sz_1537_, lean_object* v_i_1538_, lean_object* v_b_1539_, lean_object* v___y_1540_){
_start:
{
uint8_t v_val_35547__boxed_1541_; size_t v_sz_boxed_1542_; size_t v_i_boxed_1543_; lean_object* v_res_1544_; 
v_val_35547__boxed_1541_ = lean_unbox(v_val_1535_);
v_sz_boxed_1542_ = lean_unbox_usize(v_sz_1537_);
lean_dec(v_sz_1537_);
v_i_boxed_1543_ = lean_unbox_usize(v_i_1538_);
lean_dec(v_i_1538_);
v_res_1544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1532_, v___x_1533_, v___x_1534_, v_val_35547__boxed_1541_, v_as_1536_, v_sz_boxed_1542_, v_i_boxed_1543_, v_b_1539_);
lean_dec_ref(v_as_1536_);
lean_dec(v___x_1533_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object* v___x_1545_, lean_object* v___x_1546_, lean_object* v___x_1547_, uint8_t v_val_1548_, lean_object* v_as_1549_, size_t v_sz_1550_, size_t v_i_1551_, lean_object* v_b_1552_){
_start:
{
uint8_t v___x_1554_; 
v___x_1554_ = lean_usize_dec_lt(v_i_1551_, v_sz_1550_);
if (v___x_1554_ == 0)
{
lean_dec_ref(v___x_1547_);
lean_dec_ref(v___x_1545_);
return v_b_1552_;
}
else
{
lean_object* v_snd_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1573_; 
v_snd_1555_ = lean_ctor_get(v_b_1552_, 1);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_b_1552_);
if (v_isSharedCheck_1573_ == 0)
{
lean_object* v_unused_1574_; 
v_unused_1574_ = lean_ctor_get(v_b_1552_, 0);
lean_dec(v_unused_1574_);
v___x_1557_ = v_b_1552_;
v_isShared_1558_ = v_isSharedCheck_1573_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_snd_1555_);
lean_dec(v_b_1552_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1573_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v_a_1559_; lean_object* v_msg_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1568_; 
v_a_1559_ = lean_array_uget_borrowed(v_as_1549_, v_i_1551_);
v_msg_1560_ = lean_ctor_get(v_a_1559_, 1);
v___x_1561_ = lean_box(0);
lean_inc_ref(v___x_1545_);
v___x_1562_ = l_Lean_FileMap_toPosition(v___x_1545_, v___x_1546_);
v___x_1563_ = 0;
v___x_1564_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1560_);
lean_inc_ref(v___x_1547_);
v___x_1565_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1565_, 0, v___x_1547_);
lean_ctor_set(v___x_1565_, 1, v___x_1562_);
lean_ctor_set(v___x_1565_, 2, v___x_1561_);
lean_ctor_set(v___x_1565_, 3, v___x_1564_);
lean_ctor_set(v___x_1565_, 4, v_msg_1560_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*5, v_val_1548_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*5 + 1, v___x_1563_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*5 + 2, v_val_1548_);
v___x_1566_ = l_Lean_MessageLog_add(v___x_1565_, v_snd_1555_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 1, v___x_1566_);
lean_ctor_set(v___x_1557_, 0, v___x_1561_);
v___x_1568_ = v___x_1557_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v___x_1566_);
v___x_1568_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
size_t v___x_1569_; size_t v___x_1570_; lean_object* v___x_1571_; 
v___x_1569_ = ((size_t)1ULL);
v___x_1570_ = lean_usize_add(v_i_1551_, v___x_1569_);
v___x_1571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1545_, v___x_1546_, v___x_1547_, v_val_1548_, v_as_1549_, v_sz_1550_, v___x_1570_, v___x_1568_);
return v___x_1571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object* v___x_1575_, lean_object* v___x_1576_, lean_object* v___x_1577_, lean_object* v_val_1578_, lean_object* v_as_1579_, lean_object* v_sz_1580_, lean_object* v_i_1581_, lean_object* v_b_1582_, lean_object* v___y_1583_){
_start:
{
uint8_t v_val_35599__boxed_1584_; size_t v_sz_boxed_1585_; size_t v_i_boxed_1586_; lean_object* v_res_1587_; 
v_val_35599__boxed_1584_ = lean_unbox(v_val_1578_);
v_sz_boxed_1585_ = lean_unbox_usize(v_sz_1580_);
lean_dec(v_sz_1580_);
v_i_boxed_1586_ = lean_unbox_usize(v_i_1581_);
lean_dec(v_i_1581_);
v_res_1587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1575_, v___x_1576_, v___x_1577_, v_val_35599__boxed_1584_, v_as_1579_, v_sz_boxed_1585_, v_i_boxed_1586_, v_b_1582_);
lean_dec_ref(v_as_1579_);
lean_dec(v___x_1576_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object* v___x_1588_, lean_object* v___x_1589_, lean_object* v___x_1590_, uint8_t v_val_1591_, lean_object* v_t_1592_, lean_object* v_init_1593_){
_start:
{
lean_object* v_root_1595_; lean_object* v_tail_1596_; lean_object* v___x_1597_; 
v_root_1595_ = lean_ctor_get(v_t_1592_, 0);
v_tail_1596_ = lean_ctor_get(v_t_1592_, 1);
lean_inc_ref(v___x_1590_);
lean_inc_ref(v___x_1588_);
lean_inc_ref(v_init_1593_);
v___x_1597_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1593_, v___x_1588_, v___x_1589_, v___x_1590_, v_val_1591_, v_root_1595_, v_init_1593_);
lean_dec_ref(v_init_1593_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; 
lean_dec_ref(v___x_1590_);
lean_dec_ref(v___x_1588_);
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1597_, 1);
return v_a_1598_;
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; size_t v_sz_1602_; size_t v___x_1603_; lean_object* v___x_1604_; lean_object* v_fst_1605_; 
v_a_1599_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1597_, 1);
v___x_1600_ = lean_box(0);
v___x_1601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v_a_1599_);
v_sz_1602_ = lean_array_size(v_tail_1596_);
v___x_1603_ = ((size_t)0ULL);
v___x_1604_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1588_, v___x_1589_, v___x_1590_, v_val_1591_, v_tail_1596_, v_sz_1602_, v___x_1603_, v___x_1601_);
v_fst_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_fst_1605_);
if (lean_obj_tag(v_fst_1605_) == 0)
{
lean_object* v_snd_1606_; 
v_snd_1606_ = lean_ctor_get(v___x_1604_, 1);
lean_inc(v_snd_1606_);
lean_dec_ref(v___x_1604_);
return v_snd_1606_;
}
else
{
lean_object* v_val_1607_; 
lean_dec_ref(v___x_1604_);
v_val_1607_ = lean_ctor_get(v_fst_1605_, 0);
lean_inc(v_val_1607_);
lean_dec_ref_known(v_fst_1605_, 1);
return v_val_1607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object* v___x_1608_, lean_object* v___x_1609_, lean_object* v___x_1610_, lean_object* v_val_1611_, lean_object* v_t_1612_, lean_object* v_init_1613_, lean_object* v___y_1614_){
_start:
{
uint8_t v_val_35650__boxed_1615_; lean_object* v_res_1616_; 
v_val_35650__boxed_1615_ = lean_unbox(v_val_1611_);
v_res_1616_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v___x_1608_, v___x_1609_, v___x_1610_, v_val_35650__boxed_1615_, v_t_1612_, v_init_1613_);
lean_dec_ref(v_t_1612_);
lean_dec(v___x_1609_);
return v_res_1616_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1617_ = lean_unsigned_to_nat(1u);
v___x_1618_ = l_Lean_firstFrontendMacroScope;
v___x_1619_ = lean_nat_add(v___x_1618_, v___x_1617_);
return v___x_1619_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
return v___x_1627_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1628_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object* v_a_1630_, lean_object* v_opts_1631_, lean_object* v___x_1632_, lean_object* v___x_1633_, lean_object* v___x_1634_, size_t v___x_1635_, uint8_t v___x_1636_, lean_object* v_env_1637_, lean_object* v___x_1638_, lean_object* v___x_1639_, lean_object* v___x_1640_, uint8_t v_val_1641_, lean_object* v___x_1642_, lean_object* v_pos_1643_, lean_object* v___x_1644_, lean_object* v___x_1645_, lean_object* v___x_1646_, uint8_t v___x_1647_, lean_object* v_x_1648_){
_start:
{
lean_object* v_toProcessingContext_1650_; lean_object* v_fileName_1651_; lean_object* v_fileMap_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; lean_object* v___y_1676_; lean_object* v___x_1693_; uint8_t v___y_1695_; lean_object* v_env_1715_; uint8_t v___x_1716_; 
v_toProcessingContext_1650_ = lean_ctor_get(v_a_1630_, 0);
v_fileName_1651_ = lean_ctor_get(v_toProcessingContext_1650_, 1);
v_fileMap_1652_ = lean_ctor_get(v_toProcessingContext_1650_, 2);
v___x_1653_ = lean_box(0);
v___x_1654_ = l_Lean_Core_getMaxHeartbeats(v_opts_1631_);
v___x_1655_ = l_Lean_firstFrontendMacroScope;
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_unsigned_to_nat(1u);
v___x_1658_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_1659_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
lean_inc(v___x_1632_);
v___x_1660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1632_);
lean_ctor_set(v___x_1660_, 1, v___x_1657_);
lean_ctor_set(v___x_1660_, 2, v___x_1653_);
v___x_1661_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1662_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5);
v___x_1663_ = lean_mk_empty_array_with_capacity(v___x_1633_);
lean_inc_ref(v___x_1663_);
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_inc_n(v___x_1634_, 2);
v___x_1665_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
lean_ctor_set(v___x_1665_, 1, v___x_1663_);
lean_ctor_set(v___x_1665_, 2, v___x_1634_);
lean_ctor_set(v___x_1665_, 3, v___x_1634_);
lean_ctor_set_usize(v___x_1665_, 4, v___x_1635_);
v___x_1666_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_1665_, 2);
v___x_1667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1665_);
lean_ctor_set(v___x_1667_, 1, v___x_1665_);
lean_ctor_set(v___x_1667_, 2, v___x_1666_);
v___x_1668_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1668_, 0, v___x_1661_);
lean_ctor_set(v___x_1668_, 1, v___x_1661_);
lean_ctor_set(v___x_1668_, 2, v___x_1665_);
lean_ctor_set_uint8(v___x_1668_, sizeof(void*)*3, v___x_1636_);
v___x_1669_ = lean_mk_empty_array_with_capacity(v___x_1634_);
lean_inc_ref(v___x_1669_);
lean_inc_ref(v___x_1638_);
v___x_1670_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1670_, 0, v_env_1637_);
lean_ctor_set(v___x_1670_, 1, v___x_1658_);
lean_ctor_set(v___x_1670_, 2, v___x_1659_);
lean_ctor_set(v___x_1670_, 3, v___x_1660_);
lean_ctor_set(v___x_1670_, 4, v___x_1638_);
lean_ctor_set(v___x_1670_, 5, v___x_1662_);
lean_ctor_set(v___x_1670_, 6, v___x_1667_);
lean_ctor_set(v___x_1670_, 7, v___x_1668_);
lean_ctor_set(v___x_1670_, 8, v___x_1669_);
v___x_1671_ = lean_st_mk_ref(v___x_1670_);
v___x_1672_ = lean_st_ref_get(v___x_1639_);
v___x_1673_ = l_Lean_diagnostics;
v___x_1674_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1631_, v___x_1673_);
v___x_1693_ = lean_st_ref_get(v___x_1671_);
v_env_1715_ = lean_ctor_get(v___x_1693_, 0);
lean_inc_ref(v_env_1715_);
lean_dec(v___x_1693_);
v___x_1716_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1715_);
lean_dec_ref(v_env_1715_);
if (v___x_1674_ == 0)
{
if (v___x_1716_ == 0)
{
v___y_1695_ = v___x_1647_;
goto v___jp_1694_;
}
else
{
v___y_1695_ = v___x_1674_;
goto v___jp_1694_;
}
}
else
{
v___y_1695_ = v___x_1716_;
goto v___jp_1694_;
}
v___jp_1675_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1677_ = l_Lean_maxRecDepth;
v___x_1678_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1631_, v___x_1677_);
lean_inc(v___x_1634_);
lean_inc(v___x_1632_);
lean_inc_ref(v_fileMap_1652_);
lean_inc_ref(v_fileName_1651_);
v___x_1679_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1679_, 0, v_fileName_1651_);
lean_ctor_set(v___x_1679_, 1, v_fileMap_1652_);
lean_ctor_set(v___x_1679_, 2, v_opts_1631_);
lean_ctor_set(v___x_1679_, 3, v___x_1678_);
lean_ctor_set(v___x_1679_, 4, v___x_1632_);
lean_ctor_set(v___x_1679_, 5, v___x_1653_);
lean_ctor_set(v___x_1679_, 6, v___x_1634_);
lean_ctor_set(v___x_1679_, 7, v___x_1654_);
lean_ctor_set(v___x_1679_, 8, v___x_1632_);
lean_ctor_set(v___x_1679_, 9, v___x_1655_);
lean_ctor_set(v___x_1679_, 10, v___x_1640_);
lean_ctor_set(v___x_1679_, 11, v___x_1672_);
v___x_1680_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1680_, 0, v___x_1679_);
lean_ctor_set(v___x_1680_, 1, v___x_1634_);
lean_ctor_set(v___x_1680_, 2, v___x_1656_);
lean_ctor_set_uint8(v___x_1680_, sizeof(void*)*3, v___x_1674_);
lean_ctor_set_uint8(v___x_1680_, sizeof(void*)*3 + 1, v_val_1641_);
v___x_1681_ = l_Lean_Language_SnapshotTree_trace(v___x_1642_, v___x_1680_, v___y_1676_);
lean_dec(v___y_1676_);
lean_dec_ref_known(v___x_1680_, 3);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v___x_1682_; lean_object* v_traceState_1683_; lean_object* v_traces_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec_ref_known(v___x_1681_, 1);
lean_dec_ref(v___x_1646_);
v___x_1682_ = lean_st_ref_get(v___x_1671_);
lean_dec(v___x_1671_);
v_traceState_1683_ = lean_ctor_get(v___x_1682_, 4);
lean_inc_ref(v_traceState_1683_);
lean_dec(v___x_1682_);
v_traces_1684_ = lean_ctor_get(v_traceState_1683_, 0);
lean_inc_ref(v_traces_1684_);
lean_dec_ref(v_traceState_1683_);
v___x_1685_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_fileName_1651_);
lean_inc_ref(v_fileMap_1652_);
v___x_1686_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v_fileMap_1652_, v_pos_1643_, v_fileName_1651_, v_val_1641_, v_traces_1684_, v___x_1685_);
lean_dec_ref(v_traces_1684_);
v___x_1687_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v___x_1686_);
v___x_1688_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1688_, 0, v___x_1644_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
lean_ctor_set(v___x_1688_, 2, v___x_1645_);
lean_ctor_set(v___x_1688_, 3, v___x_1638_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*4, v_val_1641_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
lean_ctor_set(v___x_1689_, 1, v___x_1669_);
v___x_1690_ = lean_task_pure(v___x_1689_);
return v___x_1690_;
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_dec_ref_known(v___x_1681_, 1);
lean_dec(v___x_1671_);
lean_dec(v___x_1645_);
lean_dec_ref(v___x_1644_);
lean_dec_ref(v___x_1638_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1646_);
lean_ctor_set(v___x_1691_, 1, v___x_1669_);
v___x_1692_ = lean_task_pure(v___x_1691_);
return v___x_1692_;
}
}
v___jp_1694_:
{
if (v___y_1695_ == 0)
{
lean_object* v___x_1696_; lean_object* v_env_1697_; lean_object* v_nextMacroScope_1698_; lean_object* v_ngen_1699_; lean_object* v_auxDeclNGen_1700_; lean_object* v_traceState_1701_; lean_object* v_messages_1702_; lean_object* v_infoState_1703_; lean_object* v_snapshotTasks_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1713_; 
v___x_1696_ = lean_st_ref_take(v___x_1671_);
v_env_1697_ = lean_ctor_get(v___x_1696_, 0);
v_nextMacroScope_1698_ = lean_ctor_get(v___x_1696_, 1);
v_ngen_1699_ = lean_ctor_get(v___x_1696_, 2);
v_auxDeclNGen_1700_ = lean_ctor_get(v___x_1696_, 3);
v_traceState_1701_ = lean_ctor_get(v___x_1696_, 4);
v_messages_1702_ = lean_ctor_get(v___x_1696_, 6);
v_infoState_1703_ = lean_ctor_get(v___x_1696_, 7);
v_snapshotTasks_1704_ = lean_ctor_get(v___x_1696_, 8);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; 
v_unused_1714_ = lean_ctor_get(v___x_1696_, 5);
lean_dec(v_unused_1714_);
v___x_1706_ = v___x_1696_;
v_isShared_1707_ = v_isSharedCheck_1713_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_snapshotTasks_1704_);
lean_inc(v_infoState_1703_);
lean_inc(v_messages_1702_);
lean_inc(v_traceState_1701_);
lean_inc(v_auxDeclNGen_1700_);
lean_inc(v_ngen_1699_);
lean_inc(v_nextMacroScope_1698_);
lean_inc(v_env_1697_);
lean_dec(v___x_1696_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1713_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1708_ = l_Lean_Kernel_enableDiag(v_env_1697_, v___x_1674_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 5, v___x_1662_);
lean_ctor_set(v___x_1706_, 0, v___x_1708_);
v___x_1710_ = v___x_1706_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_nextMacroScope_1698_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_ngen_1699_);
lean_ctor_set(v_reuseFailAlloc_1712_, 3, v_auxDeclNGen_1700_);
lean_ctor_set(v_reuseFailAlloc_1712_, 4, v_traceState_1701_);
lean_ctor_set(v_reuseFailAlloc_1712_, 5, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1712_, 6, v_messages_1702_);
lean_ctor_set(v_reuseFailAlloc_1712_, 7, v_infoState_1703_);
lean_ctor_set(v_reuseFailAlloc_1712_, 8, v_snapshotTasks_1704_);
v___x_1710_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1711_; 
v___x_1711_ = lean_st_ref_put(v___x_1671_, v___x_1710_);
lean_inc(v___x_1671_);
v___y_1676_ = v___x_1671_;
goto v___jp_1675_;
}
}
}
else
{
lean_inc(v___x_1671_);
v___y_1676_ = v___x_1671_;
goto v___jp_1675_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object** _args){
lean_object* v_a_1717_ = _args[0];
lean_object* v_opts_1718_ = _args[1];
lean_object* v___x_1719_ = _args[2];
lean_object* v___x_1720_ = _args[3];
lean_object* v___x_1721_ = _args[4];
lean_object* v___x_1722_ = _args[5];
lean_object* v___x_1723_ = _args[6];
lean_object* v_env_1724_ = _args[7];
lean_object* v___x_1725_ = _args[8];
lean_object* v___x_1726_ = _args[9];
lean_object* v___x_1727_ = _args[10];
lean_object* v_val_1728_ = _args[11];
lean_object* v___x_1729_ = _args[12];
lean_object* v_pos_1730_ = _args[13];
lean_object* v___x_1731_ = _args[14];
lean_object* v___x_1732_ = _args[15];
lean_object* v___x_1733_ = _args[16];
lean_object* v___x_1734_ = _args[17];
lean_object* v_x_1735_ = _args[18];
lean_object* v___y_1736_ = _args[19];
_start:
{
size_t v___x_35710__boxed_1737_; uint8_t v___x_35711__boxed_1738_; uint8_t v_val_35715__boxed_1739_; uint8_t v___x_35720__boxed_1740_; lean_object* v_res_1741_; 
v___x_35710__boxed_1737_ = lean_unbox_usize(v___x_1722_);
lean_dec(v___x_1722_);
v___x_35711__boxed_1738_ = lean_unbox(v___x_1723_);
v_val_35715__boxed_1739_ = lean_unbox(v_val_1728_);
v___x_35720__boxed_1740_ = lean_unbox(v___x_1734_);
v_res_1741_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(v_a_1717_, v_opts_1718_, v___x_1719_, v___x_1720_, v___x_1721_, v___x_35710__boxed_1737_, v___x_35711__boxed_1738_, v_env_1724_, v___x_1725_, v___x_1726_, v___x_1727_, v_val_35715__boxed_1739_, v___x_1729_, v_pos_1730_, v___x_1731_, v___x_1732_, v___x_1733_, v___x_35720__boxed_1740_, v_x_1735_);
lean_dec(v_pos_1730_);
lean_dec(v___x_1726_);
lean_dec(v___x_1720_);
lean_dec_ref(v_a_1717_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object* v_a_1742_, lean_object* v___x_1743_, lean_object* v_parserState_1744_, lean_object* v_x_1745_){
_start:
{
lean_object* v_toProcessingContext_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_toProcessingContext_1746_ = lean_ctor_get(v_a_1742_, 0);
v___x_1747_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_toProcessingContext_1746_);
v___x_1748_ = l_Lean_Parser_parseCommand(v_toProcessingContext_1746_, v___x_1743_, v_parserState_1744_, v___x_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object* v_a_1749_, lean_object* v___x_1750_, lean_object* v_parserState_1751_, lean_object* v_x_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(v_a_1749_, v___x_1750_, v_parserState_1751_, v_x_1752_);
lean_dec_ref(v_a_1749_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object* v_as_1755_, size_t v_i_1756_, size_t v_stop_1757_, lean_object* v_b_1758_){
_start:
{
uint8_t v___x_1760_; 
v___x_1760_ = lean_usize_dec_eq(v_i_1756_, v_stop_1757_);
if (v___x_1760_ == 0)
{
lean_object* v___f_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; size_t v___x_1764_; size_t v___x_1765_; 
v___f_1761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0));
v___x_1762_ = lean_array_uget_borrowed(v_as_1755_, v_i_1756_);
lean_inc(v___x_1762_);
v___x_1763_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___f_1761_, v___x_1762_);
v___x_1764_ = ((size_t)1ULL);
v___x_1765_ = lean_usize_add(v_i_1756_, v___x_1764_);
v_i_1756_ = v___x_1765_;
v_b_1758_ = v___x_1763_;
goto _start;
}
else
{
return v_b_1758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object* v_as_1767_, lean_object* v_i_1768_, lean_object* v_stop_1769_, lean_object* v_b_1770_, lean_object* v___y_1771_){
_start:
{
size_t v_i_boxed_1772_; size_t v_stop_boxed_1773_; lean_object* v_res_1774_; 
v_i_boxed_1772_ = lean_unbox_usize(v_i_1768_);
lean_dec(v_i_1768_);
v_stop_boxed_1773_ = lean_unbox_usize(v_stop_1769_);
lean_dec(v_stop_1769_);
v_res_1774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_1767_, v_i_boxed_1772_, v_stop_boxed_1773_, v_b_1770_);
lean_dec_ref(v_as_1767_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object* v_oldResult_1775_, lean_object* v_cmds_1776_, lean_object* v_stx_1777_, lean_object* v_newParserState_1778_, lean_object* v_val_1779_, lean_object* v_sync_1780_, lean_object* v_val_1781_, lean_object* v_a_1782_, lean_object* v_oldNext_1783_, lean_object* v___y_1784_){
_start:
{
uint8_t v_sync_boxed_1785_; lean_object* v_res_1786_; 
v_sync_boxed_1785_ = lean_unbox(v_sync_1780_);
v_res_1786_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(v_oldResult_1775_, v_cmds_1776_, v_stx_1777_, v_newParserState_1778_, v_val_1779_, v_sync_boxed_1785_, v_val_1781_, v_a_1782_, v_oldNext_1783_);
lean_dec_ref(v_a_1782_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object* v_val_1787_, lean_object* v_cmds_1788_, lean_object* v_stx_1789_, lean_object* v_newParserState_1790_, lean_object* v_val_1791_, uint8_t v_sync_1792_, lean_object* v_val_1793_, lean_object* v_a_1794_, lean_object* v_oldResult_1795_){
_start:
{
lean_object* v_task_1797_; lean_object* v___x_1798_; lean_object* v___f_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; lean_object* v___x_1802_; 
v_task_1797_ = lean_ctor_get(v_val_1787_, 3);
lean_inc_ref(v_task_1797_);
lean_dec_ref(v_val_1787_);
v___x_1798_ = lean_box(v_sync_1792_);
lean_inc_ref(v_a_1794_);
v___f_1799_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed), 10, 8);
lean_closure_set(v___f_1799_, 0, v_oldResult_1795_);
lean_closure_set(v___f_1799_, 1, v_cmds_1788_);
lean_closure_set(v___f_1799_, 2, v_stx_1789_);
lean_closure_set(v___f_1799_, 3, v_newParserState_1790_);
lean_closure_set(v___f_1799_, 4, v_val_1791_);
lean_closure_set(v___f_1799_, 5, v___x_1798_);
lean_closure_set(v___f_1799_, 6, v_val_1793_);
lean_closure_set(v___f_1799_, 7, v_a_1794_);
v___x_1800_ = lean_unsigned_to_nat(0u);
v___x_1801_ = 1;
v___x_1802_ = l_BaseIO_chainTask___redArg(v_task_1797_, v___f_1799_, v___x_1800_, v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object* v_val_1803_, lean_object* v_cmds_1804_, lean_object* v_stx_1805_, lean_object* v_newParserState_1806_, lean_object* v_val_1807_, lean_object* v_sync_1808_, lean_object* v_val_1809_, lean_object* v_a_1810_, lean_object* v_oldResult_1811_, lean_object* v___y_1812_){
_start:
{
uint8_t v_sync_boxed_1813_; lean_object* v_res_1814_; 
v_sync_boxed_1813_ = lean_unbox(v_sync_1808_);
v_res_1814_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(v_val_1803_, v_cmds_1804_, v_stx_1805_, v_newParserState_1806_, v_val_1807_, v_sync_boxed_1813_, v_val_1809_, v_a_1810_, v_oldResult_1811_);
lean_dec_ref(v_a_1810_);
return v_res_1814_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2(void){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1822_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1));
v___x_1823_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1824_ = l_Lean_Name_append(v___x_1823_, v___x_1822_);
return v___x_1824_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object* v___x_1828_, lean_object* v_val_1829_, lean_object* v_cmds_1830_, lean_object* v_fst_1831_, lean_object* v_fst_1832_, uint8_t v_val_1833_, lean_object* v_a_1834_, lean_object* v_snd_1835_, lean_object* v___x_1836_, uint8_t v___x_1837_, lean_object* v_fst_1838_, lean_object* v_val_1839_, lean_object* v_val_1840_, lean_object* v___x_1841_, lean_object* v___f_1842_, lean_object* v___f_1843_, lean_object* v___f_1844_, lean_object* v_pos_1845_, lean_object* v_cmdState_1846_, lean_object* v_val_1847_, lean_object* v___x_1848_, lean_object* v_opts_1849_, lean_object* v___x_1850_, lean_object* v_snd_1851_, lean_object* v_prom_1852_, lean_object* v_old_x3f_1853_, lean_object* v_parseCancelTk_1854_, lean_object* v_next_x3f_1855_){
_start:
{
lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v_snapshotTasks_1862_; lean_object* v___y_1863_; lean_object* v_traceTask_1864_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1886_; lean_object* v___y_1887_; size_t v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v_env_1901_; lean_object* v_messages_1902_; lean_object* v_scopes_1903_; lean_object* v_infoState_1904_; lean_object* v_traceState_1905_; lean_object* v_snapshotTasks_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v_reportedCmdState_1914_; lean_object* v___y_1949_; size_t v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v_reportedCmdState_1971_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; size_t v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_2027_; 
if (lean_obj_tag(v_next_x3f_1855_) == 0)
{
lean_object* v___x_2080_; 
lean_dec_ref(v_parseCancelTk_1854_);
v___x_2080_ = lean_box(0);
v___y_2027_ = v___x_2080_;
goto v___jp_2026_;
}
else
{
lean_object* v_toProcessingContext_2081_; lean_object* v_val_2082_; lean_object* v_pos_2083_; lean_object* v_endPos_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v_toProcessingContext_2081_ = lean_ctor_get(v_a_1834_, 0);
v_val_2082_ = lean_ctor_get(v_next_x3f_1855_, 0);
v_pos_2083_ = lean_ctor_get(v_fst_1832_, 0);
v_endPos_2084_ = lean_ctor_get(v_toProcessingContext_2081_, 3);
v___x_2085_ = lean_box(0);
lean_inc(v_endPos_2084_);
lean_inc(v_pos_2083_);
v___x_2086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2086_, 0, v_pos_2083_);
lean_ctor_set(v___x_2086_, 1, v_endPos_2084_);
v___x_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
v___x_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2088_, 0, v_parseCancelTk_1854_);
v___x_2089_ = l_IO_Promise_result_x21___redArg(v_val_2082_);
v___x_2090_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2085_);
lean_ctor_set(v___x_2090_, 1, v___x_2087_);
lean_ctor_set(v___x_2090_, 2, v___x_2088_);
lean_ctor_set(v___x_2090_, 3, v___x_2089_);
v___x_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
v___y_2027_ = v___x_2091_;
goto v___jp_2026_;
}
v___jp_1857_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1865_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1865_, 0, v___y_1859_);
lean_ctor_set(v___x_1865_, 1, v___x_1828_);
lean_ctor_set(v___x_1865_, 2, v___y_1858_);
lean_ctor_set(v___x_1865_, 3, v_traceTask_1864_);
v___x_1866_ = lean_array_push(v_snapshotTasks_1862_, v___x_1865_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___y_1863_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = lean_io_promise_resolve(v___x_1867_, v_val_1829_);
if (lean_obj_tag(v_next_x3f_1855_) == 1)
{
lean_object* v_val_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v_val_1869_ = lean_ctor_get(v_next_x3f_1855_, 0);
lean_inc(v_val_1869_);
lean_dec_ref_known(v_next_x3f_1855_, 1);
v___x_1870_ = lean_box(0);
v___x_1871_ = lean_array_push(v_cmds_1830_, v_fst_1831_);
v___x_1872_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_1870_, v_fst_1832_, v___y_1861_, v_val_1869_, v_val_1833_, v___y_1860_, v___x_1871_, v_a_1834_);
return v___x_1872_;
}
else
{
lean_object* v___x_1873_; 
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v_next_x3f_1855_);
lean_dec_ref(v_fst_1832_);
lean_dec(v_fst_1831_);
lean_dec_ref(v_cmds_1830_);
v___x_1873_ = lean_box(0);
return v___x_1873_;
}
}
v___jp_1874_:
{
lean_object* v_snapshotTasks_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_snapshotTasks_1881_ = lean_ctor_get(v___y_1879_, 10);
lean_inc_ref(v_snapshotTasks_1881_);
v___x_1882_ = lean_mk_empty_array_with_capacity(v___y_1875_);
lean_dec(v___y_1875_);
lean_inc_ref(v___y_1880_);
v___x_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1883_, 0, v___y_1880_);
lean_ctor_set(v___x_1883_, 1, v___x_1882_);
v___x_1884_ = lean_task_pure(v___x_1883_);
v___y_1858_ = v___y_1876_;
v___y_1859_ = v___y_1877_;
v___y_1860_ = v___y_1878_;
v___y_1861_ = v___y_1879_;
v_snapshotTasks_1862_ = v_snapshotTasks_1881_;
v___y_1863_ = v___y_1880_;
v_traceTask_1864_ = v___x_1884_;
goto v___jp_1857_;
}
v___jp_1885_:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v_opts_1924_; uint8_t v_hasTrace_1925_; 
v___x_1915_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_1902_);
v___x_1916_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1916_, 0, v___y_1909_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
lean_ctor_set(v___x_1916_, 2, v___y_1907_);
lean_ctor_set(v___x_1916_, 3, v_traceState_1905_);
lean_ctor_set_uint8(v___x_1916_, sizeof(void*)*4, v_val_1833_);
v___x_1917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
lean_ctor_set(v___x_1917_, 1, v_reportedCmdState_1914_);
v___x_1918_ = lean_io_promise_resolve(v___x_1917_, v_val_1840_);
v___x_1919_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_1904_);
lean_inc(v___y_1894_);
v___x_1920_ = l_BaseIO_chainTask___redArg(v___x_1919_, v___y_1896_, v___y_1894_, v___x_1837_);
v___x_1921_ = l_Lean_inheritedTraceOptions;
v___x_1922_ = lean_st_ref_get(v___x_1921_);
v___x_1923_ = l_List_head_x21___redArg(v___x_1841_, v_scopes_1903_);
lean_dec(v_scopes_1903_);
lean_dec_ref(v___x_1841_);
v_opts_1924_ = lean_ctor_get(v___x_1923_, 1);
lean_inc_ref(v_opts_1924_);
lean_dec(v___x_1923_);
v_hasTrace_1925_ = lean_ctor_get_uint8(v_opts_1924_, sizeof(void*)*1);
if (v_hasTrace_1925_ == 0)
{
lean_dec_ref(v_opts_1924_);
lean_dec(v___x_1922_);
lean_dec_ref(v___y_1913_);
lean_dec_ref(v___y_1912_);
lean_dec(v___y_1910_);
lean_dec_ref(v_snapshotTasks_1906_);
lean_dec_ref(v_env_1901_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec(v_pos_1845_);
lean_dec_ref(v___f_1844_);
lean_dec_ref(v___f_1843_);
lean_dec_ref(v___f_1842_);
lean_dec(v___x_1836_);
v___y_1875_ = v___y_1894_;
v___y_1876_ = v___y_1895_;
v___y_1877_ = v___y_1898_;
v___y_1878_ = v___y_1911_;
v___y_1879_ = v___y_1900_;
v___y_1880_ = v___y_1908_;
goto v___jp_1874_;
}
else
{
lean_object* v___x_1926_; uint8_t v___x_1927_; 
v___x_1926_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_1927_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1922_, v_opts_1924_, v___x_1926_);
lean_dec(v___x_1922_);
if (v___x_1927_ == 0)
{
lean_dec_ref(v_opts_1924_);
lean_dec_ref(v___y_1913_);
lean_dec_ref(v___y_1912_);
lean_dec(v___y_1910_);
lean_dec_ref(v_snapshotTasks_1906_);
lean_dec_ref(v_env_1901_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec(v_pos_1845_);
lean_dec_ref(v___f_1844_);
lean_dec_ref(v___f_1843_);
lean_dec_ref(v___f_1842_);
lean_dec(v___x_1836_);
v___y_1875_ = v___y_1894_;
v___y_1876_ = v___y_1895_;
v___y_1877_ = v___y_1898_;
v___y_1878_ = v___y_1911_;
v___y_1879_ = v___y_1900_;
v___y_1880_ = v___y_1908_;
goto v___jp_1874_;
}
else
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___f_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
lean_inc_n(v___y_1894_, 3);
v___x_1928_ = lean_task_map(v___f_1842_, v___y_1913_, v___y_1894_, v___x_1837_);
lean_inc_n(v___y_1895_, 3);
lean_inc_n(v___y_1910_, 2);
lean_inc_n(v___y_1899_, 2);
v___x_1929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1929_, 0, v___y_1899_);
lean_ctor_set(v___x_1929_, 1, v___y_1910_);
lean_ctor_set(v___x_1929_, 2, v___y_1895_);
lean_ctor_set(v___x_1929_, 3, v___x_1928_);
v___x_1930_ = lean_task_map(v___f_1843_, v___y_1897_, v___y_1894_, v___x_1837_);
v___x_1931_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1931_, 0, v___y_1899_);
lean_ctor_set(v___x_1931_, 1, v___y_1910_);
lean_ctor_set(v___x_1931_, 2, v___y_1895_);
lean_ctor_set(v___x_1931_, 3, v___x_1930_);
v___x_1932_ = lean_task_map(v___f_1844_, v___y_1912_, v___y_1894_, v___x_1837_);
v___x_1933_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1933_, 0, v___y_1899_);
lean_ctor_set(v___x_1933_, 1, v___y_1910_);
lean_ctor_set(v___x_1933_, 2, v___y_1895_);
lean_ctor_set(v___x_1933_, 3, v___x_1932_);
v___x_1934_ = lean_unsigned_to_nat(3u);
v___x_1935_ = lean_mk_empty_array_with_capacity(v___x_1934_);
v___x_1936_ = lean_array_push(v___x_1935_, v___x_1929_);
v___x_1937_ = lean_array_push(v___x_1936_, v___x_1931_);
v___x_1938_ = lean_array_push(v___x_1937_, v___x_1933_);
v___x_1939_ = l_Array_append___redArg(v___x_1938_, v_snapshotTasks_1906_);
lean_inc_ref(v___y_1908_);
v___x_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___y_1908_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
v___x_1941_ = lean_box_usize(v___y_1888_);
v___x_1942_ = lean_box(v___x_1837_);
v___x_1943_ = lean_box(v_val_1833_);
v___x_1944_ = lean_box(v___x_1927_);
lean_inc_ref(v___x_1940_);
lean_inc_ref(v___y_1889_);
lean_inc_ref(v_a_1834_);
v___f_1945_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_1945_, 0, v_a_1834_);
lean_closure_set(v___f_1945_, 1, v_opts_1924_);
lean_closure_set(v___f_1945_, 2, v___x_1836_);
lean_closure_set(v___f_1945_, 3, v___y_1886_);
lean_closure_set(v___f_1945_, 4, v___y_1893_);
lean_closure_set(v___f_1945_, 5, v___x_1941_);
lean_closure_set(v___f_1945_, 6, v___x_1942_);
lean_closure_set(v___f_1945_, 7, v_env_1901_);
lean_closure_set(v___f_1945_, 8, v___y_1889_);
lean_closure_set(v___f_1945_, 9, v___x_1921_);
lean_closure_set(v___f_1945_, 10, v___y_1887_);
lean_closure_set(v___f_1945_, 11, v___x_1943_);
lean_closure_set(v___f_1945_, 12, v___x_1940_);
lean_closure_set(v___f_1945_, 13, v_pos_1845_);
lean_closure_set(v___f_1945_, 14, v___y_1892_);
lean_closure_set(v___f_1945_, 15, v___y_1891_);
lean_closure_set(v___f_1945_, 16, v___y_1890_);
lean_closure_set(v___f_1945_, 17, v___x_1944_);
v___x_1946_ = l_Lean_Language_SnapshotTree_waitAll(v___x_1940_);
v___x_1947_ = lean_io_bind_task(v___x_1946_, v___f_1945_, v___y_1894_, v_val_1833_);
v___y_1858_ = v___y_1895_;
v___y_1859_ = v___y_1898_;
v___y_1860_ = v___y_1911_;
v___y_1861_ = v___y_1900_;
v_snapshotTasks_1862_ = v_snapshotTasks_1906_;
v___y_1863_ = v___y_1908_;
v_traceTask_1864_ = v___x_1947_;
goto v___jp_1857_;
}
}
}
v___jp_1948_:
{
lean_object* v_env_1972_; lean_object* v_messages_1973_; lean_object* v_scopes_1974_; lean_object* v_infoState_1975_; lean_object* v_traceState_1976_; lean_object* v_snapshotTasks_1977_; 
v_env_1972_ = lean_ctor_get(v___y_1963_, 0);
lean_inc_ref(v_env_1972_);
v_messages_1973_ = lean_ctor_get(v___y_1963_, 1);
lean_inc_ref(v_messages_1973_);
v_scopes_1974_ = lean_ctor_get(v___y_1963_, 2);
lean_inc(v_scopes_1974_);
v_infoState_1975_ = lean_ctor_get(v___y_1963_, 8);
lean_inc_ref(v_infoState_1975_);
v_traceState_1976_ = lean_ctor_get(v___y_1963_, 9);
lean_inc_ref(v_traceState_1976_);
v_snapshotTasks_1977_ = lean_ctor_get(v___y_1963_, 10);
lean_inc_ref(v_snapshotTasks_1977_);
v___y_1886_ = v___y_1949_;
v___y_1887_ = v___y_1951_;
v___y_1888_ = v___y_1950_;
v___y_1889_ = v___y_1952_;
v___y_1890_ = v___y_1953_;
v___y_1891_ = v___y_1955_;
v___y_1892_ = v___y_1954_;
v___y_1893_ = v___y_1956_;
v___y_1894_ = v___y_1957_;
v___y_1895_ = v___y_1958_;
v___y_1896_ = v___y_1959_;
v___y_1897_ = v___y_1960_;
v___y_1898_ = v___y_1961_;
v___y_1899_ = v___y_1962_;
v___y_1900_ = v___y_1963_;
v_env_1901_ = v_env_1972_;
v_messages_1902_ = v_messages_1973_;
v_scopes_1903_ = v_scopes_1974_;
v_infoState_1904_ = v_infoState_1975_;
v_traceState_1905_ = v_traceState_1976_;
v_snapshotTasks_1906_ = v_snapshotTasks_1977_;
v___y_1907_ = v___y_1964_;
v___y_1908_ = v___y_1965_;
v___y_1909_ = v___y_1966_;
v___y_1910_ = v___y_1967_;
v___y_1911_ = v___y_1968_;
v___y_1912_ = v___y_1969_;
v___y_1913_ = v___y_1970_;
v_reportedCmdState_1914_ = v_reportedCmdState_1971_;
goto v___jp_1885_;
}
v___jp_1978_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___f_1999_; uint8_t v___x_2000_; 
v___x_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1995_, 0, v___y_1994_);
lean_ctor_set(v___x_1995_, 1, v_val_1839_);
lean_inc_ref(v___y_1987_);
lean_inc_n(v_pos_1845_, 2);
lean_inc_ref(v_cmds_1830_);
lean_inc(v_fst_1831_);
v___x_1996_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_1831_, v_cmds_1830_, v_cmdState_1846_, v_pos_1845_, v___x_1995_, v___y_1987_, v_a_1834_);
v___x_1997_ = lean_box(v_val_1833_);
v___x_1998_ = lean_box(v___x_1837_);
lean_inc_ref(v_a_1834_);
lean_inc(v___y_1990_);
lean_inc_ref(v___x_1841_);
lean_inc_ref(v___x_1996_);
lean_inc_ref(v___y_1984_);
lean_inc_ref(v___y_1989_);
v___f_1999_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_1999_, 0, v___y_1989_);
lean_closure_set(v___f_1999_, 1, v___y_1984_);
lean_closure_set(v___f_1999_, 2, v___x_1997_);
lean_closure_set(v___f_1999_, 3, v_val_1847_);
lean_closure_set(v___f_1999_, 4, v___x_1996_);
lean_closure_set(v___f_1999_, 5, v___x_1841_);
lean_closure_set(v___f_1999_, 6, v___y_1990_);
lean_closure_set(v___f_1999_, 7, v___x_1998_);
lean_closure_set(v___f_1999_, 8, v_a_1834_);
lean_closure_set(v___f_1999_, 9, v_pos_1845_);
lean_closure_set(v___f_1999_, 10, v___x_1848_);
v___x_2000_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1849_, v___x_1850_);
if (v___x_2000_ == 0)
{
lean_inc_ref(v___x_1996_);
lean_inc(v___y_1990_);
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1989_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1983_);
v___y_1949_ = v___y_1981_;
v___y_1950_ = v___y_1982_;
v___y_1951_ = v___y_1983_;
v___y_1952_ = v___y_1984_;
v___y_1953_ = v___y_1985_;
v___y_1954_ = v___y_1989_;
v___y_1955_ = v___y_1988_;
v___y_1956_ = v___y_1990_;
v___y_1957_ = v___y_1990_;
v___y_1958_ = v___y_1983_;
v___y_1959_ = v___f_1999_;
v___y_1960_ = v___y_1991_;
v___y_1961_ = v___y_1992_;
v___y_1962_ = v___y_1980_;
v___y_1963_ = v___x_1996_;
v___y_1964_ = v___y_1988_;
v___y_1965_ = v___y_1985_;
v___y_1966_ = v___y_1989_;
v___y_1967_ = v___y_1986_;
v___y_1968_ = v___y_1987_;
v___y_1969_ = v___y_1993_;
v___y_1970_ = v___y_1979_;
v_reportedCmdState_1971_ = v___x_1996_;
goto v___jp_1948_;
}
else
{
uint8_t v___x_2001_; 
lean_inc(v_fst_1831_);
v___x_2001_ = l_Lean_Parser_isTerminalCommand(v_fst_1831_);
if (v___x_2001_ == 0)
{
if (v___x_2000_ == 0)
{
lean_inc_ref(v___x_1996_);
lean_inc(v___y_1990_);
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1989_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1983_);
v___y_1949_ = v___y_1981_;
v___y_1950_ = v___y_1982_;
v___y_1951_ = v___y_1983_;
v___y_1952_ = v___y_1984_;
v___y_1953_ = v___y_1985_;
v___y_1954_ = v___y_1989_;
v___y_1955_ = v___y_1988_;
v___y_1956_ = v___y_1990_;
v___y_1957_ = v___y_1990_;
v___y_1958_ = v___y_1983_;
v___y_1959_ = v___f_1999_;
v___y_1960_ = v___y_1991_;
v___y_1961_ = v___y_1992_;
v___y_1962_ = v___y_1980_;
v___y_1963_ = v___x_1996_;
v___y_1964_ = v___y_1988_;
v___y_1965_ = v___y_1985_;
v___y_1966_ = v___y_1989_;
v___y_1967_ = v___y_1986_;
v___y_1968_ = v___y_1987_;
v___y_1969_ = v___y_1993_;
v___y_1970_ = v___y_1979_;
v_reportedCmdState_1971_ = v___x_1996_;
goto v___jp_1948_;
}
else
{
lean_object* v_env_2002_; lean_object* v_messages_2003_; lean_object* v_scopes_2004_; lean_object* v_infoState_2005_; lean_object* v_traceState_2006_; lean_object* v_snapshotTasks_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v_env_2002_ = lean_ctor_get(v___x_1996_, 0);
lean_inc_ref_n(v_env_2002_, 2);
v_messages_2003_ = lean_ctor_get(v___x_1996_, 1);
lean_inc_ref(v_messages_2003_);
v_scopes_2004_ = lean_ctor_get(v___x_1996_, 2);
lean_inc(v_scopes_2004_);
v_infoState_2005_ = lean_ctor_get(v___x_1996_, 8);
lean_inc_ref(v_infoState_2005_);
v_traceState_2006_ = lean_ctor_get(v___x_1996_, 9);
lean_inc_ref(v_traceState_2006_);
v_snapshotTasks_2007_ = lean_ctor_get(v___x_1996_, 10);
lean_inc_ref(v_snapshotTasks_2007_);
v___x_2008_ = lean_mk_empty_array_with_capacity(v___y_1981_);
lean_inc_ref(v___x_2008_);
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2008_);
lean_inc_n(v___y_1990_, 4);
v___x_2010_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2010_, 0, v___x_2009_);
lean_ctor_set(v___x_2010_, 1, v___x_2008_);
lean_ctor_set(v___x_2010_, 2, v___y_1990_);
lean_ctor_set(v___x_2010_, 3, v___y_1990_);
lean_ctor_set_usize(v___x_2010_, 4, v___y_1982_);
v___x_2011_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2010_, 2);
v___x_2012_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2010_);
lean_ctor_set(v___x_2012_, 1, v___x_2010_);
lean_ctor_set(v___x_2012_, 2, v___x_2011_);
v___x_2013_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2014_ = l_Lean_Options_empty;
v___x_2015_ = lean_box(0);
v___x_2016_ = lean_mk_empty_array_with_capacity(v___y_1990_);
lean_inc_ref_n(v___x_2016_, 3);
lean_inc_n(v___x_1836_, 2);
v___x_2017_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2017_, 0, v___x_2013_);
lean_ctor_set(v___x_2017_, 1, v___x_2014_);
lean_ctor_set(v___x_2017_, 2, v___x_1836_);
lean_ctor_set(v___x_2017_, 3, v___x_2015_);
lean_ctor_set(v___x_2017_, 4, v___x_2015_);
lean_ctor_set(v___x_2017_, 5, v___x_2016_);
lean_ctor_set(v___x_2017_, 6, v___x_2016_);
lean_ctor_set(v___x_2017_, 7, v___x_2015_);
lean_ctor_set(v___x_2017_, 8, v___x_2015_);
lean_ctor_set(v___x_2017_, 9, v___x_2015_);
lean_ctor_set_uint8(v___x_2017_, sizeof(void*)*10, v_val_1833_);
lean_ctor_set_uint8(v___x_2017_, sizeof(void*)*10 + 1, v_val_1833_);
lean_ctor_set_uint8(v___x_2017_, sizeof(void*)*10 + 2, v_val_1833_);
v___x_2018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
lean_ctor_set(v___x_2018_, 1, v___x_2015_);
v___x_2019_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2020_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2021_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_1836_);
v___x_2022_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2023_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
lean_ctor_set(v___x_2023_, 2, v___x_2010_);
lean_ctor_set_uint8(v___x_2023_, sizeof(void*)*3, v___x_1837_);
v___x_2024_ = lean_box(0);
lean_inc_ref(v___y_1984_);
v___x_2025_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2025_, 0, v_env_2002_);
lean_ctor_set(v___x_2025_, 1, v___x_2012_);
lean_ctor_set(v___x_2025_, 2, v___x_2018_);
lean_ctor_set(v___x_2025_, 3, v___x_2011_);
lean_ctor_set(v___x_2025_, 4, v___x_2019_);
lean_ctor_set(v___x_2025_, 5, v___y_1990_);
lean_ctor_set(v___x_2025_, 6, v___x_2020_);
lean_ctor_set(v___x_2025_, 7, v___x_2021_);
lean_ctor_set(v___x_2025_, 8, v___x_2023_);
lean_ctor_set(v___x_2025_, 9, v___y_1984_);
lean_ctor_set(v___x_2025_, 10, v___x_2016_);
lean_ctor_set(v___x_2025_, 11, v___x_2024_);
lean_ctor_set(v___x_2025_, 12, v___x_2016_);
lean_inc_ref(v___y_1989_);
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1983_);
v___y_1886_ = v___y_1981_;
v___y_1887_ = v___y_1983_;
v___y_1888_ = v___y_1982_;
v___y_1889_ = v___y_1984_;
v___y_1890_ = v___y_1985_;
v___y_1891_ = v___y_1988_;
v___y_1892_ = v___y_1989_;
v___y_1893_ = v___y_1990_;
v___y_1894_ = v___y_1990_;
v___y_1895_ = v___y_1983_;
v___y_1896_ = v___f_1999_;
v___y_1897_ = v___y_1991_;
v___y_1898_ = v___y_1992_;
v___y_1899_ = v___y_1980_;
v___y_1900_ = v___x_1996_;
v_env_1901_ = v_env_2002_;
v_messages_1902_ = v_messages_2003_;
v_scopes_1903_ = v_scopes_2004_;
v_infoState_1904_ = v_infoState_2005_;
v_traceState_1905_ = v_traceState_2006_;
v_snapshotTasks_1906_ = v_snapshotTasks_2007_;
v___y_1907_ = v___y_1988_;
v___y_1908_ = v___y_1985_;
v___y_1909_ = v___y_1989_;
v___y_1910_ = v___y_1986_;
v___y_1911_ = v___y_1987_;
v___y_1912_ = v___y_1993_;
v___y_1913_ = v___y_1979_;
v_reportedCmdState_1914_ = v___x_2025_;
goto v___jp_1885_;
}
}
else
{
lean_inc_ref(v___x_1996_);
lean_inc(v___y_1990_);
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1989_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1983_);
v___y_1949_ = v___y_1981_;
v___y_1950_ = v___y_1982_;
v___y_1951_ = v___y_1983_;
v___y_1952_ = v___y_1984_;
v___y_1953_ = v___y_1985_;
v___y_1954_ = v___y_1989_;
v___y_1955_ = v___y_1988_;
v___y_1956_ = v___y_1990_;
v___y_1957_ = v___y_1990_;
v___y_1958_ = v___y_1983_;
v___y_1959_ = v___f_1999_;
v___y_1960_ = v___y_1991_;
v___y_1961_ = v___y_1992_;
v___y_1962_ = v___y_1980_;
v___y_1963_ = v___x_1996_;
v___y_1964_ = v___y_1988_;
v___y_1965_ = v___y_1985_;
v___y_1966_ = v___y_1989_;
v___y_1967_ = v___y_1986_;
v___y_1968_ = v___y_1987_;
v___y_1969_ = v___y_1993_;
v___y_1970_ = v___y_1979_;
v_reportedCmdState_1971_ = v___x_1996_;
goto v___jp_1948_;
}
}
}
v___jp_2026_:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; size_t v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2028_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_1835_);
v___x_2029_ = l_IO_CancelToken_new();
v___x_2030_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1));
lean_inc(v___x_1836_);
v___x_2031_ = l_Lean_Name_str___override(v___x_1836_, v___x_2030_);
v___x_2032_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_2033_ = l_Lean_Name_str___override(v___x_2031_, v___x_2032_);
v___x_2034_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_2035_ = l_Lean_Name_str___override(v___x_2033_, v___x_2034_);
v___x_2036_ = l_Lean_Name_str___override(v___x_2035_, v___x_2032_);
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = l_Lean_Name_num___override(v___x_2036_, v___x_2037_);
v___x_2039_ = l_Lean_Name_str___override(v___x_2038_, v___x_2032_);
v___x_2040_ = l_Lean_Name_str___override(v___x_2039_, v___x_2034_);
v___x_2041_ = l_Lean_Name_str___override(v___x_2040_, v___x_2032_);
v___x_2042_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2043_ = l_Lean_Name_str___override(v___x_2041_, v___x_2042_);
v___x_2044_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2045_ = l_Lean_Name_str___override(v___x_2043_, v___x_2044_);
v___x_2046_ = l_Lean_Name_toString(v___x_2045_, v___x_1837_);
v___x_2047_ = lean_box(0);
v___x_2048_ = lean_unsigned_to_nat(32u);
v___x_2049_ = ((size_t)5ULL);
v___x_2050_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
lean_inc_ref_n(v___x_2046_, 2);
v___x_2051_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2051_, 0, v___x_2046_);
lean_ctor_set(v___x_2051_, 1, v___x_2028_);
lean_ctor_set(v___x_2051_, 2, v___x_2047_);
lean_ctor_set(v___x_2051_, 3, v___x_2050_);
lean_ctor_set_uint8(v___x_2051_, sizeof(void*)*4, v_val_1833_);
v___x_2052_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2053_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2053_, 0, v___x_2046_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
lean_ctor_set(v___x_2053_, 2, v___x_2047_);
lean_ctor_set(v___x_2053_, 3, v___x_2050_);
lean_ctor_set_uint8(v___x_2053_, sizeof(void*)*4, v_val_1833_);
lean_inc(v_fst_1838_);
v___x_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2054_, 0, v_fst_1838_);
v___x_2055_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2054_);
lean_inc_ref(v___x_2029_);
v___x_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2029_);
v___x_2057_ = l_IO_Promise_result_x21___redArg(v_val_1839_);
lean_inc_ref(v___x_2057_);
lean_inc(v___x_2055_);
lean_inc_ref_n(v___x_2054_, 3);
v___x_2058_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2054_);
lean_ctor_set(v___x_2058_, 1, v___x_2055_);
lean_ctor_set(v___x_2058_, 2, v___x_2056_);
lean_ctor_set(v___x_2058_, 3, v___x_2057_);
v___x_2059_ = l_IO_Promise_result_x21___redArg(v_val_1840_);
lean_inc_ref(v___x_2059_);
lean_inc_n(v___x_1828_, 3);
v___x_2060_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2054_);
lean_ctor_set(v___x_2060_, 1, v___x_1828_);
lean_ctor_set(v___x_2060_, 2, v___x_2047_);
lean_ctor_set(v___x_2060_, 3, v___x_2059_);
v___x_2061_ = l_IO_Promise_result_x21___redArg(v_val_1847_);
lean_inc_ref(v___x_2061_);
v___x_2062_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2054_);
lean_ctor_set(v___x_2062_, 1, v___x_1828_);
lean_ctor_set(v___x_2062_, 2, v___x_2047_);
lean_ctor_set(v___x_2062_, 3, v___x_2061_);
v___x_2063_ = l_IO_Promise_result_x21___redArg(v_val_1829_);
v___x_2064_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2047_);
lean_ctor_set(v___x_2064_, 1, v___x_1828_);
lean_ctor_set(v___x_2064_, 2, v___x_2047_);
lean_ctor_set(v___x_2064_, 3, v___x_2063_);
lean_inc_ref(v___x_2053_);
v___x_2065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2053_);
lean_ctor_set(v___x_2065_, 1, v___x_2058_);
lean_ctor_set(v___x_2065_, 2, v___x_2060_);
lean_ctor_set(v___x_2065_, 3, v___x_2062_);
lean_ctor_set(v___x_2065_, 4, v___x_2064_);
v___x_2066_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2051_);
lean_ctor_set(v___x_2066_, 1, v_fst_1838_);
lean_ctor_set(v___x_2066_, 2, v_snd_1851_);
lean_ctor_set(v___x_2066_, 3, v___x_2065_);
lean_ctor_set(v___x_2066_, 4, v___y_2027_);
v___x_2067_ = lean_io_promise_resolve(v___x_2066_, v_prom_1852_);
if (lean_obj_tag(v_old_x3f_1853_) == 0)
{
v___y_1979_ = v___x_2057_;
v___y_1980_ = v___x_2054_;
v___y_1981_ = v___x_2048_;
v___y_1982_ = v___x_2049_;
v___y_1983_ = v___x_2047_;
v___y_1984_ = v___x_2050_;
v___y_1985_ = v___x_2053_;
v___y_1986_ = v___x_2055_;
v___y_1987_ = v___x_2029_;
v___y_1988_ = v___x_2047_;
v___y_1989_ = v___x_2046_;
v___y_1990_ = v___x_2037_;
v___y_1991_ = v___x_2059_;
v___y_1992_ = v___x_2047_;
v___y_1993_ = v___x_2061_;
v___y_1994_ = v___x_2047_;
goto v___jp_1978_;
}
else
{
lean_object* v_val_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2079_; 
v_val_2068_ = lean_ctor_get(v_old_x3f_1853_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v_old_x3f_1853_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2070_ = v_old_x3f_1853_;
v_isShared_2071_ = v_isSharedCheck_2079_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_val_2068_);
lean_dec(v_old_x3f_1853_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2079_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v_elabSnap_2072_; lean_object* v_stx_2073_; lean_object* v_elabSnap_2074_; lean_object* v___x_2075_; lean_object* v___x_2077_; 
v_elabSnap_2072_ = lean_ctor_get(v_val_2068_, 3);
lean_inc_ref(v_elabSnap_2072_);
v_stx_2073_ = lean_ctor_get(v_val_2068_, 1);
lean_inc(v_stx_2073_);
lean_dec(v_val_2068_);
v_elabSnap_2074_ = lean_ctor_get(v_elabSnap_2072_, 1);
lean_inc_ref(v_elabSnap_2074_);
lean_dec_ref(v_elabSnap_2072_);
v___x_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2075_, 0, v_stx_2073_);
lean_ctor_set(v___x_2075_, 1, v_elabSnap_2074_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v___x_2075_);
v___x_2077_ = v___x_2070_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v___x_2075_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
v___y_1979_ = v___x_2057_;
v___y_1980_ = v___x_2054_;
v___y_1981_ = v___x_2048_;
v___y_1982_ = v___x_2049_;
v___y_1983_ = v___x_2047_;
v___y_1984_ = v___x_2050_;
v___y_1985_ = v___x_2053_;
v___y_1986_ = v___x_2055_;
v___y_1987_ = v___x_2029_;
v___y_1988_ = v___x_2047_;
v___y_1989_ = v___x_2046_;
v___y_1990_ = v___x_2037_;
v___y_1991_ = v___x_2059_;
v___y_1992_ = v___x_2047_;
v___y_1993_ = v___x_2061_;
v___y_1994_ = v___x_2077_;
goto v___jp_1978_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2092_ = l_Lean_Language_instInhabitedDynamicSnapshot;
v___x_2093_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2092_);
return v___x_2093_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4(void){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2094_ = l_Lean_Language_instInhabitedSnapshotTree_default;
v___x_2095_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2094_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(lean_object* v_cmds_2096_, lean_object* v_fst_2097_, lean_object* v_fst_2098_, uint8_t v_val_2099_, lean_object* v_a_2100_, lean_object* v_snd_2101_, lean_object* v___x_2102_, uint8_t v___x_2103_, lean_object* v___x_2104_, lean_object* v___f_2105_, lean_object* v___f_2106_, lean_object* v___f_2107_, lean_object* v_pos_2108_, lean_object* v_cmdState_2109_, lean_object* v___x_2110_, lean_object* v_opts_2111_, lean_object* v_prom_2112_, lean_object* v_old_x3f_2113_, lean_object* v_parseCancelTk_2114_){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v_snapshotTasks_2128_; lean_object* v_traceTask_2129_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2153_; size_t v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; lean_object* v___y_2157_; lean_object* v___y_2158_; lean_object* v___y_2159_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v___y_2162_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v_env_2175_; lean_object* v_messages_2176_; lean_object* v_scopes_2177_; lean_object* v_infoState_2178_; lean_object* v_traceState_2179_; lean_object* v_snapshotTasks_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v_reportedCmdState_2183_; lean_object* v___y_2218_; size_t v___y_2219_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2224_; lean_object* v___y_2225_; lean_object* v___y_2226_; lean_object* v___y_2227_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v_reportedCmdState_2242_; lean_object* v___x_2249_; lean_object* v___y_2251_; size_t v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2261_; lean_object* v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v___y_2362_; lean_object* v_fst_2379_; lean_object* v_snd_2380_; uint8_t v___x_2392_; 
v___x_2116_ = lean_io_promise_new();
v___x_2117_ = lean_io_promise_new();
v___x_2118_ = lean_io_promise_new();
v___x_2119_ = lean_io_promise_new();
v___x_2249_ = l_Lean_internal_cmdlineSnapshots;
v___x_2392_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2111_, v___x_2249_);
if (v___x_2392_ == 0)
{
lean_inc_ref(v_fst_2098_);
lean_inc(v_fst_2097_);
v_fst_2379_ = v_fst_2097_;
v_snd_2380_ = v_fst_2098_;
goto v___jp_2378_;
}
else
{
uint8_t v___x_2393_; 
lean_inc(v_fst_2097_);
v___x_2393_ = l_Lean_Parser_isTerminalCommand(v_fst_2097_);
if (v___x_2393_ == 0)
{
if (v___x_2392_ == 0)
{
lean_inc_ref(v_fst_2098_);
lean_inc(v_fst_2097_);
v_fst_2379_ = v_fst_2097_;
v_snd_2380_ = v_fst_2098_;
goto v___jp_2378_;
}
else
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_box(0);
v___x_2395_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_fst_2379_ = v___x_2394_;
v_snd_2380_ = v___x_2395_;
goto v___jp_2378_;
}
}
else
{
lean_inc_ref(v_fst_2098_);
lean_inc(v_fst_2097_);
v_fst_2379_ = v_fst_2097_;
v_snd_2380_ = v_fst_2098_;
goto v___jp_2378_;
}
}
v___jp_2120_:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2130_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2130_, 0, v___y_2125_);
lean_ctor_set(v___x_2130_, 1, v___y_2124_);
lean_ctor_set(v___x_2130_, 2, v___y_2121_);
lean_ctor_set(v___x_2130_, 3, v_traceTask_2129_);
v___x_2131_ = lean_array_push(v_snapshotTasks_2128_, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___y_2123_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_io_promise_resolve(v___x_2132_, v___x_2119_);
lean_dec(v___x_2119_);
if (lean_obj_tag(v___y_2126_) == 1)
{
lean_object* v_val_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_val_2134_ = lean_ctor_get(v___y_2126_, 0);
lean_inc(v_val_2134_);
lean_dec_ref_known(v___y_2126_, 1);
v___x_2135_ = lean_box(0);
v___x_2136_ = lean_array_push(v_cmds_2096_, v_fst_2097_);
v___x_2137_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2135_, v_fst_2098_, v___y_2127_, v_val_2134_, v_val_2099_, v___y_2122_, v___x_2136_, v_a_2100_);
return v___x_2137_;
}
else
{
lean_object* v___x_2138_; 
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2122_);
lean_dec_ref(v_fst_2098_);
lean_dec(v_fst_2097_);
lean_dec_ref(v_cmds_2096_);
v___x_2138_ = lean_box(0);
return v___x_2138_;
}
}
v___jp_2139_:
{
lean_object* v_snapshotTasks_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_snapshotTasks_2148_ = lean_ctor_get(v___y_2146_, 10);
lean_inc_ref(v_snapshotTasks_2148_);
v___x_2149_ = lean_mk_empty_array_with_capacity(v___y_2147_);
lean_dec(v___y_2147_);
lean_inc_ref(v___y_2142_);
v___x_2150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2150_, 0, v___y_2142_);
lean_ctor_set(v___x_2150_, 1, v___x_2149_);
v___x_2151_ = lean_task_pure(v___x_2150_);
v___y_2121_ = v___y_2140_;
v___y_2122_ = v___y_2141_;
v___y_2123_ = v___y_2142_;
v___y_2124_ = v___y_2143_;
v___y_2125_ = v___y_2144_;
v___y_2126_ = v___y_2145_;
v___y_2127_ = v___y_2146_;
v_snapshotTasks_2128_ = v_snapshotTasks_2148_;
v_traceTask_2129_ = v___x_2151_;
goto v___jp_2120_;
}
v___jp_2152_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v_opts_2193_; uint8_t v_hasTrace_2194_; 
v___x_2184_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_2176_);
v___x_2185_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2185_, 0, v___y_2172_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
lean_ctor_set(v___x_2185_, 2, v___y_2167_);
lean_ctor_set(v___x_2185_, 3, v_traceState_2179_);
lean_ctor_set_uint8(v___x_2185_, sizeof(void*)*4, v_val_2099_);
v___x_2186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
lean_ctor_set(v___x_2186_, 1, v_reportedCmdState_2183_);
v___x_2187_ = lean_io_promise_resolve(v___x_2186_, v___x_2117_);
lean_dec(v___x_2117_);
v___x_2188_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_2178_);
lean_inc(v___y_2181_);
v___x_2189_ = l_BaseIO_chainTask___redArg(v___x_2188_, v___y_2166_, v___y_2181_, v___x_2103_);
v___x_2190_ = l_Lean_inheritedTraceOptions;
v___x_2191_ = lean_st_ref_get(v___x_2190_);
v___x_2192_ = l_List_head_x21___redArg(v___x_2104_, v_scopes_2177_);
lean_dec(v_scopes_2177_);
lean_dec_ref(v___x_2104_);
v_opts_2193_ = lean_ctor_get(v___x_2192_, 1);
lean_inc_ref(v_opts_2193_);
lean_dec(v___x_2192_);
v_hasTrace_2194_ = lean_ctor_get_uint8(v_opts_2193_, sizeof(void*)*1);
if (v_hasTrace_2194_ == 0)
{
lean_dec_ref(v_opts_2193_);
lean_dec(v___x_2191_);
lean_dec(v___y_2182_);
lean_dec_ref(v_snapshotTasks_2180_);
lean_dec_ref(v_env_2175_);
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2161_);
lean_dec(v___y_2160_);
lean_dec(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2153_);
lean_dec(v_pos_2108_);
lean_dec_ref(v___f_2107_);
lean_dec_ref(v___f_2106_);
lean_dec_ref(v___f_2105_);
lean_dec(v___x_2102_);
v___y_2140_ = v___y_2162_;
v___y_2141_ = v___y_2170_;
v___y_2142_ = v___y_2163_;
v___y_2143_ = v___y_2171_;
v___y_2144_ = v___y_2168_;
v___y_2145_ = v___y_2173_;
v___y_2146_ = v___y_2174_;
v___y_2147_ = v___y_2181_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_2196_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2191_, v_opts_2193_, v___x_2195_);
lean_dec(v___x_2191_);
if (v___x_2196_ == 0)
{
lean_dec_ref(v_opts_2193_);
lean_dec(v___y_2182_);
lean_dec_ref(v_snapshotTasks_2180_);
lean_dec_ref(v_env_2175_);
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2161_);
lean_dec(v___y_2160_);
lean_dec(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2153_);
lean_dec(v_pos_2108_);
lean_dec_ref(v___f_2107_);
lean_dec_ref(v___f_2106_);
lean_dec_ref(v___f_2105_);
lean_dec(v___x_2102_);
v___y_2140_ = v___y_2162_;
v___y_2141_ = v___y_2170_;
v___y_2142_ = v___y_2163_;
v___y_2143_ = v___y_2171_;
v___y_2144_ = v___y_2168_;
v___y_2145_ = v___y_2173_;
v___y_2146_ = v___y_2174_;
v___y_2147_ = v___y_2181_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___f_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_inc_n(v___y_2181_, 3);
v___x_2197_ = lean_task_map(v___f_2105_, v___y_2165_, v___y_2181_, v___x_2103_);
lean_inc_n(v___y_2162_, 3);
lean_inc_n(v___y_2164_, 2);
lean_inc_n(v___y_2182_, 2);
v___x_2198_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2198_, 0, v___y_2182_);
lean_ctor_set(v___x_2198_, 1, v___y_2164_);
lean_ctor_set(v___x_2198_, 2, v___y_2162_);
lean_ctor_set(v___x_2198_, 3, v___x_2197_);
v___x_2199_ = lean_task_map(v___f_2106_, v___y_2161_, v___y_2181_, v___x_2103_);
v___x_2200_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2200_, 0, v___y_2182_);
lean_ctor_set(v___x_2200_, 1, v___y_2164_);
lean_ctor_set(v___x_2200_, 2, v___y_2162_);
lean_ctor_set(v___x_2200_, 3, v___x_2199_);
v___x_2201_ = lean_task_map(v___f_2107_, v___y_2169_, v___y_2181_, v___x_2103_);
v___x_2202_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2202_, 0, v___y_2182_);
lean_ctor_set(v___x_2202_, 1, v___y_2164_);
lean_ctor_set(v___x_2202_, 2, v___y_2162_);
lean_ctor_set(v___x_2202_, 3, v___x_2201_);
v___x_2203_ = lean_unsigned_to_nat(3u);
v___x_2204_ = lean_mk_empty_array_with_capacity(v___x_2203_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2198_);
v___x_2206_ = lean_array_push(v___x_2205_, v___x_2200_);
v___x_2207_ = lean_array_push(v___x_2206_, v___x_2202_);
v___x_2208_ = l_Array_append___redArg(v___x_2207_, v_snapshotTasks_2180_);
lean_inc_ref(v___y_2163_);
v___x_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___y_2163_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = lean_box_usize(v___y_2154_);
v___x_2211_ = lean_box(v___x_2103_);
v___x_2212_ = lean_box(v_val_2099_);
v___x_2213_ = lean_box(v___x_2196_);
lean_inc_ref(v___x_2209_);
lean_inc_ref(v___y_2159_);
lean_inc_ref(v_a_2100_);
v___f_2214_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_2214_, 0, v_a_2100_);
lean_closure_set(v___f_2214_, 1, v_opts_2193_);
lean_closure_set(v___f_2214_, 2, v___x_2102_);
lean_closure_set(v___f_2214_, 3, v___y_2153_);
lean_closure_set(v___f_2214_, 4, v___y_2157_);
lean_closure_set(v___f_2214_, 5, v___x_2210_);
lean_closure_set(v___f_2214_, 6, v___x_2211_);
lean_closure_set(v___f_2214_, 7, v_env_2175_);
lean_closure_set(v___f_2214_, 8, v___y_2159_);
lean_closure_set(v___f_2214_, 9, v___x_2190_);
lean_closure_set(v___f_2214_, 10, v___y_2160_);
lean_closure_set(v___f_2214_, 11, v___x_2212_);
lean_closure_set(v___f_2214_, 12, v___x_2209_);
lean_closure_set(v___f_2214_, 13, v_pos_2108_);
lean_closure_set(v___f_2214_, 14, v___y_2155_);
lean_closure_set(v___f_2214_, 15, v___y_2158_);
lean_closure_set(v___f_2214_, 16, v___y_2156_);
lean_closure_set(v___f_2214_, 17, v___x_2213_);
v___x_2215_ = l_Lean_Language_SnapshotTree_waitAll(v___x_2209_);
v___x_2216_ = lean_io_bind_task(v___x_2215_, v___f_2214_, v___y_2181_, v_val_2099_);
v___y_2121_ = v___y_2162_;
v___y_2122_ = v___y_2170_;
v___y_2123_ = v___y_2163_;
v___y_2124_ = v___y_2171_;
v___y_2125_ = v___y_2168_;
v___y_2126_ = v___y_2173_;
v___y_2127_ = v___y_2174_;
v_snapshotTasks_2128_ = v_snapshotTasks_2180_;
v_traceTask_2129_ = v___x_2216_;
goto v___jp_2120_;
}
}
}
v___jp_2217_:
{
lean_object* v_env_2243_; lean_object* v_messages_2244_; lean_object* v_scopes_2245_; lean_object* v_infoState_2246_; lean_object* v_traceState_2247_; lean_object* v_snapshotTasks_2248_; 
v_env_2243_ = lean_ctor_get(v___y_2239_, 0);
lean_inc_ref(v_env_2243_);
v_messages_2244_ = lean_ctor_get(v___y_2239_, 1);
lean_inc_ref(v_messages_2244_);
v_scopes_2245_ = lean_ctor_get(v___y_2239_, 2);
lean_inc(v_scopes_2245_);
v_infoState_2246_ = lean_ctor_get(v___y_2239_, 8);
lean_inc_ref(v_infoState_2246_);
v_traceState_2247_ = lean_ctor_get(v___y_2239_, 9);
lean_inc_ref(v_traceState_2247_);
v_snapshotTasks_2248_ = lean_ctor_get(v___y_2239_, 10);
lean_inc_ref(v_snapshotTasks_2248_);
v___y_2153_ = v___y_2218_;
v___y_2154_ = v___y_2219_;
v___y_2155_ = v___y_2220_;
v___y_2156_ = v___y_2222_;
v___y_2157_ = v___y_2221_;
v___y_2158_ = v___y_2223_;
v___y_2159_ = v___y_2224_;
v___y_2160_ = v___y_2225_;
v___y_2161_ = v___y_2226_;
v___y_2162_ = v___y_2227_;
v___y_2163_ = v___y_2228_;
v___y_2164_ = v___y_2229_;
v___y_2165_ = v___y_2230_;
v___y_2166_ = v___y_2231_;
v___y_2167_ = v___y_2232_;
v___y_2168_ = v___y_2233_;
v___y_2169_ = v___y_2234_;
v___y_2170_ = v___y_2235_;
v___y_2171_ = v___y_2236_;
v___y_2172_ = v___y_2237_;
v___y_2173_ = v___y_2238_;
v___y_2174_ = v___y_2239_;
v_env_2175_ = v_env_2243_;
v_messages_2176_ = v_messages_2244_;
v_scopes_2177_ = v_scopes_2245_;
v_infoState_2178_ = v_infoState_2246_;
v_traceState_2179_ = v_traceState_2247_;
v_snapshotTasks_2180_ = v_snapshotTasks_2248_;
v___y_2181_ = v___y_2240_;
v___y_2182_ = v___y_2241_;
v_reportedCmdState_2183_ = v_reportedCmdState_2242_;
goto v___jp_2152_;
}
v___jp_2250_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___f_2273_; uint8_t v___x_2274_; 
v___x_2269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___y_2268_);
lean_ctor_set(v___x_2269_, 1, v___x_2116_);
lean_inc_ref(v___y_2257_);
lean_inc_n(v_pos_2108_, 2);
lean_inc_ref(v_cmds_2096_);
lean_inc(v_fst_2097_);
v___x_2270_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_2097_, v_cmds_2096_, v_cmdState_2109_, v_pos_2108_, v___x_2269_, v___y_2257_, v_a_2100_);
v___x_2271_ = lean_box(v_val_2099_);
v___x_2272_ = lean_box(v___x_2103_);
lean_inc_ref(v_a_2100_);
lean_inc(v___y_2256_);
lean_inc_ref(v___x_2104_);
lean_inc_ref(v___x_2270_);
lean_inc_ref(v___y_2259_);
lean_inc_ref(v___y_2253_);
v___f_2273_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_2273_, 0, v___y_2253_);
lean_closure_set(v___f_2273_, 1, v___y_2259_);
lean_closure_set(v___f_2273_, 2, v___x_2271_);
lean_closure_set(v___f_2273_, 3, v___x_2118_);
lean_closure_set(v___f_2273_, 4, v___x_2270_);
lean_closure_set(v___f_2273_, 5, v___x_2104_);
lean_closure_set(v___f_2273_, 6, v___y_2256_);
lean_closure_set(v___f_2273_, 7, v___x_2272_);
lean_closure_set(v___f_2273_, 8, v_a_2100_);
lean_closure_set(v___f_2273_, 9, v_pos_2108_);
lean_closure_set(v___f_2273_, 10, v___x_2110_);
v___x_2274_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2111_, v___x_2249_);
if (v___x_2274_ == 0)
{
lean_inc_ref(v___x_2270_);
lean_inc(v___y_2262_);
lean_inc(v___y_2258_);
lean_inc_ref(v___y_2255_);
lean_inc(v___y_2256_);
lean_inc_ref(v___y_2253_);
v___y_2218_ = v___y_2251_;
v___y_2219_ = v___y_2252_;
v___y_2220_ = v___y_2253_;
v___y_2221_ = v___y_2256_;
v___y_2222_ = v___y_2255_;
v___y_2223_ = v___y_2258_;
v___y_2224_ = v___y_2259_;
v___y_2225_ = v___y_2262_;
v___y_2226_ = v___y_2263_;
v___y_2227_ = v___y_2262_;
v___y_2228_ = v___y_2255_;
v___y_2229_ = v___y_2254_;
v___y_2230_ = v___y_2260_;
v___y_2231_ = v___f_2273_;
v___y_2232_ = v___y_2258_;
v___y_2233_ = v___y_2264_;
v___y_2234_ = v___y_2265_;
v___y_2235_ = v___y_2257_;
v___y_2236_ = v___y_2266_;
v___y_2237_ = v___y_2253_;
v___y_2238_ = v___y_2267_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___y_2256_;
v___y_2241_ = v___y_2261_;
v_reportedCmdState_2242_ = v___x_2270_;
goto v___jp_2217_;
}
else
{
uint8_t v___x_2275_; 
lean_inc(v_fst_2097_);
v___x_2275_ = l_Lean_Parser_isTerminalCommand(v_fst_2097_);
if (v___x_2275_ == 0)
{
if (v___x_2274_ == 0)
{
lean_inc_ref(v___x_2270_);
lean_inc(v___y_2262_);
lean_inc(v___y_2258_);
lean_inc_ref(v___y_2255_);
lean_inc(v___y_2256_);
lean_inc_ref(v___y_2253_);
v___y_2218_ = v___y_2251_;
v___y_2219_ = v___y_2252_;
v___y_2220_ = v___y_2253_;
v___y_2221_ = v___y_2256_;
v___y_2222_ = v___y_2255_;
v___y_2223_ = v___y_2258_;
v___y_2224_ = v___y_2259_;
v___y_2225_ = v___y_2262_;
v___y_2226_ = v___y_2263_;
v___y_2227_ = v___y_2262_;
v___y_2228_ = v___y_2255_;
v___y_2229_ = v___y_2254_;
v___y_2230_ = v___y_2260_;
v___y_2231_ = v___f_2273_;
v___y_2232_ = v___y_2258_;
v___y_2233_ = v___y_2264_;
v___y_2234_ = v___y_2265_;
v___y_2235_ = v___y_2257_;
v___y_2236_ = v___y_2266_;
v___y_2237_ = v___y_2253_;
v___y_2238_ = v___y_2267_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___y_2256_;
v___y_2241_ = v___y_2261_;
v_reportedCmdState_2242_ = v___x_2270_;
goto v___jp_2217_;
}
else
{
lean_object* v_env_2276_; lean_object* v_messages_2277_; lean_object* v_scopes_2278_; lean_object* v_infoState_2279_; lean_object* v_traceState_2280_; lean_object* v_snapshotTasks_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v_env_2276_ = lean_ctor_get(v___x_2270_, 0);
lean_inc_ref_n(v_env_2276_, 2);
v_messages_2277_ = lean_ctor_get(v___x_2270_, 1);
lean_inc_ref(v_messages_2277_);
v_scopes_2278_ = lean_ctor_get(v___x_2270_, 2);
lean_inc(v_scopes_2278_);
v_infoState_2279_ = lean_ctor_get(v___x_2270_, 8);
lean_inc_ref(v_infoState_2279_);
v_traceState_2280_ = lean_ctor_get(v___x_2270_, 9);
lean_inc_ref(v_traceState_2280_);
v_snapshotTasks_2281_ = lean_ctor_get(v___x_2270_, 10);
lean_inc_ref(v_snapshotTasks_2281_);
v___x_2282_ = lean_mk_empty_array_with_capacity(v___y_2251_);
lean_inc_ref(v___x_2282_);
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
lean_inc_n(v___y_2256_, 4);
v___x_2284_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
lean_ctor_set(v___x_2284_, 1, v___x_2282_);
lean_ctor_set(v___x_2284_, 2, v___y_2256_);
lean_ctor_set(v___x_2284_, 3, v___y_2256_);
lean_ctor_set_usize(v___x_2284_, 4, v___y_2252_);
v___x_2285_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2284_, 2);
v___x_2286_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2284_);
lean_ctor_set(v___x_2286_, 2, v___x_2285_);
v___x_2287_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2288_ = l_Lean_Options_empty;
v___x_2289_ = lean_box(0);
v___x_2290_ = lean_mk_empty_array_with_capacity(v___y_2256_);
lean_inc_ref_n(v___x_2290_, 3);
lean_inc_n(v___x_2102_, 2);
v___x_2291_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2291_, 0, v___x_2287_);
lean_ctor_set(v___x_2291_, 1, v___x_2288_);
lean_ctor_set(v___x_2291_, 2, v___x_2102_);
lean_ctor_set(v___x_2291_, 3, v___x_2289_);
lean_ctor_set(v___x_2291_, 4, v___x_2289_);
lean_ctor_set(v___x_2291_, 5, v___x_2290_);
lean_ctor_set(v___x_2291_, 6, v___x_2290_);
lean_ctor_set(v___x_2291_, 7, v___x_2289_);
lean_ctor_set(v___x_2291_, 8, v___x_2289_);
lean_ctor_set(v___x_2291_, 9, v___x_2289_);
lean_ctor_set_uint8(v___x_2291_, sizeof(void*)*10, v_val_2099_);
lean_ctor_set_uint8(v___x_2291_, sizeof(void*)*10 + 1, v_val_2099_);
lean_ctor_set_uint8(v___x_2291_, sizeof(void*)*10 + 2, v_val_2099_);
v___x_2292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2291_);
lean_ctor_set(v___x_2292_, 1, v___x_2289_);
v___x_2293_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2294_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2295_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_2102_);
v___x_2296_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2297_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
lean_ctor_set(v___x_2297_, 2, v___x_2284_);
lean_ctor_set_uint8(v___x_2297_, sizeof(void*)*3, v___x_2103_);
v___x_2298_ = lean_box(0);
lean_inc_ref(v___y_2259_);
v___x_2299_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2299_, 0, v_env_2276_);
lean_ctor_set(v___x_2299_, 1, v___x_2286_);
lean_ctor_set(v___x_2299_, 2, v___x_2292_);
lean_ctor_set(v___x_2299_, 3, v___x_2285_);
lean_ctor_set(v___x_2299_, 4, v___x_2293_);
lean_ctor_set(v___x_2299_, 5, v___y_2256_);
lean_ctor_set(v___x_2299_, 6, v___x_2294_);
lean_ctor_set(v___x_2299_, 7, v___x_2295_);
lean_ctor_set(v___x_2299_, 8, v___x_2297_);
lean_ctor_set(v___x_2299_, 9, v___y_2259_);
lean_ctor_set(v___x_2299_, 10, v___x_2290_);
lean_ctor_set(v___x_2299_, 11, v___x_2298_);
lean_ctor_set(v___x_2299_, 12, v___x_2290_);
lean_inc(v___y_2262_);
lean_inc(v___y_2258_);
lean_inc_ref(v___y_2255_);
lean_inc_ref(v___y_2253_);
v___y_2153_ = v___y_2251_;
v___y_2154_ = v___y_2252_;
v___y_2155_ = v___y_2253_;
v___y_2156_ = v___y_2255_;
v___y_2157_ = v___y_2256_;
v___y_2158_ = v___y_2258_;
v___y_2159_ = v___y_2259_;
v___y_2160_ = v___y_2262_;
v___y_2161_ = v___y_2263_;
v___y_2162_ = v___y_2262_;
v___y_2163_ = v___y_2255_;
v___y_2164_ = v___y_2254_;
v___y_2165_ = v___y_2260_;
v___y_2166_ = v___f_2273_;
v___y_2167_ = v___y_2258_;
v___y_2168_ = v___y_2264_;
v___y_2169_ = v___y_2265_;
v___y_2170_ = v___y_2257_;
v___y_2171_ = v___y_2266_;
v___y_2172_ = v___y_2253_;
v___y_2173_ = v___y_2267_;
v___y_2174_ = v___x_2270_;
v_env_2175_ = v_env_2276_;
v_messages_2176_ = v_messages_2277_;
v_scopes_2177_ = v_scopes_2278_;
v_infoState_2178_ = v_infoState_2279_;
v_traceState_2179_ = v_traceState_2280_;
v_snapshotTasks_2180_ = v_snapshotTasks_2281_;
v___y_2181_ = v___y_2256_;
v___y_2182_ = v___y_2261_;
v_reportedCmdState_2183_ = v___x_2299_;
goto v___jp_2152_;
}
}
else
{
lean_inc_ref(v___x_2270_);
lean_inc(v___y_2262_);
lean_inc(v___y_2258_);
lean_inc_ref(v___y_2255_);
lean_inc(v___y_2256_);
lean_inc_ref(v___y_2253_);
v___y_2218_ = v___y_2251_;
v___y_2219_ = v___y_2252_;
v___y_2220_ = v___y_2253_;
v___y_2221_ = v___y_2256_;
v___y_2222_ = v___y_2255_;
v___y_2223_ = v___y_2258_;
v___y_2224_ = v___y_2259_;
v___y_2225_ = v___y_2262_;
v___y_2226_ = v___y_2263_;
v___y_2227_ = v___y_2262_;
v___y_2228_ = v___y_2255_;
v___y_2229_ = v___y_2254_;
v___y_2230_ = v___y_2260_;
v___y_2231_ = v___f_2273_;
v___y_2232_ = v___y_2258_;
v___y_2233_ = v___y_2264_;
v___y_2234_ = v___y_2265_;
v___y_2235_ = v___y_2257_;
v___y_2236_ = v___y_2266_;
v___y_2237_ = v___y_2253_;
v___y_2238_ = v___y_2267_;
v___y_2239_ = v___x_2270_;
v___y_2240_ = v___y_2256_;
v___y_2241_ = v___y_2261_;
v_reportedCmdState_2242_ = v___x_2270_;
goto v___jp_2217_;
}
}
}
v___jp_2300_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; size_t v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2306_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2101_);
v___x_2307_ = l_IO_CancelToken_new();
v___x_2308_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1));
lean_inc(v___x_2102_);
v___x_2309_ = l_Lean_Name_str___override(v___x_2102_, v___x_2308_);
v___x_2310_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_2311_ = l_Lean_Name_str___override(v___x_2309_, v___x_2310_);
v___x_2312_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_2313_ = l_Lean_Name_str___override(v___x_2311_, v___x_2312_);
v___x_2314_ = l_Lean_Name_str___override(v___x_2313_, v___x_2310_);
v___x_2315_ = lean_unsigned_to_nat(0u);
v___x_2316_ = l_Lean_Name_num___override(v___x_2314_, v___x_2315_);
v___x_2317_ = l_Lean_Name_str___override(v___x_2316_, v___x_2310_);
v___x_2318_ = l_Lean_Name_str___override(v___x_2317_, v___x_2312_);
v___x_2319_ = l_Lean_Name_str___override(v___x_2318_, v___x_2310_);
v___x_2320_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2321_ = l_Lean_Name_str___override(v___x_2319_, v___x_2320_);
v___x_2322_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2323_ = l_Lean_Name_str___override(v___x_2321_, v___x_2322_);
v___x_2324_ = l_Lean_Name_toString(v___x_2323_, v___x_2103_);
v___x_2325_ = lean_box(0);
v___x_2326_ = lean_unsigned_to_nat(32u);
v___x_2327_ = lean_mk_empty_array_with_capacity(v___x_2326_);
lean_dec_ref(v___x_2327_);
v___x_2328_ = ((size_t)5ULL);
v___x_2329_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
lean_inc_ref_n(v___x_2324_, 2);
v___x_2330_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2330_, 0, v___x_2324_);
lean_ctor_set(v___x_2330_, 1, v___x_2306_);
lean_ctor_set(v___x_2330_, 2, v___x_2325_);
lean_ctor_set(v___x_2330_, 3, v___x_2329_);
lean_ctor_set_uint8(v___x_2330_, sizeof(void*)*4, v_val_2099_);
v___x_2331_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2332_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2332_, 0, v___x_2324_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
lean_ctor_set(v___x_2332_, 2, v___x_2325_);
lean_ctor_set(v___x_2332_, 3, v___x_2329_);
lean_ctor_set_uint8(v___x_2332_, sizeof(void*)*4, v_val_2099_);
lean_inc(v___y_2304_);
v___x_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___y_2304_);
v___x_2334_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2333_);
lean_inc_ref(v___x_2307_);
v___x_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2307_);
v___x_2336_ = l_IO_Promise_result_x21___redArg(v___x_2116_);
lean_inc_ref(v___x_2336_);
lean_inc(v___x_2334_);
lean_inc_ref_n(v___x_2333_, 3);
v___x_2337_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2333_);
lean_ctor_set(v___x_2337_, 1, v___x_2334_);
lean_ctor_set(v___x_2337_, 2, v___x_2335_);
lean_ctor_set(v___x_2337_, 3, v___x_2336_);
v___x_2338_ = l_IO_Promise_result_x21___redArg(v___x_2117_);
lean_inc_ref(v___x_2338_);
lean_inc_n(v___y_2301_, 3);
v___x_2339_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2333_);
lean_ctor_set(v___x_2339_, 1, v___y_2301_);
lean_ctor_set(v___x_2339_, 2, v___x_2325_);
lean_ctor_set(v___x_2339_, 3, v___x_2338_);
v___x_2340_ = l_IO_Promise_result_x21___redArg(v___x_2118_);
lean_inc_ref(v___x_2340_);
v___x_2341_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2333_);
lean_ctor_set(v___x_2341_, 1, v___y_2301_);
lean_ctor_set(v___x_2341_, 2, v___x_2325_);
lean_ctor_set(v___x_2341_, 3, v___x_2340_);
v___x_2342_ = l_IO_Promise_result_x21___redArg(v___x_2119_);
v___x_2343_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2325_);
lean_ctor_set(v___x_2343_, 1, v___y_2301_);
lean_ctor_set(v___x_2343_, 2, v___x_2325_);
lean_ctor_set(v___x_2343_, 3, v___x_2342_);
lean_inc_ref(v___x_2332_);
v___x_2344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2332_);
lean_ctor_set(v___x_2344_, 1, v___x_2337_);
lean_ctor_set(v___x_2344_, 2, v___x_2339_);
lean_ctor_set(v___x_2344_, 3, v___x_2341_);
lean_ctor_set(v___x_2344_, 4, v___x_2343_);
v___x_2345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2330_);
lean_ctor_set(v___x_2345_, 1, v___y_2304_);
lean_ctor_set(v___x_2345_, 2, v___y_2303_);
lean_ctor_set(v___x_2345_, 3, v___x_2344_);
lean_ctor_set(v___x_2345_, 4, v___y_2305_);
v___x_2346_ = lean_io_promise_resolve(v___x_2345_, v_prom_2112_);
if (lean_obj_tag(v_old_x3f_2113_) == 0)
{
v___y_2251_ = v___x_2326_;
v___y_2252_ = v___x_2328_;
v___y_2253_ = v___x_2324_;
v___y_2254_ = v___x_2334_;
v___y_2255_ = v___x_2332_;
v___y_2256_ = v___x_2315_;
v___y_2257_ = v___x_2307_;
v___y_2258_ = v___x_2325_;
v___y_2259_ = v___x_2329_;
v___y_2260_ = v___x_2336_;
v___y_2261_ = v___x_2333_;
v___y_2262_ = v___x_2325_;
v___y_2263_ = v___x_2338_;
v___y_2264_ = v___x_2325_;
v___y_2265_ = v___x_2340_;
v___y_2266_ = v___y_2301_;
v___y_2267_ = v___y_2302_;
v___y_2268_ = v___x_2325_;
goto v___jp_2250_;
}
else
{
lean_object* v_val_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2358_; 
v_val_2347_ = lean_ctor_get(v_old_x3f_2113_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_old_x3f_2113_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2349_ = v_old_x3f_2113_;
v_isShared_2350_ = v_isSharedCheck_2358_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_val_2347_);
lean_dec(v_old_x3f_2113_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2358_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v_elabSnap_2351_; lean_object* v_stx_2352_; lean_object* v_elabSnap_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
v_elabSnap_2351_ = lean_ctor_get(v_val_2347_, 3);
lean_inc_ref(v_elabSnap_2351_);
v_stx_2352_ = lean_ctor_get(v_val_2347_, 1);
lean_inc(v_stx_2352_);
lean_dec(v_val_2347_);
v_elabSnap_2353_ = lean_ctor_get(v_elabSnap_2351_, 1);
lean_inc_ref(v_elabSnap_2353_);
lean_dec_ref(v_elabSnap_2351_);
v___x_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2354_, 0, v_stx_2352_);
lean_ctor_set(v___x_2354_, 1, v_elabSnap_2353_);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v___x_2354_);
v___x_2356_ = v___x_2349_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2354_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
v___y_2251_ = v___x_2326_;
v___y_2252_ = v___x_2328_;
v___y_2253_ = v___x_2324_;
v___y_2254_ = v___x_2334_;
v___y_2255_ = v___x_2332_;
v___y_2256_ = v___x_2315_;
v___y_2257_ = v___x_2307_;
v___y_2258_ = v___x_2325_;
v___y_2259_ = v___x_2329_;
v___y_2260_ = v___x_2336_;
v___y_2261_ = v___x_2333_;
v___y_2262_ = v___x_2325_;
v___y_2263_ = v___x_2338_;
v___y_2264_ = v___x_2325_;
v___y_2265_ = v___x_2340_;
v___y_2266_ = v___y_2301_;
v___y_2267_ = v___y_2302_;
v___y_2268_ = v___x_2356_;
goto v___jp_2250_;
}
}
}
}
v___jp_2359_:
{
lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2363_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2362_);
lean_inc(v_fst_2097_);
v___x_2364_ = l_Lean_Parser_isTerminalCommand(v_fst_2097_);
if (v___x_2364_ == 0)
{
lean_object* v___x_2365_; lean_object* v_toProcessingContext_2366_; lean_object* v_pos_2367_; lean_object* v_endPos_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2365_ = lean_io_promise_new();
v_toProcessingContext_2366_ = lean_ctor_get(v_a_2100_, 0);
v_pos_2367_ = lean_ctor_get(v_fst_2098_, 0);
v_endPos_2368_ = lean_ctor_get(v_toProcessingContext_2366_, 3);
lean_inc(v___x_2365_);
v___x_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2365_);
v___x_2370_ = lean_box(0);
lean_inc(v_endPos_2368_);
lean_inc(v_pos_2367_);
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v_pos_2367_);
lean_ctor_set(v___x_2371_, 1, v_endPos_2368_);
v___x_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
v___x_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2373_, 0, v_parseCancelTk_2114_);
v___x_2374_ = l_IO_Promise_result_x21___redArg(v___x_2365_);
lean_dec(v___x_2365_);
v___x_2375_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2370_);
lean_ctor_set(v___x_2375_, 1, v___x_2372_);
lean_ctor_set(v___x_2375_, 2, v___x_2373_);
lean_ctor_set(v___x_2375_, 3, v___x_2374_);
v___x_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
v___y_2301_ = v___x_2363_;
v___y_2302_ = v___x_2369_;
v___y_2303_ = v___y_2360_;
v___y_2304_ = v___y_2361_;
v___y_2305_ = v___x_2376_;
goto v___jp_2300_;
}
else
{
lean_object* v___x_2377_; 
lean_dec_ref(v_parseCancelTk_2114_);
v___x_2377_ = lean_box(0);
v___y_2301_ = v___x_2363_;
v___y_2302_ = v___x_2377_;
v___y_2303_ = v___y_2360_;
v___y_2304_ = v___y_2361_;
v___y_2305_ = v___x_2377_;
goto v___jp_2300_;
}
}
v___jp_2378_:
{
lean_object* v___x_2381_; 
lean_inc(v_fst_2097_);
v___x_2381_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v_fst_2097_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v___x_2382_; 
v___x_2382_ = lean_box(0);
v___y_2360_ = v_snd_2380_;
v___y_2361_ = v_fst_2379_;
v___y_2362_ = v___x_2382_;
goto v___jp_2359_;
}
else
{
lean_object* v_val_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2391_; 
v_val_2383_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2385_ = v___x_2381_;
v_isShared_2386_ = v_isSharedCheck_2391_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_val_2383_);
lean_dec(v___x_2381_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2391_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2387_; lean_object* v___x_2389_; 
lean_inc(v_val_2383_);
v___x_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2387_, 0, v_val_2383_);
lean_ctor_set(v___x_2387_, 1, v_val_2383_);
if (v_isShared_2386_ == 0)
{
lean_ctor_set(v___x_2385_, 0, v___x_2387_);
v___x_2389_ = v___x_2385_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
v___y_2360_ = v_snd_2380_;
v___y_2361_ = v_fst_2379_;
v___y_2362_ = v___x_2389_;
goto v___jp_2359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed(lean_object** _args){
lean_object* v_cmds_2396_ = _args[0];
lean_object* v_fst_2397_ = _args[1];
lean_object* v_fst_2398_ = _args[2];
lean_object* v_val_2399_ = _args[3];
lean_object* v_a_2400_ = _args[4];
lean_object* v_snd_2401_ = _args[5];
lean_object* v___x_2402_ = _args[6];
lean_object* v___x_2403_ = _args[7];
lean_object* v___x_2404_ = _args[8];
lean_object* v___f_2405_ = _args[9];
lean_object* v___f_2406_ = _args[10];
lean_object* v___f_2407_ = _args[11];
lean_object* v_pos_2408_ = _args[12];
lean_object* v_cmdState_2409_ = _args[13];
lean_object* v___x_2410_ = _args[14];
lean_object* v_opts_2411_ = _args[15];
lean_object* v_prom_2412_ = _args[16];
lean_object* v_old_x3f_2413_ = _args[17];
lean_object* v_parseCancelTk_2414_ = _args[18];
lean_object* v___y_2415_ = _args[19];
_start:
{
uint8_t v_val_36350__boxed_2416_; uint8_t v___x_36353__boxed_2417_; lean_object* v_res_2418_; 
v_val_36350__boxed_2416_ = lean_unbox(v_val_2399_);
v___x_36353__boxed_2417_ = lean_unbox(v___x_2403_);
v_res_2418_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8(v_cmds_2396_, v_fst_2397_, v_fst_2398_, v_val_36350__boxed_2416_, v_a_2400_, v_snd_2401_, v___x_2402_, v___x_36353__boxed_2417_, v___x_2404_, v___f_2405_, v___f_2406_, v___f_2407_, v_pos_2408_, v_cmdState_2409_, v___x_2410_, v_opts_2411_, v_prom_2412_, v_old_x3f_2413_, v_parseCancelTk_2414_);
lean_dec(v_prom_2412_);
lean_dec_ref(v_opts_2411_);
lean_dec_ref(v_a_2400_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object* v_old_x3f_2421_, lean_object* v_parserState_2422_, lean_object* v_cmdState_2423_, lean_object* v_prom_2424_, uint8_t v_sync_2425_, lean_object* v_parseCancelTk_2426_, lean_object* v_cmds_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v___y_2433_; lean_object* v_toSnapshot_2435_; lean_object* v_stx_2436_; lean_object* v_parserState_2437_; lean_object* v_elabSnap_2438_; lean_object* v_val_2439_; lean_object* v_newParserState_2440_; lean_object* v___f_2471_; lean_object* v___f_2472_; lean_object* v___f_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; uint8_t v___y_2477_; lean_object* v___y_2478_; uint8_t v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v___y_2484_; lean_object* v___y_2485_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; uint8_t v___y_2502_; uint8_t v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; lean_object* v_fst_2516_; lean_object* v_snd_2517_; uint8_t v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; uint8_t v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___x_2611_; 
v___f_2471_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0));
v___f_2472_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1));
v___f_2473_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2));
v___x_2474_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2475_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_2611_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5));
if (lean_obj_tag(v_old_x3f_2421_) == 1)
{
lean_object* v_val_2644_; lean_object* v_nextCmdSnap_x3f_2645_; 
v_val_2644_ = lean_ctor_get(v_old_x3f_2421_, 0);
v_nextCmdSnap_x3f_2645_ = lean_ctor_get(v_val_2644_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_2645_) == 0)
{
goto v___jp_2612_;
}
else
{
lean_object* v_toSnapshot_2646_; lean_object* v_stx_2647_; lean_object* v_parserState_2648_; lean_object* v_elabSnap_2649_; lean_object* v_val_2650_; lean_object* v___x_2651_; 
v_toSnapshot_2646_ = lean_ctor_get(v_val_2644_, 0);
v_stx_2647_ = lean_ctor_get(v_val_2644_, 1);
v_parserState_2648_ = lean_ctor_get(v_val_2644_, 2);
v_elabSnap_2649_ = lean_ctor_get(v_val_2644_, 3);
v_val_2650_ = lean_ctor_get(v_nextCmdSnap_x3f_2645_, 0);
lean_inc(v_val_2650_);
v___x_2651_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2650_);
if (lean_obj_tag(v___x_2651_) == 1)
{
lean_object* v_val_2652_; lean_object* v_nextCmdSnap_x3f_2653_; 
v_val_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_val_2652_);
lean_dec_ref_known(v___x_2651_, 1);
v_nextCmdSnap_x3f_2653_ = lean_ctor_get(v_val_2652_, 4);
lean_inc(v_nextCmdSnap_x3f_2653_);
lean_dec(v_val_2652_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2653_) == 0)
{
goto v___jp_2612_;
}
else
{
lean_object* v_val_2654_; lean_object* v___x_2655_; 
v_val_2654_ = lean_ctor_get(v_nextCmdSnap_x3f_2653_, 0);
lean_inc(v_val_2654_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2653_, 1);
v___x_2655_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2654_);
if (lean_obj_tag(v___x_2655_) == 1)
{
lean_object* v_val_2656_; lean_object* v_parserState_2657_; lean_object* v_pos_2658_; uint8_t v___x_2659_; 
v_val_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_val_2656_);
lean_dec_ref_known(v___x_2655_, 1);
v_parserState_2657_ = lean_ctor_get(v_val_2656_, 2);
lean_inc_ref(v_parserState_2657_);
lean_dec(v_val_2656_);
v_pos_2658_ = lean_ctor_get(v_parserState_2657_, 0);
lean_inc(v_pos_2658_);
lean_dec_ref(v_parserState_2657_);
v___x_2659_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_2658_, v_a_2428_);
lean_dec(v_pos_2658_);
if (v___x_2659_ == 0)
{
goto v___jp_2612_;
}
else
{
lean_inc(v_val_2650_);
lean_inc_ref(v_elabSnap_2649_);
lean_inc_ref_n(v_parserState_2648_, 2);
lean_inc(v_stx_2647_);
lean_inc_ref(v_toSnapshot_2646_);
lean_dec_ref_known(v_old_x3f_2421_, 1);
lean_dec_ref(v_parseCancelTk_2426_);
lean_dec_ref(v_cmdState_2423_);
lean_dec_ref(v_parserState_2422_);
v_toSnapshot_2435_ = v_toSnapshot_2646_;
v_stx_2436_ = v_stx_2647_;
v_parserState_2437_ = v_parserState_2648_;
v_elabSnap_2438_ = v_elabSnap_2649_;
v_val_2439_ = v_val_2650_;
v_newParserState_2440_ = v_parserState_2648_;
goto v___jp_2434_;
}
}
else
{
lean_dec(v___x_2655_);
goto v___jp_2612_;
}
}
}
else
{
lean_dec(v___x_2651_);
goto v___jp_2612_;
}
}
}
else
{
goto v___jp_2612_;
}
v___jp_2430_:
{
lean_object* v___x_2431_; 
v___x_2431_ = lean_box(0);
return v___x_2431_;
}
v___jp_2432_:
{
goto v___jp_2430_;
}
v___jp_2434_:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v_resultSnap_2443_; lean_object* v_task_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2467_; 
v___x_2441_ = lean_io_promise_new();
v___x_2442_ = l_IO_CancelToken_new();
v_resultSnap_2443_ = lean_ctor_get(v_elabSnap_2438_, 2);
lean_inc_ref(v_resultSnap_2443_);
v_task_2444_ = lean_ctor_get(v_resultSnap_2443_, 3);
v_isSharedCheck_2467_ = !lean_is_exclusive(v_resultSnap_2443_);
if (v_isSharedCheck_2467_ == 0)
{
lean_object* v_unused_2468_; lean_object* v_unused_2469_; lean_object* v_unused_2470_; 
v_unused_2468_ = lean_ctor_get(v_resultSnap_2443_, 2);
lean_dec(v_unused_2468_);
v_unused_2469_ = lean_ctor_get(v_resultSnap_2443_, 1);
lean_dec(v_unused_2469_);
v_unused_2470_ = lean_ctor_get(v_resultSnap_2443_, 0);
lean_dec(v_unused_2470_);
v___x_2446_ = v_resultSnap_2443_;
v_isShared_2447_ = v_isSharedCheck_2467_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_task_2444_);
lean_dec(v_resultSnap_2443_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2467_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___f_2449_; lean_object* v___x_2450_; uint8_t v___x_2451_; lean_object* v___x_2452_; lean_object* v_toProcessingContext_2453_; lean_object* v_pos_2454_; lean_object* v_endPos_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2462_; 
v___x_2448_ = lean_box(v_sync_2425_);
lean_inc_ref(v_a_2428_);
lean_inc_ref(v___x_2442_);
lean_inc(v___x_2441_);
lean_inc_ref(v_newParserState_2440_);
lean_inc(v_stx_2436_);
v___f_2449_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed), 10, 8);
lean_closure_set(v___f_2449_, 0, v_val_2439_);
lean_closure_set(v___f_2449_, 1, v_cmds_2427_);
lean_closure_set(v___f_2449_, 2, v_stx_2436_);
lean_closure_set(v___f_2449_, 3, v_newParserState_2440_);
lean_closure_set(v___f_2449_, 4, v___x_2441_);
lean_closure_set(v___f_2449_, 5, v___x_2448_);
lean_closure_set(v___f_2449_, 6, v___x_2442_);
lean_closure_set(v___f_2449_, 7, v_a_2428_);
v___x_2450_ = lean_unsigned_to_nat(0u);
v___x_2451_ = 1;
v___x_2452_ = l_BaseIO_chainTask___redArg(v_task_2444_, v___f_2449_, v___x_2450_, v___x_2451_);
v_toProcessingContext_2453_ = lean_ctor_get(v_a_2428_, 0);
v_pos_2454_ = lean_ctor_get(v_newParserState_2440_, 0);
lean_inc(v_pos_2454_);
lean_dec_ref(v_newParserState_2440_);
v_endPos_2455_ = lean_ctor_get(v_toProcessingContext_2453_, 3);
v___x_2456_ = lean_box(0);
lean_inc(v_endPos_2455_);
v___x_2457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2457_, 0, v_pos_2454_);
lean_ctor_set(v___x_2457_, 1, v_endPos_2455_);
v___x_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
v___x_2459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2442_);
v___x_2460_ = l_IO_Promise_result_x21___redArg(v___x_2441_);
lean_dec(v___x_2441_);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 3, v___x_2460_);
lean_ctor_set(v___x_2446_, 2, v___x_2459_);
lean_ctor_set(v___x_2446_, 1, v___x_2458_);
lean_ctor_set(v___x_2446_, 0, v___x_2456_);
v___x_2462_ = v___x_2446_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v___x_2456_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2466_, 2, v___x_2459_);
lean_ctor_set(v_reuseFailAlloc_2466_, 3, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
v___x_2464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2464_, 0, v_toSnapshot_2435_);
lean_ctor_set(v___x_2464_, 1, v_stx_2436_);
lean_ctor_set(v___x_2464_, 2, v_parserState_2437_);
lean_ctor_set(v___x_2464_, 3, v_elabSnap_2438_);
lean_ctor_set(v___x_2464_, 4, v___x_2463_);
v___x_2465_ = lean_io_promise_resolve(v___x_2464_, v_prom_2424_);
lean_dec(v_prom_2424_);
return v___x_2465_;
}
}
}
v___jp_2476_:
{
lean_object* v___x_2494_; uint8_t v___x_2495_; 
v___x_2494_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2493_);
v___x_2495_ = l_Lean_Parser_isTerminalCommand(v___y_2478_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2496_ = lean_io_promise_new();
v___x_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
v___x_2498_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2494_, v___y_2490_, v_cmds_2427_, v___y_2480_, v___y_2481_, v___y_2477_, v_a_2428_, v___y_2482_, v___y_2487_, v___y_2479_, v___y_2483_, v___y_2492_, v___y_2484_, v___x_2474_, v___f_2473_, v___f_2472_, v___f_2471_, v___y_2486_, v_cmdState_2423_, v___y_2485_, v___x_2475_, v___y_2489_, v___y_2491_, v___y_2488_, v_prom_2424_, v_old_x3f_2421_, v_parseCancelTk_2426_, v___x_2497_);
lean_dec(v_prom_2424_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2484_);
lean_dec(v___y_2490_);
v___y_2433_ = v___x_2498_;
goto v___jp_2432_;
}
else
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_box(0);
v___x_2500_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2494_, v___y_2490_, v_cmds_2427_, v___y_2480_, v___y_2481_, v___y_2477_, v_a_2428_, v___y_2482_, v___y_2487_, v___y_2479_, v___y_2483_, v___y_2492_, v___y_2484_, v___x_2474_, v___f_2473_, v___f_2472_, v___f_2471_, v___y_2486_, v_cmdState_2423_, v___y_2485_, v___x_2475_, v___y_2489_, v___y_2491_, v___y_2488_, v_prom_2424_, v_old_x3f_2421_, v_parseCancelTk_2426_, v___x_2499_);
lean_dec(v_prom_2424_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2484_);
lean_dec(v___y_2490_);
v___y_2433_ = v___x_2500_;
goto v___jp_2432_;
}
}
v___jp_2501_:
{
lean_object* v___x_2518_; 
lean_inc(v___y_2515_);
v___x_2518_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v___y_2515_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_box(0);
v___y_2477_ = v___y_2502_;
v___y_2478_ = v___y_2515_;
v___y_2479_ = v___y_2503_;
v___y_2480_ = v___y_2504_;
v___y_2481_ = v___y_2505_;
v___y_2482_ = v___y_2506_;
v___y_2483_ = v_fst_2516_;
v___y_2484_ = v___y_2507_;
v___y_2485_ = v___y_2508_;
v___y_2486_ = v___y_2509_;
v___y_2487_ = v___y_2510_;
v___y_2488_ = v_snd_2517_;
v___y_2489_ = v___y_2511_;
v___y_2490_ = v___y_2512_;
v___y_2491_ = v___y_2513_;
v___y_2492_ = v___y_2514_;
v___y_2493_ = v___x_2519_;
goto v___jp_2476_;
}
else
{
lean_object* v_val_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2528_; 
v_val_2520_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2522_ = v___x_2518_;
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_val_2520_);
lean_dec(v___x_2518_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_inc(v_val_2520_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_val_2520_);
lean_ctor_set(v___x_2524_, 1, v_val_2520_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2524_);
v___x_2526_ = v___x_2522_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
v___y_2477_ = v___y_2502_;
v___y_2478_ = v___y_2515_;
v___y_2479_ = v___y_2503_;
v___y_2480_ = v___y_2504_;
v___y_2481_ = v___y_2505_;
v___y_2482_ = v___y_2506_;
v___y_2483_ = v_fst_2516_;
v___y_2484_ = v___y_2507_;
v___y_2485_ = v___y_2508_;
v___y_2486_ = v___y_2509_;
v___y_2487_ = v___y_2510_;
v___y_2488_ = v_snd_2517_;
v___y_2489_ = v___y_2511_;
v___y_2490_ = v___y_2512_;
v___y_2491_ = v___y_2513_;
v___y_2492_ = v___y_2514_;
v___y_2493_ = v___x_2526_;
goto v___jp_2476_;
}
}
}
}
v___jp_2529_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2533_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1));
v___x_2534_ = l_Lean_Name_str___override(v___y_2532_, v___x_2533_);
v___x_2535_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_2536_ = l_Lean_Name_str___override(v___x_2534_, v___x_2535_);
v___x_2537_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_2538_ = l_Lean_Name_str___override(v___x_2536_, v___x_2537_);
v___x_2539_ = l_Lean_Name_str___override(v___x_2538_, v___x_2535_);
v___x_2540_ = lean_unsigned_to_nat(0u);
v___x_2541_ = l_Lean_Name_num___override(v___x_2539_, v___x_2540_);
v___x_2542_ = l_Lean_Name_str___override(v___x_2541_, v___x_2535_);
v___x_2543_ = l_Lean_Name_str___override(v___x_2542_, v___x_2537_);
v___x_2544_ = l_Lean_Name_str___override(v___x_2543_, v___x_2535_);
v___x_2545_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2546_ = l_Lean_Name_str___override(v___x_2544_, v___x_2545_);
v___x_2547_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__4));
v___x_2548_ = l_Lean_Name_str___override(v___x_2546_, v___x_2547_);
v___x_2549_ = l_Lean_Name_toString(v___x_2548_, v___y_2530_);
v___x_2550_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2551_ = lean_box(0);
v___x_2552_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_2553_ = 0;
v___x_2554_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2554_, 0, v___x_2549_);
lean_ctor_set(v___x_2554_, 1, v___x_2550_);
lean_ctor_set(v___x_2554_, 2, v___x_2551_);
lean_ctor_set(v___x_2554_, 3, v___x_2552_);
lean_ctor_set_uint8(v___x_2554_, sizeof(void*)*4, v___x_2553_);
v___x_2555_ = lean_box(0);
v___x_2556_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3);
lean_inc_ref_n(v___x_2554_, 3);
v___x_2557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2554_);
lean_ctor_set(v___x_2557_, 1, v_cmdState_2423_);
v___x_2558_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2551_, v___x_2557_);
v___x_2559_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2551_, v___x_2554_);
v___x_2560_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v___x_2561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2554_);
lean_ctor_set(v___x_2561_, 1, v___x_2556_);
lean_ctor_set(v___x_2561_, 2, v___x_2558_);
lean_ctor_set(v___x_2561_, 3, v___x_2559_);
lean_ctor_set(v___x_2561_, 4, v___x_2560_);
v___x_2562_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2554_);
lean_ctor_set(v___x_2562_, 1, v___x_2555_);
lean_ctor_set(v___x_2562_, 2, v___y_2531_);
lean_ctor_set(v___x_2562_, 3, v___x_2561_);
lean_ctor_set(v___x_2562_, 4, v___x_2551_);
v___x_2563_ = lean_io_promise_resolve(v___x_2562_, v_prom_2424_);
lean_dec(v_prom_2424_);
v___x_2564_ = lean_box(0);
return v___x_2564_;
}
v___jp_2565_:
{
v___y_2530_ = v___y_2566_;
v___y_2531_ = v___y_2567_;
v___y_2532_ = v___y_2568_;
goto v___jp_2529_;
}
v___jp_2570_:
{
uint8_t v___x_2581_; uint8_t v___x_2582_; 
v___x_2581_ = l_IO_CancelToken_isSet(v_parseCancelTk_2426_);
v___x_2582_ = 1;
if (v___x_2581_ == 0)
{
lean_dec(v___y_2580_);
if (v_sync_2425_ == 0)
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; uint8_t v___x_2588_; 
v___x_2583_ = lean_io_promise_new();
v___x_2584_ = lean_io_promise_new();
v___x_2585_ = lean_io_promise_new();
v___x_2586_ = lean_io_promise_new();
v___x_2587_ = l_Lean_internal_cmdlineSnapshots;
v___x_2588_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v___y_2577_, v___x_2587_);
lean_dec_ref(v___y_2577_);
if (v___x_2588_ == 0)
{
lean_inc(v___y_2578_);
v___y_2502_ = v___x_2581_;
v___y_2503_ = v___x_2582_;
v___y_2504_ = v___y_2572_;
v___y_2505_ = v___y_2574_;
v___y_2506_ = v___y_2573_;
v___y_2507_ = v___x_2584_;
v___y_2508_ = v___x_2585_;
v___y_2509_ = v___y_2575_;
v___y_2510_ = v___y_2576_;
v___y_2511_ = v___y_2571_;
v___y_2512_ = v___x_2586_;
v___y_2513_ = v___x_2587_;
v___y_2514_ = v___x_2583_;
v___y_2515_ = v___y_2578_;
v_fst_2516_ = v___y_2578_;
v_snd_2517_ = v___y_2579_;
goto v___jp_2501_;
}
else
{
uint8_t v___x_2589_; 
lean_inc(v___y_2578_);
v___x_2589_ = l_Lean_Parser_isTerminalCommand(v___y_2578_);
if (v___x_2589_ == 0)
{
if (v___x_2588_ == 0)
{
lean_inc(v___y_2578_);
v___y_2502_ = v___x_2581_;
v___y_2503_ = v___x_2582_;
v___y_2504_ = v___y_2572_;
v___y_2505_ = v___y_2574_;
v___y_2506_ = v___y_2573_;
v___y_2507_ = v___x_2584_;
v___y_2508_ = v___x_2585_;
v___y_2509_ = v___y_2575_;
v___y_2510_ = v___y_2576_;
v___y_2511_ = v___y_2571_;
v___y_2512_ = v___x_2586_;
v___y_2513_ = v___x_2587_;
v___y_2514_ = v___x_2583_;
v___y_2515_ = v___y_2578_;
v_fst_2516_ = v___y_2578_;
v_snd_2517_ = v___y_2579_;
goto v___jp_2501_;
}
else
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
lean_dec_ref(v___y_2579_);
v___x_2590_ = lean_box(0);
v___x_2591_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v___y_2502_ = v___x_2581_;
v___y_2503_ = v___x_2582_;
v___y_2504_ = v___y_2572_;
v___y_2505_ = v___y_2574_;
v___y_2506_ = v___y_2573_;
v___y_2507_ = v___x_2584_;
v___y_2508_ = v___x_2585_;
v___y_2509_ = v___y_2575_;
v___y_2510_ = v___y_2576_;
v___y_2511_ = v___y_2571_;
v___y_2512_ = v___x_2586_;
v___y_2513_ = v___x_2587_;
v___y_2514_ = v___x_2583_;
v___y_2515_ = v___y_2578_;
v_fst_2516_ = v___x_2590_;
v_snd_2517_ = v___x_2591_;
goto v___jp_2501_;
}
}
else
{
lean_inc(v___y_2578_);
v___y_2502_ = v___x_2581_;
v___y_2503_ = v___x_2582_;
v___y_2504_ = v___y_2572_;
v___y_2505_ = v___y_2574_;
v___y_2506_ = v___y_2573_;
v___y_2507_ = v___x_2584_;
v___y_2508_ = v___x_2585_;
v___y_2509_ = v___y_2575_;
v___y_2510_ = v___y_2576_;
v___y_2511_ = v___y_2571_;
v___y_2512_ = v___x_2586_;
v___y_2513_ = v___x_2587_;
v___y_2514_ = v___x_2583_;
v___y_2515_ = v___y_2578_;
v_fst_2516_ = v___y_2578_;
v_snd_2517_ = v___y_2579_;
goto v___jp_2501_;
}
}
}
else
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___f_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
v___x_2592_ = lean_box(v___x_2581_);
v___x_2593_ = lean_box(v___x_2582_);
lean_inc_ref(v_a_2428_);
v___f_2594_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__8___boxed), 20, 19);
lean_closure_set(v___f_2594_, 0, v_cmds_2427_);
lean_closure_set(v___f_2594_, 1, v___y_2572_);
lean_closure_set(v___f_2594_, 2, v___y_2574_);
lean_closure_set(v___f_2594_, 3, v___x_2592_);
lean_closure_set(v___f_2594_, 4, v_a_2428_);
lean_closure_set(v___f_2594_, 5, v___y_2573_);
lean_closure_set(v___f_2594_, 6, v___y_2576_);
lean_closure_set(v___f_2594_, 7, v___x_2593_);
lean_closure_set(v___f_2594_, 8, v___x_2474_);
lean_closure_set(v___f_2594_, 9, v___f_2473_);
lean_closure_set(v___f_2594_, 10, v___f_2472_);
lean_closure_set(v___f_2594_, 11, v___f_2471_);
lean_closure_set(v___f_2594_, 12, v___y_2575_);
lean_closure_set(v___f_2594_, 13, v_cmdState_2423_);
lean_closure_set(v___f_2594_, 14, v___x_2475_);
lean_closure_set(v___f_2594_, 15, v___y_2571_);
lean_closure_set(v___f_2594_, 16, v_prom_2424_);
lean_closure_set(v___f_2594_, 17, v_old_x3f_2421_);
lean_closure_set(v___f_2594_, 18, v_parseCancelTk_2426_);
v___x_2595_ = lean_unsigned_to_nat(0u);
v___x_2596_ = lean_io_as_task(v___f_2594_, v___x_2595_);
lean_dec_ref(v___x_2596_);
goto v___jp_2430_;
}
}
else
{
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec_ref(v_cmds_2427_);
lean_dec_ref(v_parseCancelTk_2426_);
if (lean_obj_tag(v_old_x3f_2421_) == 1)
{
lean_object* v_val_2597_; lean_object* v___x_2598_; lean_object* v_children_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; uint8_t v___x_2602_; 
v_val_2597_ = lean_ctor_get(v_old_x3f_2421_, 0);
lean_inc(v_val_2597_);
lean_dec_ref_known(v_old_x3f_2421_, 1);
v___x_2598_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(v_val_2597_);
v_children_2599_ = lean_ctor_get(v___x_2598_, 1);
lean_inc_ref(v_children_2599_);
lean_dec_ref(v___x_2598_);
v___x_2600_ = lean_unsigned_to_nat(0u);
v___x_2601_ = lean_array_get_size(v_children_2599_);
v___x_2602_ = lean_nat_dec_lt(v___x_2600_, v___x_2601_);
if (v___x_2602_ == 0)
{
lean_dec_ref(v_children_2599_);
v___y_2530_ = v___x_2582_;
v___y_2531_ = v___y_2579_;
v___y_2532_ = v___y_2580_;
goto v___jp_2529_;
}
else
{
lean_object* v___x_2603_; uint8_t v___x_2604_; 
v___x_2603_ = lean_box(0);
v___x_2604_ = lean_nat_dec_le(v___x_2601_, v___x_2601_);
if (v___x_2604_ == 0)
{
if (v___x_2602_ == 0)
{
lean_dec_ref(v_children_2599_);
v___y_2530_ = v___x_2582_;
v___y_2531_ = v___y_2579_;
v___y_2532_ = v___y_2580_;
goto v___jp_2529_;
}
else
{
size_t v___x_2605_; size_t v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = ((size_t)0ULL);
v___x_2606_ = lean_usize_of_nat(v___x_2601_);
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2599_, v___x_2605_, v___x_2606_, v___x_2603_);
lean_dec_ref(v_children_2599_);
v___y_2566_ = v___x_2582_;
v___y_2567_ = v___y_2579_;
v___y_2568_ = v___y_2580_;
v___y_2569_ = v___x_2607_;
goto v___jp_2565_;
}
}
else
{
size_t v___x_2608_; size_t v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = ((size_t)0ULL);
v___x_2609_ = lean_usize_of_nat(v___x_2601_);
v___x_2610_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2599_, v___x_2608_, v___x_2609_, v___x_2603_);
lean_dec_ref(v_children_2599_);
v___y_2566_ = v___x_2582_;
v___y_2567_ = v___y_2579_;
v___y_2568_ = v___y_2580_;
v___y_2569_ = v___x_2610_;
goto v___jp_2565_;
}
}
}
else
{
lean_dec(v_old_x3f_2421_);
v___y_2530_ = v___x_2582_;
v___y_2531_ = v___y_2579_;
v___y_2532_ = v___y_2580_;
goto v___jp_2529_;
}
}
}
v___jp_2612_:
{
lean_object* v_env_2613_; lean_object* v_scopes_2614_; lean_object* v___x_2615_; lean_object* v_opts_2616_; lean_object* v_currNamespace_2617_; lean_object* v_openDecls_2618_; lean_object* v___x_2619_; lean_object* v___f_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v_snd_2624_; 
v_env_2613_ = lean_ctor_get(v_cmdState_2423_, 0);
v_scopes_2614_ = lean_ctor_get(v_cmdState_2423_, 2);
v___x_2615_ = l_List_head_x21___redArg(v___x_2474_, v_scopes_2614_);
v_opts_2616_ = lean_ctor_get(v___x_2615_, 1);
lean_inc_ref_n(v_opts_2616_, 2);
v_currNamespace_2617_ = lean_ctor_get(v___x_2615_, 2);
lean_inc(v_currNamespace_2617_);
v_openDecls_2618_ = lean_ctor_get(v___x_2615_, 3);
lean_inc(v_openDecls_2618_);
lean_dec(v___x_2615_);
lean_inc_ref(v_env_2613_);
v___x_2619_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2619_, 0, v_env_2613_);
lean_ctor_set(v___x_2619_, 1, v_opts_2616_);
lean_ctor_set(v___x_2619_, 2, v_currNamespace_2617_);
lean_ctor_set(v___x_2619_, 3, v_openDecls_2618_);
lean_inc_ref(v_parserState_2422_);
lean_inc_ref(v_a_2428_);
v___f_2620_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2620_, 0, v_a_2428_);
lean_closure_set(v___f_2620_, 1, v___x_2619_);
lean_closure_set(v___f_2620_, 2, v_parserState_2422_);
v___x_2621_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6));
v___x_2622_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0);
v___x_2623_ = lean_profileit(v___x_2621_, v_opts_2616_, v___f_2620_, v___x_2622_);
v_snd_2624_ = lean_ctor_get(v___x_2623_, 1);
lean_inc(v_snd_2624_);
if (lean_obj_tag(v_old_x3f_2421_) == 1)
{
lean_object* v_val_2625_; lean_object* v_fst_2626_; lean_object* v_fst_2627_; lean_object* v_snd_2628_; lean_object* v_pos_2629_; lean_object* v_toSnapshot_2630_; lean_object* v_stx_2631_; lean_object* v_parserState_2632_; lean_object* v_elabSnap_2633_; lean_object* v_nextCmdSnap_x3f_2634_; uint8_t v___x_2635_; 
v_val_2625_ = lean_ctor_get(v_old_x3f_2421_, 0);
v_fst_2626_ = lean_ctor_get(v___x_2623_, 0);
lean_inc_n(v_fst_2626_, 2);
lean_dec(v___x_2623_);
v_fst_2627_ = lean_ctor_get(v_snd_2624_, 0);
lean_inc(v_fst_2627_);
v_snd_2628_ = lean_ctor_get(v_snd_2624_, 1);
lean_inc(v_snd_2628_);
lean_dec(v_snd_2624_);
v_pos_2629_ = lean_ctor_get(v_parserState_2422_, 0);
lean_inc(v_pos_2629_);
lean_dec_ref(v_parserState_2422_);
v_toSnapshot_2630_ = lean_ctor_get(v_val_2625_, 0);
v_stx_2631_ = lean_ctor_get(v_val_2625_, 1);
v_parserState_2632_ = lean_ctor_get(v_val_2625_, 2);
v_elabSnap_2633_ = lean_ctor_get(v_val_2625_, 3);
v_nextCmdSnap_x3f_2634_ = lean_ctor_get(v_val_2625_, 4);
lean_inc(v_stx_2631_);
v___x_2635_ = l_Lean_Syntax_eqWithInfo(v_fst_2626_, v_stx_2631_);
if (v___x_2635_ == 0)
{
if (lean_obj_tag(v_nextCmdSnap_x3f_2634_) == 0)
{
lean_inc(v_fst_2627_);
lean_inc(v_fst_2626_);
lean_inc_ref(v_opts_2616_);
v___y_2571_ = v_opts_2616_;
v___y_2572_ = v_fst_2626_;
v___y_2573_ = v_snd_2628_;
v___y_2574_ = v_fst_2627_;
v___y_2575_ = v_pos_2629_;
v___y_2576_ = v___x_2622_;
v___y_2577_ = v_opts_2616_;
v___y_2578_ = v_fst_2626_;
v___y_2579_ = v_fst_2627_;
v___y_2580_ = v___x_2622_;
goto v___jp_2570_;
}
else
{
lean_object* v_val_2636_; lean_object* v___x_2637_; 
v_val_2636_ = lean_ctor_get(v_nextCmdSnap_x3f_2634_, 0);
lean_inc(v_val_2636_);
v___x_2637_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2611_, v_val_2636_);
lean_inc(v_fst_2627_);
lean_inc(v_fst_2626_);
lean_inc_ref(v_opts_2616_);
v___y_2571_ = v_opts_2616_;
v___y_2572_ = v_fst_2626_;
v___y_2573_ = v_snd_2628_;
v___y_2574_ = v_fst_2627_;
v___y_2575_ = v_pos_2629_;
v___y_2576_ = v___x_2622_;
v___y_2577_ = v_opts_2616_;
v___y_2578_ = v_fst_2626_;
v___y_2579_ = v_fst_2627_;
v___y_2580_ = v___x_2622_;
goto v___jp_2570_;
}
}
else
{
lean_inc(v_val_2625_);
lean_dec(v_pos_2629_);
lean_dec(v_snd_2628_);
lean_dec(v_fst_2626_);
lean_dec_ref_known(v_old_x3f_2421_, 1);
lean_dec_ref(v_opts_2616_);
lean_dec_ref(v_parseCancelTk_2426_);
lean_dec_ref(v_cmdState_2423_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2634_) == 1)
{
lean_object* v_val_2638_; 
lean_inc_ref(v_nextCmdSnap_x3f_2634_);
lean_inc_ref(v_elabSnap_2633_);
lean_inc_ref(v_parserState_2632_);
lean_inc(v_stx_2631_);
lean_inc_ref(v_toSnapshot_2630_);
lean_dec(v_val_2625_);
v_val_2638_ = lean_ctor_get(v_nextCmdSnap_x3f_2634_, 0);
lean_inc(v_val_2638_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2634_, 1);
v_toSnapshot_2435_ = v_toSnapshot_2630_;
v_stx_2436_ = v_stx_2631_;
v_parserState_2437_ = v_parserState_2632_;
v_elabSnap_2438_ = v_elabSnap_2633_;
v_val_2439_ = v_val_2638_;
v_newParserState_2440_ = v_fst_2627_;
goto v___jp_2434_;
}
else
{
lean_object* v___x_2639_; 
lean_dec(v_fst_2627_);
lean_dec_ref(v_cmds_2427_);
v___x_2639_ = lean_io_promise_resolve(v_val_2625_, v_prom_2424_);
lean_dec(v_prom_2424_);
return v___x_2639_;
}
}
}
else
{
lean_object* v_fst_2640_; lean_object* v_fst_2641_; lean_object* v_snd_2642_; lean_object* v_pos_2643_; 
v_fst_2640_ = lean_ctor_get(v___x_2623_, 0);
lean_inc_n(v_fst_2640_, 2);
lean_dec(v___x_2623_);
v_fst_2641_ = lean_ctor_get(v_snd_2624_, 0);
lean_inc_n(v_fst_2641_, 2);
v_snd_2642_ = lean_ctor_get(v_snd_2624_, 1);
lean_inc(v_snd_2642_);
lean_dec(v_snd_2624_);
v_pos_2643_ = lean_ctor_get(v_parserState_2422_, 0);
lean_inc(v_pos_2643_);
lean_dec_ref(v_parserState_2422_);
lean_inc_ref(v_opts_2616_);
v___y_2571_ = v_opts_2616_;
v___y_2572_ = v_fst_2640_;
v___y_2573_ = v_snd_2642_;
v___y_2574_ = v_fst_2641_;
v___y_2575_ = v_pos_2643_;
v___y_2576_ = v___x_2622_;
v___y_2577_ = v_opts_2616_;
v___y_2578_ = v_fst_2640_;
v___y_2579_ = v_fst_2641_;
v___y_2580_ = v___x_2622_;
goto v___jp_2570_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object* v_oldResult_2660_, lean_object* v_cmds_2661_, lean_object* v_stx_2662_, lean_object* v_newParserState_2663_, lean_object* v_val_2664_, uint8_t v_sync_2665_, lean_object* v_val_2666_, lean_object* v_a_2667_, lean_object* v_oldNext_2668_){
_start:
{
lean_object* v_cmdState_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v_cmdState_2670_ = lean_ctor_get(v_oldResult_2660_, 1);
lean_inc_ref(v_cmdState_2670_);
lean_dec_ref(v_oldResult_2660_);
v___x_2671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2671_, 0, v_oldNext_2668_);
v___x_2672_ = lean_array_push(v_cmds_2661_, v_stx_2662_);
v___x_2673_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2671_, v_newParserState_2663_, v_cmdState_2670_, v_val_2664_, v_sync_2665_, v_val_2666_, v___x_2672_, v_a_2667_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object** _args){
lean_object* v___x_2674_ = _args[0];
lean_object* v_val_2675_ = _args[1];
lean_object* v_cmds_2676_ = _args[2];
lean_object* v_fst_2677_ = _args[3];
lean_object* v_fst_2678_ = _args[4];
lean_object* v_val_2679_ = _args[5];
lean_object* v_a_2680_ = _args[6];
lean_object* v_snd_2681_ = _args[7];
lean_object* v___x_2682_ = _args[8];
lean_object* v___x_2683_ = _args[9];
lean_object* v_fst_2684_ = _args[10];
lean_object* v_val_2685_ = _args[11];
lean_object* v_val_2686_ = _args[12];
lean_object* v___x_2687_ = _args[13];
lean_object* v___f_2688_ = _args[14];
lean_object* v___f_2689_ = _args[15];
lean_object* v___f_2690_ = _args[16];
lean_object* v_pos_2691_ = _args[17];
lean_object* v_cmdState_2692_ = _args[18];
lean_object* v_val_2693_ = _args[19];
lean_object* v___x_2694_ = _args[20];
lean_object* v_opts_2695_ = _args[21];
lean_object* v___x_2696_ = _args[22];
lean_object* v_snd_2697_ = _args[23];
lean_object* v_prom_2698_ = _args[24];
lean_object* v_old_x3f_2699_ = _args[25];
lean_object* v_parseCancelTk_2700_ = _args[26];
lean_object* v_next_x3f_2701_ = _args[27];
lean_object* v___y_2702_ = _args[28];
_start:
{
uint8_t v_val_36140__boxed_2703_; uint8_t v___x_36143__boxed_2704_; lean_object* v_res_2705_; 
v_val_36140__boxed_2703_ = lean_unbox(v_val_2679_);
v___x_36143__boxed_2704_ = lean_unbox(v___x_2683_);
v_res_2705_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___x_2674_, v_val_2675_, v_cmds_2676_, v_fst_2677_, v_fst_2678_, v_val_36140__boxed_2703_, v_a_2680_, v_snd_2681_, v___x_2682_, v___x_36143__boxed_2704_, v_fst_2684_, v_val_2685_, v_val_2686_, v___x_2687_, v___f_2688_, v___f_2689_, v___f_2690_, v_pos_2691_, v_cmdState_2692_, v_val_2693_, v___x_2694_, v_opts_2695_, v___x_2696_, v_snd_2697_, v_prom_2698_, v_old_x3f_2699_, v_parseCancelTk_2700_, v_next_x3f_2701_);
lean_dec(v_prom_2698_);
lean_dec_ref(v___x_2696_);
lean_dec_ref(v_opts_2695_);
lean_dec(v_val_2686_);
lean_dec_ref(v_a_2680_);
lean_dec(v_val_2675_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object* v_old_x3f_2706_, lean_object* v_parserState_2707_, lean_object* v_cmdState_2708_, lean_object* v_prom_2709_, lean_object* v_sync_2710_, lean_object* v_parseCancelTk_2711_, lean_object* v_cmds_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_){
_start:
{
uint8_t v_sync_boxed_2715_; lean_object* v_res_2716_; 
v_sync_boxed_2715_ = lean_unbox(v_sync_2710_);
v_res_2716_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v_old_x3f_2706_, v_parserState_2707_, v_cmdState_2708_, v_prom_2709_, v_sync_boxed_2715_, v_parseCancelTk_2711_, v_cmds_2712_, v_a_2713_);
lean_dec_ref(v_a_2713_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object* v_as_2717_, size_t v_i_2718_, size_t v_stop_2719_, lean_object* v_b_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v___x_2723_; 
v___x_2723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_2717_, v_i_2718_, v_stop_2719_, v_b_2720_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object* v_as_2724_, lean_object* v_i_2725_, lean_object* v_stop_2726_, lean_object* v_b_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
size_t v_i_boxed_2730_; size_t v_stop_boxed_2731_; lean_object* v_res_2732_; 
v_i_boxed_2730_ = lean_unbox_usize(v_i_2725_);
lean_dec(v_i_2725_);
v_stop_boxed_2731_ = lean_unbox_usize(v_stop_2726_);
lean_dec(v_stop_2726_);
v_res_2732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(v_as_2724_, v_i_boxed_2730_, v_stop_boxed_2731_, v_b_2727_, v___y_2728_);
lean_dec_ref(v___y_2728_);
lean_dec_ref(v_as_2724_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object* v_opts_2733_, lean_object* v_opt_2734_){
_start:
{
lean_object* v_name_2735_; lean_object* v_map_2736_; lean_object* v___x_2737_; 
v_name_2735_ = lean_ctor_get(v_opt_2734_, 0);
v_map_2736_ = lean_ctor_get(v_opts_2733_, 0);
v___x_2737_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2736_, v_name_2735_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_box(0);
return v___x_2738_;
}
else
{
lean_object* v_val_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2748_; 
v_val_2739_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2741_ = v___x_2737_;
v_isShared_2742_ = v_isSharedCheck_2748_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_val_2739_);
lean_dec(v___x_2737_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2748_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
if (lean_obj_tag(v_val_2739_) == 0)
{
lean_object* v_v_2743_; lean_object* v___x_2745_; 
v_v_2743_ = lean_ctor_get(v_val_2739_, 0);
lean_inc_ref(v_v_2743_);
lean_dec_ref_known(v_val_2739_, 1);
if (v_isShared_2742_ == 0)
{
lean_ctor_set(v___x_2741_, 0, v_v_2743_);
v___x_2745_ = v___x_2741_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_v_2743_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
else
{
lean_object* v___x_2747_; 
lean_del_object(v___x_2741_);
lean_dec(v_val_2739_);
v___x_2747_ = lean_box(0);
return v___x_2747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object* v_opts_2749_, lean_object* v_opt_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2749_, v_opt_2750_);
lean_dec_ref(v_opt_2750_);
lean_dec_ref(v_opts_2749_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object* v___x_2752_, lean_object* v_x_2753_){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2754_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2752_);
v___x_2755_ = lean_box(0);
v___x_2756_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2756_, 0, v_x_2753_);
lean_ctor_set(v___x_2756_, 1, v___x_2754_);
lean_ctor_set(v___x_2756_, 2, v___x_2755_);
return v___x_2756_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2762_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2));
v___x_2763_ = l_Lean_Array_toPArray_x27___redArg(v___x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
if (lean_obj_tag(v_a_2764_) == 0)
{
lean_object* v___x_2766_; 
v___x_2766_ = l_List_reverse___redArg(v_a_2765_);
return v___x_2766_;
}
else
{
lean_object* v_head_2767_; lean_object* v_tail_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2781_; 
v_head_2767_ = lean_ctor_get(v_a_2764_, 0);
v_tail_2768_ = lean_ctor_get(v_a_2764_, 1);
v_isSharedCheck_2781_ = !lean_is_exclusive(v_a_2764_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2770_ = v_a_2764_;
v_isShared_2771_ = v_isSharedCheck_2781_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_tail_2768_);
lean_inc(v_head_2767_);
lean_dec(v_a_2764_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2781_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2778_; 
v___x_2772_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1));
v___x_2773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
lean_ctor_set(v___x_2773_, 1, v_head_2767_);
v___x_2774_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
v___x_2775_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3, &l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3);
v___x_2776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2774_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 1, v_a_2765_);
lean_ctor_set(v___x_2770_, 0, v___x_2776_);
v___x_2778_ = v___x_2770_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2776_);
lean_ctor_set(v_reuseFailAlloc_2780_, 1, v_a_2765_);
v___x_2778_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
v_a_2764_ = v_tail_2768_;
v_a_2765_ = v___x_2778_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2782_; double v___x_2783_; 
v___x_2782_ = lean_unsigned_to_nat(1000000000u);
v___x_2783_ = lean_float_of_nat(v___x_2782_);
return v___x_2783_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10));
v___x_2801_ = l_Lean_MessageData_ofFormat(v___x_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object* v_setupImports_2802_, lean_object* v_stx_2803_, lean_object* v_origStx_2804_, lean_object* v_toProcessingContext_2805_, lean_object* v___x_2806_, lean_object* v_fileMap_2807_, lean_object* v_parserState_2808_, lean_object* v_a_2809_, lean_object* v___x_2810_, lean_object* v___x_2811_, lean_object* v___x_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_toProcessingContext_2815_; lean_object* v___x_2816_; 
v_toProcessingContext_2815_ = lean_ctor_get(v___y_2813_, 0);
lean_inc_ref(v_toProcessingContext_2815_);
lean_inc(v_stx_2803_);
v___x_2816_ = lean_apply_3(v_setupImports_2802_, v_stx_2803_, v_toProcessingContext_2815_, lean_box(0));
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_3030_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_2819_ = v___x_2816_;
v_isShared_2820_ = v_isSharedCheck_3030_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_3030_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
if (lean_obj_tag(v_a_2817_) == 0)
{
lean_object* v_a_2821_; lean_object* v___x_2823_; 
lean_dec_ref(v___x_2812_);
lean_dec(v___x_2810_);
lean_dec_ref(v_parserState_2808_);
lean_dec_ref(v_fileMap_2807_);
lean_dec(v___x_2806_);
lean_dec_ref(v_toProcessingContext_2805_);
lean_dec(v_origStx_2804_);
lean_dec(v_stx_2803_);
v_a_2821_ = lean_ctor_get(v_a_2817_, 0);
lean_inc(v_a_2821_);
lean_dec_ref_known(v_a_2817_, 1);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v_a_2821_);
v___x_2823_ = v___x_2819_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_3029_; 
v_a_2825_ = lean_ctor_get(v_a_2817_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v_a_2817_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_2827_ = v_a_2817_;
v_isShared_2828_ = v_isSharedCheck_3029_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v_a_2817_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_3029_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2829_; lean_object* v_mainModuleName_2830_; lean_object* v_package_x3f_2831_; uint8_t v_isModule_2832_; lean_object* v_imports_2833_; lean_object* v_opts_2834_; uint32_t v_trustLevel_2835_; lean_object* v_importArts_2836_; lean_object* v_plugins_2837_; double v___x_2838_; double v___x_2839_; double v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; uint8_t v___x_2843_; lean_object* v___x_2845_; 
v___x_2829_ = lean_io_mono_nanos_now();
v_mainModuleName_2830_ = lean_ctor_get(v_a_2825_, 0);
lean_inc(v_mainModuleName_2830_);
v_package_x3f_2831_ = lean_ctor_get(v_a_2825_, 1);
lean_inc(v_package_x3f_2831_);
v_isModule_2832_ = lean_ctor_get_uint8(v_a_2825_, sizeof(void*)*6 + 4);
v_imports_2833_ = lean_ctor_get(v_a_2825_, 2);
lean_inc_ref(v_imports_2833_);
v_opts_2834_ = lean_ctor_get(v_a_2825_, 3);
lean_inc_ref(v_opts_2834_);
v_trustLevel_2835_ = lean_ctor_get_uint32(v_a_2825_, sizeof(void*)*6);
v_importArts_2836_ = lean_ctor_get(v_a_2825_, 4);
lean_inc(v_importArts_2836_);
v_plugins_2837_ = lean_ctor_get(v_a_2825_, 5);
lean_inc_ref(v_plugins_2837_);
lean_dec(v_a_2825_);
v___x_2838_ = lean_float_of_nat(v___x_2829_);
v___x_2839_ = lean_float_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0);
v___x_2840_ = lean_float_div(v___x_2838_, v___x_2839_);
v___x_2841_ = l_Lean_Elab_HeaderSyntax_startPos(v_stx_2803_);
v___x_2842_ = l_Lean_MessageLog_empty;
v___x_2843_ = 1;
lean_inc(v_stx_2803_);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v_stx_2803_);
v___x_2845_ = v___x_2827_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_stx_2803_);
v___x_2845_ = v_reuseFailAlloc_3028_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2846_, 0, v_origStx_2804_);
lean_inc_ref(v___x_2845_);
lean_inc_ref(v_opts_2834_);
v___x_2847_ = l_Lean_Elab_processHeaderCore(v___x_2841_, v_imports_2833_, v_isModule_2832_, v_opts_2834_, v___x_2842_, v_toProcessingContext_2805_, v_trustLevel_2835_, v_plugins_2837_, v___x_2843_, v_mainModuleName_2830_, v_package_x3f_2831_, v_importArts_2836_, v___x_2845_, v___x_2846_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_3019_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_2850_ = v___x_2847_;
v_isShared_2851_ = v_isSharedCheck_3019_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2847_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_3019_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v_fst_2852_; lean_object* v_snd_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_3018_; 
v_fst_2852_ = lean_ctor_get(v_a_2848_, 0);
v_snd_2853_ = lean_ctor_get(v_a_2848_, 1);
v_isSharedCheck_3018_ = !lean_is_exclusive(v_a_2848_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_2855_ = v_a_2848_;
v_isShared_2856_ = v_isSharedCheck_3018_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_snd_2853_);
lean_inc(v_fst_2852_);
lean_dec(v_a_2848_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_3018_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2857_; double v___x_2858_; double v___x_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v_traceState_2877_; 
v___x_2857_ = lean_io_mono_nanos_now();
v___x_2858_ = lean_float_of_nat(v___x_2857_);
v___x_2859_ = lean_float_div(v___x_2858_, v___x_2839_);
lean_inc(v_snd_2853_);
v___x_2860_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2853_);
v___x_2861_ = l_Lean_MessageLog_hasErrors(v_snd_2853_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
lean_del_object(v___x_2819_);
lean_dec_ref(v___x_2812_);
v___x_2987_ = l_Lean_trace_profiler_output;
v___x_2988_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2834_, v___x_2987_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v___x_2989_; uint8_t v___x_2990_; 
v___x_2989_ = l_Lean_trace_profiler_serve;
v___x_2990_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2834_, v___x_2989_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; 
v___x_2991_ = l_Lean_instInhabitedTraceState_default;
v_traceState_2877_ = v___x_2991_;
goto v___jp_2876_;
}
else
{
goto v___jp_2971_;
}
}
else
{
lean_dec_ref_known(v___x_2988_, 1);
goto v___jp_2971_;
}
}
else
{
lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; uint64_t v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; size_t v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3016_; 
lean_del_object(v___x_2855_);
lean_dec(v_snd_2853_);
lean_dec(v_fst_2852_);
lean_del_object(v___x_2850_);
lean_dec_ref(v___x_2845_);
lean_dec_ref(v_opts_2834_);
lean_dec(v___x_2810_);
lean_dec_ref(v_parserState_2808_);
lean_dec_ref(v_fileMap_2807_);
lean_dec(v_stx_2803_);
v___x_2992_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_2993_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_2994_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7);
lean_inc_n(v___x_2806_, 2);
v___x_2995_ = l_Lean_Name_num___override(v___x_2994_, v___x_2806_);
v___x_2996_ = l_Lean_Name_str___override(v___x_2995_, v___x_2992_);
v___x_2997_ = l_Lean_Name_str___override(v___x_2996_, v___x_2993_);
v___x_2998_ = l_Lean_Name_str___override(v___x_2997_, v___x_2992_);
v___x_2999_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_3000_ = l_Lean_Name_str___override(v___x_2998_, v___x_2999_);
v___x_3001_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_3002_ = l_Lean_Name_str___override(v___x_3000_, v___x_3001_);
v___x_3003_ = l_Lean_Name_toString(v___x_3002_, v___x_2843_);
v___x_3004_ = lean_box(0);
v___x_3005_ = 0ULL;
v___x_3006_ = lean_unsigned_to_nat(32u);
v___x_3007_ = lean_mk_empty_array_with_capacity(v___x_3006_);
v___x_3008_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15);
v___x_3009_ = ((size_t)5ULL);
v___x_3010_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3010_, 0, v___x_3008_);
lean_ctor_set(v___x_3010_, 1, v___x_3007_);
lean_ctor_set(v___x_3010_, 2, v___x_2806_);
lean_ctor_set(v___x_3010_, 3, v___x_2806_);
lean_ctor_set_usize(v___x_3010_, 4, v___x_3009_);
v___x_3011_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3011_, 0, v___x_3010_);
lean_ctor_set_uint64(v___x_3011_, sizeof(void*)*1, v___x_3005_);
v___x_3012_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3012_, 0, v___x_3003_);
lean_ctor_set(v___x_3012_, 1, v___x_2860_);
lean_ctor_set(v___x_3012_, 2, v___x_3004_);
lean_ctor_set(v___x_3012_, 3, v___x_3011_);
lean_ctor_set_uint8(v___x_3012_, sizeof(void*)*4, v___x_2861_);
v___x_3013_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2812_);
v___x_3014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3012_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
lean_ctor_set(v___x_3014_, 2, v___x_3004_);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_3014_);
v___x_3016_ = v___x_2819_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v___x_3014_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
v___jp_2862_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2874_; 
v___x_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2869_, 0, v___y_2868_);
v___x_2870_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2870_, 0, v___y_2865_);
lean_ctor_set(v___x_2870_, 1, v___x_2860_);
lean_ctor_set(v___x_2870_, 2, v___x_2869_);
lean_ctor_set(v___x_2870_, 3, v___y_2867_);
lean_ctor_set_uint8(v___x_2870_, sizeof(void*)*4, v___x_2861_);
v___x_2871_ = l_Lean_Language_SnapshotTask_finished___redArg(v___y_2866_, v___x_2870_);
v___x_2872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2872_, 0, v___y_2863_);
lean_ctor_set(v___x_2872_, 1, v___x_2871_);
lean_ctor_set(v___x_2872_, 2, v___y_2864_);
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v___x_2872_);
v___x_2874_ = v___x_2850_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
v___jp_2876_:
{
lean_object* v___x_2878_; 
v___x_2878_ = l_Lean_Language_Lean_reparseOptions(v_opts_2834_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2880_; lean_object* v_env_2881_; lean_object* v_messages_2882_; lean_object* v_scopes_2883_; lean_object* v_usedQuotCtxts_2884_; lean_object* v_nextMacroScope_2885_; lean_object* v_maxRecDepth_2886_; lean_object* v_ngen_2887_; lean_object* v_auxDeclNGen_2888_; lean_object* v_snapshotTasks_2889_; lean_object* v_prevLinterStates_2890_; lean_object* v_codeQualityEntryTasks_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2960_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc(v_a_2879_);
lean_dec_ref_known(v___x_2878_, 1);
lean_inc(v_fst_2852_);
v___x_2880_ = l_Lean_Elab_Command_mkState(v_fst_2852_, v_snd_2853_, v_a_2879_);
v_env_2881_ = lean_ctor_get(v___x_2880_, 0);
v_messages_2882_ = lean_ctor_get(v___x_2880_, 1);
v_scopes_2883_ = lean_ctor_get(v___x_2880_, 2);
v_usedQuotCtxts_2884_ = lean_ctor_get(v___x_2880_, 3);
v_nextMacroScope_2885_ = lean_ctor_get(v___x_2880_, 4);
v_maxRecDepth_2886_ = lean_ctor_get(v___x_2880_, 5);
v_ngen_2887_ = lean_ctor_get(v___x_2880_, 6);
v_auxDeclNGen_2888_ = lean_ctor_get(v___x_2880_, 7);
v_snapshotTasks_2889_ = lean_ctor_get(v___x_2880_, 10);
v_prevLinterStates_2890_ = lean_ctor_get(v___x_2880_, 11);
v_codeQualityEntryTasks_2891_ = lean_ctor_get(v___x_2880_, 12);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; lean_object* v_unused_2962_; 
v_unused_2961_ = lean_ctor_get(v___x_2880_, 9);
lean_dec(v_unused_2961_);
v_unused_2962_ = lean_ctor_get(v___x_2880_, 8);
lean_dec(v_unused_2962_);
v___x_2893_ = v___x_2880_;
v_isShared_2894_ = v_isSharedCheck_2960_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2891_);
lean_inc(v_prevLinterStates_2890_);
lean_inc(v_snapshotTasks_2889_);
lean_inc(v_auxDeclNGen_2888_);
lean_inc(v_ngen_2887_);
lean_inc(v_maxRecDepth_2886_);
lean_inc(v_nextMacroScope_2885_);
lean_inc(v_usedQuotCtxts_2884_);
lean_inc(v_scopes_2883_);
lean_inc(v_messages_2882_);
lean_inc(v_env_2881_);
lean_dec(v___x_2880_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2960_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2907_; 
v___x_2895_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2896_ = lean_box(0);
lean_inc_n(v___x_2806_, 4);
v___x_2897_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2806_);
lean_ctor_set(v___x_2897_, 1, v___x_2806_);
lean_ctor_set(v___x_2897_, 2, v___x_2806_);
lean_ctor_set(v___x_2897_, 3, v___x_2806_);
lean_ctor_set(v___x_2897_, 4, v___x_2895_);
lean_ctor_set(v___x_2897_, 5, v___x_2895_);
lean_ctor_set(v___x_2897_, 6, v___x_2895_);
lean_ctor_set(v___x_2897_, 7, v___x_2895_);
lean_ctor_set(v___x_2897_, 8, v___x_2895_);
lean_ctor_set(v___x_2897_, 9, v___x_2895_);
lean_ctor_set(v___x_2897_, 10, v___x_2895_);
v___x_2898_ = l_Lean_Options_empty;
v___x_2899_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0);
v___x_2900_ = lean_box(0);
v___x_2901_ = lean_unsigned_to_nat(1u);
v___x_2902_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3));
v___x_2903_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2903_, 0, v_fst_2852_);
lean_ctor_set(v___x_2903_, 1, v___x_2896_);
lean_ctor_set(v___x_2903_, 2, v_fileMap_2807_);
lean_ctor_set(v___x_2903_, 3, v___x_2897_);
lean_ctor_set(v___x_2903_, 4, v___x_2898_);
lean_ctor_set(v___x_2903_, 5, v___x_2899_);
lean_ctor_set(v___x_2903_, 6, v___x_2900_);
lean_ctor_set(v___x_2903_, 7, v___x_2902_);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
v___x_2905_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5));
lean_inc(v_stx_2803_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v_stx_2803_);
lean_ctor_set(v___x_2855_, 0, v___x_2905_);
v___x_2907_ = v___x_2855_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2905_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v_stx_2803_);
v___x_2907_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2922_; 
v___x_2908_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
v___x_2909_ = lean_unsigned_to_nat(2u);
v___x_2910_ = l_Lean_Syntax_getArg(v_stx_2803_, v___x_2909_);
lean_dec(v_stx_2803_);
v___x_2911_ = l_Lean_Syntax_getArgs(v___x_2910_);
lean_dec(v___x_2910_);
v___x_2912_ = lean_array_to_list(v___x_2911_);
v___x_2913_ = l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(v___x_2912_, v___x_2900_);
v___x_2914_ = l_Lean_List_toPArray_x27___redArg(v___x_2913_);
v___x_2915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2908_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2904_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
v___x_2917_ = lean_mk_empty_array_with_capacity(v___x_2901_);
v___x_2918_ = lean_array_push(v___x_2917_, v___x_2916_);
v___x_2919_ = l_Lean_Array_toPArray_x27___redArg(v___x_2918_);
lean_dec_ref(v___x_2918_);
lean_inc_ref(v___x_2919_);
v___x_2920_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2920_, 0, v___x_2895_);
lean_ctor_set(v___x_2920_, 1, v___x_2895_);
lean_ctor_set(v___x_2920_, 2, v___x_2919_);
lean_ctor_set_uint8(v___x_2920_, sizeof(void*)*3, v___x_2843_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 9, v_traceState_2877_);
lean_ctor_set(v___x_2893_, 8, v___x_2920_);
v___x_2922_ = v___x_2893_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_env_2881_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v_messages_2882_);
lean_ctor_set(v_reuseFailAlloc_2958_, 2, v_scopes_2883_);
lean_ctor_set(v_reuseFailAlloc_2958_, 3, v_usedQuotCtxts_2884_);
lean_ctor_set(v_reuseFailAlloc_2958_, 4, v_nextMacroScope_2885_);
lean_ctor_set(v_reuseFailAlloc_2958_, 5, v_maxRecDepth_2886_);
lean_ctor_set(v_reuseFailAlloc_2958_, 6, v_ngen_2887_);
lean_ctor_set(v_reuseFailAlloc_2958_, 7, v_auxDeclNGen_2888_);
lean_ctor_set(v_reuseFailAlloc_2958_, 8, v___x_2920_);
lean_ctor_set(v_reuseFailAlloc_2958_, 9, v_traceState_2877_);
lean_ctor_set(v_reuseFailAlloc_2958_, 10, v_snapshotTasks_2889_);
lean_ctor_set(v_reuseFailAlloc_2958_, 11, v_prevLinterStates_2890_);
lean_ctor_set(v_reuseFailAlloc_2958_, 12, v_codeQualityEntryTasks_2891_);
v___x_2922_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; size_t v___x_2934_; lean_object* v___x_2935_; lean_object* v_size_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; uint64_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; uint8_t v___x_2955_; 
v___x_2923_ = lean_io_promise_new();
v___x_2924_ = l_IO_CancelToken_new();
v___x_2925_ = lean_mk_empty_array_with_capacity(v___x_2806_);
lean_inc_ref(v___x_2924_);
lean_inc(v___x_2923_);
lean_inc_ref(v___x_2922_);
v___x_2926_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2896_, v_parserState_2808_, v___x_2922_, v___x_2923_, v___x_2843_, v___x_2924_, v___x_2925_, v_a_2809_);
v___x_2927_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3));
v___x_2928_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5));
v___x_2929_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7);
lean_inc_n(v___x_2806_, 3);
v___x_2930_ = l_Lean_Name_num___override(v___x_2929_, v___x_2806_);
v___x_2931_ = lean_unsigned_to_nat(32u);
v___x_2932_ = lean_mk_empty_array_with_capacity(v___x_2931_);
v___x_2933_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15);
v___x_2934_ = ((size_t)5ULL);
v___x_2935_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2935_, 0, v___x_2933_);
lean_ctor_set(v___x_2935_, 1, v___x_2932_);
lean_ctor_set(v___x_2935_, 2, v___x_2806_);
lean_ctor_set(v___x_2935_, 3, v___x_2806_);
lean_ctor_set_usize(v___x_2935_, 4, v___x_2934_);
v_size_2936_ = lean_ctor_get(v___x_2919_, 2);
lean_inc(v_size_2936_);
v___x_2937_ = l_Lean_Name_str___override(v___x_2930_, v___x_2927_);
v___x_2938_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2810_);
v___x_2939_ = l_Lean_Name_str___override(v___x_2937_, v___x_2928_);
v___x_2940_ = l_Lean_Name_str___override(v___x_2939_, v___x_2927_);
v___x_2941_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2942_ = l_Lean_Name_str___override(v___x_2940_, v___x_2941_);
v___x_2943_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2944_ = l_Lean_Name_str___override(v___x_2942_, v___x_2943_);
v___x_2945_ = l_Lean_Name_toString(v___x_2944_, v___x_2843_);
v___x_2946_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2947_ = 0ULL;
v___x_2948_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2948_, 0, v___x_2935_);
lean_ctor_set_uint64(v___x_2948_, sizeof(void*)*1, v___x_2947_);
v___x_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2924_);
v___x_2950_ = l_IO_Promise_result_x21___redArg(v___x_2923_);
lean_dec(v___x_2923_);
v___x_2951_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2810_);
lean_ctor_set(v___x_2951_, 1, v___x_2938_);
lean_ctor_set(v___x_2951_, 2, v___x_2949_);
lean_ctor_set(v___x_2951_, 3, v___x_2950_);
v___x_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2922_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
lean_inc_ref(v___x_2948_);
lean_inc_ref(v___x_2945_);
v___x_2954_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2954_, 0, v___x_2945_);
lean_ctor_set(v___x_2954_, 1, v___x_2946_);
lean_ctor_set(v___x_2954_, 2, v___x_2896_);
lean_ctor_set(v___x_2954_, 3, v___x_2948_);
lean_ctor_set_uint8(v___x_2954_, sizeof(void*)*4, v___x_2861_);
v___x_2955_ = lean_nat_dec_lt(v___x_2806_, v_size_2936_);
lean_dec(v_size_2936_);
if (v___x_2955_ == 0)
{
lean_object* v___x_2956_; 
lean_dec_ref(v___x_2919_);
lean_dec(v___x_2806_);
v___x_2956_ = l_outOfBounds___redArg(v___x_2811_);
v___y_2863_ = v___x_2954_;
v___y_2864_ = v___x_2953_;
v___y_2865_ = v___x_2945_;
v___y_2866_ = v___x_2845_;
v___y_2867_ = v___x_2948_;
v___y_2868_ = v___x_2956_;
goto v___jp_2862_;
}
else
{
lean_object* v___x_2957_; 
v___x_2957_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2811_, v___x_2919_, v___x_2806_);
lean_dec(v___x_2806_);
lean_dec_ref(v___x_2919_);
v___y_2863_ = v___x_2954_;
v___y_2864_ = v___x_2953_;
v___y_2865_ = v___x_2945_;
v___y_2866_ = v___x_2845_;
v___y_2867_ = v___x_2948_;
v___y_2868_ = v___x_2957_;
goto v___jp_2862_;
}
}
}
}
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
lean_dec_ref(v_traceState_2877_);
lean_dec_ref(v___x_2860_);
lean_del_object(v___x_2855_);
lean_dec(v_snd_2853_);
lean_dec(v_fst_2852_);
lean_del_object(v___x_2850_);
lean_dec_ref(v___x_2845_);
lean_dec(v___x_2810_);
lean_dec_ref(v_parserState_2808_);
lean_dec_ref(v_fileMap_2807_);
lean_dec(v___x_2806_);
lean_dec(v_stx_2803_);
v_a_2963_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2878_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2878_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
v___jp_2971_:
{
uint64_t v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2972_ = 0ULL;
v___x_2973_ = lean_box(0);
v___x_2974_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8));
v___x_2975_ = lean_box(0);
v___x_2976_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2977_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2977_, 0, v___x_2974_);
lean_ctor_set(v___x_2977_, 1, v___x_2975_);
lean_ctor_set(v___x_2977_, 2, v___x_2976_);
lean_ctor_set_float(v___x_2977_, sizeof(void*)*3, v___x_2840_);
lean_ctor_set_float(v___x_2977_, sizeof(void*)*3 + 8, v___x_2859_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*3 + 16, v___x_2843_);
v___x_2978_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11);
v___x_2979_ = lean_mk_empty_array_with_capacity(v___x_2806_);
v___x_2980_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2977_);
lean_ctor_set(v___x_2980_, 1, v___x_2978_);
lean_ctor_set(v___x_2980_, 2, v___x_2979_);
v___x_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2973_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = lean_unsigned_to_nat(1u);
v___x_2983_ = lean_mk_empty_array_with_capacity(v___x_2982_);
v___x_2984_ = lean_array_push(v___x_2983_, v___x_2981_);
v___x_2985_ = l_Lean_Array_toPArray_x27___redArg(v___x_2984_);
lean_dec_ref(v___x_2984_);
v___x_2986_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
lean_ctor_set_uint64(v___x_2986_, sizeof(void*)*1, v___x_2972_);
v_traceState_2877_ = v___x_2986_;
goto v___jp_2876_;
}
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
lean_dec_ref(v___x_2845_);
lean_dec_ref(v_opts_2834_);
lean_del_object(v___x_2819_);
lean_dec_ref(v___x_2812_);
lean_dec(v___x_2810_);
lean_dec_ref(v_parserState_2808_);
lean_dec_ref(v_fileMap_2807_);
lean_dec(v___x_2806_);
lean_dec(v_stx_2803_);
v_a_3020_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_2847_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_2847_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
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
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
lean_dec_ref(v___x_2812_);
lean_dec(v___x_2810_);
lean_dec_ref(v_parserState_2808_);
lean_dec_ref(v_fileMap_2807_);
lean_dec(v___x_2806_);
lean_dec_ref(v_toProcessingContext_2805_);
lean_dec(v_origStx_2804_);
lean_dec(v_stx_2803_);
v_a_3031_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_2816_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_2816_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object* v_setupImports_3039_, lean_object* v_stx_3040_, lean_object* v_origStx_3041_, lean_object* v_toProcessingContext_3042_, lean_object* v___x_3043_, lean_object* v_fileMap_3044_, lean_object* v_parserState_3045_, lean_object* v_a_3046_, lean_object* v___x_3047_, lean_object* v___x_3048_, lean_object* v___x_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(v_setupImports_3039_, v_stx_3040_, v_origStx_3041_, v_toProcessingContext_3042_, v___x_3043_, v_fileMap_3044_, v_parserState_3045_, v_a_3046_, v___x_3047_, v___x_3048_, v___x_3049_, v___y_3050_);
lean_dec_ref(v___y_3050_);
lean_dec_ref(v___x_3048_);
lean_dec_ref(v_a_3046_);
return v_res_3052_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0(void){
_start:
{
lean_object* v___x_3053_; lean_object* v___f_3054_; 
v___x_3053_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_3054_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0), 2, 1);
lean_closure_set(v___f_3054_, 0, v___x_3053_);
return v___f_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object* v_setupImports_3055_, lean_object* v_stx_3056_, lean_object* v_origStx_3057_, lean_object* v_parserState_3058_, lean_object* v_a_3059_){
_start:
{
lean_object* v_toProcessingContext_3061_; lean_object* v_fileMap_3062_; lean_object* v_endPos_3063_; lean_object* v___x_3064_; lean_object* v___f_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___f_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v_toProcessingContext_3061_ = lean_ctor_get(v_a_3059_, 0);
v_fileMap_3062_ = lean_ctor_get(v_toProcessingContext_3061_, 2);
v_endPos_3063_ = lean_ctor_get(v_toProcessingContext_3061_, 3);
v___x_3064_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_3065_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0);
v___x_3066_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_3067_ = lean_box(0);
v___x_3068_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_a_3059_, 2);
lean_inc_ref(v_fileMap_3062_);
lean_inc_ref(v_toProcessingContext_3061_);
v___f_3069_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3069_, 0, v_setupImports_3055_);
lean_closure_set(v___f_3069_, 1, v_stx_3056_);
lean_closure_set(v___f_3069_, 2, v_origStx_3057_);
lean_closure_set(v___f_3069_, 3, v_toProcessingContext_3061_);
lean_closure_set(v___f_3069_, 4, v___x_3068_);
lean_closure_set(v___f_3069_, 5, v_fileMap_3062_);
lean_closure_set(v___f_3069_, 6, v_parserState_3058_);
lean_closure_set(v___f_3069_, 7, v_a_3059_);
lean_closure_set(v___f_3069_, 8, v___x_3067_);
lean_closure_set(v___f_3069_, 9, v___x_3066_);
lean_closure_set(v___f_3069_, 10, v___x_3064_);
lean_inc(v_endPos_3063_);
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3068_);
lean_ctor_set(v___x_3070_, 1, v_endPos_3063_);
v___x_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3070_);
v___x_3072_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed), 5, 4);
lean_closure_set(v___x_3072_, 0, lean_box(0));
lean_closure_set(v___x_3072_, 1, v___f_3065_);
lean_closure_set(v___x_3072_, 2, v___f_3069_);
lean_closure_set(v___x_3072_, 3, v_a_3059_);
v___x_3073_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v___x_3067_, v___x_3067_, v___x_3071_, v___x_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object* v_setupImports_3074_, lean_object* v_stx_3075_, lean_object* v_origStx_3076_, lean_object* v_parserState_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_3074_, v_stx_3075_, v_origStx_3076_, v_parserState_3077_, v_a_3078_);
lean_dec_ref(v_a_3078_);
return v_res_3080_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3083_ = lean_box(0);
v___x_3084_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_3083_);
return v___x_3084_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3086_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2));
v___x_3087_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1);
v___x_3088_ = l_Lean_Name_str___override(v___x_3087_, v___x_3086_);
return v___x_3088_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4(void){
_start:
{
uint8_t v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3089_ = 1;
v___x_3090_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_3091_ = l_Lean_Name_toString(v___x_3090_, v___x_3089_);
return v___x_3091_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5(void){
_start:
{
uint8_t v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3092_ = 0;
v___x_3093_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_3094_ = lean_box(0);
v___x_3095_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3096_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3097_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
lean_ctor_set(v___x_3097_, 1, v___x_3095_);
lean_ctor_set(v___x_3097_, 2, v___x_3094_);
lean_ctor_set(v___x_3097_, 3, v___x_3093_);
lean_ctor_set_uint8(v___x_3097_, sizeof(void*)*4, v___x_3092_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object* v_newParserState_3098_, lean_object* v_cmdState_3099_, lean_object* v_a_3100_, lean_object* v_toSnapshot_3101_, lean_object* v_newStx_3102_, lean_object* v_oldCmd_3103_){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v_diagnostics_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3133_; 
v___x_3105_ = lean_io_promise_new();
v___x_3106_ = l_IO_CancelToken_new();
v___x_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3107_, 0, v_oldCmd_3103_);
v___x_3108_ = 1;
v___x_3109_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0));
lean_inc_ref(v___x_3106_);
lean_inc(v___x_3105_);
lean_inc_ref(v_cmdState_3099_);
v___x_3110_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_3107_, v_newParserState_3098_, v_cmdState_3099_, v___x_3105_, v___x_3108_, v___x_3106_, v___x_3109_, v_a_3100_);
v_diagnostics_3111_ = lean_ctor_get(v_toSnapshot_3101_, 1);
v_isSharedCheck_3133_ = !lean_is_exclusive(v_toSnapshot_3101_);
if (v_isSharedCheck_3133_ == 0)
{
lean_object* v_unused_3134_; lean_object* v_unused_3135_; lean_object* v_unused_3136_; 
v_unused_3134_ = lean_ctor_get(v_toSnapshot_3101_, 3);
lean_dec(v_unused_3134_);
v_unused_3135_ = lean_ctor_get(v_toSnapshot_3101_, 2);
lean_dec(v_unused_3135_);
v_unused_3136_ = lean_ctor_get(v_toSnapshot_3101_, 0);
lean_dec(v_unused_3136_);
v___x_3113_ = v_toSnapshot_3101_;
v_isShared_3114_ = v_isSharedCheck_3133_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_diagnostics_3111_);
lean_dec(v_toSnapshot_3101_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3133_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; uint8_t v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3128_; 
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1);
v___x_3117_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3118_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3106_);
v___x_3120_ = l_IO_Promise_result_x21___redArg(v___x_3105_);
lean_dec(v___x_3105_);
v___x_3121_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3115_);
lean_ctor_set(v___x_3121_, 1, v___x_3116_);
lean_ctor_set(v___x_3121_, 2, v___x_3119_);
lean_ctor_set(v___x_3121_, 3, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v_cmdState_3099_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
v___x_3124_ = 0;
v___x_3125_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__5);
v___x_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3126_, 0, v_newStx_3102_);
if (v_isShared_3114_ == 0)
{
lean_ctor_set(v___x_3113_, 3, v___x_3118_);
lean_ctor_set(v___x_3113_, 2, v___x_3115_);
lean_ctor_set(v___x_3113_, 0, v___x_3117_);
v___x_3128_ = v___x_3113_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v___x_3117_);
lean_ctor_set(v_reuseFailAlloc_3132_, 1, v_diagnostics_3111_);
lean_ctor_set(v_reuseFailAlloc_3132_, 2, v___x_3115_);
lean_ctor_set(v_reuseFailAlloc_3132_, 3, v___x_3118_);
v___x_3128_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
lean_ctor_set_uint8(v___x_3128_, sizeof(void*)*4, v___x_3124_);
v___x_3129_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3126_, v___x_3128_);
v___x_3130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3125_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
lean_ctor_set(v___x_3130_, 2, v___x_3123_);
v___x_3131_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3115_, v___x_3130_);
return v___x_3131_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object* v_newParserState_3137_, lean_object* v_cmdState_3138_, lean_object* v_a_3139_, lean_object* v_toSnapshot_3140_, lean_object* v_newStx_3141_, lean_object* v_oldCmd_3142_, lean_object* v___y_3143_){
_start:
{
lean_object* v_res_3144_; 
v_res_3144_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(v_newParserState_3137_, v_cmdState_3138_, v_a_3139_, v_toSnapshot_3140_, v_newStx_3141_, v_oldCmd_3142_);
lean_dec_ref(v_a_3139_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object* v_newParserState_3145_, lean_object* v_a_3146_, lean_object* v_newStx_3147_, lean_object* v___x_3148_, lean_object* v_oldProcessed_3149_){
_start:
{
lean_object* v_result_x3f_3151_; 
v_result_x3f_3151_ = lean_ctor_get(v_oldProcessed_3149_, 2);
if (lean_obj_tag(v_result_x3f_3151_) == 1)
{
lean_object* v_val_3152_; lean_object* v_firstCmdSnap_3153_; lean_object* v_toSnapshot_3154_; lean_object* v_cmdState_3155_; lean_object* v_stx_x3f_3156_; lean_object* v___f_3157_; lean_object* v___x_3158_; uint8_t v___x_3159_; lean_object* v___x_3160_; 
v_val_3152_ = lean_ctor_get(v_result_x3f_3151_, 0);
lean_inc(v_val_3152_);
v_firstCmdSnap_3153_ = lean_ctor_get(v_val_3152_, 1);
lean_inc_ref(v_firstCmdSnap_3153_);
v_toSnapshot_3154_ = lean_ctor_get(v_oldProcessed_3149_, 0);
lean_inc_ref(v_toSnapshot_3154_);
lean_dec_ref(v_oldProcessed_3149_);
v_cmdState_3155_ = lean_ctor_get(v_val_3152_, 0);
lean_inc_ref(v_cmdState_3155_);
lean_dec(v_val_3152_);
v_stx_x3f_3156_ = lean_ctor_get(v_firstCmdSnap_3153_, 0);
lean_inc(v_stx_x3f_3156_);
lean_inc_ref(v_a_3146_);
v___f_3157_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed), 7, 5);
lean_closure_set(v___f_3157_, 0, v_newParserState_3145_);
lean_closure_set(v___f_3157_, 1, v_cmdState_3155_);
lean_closure_set(v___f_3157_, 2, v_a_3146_);
lean_closure_set(v___f_3157_, 3, v_toSnapshot_3154_);
lean_closure_set(v___f_3157_, 4, v_newStx_3147_);
v___x_3158_ = lean_box(0);
v___x_3159_ = 1;
v___x_3160_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_firstCmdSnap_3153_, v___f_3157_, v_stx_x3f_3156_, v___x_3148_, v___x_3158_, v___x_3159_);
return v___x_3160_;
}
else
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
lean_dec(v___x_3148_);
lean_dec_ref(v_newParserState_3145_);
v___x_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3161_, 0, v_newStx_3147_);
v___x_3162_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3161_, v_oldProcessed_3149_);
return v___x_3162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object* v_newParserState_3163_, lean_object* v_a_3164_, lean_object* v_newStx_3165_, lean_object* v___x_3166_, lean_object* v_oldProcessed_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(v_newParserState_3163_, v_a_3164_, v_newStx_3165_, v___x_3166_, v_oldProcessed_3167_);
lean_dec_ref(v_a_3164_);
return v_res_3169_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0(void){
_start:
{
uint8_t v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3170_ = 0;
v___x_3171_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_3172_ = lean_box(0);
v___x_3173_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3174_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3175_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3173_);
lean_ctor_set(v___x_3175_, 2, v___x_3172_);
lean_ctor_set(v___x_3175_, 3, v___x_3171_);
lean_ctor_set_uint8(v___x_3175_, sizeof(void*)*4, v___x_3170_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object* v_toProcessingContext_3176_, lean_object* v_a_3177_, lean_object* v_old_3178_, lean_object* v_newStx_3179_, lean_object* v_newParserState_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v_result_x3f_3183_; 
v_result_x3f_3183_ = lean_ctor_get(v_old_3178_, 4);
lean_inc(v_result_x3f_3183_);
if (lean_obj_tag(v_result_x3f_3183_) == 1)
{
lean_object* v_val_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3238_; 
v_val_3184_ = lean_ctor_get(v_result_x3f_3183_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v_result_x3f_3183_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3186_ = v_result_x3f_3183_;
v_isShared_3187_ = v_isSharedCheck_3238_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_val_3184_);
lean_dec(v_result_x3f_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3238_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_processedSnap_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3236_; 
v_processedSnap_3188_ = lean_ctor_get(v_val_3184_, 1);
v_isSharedCheck_3236_ = !lean_is_exclusive(v_val_3184_);
if (v_isSharedCheck_3236_ == 0)
{
lean_object* v_unused_3237_; 
v_unused_3237_ = lean_ctor_get(v_val_3184_, 0);
lean_dec(v_unused_3237_);
v___x_3190_ = v_val_3184_;
v_isShared_3191_ = v_isSharedCheck_3236_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_processedSnap_3188_);
lean_dec(v_val_3184_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3236_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v_toSnapshot_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3231_; 
v_toSnapshot_3192_ = lean_ctor_get(v_old_3178_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v_old_3178_);
if (v_isSharedCheck_3231_ == 0)
{
lean_object* v_unused_3232_; lean_object* v_unused_3233_; lean_object* v_unused_3234_; lean_object* v_unused_3235_; 
v_unused_3232_ = lean_ctor_get(v_old_3178_, 4);
lean_dec(v_unused_3232_);
v_unused_3233_ = lean_ctor_get(v_old_3178_, 3);
lean_dec(v_unused_3233_);
v_unused_3234_ = lean_ctor_get(v_old_3178_, 2);
lean_dec(v_unused_3234_);
v_unused_3235_ = lean_ctor_get(v_old_3178_, 1);
lean_dec(v_unused_3235_);
v___x_3194_ = v_old_3178_;
v_isShared_3195_ = v_isSharedCheck_3231_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_toSnapshot_3192_);
lean_dec(v_old_3178_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3231_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v_pos_3196_; lean_object* v_endPos_3197_; lean_object* v_stx_x3f_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___f_3201_; lean_object* v___x_3202_; uint8_t v___x_3203_; lean_object* v___x_3204_; lean_object* v_diagnostics_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3227_; 
v_pos_3196_ = lean_ctor_get(v_newParserState_3180_, 0);
v_endPos_3197_ = lean_ctor_get(v_toProcessingContext_3176_, 3);
v_stx_x3f_3198_ = lean_ctor_get(v_processedSnap_3188_, 0);
lean_inc(v_stx_x3f_3198_);
lean_inc(v_endPos_3197_);
lean_inc(v_pos_3196_);
v___x_3199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3199_, 0, v_pos_3196_);
lean_ctor_set(v___x_3199_, 1, v_endPos_3197_);
v___x_3200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3199_);
lean_inc_ref(v___x_3200_);
lean_inc(v_newStx_3179_);
lean_inc_ref(v_a_3177_);
lean_inc_ref(v_newParserState_3180_);
v___f_3201_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed), 6, 4);
lean_closure_set(v___f_3201_, 0, v_newParserState_3180_);
lean_closure_set(v___f_3201_, 1, v_a_3177_);
lean_closure_set(v___f_3201_, 2, v_newStx_3179_);
lean_closure_set(v___f_3201_, 3, v___x_3200_);
v___x_3202_ = lean_box(0);
v___x_3203_ = 1;
v___x_3204_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_processedSnap_3188_, v___f_3201_, v_stx_x3f_3198_, v___x_3200_, v___x_3202_, v___x_3203_);
v_diagnostics_3205_ = lean_ctor_get(v_toSnapshot_3192_, 1);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_toSnapshot_3192_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; lean_object* v_unused_3229_; lean_object* v_unused_3230_; 
v_unused_3228_ = lean_ctor_get(v_toSnapshot_3192_, 3);
lean_dec(v_unused_3228_);
v_unused_3229_ = lean_ctor_get(v_toSnapshot_3192_, 2);
lean_dec(v_unused_3229_);
v_unused_3230_ = lean_ctor_get(v_toSnapshot_3192_, 0);
lean_dec(v_unused_3230_);
v___x_3207_ = v_toSnapshot_3192_;
v_isShared_3208_ = v_isSharedCheck_3227_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_diagnostics_3205_);
lean_dec(v_toSnapshot_3192_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3227_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3212_; 
v___x_3209_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3210_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
if (v_isShared_3191_ == 0)
{
lean_ctor_set(v___x_3190_, 1, v___x_3204_);
lean_ctor_set(v___x_3190_, 0, v_newParserState_3180_);
v___x_3212_ = v___x_3190_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_newParserState_3180_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v___x_3204_);
v___x_3212_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
lean_object* v___x_3214_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v___x_3212_);
v___x_3214_ = v___x_3186_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
uint8_t v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3219_; 
v___x_3215_ = 0;
v___x_3216_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0);
lean_inc(v_newStx_3179_);
v___x_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3217_, 0, v_newStx_3179_);
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 3, v___x_3210_);
lean_ctor_set(v___x_3207_, 2, v___x_3202_);
lean_ctor_set(v___x_3207_, 0, v___x_3209_);
v___x_3219_ = v___x_3207_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3224_, 1, v_diagnostics_3205_);
lean_ctor_set(v_reuseFailAlloc_3224_, 2, v___x_3202_);
lean_ctor_set(v_reuseFailAlloc_3224_, 3, v___x_3210_);
v___x_3219_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
lean_object* v___x_3220_; lean_object* v___x_3222_; 
lean_ctor_set_uint8(v___x_3219_, sizeof(void*)*4, v___x_3215_);
v___x_3220_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3217_, v___x_3219_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 4, v___x_3214_);
lean_ctor_set(v___x_3194_, 3, v_newStx_3179_);
lean_ctor_set(v___x_3194_, 2, v_toProcessingContext_3176_);
lean_ctor_set(v___x_3194_, 1, v___x_3220_);
lean_ctor_set(v___x_3194_, 0, v___x_3216_);
v___x_3222_ = v___x_3194_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3216_);
lean_ctor_set(v_reuseFailAlloc_3223_, 1, v___x_3220_);
lean_ctor_set(v_reuseFailAlloc_3223_, 2, v_toProcessingContext_3176_);
lean_ctor_set(v_reuseFailAlloc_3223_, 3, v_newStx_3179_);
lean_ctor_set(v_reuseFailAlloc_3223_, 4, v___x_3214_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
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
lean_dec(v_result_x3f_3183_);
lean_dec_ref(v_newParserState_3180_);
lean_dec(v_newStx_3179_);
lean_dec_ref(v_toProcessingContext_3176_);
return v_old_3178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object* v_toProcessingContext_3239_, lean_object* v_a_3240_, lean_object* v_old_3241_, lean_object* v_newStx_3242_, lean_object* v_newParserState_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3239_, v_a_3240_, v_old_3241_, v_newStx_3242_, v_newParserState_3243_, v___y_3244_);
lean_dec_ref(v___y_3244_);
lean_dec_ref(v_a_3240_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object* v_toProcessingContext_3247_, lean_object* v_setupImports_3248_, lean_object* v_old_x3f_3249_, lean_object* v___x_3250_, lean_object* v___f_3251_, lean_object* v___y_3252_){
_start:
{
lean_object* v___x_3254_; 
lean_inc_ref(v_toProcessingContext_3247_);
v___x_3254_ = l_Lean_Parser_parseHeader(v_toProcessingContext_3247_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3323_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3257_ = v___x_3254_;
v_isShared_3258_ = v_isSharedCheck_3323_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3323_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v_snd_3259_; lean_object* v_fst_3260_; lean_object* v_fst_3261_; lean_object* v_snd_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3322_; 
v_snd_3259_ = lean_ctor_get(v_a_3255_, 1);
lean_inc(v_snd_3259_);
v_fst_3260_ = lean_ctor_get(v_a_3255_, 0);
lean_inc(v_fst_3260_);
lean_dec(v_a_3255_);
v_fst_3261_ = lean_ctor_get(v_snd_3259_, 0);
v_snd_3262_ = lean_ctor_get(v_snd_3259_, 1);
v_isSharedCheck_3322_ = !lean_is_exclusive(v_snd_3259_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3264_ = v_snd_3259_;
v_isShared_3265_ = v_isSharedCheck_3322_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_snd_3262_);
lean_inc(v_fst_3261_);
lean_dec(v_snd_3259_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3322_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
uint8_t v___x_3266_; 
v___x_3266_ = l_Lean_MessageLog_hasErrors(v_snd_3262_);
if (v___x_3266_ == 0)
{
lean_object* v___x_3267_; lean_object* v___y_3269_; 
lean_inc(v_fst_3260_);
v___x_3267_ = l_Lean_Syntax_unsetTrailing(v_fst_3260_);
if (lean_obj_tag(v_old_x3f_3249_) == 1)
{
lean_object* v_val_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3305_; 
v_val_3290_ = lean_ctor_get(v_old_x3f_3249_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v_old_x3f_3249_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3292_ = v_old_x3f_3249_;
v_isShared_3293_ = v_isSharedCheck_3305_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_val_3290_);
lean_dec(v_old_x3f_3249_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3305_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v_stx_3294_; lean_object* v_result_x3f_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; 
v_stx_3294_ = lean_ctor_get(v_val_3290_, 3);
v_result_x3f_3295_ = lean_ctor_get(v_val_3290_, 4);
lean_inc(v_stx_3294_);
v___x_3296_ = l_Lean_Syntax_unsetTrailing(v_stx_3294_);
lean_inc(v___x_3267_);
v___x_3297_ = l_Lean_Syntax_eqWithInfo(v___x_3267_, v___x_3296_);
if (v___x_3297_ == 0)
{
lean_inc(v_result_x3f_3295_);
lean_del_object(v___x_3292_);
lean_dec(v_val_3290_);
lean_dec_ref(v___f_3251_);
if (lean_obj_tag(v_result_x3f_3295_) == 0)
{
lean_dec_ref(v___x_3250_);
v___y_3269_ = v___y_3252_;
goto v___jp_3268_;
}
else
{
lean_object* v_val_3298_; lean_object* v_processedSnap_3299_; lean_object* v___x_3300_; 
v_val_3298_ = lean_ctor_get(v_result_x3f_3295_, 0);
lean_inc(v_val_3298_);
lean_dec_ref_known(v_result_x3f_3295_, 1);
v_processedSnap_3299_ = lean_ctor_get(v_val_3298_, 1);
lean_inc_ref(v_processedSnap_3299_);
lean_dec(v_val_3298_);
v___x_3300_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_3250_, v_processedSnap_3299_);
v___y_3269_ = v___y_3252_;
goto v___jp_3268_;
}
}
else
{
lean_object* v___x_3301_; lean_object* v___x_3303_; 
lean_dec(v___x_3267_);
lean_del_object(v___x_3264_);
lean_dec(v_snd_3262_);
lean_del_object(v___x_3257_);
lean_dec_ref(v___x_3250_);
lean_dec_ref(v_setupImports_3248_);
lean_dec_ref(v_toProcessingContext_3247_);
lean_inc_ref(v___y_3252_);
v___x_3301_ = lean_apply_5(v___f_3251_, v_val_3290_, v_fst_3260_, v_fst_3261_, v___y_3252_, lean_box(0));
if (v_isShared_3293_ == 0)
{
lean_ctor_set_tag(v___x_3292_, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3301_);
v___x_3303_ = v___x_3292_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v___x_3301_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
else
{
lean_dec_ref(v___f_3251_);
lean_dec_ref(v___x_3250_);
lean_dec(v_old_x3f_3249_);
v___y_3269_ = v___y_3252_;
goto v___jp_3268_;
}
v___jp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3279_; 
v___x_3270_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_3262_);
lean_inc(v_fst_3261_);
lean_inc(v_fst_3260_);
v___x_3271_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_3248_, v___x_3267_, v_fst_3260_, v_fst_3261_, v___y_3269_);
v___x_3272_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3273_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3274_ = lean_box(0);
v___x_3275_ = lean_unsigned_to_nat(32u);
v___x_3276_ = lean_mk_empty_array_with_capacity(v___x_3275_);
lean_dec_ref(v___x_3276_);
v___x_3277_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 1, v___x_3271_);
v___x_3279_ = v___x_3264_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_fst_3261_);
lean_ctor_set(v_reuseFailAlloc_3289_, 1, v___x_3271_);
v___x_3279_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3287_; 
v___x_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
v___x_3281_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3281_, 0, v___x_3272_);
lean_ctor_set(v___x_3281_, 1, v___x_3273_);
lean_ctor_set(v___x_3281_, 2, v___x_3274_);
lean_ctor_set(v___x_3281_, 3, v___x_3277_);
lean_ctor_set_uint8(v___x_3281_, sizeof(void*)*4, v___x_3266_);
lean_inc(v_fst_3260_);
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_fst_3260_);
v___x_3283_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3283_, 0, v___x_3272_);
lean_ctor_set(v___x_3283_, 1, v___x_3270_);
lean_ctor_set(v___x_3283_, 2, v___x_3274_);
lean_ctor_set(v___x_3283_, 3, v___x_3277_);
lean_ctor_set_uint8(v___x_3283_, sizeof(void*)*4, v___x_3266_);
v___x_3284_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3282_, v___x_3283_);
v___x_3285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3281_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
lean_ctor_set(v___x_3285_, 2, v_toProcessingContext_3247_);
lean_ctor_set(v___x_3285_, 3, v_fst_3260_);
lean_ctor_set(v___x_3285_, 4, v___x_3280_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 0, v___x_3285_);
v___x_3287_ = v___x_3257_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v___x_3285_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
}
else
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3320_; 
lean_del_object(v___x_3264_);
lean_dec(v_fst_3261_);
lean_dec_ref(v___f_3251_);
lean_dec_ref(v___x_3250_);
lean_dec(v_old_x3f_3249_);
lean_dec_ref(v_setupImports_3248_);
v___x_3306_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_3262_);
v___x_3307_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_3308_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3309_ = lean_box(0);
v___x_3310_ = lean_unsigned_to_nat(32u);
v___x_3311_ = lean_mk_empty_array_with_capacity(v___x_3310_);
lean_dec_ref(v___x_3311_);
v___x_3312_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_3313_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3313_, 0, v___x_3307_);
lean_ctor_set(v___x_3313_, 1, v___x_3308_);
lean_ctor_set(v___x_3313_, 2, v___x_3309_);
lean_ctor_set(v___x_3313_, 3, v___x_3312_);
lean_ctor_set_uint8(v___x_3313_, sizeof(void*)*4, v___x_3266_);
lean_inc(v_fst_3260_);
v___x_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3314_, 0, v_fst_3260_);
v___x_3315_ = 0;
v___x_3316_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3316_, 0, v___x_3307_);
lean_ctor_set(v___x_3316_, 1, v___x_3306_);
lean_ctor_set(v___x_3316_, 2, v___x_3309_);
lean_ctor_set(v___x_3316_, 3, v___x_3312_);
lean_ctor_set_uint8(v___x_3316_, sizeof(void*)*4, v___x_3315_);
v___x_3317_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3314_, v___x_3316_);
v___x_3318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3313_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
lean_ctor_set(v___x_3318_, 2, v_toProcessingContext_3247_);
lean_ctor_set(v___x_3318_, 3, v_fst_3260_);
lean_ctor_set(v___x_3318_, 4, v___x_3309_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 0, v___x_3318_);
v___x_3320_ = v___x_3257_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v___x_3318_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec_ref(v___f_3251_);
lean_dec_ref(v___x_3250_);
lean_dec(v_old_x3f_3249_);
lean_dec_ref(v_setupImports_3248_);
lean_dec_ref(v_toProcessingContext_3247_);
v_a_3324_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3254_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3254_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object* v_toProcessingContext_3332_, lean_object* v_setupImports_3333_, lean_object* v_old_x3f_3334_, lean_object* v___x_3335_, lean_object* v___f_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(v_toProcessingContext_3332_, v_setupImports_3333_, v_old_x3f_3334_, v___x_3335_, v___f_3336_, v___y_3337_);
lean_dec_ref(v___y_3337_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object* v___x_3340_, lean_object* v_toProcessingContext_3341_, lean_object* v_x_3342_){
_start:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3343_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_3340_);
v___x_3344_ = lean_box(0);
v___x_3345_ = lean_box(0);
v___x_3346_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3346_, 0, v_x_3342_);
lean_ctor_set(v___x_3346_, 1, v___x_3343_);
lean_ctor_set(v___x_3346_, 2, v_toProcessingContext_3341_);
lean_ctor_set(v___x_3346_, 3, v___x_3344_);
lean_ctor_set(v___x_3346_, 4, v___x_3345_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object* v_setupImports_3347_, lean_object* v_old_x3f_3348_, lean_object* v_a_3349_){
_start:
{
lean_object* v_toProcessingContext_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___f_3354_; lean_object* v___f_3355_; lean_object* v___f_3356_; 
v_toProcessingContext_3351_ = lean_ctor_get(v_a_3349_, 0);
v___x_3352_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___x_3353_ = l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_inc_ref(v_a_3349_);
lean_inc_ref_n(v_toProcessingContext_3351_, 3);
v___f_3354_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3354_, 0, v_toProcessingContext_3351_);
lean_closure_set(v___f_3354_, 1, v_a_3349_);
lean_inc(v_old_x3f_3348_);
v___f_3355_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed), 7, 5);
lean_closure_set(v___f_3355_, 0, v_toProcessingContext_3351_);
lean_closure_set(v___f_3355_, 1, v_setupImports_3347_);
lean_closure_set(v___f_3355_, 2, v_old_x3f_3348_);
lean_closure_set(v___f_3355_, 3, v___x_3353_);
lean_closure_set(v___f_3355_, 4, v___f_3354_);
v___f_3356_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4), 3, 2);
lean_closure_set(v___f_3356_, 0, v___x_3352_);
lean_closure_set(v___f_3356_, 1, v_toProcessingContext_3351_);
if (lean_obj_tag(v_old_x3f_3348_) == 1)
{
lean_object* v_val_3357_; lean_object* v_result_x3f_3358_; 
v_val_3357_ = lean_ctor_get(v_old_x3f_3348_, 0);
lean_inc(v_val_3357_);
lean_dec_ref_known(v_old_x3f_3348_, 1);
v_result_x3f_3358_ = lean_ctor_get(v_val_3357_, 4);
if (lean_obj_tag(v_result_x3f_3358_) == 1)
{
lean_object* v_stx_3359_; lean_object* v_val_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v_stx_3359_ = lean_ctor_get(v_val_3357_, 3);
lean_inc(v_stx_3359_);
v_val_3360_ = lean_ctor_get(v_result_x3f_3358_, 0);
lean_inc(v_val_3357_);
v___x_3361_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v_val_3357_);
v___x_3362_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v___x_3361_);
if (lean_obj_tag(v___x_3362_) == 1)
{
lean_object* v_val_3363_; 
v_val_3363_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_val_3363_);
lean_dec_ref_known(v___x_3362_, 1);
if (lean_obj_tag(v_val_3363_) == 1)
{
lean_object* v_val_3364_; lean_object* v_firstCmdSnap_3365_; lean_object* v___x_3366_; 
v_val_3364_ = lean_ctor_get(v_val_3363_, 0);
lean_inc(v_val_3364_);
lean_dec_ref_known(v_val_3363_, 1);
v_firstCmdSnap_3365_ = lean_ctor_get(v_val_3364_, 1);
lean_inc_ref(v_firstCmdSnap_3365_);
lean_dec(v_val_3364_);
v___x_3366_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_firstCmdSnap_3365_);
if (lean_obj_tag(v___x_3366_) == 1)
{
lean_object* v_val_3367_; lean_object* v_nextCmdSnap_x3f_3368_; 
v_val_3367_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_val_3367_);
lean_dec_ref_known(v___x_3366_, 1);
v_nextCmdSnap_x3f_3368_ = lean_ctor_get(v_val_3367_, 4);
lean_inc(v_nextCmdSnap_x3f_3368_);
lean_dec(v_val_3367_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3368_) == 0)
{
lean_object* v___x_3369_; 
lean_dec(v_stx_3359_);
lean_dec(v_val_3357_);
v___x_3369_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3369_;
}
else
{
lean_object* v_val_3370_; lean_object* v___x_3371_; 
v_val_3370_ = lean_ctor_get(v_nextCmdSnap_x3f_3368_, 0);
lean_inc(v_val_3370_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3368_, 1);
v___x_3371_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_3370_);
if (lean_obj_tag(v___x_3371_) == 1)
{
lean_object* v_val_3372_; lean_object* v_parserState_3373_; lean_object* v_pos_3374_; uint8_t v___x_3375_; 
v_val_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_val_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v_parserState_3373_ = lean_ctor_get(v_val_3372_, 2);
lean_inc_ref(v_parserState_3373_);
lean_dec(v_val_3372_);
v_pos_3374_ = lean_ctor_get(v_parserState_3373_, 0);
lean_inc(v_pos_3374_);
lean_dec_ref(v_parserState_3373_);
v___x_3375_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_3374_, v_a_3349_);
lean_dec(v_pos_3374_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; 
lean_dec(v_stx_3359_);
lean_dec(v_val_3357_);
v___x_3376_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3376_;
}
else
{
lean_object* v_parserState_3377_; lean_object* v___x_3378_; 
lean_dec_ref(v___f_3356_);
lean_dec_ref(v___f_3355_);
v_parserState_3377_ = lean_ctor_get(v_val_3360_, 0);
lean_inc_ref(v_parserState_3377_);
lean_inc_ref(v_toProcessingContext_3351_);
v___x_3378_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3351_, v_a_3349_, v_val_3357_, v_stx_3359_, v_parserState_3377_, v_a_3349_);
return v___x_3378_;
}
}
else
{
lean_object* v___x_3379_; 
lean_dec(v___x_3371_);
lean_dec(v_stx_3359_);
lean_dec(v_val_3357_);
v___x_3379_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3379_;
}
}
}
else
{
lean_object* v___x_3380_; 
lean_dec(v___x_3366_);
lean_dec(v_stx_3359_);
lean_dec(v_val_3357_);
v___x_3380_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3380_;
}
}
else
{
lean_object* v___x_3381_; 
lean_dec(v_val_3363_);
lean_dec(v_stx_3359_);
lean_dec(v_val_3357_);
v___x_3381_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3381_;
}
}
else
{
lean_object* v___x_3382_; 
lean_dec(v___x_3362_);
lean_dec(v_stx_3359_);
lean_dec(v_val_3357_);
v___x_3382_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3382_;
}
}
else
{
lean_object* v___x_3383_; 
lean_dec(v_val_3357_);
v___x_3383_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3383_;
}
}
else
{
lean_object* v___x_3384_; 
lean_dec(v_old_x3f_3348_);
v___x_3384_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3356_, v___f_3355_, v_a_3349_);
return v___x_3384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object* v_setupImports_3385_, lean_object* v_old_x3f_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(v_setupImports_3385_, v_old_x3f_3386_, v_a_3387_);
lean_dec_ref(v_a_3387_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object* v_setupImports_3390_, lean_object* v_old_x3f_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v___x_3394_; 
lean_inc(v_old_x3f_3391_);
v___x_3394_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed), 4, 2);
lean_closure_set(v___x_3394_, 0, v_setupImports_3390_);
lean_closure_set(v___x_3394_, 1, v_old_x3f_3391_);
if (lean_obj_tag(v_old_x3f_3391_) == 0)
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = lean_box(0);
v___x_3396_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3394_, v___x_3395_, v_a_3392_);
return v___x_3396_;
}
else
{
lean_object* v_val_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3406_; 
v_val_3397_ = lean_ctor_get(v_old_x3f_3391_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_old_x3f_3391_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3399_ = v_old_x3f_3391_;
v_isShared_3400_ = v_isSharedCheck_3406_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_val_3397_);
lean_dec(v_old_x3f_3391_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3406_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v_ictx_3401_; lean_object* v___x_3403_; 
v_ictx_3401_ = lean_ctor_get(v_val_3397_, 2);
lean_inc_ref(v_ictx_3401_);
lean_dec(v_val_3397_);
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 0, v_ictx_3401_);
v___x_3403_ = v___x_3399_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_ictx_3401_);
v___x_3403_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
lean_object* v___x_3404_; 
v___x_3404_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3394_, v___x_3403_, v_a_3392_);
return v___x_3404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object* v_setupImports_3407_, lean_object* v_old_x3f_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_Lean_Language_Lean_process(v_setupImports_3407_, v_old_x3f_3408_, v_a_3409_);
lean_dec_ref(v_a_3409_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object* v_inputCtx_3412_, lean_object* v_parserState_3413_, lean_object* v_commandState_3414_, lean_object* v_old_x3f_3415_){
_start:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3425_; 
v___x_3417_ = lean_io_promise_new();
v___x_3418_ = l_IO_CancelToken_new();
if (lean_obj_tag(v_old_x3f_3415_) == 0)
{
lean_object* v___x_3440_; 
v___x_3440_ = lean_box(0);
v___y_3425_ = v___x_3440_;
goto v___jp_3424_;
}
else
{
lean_object* v_val_3441_; lean_object* v_snd_3442_; lean_object* v___x_3443_; 
v_val_3441_ = lean_ctor_get(v_old_x3f_3415_, 0);
v_snd_3442_ = lean_ctor_get(v_val_3441_, 1);
lean_inc(v_snd_3442_);
v___x_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3443_, 0, v_snd_3442_);
v___y_3425_ = v___x_3443_;
goto v___jp_3424_;
}
v___jp_3419_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___y_3420_, v___y_3421_, v_inputCtx_3412_);
lean_dec(v___x_3422_);
v___x_3423_ = l_IO_Promise_result_x21___redArg(v___x_3417_);
lean_dec(v___x_3417_);
return v___x_3423_;
}
v___jp_3424_:
{
uint8_t v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3426_ = 1;
v___x_3427_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0));
v___x_3428_ = lean_box(v___x_3426_);
lean_inc(v___x_3417_);
v___x_3429_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed), 9, 7);
lean_closure_set(v___x_3429_, 0, v___y_3425_);
lean_closure_set(v___x_3429_, 1, v_parserState_3413_);
lean_closure_set(v___x_3429_, 2, v_commandState_3414_);
lean_closure_set(v___x_3429_, 3, v___x_3417_);
lean_closure_set(v___x_3429_, 4, v___x_3428_);
lean_closure_set(v___x_3429_, 5, v___x_3418_);
lean_closure_set(v___x_3429_, 6, v___x_3427_);
if (lean_obj_tag(v_old_x3f_3415_) == 0)
{
lean_object* v___x_3430_; 
v___x_3430_ = lean_box(0);
v___y_3420_ = v___x_3429_;
v___y_3421_ = v___x_3430_;
goto v___jp_3419_;
}
else
{
lean_object* v_val_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3439_; 
v_val_3431_ = lean_ctor_get(v_old_x3f_3415_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_old_x3f_3415_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3433_ = v_old_x3f_3415_;
v_isShared_3434_ = v_isSharedCheck_3439_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_val_3431_);
lean_dec(v_old_x3f_3415_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3439_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v_fst_3435_; lean_object* v___x_3437_; 
v_fst_3435_ = lean_ctor_get(v_val_3431_, 0);
lean_inc(v_fst_3435_);
lean_dec(v_val_3431_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v_fst_3435_);
v___x_3437_ = v___x_3433_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_fst_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
v___y_3420_ = v___x_3429_;
v___y_3421_ = v___x_3437_;
goto v___jp_3419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object* v_inputCtx_3444_, lean_object* v_parserState_3445_, lean_object* v_commandState_3446_, lean_object* v_old_x3f_3447_, lean_object* v_a_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lean_Language_Lean_processCommands(v_inputCtx_3444_, v_parserState_3445_, v_commandState_3446_, v_old_x3f_3447_);
lean_dec_ref(v_inputCtx_3444_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object* v_snap_3450_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3451_; 
v_nextCmdSnap_x3f_3451_ = lean_ctor_get(v_snap_3450_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_3451_) == 1)
{
lean_object* v_val_3452_; lean_object* v___x_3453_; 
lean_inc_ref(v_nextCmdSnap_x3f_3451_);
lean_dec_ref(v_snap_3450_);
v_val_3452_ = lean_ctor_get(v_nextCmdSnap_x3f_3451_, 0);
lean_inc(v_val_3452_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3451_, 1);
v___x_3453_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3452_);
v_snap_3450_ = v___x_3453_;
goto _start;
}
else
{
lean_object* v_elabSnap_3455_; lean_object* v_resultSnap_3456_; lean_object* v___x_3457_; lean_object* v_cmdState_3458_; lean_object* v___x_3459_; 
v_elabSnap_3455_ = lean_ctor_get(v_snap_3450_, 3);
lean_inc_ref(v_elabSnap_3455_);
lean_dec_ref(v_snap_3450_);
v_resultSnap_3456_ = lean_ctor_get(v_elabSnap_3455_, 2);
lean_inc_ref(v_resultSnap_3456_);
lean_dec_ref(v_elabSnap_3455_);
v___x_3457_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_3456_);
v_cmdState_3458_ = lean_ctor_get(v___x_3457_, 1);
lean_inc_ref(v_cmdState_3458_);
lean_dec(v___x_3457_);
v___x_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3459_, 0, v_cmdState_3458_);
return v___x_3459_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object* v_snap_3460_){
_start:
{
lean_object* v_result_x3f_3461_; 
v_result_x3f_3461_ = lean_ctor_get(v_snap_3460_, 4);
lean_inc(v_result_x3f_3461_);
lean_dec_ref(v_snap_3460_);
if (lean_obj_tag(v_result_x3f_3461_) == 0)
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_box(0);
return v___x_3462_;
}
else
{
lean_object* v_val_3463_; lean_object* v_processedSnap_3464_; lean_object* v___x_3465_; lean_object* v_result_x3f_3466_; 
v_val_3463_ = lean_ctor_get(v_result_x3f_3461_, 0);
lean_inc(v_val_3463_);
lean_dec_ref_known(v_result_x3f_3461_, 1);
v_processedSnap_3464_ = lean_ctor_get(v_val_3463_, 1);
lean_inc_ref(v_processedSnap_3464_);
lean_dec(v_val_3463_);
v___x_3465_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3464_);
v_result_x3f_3466_ = lean_ctor_get(v___x_3465_, 2);
lean_inc(v_result_x3f_3466_);
lean_dec(v___x_3465_);
if (lean_obj_tag(v_result_x3f_3466_) == 0)
{
lean_object* v___x_3467_; 
v___x_3467_ = lean_box(0);
return v___x_3467_;
}
else
{
lean_object* v_val_3468_; lean_object* v_firstCmdSnap_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v_val_3468_ = lean_ctor_get(v_result_x3f_3466_, 0);
lean_inc(v_val_3468_);
lean_dec_ref_known(v_result_x3f_3466_, 1);
v_firstCmdSnap_3469_ = lean_ctor_get(v_val_3468_, 1);
lean_inc_ref(v_firstCmdSnap_3469_);
lean_dec(v_val_3468_);
v___x_3470_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3469_);
v___x_3471_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(v___x_3470_);
return v___x_3471_;
}
}
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__2(void){
_start:
{
uint8_t v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3477_ = 1;
v___x_3478_ = ((lean_object*)(l_Lean_Language_Lean_truncateToHeader___closed__1));
v___x_3479_ = l_Lean_Name_toString(v___x_3478_, v___x_3477_);
return v___x_3479_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__3(void){
_start:
{
uint8_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v___x_3480_ = 0;
v___x_3481_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__17);
v___x_3482_ = lean_box(0);
v___x_3483_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3484_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__2, &l_Lean_Language_Lean_truncateToHeader___closed__2_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__2);
v___x_3485_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3485_, 0, v___x_3484_);
lean_ctor_set(v___x_3485_, 1, v___x_3483_);
lean_ctor_set(v___x_3485_, 2, v___x_3482_);
lean_ctor_set(v___x_3485_, 3, v___x_3481_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*4, v___x_3480_);
return v___x_3485_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__4(void){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3486_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3487_ = lean_box(0);
v___x_3488_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3487_, v___x_3486_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object* v_snap_3489_){
_start:
{
lean_object* v_result_x3f_3490_; 
v_result_x3f_3490_ = lean_ctor_get(v_snap_3489_, 4);
lean_inc(v_result_x3f_3490_);
if (lean_obj_tag(v_result_x3f_3490_) == 1)
{
lean_object* v_val_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3565_; 
v_val_3491_ = lean_ctor_get(v_result_x3f_3490_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v_result_x3f_3490_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3493_ = v_result_x3f_3490_;
v_isShared_3494_ = v_isSharedCheck_3565_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_val_3491_);
lean_dec(v_result_x3f_3490_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3565_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v_toSnapshot_3495_; lean_object* v_metaSnap_3496_; lean_object* v_ictx_3497_; lean_object* v_stx_3498_; lean_object* v_parserState_3499_; lean_object* v_processedSnap_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3564_; 
v_toSnapshot_3495_ = lean_ctor_get(v_snap_3489_, 0);
v_metaSnap_3496_ = lean_ctor_get(v_snap_3489_, 1);
v_ictx_3497_ = lean_ctor_get(v_snap_3489_, 2);
v_stx_3498_ = lean_ctor_get(v_snap_3489_, 3);
v_parserState_3499_ = lean_ctor_get(v_val_3491_, 0);
v_processedSnap_3500_ = lean_ctor_get(v_val_3491_, 1);
v_isSharedCheck_3564_ = !lean_is_exclusive(v_val_3491_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3502_ = v_val_3491_;
v_isShared_3503_ = v_isSharedCheck_3564_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_processedSnap_3500_);
lean_inc(v_parserState_3499_);
lean_dec(v_val_3491_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3564_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v_processed_3504_; lean_object* v_result_x3f_3505_; 
v_processed_3504_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3500_);
v_result_x3f_3505_ = lean_ctor_get(v_processed_3504_, 2);
lean_inc(v_result_x3f_3505_);
if (lean_obj_tag(v_result_x3f_3505_) == 1)
{
lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3558_; 
lean_inc(v_stx_3498_);
lean_inc_ref(v_ictx_3497_);
lean_inc_ref(v_metaSnap_3496_);
lean_inc_ref(v_toSnapshot_3495_);
v_isSharedCheck_3558_ = !lean_is_exclusive(v_snap_3489_);
if (v_isSharedCheck_3558_ == 0)
{
lean_object* v_unused_3559_; lean_object* v_unused_3560_; lean_object* v_unused_3561_; lean_object* v_unused_3562_; lean_object* v_unused_3563_; 
v_unused_3559_ = lean_ctor_get(v_snap_3489_, 4);
lean_dec(v_unused_3559_);
v_unused_3560_ = lean_ctor_get(v_snap_3489_, 3);
lean_dec(v_unused_3560_);
v_unused_3561_ = lean_ctor_get(v_snap_3489_, 2);
lean_dec(v_unused_3561_);
v_unused_3562_ = lean_ctor_get(v_snap_3489_, 1);
lean_dec(v_unused_3562_);
v_unused_3563_ = lean_ctor_get(v_snap_3489_, 0);
lean_dec(v_unused_3563_);
v___x_3507_ = v_snap_3489_;
v_isShared_3508_ = v_isSharedCheck_3558_;
goto v_resetjp_3506_;
}
else
{
lean_dec(v_snap_3489_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3558_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v_val_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3557_; 
v_val_3509_ = lean_ctor_get(v_result_x3f_3505_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v_result_x3f_3505_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3511_ = v_result_x3f_3505_;
v_isShared_3512_ = v_isSharedCheck_3557_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_val_3509_);
lean_dec(v_result_x3f_3505_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3557_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v_toSnapshot_3513_; lean_object* v_metaSnap_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3555_; 
v_toSnapshot_3513_ = lean_ctor_get(v_processed_3504_, 0);
v_metaSnap_3514_ = lean_ctor_get(v_processed_3504_, 1);
v_isSharedCheck_3555_ = !lean_is_exclusive(v_processed_3504_);
if (v_isSharedCheck_3555_ == 0)
{
lean_object* v_unused_3556_; 
v_unused_3556_ = lean_ctor_get(v_processed_3504_, 2);
lean_dec(v_unused_3556_);
v___x_3516_ = v_processed_3504_;
v_isShared_3517_ = v_isSharedCheck_3555_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_metaSnap_3514_);
lean_inc(v_toSnapshot_3513_);
lean_dec(v_processed_3504_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3555_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v_cmdState_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3553_; 
v_cmdState_3518_ = lean_ctor_get(v_val_3509_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_val_3509_);
if (v_isSharedCheck_3553_ == 0)
{
lean_object* v_unused_3554_; 
v_unused_3554_ = lean_ctor_get(v_val_3509_, 1);
lean_dec(v_unused_3554_);
v___x_3520_ = v_val_3509_;
v_isShared_3521_ = v_isSharedCheck_3553_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_cmdState_3518_);
lean_dec(v_val_3509_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3553_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v_resultSnap_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v_elabSnap_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v_termCmd_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3522_ = lean_box(0);
v___x_3523_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
lean_inc_ref(v_cmdState_3518_);
v_resultSnap_3524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_resultSnap_3524_, 0, v___x_3523_);
lean_ctor_set(v_resultSnap_3524_, 1, v_cmdState_3518_);
v___x_3525_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3);
v___x_3526_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3522_, v_resultSnap_3524_);
v___x_3527_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__4, &l_Lean_Language_Lean_truncateToHeader___closed__4_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__4);
v___x_3528_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v_elabSnap_3529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_elabSnap_3529_, 0, v___x_3523_);
lean_ctor_set(v_elabSnap_3529_, 1, v___x_3525_);
lean_ctor_set(v_elabSnap_3529_, 2, v___x_3526_);
lean_ctor_set(v_elabSnap_3529_, 3, v___x_3527_);
lean_ctor_set(v_elabSnap_3529_, 4, v___x_3528_);
v___x_3530_ = lean_box(0);
v___x_3531_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_termCmd_3532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_termCmd_3532_, 0, v___x_3523_);
lean_ctor_set(v_termCmd_3532_, 1, v___x_3530_);
lean_ctor_set(v_termCmd_3532_, 2, v___x_3531_);
lean_ctor_set(v_termCmd_3532_, 3, v_elabSnap_3529_);
lean_ctor_set(v_termCmd_3532_, 4, v___x_3522_);
v___x_3533_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3522_, v_termCmd_3532_);
if (v_isShared_3521_ == 0)
{
lean_ctor_set(v___x_3520_, 1, v___x_3533_);
v___x_3535_ = v___x_3520_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_cmdState_3518_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3537_; 
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 0, v___x_3535_);
v___x_3537_ = v___x_3511_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v_newProcessed_3539_; 
if (v_isShared_3517_ == 0)
{
lean_ctor_set(v___x_3516_, 2, v___x_3537_);
v_newProcessed_3539_ = v___x_3516_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_toSnapshot_3513_);
lean_ctor_set(v_reuseFailAlloc_3550_, 1, v_metaSnap_3514_);
lean_ctor_set(v_reuseFailAlloc_3550_, 2, v___x_3537_);
v_newProcessed_3539_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
lean_object* v___x_3540_; lean_object* v___x_3542_; 
v___x_3540_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3522_, v_newProcessed_3539_);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 1, v___x_3540_);
v___x_3542_ = v___x_3502_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_parserState_3499_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v___x_3540_);
v___x_3542_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
lean_object* v___x_3544_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 0, v___x_3542_);
v___x_3544_ = v___x_3493_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v___x_3542_);
v___x_3544_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3546_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v___x_3544_);
v___x_3546_ = v___x_3507_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_toSnapshot_3495_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v_metaSnap_3496_);
lean_ctor_set(v_reuseFailAlloc_3547_, 2, v_ictx_3497_);
lean_ctor_set(v_reuseFailAlloc_3547_, 3, v_stx_3498_);
lean_ctor_set(v_reuseFailAlloc_3547_, 4, v___x_3544_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
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
else
{
lean_dec(v_result_x3f_3505_);
lean_dec(v_processed_3504_);
lean_del_object(v___x_3502_);
lean_dec_ref(v_parserState_3499_);
lean_del_object(v___x_3493_);
return v_snap_3489_;
}
}
}
}
else
{
lean_dec(v_result_x3f_3490_);
return v_snap_3489_;
}
}
}
lean_object* runtime_initialize_Lean_Language_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Import(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Language_Lean_experimental_module = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Language_Lean_experimental_module);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Language_Util(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_Import(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Lean(builtin);
}
#ifdef __cplusplus
}
#endif

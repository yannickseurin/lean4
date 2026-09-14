// Lean compiler output
// Module: Lean.Elab.Frontend
// Imports: import Init.System.Platform public import Lean.Language.Lean public import Lean.Server.References public import Lean.Util.Profiler import Lean.Compiler.Options import Lean.Compiler.InitAttr import Lean.Linter.PersistentLintLog import Lean.Util.ProfilerServer
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedModuleArtifacts_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_runInitAttrsForModules(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_ModuleArtifacts_oleanParts(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_compacted_region_read(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_ModuleArtifacts_irParts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_profileit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_load_dynlib(lean_object*);
uint32_t lean_internal_get_hardware_concurrency(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Linter_recordLints(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Lean_writeModule(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_IO_CancelToken_set(lean_object*);
lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_getRegularInitAttrModIdxs(lean_object*);
lean_object* lean_compacted_region_save(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lean_instToJsonModuleArtifacts_toJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_runtime_forget(lean_object*);
lean_object* l_Lean_Language_Lean_processCommands(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
lean_object* l_Lean_Options_mergeBy(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_HeaderSyntax_isModule(lean_object*);
uint8_t lean_strict_or(uint8_t, uint8_t);
lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Language_Lean_pushOpt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed(lean_object*, lean_object*);
lean_object* lean_enable_initializer_execution();
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
extern lean_object* l_Lean_trace_profiler_output;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Firefox_Profile_export(lean_object*, double, lean_object*, lean_object*);
lean_object* l_Lean_Firefox_instToJsonProfile_toJson(lean_object*);
extern lean_object* l_Lean_trace_profiler_serve;
lean_object* l_Lean_Firefox_Profile_serve(lean_object*);
lean_object* l_Lean_Server_findModuleRefs(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs(lean_object*);
lean_object* l_Lean_Server_collectImports(lean_object*);
lean_object* l_Lean_Server_instToJsonIlean_toJson(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_runAndReport(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_codeQualityLogExt;
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_process(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_internal_cmdlineSnapshots;
extern lean_object* l_Lean_Elab_async;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(lean_object*);
lean_object* l_Lean_withImporting___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected internal error: "};
static const lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Frontend_elabCommandAtFrontend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend___closed__0 = (const lean_object*)&l_Lean_Elab_Frontend_elabCommandAtFrontend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Frontend_processCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parsing"};
static const lean_object* l_Lean_Elab_Frontend_processCommand___closed__0 = (const lean_object*)&l_Lean_Elab_Frontend_processCommand___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Frontend_processCommand___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Frontend_processCommand___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_IO_processCommandsIncrementally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_IO_processCommandsIncrementally___closed__0 = (const lean_object*)&l_Lean_Elab_IO_processCommandsIncrementally___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_process___closed__0 = (const lean_object*)&l_Lean_Elab_process___closed__0_value;
static const lean_string_object l_Lean_Elab_process___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l_Lean_Elab_process___closed__1 = (const lean_object*)&l_Lean_Elab_process___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_process(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "server"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8_spec__10(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1(lean_object*);
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "deps"};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "failed to parse snapshot deps file "};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4;
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LEAN_IMPORT_WORKERS"};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_setMainModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_snap"};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 190, 236, 193, 206, 64, 207, 210)}};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2(lean_object*);
static const lean_closure_object l_Lean_Elab_runFrontend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_runFrontend___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_runFrontend___closed__0 = (const lean_object*)&l_Lean_Elab_runFrontend___closed__0_value;
static lean_once_cell_t l_Lean_Elab_runFrontend___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_runFrontend___closed__1;
static const lean_string_object l_Lean_Elab_runFrontend___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ".olean serialization"};
static const lean_object* l_Lean_Elab_runFrontend___closed__2 = (const lean_object*)&l_Lean_Elab_runFrontend___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg(lean_object* v_commandState_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_parserState_5_; lean_object* v_cmdPos_6_; lean_object* v_commands_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_17_; 
v___x_4_ = lean_st_ref_take(v_a_2_);
v_parserState_5_ = lean_ctor_get(v___x_4_, 1);
v_cmdPos_6_ = lean_ctor_get(v___x_4_, 2);
v_commands_7_ = lean_ctor_get(v___x_4_, 3);
v_isSharedCheck_17_ = !lean_is_exclusive(v___x_4_);
if (v_isSharedCheck_17_ == 0)
{
lean_object* v_unused_18_; 
v_unused_18_ = lean_ctor_get(v___x_4_, 0);
lean_dec(v_unused_18_);
v___x_9_ = v___x_4_;
v_isShared_10_ = v_isSharedCheck_17_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_commands_7_);
lean_inc(v_cmdPos_6_);
lean_inc(v_parserState_5_);
lean_dec(v___x_4_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_17_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 0, v_commandState_1_);
v___x_13_ = v___x_9_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_commandState_1_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_parserState_5_);
lean_ctor_set(v_reuseFailAlloc_16_, 2, v_cmdPos_6_);
lean_ctor_set(v_reuseFailAlloc_16_, 3, v_commands_7_);
v___x_13_ = v_reuseFailAlloc_16_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_st_ref_put(v_a_2_, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_11_);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg___boxed(lean_object* v_commandState_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_Frontend_setCommandState___redArg(v_commandState_19_, v_a_20_);
lean_dec(v_a_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState(lean_object* v_commandState_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Elab_Frontend_setCommandState___redArg(v_commandState_23_, v_a_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___boxed(lean_object* v_commandState_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Elab_Frontend_setCommandState(v_commandState_28_, v_a_29_, v_a_30_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg(lean_object* v_x_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v___x_38_; lean_object* v_fileName_39_; lean_object* v_fileMap_40_; lean_object* v_commandState_41_; lean_object* v_cmdPos_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_38_ = lean_st_ref_get(v_a_36_);
v_fileName_39_ = lean_ctor_get(v_a_35_, 1);
v_fileMap_40_ = lean_ctor_get(v_a_35_, 2);
v_commandState_41_ = lean_ctor_get(v___x_38_, 0);
lean_inc_ref(v_commandState_41_);
v_cmdPos_42_ = lean_ctor_get(v___x_38_, 2);
lean_inc(v_cmdPos_42_);
lean_dec(v___x_38_);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_box(0);
v___x_45_ = lean_box(0);
v___x_46_ = l_Lean_firstFrontendMacroScope;
v___x_47_ = lean_box(0);
v___x_48_ = 0;
lean_inc_ref(v_fileMap_40_);
lean_inc_ref(v_fileName_39_);
v___x_49_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_49_, 0, v_fileName_39_);
lean_ctor_set(v___x_49_, 1, v_fileMap_40_);
lean_ctor_set(v___x_49_, 2, v___x_43_);
lean_ctor_set(v___x_49_, 3, v_cmdPos_42_);
lean_ctor_set(v___x_49_, 4, v___x_44_);
lean_ctor_set(v___x_49_, 5, v___x_45_);
lean_ctor_set(v___x_49_, 6, v___x_46_);
lean_ctor_set(v___x_49_, 7, v___x_47_);
lean_ctor_set(v___x_49_, 8, v___x_45_);
lean_ctor_set(v___x_49_, 9, v___x_45_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*10, v___x_48_);
v___x_50_ = lean_st_mk_ref(v_commandState_41_);
lean_inc(v___x_50_);
v___x_51_ = lean_apply_3(v_x_34_, v___x_49_, v___x_50_, lean_box(0));
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_52_);
lean_dec_ref_known(v___x_51_, 1);
v___x_53_ = lean_st_ref_get(v___x_50_);
lean_dec(v___x_50_);
v___x_54_ = l_Lean_Elab_Frontend_setCommandState___redArg(v___x_53_, v_a_36_);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_61_ == 0)
{
lean_object* v_unused_62_; 
v_unused_62_ = lean_ctor_get(v___x_54_, 0);
lean_dec(v_unused_62_);
v___x_56_ = v___x_54_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_dec(v___x_54_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v_a_52_);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_52_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_75_; 
lean_dec(v___x_50_);
v_a_63_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_75_ == 0)
{
v___x_65_ = v___x_51_;
v_isShared_66_ = v_isSharedCheck_75_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_51_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_75_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_67_ = l_Lean_Exception_toMessageData(v_a_63_);
v___x_68_ = l_Lean_MessageData_toString(v___x_67_);
v___x_69_ = ((lean_object*)(l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0));
v___x_70_ = lean_string_append(v___x_69_, v___x_68_);
lean_dec_ref(v___x_68_);
v___x_71_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_71_);
v___x_73_ = v___x_65_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg___boxed(lean_object* v_x_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Elab_Frontend_runCommandElabM___redArg(v_x_76_, v_a_77_, v_a_78_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM(lean_object* v_00_u03b1_81_, lean_object* v_x_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v___x_86_; lean_object* v_fileName_87_; lean_object* v_fileMap_88_; lean_object* v_commandState_89_; lean_object* v_cmdPos_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_86_ = lean_st_ref_get(v_a_84_);
v_fileName_87_ = lean_ctor_get(v_a_83_, 1);
v_fileMap_88_ = lean_ctor_get(v_a_83_, 2);
v_commandState_89_ = lean_ctor_get(v___x_86_, 0);
lean_inc_ref(v_commandState_89_);
v_cmdPos_90_ = lean_ctor_get(v___x_86_, 2);
lean_inc(v_cmdPos_90_);
lean_dec(v___x_86_);
v___x_91_ = lean_unsigned_to_nat(0u);
v___x_92_ = lean_box(0);
v___x_93_ = lean_box(0);
v___x_94_ = l_Lean_firstFrontendMacroScope;
v___x_95_ = lean_box(0);
v___x_96_ = 0;
lean_inc_ref(v_fileMap_88_);
lean_inc_ref(v_fileName_87_);
v___x_97_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_97_, 0, v_fileName_87_);
lean_ctor_set(v___x_97_, 1, v_fileMap_88_);
lean_ctor_set(v___x_97_, 2, v___x_91_);
lean_ctor_set(v___x_97_, 3, v_cmdPos_90_);
lean_ctor_set(v___x_97_, 4, v___x_92_);
lean_ctor_set(v___x_97_, 5, v___x_93_);
lean_ctor_set(v___x_97_, 6, v___x_94_);
lean_ctor_set(v___x_97_, 7, v___x_95_);
lean_ctor_set(v___x_97_, 8, v___x_93_);
lean_ctor_set(v___x_97_, 9, v___x_93_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*10, v___x_96_);
v___x_98_ = lean_st_mk_ref(v_commandState_89_);
lean_inc(v___x_98_);
v___x_99_ = lean_apply_3(v_x_82_, v___x_97_, v___x_98_, lean_box(0));
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_99_, 1);
v___x_101_ = lean_st_ref_get(v___x_98_);
lean_dec(v___x_98_);
v___x_102_ = l_Lean_Elab_Frontend_setCommandState___redArg(v___x_101_, v_a_84_);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; 
v_unused_110_ = lean_ctor_get(v___x_102_, 0);
lean_dec(v_unused_110_);
v___x_104_ = v___x_102_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_dec(v___x_102_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v_a_100_);
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_100_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_123_; 
lean_dec(v___x_98_);
v_a_111_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_123_ == 0)
{
v___x_113_ = v___x_99_;
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_99_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_115_ = l_Lean_Exception_toMessageData(v_a_111_);
v___x_116_ = l_Lean_MessageData_toString(v___x_115_);
v___x_117_ = ((lean_object*)(l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0));
v___x_118_ = lean_string_append(v___x_117_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_119_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_119_);
v___x_121_ = v___x_113_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___boxed(lean_object* v_00_u03b1_124_, lean_object* v_x_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_Elab_Frontend_runCommandElabM(v_00_u03b1_124_, v_x_125_, v_a_126_, v_a_127_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend(lean_object* v_stx_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_fileName_139_; lean_object* v_fileMap_140_; lean_object* v_commandState_141_; lean_object* v_cmdPos_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = ((lean_object*)(l_Lean_Elab_Frontend_elabCommandAtFrontend___closed__0));
v___x_138_ = lean_st_ref_get(v_a_134_);
v_fileName_139_ = lean_ctor_get(v_a_133_, 1);
v_fileMap_140_ = lean_ctor_get(v_a_133_, 2);
v_commandState_141_ = lean_ctor_get(v___x_138_, 0);
lean_inc_ref(v_commandState_141_);
v_cmdPos_142_ = lean_ctor_get(v___x_138_, 2);
lean_inc(v_cmdPos_142_);
lean_dec(v___x_138_);
v___x_143_ = lean_box(0);
v___x_144_ = lean_box(0);
v___x_145_ = l_Lean_firstFrontendMacroScope;
v___x_146_ = lean_box(0);
v___x_147_ = 0;
lean_inc_ref(v_fileMap_140_);
lean_inc_ref(v_fileName_139_);
v___x_148_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_148_, 0, v_fileName_139_);
lean_ctor_set(v___x_148_, 1, v_fileMap_140_);
lean_ctor_set(v___x_148_, 2, v___x_136_);
lean_ctor_set(v___x_148_, 3, v_cmdPos_142_);
lean_ctor_set(v___x_148_, 4, v___x_143_);
lean_ctor_set(v___x_148_, 5, v___x_144_);
lean_ctor_set(v___x_148_, 6, v___x_145_);
lean_ctor_set(v___x_148_, 7, v___x_146_);
lean_ctor_set(v___x_148_, 8, v___x_144_);
lean_ctor_set(v___x_148_, 9, v___x_144_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*10, v___x_147_);
v___x_149_ = lean_st_mk_ref(v_commandState_141_);
v___x_150_ = l_Lean_Elab_Command_elabCommandTopLevel(v_stx_132_, v___x_137_, v___x_148_, v___x_149_);
lean_dec_ref_known(v___x_148_, 10);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_a_151_);
lean_dec_ref_known(v___x_150_, 1);
v___x_152_ = lean_st_ref_get(v___x_149_);
lean_dec(v___x_149_);
v___x_153_ = l_Lean_Elab_Frontend_setCommandState___redArg(v___x_152_, v_a_134_);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v___x_153_, 0);
lean_dec(v_unused_161_);
v___x_155_ = v___x_153_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_dec(v___x_153_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v_a_151_);
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_151_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_174_; 
lean_dec(v___x_149_);
v_a_162_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_174_ == 0)
{
v___x_164_ = v___x_150_;
v_isShared_165_ = v_isSharedCheck_174_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_150_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_174_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_166_ = l_Lean_Exception_toMessageData(v_a_162_);
v___x_167_ = l_Lean_MessageData_toString(v___x_166_);
v___x_168_ = ((lean_object*)(l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0));
v___x_169_ = lean_string_append(v___x_168_, v___x_167_);
lean_dec_ref(v___x_167_);
v___x_170_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_170_);
v___x_172_ = v___x_164_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend___boxed(lean_object* v_stx_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Elab_Frontend_elabCommandAtFrontend(v_stx_175_, v_a_176_, v_a_177_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg(lean_object* v_a_180_){
_start:
{
lean_object* v___x_182_; lean_object* v_parserState_183_; lean_object* v_commandState_184_; lean_object* v_commands_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_196_; 
v___x_182_ = lean_st_ref_take(v_a_180_);
v_parserState_183_ = lean_ctor_get(v___x_182_, 1);
v_commandState_184_ = lean_ctor_get(v___x_182_, 0);
v_commands_185_ = lean_ctor_get(v___x_182_, 3);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_196_ == 0)
{
lean_object* v_unused_197_; 
v_unused_197_ = lean_ctor_get(v___x_182_, 2);
lean_dec(v_unused_197_);
v___x_187_ = v___x_182_;
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_commands_185_);
lean_inc(v_parserState_183_);
lean_inc(v_commandState_184_);
lean_dec(v___x_182_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_pos_189_; lean_object* v___x_190_; lean_object* v___x_192_; 
v_pos_189_ = lean_ctor_get(v_parserState_183_, 0);
lean_inc(v_pos_189_);
v___x_190_ = lean_box(0);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 2, v_pos_189_);
v___x_192_ = v___x_187_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_commandState_184_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_parserState_183_);
lean_ctor_set(v_reuseFailAlloc_195_, 2, v_pos_189_);
lean_ctor_set(v_reuseFailAlloc_195_, 3, v_commands_185_);
v___x_192_ = v_reuseFailAlloc_195_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_st_ref_put(v_a_180_, v___x_192_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_190_);
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg___boxed(lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_Elab_Frontend_updateCmdPos___redArg(v_a_198_);
lean_dec(v_a_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos(lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_Elab_Frontend_updateCmdPos___redArg(v_a_202_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___boxed(lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_Elab_Frontend_updateCmdPos(v_a_205_, v_a_206_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg(lean_object* v_a_209_){
_start:
{
lean_object* v___x_211_; lean_object* v_parserState_212_; lean_object* v___x_213_; 
v___x_211_ = lean_st_ref_get(v_a_209_);
v_parserState_212_ = lean_ctor_get(v___x_211_, 1);
lean_inc_ref(v_parserState_212_);
lean_dec(v___x_211_);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v_parserState_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg___boxed(lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_Elab_Frontend_getParserState___redArg(v_a_214_);
lean_dec(v_a_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState(lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Elab_Frontend_getParserState___redArg(v_a_218_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___boxed(lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_Elab_Frontend_getParserState(v_a_221_, v_a_222_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg(lean_object* v_a_225_){
_start:
{
lean_object* v___x_227_; lean_object* v_commandState_228_; lean_object* v___x_229_; 
v___x_227_ = lean_st_ref_get(v_a_225_);
v_commandState_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc_ref(v_commandState_228_);
lean_dec(v___x_227_);
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v_commandState_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg___boxed(lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Elab_Frontend_getCommandState___redArg(v_a_230_);
lean_dec(v_a_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState(lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_Elab_Frontend_getCommandState___redArg(v_a_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___boxed(lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_Elab_Frontend_getCommandState(v_a_237_, v_a_238_);
lean_dec(v_a_238_);
lean_dec_ref(v_a_237_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg(lean_object* v_ps_241_, lean_object* v_a_242_){
_start:
{
lean_object* v___x_244_; lean_object* v_commandState_245_; lean_object* v_cmdPos_246_; lean_object* v_commands_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_257_; 
v___x_244_ = lean_st_ref_take(v_a_242_);
v_commandState_245_ = lean_ctor_get(v___x_244_, 0);
v_cmdPos_246_ = lean_ctor_get(v___x_244_, 2);
v_commands_247_ = lean_ctor_get(v___x_244_, 3);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_257_ == 0)
{
lean_object* v_unused_258_; 
v_unused_258_ = lean_ctor_get(v___x_244_, 1);
lean_dec(v_unused_258_);
v___x_249_ = v___x_244_;
v_isShared_250_ = v_isSharedCheck_257_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_commands_247_);
lean_inc(v_cmdPos_246_);
lean_inc(v_commandState_245_);
lean_dec(v___x_244_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_257_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_251_ = lean_box(0);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v_ps_241_);
v___x_253_ = v___x_249_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_commandState_245_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_ps_241_);
lean_ctor_set(v_reuseFailAlloc_256_, 2, v_cmdPos_246_);
lean_ctor_set(v_reuseFailAlloc_256_, 3, v_commands_247_);
v___x_253_ = v_reuseFailAlloc_256_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_st_ref_put(v_a_242_, v___x_253_);
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_251_);
return v___x_255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg___boxed(lean_object* v_ps_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_Elab_Frontend_setParserState___redArg(v_ps_259_, v_a_260_);
lean_dec(v_a_260_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState(lean_object* v_ps_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_Elab_Frontend_setParserState___redArg(v_ps_263_, v_a_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___boxed(lean_object* v_ps_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_Elab_Frontend_setParserState(v_ps_268_, v_a_269_, v_a_270_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg(lean_object* v_msgs_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___x_276_; lean_object* v_commandState_277_; lean_object* v_parserState_278_; lean_object* v_cmdPos_279_; lean_object* v_commands_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_310_; 
v___x_276_ = lean_st_ref_take(v_a_274_);
v_commandState_277_ = lean_ctor_get(v___x_276_, 0);
v_parserState_278_ = lean_ctor_get(v___x_276_, 1);
v_cmdPos_279_ = lean_ctor_get(v___x_276_, 2);
v_commands_280_ = lean_ctor_get(v___x_276_, 3);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_310_ == 0)
{
v___x_282_ = v___x_276_;
v_isShared_283_ = v_isSharedCheck_310_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_commands_280_);
lean_inc(v_cmdPos_279_);
lean_inc(v_parserState_278_);
lean_inc(v_commandState_277_);
lean_dec(v___x_276_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_310_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v_env_284_; lean_object* v_scopes_285_; lean_object* v_usedQuotCtxts_286_; lean_object* v_nextMacroScope_287_; lean_object* v_maxRecDepth_288_; lean_object* v_ngen_289_; lean_object* v_auxDeclNGen_290_; lean_object* v_infoState_291_; lean_object* v_traceState_292_; lean_object* v_snapshotTasks_293_; lean_object* v_prevLinterStates_294_; lean_object* v_codeQualityEntryTasks_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_308_; 
v_env_284_ = lean_ctor_get(v_commandState_277_, 0);
v_scopes_285_ = lean_ctor_get(v_commandState_277_, 2);
v_usedQuotCtxts_286_ = lean_ctor_get(v_commandState_277_, 3);
v_nextMacroScope_287_ = lean_ctor_get(v_commandState_277_, 4);
v_maxRecDepth_288_ = lean_ctor_get(v_commandState_277_, 5);
v_ngen_289_ = lean_ctor_get(v_commandState_277_, 6);
v_auxDeclNGen_290_ = lean_ctor_get(v_commandState_277_, 7);
v_infoState_291_ = lean_ctor_get(v_commandState_277_, 8);
v_traceState_292_ = lean_ctor_get(v_commandState_277_, 9);
v_snapshotTasks_293_ = lean_ctor_get(v_commandState_277_, 10);
v_prevLinterStates_294_ = lean_ctor_get(v_commandState_277_, 11);
v_codeQualityEntryTasks_295_ = lean_ctor_get(v_commandState_277_, 12);
v_isSharedCheck_308_ = !lean_is_exclusive(v_commandState_277_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_commandState_277_, 1);
lean_dec(v_unused_309_);
v___x_297_ = v_commandState_277_;
v_isShared_298_ = v_isSharedCheck_308_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_codeQualityEntryTasks_295_);
lean_inc(v_prevLinterStates_294_);
lean_inc(v_snapshotTasks_293_);
lean_inc(v_traceState_292_);
lean_inc(v_infoState_291_);
lean_inc(v_auxDeclNGen_290_);
lean_inc(v_ngen_289_);
lean_inc(v_maxRecDepth_288_);
lean_inc(v_nextMacroScope_287_);
lean_inc(v_usedQuotCtxts_286_);
lean_inc(v_scopes_285_);
lean_inc(v_env_284_);
lean_dec(v_commandState_277_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_308_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = lean_box(0);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 1, v_msgs_273_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_env_284_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v_msgs_273_);
lean_ctor_set(v_reuseFailAlloc_307_, 2, v_scopes_285_);
lean_ctor_set(v_reuseFailAlloc_307_, 3, v_usedQuotCtxts_286_);
lean_ctor_set(v_reuseFailAlloc_307_, 4, v_nextMacroScope_287_);
lean_ctor_set(v_reuseFailAlloc_307_, 5, v_maxRecDepth_288_);
lean_ctor_set(v_reuseFailAlloc_307_, 6, v_ngen_289_);
lean_ctor_set(v_reuseFailAlloc_307_, 7, v_auxDeclNGen_290_);
lean_ctor_set(v_reuseFailAlloc_307_, 8, v_infoState_291_);
lean_ctor_set(v_reuseFailAlloc_307_, 9, v_traceState_292_);
lean_ctor_set(v_reuseFailAlloc_307_, 10, v_snapshotTasks_293_);
lean_ctor_set(v_reuseFailAlloc_307_, 11, v_prevLinterStates_294_);
lean_ctor_set(v_reuseFailAlloc_307_, 12, v_codeQualityEntryTasks_295_);
v___x_301_ = v_reuseFailAlloc_307_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_303_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_301_);
v___x_303_ = v___x_282_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v_parserState_278_);
lean_ctor_set(v_reuseFailAlloc_306_, 2, v_cmdPos_279_);
lean_ctor_set(v_reuseFailAlloc_306_, 3, v_commands_280_);
v___x_303_ = v_reuseFailAlloc_306_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_st_ref_put(v_a_274_, v___x_303_);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_299_);
return v___x_305_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg___boxed(lean_object* v_msgs_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Elab_Frontend_setMessages___redArg(v_msgs_311_, v_a_312_);
lean_dec(v_a_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages(lean_object* v_msgs_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_Elab_Frontend_setMessages___redArg(v_msgs_315_, v_a_317_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___boxed(lean_object* v_msgs_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Elab_Frontend_setMessages(v_msgs_320_, v_a_321_, v_a_322_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg(lean_object* v_a_325_){
_start:
{
lean_object* v___x_327_; 
lean_inc_ref(v_a_325_);
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v_a_325_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg___boxed(lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Elab_Frontend_getInputContext___redArg(v_a_328_);
lean_dec_ref(v_a_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext(lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v___x_334_; 
lean_inc_ref(v_a_331_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v_a_331_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___boxed(lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Elab_Frontend_getInputContext(v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0(lean_object* v_a_339_, lean_object* v___x_340_, lean_object* v_a_341_, lean_object* v_messages_342_, lean_object* v_x_343_){
_start:
{
lean_object* v___x_344_; 
lean_inc_ref(v_a_339_);
v___x_344_ = l_Lean_Parser_parseCommand(v_a_339_, v___x_340_, v_a_341_, v_messages_342_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0___boxed(lean_object* v_a_345_, lean_object* v___x_346_, lean_object* v_a_347_, lean_object* v_messages_348_, lean_object* v_x_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lean_Elab_Frontend_processCommand___lam__0(v_a_345_, v___x_346_, v_a_347_, v_messages_348_, v_x_349_);
lean_dec_ref(v_a_345_);
return v_res_350_;
}
}
static lean_object* _init_l_Lean_Elab_Frontend_processCommand___closed__1(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_box(0);
v___x_353_ = l_unsafeCast___redArg(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand(lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v_a_362_; lean_object* v_env_363_; lean_object* v_messages_364_; lean_object* v_scopes_365_; lean_object* v___x_366_; lean_object* v_opts_367_; lean_object* v_currNamespace_368_; lean_object* v_openDecls_369_; lean_object* v___x_370_; lean_object* v___f_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_snd_375_; lean_object* v_fst_376_; lean_object* v_fst_377_; lean_object* v_snd_378_; lean_object* v___x_379_; lean_object* v_commandState_380_; lean_object* v_parserState_381_; lean_object* v_cmdPos_382_; lean_object* v_commands_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_413_; 
v___x_357_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_358_ = l_Lean_Elab_Frontend_updateCmdPos___redArg(v_a_355_);
lean_dec_ref(v___x_358_);
v___x_359_ = l_Lean_Elab_Frontend_getCommandState___redArg(v_a_355_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref(v___x_359_);
v___x_361_ = l_Lean_Elab_Frontend_getParserState___redArg(v_a_355_);
v_a_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_a_362_);
lean_dec_ref(v___x_361_);
v_env_363_ = lean_ctor_get(v_a_360_, 0);
lean_inc_ref(v_env_363_);
v_messages_364_ = lean_ctor_get(v_a_360_, 1);
lean_inc_ref(v_messages_364_);
v_scopes_365_ = lean_ctor_get(v_a_360_, 2);
lean_inc(v_scopes_365_);
lean_dec(v_a_360_);
v___x_366_ = l_List_head_x21___redArg(v___x_357_, v_scopes_365_);
lean_dec(v_scopes_365_);
v_opts_367_ = lean_ctor_get(v___x_366_, 1);
lean_inc_ref_n(v_opts_367_, 2);
v_currNamespace_368_ = lean_ctor_get(v___x_366_, 2);
lean_inc(v_currNamespace_368_);
v_openDecls_369_ = lean_ctor_get(v___x_366_, 3);
lean_inc(v_openDecls_369_);
lean_dec(v___x_366_);
v___x_370_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_370_, 0, v_env_363_);
lean_ctor_set(v___x_370_, 1, v_opts_367_);
lean_ctor_set(v___x_370_, 2, v_currNamespace_368_);
lean_ctor_set(v___x_370_, 3, v_openDecls_369_);
lean_inc_ref(v_a_354_);
v___f_371_ = lean_alloc_closure((void*)(l_Lean_Elab_Frontend_processCommand___lam__0___boxed), 5, 4);
lean_closure_set(v___f_371_, 0, v_a_354_);
lean_closure_set(v___f_371_, 1, v___x_370_);
lean_closure_set(v___f_371_, 2, v_a_362_);
lean_closure_set(v___f_371_, 3, v_messages_364_);
v___x_372_ = ((lean_object*)(l_Lean_Elab_Frontend_processCommand___closed__0));
v___x_373_ = lean_obj_once(&l_Lean_Elab_Frontend_processCommand___closed__1, &l_Lean_Elab_Frontend_processCommand___closed__1_once, _init_l_Lean_Elab_Frontend_processCommand___closed__1);
v___x_374_ = lean_profileit(v___x_372_, v_opts_367_, v___f_371_, v___x_373_);
lean_dec_ref(v_opts_367_);
v_snd_375_ = lean_ctor_get(v___x_374_, 1);
lean_inc(v_snd_375_);
v_fst_376_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_fst_376_);
lean_dec(v___x_374_);
v_fst_377_ = lean_ctor_get(v_snd_375_, 0);
lean_inc(v_fst_377_);
v_snd_378_ = lean_ctor_get(v_snd_375_, 1);
lean_inc(v_snd_378_);
lean_dec(v_snd_375_);
v___x_379_ = lean_st_ref_take(v_a_355_);
v_commandState_380_ = lean_ctor_get(v___x_379_, 0);
v_parserState_381_ = lean_ctor_get(v___x_379_, 1);
v_cmdPos_382_ = lean_ctor_get(v___x_379_, 2);
v_commands_383_ = lean_ctor_get(v___x_379_, 3);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_413_ == 0)
{
v___x_385_ = v___x_379_;
v_isShared_386_ = v_isSharedCheck_413_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_commands_383_);
lean_inc(v_cmdPos_382_);
lean_inc(v_parserState_381_);
lean_inc(v_commandState_380_);
lean_dec(v___x_379_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_413_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_389_; 
lean_inc(v_fst_376_);
v___x_387_ = lean_array_push(v_commands_383_, v_fst_376_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 3, v___x_387_);
v___x_389_ = v___x_385_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_commandState_380_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_parserState_381_);
lean_ctor_set(v_reuseFailAlloc_412_, 2, v_cmdPos_382_);
lean_ctor_set(v_reuseFailAlloc_412_, 3, v___x_387_);
v___x_389_ = v_reuseFailAlloc_412_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_390_ = lean_st_ref_put(v_a_355_, v___x_389_);
v___x_391_ = l_Lean_Elab_Frontend_setParserState___redArg(v_fst_377_, v_a_355_);
lean_dec_ref(v___x_391_);
v___x_392_ = l_Lean_Elab_Frontend_setMessages___redArg(v_snd_378_, v_a_355_);
lean_dec_ref(v___x_392_);
lean_inc(v_fst_376_);
v___x_393_ = l_Lean_Elab_Frontend_elabCommandAtFrontend(v_fst_376_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_402_; 
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; 
v_unused_403_ = lean_ctor_get(v___x_393_, 0);
lean_dec(v_unused_403_);
v___x_395_ = v___x_393_;
v_isShared_396_ = v_isSharedCheck_402_;
goto v_resetjp_394_;
}
else
{
lean_dec(v___x_393_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_402_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
uint8_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_397_ = l_Lean_Parser_isTerminalCommand(v_fst_376_);
v___x_398_ = lean_box(v___x_397_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_398_);
v___x_400_ = v___x_395_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
lean_dec(v_fst_376_);
v_a_404_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_393_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_393_);
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
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___boxed(lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Elab_Frontend_processCommand(v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands(lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_Elab_Frontend_processCommand(v_a_418_, v_a_419_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_432_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_432_ == 0)
{
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_432_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_432_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
uint8_t v___x_426_; 
v___x_426_ = lean_unbox(v_a_422_);
lean_dec(v_a_422_);
if (v___x_426_ == 0)
{
lean_del_object(v___x_424_);
goto _start;
}
else
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = lean_box(0);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_428_);
v___x_430_ = v___x_424_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
v_a_433_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_421_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_421_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands___boxed(lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_Elab_Frontend_processCommands(v_a_441_, v_a_442_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__3(lean_object* v_a_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_447_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_445_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(lean_object* v_as_448_, size_t v_i_449_, size_t v_stop_450_, lean_object* v_b_451_){
_start:
{
lean_object* v___y_453_; uint8_t v___x_457_; 
v___x_457_ = lean_usize_dec_eq(v_i_449_, v_stop_450_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
v___x_458_ = lean_array_uget_borrowed(v_as_448_, v_i_449_);
if (lean_obj_tag(v___x_458_) == 0)
{
v___y_453_ = v_b_451_;
goto v___jp_452_;
}
else
{
lean_object* v_val_459_; lean_object* v___x_460_; 
v_val_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_val_459_);
v___x_460_ = lean_array_push(v_b_451_, v_val_459_);
v___y_453_ = v___x_460_;
goto v___jp_452_;
}
}
else
{
return v_b_451_;
}
v___jp_452_:
{
size_t v___x_454_; size_t v___x_455_; 
v___x_454_ = ((size_t)1ULL);
v___x_455_ = lean_usize_add(v_i_449_, v___x_454_);
v_i_449_ = v___x_455_;
v_b_451_ = v___y_453_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1___boxed(lean_object* v_as_461_, lean_object* v_i_462_, lean_object* v_stop_463_, lean_object* v_b_464_){
_start:
{
size_t v_i_boxed_465_; size_t v_stop_boxed_466_; lean_object* v_res_467_; 
v_i_boxed_465_ = lean_unbox_usize(v_i_462_);
lean_dec(v_i_462_);
v_stop_boxed_466_ = lean_unbox_usize(v_stop_463_);
lean_dec(v_stop_463_);
v_res_467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(v_as_461_, v_i_boxed_465_, v_stop_boxed_466_, v_b_464_);
lean_dec_ref(v_as_461_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(lean_object* v_as_470_, lean_object* v_start_471_, lean_object* v_stop_472_){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0));
v___x_474_ = lean_nat_dec_lt(v_start_471_, v_stop_472_);
if (v___x_474_ == 0)
{
return v___x_473_;
}
else
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_array_get_size(v_as_470_);
v___x_476_ = lean_nat_dec_le(v_stop_472_, v___x_475_);
if (v___x_476_ == 0)
{
uint8_t v___x_477_; 
v___x_477_ = lean_nat_dec_lt(v_start_471_, v___x_475_);
if (v___x_477_ == 0)
{
return v___x_473_;
}
else
{
size_t v___x_478_; size_t v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_usize_of_nat(v_start_471_);
v___x_479_ = lean_usize_of_nat(v___x_475_);
v___x_480_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(v_as_470_, v___x_478_, v___x_479_, v___x_473_);
return v___x_480_;
}
}
else
{
size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_usize_of_nat(v_start_471_);
v___x_482_ = lean_usize_of_nat(v_stop_472_);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(v_as_470_, v___x_481_, v___x_482_, v___x_473_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___boxed(lean_object* v_as_484_, lean_object* v_start_485_, lean_object* v_stop_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(v_as_484_, v_start_485_, v_stop_486_);
lean_dec(v_stop_486_);
lean_dec(v_start_485_);
lean_dec_ref(v_as_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(size_t v_sz_488_, size_t v_i_489_, lean_object* v_bs_490_){
_start:
{
uint8_t v___x_491_; 
v___x_491_ = lean_usize_dec_lt(v_i_489_, v_sz_488_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; 
v___x_492_ = l_unsafeCast___redArg(v_bs_490_);
lean_dec_ref(v_bs_490_);
return v___x_492_;
}
else
{
lean_object* v_v_493_; lean_object* v___x_494_; lean_object* v_diagnostics_495_; lean_object* v_msgLog_496_; lean_object* v___x_497_; lean_object* v_bs_x27_498_; size_t v___x_499_; size_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_v_493_ = lean_array_uget_borrowed(v_bs_490_, v_i_489_);
v___x_494_ = l_unsafeCast___redArg(v_v_493_);
v_diagnostics_495_ = lean_ctor_get(v___x_494_, 1);
lean_inc_ref(v_diagnostics_495_);
lean_dec(v___x_494_);
v_msgLog_496_ = lean_ctor_get(v_diagnostics_495_, 0);
lean_inc_ref(v_msgLog_496_);
lean_dec_ref(v_diagnostics_495_);
v___x_497_ = lean_unsigned_to_nat(0u);
v_bs_x27_498_ = lean_array_uset(v_bs_490_, v_i_489_, v___x_497_);
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_489_, v___x_499_);
v___x_501_ = l_unsafeCast___redArg(v_msgLog_496_);
lean_dec_ref(v_msgLog_496_);
v___x_502_ = lean_array_uset(v_bs_x27_498_, v_i_489_, v___x_501_);
v_i_489_ = v___x_500_;
v_bs_490_ = v___x_502_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4___boxed(lean_object* v_sz_504_, lean_object* v_i_505_, lean_object* v_bs_506_){
_start:
{
size_t v_sz_boxed_507_; size_t v_i_boxed_508_; lean_object* v_res_509_; 
v_sz_boxed_507_ = lean_unbox_usize(v_sz_504_);
lean_dec(v_sz_504_);
v_i_boxed_508_ = lean_unbox_usize(v_i_505_);
lean_dec(v_i_505_);
v_res_509_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(v_sz_boxed_507_, v_i_boxed_508_, v_bs_506_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(size_t v_sz_510_, size_t v_i_511_, lean_object* v_bs_512_){
_start:
{
uint8_t v___x_513_; 
v___x_513_ = lean_usize_dec_lt(v_i_511_, v_sz_510_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; 
v___x_514_ = l_unsafeCast___redArg(v_bs_512_);
lean_dec_ref(v_bs_512_);
return v___x_514_;
}
else
{
lean_object* v_v_515_; lean_object* v___x_516_; lean_object* v_elabSnap_517_; lean_object* v_infoTreeSnap_518_; lean_object* v___x_519_; lean_object* v_infoTree_x3f_520_; lean_object* v___x_521_; lean_object* v_bs_x27_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_v_515_ = lean_array_uget_borrowed(v_bs_512_, v_i_511_);
v___x_516_ = l_unsafeCast___redArg(v_v_515_);
v_elabSnap_517_ = lean_ctor_get(v___x_516_, 3);
lean_inc_ref(v_elabSnap_517_);
lean_dec(v___x_516_);
v_infoTreeSnap_518_ = lean_ctor_get(v_elabSnap_517_, 3);
lean_inc_ref(v_infoTreeSnap_518_);
lean_dec_ref(v_elabSnap_517_);
v___x_519_ = l_Lean_Language_SnapshotTask_get___redArg(v_infoTreeSnap_518_);
v_infoTree_x3f_520_ = lean_ctor_get(v___x_519_, 2);
lean_inc(v_infoTree_x3f_520_);
lean_dec(v___x_519_);
v___x_521_ = lean_unsigned_to_nat(0u);
v_bs_x27_522_ = lean_array_uset(v_bs_512_, v_i_511_, v___x_521_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_add(v_i_511_, v___x_523_);
v___x_525_ = l_unsafeCast___redArg(v_infoTree_x3f_520_);
lean_dec(v_infoTree_x3f_520_);
v___x_526_ = lean_array_uset(v_bs_x27_522_, v_i_511_, v___x_525_);
v_i_511_ = v___x_524_;
v_bs_512_ = v___x_526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0___boxed(lean_object* v_sz_528_, lean_object* v_i_529_, lean_object* v_bs_530_){
_start:
{
size_t v_sz_boxed_531_; size_t v_i_boxed_532_; lean_object* v_res_533_; 
v_sz_boxed_531_ = lean_unbox_usize(v_sz_528_);
lean_dec(v_sz_528_);
v_i_boxed_532_ = lean_unbox_usize(v_i_529_);
lean_dec(v_i_529_);
v_res_533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(v_sz_boxed_531_, v_i_boxed_532_, v_bs_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(size_t v_sz_534_, size_t v_i_535_, lean_object* v_bs_536_){
_start:
{
uint8_t v___x_537_; 
v___x_537_ = lean_usize_dec_lt(v_i_535_, v_sz_534_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; 
v___x_538_ = l_unsafeCast___redArg(v_bs_536_);
lean_dec_ref(v_bs_536_);
return v___x_538_;
}
else
{
lean_object* v_v_539_; lean_object* v___x_540_; lean_object* v_stx_541_; lean_object* v___x_542_; lean_object* v_bs_x27_543_; size_t v___x_544_; size_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_v_539_ = lean_array_uget_borrowed(v_bs_536_, v_i_535_);
v___x_540_ = l_unsafeCast___redArg(v_v_539_);
v_stx_541_ = lean_ctor_get(v___x_540_, 1);
lean_inc(v_stx_541_);
lean_dec(v___x_540_);
v___x_542_ = lean_unsigned_to_nat(0u);
v_bs_x27_543_ = lean_array_uset(v_bs_536_, v_i_535_, v___x_542_);
v___x_544_ = ((size_t)1ULL);
v___x_545_ = lean_usize_add(v_i_535_, v___x_544_);
v___x_546_ = l_unsafeCast___redArg(v_stx_541_);
lean_dec(v_stx_541_);
v___x_547_ = lean_array_uset(v_bs_x27_543_, v_i_535_, v___x_546_);
v_i_535_ = v___x_545_;
v_bs_536_ = v___x_547_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2___boxed(lean_object* v_sz_549_, lean_object* v_i_550_, lean_object* v_bs_551_){
_start:
{
size_t v_sz_boxed_552_; size_t v_i_boxed_553_; lean_object* v_res_554_; 
v_sz_boxed_552_ = lean_unbox_usize(v_sz_549_);
lean_dec(v_sz_549_);
v_i_boxed_553_ = lean_unbox_usize(v_i_550_);
lean_dec(v_i_550_);
v_res_554_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(v_sz_boxed_552_, v_i_boxed_553_, v_bs_551_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(lean_object* v_as_555_, size_t v_i_556_, size_t v_stop_557_, lean_object* v_b_558_){
_start:
{
uint8_t v___x_559_; 
v___x_559_ = lean_usize_dec_eq(v_i_556_, v_stop_557_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; size_t v___x_562_; size_t v___x_563_; 
v___x_560_ = lean_array_uget_borrowed(v_as_555_, v_i_556_);
lean_inc(v___x_560_);
v___x_561_ = l_Lean_MessageLog_append(v_b_558_, v___x_560_);
v___x_562_ = ((size_t)1ULL);
v___x_563_ = lean_usize_add(v_i_556_, v___x_562_);
v_i_556_ = v___x_563_;
v_b_558_ = v___x_561_;
goto _start;
}
else
{
return v_b_558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5___boxed(lean_object* v_as_565_, lean_object* v_i_566_, lean_object* v_stop_567_, lean_object* v_b_568_){
_start:
{
size_t v_i_boxed_569_; size_t v_stop_boxed_570_; lean_object* v_res_571_; 
v_i_boxed_569_ = lean_unbox_usize(v_i_566_);
lean_dec(v_i_566_);
v_stop_boxed_570_ = lean_unbox_usize(v_stop_567_);
lean_dec(v_stop_567_);
v_res_571_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(v_as_565_, v_i_boxed_569_, v_stop_boxed_570_, v_b_568_);
lean_dec_ref(v_as_565_);
return v_res_571_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = lean_unsigned_to_nat(32u);
v___x_573_ = lean_mk_empty_array_with_capacity(v___x_572_);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1(void){
_start:
{
size_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_575_ = ((size_t)5ULL);
v___x_576_ = lean_unsigned_to_nat(0u);
v___x_577_ = lean_unsigned_to_nat(32u);
v___x_578_ = lean_mk_empty_array_with_capacity(v___x_577_);
v___x_579_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0);
v___x_580_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v___x_578_);
lean_ctor_set(v___x_580_, 2, v___x_576_);
lean_ctor_set(v___x_580_, 3, v___x_576_);
lean_ctor_set_usize(v___x_580_, 4, v___x_575_);
return v___x_580_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_581_ = l_Lean_NameSet_empty;
v___x_582_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1);
v___x_583_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
lean_ctor_set(v___x_583_, 2, v___x_581_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(lean_object* v_inputCtx_584_, lean_object* v_initialSnap_585_, lean_object* v_t_586_, lean_object* v_commands_587_){
_start:
{
lean_object* v_snap_589_; lean_object* v_parserState_590_; lean_object* v_elabSnap_591_; lean_object* v_nextCmdSnap_x3f_592_; lean_object* v_commands_593_; 
v_snap_589_ = lean_task_get_own(v_t_586_);
v_parserState_590_ = lean_ctor_get(v_snap_589_, 2);
lean_inc_ref(v_parserState_590_);
v_elabSnap_591_ = lean_ctor_get(v_snap_589_, 3);
lean_inc_ref(v_elabSnap_591_);
v_nextCmdSnap_x3f_592_ = lean_ctor_get(v_snap_589_, 4);
lean_inc(v_nextCmdSnap_x3f_592_);
v_commands_593_ = lean_array_push(v_commands_587_, v_snap_589_);
if (lean_obj_tag(v_nextCmdSnap_x3f_592_) == 1)
{
lean_object* v_val_594_; lean_object* v_task_595_; 
lean_dec_ref(v_elabSnap_591_);
lean_dec_ref(v_parserState_590_);
v_val_594_ = lean_ctor_get(v_nextCmdSnap_x3f_592_, 0);
lean_inc(v_val_594_);
lean_dec_ref_known(v_nextCmdSnap_x3f_592_, 1);
v_task_595_ = lean_ctor_get(v_val_594_, 3);
lean_inc_ref(v_task_595_);
lean_dec(v_val_594_);
v_t_586_ = v_task_595_;
v_commands_587_ = v_commands_593_;
goto _start;
}
else
{
lean_object* v___x_597_; lean_object* v___y_599_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; size_t v_sz_650_; size_t v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
lean_dec(v_nextCmdSnap_x3f_592_);
v___x_597_ = lean_unsigned_to_nat(0u);
v___x_647_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2);
lean_inc_ref(v_initialSnap_585_);
v___x_648_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__3(v_initialSnap_585_);
v___x_649_ = l_Lean_Language_SnapshotTree_getAll(v___x_648_);
v_sz_650_ = lean_array_size(v___x_649_);
v___x_651_ = ((size_t)0ULL);
v___x_652_ = l_unsafeCast___redArg(v___x_649_);
lean_dec_ref(v___x_649_);
v___x_653_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(v_sz_650_, v___x_651_, v___x_652_);
v___x_654_ = l_unsafeCast___redArg(v___x_653_);
lean_dec_ref(v___x_653_);
v___x_655_ = lean_array_get_size(v___x_654_);
v___x_656_ = lean_nat_dec_lt(v___x_597_, v___x_655_);
if (v___x_656_ == 0)
{
lean_dec(v___x_654_);
v___y_599_ = v___x_647_;
goto v___jp_598_;
}
else
{
uint8_t v___x_657_; 
v___x_657_ = lean_nat_dec_le(v___x_655_, v___x_655_);
if (v___x_657_ == 0)
{
if (v___x_656_ == 0)
{
lean_dec(v___x_654_);
v___y_599_ = v___x_647_;
goto v___jp_598_;
}
else
{
size_t v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_usize_of_nat(v___x_655_);
v___x_659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(v___x_654_, v___x_651_, v___x_658_, v___x_647_);
lean_dec(v___x_654_);
v___y_599_ = v___x_659_;
goto v___jp_598_;
}
}
else
{
size_t v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_usize_of_nat(v___x_655_);
v___x_661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(v___x_654_, v___x_651_, v___x_660_, v___x_647_);
lean_dec(v___x_654_);
v___y_599_ = v___x_661_;
goto v___jp_598_;
}
}
v___jp_598_:
{
lean_object* v_resultSnap_600_; lean_object* v___x_601_; lean_object* v_cmdState_602_; lean_object* v_infoState_603_; lean_object* v_env_604_; lean_object* v_scopes_605_; lean_object* v_usedQuotCtxts_606_; lean_object* v_nextMacroScope_607_; lean_object* v_maxRecDepth_608_; lean_object* v_ngen_609_; lean_object* v_auxDeclNGen_610_; lean_object* v_traceState_611_; lean_object* v_snapshotTasks_612_; lean_object* v_prevLinterStates_613_; lean_object* v_codeQualityEntryTasks_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_645_; 
v_resultSnap_600_ = lean_ctor_get(v_elabSnap_591_, 2);
lean_inc_ref(v_resultSnap_600_);
lean_dec_ref(v_elabSnap_591_);
v___x_601_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_600_);
v_cmdState_602_ = lean_ctor_get(v___x_601_, 1);
lean_inc_ref(v_cmdState_602_);
lean_dec(v___x_601_);
v_infoState_603_ = lean_ctor_get(v_cmdState_602_, 8);
v_env_604_ = lean_ctor_get(v_cmdState_602_, 0);
v_scopes_605_ = lean_ctor_get(v_cmdState_602_, 2);
v_usedQuotCtxts_606_ = lean_ctor_get(v_cmdState_602_, 3);
v_nextMacroScope_607_ = lean_ctor_get(v_cmdState_602_, 4);
v_maxRecDepth_608_ = lean_ctor_get(v_cmdState_602_, 5);
v_ngen_609_ = lean_ctor_get(v_cmdState_602_, 6);
v_auxDeclNGen_610_ = lean_ctor_get(v_cmdState_602_, 7);
v_traceState_611_ = lean_ctor_get(v_cmdState_602_, 9);
v_snapshotTasks_612_ = lean_ctor_get(v_cmdState_602_, 10);
v_prevLinterStates_613_ = lean_ctor_get(v_cmdState_602_, 11);
v_codeQualityEntryTasks_614_ = lean_ctor_get(v_cmdState_602_, 12);
v_isSharedCheck_645_ = !lean_is_exclusive(v_cmdState_602_);
if (v_isSharedCheck_645_ == 0)
{
lean_object* v_unused_646_; 
v_unused_646_ = lean_ctor_get(v_cmdState_602_, 1);
lean_dec(v_unused_646_);
v___x_616_ = v_cmdState_602_;
v_isShared_617_ = v_isSharedCheck_645_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_codeQualityEntryTasks_614_);
lean_inc(v_prevLinterStates_613_);
lean_inc(v_snapshotTasks_612_);
lean_inc(v_traceState_611_);
lean_inc(v_infoState_603_);
lean_inc(v_auxDeclNGen_610_);
lean_inc(v_ngen_609_);
lean_inc(v_maxRecDepth_608_);
lean_inc(v_nextMacroScope_607_);
lean_inc(v_usedQuotCtxts_606_);
lean_inc(v_scopes_605_);
lean_inc(v_env_604_);
lean_dec(v_cmdState_602_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_645_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
uint8_t v_enabled_618_; lean_object* v_assignment_619_; lean_object* v_lazyAssignment_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_643_; 
v_enabled_618_ = lean_ctor_get_uint8(v_infoState_603_, sizeof(void*)*3);
v_assignment_619_ = lean_ctor_get(v_infoState_603_, 0);
v_lazyAssignment_620_ = lean_ctor_get(v_infoState_603_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v_infoState_603_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v_infoState_603_, 2);
lean_dec(v_unused_644_);
v___x_622_ = v_infoState_603_;
v_isShared_623_ = v_isSharedCheck_643_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_lazyAssignment_620_);
lean_inc(v_assignment_619_);
lean_dec(v_infoState_603_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_643_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v_pos_624_; size_t v_sz_625_; size_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v_trees_632_; lean_object* v___x_634_; 
v_pos_624_ = lean_ctor_get(v_parserState_590_, 0);
lean_inc(v_pos_624_);
v_sz_625_ = lean_array_size(v_commands_593_);
v___x_626_ = ((size_t)0ULL);
v___x_627_ = l_unsafeCast___redArg(v_commands_593_);
lean_dec_ref(v_commands_593_);
lean_inc(v___x_627_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(v_sz_625_, v___x_626_, v___x_627_);
v___x_629_ = l_unsafeCast___redArg(v___x_628_);
lean_dec_ref(v___x_628_);
v___x_630_ = lean_array_get_size(v___x_629_);
v___x_631_ = l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(v___x_629_, v___x_597_, v___x_630_);
lean_dec(v___x_629_);
v_trees_632_ = l_Lean_Array_toPArray_x27___redArg(v___x_631_);
lean_dec_ref(v___x_631_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 2, v_trees_632_);
v___x_634_ = v___x_622_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_assignment_619_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_lazyAssignment_620_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_trees_632_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, sizeof(void*)*3, v_enabled_618_);
v___x_634_ = v_reuseFailAlloc_642_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_636_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 8, v___x_634_);
lean_ctor_set(v___x_616_, 1, v___y_599_);
v___x_636_ = v___x_616_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_env_604_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v___y_599_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_scopes_605_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v_usedQuotCtxts_606_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_nextMacroScope_607_);
lean_ctor_set(v_reuseFailAlloc_641_, 5, v_maxRecDepth_608_);
lean_ctor_set(v_reuseFailAlloc_641_, 6, v_ngen_609_);
lean_ctor_set(v_reuseFailAlloc_641_, 7, v_auxDeclNGen_610_);
lean_ctor_set(v_reuseFailAlloc_641_, 8, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_641_, 9, v_traceState_611_);
lean_ctor_set(v_reuseFailAlloc_641_, 10, v_snapshotTasks_612_);
lean_ctor_set(v_reuseFailAlloc_641_, 11, v_prevLinterStates_613_);
lean_ctor_set(v_reuseFailAlloc_641_, 12, v_codeQualityEntryTasks_614_);
v___x_636_ = v_reuseFailAlloc_641_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(v_sz_625_, v___x_626_, v___x_627_);
v___x_638_ = l_unsafeCast___redArg(v___x_637_);
lean_dec_ref(v___x_637_);
v___x_639_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_639_, 0, v___x_636_);
lean_ctor_set(v___x_639_, 1, v_parserState_590_);
lean_ctor_set(v___x_639_, 2, v_pos_624_);
lean_ctor_set(v___x_639_, 3, v___x_638_);
v___x_640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v_inputCtx_584_);
lean_ctor_set(v___x_640_, 2, v_initialSnap_585_);
return v___x_640_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___boxed(lean_object* v_inputCtx_662_, lean_object* v_initialSnap_663_, lean_object* v_t_664_, lean_object* v_commands_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(v_inputCtx_662_, v_initialSnap_663_, v_t_664_, v_commands_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally(lean_object* v_inputCtx_670_, lean_object* v_parserState_671_, lean_object* v_commandState_672_, lean_object* v_old_x3f_673_){
_start:
{
lean_object* v___y_676_; 
if (lean_obj_tag(v_old_x3f_673_) == 0)
{
lean_object* v___x_681_; 
v___x_681_ = lean_box(0);
v___y_676_ = v___x_681_;
goto v___jp_675_;
}
else
{
lean_object* v_val_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_692_; 
v_val_682_ = lean_ctor_get(v_old_x3f_673_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v_old_x3f_673_);
if (v_isSharedCheck_692_ == 0)
{
v___x_684_ = v_old_x3f_673_;
v_isShared_685_ = v_isSharedCheck_692_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_val_682_);
lean_dec(v_old_x3f_673_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_692_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v_inputCtx_686_; lean_object* v_initialSnap_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v_inputCtx_686_ = lean_ctor_get(v_val_682_, 1);
lean_inc_ref(v_inputCtx_686_);
v_initialSnap_687_ = lean_ctor_get(v_val_682_, 2);
lean_inc_ref(v_initialSnap_687_);
lean_dec(v_val_682_);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v_inputCtx_686_);
lean_ctor_set(v___x_688_, 1, v_initialSnap_687_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_688_);
v___x_690_ = v___x_684_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
v___y_676_ = v___x_690_;
goto v___jp_675_;
}
}
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_677_ = l_Lean_Language_Lean_processCommands(v_inputCtx_670_, v_parserState_671_, v_commandState_672_, v___y_676_);
lean_inc_ref(v___x_677_);
v___x_678_ = lean_task_get_own(v___x_677_);
v___x_679_ = ((lean_object*)(l_Lean_Elab_IO_processCommandsIncrementally___closed__0));
v___x_680_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(v_inputCtx_670_, v___x_678_, v___x_677_, v___x_679_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally___boxed(lean_object* v_inputCtx_693_, lean_object* v_parserState_694_, lean_object* v_commandState_695_, lean_object* v_old_x3f_696_, lean_object* v_a_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_Elab_IO_processCommandsIncrementally(v_inputCtx_693_, v_parserState_694_, v_commandState_695_, v_old_x3f_696_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands(lean_object* v_inputCtx_699_, lean_object* v_parserState_700_, lean_object* v_commandState_701_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v_toState_705_; lean_object* v___x_706_; 
v___x_703_ = lean_box(0);
v___x_704_ = l_Lean_Elab_IO_processCommandsIncrementally(v_inputCtx_699_, v_parserState_700_, v_commandState_701_, v___x_703_);
v_toState_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc_ref(v_toState_705_);
lean_dec_ref(v___x_704_);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v_toState_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands___boxed(lean_object* v_inputCtx_707_, lean_object* v_parserState_708_, lean_object* v_commandState_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_Elab_IO_processCommands(v_inputCtx_707_, v_parserState_708_, v_commandState_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_process(lean_object* v_input_717_, lean_object* v_env_718_, lean_object* v_opts_719_, lean_object* v_fileName_720_){
_start:
{
lean_object* v___y_723_; 
if (lean_obj_tag(v_fileName_720_) == 0)
{
lean_object* v___x_743_; 
v___x_743_ = ((lean_object*)(l_Lean_Elab_process___closed__1));
v___y_723_ = v___x_743_;
goto v___jp_722_;
}
else
{
lean_object* v_val_744_; 
v_val_744_ = lean_ctor_get(v_fileName_720_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v_fileName_720_, 1);
v___y_723_ = v_val_744_;
goto v___jp_722_;
}
v___jp_722_:
{
uint8_t v___x_724_; lean_object* v___x_725_; lean_object* v_inputCtx_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_742_; 
v___x_724_ = 1;
v___x_725_ = lean_string_utf8_byte_size(v_input_717_);
v_inputCtx_726_ = l_Lean_Parser_mkInputContext___redArg(v_input_717_, v___y_723_, v___x_724_, v___x_725_);
v___x_727_ = ((lean_object*)(l_Lean_Elab_process___closed__0));
v___x_728_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2);
v___x_729_ = l_Lean_Elab_Command_mkState(v_env_718_, v___x_728_, v_opts_719_);
v___x_730_ = l_Lean_Elab_IO_processCommands(v_inputCtx_726_, v___x_727_, v___x_729_);
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_742_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_742_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_742_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_commandState_735_; lean_object* v_env_736_; lean_object* v_messages_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v_commandState_735_ = lean_ctor_get(v_a_731_, 0);
lean_inc_ref(v_commandState_735_);
lean_dec(v_a_731_);
v_env_736_ = lean_ctor_get(v_commandState_735_, 0);
lean_inc_ref(v_env_736_);
v_messages_737_ = lean_ctor_get(v_commandState_735_, 1);
lean_inc_ref(v_messages_737_);
lean_dec_ref(v_commandState_735_);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v_env_736_);
lean_ctor_set(v___x_738_, 1, v_messages_737_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_738_);
v___x_740_ = v___x_733_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_process___boxed(lean_object* v_input_745_, lean_object* v_env_746_, lean_object* v_opts_747_, lean_object* v_fileName_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_Elab_process(v_input_745_, v_env_746_, v_opts_747_, v_fileName_748_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(lean_object* v_t_751_, lean_object* v_cmdStx_x3f_752_, lean_object* v_acc_753_){
_start:
{
lean_object* v_element_754_; lean_object* v_diagnostics_755_; lean_object* v_children_756_; lean_object* v_msgLog_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_775_; 
v_element_754_ = lean_ctor_get(v_t_751_, 0);
v_diagnostics_755_ = lean_ctor_get(v_element_754_, 1);
lean_inc_ref(v_diagnostics_755_);
v_children_756_ = lean_ctor_get(v_t_751_, 1);
lean_inc_ref(v_children_756_);
lean_dec_ref(v_t_751_);
v_msgLog_757_ = lean_ctor_get(v_diagnostics_755_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v_diagnostics_755_);
if (v_isSharedCheck_775_ == 0)
{
lean_object* v_unused_776_; 
v_unused_776_ = lean_ctor_get(v_diagnostics_755_, 1);
lean_dec(v_unused_776_);
v___x_759_ = v_diagnostics_755_;
v_isShared_760_ = v_isSharedCheck_775_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_msgLog_757_);
lean_dec(v_diagnostics_755_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_775_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
lean_inc(v_cmdStx_x3f_752_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 1, v_msgLog_757_);
lean_ctor_set(v___x_759_, 0, v_cmdStx_x3f_752_);
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_cmdStx_x3f_752_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_msgLog_757_);
v___x_762_ = v_reuseFailAlloc_774_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
lean_object* v_acc_763_; lean_object* v___x_764_; lean_object* v___x_765_; uint8_t v___x_766_; 
v_acc_763_ = lean_array_push(v_acc_753_, v___x_762_);
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = lean_array_get_size(v_children_756_);
v___x_766_ = lean_nat_dec_lt(v___x_764_, v___x_765_);
if (v___x_766_ == 0)
{
lean_dec_ref(v_children_756_);
lean_dec(v_cmdStx_x3f_752_);
return v_acc_763_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = lean_nat_dec_le(v___x_765_, v___x_765_);
if (v___x_767_ == 0)
{
if (v___x_766_ == 0)
{
lean_dec_ref(v_children_756_);
lean_dec(v_cmdStx_x3f_752_);
return v_acc_763_;
}
else
{
size_t v___x_768_; size_t v___x_769_; lean_object* v___x_770_; 
v___x_768_ = ((size_t)0ULL);
v___x_769_ = lean_usize_of_nat(v___x_765_);
v___x_770_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(v_cmdStx_x3f_752_, v_children_756_, v___x_768_, v___x_769_, v_acc_763_);
lean_dec_ref(v_children_756_);
return v___x_770_;
}
}
else
{
size_t v___x_771_; size_t v___x_772_; lean_object* v___x_773_; 
v___x_771_ = ((size_t)0ULL);
v___x_772_ = lean_usize_of_nat(v___x_765_);
v___x_773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(v_cmdStx_x3f_752_, v_children_756_, v___x_771_, v___x_772_, v_acc_763_);
lean_dec_ref(v_children_756_);
return v___x_773_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(lean_object* v_cmdStx_x3f_777_, lean_object* v_as_778_, size_t v_i_779_, size_t v_stop_780_, lean_object* v_b_781_){
_start:
{
lean_object* v___y_783_; uint8_t v___x_787_; 
v___x_787_ = lean_usize_dec_eq(v_i_779_, v_stop_780_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v_stx_x3f_789_; lean_object* v___x_790_; 
v___x_788_ = lean_array_uget_borrowed(v_as_778_, v_i_779_);
v_stx_x3f_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v___x_788_);
v___x_790_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_788_);
if (lean_obj_tag(v_stx_x3f_789_) == 0)
{
lean_object* v___x_791_; 
lean_inc(v_cmdStx_x3f_777_);
v___x_791_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(v___x_790_, v_cmdStx_x3f_777_, v_b_781_);
v___y_783_ = v___x_791_;
goto v___jp_782_;
}
else
{
lean_object* v___x_792_; 
lean_inc_ref(v_stx_x3f_789_);
v___x_792_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(v___x_790_, v_stx_x3f_789_, v_b_781_);
v___y_783_ = v___x_792_;
goto v___jp_782_;
}
}
else
{
lean_dec(v_cmdStx_x3f_777_);
return v_b_781_;
}
v___jp_782_:
{
size_t v___x_784_; size_t v___x_785_; 
v___x_784_ = ((size_t)1ULL);
v___x_785_ = lean_usize_add(v_i_779_, v___x_784_);
v_i_779_ = v___x_785_;
v_b_781_ = v___y_783_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0___boxed(lean_object* v_cmdStx_x3f_793_, lean_object* v_as_794_, lean_object* v_i_795_, lean_object* v_stop_796_, lean_object* v_b_797_){
_start:
{
size_t v_i_boxed_798_; size_t v_stop_boxed_799_; lean_object* v_res_800_; 
v_i_boxed_798_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_stop_boxed_799_ = lean_unbox_usize(v_stop_796_);
lean_dec(v_stop_796_);
v_res_800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(v_cmdStx_x3f_793_, v_as_794_, v_i_boxed_798_, v_stop_boxed_799_, v_b_797_);
lean_dec_ref(v_as_794_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__3(lean_object* v_filePath_801_, lean_object* v_a_802_){
_start:
{
lean_object* v_lean_x3f_803_; lean_object* v_olean_x3f_804_; lean_object* v_oleanServer_x3f_805_; lean_object* v_ilean_x3f_806_; lean_object* v_irSig_x3f_807_; lean_object* v_ir_x3f_808_; lean_object* v_c_x3f_809_; lean_object* v_bc_x3f_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_818_; 
v_lean_x3f_803_ = lean_ctor_get(v_a_802_, 0);
v_olean_x3f_804_ = lean_ctor_get(v_a_802_, 1);
v_oleanServer_x3f_805_ = lean_ctor_get(v_a_802_, 2);
v_ilean_x3f_806_ = lean_ctor_get(v_a_802_, 4);
v_irSig_x3f_807_ = lean_ctor_get(v_a_802_, 5);
v_ir_x3f_808_ = lean_ctor_get(v_a_802_, 6);
v_c_x3f_809_ = lean_ctor_get(v_a_802_, 7);
v_bc_x3f_810_ = lean_ctor_get(v_a_802_, 8);
v_isSharedCheck_818_ = !lean_is_exclusive(v_a_802_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; 
v_unused_819_ = lean_ctor_get(v_a_802_, 3);
lean_dec(v_unused_819_);
v___x_812_ = v_a_802_;
v_isShared_813_ = v_isSharedCheck_818_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_bc_x3f_810_);
lean_inc(v_c_x3f_809_);
lean_inc(v_ir_x3f_808_);
lean_inc(v_irSig_x3f_807_);
lean_inc(v_ilean_x3f_806_);
lean_inc(v_oleanServer_x3f_805_);
lean_inc(v_olean_x3f_804_);
lean_inc(v_lean_x3f_803_);
lean_dec(v_a_802_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_818_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_814_, 0, v_filePath_801_);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 3, v___x_814_);
v___x_816_ = v___x_812_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_lean_x3f_803_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_olean_x3f_804_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v_oleanServer_x3f_805_);
lean_ctor_set(v_reuseFailAlloc_817_, 3, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_817_, 4, v_ilean_x3f_806_);
lean_ctor_set(v_reuseFailAlloc_817_, 5, v_irSig_x3f_807_);
lean_ctor_set(v_reuseFailAlloc_817_, 6, v_ir_x3f_808_);
lean_ctor_set(v_reuseFailAlloc_817_, 7, v_c_x3f_809_);
lean_ctor_set(v_reuseFailAlloc_817_, 8, v_bc_x3f_810_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__1(lean_object* v_filePath_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_lean_x3f_822_; lean_object* v_olean_x3f_823_; lean_object* v_oleanServer_x3f_824_; lean_object* v_oleanPrivate_x3f_825_; lean_object* v_ilean_x3f_826_; lean_object* v_ir_x3f_827_; lean_object* v_c_x3f_828_; lean_object* v_bc_x3f_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_837_; 
v_lean_x3f_822_ = lean_ctor_get(v_a_821_, 0);
v_olean_x3f_823_ = lean_ctor_get(v_a_821_, 1);
v_oleanServer_x3f_824_ = lean_ctor_get(v_a_821_, 2);
v_oleanPrivate_x3f_825_ = lean_ctor_get(v_a_821_, 3);
v_ilean_x3f_826_ = lean_ctor_get(v_a_821_, 4);
v_ir_x3f_827_ = lean_ctor_get(v_a_821_, 6);
v_c_x3f_828_ = lean_ctor_get(v_a_821_, 7);
v_bc_x3f_829_ = lean_ctor_get(v_a_821_, 8);
v_isSharedCheck_837_ = !lean_is_exclusive(v_a_821_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v_a_821_, 5);
lean_dec(v_unused_838_);
v___x_831_ = v_a_821_;
v_isShared_832_ = v_isSharedCheck_837_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_bc_x3f_829_);
lean_inc(v_c_x3f_828_);
lean_inc(v_ir_x3f_827_);
lean_inc(v_ilean_x3f_826_);
lean_inc(v_oleanPrivate_x3f_825_);
lean_inc(v_oleanServer_x3f_824_);
lean_inc(v_olean_x3f_823_);
lean_inc(v_lean_x3f_822_);
lean_dec(v_a_821_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_837_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_833_, 0, v_filePath_820_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 5, v___x_833_);
v___x_835_ = v___x_831_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_lean_x3f_822_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_olean_x3f_823_);
lean_ctor_set(v_reuseFailAlloc_836_, 2, v_oleanServer_x3f_824_);
lean_ctor_set(v_reuseFailAlloc_836_, 3, v_oleanPrivate_x3f_825_);
lean_ctor_set(v_reuseFailAlloc_836_, 4, v_ilean_x3f_826_);
lean_ctor_set(v_reuseFailAlloc_836_, 5, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_836_, 6, v_ir_x3f_827_);
lean_ctor_set(v_reuseFailAlloc_836_, 7, v_c_x3f_828_);
lean_ctor_set(v_reuseFailAlloc_836_, 8, v_bc_x3f_829_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__4(lean_object* v_filePath_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_lean_x3f_841_; lean_object* v_olean_x3f_842_; lean_object* v_oleanPrivate_x3f_843_; lean_object* v_ilean_x3f_844_; lean_object* v_irSig_x3f_845_; lean_object* v_ir_x3f_846_; lean_object* v_c_x3f_847_; lean_object* v_bc_x3f_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
v_lean_x3f_841_ = lean_ctor_get(v_a_840_, 0);
v_olean_x3f_842_ = lean_ctor_get(v_a_840_, 1);
v_oleanPrivate_x3f_843_ = lean_ctor_get(v_a_840_, 3);
v_ilean_x3f_844_ = lean_ctor_get(v_a_840_, 4);
v_irSig_x3f_845_ = lean_ctor_get(v_a_840_, 5);
v_ir_x3f_846_ = lean_ctor_get(v_a_840_, 6);
v_c_x3f_847_ = lean_ctor_get(v_a_840_, 7);
v_bc_x3f_848_ = lean_ctor_get(v_a_840_, 8);
v_isSharedCheck_856_ = !lean_is_exclusive(v_a_840_);
if (v_isSharedCheck_856_ == 0)
{
lean_object* v_unused_857_; 
v_unused_857_ = lean_ctor_get(v_a_840_, 2);
lean_dec(v_unused_857_);
v___x_850_ = v_a_840_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_bc_x3f_848_);
lean_inc(v_c_x3f_847_);
lean_inc(v_ir_x3f_846_);
lean_inc(v_irSig_x3f_845_);
lean_inc(v_ilean_x3f_844_);
lean_inc(v_oleanPrivate_x3f_843_);
lean_inc(v_olean_x3f_842_);
lean_inc(v_lean_x3f_841_);
lean_dec(v_a_840_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_852_, 0, v_filePath_839_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 2, v___x_852_);
v___x_854_ = v___x_850_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_lean_x3f_841_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_olean_x3f_842_);
lean_ctor_set(v_reuseFailAlloc_855_, 2, v___x_852_);
lean_ctor_set(v_reuseFailAlloc_855_, 3, v_oleanPrivate_x3f_843_);
lean_ctor_set(v_reuseFailAlloc_855_, 4, v_ilean_x3f_844_);
lean_ctor_set(v_reuseFailAlloc_855_, 5, v_irSig_x3f_845_);
lean_ctor_set(v_reuseFailAlloc_855_, 6, v_ir_x3f_846_);
lean_ctor_set(v_reuseFailAlloc_855_, 7, v_c_x3f_847_);
lean_ctor_set(v_reuseFailAlloc_855_, 8, v_bc_x3f_848_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(lean_object* v_a_858_, lean_object* v_x_859_){
_start:
{
if (lean_obj_tag(v_x_859_) == 0)
{
uint8_t v___x_860_; 
v___x_860_ = 0;
return v___x_860_;
}
else
{
lean_object* v_key_861_; lean_object* v_tail_862_; uint8_t v___x_863_; 
v_key_861_ = lean_ctor_get(v_x_859_, 0);
v_tail_862_ = lean_ctor_get(v_x_859_, 2);
v___x_863_ = lean_string_dec_eq(v_key_861_, v_a_858_);
if (v___x_863_ == 0)
{
v_x_859_ = v_tail_862_;
goto _start;
}
else
{
return v___x_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg___boxed(lean_object* v_a_865_, lean_object* v_x_866_){
_start:
{
uint8_t v_res_867_; lean_object* v_r_868_; 
v_res_867_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_865_, v_x_866_);
lean_dec(v_x_866_);
lean_dec_ref(v_a_865_);
v_r_868_ = lean_box(v_res_867_);
return v_r_868_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(lean_object* v_m_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_buckets_871_; lean_object* v___x_872_; uint64_t v___x_873_; uint64_t v___x_874_; uint64_t v___x_875_; uint64_t v_fold_876_; uint64_t v___x_877_; uint64_t v___x_878_; uint64_t v___x_879_; size_t v___x_880_; size_t v___x_881_; size_t v___x_882_; size_t v___x_883_; size_t v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v_buckets_871_ = lean_ctor_get(v_m_869_, 1);
v___x_872_ = lean_array_get_size(v_buckets_871_);
v___x_873_ = lean_string_hash(v_a_870_);
v___x_874_ = 32ULL;
v___x_875_ = lean_uint64_shift_right(v___x_873_, v___x_874_);
v_fold_876_ = lean_uint64_xor(v___x_873_, v___x_875_);
v___x_877_ = 16ULL;
v___x_878_ = lean_uint64_shift_right(v_fold_876_, v___x_877_);
v___x_879_ = lean_uint64_xor(v_fold_876_, v___x_878_);
v___x_880_ = lean_uint64_to_usize(v___x_879_);
v___x_881_ = lean_usize_of_nat(v___x_872_);
v___x_882_ = ((size_t)1ULL);
v___x_883_ = lean_usize_sub(v___x_881_, v___x_882_);
v___x_884_ = lean_usize_land(v___x_880_, v___x_883_);
v___x_885_ = lean_array_uget_borrowed(v_buckets_871_, v___x_884_);
v___x_886_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_870_, v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg___boxed(lean_object* v_m_887_, lean_object* v_a_888_){
_start:
{
uint8_t v_res_889_; lean_object* v_r_890_; 
v_res_889_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(v_m_887_, v_a_888_);
lean_dec_ref(v_a_888_);
lean_dec_ref(v_m_887_);
v_r_890_ = lean_box(v_res_889_);
return v_r_890_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(lean_object* v_a_891_, lean_object* v_fallback_892_, lean_object* v_x_893_){
_start:
{
if (lean_obj_tag(v_x_893_) == 0)
{
lean_inc(v_fallback_892_);
return v_fallback_892_;
}
else
{
lean_object* v_key_894_; lean_object* v_value_895_; lean_object* v_tail_896_; uint8_t v___x_897_; 
v_key_894_ = lean_ctor_get(v_x_893_, 0);
v_value_895_ = lean_ctor_get(v_x_893_, 1);
v_tail_896_ = lean_ctor_get(v_x_893_, 2);
v___x_897_ = lean_string_dec_eq(v_key_894_, v_a_891_);
if (v___x_897_ == 0)
{
v_x_893_ = v_tail_896_;
goto _start;
}
else
{
lean_inc(v_value_895_);
return v_value_895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg___boxed(lean_object* v_a_899_, lean_object* v_fallback_900_, lean_object* v_x_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(v_a_899_, v_fallback_900_, v_x_901_);
lean_dec(v_x_901_);
lean_dec(v_fallback_900_);
lean_dec_ref(v_a_899_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(lean_object* v_m_903_, lean_object* v_a_904_, lean_object* v_fallback_905_){
_start:
{
lean_object* v_buckets_906_; lean_object* v___x_907_; uint64_t v___x_908_; uint64_t v___x_909_; uint64_t v___x_910_; uint64_t v_fold_911_; uint64_t v___x_912_; uint64_t v___x_913_; uint64_t v___x_914_; size_t v___x_915_; size_t v___x_916_; size_t v___x_917_; size_t v___x_918_; size_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_buckets_906_ = lean_ctor_get(v_m_903_, 1);
v___x_907_ = lean_array_get_size(v_buckets_906_);
v___x_908_ = lean_string_hash(v_a_904_);
v___x_909_ = 32ULL;
v___x_910_ = lean_uint64_shift_right(v___x_908_, v___x_909_);
v_fold_911_ = lean_uint64_xor(v___x_908_, v___x_910_);
v___x_912_ = 16ULL;
v___x_913_ = lean_uint64_shift_right(v_fold_911_, v___x_912_);
v___x_914_ = lean_uint64_xor(v_fold_911_, v___x_913_);
v___x_915_ = lean_uint64_to_usize(v___x_914_);
v___x_916_ = lean_usize_of_nat(v___x_907_);
v___x_917_ = ((size_t)1ULL);
v___x_918_ = lean_usize_sub(v___x_916_, v___x_917_);
v___x_919_ = lean_usize_land(v___x_915_, v___x_918_);
v___x_920_ = lean_array_uget_borrowed(v_buckets_906_, v___x_919_);
v___x_921_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(v_a_904_, v_fallback_905_, v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg___boxed(lean_object* v_m_922_, lean_object* v_a_923_, lean_object* v_fallback_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(v_m_922_, v_a_923_, v_fallback_924_);
lean_dec(v_fallback_924_);
lean_dec_ref(v_a_923_);
lean_dec_ref(v_m_922_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__2(lean_object* v_filePath_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_lean_x3f_928_; lean_object* v_olean_x3f_929_; lean_object* v_oleanServer_x3f_930_; lean_object* v_oleanPrivate_x3f_931_; lean_object* v_ilean_x3f_932_; lean_object* v_irSig_x3f_933_; lean_object* v_c_x3f_934_; lean_object* v_bc_x3f_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_943_; 
v_lean_x3f_928_ = lean_ctor_get(v_a_927_, 0);
v_olean_x3f_929_ = lean_ctor_get(v_a_927_, 1);
v_oleanServer_x3f_930_ = lean_ctor_get(v_a_927_, 2);
v_oleanPrivate_x3f_931_ = lean_ctor_get(v_a_927_, 3);
v_ilean_x3f_932_ = lean_ctor_get(v_a_927_, 4);
v_irSig_x3f_933_ = lean_ctor_get(v_a_927_, 5);
v_c_x3f_934_ = lean_ctor_get(v_a_927_, 7);
v_bc_x3f_935_ = lean_ctor_get(v_a_927_, 8);
v_isSharedCheck_943_ = !lean_is_exclusive(v_a_927_);
if (v_isSharedCheck_943_ == 0)
{
lean_object* v_unused_944_; 
v_unused_944_ = lean_ctor_get(v_a_927_, 6);
lean_dec(v_unused_944_);
v___x_937_ = v_a_927_;
v_isShared_938_ = v_isSharedCheck_943_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_bc_x3f_935_);
lean_inc(v_c_x3f_934_);
lean_inc(v_irSig_x3f_933_);
lean_inc(v_ilean_x3f_932_);
lean_inc(v_oleanPrivate_x3f_931_);
lean_inc(v_oleanServer_x3f_930_);
lean_inc(v_olean_x3f_929_);
lean_inc(v_lean_x3f_928_);
lean_dec(v_a_927_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_943_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_939_, 0, v_filePath_926_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 6, v___x_939_);
v___x_941_ = v___x_937_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_lean_x3f_928_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_olean_x3f_929_);
lean_ctor_set(v_reuseFailAlloc_942_, 2, v_oleanServer_x3f_930_);
lean_ctor_set(v_reuseFailAlloc_942_, 3, v_oleanPrivate_x3f_931_);
lean_ctor_set(v_reuseFailAlloc_942_, 4, v_ilean_x3f_932_);
lean_ctor_set(v_reuseFailAlloc_942_, 5, v_irSig_x3f_933_);
lean_ctor_set(v_reuseFailAlloc_942_, 6, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_942_, 7, v_c_x3f_934_);
lean_ctor_set(v_reuseFailAlloc_942_, 8, v_bc_x3f_935_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__0(lean_object* v_filePath_945_, lean_object* v_a_946_){
_start:
{
lean_object* v_lean_x3f_947_; lean_object* v_oleanServer_x3f_948_; lean_object* v_oleanPrivate_x3f_949_; lean_object* v_ilean_x3f_950_; lean_object* v_irSig_x3f_951_; lean_object* v_ir_x3f_952_; lean_object* v_c_x3f_953_; lean_object* v_bc_x3f_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_962_; 
v_lean_x3f_947_ = lean_ctor_get(v_a_946_, 0);
v_oleanServer_x3f_948_ = lean_ctor_get(v_a_946_, 2);
v_oleanPrivate_x3f_949_ = lean_ctor_get(v_a_946_, 3);
v_ilean_x3f_950_ = lean_ctor_get(v_a_946_, 4);
v_irSig_x3f_951_ = lean_ctor_get(v_a_946_, 5);
v_ir_x3f_952_ = lean_ctor_get(v_a_946_, 6);
v_c_x3f_953_ = lean_ctor_get(v_a_946_, 7);
v_bc_x3f_954_ = lean_ctor_get(v_a_946_, 8);
v_isSharedCheck_962_ = !lean_is_exclusive(v_a_946_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; 
v_unused_963_ = lean_ctor_get(v_a_946_, 1);
lean_dec(v_unused_963_);
v___x_956_ = v_a_946_;
v_isShared_957_ = v_isSharedCheck_962_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_bc_x3f_954_);
lean_inc(v_c_x3f_953_);
lean_inc(v_ir_x3f_952_);
lean_inc(v_irSig_x3f_951_);
lean_inc(v_ilean_x3f_950_);
lean_inc(v_oleanPrivate_x3f_949_);
lean_inc(v_oleanServer_x3f_948_);
lean_inc(v_lean_x3f_947_);
lean_dec(v_a_946_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_962_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_958_, 0, v_filePath_945_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_958_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_lean_x3f_947_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v_oleanServer_x3f_948_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v_oleanPrivate_x3f_949_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v_ilean_x3f_950_);
lean_ctor_set(v_reuseFailAlloc_961_, 5, v_irSig_x3f_951_);
lean_ctor_set(v_reuseFailAlloc_961_, 6, v_ir_x3f_952_);
lean_ctor_set(v_reuseFailAlloc_961_, 7, v_c_x3f_953_);
lean_ctor_set(v_reuseFailAlloc_961_, 8, v_bc_x3f_954_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(lean_object* v_a_964_, lean_object* v_b_965_, lean_object* v_x_966_){
_start:
{
if (lean_obj_tag(v_x_966_) == 0)
{
lean_dec(v_b_965_);
lean_dec_ref(v_a_964_);
return v_x_966_;
}
else
{
lean_object* v_key_967_; lean_object* v_value_968_; lean_object* v_tail_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_981_; 
v_key_967_ = lean_ctor_get(v_x_966_, 0);
v_value_968_ = lean_ctor_get(v_x_966_, 1);
v_tail_969_ = lean_ctor_get(v_x_966_, 2);
v_isSharedCheck_981_ = !lean_is_exclusive(v_x_966_);
if (v_isSharedCheck_981_ == 0)
{
v___x_971_ = v_x_966_;
v_isShared_972_ = v_isSharedCheck_981_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_tail_969_);
lean_inc(v_value_968_);
lean_inc(v_key_967_);
lean_dec(v_x_966_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_981_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
uint8_t v___x_973_; 
v___x_973_ = lean_string_dec_eq(v_key_967_, v_a_964_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_974_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(v_a_964_, v_b_965_, v_tail_969_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 2, v___x_974_);
v___x_976_ = v___x_971_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_key_967_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_value_968_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
else
{
lean_object* v___x_979_; 
lean_dec(v_value_968_);
lean_dec(v_key_967_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 1, v_b_965_);
lean_ctor_set(v___x_971_, 0, v_a_964_);
v___x_979_ = v___x_971_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_964_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_b_965_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_tail_969_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* v_x_982_, lean_object* v_x_983_){
_start:
{
if (lean_obj_tag(v_x_983_) == 0)
{
return v_x_982_;
}
else
{
lean_object* v_key_984_; lean_object* v_value_985_; lean_object* v_tail_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1009_; 
v_key_984_ = lean_ctor_get(v_x_983_, 0);
v_value_985_ = lean_ctor_get(v_x_983_, 1);
v_tail_986_ = lean_ctor_get(v_x_983_, 2);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_x_983_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_988_ = v_x_983_;
v_isShared_989_ = v_isSharedCheck_1009_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_tail_986_);
lean_inc(v_value_985_);
lean_inc(v_key_984_);
lean_dec(v_x_983_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1009_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; uint64_t v___x_991_; uint64_t v___x_992_; uint64_t v___x_993_; uint64_t v_fold_994_; uint64_t v___x_995_; uint64_t v___x_996_; uint64_t v___x_997_; size_t v___x_998_; size_t v___x_999_; size_t v___x_1000_; size_t v___x_1001_; size_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_990_ = lean_array_get_size(v_x_982_);
v___x_991_ = lean_string_hash(v_key_984_);
v___x_992_ = 32ULL;
v___x_993_ = lean_uint64_shift_right(v___x_991_, v___x_992_);
v_fold_994_ = lean_uint64_xor(v___x_991_, v___x_993_);
v___x_995_ = 16ULL;
v___x_996_ = lean_uint64_shift_right(v_fold_994_, v___x_995_);
v___x_997_ = lean_uint64_xor(v_fold_994_, v___x_996_);
v___x_998_ = lean_uint64_to_usize(v___x_997_);
v___x_999_ = lean_usize_of_nat(v___x_990_);
v___x_1000_ = ((size_t)1ULL);
v___x_1001_ = lean_usize_sub(v___x_999_, v___x_1000_);
v___x_1002_ = lean_usize_land(v___x_998_, v___x_1001_);
v___x_1003_ = lean_array_uget_borrowed(v_x_982_, v___x_1002_);
lean_inc(v___x_1003_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 2, v___x_1003_);
v___x_1005_ = v___x_988_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_key_984_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_value_985_);
lean_ctor_set(v_reuseFailAlloc_1008_, 2, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_array_uset(v_x_982_, v___x_1002_, v___x_1005_);
v_x_982_ = v___x_1006_;
v_x_983_ = v_tail_986_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1010_, lean_object* v_source_1011_, lean_object* v_target_1012_){
_start:
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = lean_array_get_size(v_source_1011_);
v___x_1014_ = lean_nat_dec_lt(v_i_1010_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_dec_ref(v_source_1011_);
lean_dec(v_i_1010_);
return v_target_1012_;
}
else
{
lean_object* v_es_1015_; lean_object* v___x_1016_; lean_object* v_source_1017_; lean_object* v_target_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v_es_1015_ = lean_array_fget(v_source_1011_, v_i_1010_);
v___x_1016_ = lean_box(0);
v_source_1017_ = lean_array_fset(v_source_1011_, v_i_1010_, v___x_1016_);
v_target_1018_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(v_target_1012_, v_es_1015_);
v___x_1019_ = lean_unsigned_to_nat(1u);
v___x_1020_ = lean_nat_add(v_i_1010_, v___x_1019_);
lean_dec(v_i_1010_);
v_i_1010_ = v___x_1020_;
v_source_1011_ = v_source_1017_;
v_target_1012_ = v_target_1018_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(lean_object* v_data_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v_nbuckets_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1023_ = lean_array_get_size(v_data_1022_);
v___x_1024_ = lean_unsigned_to_nat(2u);
v_nbuckets_1025_ = lean_nat_mul(v___x_1023_, v___x_1024_);
v___x_1026_ = lean_unsigned_to_nat(0u);
v___x_1027_ = lean_box(0);
v___x_1028_ = lean_mk_array(v_nbuckets_1025_, v___x_1027_);
v___x_1029_ = lean_array_propagate_mark(v_data_1022_, v___x_1028_);
v___x_1030_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(v___x_1026_, v_data_1022_, v___x_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(lean_object* v_m_1031_, lean_object* v_a_1032_, lean_object* v_b_1033_){
_start:
{
lean_object* v_size_1034_; lean_object* v_buckets_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1078_; 
v_size_1034_ = lean_ctor_get(v_m_1031_, 0);
v_buckets_1035_ = lean_ctor_get(v_m_1031_, 1);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_m_1031_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1037_ = v_m_1031_;
v_isShared_1038_ = v_isSharedCheck_1078_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_buckets_1035_);
lean_inc(v_size_1034_);
lean_dec(v_m_1031_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1078_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; uint64_t v___x_1040_; uint64_t v___x_1041_; uint64_t v___x_1042_; uint64_t v_fold_1043_; uint64_t v___x_1044_; uint64_t v___x_1045_; uint64_t v___x_1046_; size_t v___x_1047_; size_t v___x_1048_; size_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; lean_object* v_bkt_1052_; uint8_t v___x_1053_; 
v___x_1039_ = lean_array_get_size(v_buckets_1035_);
v___x_1040_ = lean_string_hash(v_a_1032_);
v___x_1041_ = 32ULL;
v___x_1042_ = lean_uint64_shift_right(v___x_1040_, v___x_1041_);
v_fold_1043_ = lean_uint64_xor(v___x_1040_, v___x_1042_);
v___x_1044_ = 16ULL;
v___x_1045_ = lean_uint64_shift_right(v_fold_1043_, v___x_1044_);
v___x_1046_ = lean_uint64_xor(v_fold_1043_, v___x_1045_);
v___x_1047_ = lean_uint64_to_usize(v___x_1046_);
v___x_1048_ = lean_usize_of_nat(v___x_1039_);
v___x_1049_ = ((size_t)1ULL);
v___x_1050_ = lean_usize_sub(v___x_1048_, v___x_1049_);
v___x_1051_ = lean_usize_land(v___x_1047_, v___x_1050_);
v_bkt_1052_ = lean_array_uget_borrowed(v_buckets_1035_, v___x_1051_);
v___x_1053_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_1032_, v_bkt_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v_size_x27_1055_; lean_object* v___x_1056_; lean_object* v_buckets_x27_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1054_ = lean_unsigned_to_nat(1u);
v_size_x27_1055_ = lean_nat_add(v_size_1034_, v___x_1054_);
lean_dec(v_size_1034_);
lean_inc(v_bkt_1052_);
v___x_1056_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1056_, 0, v_a_1032_);
lean_ctor_set(v___x_1056_, 1, v_b_1033_);
lean_ctor_set(v___x_1056_, 2, v_bkt_1052_);
v_buckets_x27_1057_ = lean_array_uset(v_buckets_1035_, v___x_1051_, v___x_1056_);
v___x_1058_ = lean_unsigned_to_nat(4u);
v___x_1059_ = lean_nat_mul(v_size_x27_1055_, v___x_1058_);
v___x_1060_ = lean_unsigned_to_nat(3u);
v___x_1061_ = lean_nat_div(v___x_1059_, v___x_1060_);
lean_dec(v___x_1059_);
v___x_1062_ = lean_array_get_size(v_buckets_x27_1057_);
v___x_1063_ = lean_nat_dec_le(v___x_1061_, v___x_1062_);
lean_dec(v___x_1061_);
if (v___x_1063_ == 0)
{
lean_object* v_val_1064_; lean_object* v___x_1066_; 
v_val_1064_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(v_buckets_x27_1057_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 1, v_val_1064_);
lean_ctor_set(v___x_1037_, 0, v_size_x27_1055_);
v___x_1066_ = v___x_1037_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_size_x27_1055_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v_val_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
else
{
lean_object* v___x_1069_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 1, v_buckets_x27_1057_);
lean_ctor_set(v___x_1037_, 0, v_size_x27_1055_);
v___x_1069_ = v___x_1037_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_size_x27_1055_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v_buckets_x27_1057_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
else
{
lean_object* v___x_1071_; lean_object* v_buckets_x27_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1076_; 
lean_inc(v_bkt_1052_);
v___x_1071_ = lean_box(0);
v_buckets_x27_1072_ = lean_array_uset(v_buckets_1035_, v___x_1051_, v___x_1071_);
v___x_1073_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(v_a_1032_, v_b_1033_, v_bkt_1052_);
v___x_1074_ = lean_array_uset(v_buckets_x27_1072_, v___x_1051_, v___x_1073_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 1, v___x_1074_);
v___x_1076_ = v___x_1037_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_size_1034_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(lean_object* v_as_1087_, size_t v_sz_1088_, size_t v_i_1089_, lean_object* v_b_1090_){
_start:
{
uint8_t v___x_1091_; 
v___x_1091_ = lean_usize_dec_lt(v_i_1089_, v_sz_1088_);
if (v___x_1091_ == 0)
{
return v_b_1090_;
}
else
{
lean_object* v_fst_1092_; lean_object* v_snd_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1143_; 
v_fst_1092_ = lean_ctor_get(v_b_1090_, 0);
v_snd_1093_ = lean_ctor_get(v_b_1090_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_b_1090_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1095_ = v_b_1090_;
v_isShared_1096_ = v_isSharedCheck_1143_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_snd_1093_);
lean_inc(v_fst_1092_);
lean_dec(v_b_1090_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1143_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v_order_1100_; lean_object* v_fst_1112_; lean_object* v_snd_1113_; lean_object* v_a_1116_; lean_object* v_filePath_1117_; lean_object* v___f_1118_; lean_object* v___x_1119_; 
v_a_1116_ = lean_array_uget_borrowed(v_as_1087_, v_i_1089_);
v_filePath_1117_ = lean_ctor_get(v_a_1116_, 0);
lean_inc_ref_n(v_filePath_1117_, 2);
v___f_1118_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_1118_, 0, v_filePath_1117_);
v___x_1119_ = l_System_FilePath_extension(v_filePath_1117_);
if (lean_obj_tag(v___x_1119_) == 1)
{
lean_object* v_val_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v_val_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_val_1120_);
lean_dec_ref_known(v___x_1119_, 1);
v___x_1121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1));
v___x_1122_ = lean_string_dec_eq(v_val_1120_, v___x_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2));
v___x_1124_ = lean_string_dec_eq(v_val_1120_, v___x_1123_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; uint8_t v___x_1126_; 
v___x_1125_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3));
v___x_1126_ = lean_string_dec_eq(v_val_1120_, v___x_1125_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4));
v___x_1128_ = lean_string_dec_eq(v_val_1120_, v___x_1127_);
lean_dec(v_val_1120_);
if (v___x_1128_ == 0)
{
lean_inc_ref(v_filePath_1117_);
v_fst_1112_ = v_filePath_1117_;
v_snd_1113_ = v___f_1118_;
goto v___jp_1111_;
}
else
{
lean_object* v___f_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_dec_ref(v___f_1118_);
lean_inc_ref_n(v_filePath_1117_, 2);
v___f_1129_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__1), 2, 1);
lean_closure_set(v___f_1129_, 0, v_filePath_1117_);
v___x_1130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5));
v___x_1131_ = l_System_FilePath_withExtension(v_filePath_1117_, v___x_1130_);
v___x_1132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6));
v___x_1133_ = l_System_FilePath_withExtension(v___x_1131_, v___x_1132_);
v_fst_1112_ = v___x_1133_;
v_snd_1113_ = v___f_1129_;
goto v___jp_1111_;
}
}
else
{
lean_object* v___f_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
lean_dec(v_val_1120_);
lean_dec_ref(v___f_1118_);
lean_inc_ref_n(v_filePath_1117_, 2);
v___f_1134_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__2), 2, 1);
lean_closure_set(v___f_1134_, 0, v_filePath_1117_);
v___x_1135_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6));
v___x_1136_ = l_System_FilePath_withExtension(v_filePath_1117_, v___x_1135_);
v_fst_1112_ = v___x_1136_;
v_snd_1113_ = v___f_1134_;
goto v___jp_1111_;
}
}
else
{
lean_object* v___f_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
lean_dec(v_val_1120_);
lean_dec_ref(v___f_1118_);
lean_inc_ref_n(v_filePath_1117_, 2);
v___f_1137_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__3), 2, 1);
lean_closure_set(v___f_1137_, 0, v_filePath_1117_);
v___x_1138_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5));
v___x_1139_ = l_System_FilePath_withExtension(v_filePath_1117_, v___x_1138_);
v_fst_1112_ = v___x_1139_;
v_snd_1113_ = v___f_1137_;
goto v___jp_1111_;
}
}
else
{
lean_object* v___f_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_dec(v_val_1120_);
lean_dec_ref(v___f_1118_);
lean_inc_ref_n(v_filePath_1117_, 2);
v___f_1140_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__4), 2, 1);
lean_closure_set(v___f_1140_, 0, v_filePath_1117_);
v___x_1141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5));
v___x_1142_ = l_System_FilePath_withExtension(v_filePath_1117_, v___x_1141_);
v_fst_1112_ = v___x_1142_;
v_snd_1113_ = v___f_1140_;
goto v___jp_1111_;
}
}
else
{
lean_dec(v___x_1119_);
lean_inc_ref(v_filePath_1117_);
v_fst_1112_ = v_filePath_1117_;
v_snd_1113_ = v___f_1118_;
goto v___jp_1111_;
}
v___jp_1097_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0));
v___x_1102_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(v_snd_1093_, v___y_1098_, v___x_1101_);
v___x_1103_ = lean_apply_1(v___y_1099_, v___x_1102_);
v___x_1104_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(v_snd_1093_, v___y_1098_, v___x_1103_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v___x_1104_);
lean_ctor_set(v___x_1095_, 0, v_order_1100_);
v___x_1106_ = v___x_1095_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_order_1100_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
size_t v___x_1107_; size_t v___x_1108_; 
v___x_1107_ = ((size_t)1ULL);
v___x_1108_ = lean_usize_add(v_i_1089_, v___x_1107_);
v_i_1089_ = v___x_1108_;
v_b_1090_ = v___x_1106_;
goto _start;
}
}
v___jp_1111_:
{
uint8_t v___x_1114_; 
v___x_1114_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(v_snd_1093_, v_fst_1112_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; 
lean_inc_ref(v_fst_1112_);
v___x_1115_ = lean_array_push(v_fst_1092_, v_fst_1112_);
v___y_1098_ = v_fst_1112_;
v___y_1099_ = v_snd_1113_;
v_order_1100_ = v___x_1115_;
goto v___jp_1097_;
}
else
{
v___y_1098_ = v_fst_1112_;
v___y_1099_ = v_snd_1113_;
v_order_1100_ = v_fst_1092_;
goto v___jp_1097_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___boxed(lean_object* v_as_1144_, lean_object* v_sz_1145_, lean_object* v_i_1146_, lean_object* v_b_1147_){
_start:
{
size_t v_sz_boxed_1148_; size_t v_i_boxed_1149_; lean_object* v_res_1150_; 
v_sz_boxed_1148_ = lean_unbox_usize(v_sz_1145_);
lean_dec(v_sz_1145_);
v_i_boxed_1149_ = lean_unbox_usize(v_i_1146_);
lean_dec(v_i_1146_);
v_res_1150_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(v_as_1144_, v_sz_boxed_1148_, v_i_boxed_1149_, v_b_1147_);
lean_dec_ref(v_as_1144_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8_spec__10(lean_object* v_msg_1151_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = l_Lean_instInhabitedModuleArtifacts_default;
v___x_1153_ = lean_panic_fn_borrowed(v___x_1152_, v_msg_1151_);
return v___x_1153_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1157_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2));
v___x_1158_ = lean_unsigned_to_nat(11u);
v___x_1159_ = lean_unsigned_to_nat(163u);
v___x_1160_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1));
v___x_1161_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0));
v___x_1162_ = l_mkPanicMessageWithDecl(v___x_1161_, v___x_1160_, v___x_1159_, v___x_1158_, v___x_1157_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(lean_object* v_a_1163_, lean_object* v_x_1164_){
_start:
{
if (lean_obj_tag(v_x_1164_) == 0)
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3);
v___x_1166_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8_spec__10(v___x_1165_);
return v___x_1166_;
}
else
{
lean_object* v_key_1167_; lean_object* v_value_1168_; lean_object* v_tail_1169_; uint8_t v___x_1170_; 
v_key_1167_ = lean_ctor_get(v_x_1164_, 0);
v_value_1168_ = lean_ctor_get(v_x_1164_, 1);
v_tail_1169_ = lean_ctor_get(v_x_1164_, 2);
v___x_1170_ = lean_string_dec_eq(v_key_1167_, v_a_1163_);
if (v___x_1170_ == 0)
{
v_x_1164_ = v_tail_1169_;
goto _start;
}
else
{
lean_inc(v_value_1168_);
return v_value_1168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___boxed(lean_object* v_a_1172_, lean_object* v_x_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(v_a_1172_, v_x_1173_);
lean_dec(v_x_1173_);
lean_dec_ref(v_a_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(lean_object* v_m_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_buckets_1177_; lean_object* v___x_1178_; uint64_t v___x_1179_; uint64_t v___x_1180_; uint64_t v___x_1181_; uint64_t v_fold_1182_; uint64_t v___x_1183_; uint64_t v___x_1184_; uint64_t v___x_1185_; size_t v___x_1186_; size_t v___x_1187_; size_t v___x_1188_; size_t v___x_1189_; size_t v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_buckets_1177_ = lean_ctor_get(v_m_1175_, 1);
v___x_1178_ = lean_array_get_size(v_buckets_1177_);
v___x_1179_ = lean_string_hash(v_a_1176_);
v___x_1180_ = 32ULL;
v___x_1181_ = lean_uint64_shift_right(v___x_1179_, v___x_1180_);
v_fold_1182_ = lean_uint64_xor(v___x_1179_, v___x_1181_);
v___x_1183_ = 16ULL;
v___x_1184_ = lean_uint64_shift_right(v_fold_1182_, v___x_1183_);
v___x_1185_ = lean_uint64_xor(v_fold_1182_, v___x_1184_);
v___x_1186_ = lean_uint64_to_usize(v___x_1185_);
v___x_1187_ = lean_usize_of_nat(v___x_1178_);
v___x_1188_ = ((size_t)1ULL);
v___x_1189_ = lean_usize_sub(v___x_1187_, v___x_1188_);
v___x_1190_ = lean_usize_land(v___x_1186_, v___x_1189_);
v___x_1191_ = lean_array_uget_borrowed(v_buckets_1177_, v___x_1190_);
v___x_1192_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(v_a_1176_, v___x_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4___boxed(lean_object* v_m_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(v_m_1193_, v_a_1194_);
lean_dec_ref(v_a_1194_);
lean_dec_ref(v_m_1193_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(lean_object* v___x_1196_, size_t v_sz_1197_, size_t v_i_1198_, lean_object* v_bs_1199_){
_start:
{
uint8_t v___x_1200_; 
v___x_1200_ = lean_usize_dec_lt(v_i_1198_, v_sz_1197_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; 
v___x_1201_ = l_unsafeCast___redArg(v_bs_1199_);
lean_dec_ref(v_bs_1199_);
return v___x_1201_;
}
else
{
lean_object* v_v_1202_; lean_object* v___x_1203_; lean_object* v_bs_x27_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; size_t v___x_1207_; size_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v_v_1202_ = lean_array_uget(v_bs_1199_, v_i_1198_);
v___x_1203_ = lean_unsigned_to_nat(0u);
v_bs_x27_1204_ = lean_array_uset(v_bs_1199_, v_i_1198_, v___x_1203_);
v___x_1205_ = l_unsafeCast___redArg(v_v_1202_);
lean_dec(v_v_1202_);
v___x_1206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(v___x_1196_, v___x_1205_);
lean_dec(v___x_1205_);
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_add(v_i_1198_, v___x_1207_);
v___x_1209_ = l_unsafeCast___redArg(v___x_1206_);
lean_dec_ref(v___x_1206_);
v___x_1210_ = lean_array_uset(v_bs_x27_1204_, v_i_1198_, v___x_1209_);
v_i_1198_ = v___x_1208_;
v_bs_1199_ = v___x_1210_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5___boxed(lean_object* v___x_1212_, lean_object* v_sz_1213_, lean_object* v_i_1214_, lean_object* v_bs_1215_){
_start:
{
size_t v_sz_boxed_1216_; size_t v_i_boxed_1217_; lean_object* v_res_1218_; 
v_sz_boxed_1216_ = lean_unbox_usize(v_sz_1213_);
lean_dec(v_sz_1213_);
v_i_boxed_1217_ = lean_unbox_usize(v_i_1214_);
lean_dec(v_i_1214_);
v_res_1218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(v___x_1212_, v_sz_boxed_1216_, v_i_boxed_1217_, v_bs_1215_);
lean_dec_ref(v___x_1212_);
return v_res_1218_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1221_ = lean_box(0);
v___x_1222_ = lean_unsigned_to_nat(16u);
v___x_1223_ = lean_mk_array(v___x_1222_, v___x_1221_);
return v___x_1223_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v_byBase_1226_; 
v___x_1224_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1, &l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1);
v___x_1225_ = lean_unsigned_to_nat(0u);
v_byBase_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byBase_1226_, 0, v___x_1225_);
lean_ctor_set(v_byBase_1226_, 1, v___x_1224_);
return v_byBase_1226_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3(void){
_start:
{
lean_object* v_byBase_1227_; lean_object* v_order_1228_; lean_object* v___x_1229_; 
v_byBase_1227_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2, &l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2);
v_order_1228_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0));
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v_order_1228_);
lean_ctor_set(v___x_1229_, 1, v_byBase_1227_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(lean_object* v_regions_1230_){
_start:
{
lean_object* v___x_1231_; size_t v_sz_1232_; size_t v___x_1233_; lean_object* v___x_1234_; lean_object* v_fst_1235_; lean_object* v_snd_1236_; size_t v_sz_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1231_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3, &l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3);
v_sz_1232_ = lean_array_size(v_regions_1230_);
v___x_1233_ = ((size_t)0ULL);
v___x_1234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(v_regions_1230_, v_sz_1232_, v___x_1233_, v___x_1231_);
v_fst_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_fst_1235_);
v_snd_1236_ = lean_ctor_get(v___x_1234_, 1);
lean_inc(v_snd_1236_);
lean_dec_ref(v___x_1234_);
v_sz_1237_ = lean_array_size(v_fst_1235_);
v___x_1238_ = l_unsafeCast___redArg(v_fst_1235_);
lean_dec(v_fst_1235_);
v___x_1239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(v_snd_1236_, v_sz_1237_, v___x_1233_, v___x_1238_);
lean_dec(v_snd_1236_);
v___x_1240_ = l_unsafeCast___redArg(v___x_1239_);
lean_dec_ref(v___x_1239_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___boxed(lean_object* v_regions_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(v_regions_1241_);
lean_dec_ref(v_regions_1241_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0(lean_object* v_00_u03b2_1243_, lean_object* v_m_1244_, lean_object* v_a_1245_, lean_object* v_fallback_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(v_m_1244_, v_a_1245_, v_fallback_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___boxed(lean_object* v_00_u03b2_1248_, lean_object* v_m_1249_, lean_object* v_a_1250_, lean_object* v_fallback_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0(v_00_u03b2_1248_, v_m_1249_, v_a_1250_, v_fallback_1251_);
lean_dec(v_fallback_1251_);
lean_dec_ref(v_a_1250_);
lean_dec_ref(v_m_1249_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1(lean_object* v_00_u03b2_1253_, lean_object* v_m_1254_, lean_object* v_a_1255_, lean_object* v_b_1256_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(v_m_1254_, v_a_1255_, v_b_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2(lean_object* v_00_u03b2_1258_, lean_object* v_m_1259_, lean_object* v_a_1260_){
_start:
{
uint8_t v___x_1261_; 
v___x_1261_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(v_m_1259_, v_a_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___boxed(lean_object* v_00_u03b2_1262_, lean_object* v_m_1263_, lean_object* v_a_1264_){
_start:
{
uint8_t v_res_1265_; lean_object* v_r_1266_; 
v_res_1265_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2(v_00_u03b2_1262_, v_m_1263_, v_a_1264_);
lean_dec_ref(v_a_1264_);
lean_dec_ref(v_m_1263_);
v_r_1266_ = lean_box(v_res_1265_);
return v_r_1266_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0(lean_object* v_00_u03b2_1267_, lean_object* v_a_1268_, lean_object* v_fallback_1269_, lean_object* v_x_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(v_a_1268_, v_fallback_1269_, v_x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1272_, lean_object* v_a_1273_, lean_object* v_fallback_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0(v_00_u03b2_1272_, v_a_1273_, v_fallback_1274_, v_x_1275_);
lean_dec(v_x_1275_);
lean_dec(v_fallback_1274_);
lean_dec_ref(v_a_1273_);
return v_res_1276_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2(lean_object* v_00_u03b2_1277_, lean_object* v_a_1278_, lean_object* v_x_1279_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_1278_, v_x_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1281_, lean_object* v_a_1282_, lean_object* v_x_1283_){
_start:
{
uint8_t v_res_1284_; lean_object* v_r_1285_; 
v_res_1284_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2(v_00_u03b2_1281_, v_a_1282_, v_x_1283_);
lean_dec(v_x_1283_);
lean_dec_ref(v_a_1282_);
v_r_1285_ = lean_box(v_res_1284_);
return v_r_1285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3(lean_object* v_00_u03b2_1286_, lean_object* v_data_1287_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(v_data_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4(lean_object* v_00_u03b2_1289_, lean_object* v_a_1290_, lean_object* v_b_1291_, lean_object* v_x_1292_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(v_a_1290_, v_b_1291_, v_x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1294_, lean_object* v_i_1295_, lean_object* v_source_1296_, lean_object* v_target_1297_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(v_i_1295_, v_source_1296_, v_target_1297_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_1299_, lean_object* v_x_1300_, lean_object* v_x_1301_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(v_x_1300_, v_x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(lean_object* v_as_1303_, size_t v_sz_1304_, size_t v_i_1305_, lean_object* v_b_1306_){
_start:
{
uint8_t v___x_1308_; 
v___x_1308_ = lean_usize_dec_lt(v_i_1305_, v_sz_1304_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; 
v___x_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1309_, 0, v_b_1306_);
return v___x_1309_;
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1311_; 
v_a_1310_ = lean_array_uget_borrowed(v_as_1303_, v_i_1305_);
v___x_1311_ = lean_compacted_region_read(v_a_1310_, v_b_1306_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v_snd_1313_; lean_object* v___x_1314_; size_t v___x_1315_; size_t v___x_1316_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v_snd_1313_ = lean_ctor_get(v_a_1312_, 1);
lean_inc(v_snd_1313_);
lean_dec(v_a_1312_);
v___x_1314_ = lean_array_push(v_b_1306_, v_snd_1313_);
v___x_1315_ = ((size_t)1ULL);
v___x_1316_ = lean_usize_add(v_i_1305_, v___x_1315_);
v_i_1305_ = v___x_1316_;
v_b_1306_ = v___x_1314_;
goto _start;
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_b_1306_);
v_a_1318_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1311_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1311_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0___boxed(lean_object* v_as_1326_, lean_object* v_sz_1327_, lean_object* v_i_1328_, lean_object* v_b_1329_, lean_object* v___y_1330_){
_start:
{
size_t v_sz_boxed_1331_; size_t v_i_boxed_1332_; lean_object* v_res_1333_; 
v_sz_boxed_1331_ = lean_unbox_usize(v_sz_1327_);
lean_dec(v_sz_1327_);
v_i_boxed_1332_ = lean_unbox_usize(v_i_1328_);
lean_dec(v_i_1328_);
v_res_1333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(v_as_1326_, v_sz_boxed_1331_, v_i_boxed_1332_, v_b_1329_);
lean_dec_ref(v_as_1326_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(lean_object* v_arts_1336_){
_start:
{
lean_object* v_oleanRegions_1338_; lean_object* v___x_1339_; size_t v_sz_1340_; size_t v___x_1341_; lean_object* v___x_1342_; 
v_oleanRegions_1338_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0));
lean_inc_ref(v_arts_1336_);
v___x_1339_ = l_Lean_ModuleArtifacts_oleanParts(v_arts_1336_);
v_sz_1340_ = lean_array_size(v___x_1339_);
v___x_1341_ = ((size_t)0ULL);
v___x_1342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(v___x_1339_, v_sz_1340_, v___x_1341_, v_oleanRegions_1338_);
lean_dec_ref(v___x_1339_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1344_; size_t v_sz_1345_; lean_object* v___x_1346_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1342_, 1);
v___x_1344_ = l_Lean_ModuleArtifacts_irParts(v_arts_1336_);
v_sz_1345_ = lean_array_size(v___x_1344_);
v___x_1346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(v___x_1344_, v_sz_1345_, v___x_1341_, v_oleanRegions_1338_);
lean_dec_ref(v___x_1344_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1355_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1349_ = v___x_1346_;
v_isShared_1350_ = v_isSharedCheck_1355_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1346_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1355_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1351_ = l_Array_append___redArg(v_a_1343_, v_a_1347_);
lean_dec(v_a_1347_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 0, v___x_1351_);
v___x_1353_ = v___x_1349_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
else
{
lean_dec(v_a_1343_);
return v___x_1346_;
}
}
else
{
lean_dec_ref(v_arts_1336_);
return v___x_1342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___boxed(lean_object* v_arts_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(v_arts_1356_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(lean_object* v_e_1359_){
_start:
{
if (lean_obj_tag(v_e_1359_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1370_; 
v_a_1361_ = lean_ctor_get(v_e_1359_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_e_1359_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1363_ = v_e_1359_;
v_isShared_1364_ = v_isSharedCheck_1370_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v_e_1359_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1370_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1368_; 
v___x_1365_ = lean_io_error_to_string(v_a_1361_);
v___x_1366_ = lean_mk_io_user_error(v___x_1365_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set_tag(v___x_1363_, 1);
lean_ctor_set(v___x_1363_, 0, v___x_1366_);
v___x_1368_ = v___x_1363_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v_e_1359_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_e_1359_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v_e_1359_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v_e_1359_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 0);
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg___boxed(lean_object* v_e_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(v_e_1379_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0(lean_object* v_00_u03b1_1382_, lean_object* v_e_1383_){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(v_e_1383_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___boxed(lean_object* v_00_u03b1_1386_, lean_object* v_e_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0(v_00_u03b1_1386_, v_e_1387_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(lean_object* v_a_1390_, lean_object* v___y_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v_fst_1394_; lean_object* v_snd_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1423_; 
v_fst_1394_ = lean_ctor_get(v_a_1392_, 0);
v_snd_1395_ = lean_ctor_get(v_a_1392_, 1);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_a_1392_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1397_ = v_a_1392_;
v_isShared_1398_ = v_isSharedCheck_1423_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_snd_1395_);
lean_inc(v_fst_1394_);
lean_dec(v_a_1392_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1423_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; uint8_t v___x_1400_; 
v___x_1399_ = lean_array_get_size(v_a_1390_);
v___x_1400_ = lean_nat_dec_lt(v_snd_1395_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1402_; 
if (v_isShared_1398_ == 0)
{
v___x_1402_ = v___x_1397_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_fst_1394_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_snd_1395_);
v___x_1402_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
return v___x_1403_;
}
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = l_Lean_instInhabitedModuleArtifacts_default;
v___x_1406_ = lean_array_get_borrowed(v___x_1405_, v_a_1390_, v_snd_1395_);
lean_inc(v___x_1406_);
v___x_1407_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(v___x_1406_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1412_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1407_, 1);
v___x_1409_ = l_Array_append___redArg(v_fst_1394_, v_a_1408_);
lean_dec(v_a_1408_);
v___x_1410_ = lean_nat_add(v_snd_1395_, v___y_1391_);
lean_dec(v_snd_1395_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 1, v___x_1410_);
lean_ctor_set(v___x_1397_, 0, v___x_1409_);
v___x_1412_ = v___x_1397_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
v_a_1392_ = v___x_1412_;
goto _start;
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_del_object(v___x_1397_);
lean_dec(v_snd_1395_);
lean_dec(v_fst_1394_);
v_a_1415_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1407_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1407_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg___boxed(lean_object* v_a_1424_, lean_object* v___y_1425_, lean_object* v_a_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(v_a_1424_, v___y_1425_, v_a_1426_);
lean_dec(v___y_1425_);
lean_dec_ref(v_a_1424_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0(lean_object* v_a_1429_, lean_object* v___y_1430_, lean_object* v___x_1431_){
_start:
{
lean_object* v___x_1433_; 
v___x_1433_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(v_a_1429_, v___y_1430_, v___x_1431_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1442_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1436_ = v___x_1433_;
v_isShared_1437_ = v_isSharedCheck_1442_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1442_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v_fst_1438_; lean_object* v___x_1440_; 
v_fst_1438_ = lean_ctor_get(v_a_1434_, 0);
lean_inc(v_fst_1438_);
lean_dec(v_a_1434_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set_tag(v___x_1436_, 1);
lean_ctor_set(v___x_1436_, 0, v_fst_1438_);
v___x_1440_ = v___x_1436_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_fst_1438_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
v_a_1443_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1433_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1433_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
lean_ctor_set_tag(v___x_1445_, 0);
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0___boxed(lean_object* v_a_1451_, lean_object* v___y_1452_, lean_object* v___x_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0(v_a_1451_, v___y_1452_, v___x_1453_);
lean_dec(v___y_1452_);
lean_dec_ref(v_a_1451_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(lean_object* v_upperBound_1456_, lean_object* v_a_1457_, lean_object* v___y_1458_, lean_object* v_a_1459_, lean_object* v_b_1460_){
_start:
{
uint8_t v___x_1462_; 
v___x_1462_ = lean_nat_dec_lt(v_a_1459_, v_upperBound_1456_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; 
lean_dec(v_a_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v_a_1457_);
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v_b_1460_);
return v___x_1463_;
}
else
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___f_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0));
lean_inc(v_a_1459_);
v___x_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1465_);
lean_ctor_set(v___x_1466_, 1, v_a_1459_);
lean_inc(v___y_1458_);
lean_inc_ref(v_a_1457_);
v___f_1467_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1467_, 0, v_a_1457_);
lean_closure_set(v___f_1467_, 1, v___y_1458_);
lean_closure_set(v___f_1467_, 2, v___x_1466_);
v___x_1468_ = lean_io_as_task(v___f_1467_, v___x_1464_);
v___x_1469_ = lean_array_push(v_b_1460_, v___x_1468_);
v___x_1470_ = lean_unsigned_to_nat(1u);
v___x_1471_ = lean_nat_add(v_a_1459_, v___x_1470_);
lean_dec(v_a_1459_);
v_a_1459_ = v___x_1471_;
v_b_1460_ = v___x_1469_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___boxed(lean_object* v_upperBound_1473_, lean_object* v_a_1474_, lean_object* v___y_1475_, lean_object* v_a_1476_, lean_object* v_b_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(v_upperBound_1473_, v_a_1474_, v___y_1475_, v_a_1476_, v_b_1477_);
lean_dec(v_upperBound_1473_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(lean_object* v_as_1480_, size_t v_sz_1481_, size_t v_i_1482_, lean_object* v_b_1483_){
_start:
{
uint8_t v___x_1485_; 
v___x_1485_ = lean_usize_dec_lt(v_i_1482_, v_sz_1481_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v_b_1483_);
return v___x_1486_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v_a_1487_ = lean_array_uget_borrowed(v_as_1480_, v_i_1482_);
lean_inc(v_a_1487_);
v___x_1488_ = lean_task_get_own(v_a_1487_);
v___x_1489_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(v___x_1488_);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v_a_1490_; lean_object* v___x_1491_; size_t v___x_1492_; size_t v___x_1493_; 
v_a_1490_ = lean_ctor_get(v___x_1489_, 0);
lean_inc(v_a_1490_);
lean_dec_ref_known(v___x_1489_, 1);
v___x_1491_ = l_Array_append___redArg(v_b_1483_, v_a_1490_);
lean_dec(v_a_1490_);
v___x_1492_ = ((size_t)1ULL);
v___x_1493_ = lean_usize_add(v_i_1482_, v___x_1492_);
v_i_1482_ = v___x_1493_;
v_b_1483_ = v___x_1491_;
goto _start;
}
else
{
lean_dec_ref(v_b_1483_);
return v___x_1489_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2___boxed(lean_object* v_as_1495_, lean_object* v_sz_1496_, lean_object* v_i_1497_, lean_object* v_b_1498_, lean_object* v___y_1499_){
_start:
{
size_t v_sz_boxed_1500_; size_t v_i_boxed_1501_; lean_object* v_res_1502_; 
v_sz_boxed_1500_ = lean_unbox_usize(v_sz_1496_);
lean_dec(v_sz_1496_);
v_i_boxed_1501_ = lean_unbox_usize(v_i_1497_);
lean_dec(v_i_1497_);
v_res_1502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(v_as_1495_, v_sz_boxed_1500_, v_i_boxed_1501_, v_b_1498_);
lean_dec_ref(v_as_1495_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(size_t v_sz_1503_, size_t v_i_1504_, lean_object* v_bs_1505_){
_start:
{
uint8_t v___x_1506_; 
v___x_1506_ = lean_usize_dec_lt(v_i_1504_, v_sz_1503_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = l_unsafeCast___redArg(v_bs_1505_);
lean_dec_ref(v_bs_1505_);
v___x_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
return v___x_1508_;
}
else
{
lean_object* v_v_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v_v_1509_ = lean_array_uget_borrowed(v_bs_1505_, v_i_1504_);
v___x_1510_ = l_unsafeCast___redArg(v_v_1509_);
v___x_1511_ = l_Lean_instFromJsonModuleArtifacts_fromJson(v___x_1510_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec_ref(v_bs_1505_);
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1511_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1511_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1517_; 
if (v_isShared_1515_ == 0)
{
v___x_1517_ = v___x_1514_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_a_1512_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1521_; lean_object* v_bs_x27_1522_; size_t v___x_1523_; size_t v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_a_1520_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1521_ = lean_unsigned_to_nat(0u);
v_bs_x27_1522_ = lean_array_uset(v_bs_1505_, v_i_1504_, v___x_1521_);
v___x_1523_ = ((size_t)1ULL);
v___x_1524_ = lean_usize_add(v_i_1504_, v___x_1523_);
v___x_1525_ = l_unsafeCast___redArg(v_a_1520_);
lean_dec(v_a_1520_);
v___x_1526_ = lean_array_uset(v_bs_x27_1522_, v_i_1504_, v___x_1525_);
v_i_1504_ = v___x_1524_;
v_bs_1505_ = v___x_1526_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1___boxed(lean_object* v_sz_1528_, lean_object* v_i_1529_, lean_object* v_bs_1530_){
_start:
{
size_t v_sz_boxed_1531_; size_t v_i_boxed_1532_; lean_object* v_res_1533_; 
v_sz_boxed_1531_ = lean_unbox_usize(v_sz_1528_);
lean_dec(v_sz_1528_);
v_i_boxed_1532_ = lean_unbox_usize(v_i_1529_);
lean_dec(v_i_1529_);
v_res_1533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(v_sz_boxed_1531_, v_i_boxed_1532_, v_bs_1530_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1(lean_object* v_x_1536_){
_start:
{
if (lean_obj_tag(v_x_1536_) == 4)
{
lean_object* v_elems_1537_; size_t v_sz_1538_; size_t v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v_elems_1537_ = lean_ctor_get(v_x_1536_, 0);
lean_inc_ref(v_elems_1537_);
lean_dec_ref_known(v_x_1536_, 1);
v_sz_1538_ = lean_array_size(v_elems_1537_);
v___x_1539_ = ((size_t)0ULL);
v___x_1540_ = l_unsafeCast___redArg(v_elems_1537_);
lean_dec_ref(v_elems_1537_);
v___x_1541_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(v_sz_1538_, v___x_1539_, v___x_1540_);
v___x_1542_ = l_unsafeCast___redArg(v___x_1541_);
lean_dec_ref(v___x_1541_);
return v___x_1542_;
}
else
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1543_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0));
v___x_1544_ = lean_unsigned_to_nat(80u);
v___x_1545_ = l_Lean_Json_pretty(v_x_1536_, v___x_1544_);
v___x_1546_ = lean_string_append(v___x_1543_, v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1));
v___x_1548_ = lean_string_append(v___x_1546_, v___x_1547_);
v___x_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
return v___x_1549_;
}
}
}
static uint32_t _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3(void){
_start:
{
lean_object* v___x_1553_; uint32_t v___x_1554_; 
v___x_1553_ = lean_box(0);
v___x_1554_ = lean_internal_get_hardware_concurrency(v___x_1553_);
return v___x_1554_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4(void){
_start:
{
uint32_t v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = lean_uint32_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3);
v___x_1556_ = lean_uint32_to_nat(v___x_1555_);
return v___x_1556_;
}
}
static uint8_t _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1558_ = lean_unsigned_to_nat(4u);
v___x_1559_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4);
v___x_1560_ = lean_nat_dec_le(v___x_1559_, v___x_1558_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(lean_object* v_fname_1561_){
_start:
{
lean_object* v___x_1563_; lean_object* v_depsFile_1564_; lean_object* v___x_1565_; 
v___x_1563_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0));
lean_inc_ref(v_fname_1561_);
v_depsFile_1564_ = l_System_FilePath_addExtension(v_fname_1561_, v___x_1563_);
v___x_1565_ = l_IO_FS_readFile(v_depsFile_1564_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1652_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1568_ = v___x_1565_;
v_isShared_1569_ = v_isSharedCheck_1652_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1565_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1652_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v_a_1571_; lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Json_parse(v_a_1566_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; 
lean_dec_ref(v_fname_1561_);
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v_a_1571_ = v_a_1582_;
goto v___jp_1570_;
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1584_; 
v_a_1583_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1584_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1(v_a_1583_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; 
lean_dec_ref(v_fname_1561_);
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
v_a_1571_ = v_a_1585_;
goto v___jp_1570_;
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___y_1590_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1641_; uint8_t v___x_1651_; 
lean_del_object(v___x_1568_);
lean_dec_ref(v_depsFile_1564_);
v_a_1586_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1584_, 1);
v___x_1587_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4);
v___x_1588_ = lean_unsigned_to_nat(4u);
v___x_1651_ = lean_uint8_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6);
if (v___x_1651_ == 0)
{
v___y_1641_ = v___x_1588_;
goto v___jp_1640_;
}
else
{
v___y_1641_ = v___x_1587_;
goto v___jp_1640_;
}
v___jp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = lean_mk_empty_array_with_capacity(v___y_1590_);
v___x_1592_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_1586_);
lean_inc(v___y_1590_);
v___x_1593_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(v___y_1590_, v_a_1586_, v___y_1590_, v___x_1592_, v___x_1591_);
lean_dec(v___y_1590_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; size_t v_sz_1598_; size_t v___x_1599_; lean_object* v___x_1600_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___x_1595_ = lean_array_get_size(v_a_1586_);
lean_dec(v_a_1586_);
v___x_1596_ = lean_nat_mul(v___x_1595_, v___x_1588_);
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1596_);
lean_dec(v___x_1596_);
v_sz_1598_ = lean_array_size(v_a_1594_);
v___x_1599_ = ((size_t)0ULL);
v___x_1600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(v_a_1594_, v_sz_1598_, v___x_1599_, v___x_1597_);
lean_dec(v_a_1594_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; lean_object* v___x_1602_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v___x_1602_ = lean_compacted_region_read(v_fname_1561_, v_a_1601_);
lean_dec(v_a_1601_);
lean_dec_ref(v_fname_1561_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1611_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1605_ = v___x_1602_;
v_isShared_1606_ = v_isSharedCheck_1611_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1602_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1611_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v_fst_1607_; lean_object* v___x_1609_; 
v_fst_1607_ = lean_ctor_get(v_a_1603_, 0);
lean_inc(v_fst_1607_);
lean_dec(v_a_1603_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 0, v_fst_1607_);
v___x_1609_ = v___x_1605_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_fst_1607_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
v_a_1612_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1602_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1602_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
lean_dec_ref(v_fname_1561_);
v_a_1620_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1600_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1600_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec(v_a_1586_);
lean_dec_ref(v_fname_1561_);
v_a_1628_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1593_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1593_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
v___jp_1636_:
{
uint8_t v___x_1639_; 
v___x_1639_ = lean_nat_dec_le(v___y_1637_, v___y_1638_);
if (v___x_1639_ == 0)
{
lean_dec(v___y_1638_);
v___y_1590_ = v___y_1637_;
goto v___jp_1589_;
}
else
{
lean_dec(v___y_1637_);
v___y_1590_ = v___y_1638_;
goto v___jp_1589_;
}
}
v___jp_1640_:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1642_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5));
v___x_1643_ = lean_io_getenv(v___x_1642_);
v___x_1644_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v___x_1643_) == 0)
{
v___y_1637_ = v___x_1644_;
v___y_1638_ = v___y_1641_;
goto v___jp_1636_;
}
else
{
lean_object* v_val_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v_val_1645_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_val_1645_);
lean_dec_ref_known(v___x_1643_, 1);
v___x_1646_ = lean_unsigned_to_nat(0u);
v___x_1647_ = lean_string_utf8_byte_size(v_val_1645_);
v___x_1648_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1648_, 0, v_val_1645_);
lean_ctor_set(v___x_1648_, 1, v___x_1646_);
lean_ctor_set(v___x_1648_, 2, v___x_1647_);
v___x_1649_ = l_String_Slice_toNat_x3f(v___x_1648_);
lean_dec_ref_known(v___x_1648_, 3);
if (lean_obj_tag(v___x_1649_) == 0)
{
v___y_1637_ = v___x_1644_;
v___y_1638_ = v___y_1641_;
goto v___jp_1636_;
}
else
{
lean_object* v_val_1650_; 
lean_dec(v___y_1641_);
v_val_1650_ = lean_ctor_get(v___x_1649_, 0);
lean_inc(v_val_1650_);
lean_dec_ref_known(v___x_1649_, 1);
v___y_1637_ = v___x_1644_;
v___y_1638_ = v_val_1650_;
goto v___jp_1636_;
}
}
}
}
}
v___jp_1570_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1579_; 
v___x_1572_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1));
v___x_1573_ = lean_string_append(v___x_1572_, v_depsFile_1564_);
lean_dec_ref(v_depsFile_1564_);
v___x_1574_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2));
v___x_1575_ = lean_string_append(v___x_1573_, v___x_1574_);
v___x_1576_ = lean_string_append(v___x_1575_, v_a_1571_);
lean_dec_ref(v_a_1571_);
v___x_1577_ = lean_mk_io_user_error(v___x_1576_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set_tag(v___x_1568_, 1);
lean_ctor_set(v___x_1568_, 0, v___x_1577_);
v___x_1579_ = v___x_1568_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
else
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec_ref(v_depsFile_1564_);
lean_dec_ref(v_fname_1561_);
v_a_1653_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1565_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1565_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___boxed(lean_object* v_fname_1661_, lean_object* v_a_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(v_fname_1661_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3(lean_object* v_a_1664_, lean_object* v___y_1665_, lean_object* v_inst_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(v_a_1664_, v___y_1665_, v_a_1667_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___boxed(lean_object* v_a_1670_, lean_object* v___y_1671_, lean_object* v_inst_1672_, lean_object* v_a_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3(v_a_1670_, v___y_1671_, v_inst_1672_, v_a_1673_);
lean_dec(v___y_1671_);
lean_dec_ref(v_a_1670_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4(lean_object* v_upperBound_1676_, lean_object* v_a_1677_, lean_object* v___y_1678_, lean_object* v_inst_1679_, lean_object* v_R_1680_, lean_object* v_a_1681_, lean_object* v_b_1682_, lean_object* v_c_1683_){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(v_upperBound_1676_, v_a_1677_, v___y_1678_, v_a_1681_, v_b_1682_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___boxed(lean_object* v_upperBound_1686_, lean_object* v_a_1687_, lean_object* v___y_1688_, lean_object* v_inst_1689_, lean_object* v_R_1690_, lean_object* v_a_1691_, lean_object* v_b_1692_, lean_object* v_c_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4(v_upperBound_1686_, v_a_1687_, v___y_1688_, v_inst_1689_, v_R_1690_, v_a_1691_, v_b_1692_, v_c_1693_);
lean_dec(v_upperBound_1686_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(lean_object* v_as_1696_, size_t v_sz_1697_, size_t v_i_1698_, lean_object* v_b_1699_){
_start:
{
uint8_t v___x_1701_; 
v___x_1701_ = lean_usize_dec_lt(v_i_1698_, v_sz_1697_);
if (v___x_1701_ == 0)
{
return v_b_1699_;
}
else
{
lean_object* v_a_1702_; lean_object* v_cancelTk_x3f_1703_; lean_object* v___x_1704_; 
v_a_1702_ = lean_array_uget_borrowed(v_as_1696_, v_i_1698_);
v_cancelTk_x3f_1703_ = lean_ctor_get(v_a_1702_, 2);
v___x_1704_ = lean_box(0);
if (lean_obj_tag(v_cancelTk_x3f_1703_) == 1)
{
lean_object* v_val_1711_; lean_object* v___x_1712_; 
v_val_1711_ = lean_ctor_get(v_cancelTk_x3f_1703_, 0);
v___x_1712_ = l_IO_CancelToken_set(v_val_1711_);
goto v___jp_1705_;
}
else
{
goto v___jp_1705_;
}
v___jp_1705_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; size_t v___x_1708_; size_t v___x_1709_; 
lean_inc(v_a_1702_);
v___x_1706_ = l_Lean_Language_SnapshotTask_get___redArg(v_a_1702_);
v___x_1707_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(v___x_1706_);
lean_dec(v___x_1706_);
v___x_1708_ = ((size_t)1ULL);
v___x_1709_ = lean_usize_add(v_i_1698_, v___x_1708_);
v_i_1698_ = v___x_1709_;
v_b_1699_ = v___x_1704_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(lean_object* v_s_1713_){
_start:
{
lean_object* v_children_1715_; lean_object* v___x_1716_; size_t v_sz_1717_; size_t v___x_1718_; lean_object* v___x_1719_; 
v_children_1715_ = lean_ctor_get(v_s_1713_, 1);
v___x_1716_ = lean_box(0);
v_sz_1717_ = lean_array_size(v_children_1715_);
v___x_1718_ = ((size_t)0ULL);
v___x_1719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(v_children_1715_, v_sz_1717_, v___x_1718_, v___x_1716_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave___boxed(lean_object* v_s_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(v_s_1720_);
lean_dec_ref(v_s_1720_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0___boxed(lean_object* v_as_1723_, lean_object* v_sz_1724_, lean_object* v_i_1725_, lean_object* v_b_1726_, lean_object* v___y_1727_){
_start:
{
size_t v_sz_boxed_1728_; size_t v_i_boxed_1729_; lean_object* v_res_1730_; 
v_sz_boxed_1728_ = lean_unbox_usize(v_sz_1724_);
lean_dec(v_sz_1724_);
v_i_boxed_1729_ = lean_unbox_usize(v_i_1725_);
lean_dec(v_i_1725_);
v_res_1730_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(v_as_1723_, v_sz_boxed_1728_, v_i_boxed_1729_, v_b_1726_);
lean_dec_ref(v_as_1723_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_setMainModule(lean_object* v_snap_1731_, lean_object* v_m_1732_){
_start:
{
lean_object* v_result_x3f_1733_; 
v_result_x3f_1733_ = lean_ctor_get(v_snap_1731_, 4);
lean_inc(v_result_x3f_1733_);
if (lean_obj_tag(v_result_x3f_1733_) == 1)
{
lean_object* v_val_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1834_; 
v_val_1734_ = lean_ctor_get(v_result_x3f_1733_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_result_x3f_1733_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1736_ = v_result_x3f_1733_;
v_isShared_1737_ = v_isSharedCheck_1834_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_val_1734_);
lean_dec(v_result_x3f_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1834_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v_toSnapshot_1738_; lean_object* v_metaSnap_1739_; lean_object* v_ictx_1740_; lean_object* v_stx_1741_; lean_object* v_parserState_1742_; lean_object* v_processedSnap_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1833_; 
v_toSnapshot_1738_ = lean_ctor_get(v_snap_1731_, 0);
v_metaSnap_1739_ = lean_ctor_get(v_snap_1731_, 1);
v_ictx_1740_ = lean_ctor_get(v_snap_1731_, 2);
v_stx_1741_ = lean_ctor_get(v_snap_1731_, 3);
v_parserState_1742_ = lean_ctor_get(v_val_1734_, 0);
v_processedSnap_1743_ = lean_ctor_get(v_val_1734_, 1);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_val_1734_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1745_ = v_val_1734_;
v_isShared_1746_ = v_isSharedCheck_1833_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_processedSnap_1743_);
lean_inc(v_parserState_1742_);
lean_dec(v_val_1734_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1833_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v_processed_1747_; lean_object* v_result_x3f_1748_; 
v_processed_1747_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_1743_);
v_result_x3f_1748_ = lean_ctor_get(v_processed_1747_, 2);
lean_inc(v_result_x3f_1748_);
if (lean_obj_tag(v_result_x3f_1748_) == 1)
{
lean_object* v_val_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1832_; 
v_val_1749_ = lean_ctor_get(v_result_x3f_1748_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_result_x3f_1748_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1751_ = v_result_x3f_1748_;
v_isShared_1752_ = v_isSharedCheck_1832_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_val_1749_);
lean_dec(v_result_x3f_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1832_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v_cmdState_1753_; lean_object* v_toSnapshot_1754_; lean_object* v_metaSnap_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1830_; 
v_cmdState_1753_ = lean_ctor_get(v_val_1749_, 0);
lean_inc_ref(v_cmdState_1753_);
v_toSnapshot_1754_ = lean_ctor_get(v_processed_1747_, 0);
v_metaSnap_1755_ = lean_ctor_get(v_processed_1747_, 1);
v_isSharedCheck_1830_ = !lean_is_exclusive(v_processed_1747_);
if (v_isSharedCheck_1830_ == 0)
{
lean_object* v_unused_1831_; 
v_unused_1831_ = lean_ctor_get(v_processed_1747_, 2);
lean_dec(v_unused_1831_);
v___x_1757_ = v_processed_1747_;
v_isShared_1758_ = v_isSharedCheck_1830_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_metaSnap_1755_);
lean_inc(v_toSnapshot_1754_);
lean_dec(v_processed_1747_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1830_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v_firstCmdSnap_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1828_; 
v_firstCmdSnap_1759_ = lean_ctor_get(v_val_1749_, 1);
v_isSharedCheck_1828_ = !lean_is_exclusive(v_val_1749_);
if (v_isSharedCheck_1828_ == 0)
{
lean_object* v_unused_1829_; 
v_unused_1829_ = lean_ctor_get(v_val_1749_, 0);
lean_dec(v_unused_1829_);
v___x_1761_ = v_val_1749_;
v_isShared_1762_ = v_isSharedCheck_1828_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_firstCmdSnap_1759_);
lean_dec(v_val_1749_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1828_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v_env_1763_; lean_object* v_messages_1764_; lean_object* v_scopes_1765_; lean_object* v_usedQuotCtxts_1766_; lean_object* v_nextMacroScope_1767_; lean_object* v_maxRecDepth_1768_; lean_object* v_ngen_1769_; lean_object* v_auxDeclNGen_1770_; lean_object* v_infoState_1771_; lean_object* v_traceState_1772_; lean_object* v_snapshotTasks_1773_; lean_object* v_prevLinterStates_1774_; lean_object* v_codeQualityEntryTasks_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1827_; 
v_env_1763_ = lean_ctor_get(v_cmdState_1753_, 0);
v_messages_1764_ = lean_ctor_get(v_cmdState_1753_, 1);
v_scopes_1765_ = lean_ctor_get(v_cmdState_1753_, 2);
v_usedQuotCtxts_1766_ = lean_ctor_get(v_cmdState_1753_, 3);
v_nextMacroScope_1767_ = lean_ctor_get(v_cmdState_1753_, 4);
v_maxRecDepth_1768_ = lean_ctor_get(v_cmdState_1753_, 5);
v_ngen_1769_ = lean_ctor_get(v_cmdState_1753_, 6);
v_auxDeclNGen_1770_ = lean_ctor_get(v_cmdState_1753_, 7);
v_infoState_1771_ = lean_ctor_get(v_cmdState_1753_, 8);
v_traceState_1772_ = lean_ctor_get(v_cmdState_1753_, 9);
v_snapshotTasks_1773_ = lean_ctor_get(v_cmdState_1753_, 10);
v_prevLinterStates_1774_ = lean_ctor_get(v_cmdState_1753_, 11);
v_codeQualityEntryTasks_1775_ = lean_ctor_get(v_cmdState_1753_, 12);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_cmdState_1753_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1777_ = v_cmdState_1753_;
v_isShared_1778_ = v_isSharedCheck_1827_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1775_);
lean_inc(v_prevLinterStates_1774_);
lean_inc(v_snapshotTasks_1773_);
lean_inc(v_traceState_1772_);
lean_inc(v_infoState_1771_);
lean_inc(v_auxDeclNGen_1770_);
lean_inc(v_ngen_1769_);
lean_inc(v_maxRecDepth_1768_);
lean_inc(v_nextMacroScope_1767_);
lean_inc(v_usedQuotCtxts_1766_);
lean_inc(v_scopes_1765_);
lean_inc(v_messages_1764_);
lean_inc(v_env_1763_);
lean_dec(v_cmdState_1753_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1827_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1779_; lean_object* v_mainModule_1780_; uint8_t v___x_1781_; 
v___x_1779_ = l_Lean_Environment_header(v_env_1763_);
v_mainModule_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_mainModule_1780_);
lean_dec_ref(v___x_1779_);
v___x_1781_ = lean_name_eq(v_mainModule_1780_, v_m_1732_);
lean_dec(v_mainModule_1780_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1821_; 
lean_inc(v_stx_1741_);
lean_inc_ref(v_ictx_1740_);
lean_inc_ref(v_metaSnap_1739_);
lean_inc_ref(v_toSnapshot_1738_);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_snap_1731_);
if (v_isSharedCheck_1821_ == 0)
{
lean_object* v_unused_1822_; lean_object* v_unused_1823_; lean_object* v_unused_1824_; lean_object* v_unused_1825_; lean_object* v_unused_1826_; 
v_unused_1822_ = lean_ctor_get(v_snap_1731_, 4);
lean_dec(v_unused_1822_);
v_unused_1823_ = lean_ctor_get(v_snap_1731_, 3);
lean_dec(v_unused_1823_);
v_unused_1824_ = lean_ctor_get(v_snap_1731_, 2);
lean_dec(v_unused_1824_);
v_unused_1825_ = lean_ctor_get(v_snap_1731_, 1);
lean_dec(v_unused_1825_);
v_unused_1826_ = lean_ctor_get(v_snap_1731_, 0);
lean_dec(v_unused_1826_);
v___x_1783_ = v_snap_1731_;
v_isShared_1784_ = v_isSharedCheck_1821_;
goto v_resetjp_1782_;
}
else
{
lean_dec(v_snap_1731_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1821_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v_idx_1785_; lean_object* v_parentIdxs_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1819_; 
v_idx_1785_ = lean_ctor_get(v_auxDeclNGen_1770_, 1);
v_parentIdxs_1786_ = lean_ctor_get(v_auxDeclNGen_1770_, 2);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_auxDeclNGen_1770_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; 
v_unused_1820_ = lean_ctor_get(v_auxDeclNGen_1770_, 0);
lean_dec(v_unused_1820_);
v___x_1788_ = v_auxDeclNGen_1770_;
v_isShared_1789_ = v_isSharedCheck_1819_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_parentIdxs_1786_);
lean_inc(v_idx_1785_);
lean_dec(v_auxDeclNGen_1770_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1819_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v_newEnv_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1794_; 
v_newEnv_1790_ = l_Lean_Environment_setMainModule(v_env_1763_, v_m_1732_);
v___x_1791_ = lean_obj_once(&l_Lean_Elab_Frontend_processCommand___closed__1, &l_Lean_Elab_Frontend_processCommand___closed__1_once, _init_l_Lean_Elab_Frontend_processCommand___closed__1);
v___x_1792_ = l_Lean_mkPrivateName(v_newEnv_1790_, v___x_1791_);
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v___x_1792_);
v___x_1794_ = v___x_1788_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1792_);
lean_ctor_set(v_reuseFailAlloc_1818_, 1, v_idx_1785_);
lean_ctor_set(v_reuseFailAlloc_1818_, 2, v_parentIdxs_1786_);
v___x_1794_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v_newCmdState_1796_; 
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 7, v___x_1794_);
lean_ctor_set(v___x_1777_, 0, v_newEnv_1790_);
v_newCmdState_1796_ = v___x_1777_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_newEnv_1790_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v_messages_1764_);
lean_ctor_set(v_reuseFailAlloc_1817_, 2, v_scopes_1765_);
lean_ctor_set(v_reuseFailAlloc_1817_, 3, v_usedQuotCtxts_1766_);
lean_ctor_set(v_reuseFailAlloc_1817_, 4, v_nextMacroScope_1767_);
lean_ctor_set(v_reuseFailAlloc_1817_, 5, v_maxRecDepth_1768_);
lean_ctor_set(v_reuseFailAlloc_1817_, 6, v_ngen_1769_);
lean_ctor_set(v_reuseFailAlloc_1817_, 7, v___x_1794_);
lean_ctor_set(v_reuseFailAlloc_1817_, 8, v_infoState_1771_);
lean_ctor_set(v_reuseFailAlloc_1817_, 9, v_traceState_1772_);
lean_ctor_set(v_reuseFailAlloc_1817_, 10, v_snapshotTasks_1773_);
lean_ctor_set(v_reuseFailAlloc_1817_, 11, v_prevLinterStates_1774_);
lean_ctor_set(v_reuseFailAlloc_1817_, 12, v_codeQualityEntryTasks_1775_);
v_newCmdState_1796_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1798_; 
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 0, v_newCmdState_1796_);
v___x_1798_ = v___x_1761_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_newCmdState_1796_);
lean_ctor_set(v_reuseFailAlloc_1816_, 1, v_firstCmdSnap_1759_);
v___x_1798_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1800_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 0, v___x_1798_);
v___x_1800_ = v___x_1751_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v_newProcessed_1802_; 
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 2, v___x_1800_);
v_newProcessed_1802_ = v___x_1757_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_toSnapshot_1754_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_metaSnap_1755_);
lean_ctor_set(v_reuseFailAlloc_1814_, 2, v___x_1800_);
v_newProcessed_1802_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1806_; 
v___x_1803_ = lean_box(0);
v___x_1804_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1803_, v_newProcessed_1802_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 1, v___x_1804_);
v___x_1806_ = v___x_1745_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_parserState_1742_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v___x_1804_);
v___x_1806_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
lean_object* v___x_1808_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 0, v___x_1806_);
v___x_1808_ = v___x_1736_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1810_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 4, v___x_1808_);
v___x_1810_ = v___x_1783_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_toSnapshot_1738_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v_metaSnap_1739_);
lean_ctor_set(v_reuseFailAlloc_1811_, 2, v_ictx_1740_);
lean_ctor_set(v_reuseFailAlloc_1811_, 3, v_stx_1741_);
lean_ctor_set(v_reuseFailAlloc_1811_, 4, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
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
lean_del_object(v___x_1777_);
lean_dec_ref(v_codeQualityEntryTasks_1775_);
lean_dec(v_prevLinterStates_1774_);
lean_dec_ref(v_snapshotTasks_1773_);
lean_dec_ref(v_traceState_1772_);
lean_dec_ref(v_infoState_1771_);
lean_dec_ref(v_auxDeclNGen_1770_);
lean_dec_ref(v_ngen_1769_);
lean_dec(v_maxRecDepth_1768_);
lean_dec(v_nextMacroScope_1767_);
lean_dec(v_usedQuotCtxts_1766_);
lean_dec(v_scopes_1765_);
lean_dec_ref(v_messages_1764_);
lean_dec_ref(v_env_1763_);
lean_del_object(v___x_1761_);
lean_dec_ref(v_firstCmdSnap_1759_);
lean_del_object(v___x_1757_);
lean_dec_ref(v_metaSnap_1755_);
lean_dec_ref(v_toSnapshot_1754_);
lean_del_object(v___x_1751_);
lean_del_object(v___x_1745_);
lean_dec_ref(v_parserState_1742_);
lean_del_object(v___x_1736_);
lean_dec(v_m_1732_);
return v_snap_1731_;
}
}
}
}
}
}
else
{
lean_dec(v_result_x3f_1748_);
lean_dec(v_processed_1747_);
lean_del_object(v___x_1745_);
lean_dec_ref(v_parserState_1742_);
lean_del_object(v___x_1736_);
lean_dec(v_m_1732_);
return v_snap_1731_;
}
}
}
}
else
{
lean_dec(v_result_x3f_1733_);
lean_dec(v_m_1732_);
return v_snap_1731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1(lean_object* v_incrFile_1835_){
_start:
{
lean_object* v___x_1837_; 
v___x_1837_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(v_incrFile_1835_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1___boxed(lean_object* v_incrFile_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1(v_incrFile_1838_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4(lean_object* v_opts_1841_, lean_object* v_incr_1842_, lean_object* v_res_1843_){
_start:
{
lean_object* v_cmdState_1845_; lean_object* v_env_1846_; lean_object* v_initModIdxs_1847_; lean_object* v___x_1848_; 
v_cmdState_1845_ = lean_ctor_get(v_res_1843_, 0);
lean_inc_ref(v_cmdState_1845_);
lean_dec_ref(v_res_1843_);
v_env_1846_ = lean_ctor_get(v_cmdState_1845_, 0);
lean_inc_ref(v_env_1846_);
lean_dec_ref(v_cmdState_1845_);
v_initModIdxs_1847_ = lean_ctor_get(v_incr_1842_, 1);
v___x_1848_ = l_Lean_runInitAttrsForModules(v_env_1846_, v_initModIdxs_1847_, v_opts_1841_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4___boxed(lean_object* v_opts_1849_, lean_object* v_incr_1850_, lean_object* v_res_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4(v_opts_1849_, v_incr_1850_, v_res_1851_);
lean_dec_ref(v_incr_1850_);
lean_dec_ref(v_opts_1849_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7(){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = lean_enable_initializer_execution();
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7___boxed(lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7();
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12(lean_object* v_env_1861_, lean_object* v_incrFile_1862_, lean_object* v_toSave_1863_){
_start:
{
lean_object* v___x_1865_; lean_object* v_regions_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; uint8_t v___x_1869_; lean_object* v___x_1870_; 
v___x_1865_ = l_Lean_Environment_header(v_env_1861_);
v_regions_1866_ = lean_ctor_get(v___x_1865_, 2);
lean_inc_ref(v_regions_1866_);
lean_dec_ref(v___x_1865_);
v___x_1867_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1));
v___x_1868_ = lean_box(0);
v___x_1869_ = 1;
v___x_1870_ = lean_compacted_region_save(v_incrFile_1862_, v___x_1867_, v_toSave_1863_, v_regions_1866_, v___x_1868_, v___x_1869_);
lean_dec_ref(v_regions_1866_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___boxed(lean_object* v_env_1871_, lean_object* v_incrFile_1872_, lean_object* v_toSave_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12(v_env_1871_, v_incrFile_1872_, v_toSave_1873_);
lean_dec_ref(v_toSave_1873_);
lean_dec_ref(v_incrFile_1872_);
lean_dec_ref(v_env_1871_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(lean_object* v_opts_1876_, lean_object* v_opt_1877_){
_start:
{
lean_object* v_name_1878_; lean_object* v_map_1879_; lean_object* v___x_1880_; 
v_name_1878_ = lean_ctor_get(v_opt_1877_, 0);
v_map_1879_ = lean_ctor_get(v_opts_1876_, 0);
v___x_1880_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1879_, v_name_1878_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_box(0);
return v___x_1881_;
}
else
{
lean_object* v_val_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1891_; 
v_val_1882_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1884_ = v___x_1880_;
v_isShared_1885_ = v_isSharedCheck_1891_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_val_1882_);
lean_dec(v___x_1880_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1891_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
if (lean_obj_tag(v_val_1882_) == 0)
{
lean_object* v_v_1886_; lean_object* v___x_1888_; 
v_v_1886_ = lean_ctor_get(v_val_1882_, 0);
lean_inc_ref(v_v_1886_);
lean_dec_ref_known(v_val_1882_, 1);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v_v_1886_);
v___x_1888_ = v___x_1884_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_v_1886_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
else
{
lean_object* v___x_1890_; 
lean_del_object(v___x_1884_);
lean_dec(v_val_1882_);
v___x_1890_ = lean_box(0);
return v___x_1890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4___boxed(lean_object* v_opts_1892_, lean_object* v_opt_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(v_opts_1892_, v_opt_1893_);
lean_dec_ref(v_opt_1893_);
lean_dec_ref(v_opts_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(lean_object* v_opts_1895_, lean_object* v_opt_1896_){
_start:
{
lean_object* v_name_1897_; lean_object* v_defValue_1898_; lean_object* v_map_1899_; lean_object* v___x_1900_; 
v_name_1897_ = lean_ctor_get(v_opt_1896_, 0);
v_defValue_1898_ = lean_ctor_get(v_opt_1896_, 1);
v_map_1899_ = lean_ctor_get(v_opts_1895_, 0);
v___x_1900_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1899_, v_name_1897_);
if (lean_obj_tag(v___x_1900_) == 0)
{
uint8_t v___x_1901_; 
v___x_1901_ = lean_unbox(v_defValue_1898_);
return v___x_1901_;
}
else
{
lean_object* v_val_1902_; 
v_val_1902_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_val_1902_);
lean_dec_ref_known(v___x_1900_, 1);
if (lean_obj_tag(v_val_1902_) == 1)
{
uint8_t v_v_1903_; 
v_v_1903_ = lean_ctor_get_uint8(v_val_1902_, 0);
lean_dec_ref_known(v_val_1902_, 0);
return v_v_1903_;
}
else
{
uint8_t v___x_1904_; 
lean_dec(v_val_1902_);
v___x_1904_ = lean_unbox(v_defValue_1898_);
return v___x_1904_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6___boxed(lean_object* v_opts_1905_, lean_object* v_opt_1906_){
_start:
{
uint8_t v_res_1907_; lean_object* v_r_1908_; 
v_res_1907_ = l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(v_opts_1905_, v_opt_1906_);
lean_dec_ref(v_opt_1906_);
lean_dec_ref(v_opts_1905_);
v_r_1908_ = lean_box(v_res_1907_);
return v_r_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__0(lean_object* v_x_1909_, lean_object* v_x_1910_, lean_object* v_hOpt_1911_){
_start:
{
lean_inc_ref(v_hOpt_1911_);
return v_hOpt_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__0___boxed(lean_object* v_x_1912_, lean_object* v_x_1913_, lean_object* v_hOpt_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Lean_Elab_runFrontend___lam__0(v_x_1912_, v_x_1913_, v_hOpt_1914_);
lean_dec_ref(v_hOpt_1914_);
lean_dec_ref(v_x_1913_);
lean_dec(v_x_1912_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8_spec__11(size_t v_sz_1916_, size_t v_i_1917_, lean_object* v_bs_1918_){
_start:
{
uint8_t v___x_1919_; 
v___x_1919_ = lean_usize_dec_lt(v_i_1917_, v_sz_1916_);
if (v___x_1919_ == 0)
{
lean_object* v___x_1920_; 
v___x_1920_ = l_unsafeCast___redArg(v_bs_1918_);
lean_dec_ref(v_bs_1918_);
return v___x_1920_;
}
else
{
lean_object* v_v_1921_; lean_object* v___x_1922_; lean_object* v_bs_x27_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; size_t v___x_1926_; size_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_v_1921_ = lean_array_uget(v_bs_1918_, v_i_1917_);
v___x_1922_ = lean_unsigned_to_nat(0u);
v_bs_x27_1923_ = lean_array_uset(v_bs_1918_, v_i_1917_, v___x_1922_);
v___x_1924_ = l_unsafeCast___redArg(v_v_1921_);
lean_dec(v_v_1921_);
v___x_1925_ = l_Lean_instToJsonModuleArtifacts_toJson(v___x_1924_);
v___x_1926_ = ((size_t)1ULL);
v___x_1927_ = lean_usize_add(v_i_1917_, v___x_1926_);
v___x_1928_ = l_unsafeCast___redArg(v___x_1925_);
lean_dec(v___x_1925_);
v___x_1929_ = lean_array_uset(v_bs_x27_1923_, v_i_1917_, v___x_1928_);
v_i_1917_ = v___x_1927_;
v_bs_1918_ = v___x_1929_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8_spec__11___boxed(lean_object* v_sz_1931_, lean_object* v_i_1932_, lean_object* v_bs_1933_){
_start:
{
size_t v_sz_boxed_1934_; size_t v_i_boxed_1935_; lean_object* v_res_1936_; 
v_sz_boxed_1934_ = lean_unbox_usize(v_sz_1931_);
lean_dec(v_sz_1931_);
v_i_boxed_1935_ = lean_unbox_usize(v_i_1932_);
lean_dec(v_i_1932_);
v_res_1936_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8_spec__11(v_sz_boxed_1934_, v_i_boxed_1935_, v_bs_1933_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8(lean_object* v_a_1937_){
_start:
{
size_t v_sz_1938_; size_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v_sz_1938_ = lean_array_size(v_a_1937_);
v___x_1939_ = ((size_t)0ULL);
v___x_1940_ = l_unsafeCast___redArg(v_a_1937_);
v___x_1941_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8_spec__11(v_sz_1938_, v___x_1939_, v___x_1940_);
v___x_1942_ = l_unsafeCast___redArg(v___x_1941_);
lean_dec_ref(v___x_1941_);
v___x_1943_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8___boxed(lean_object* v_a_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8(v_a_1944_);
lean_dec_ref(v_a_1944_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1(lean_object* v_a_1946_, uint8_t v___x_1947_, lean_object* v_incrFile_1948_, lean_object* v_snapToSave_1949_){
_start:
{
lean_object* v___x_1951_; lean_object* v_regions_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1951_ = l_Lean_Environment_header(v_a_1946_);
v_regions_1952_ = lean_ctor_get(v___x_1951_, 2);
lean_inc_ref(v_regions_1952_);
lean_dec_ref(v___x_1951_);
v___x_1953_ = l_Lean_getRegularInitAttrModIdxs(v_a_1946_);
v___x_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1954_, 0, v_snapToSave_1949_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
v___x_1955_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1));
v___x_1956_ = lean_box(0);
v___x_1957_ = lean_compacted_region_save(v_incrFile_1948_, v___x_1955_, v___x_1954_, v_regions_1952_, v___x_1956_, v___x_1947_);
lean_dec_ref_known(v___x_1954_, 2);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(v_regions_1952_);
lean_dec_ref(v_regions_1952_);
v___x_1960_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0));
v___x_1961_ = l_System_FilePath_addExtension(v_incrFile_1948_, v___x_1960_);
v___x_1962_ = l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__8(v___x_1959_);
lean_dec_ref(v___x_1959_);
v___x_1963_ = l_Lean_Json_compress(v___x_1962_);
v___x_1964_ = l_IO_FS_writeFile(v___x_1961_, v___x_1963_);
lean_dec_ref(v___x_1963_);
lean_dec_ref(v___x_1961_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1972_; 
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1972_ == 0)
{
lean_object* v_unused_1973_; 
v_unused_1973_ = lean_ctor_get(v___x_1964_, 0);
lean_dec(v_unused_1973_);
v___x_1966_ = v___x_1964_;
v_isShared_1967_ = v_isSharedCheck_1972_;
goto v_resetjp_1965_;
}
else
{
lean_dec(v___x_1964_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1972_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1968_ = lean_runtime_forget(v_a_1958_);
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 0, v___x_1968_);
v___x_1970_ = v___x_1966_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
else
{
lean_dec(v_a_1958_);
return v___x_1964_;
}
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
lean_dec_ref(v_regions_1952_);
lean_dec_ref(v_incrFile_1948_);
v_a_1974_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1957_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1957_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1974_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1___boxed(lean_object* v_a_1982_, lean_object* v___x_1983_, lean_object* v_incrFile_1984_, lean_object* v_snapToSave_1985_, lean_object* v___y_1986_){
_start:
{
uint8_t v___x_5881__boxed_1987_; lean_object* v_res_1988_; 
v___x_5881__boxed_1987_ = lean_unbox(v___x_1983_);
v_res_1988_ = l_Lean_Elab_runFrontend___lam__1(v_a_1982_, v___x_5881__boxed_1987_, v_incrFile_1984_, v_snapToSave_1985_);
lean_dec_ref(v_a_1982_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2(lean_object* v_fileMap_1989_, lean_object* v_a_1990_, lean_object* v___x_1991_, lean_object* v_opts_1992_, lean_object* v_val_1993_, uint8_t v___x_1994_, uint8_t v_a_1995_){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; 
v___x_1997_ = l_Lean_Linter_recordLints(v_fileMap_1989_, v_a_1990_, v___x_1991_);
v___x_1998_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_1999_ = l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(v_opts_1992_, v___x_1998_);
if (v___x_1999_ == 0)
{
lean_object* v___x_2000_; 
v___x_2000_ = l_Lean_writeModule(v___x_1997_, v_val_1993_, v___x_1994_);
return v___x_2000_;
}
else
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_writeModule(v___x_1997_, v_val_1993_, v_a_1995_);
return v___x_2001_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2___boxed(lean_object* v_fileMap_2002_, lean_object* v_a_2003_, lean_object* v___x_2004_, lean_object* v_opts_2005_, lean_object* v_val_2006_, lean_object* v___x_2007_, lean_object* v_a_2008_, lean_object* v___y_2009_){
_start:
{
uint8_t v___x_5955__boxed_2010_; uint8_t v_a_5956__boxed_2011_; lean_object* v_res_2012_; 
v___x_5955__boxed_2010_ = lean_unbox(v___x_2007_);
v_a_5956__boxed_2011_ = lean_unbox(v_a_2008_);
v_res_2012_ = l_Lean_Elab_runFrontend___lam__2(v_fileMap_2002_, v_a_2003_, v___x_2004_, v_opts_2005_, v_val_2006_, v___x_5955__boxed_2010_, v_a_5956__boxed_2011_);
lean_dec_ref(v_opts_2005_);
lean_dec_ref(v___x_2004_);
lean_dec_ref(v_fileMap_2002_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(lean_object* v_as_2013_, size_t v_i_2014_, size_t v_stop_2015_, lean_object* v_b_2016_){
_start:
{
uint8_t v___x_2018_; 
v___x_2018_ = lean_usize_dec_eq(v_i_2014_, v_stop_2015_);
if (v___x_2018_ == 0)
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_array_uget_borrowed(v_as_2013_, v_i_2014_);
lean_inc(v___x_2019_);
v___x_2020_ = lean_load_dynlib(v___x_2019_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; size_t v___x_2022_; size_t v___x_2023_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2021_);
lean_dec_ref_known(v___x_2020_, 1);
v___x_2022_ = ((size_t)1ULL);
v___x_2023_ = lean_usize_add(v_i_2014_, v___x_2022_);
v_i_2014_ = v___x_2023_;
v_b_2016_ = v_a_2021_;
goto _start;
}
else
{
return v___x_2020_;
}
}
else
{
lean_object* v___x_2025_; 
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_b_2016_);
return v___x_2025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1___boxed(lean_object* v_as_2026_, lean_object* v_i_2027_, lean_object* v_stop_2028_, lean_object* v_b_2029_, lean_object* v___y_2030_){
_start:
{
size_t v_i_boxed_2031_; size_t v_stop_boxed_2032_; lean_object* v_res_2033_; 
v_i_boxed_2031_ = lean_unbox_usize(v_i_2027_);
lean_dec(v_i_2027_);
v_stop_boxed_2032_ = lean_unbox_usize(v_stop_2028_);
lean_dec(v_stop_2028_);
v_res_2033_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(v_as_2026_, v_i_boxed_2031_, v_stop_boxed_2032_, v_b_2029_);
lean_dec_ref(v_as_2026_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3(lean_object* v_setup_x3f_2034_, lean_object* v___f_2035_, lean_object* v___x_2036_, lean_object* v_plugins_2037_, uint32_t v_trustLevel_2038_, uint8_t v___x_2039_, lean_object* v_mainModuleName_2040_, lean_object* v_stx_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; uint8_t v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; 
if (lean_obj_tag(v_setup_x3f_2034_) == 1)
{
lean_object* v_val_2058_; lean_object* v_name_2059_; lean_object* v_package_x3f_2060_; uint8_t v_isModule_2061_; lean_object* v_imports_x3f_2062_; lean_object* v_importArts_2063_; lean_object* v_dynlibs_2064_; lean_object* v_plugins_2065_; lean_object* v_options_2066_; lean_object* v___y_2073_; lean_object* v___x_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; 
lean_dec(v_mainModuleName_2040_);
v_val_2058_ = lean_ctor_get(v_setup_x3f_2034_, 0);
lean_inc(v_val_2058_);
lean_dec_ref_known(v_setup_x3f_2034_, 1);
v_name_2059_ = lean_ctor_get(v_val_2058_, 0);
lean_inc(v_name_2059_);
v_package_x3f_2060_ = lean_ctor_get(v_val_2058_, 1);
lean_inc(v_package_x3f_2060_);
v_isModule_2061_ = lean_ctor_get_uint8(v_val_2058_, sizeof(void*)*7);
v_imports_x3f_2062_ = lean_ctor_get(v_val_2058_, 2);
lean_inc(v_imports_x3f_2062_);
v_importArts_2063_ = lean_ctor_get(v_val_2058_, 3);
lean_inc(v_importArts_2063_);
v_dynlibs_2064_ = lean_ctor_get(v_val_2058_, 4);
lean_inc_ref(v_dynlibs_2064_);
v_plugins_2065_ = lean_ctor_get(v_val_2058_, 5);
lean_inc_ref(v_plugins_2065_);
v_options_2066_ = lean_ctor_get(v_val_2058_, 6);
lean_inc(v_options_2066_);
lean_dec(v_val_2058_);
v___x_2082_ = lean_unsigned_to_nat(0u);
v___x_2083_ = lean_array_get_size(v_dynlibs_2064_);
v___x_2084_ = lean_nat_dec_lt(v___x_2082_, v___x_2083_);
if (v___x_2084_ == 0)
{
lean_dec_ref(v_dynlibs_2064_);
goto v___jp_2067_;
}
else
{
lean_object* v___x_2085_; uint8_t v___x_2086_; 
v___x_2085_ = lean_box(0);
v___x_2086_ = lean_nat_dec_le(v___x_2083_, v___x_2083_);
if (v___x_2086_ == 0)
{
if (v___x_2084_ == 0)
{
lean_dec_ref(v_dynlibs_2064_);
goto v___jp_2067_;
}
else
{
size_t v___x_2087_; size_t v___x_2088_; lean_object* v___x_2089_; 
v___x_2087_ = ((size_t)0ULL);
v___x_2088_ = lean_usize_of_nat(v___x_2083_);
v___x_2089_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(v_dynlibs_2064_, v___x_2087_, v___x_2088_, v___x_2085_);
lean_dec_ref(v_dynlibs_2064_);
v___y_2073_ = v___x_2089_;
goto v___jp_2072_;
}
}
else
{
size_t v___x_2090_; size_t v___x_2091_; lean_object* v___x_2092_; 
v___x_2090_ = ((size_t)0ULL);
v___x_2091_ = lean_usize_of_nat(v___x_2083_);
v___x_2092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(v_dynlibs_2064_, v___x_2090_, v___x_2091_, v___x_2085_);
lean_dec_ref(v_dynlibs_2064_);
v___y_2073_ = v___x_2092_;
goto v___jp_2072_;
}
}
v___jp_2067_:
{
uint8_t v___x_2068_; uint8_t v___x_2069_; 
v___x_2068_ = l_Lean_Elab_HeaderSyntax_isModule(v_stx_2041_);
v___x_2069_ = lean_strict_or(v_isModule_2061_, v___x_2068_);
if (lean_obj_tag(v_imports_x3f_2062_) == 0)
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_2041_, v___x_2039_);
v___y_2045_ = v_plugins_2065_;
v___y_2046_ = v_importArts_2063_;
v___y_2047_ = v_package_x3f_2060_;
v___y_2048_ = v_options_2066_;
v___y_2049_ = v___x_2069_;
v___y_2050_ = v_name_2059_;
v___y_2051_ = v___x_2070_;
goto v___jp_2044_;
}
else
{
lean_object* v_val_2071_; 
lean_dec(v_stx_2041_);
v_val_2071_ = lean_ctor_get(v_imports_x3f_2062_, 0);
lean_inc(v_val_2071_);
lean_dec_ref_known(v_imports_x3f_2062_, 1);
v___y_2045_ = v_plugins_2065_;
v___y_2046_ = v_importArts_2063_;
v___y_2047_ = v_package_x3f_2060_;
v___y_2048_ = v_options_2066_;
v___y_2049_ = v___x_2069_;
v___y_2050_ = v_name_2059_;
v___y_2051_ = v_val_2071_;
goto v___jp_2044_;
}
}
v___jp_2072_:
{
if (lean_obj_tag(v___y_2073_) == 0)
{
lean_dec_ref_known(v___y_2073_, 1);
goto v___jp_2067_;
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
lean_dec(v_options_2066_);
lean_dec_ref(v_plugins_2065_);
lean_dec(v_importArts_2063_);
lean_dec(v_imports_x3f_2062_);
lean_dec(v_package_x3f_2060_);
lean_dec(v_name_2059_);
lean_dec(v_stx_2041_);
lean_dec_ref(v_plugins_2037_);
lean_dec_ref(v___x_2036_);
lean_dec_ref(v___f_2035_);
v_a_2074_ = lean_ctor_get(v___y_2073_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___y_2073_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___y_2073_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___y_2073_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
else
{
lean_object* v___x_2093_; uint8_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
lean_dec_ref(v___f_2035_);
lean_dec(v_setup_x3f_2034_);
v___x_2093_ = lean_box(0);
v___x_2094_ = l_Lean_Elab_HeaderSyntax_isModule(v_stx_2041_);
v___x_2095_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_2041_, v___x_2039_);
v___x_2096_ = lean_box(1);
v___x_2097_ = lean_alloc_ctor(0, 6, 5);
lean_ctor_set(v___x_2097_, 0, v_mainModuleName_2040_);
lean_ctor_set(v___x_2097_, 1, v___x_2093_);
lean_ctor_set(v___x_2097_, 2, v___x_2095_);
lean_ctor_set(v___x_2097_, 3, v___x_2036_);
lean_ctor_set(v___x_2097_, 4, v___x_2096_);
lean_ctor_set(v___x_2097_, 5, v_plugins_2037_);
lean_ctor_set_uint8(v___x_2097_, sizeof(void*)*6 + 4, v___x_2094_);
lean_ctor_set_uint32(v___x_2097_, sizeof(void*)*6, v_trustLevel_2038_);
v___x_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
v___x_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
return v___x_2099_;
}
v___jp_2044_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2052_ = l_Lean_LeanOptions_toOptions(v___y_2048_);
v___x_2053_ = l_Lean_Options_mergeBy(v___f_2035_, v___x_2036_, v___x_2052_);
v___x_2054_ = l_Array_append___redArg(v_plugins_2037_, v___y_2045_);
lean_dec_ref(v___y_2045_);
v___x_2055_ = lean_alloc_ctor(0, 6, 5);
lean_ctor_set(v___x_2055_, 0, v___y_2050_);
lean_ctor_set(v___x_2055_, 1, v___y_2047_);
lean_ctor_set(v___x_2055_, 2, v___y_2051_);
lean_ctor_set(v___x_2055_, 3, v___x_2053_);
lean_ctor_set(v___x_2055_, 4, v___y_2046_);
lean_ctor_set(v___x_2055_, 5, v___x_2054_);
lean_ctor_set_uint8(v___x_2055_, sizeof(void*)*6 + 4, v___y_2049_);
lean_ctor_set_uint32(v___x_2055_, sizeof(void*)*6, v_trustLevel_2038_);
v___x_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
return v___x_2057_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3___boxed(lean_object* v_setup_x3f_2100_, lean_object* v___f_2101_, lean_object* v___x_2102_, lean_object* v_plugins_2103_, lean_object* v_trustLevel_2104_, lean_object* v___x_2105_, lean_object* v_mainModuleName_2106_, lean_object* v_stx_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
uint32_t v_trustLevel_boxed_2110_; uint8_t v___x_6002__boxed_2111_; lean_object* v_res_2112_; 
v_trustLevel_boxed_2110_ = lean_unbox_uint32(v_trustLevel_2104_);
lean_dec(v_trustLevel_2104_);
v___x_6002__boxed_2111_ = lean_unbox(v___x_2105_);
v_res_2112_ = l_Lean_Elab_runFrontend___lam__3(v_setup_x3f_2100_, v___f_2101_, v___x_2102_, v_plugins_2103_, v_trustLevel_boxed_2110_, v___x_6002__boxed_2111_, v_mainModuleName_2106_, v_stx_2107_, v___y_2108_);
lean_dec_ref(v___y_2108_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4(lean_object* v_val_2113_, lean_object* v_initModIdxs_2114_, lean_object* v___x_2115_){
_start:
{
lean_object* v_cmdState_2117_; lean_object* v_env_2118_; lean_object* v___x_2119_; 
v_cmdState_2117_ = lean_ctor_get(v_val_2113_, 0);
lean_inc_ref(v_cmdState_2117_);
lean_dec_ref(v_val_2113_);
v_env_2118_ = lean_ctor_get(v_cmdState_2117_, 0);
lean_inc_ref(v_env_2118_);
lean_dec_ref(v_cmdState_2117_);
v___x_2119_ = l_Lean_runInitAttrsForModules(v_env_2118_, v_initModIdxs_2114_, v___x_2115_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4___boxed(lean_object* v_val_2120_, lean_object* v_initModIdxs_2121_, lean_object* v___x_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Lean_Elab_runFrontend___lam__4(v_val_2120_, v_initModIdxs_2121_, v___x_2122_);
lean_dec_ref(v___x_2122_);
lean_dec_ref(v_initModIdxs_2121_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(size_t v_sz_2125_, size_t v_i_2126_, lean_object* v_bs_2127_){
_start:
{
uint8_t v___x_2128_; 
v___x_2128_ = lean_usize_dec_lt(v_i_2126_, v_sz_2125_);
if (v___x_2128_ == 0)
{
lean_object* v___x_2129_; 
v___x_2129_ = l_unsafeCast___redArg(v_bs_2127_);
lean_dec_ref(v_bs_2127_);
return v___x_2129_;
}
else
{
lean_object* v_v_2130_; lean_object* v___x_2131_; lean_object* v_traces_2132_; lean_object* v___x_2133_; lean_object* v_bs_x27_2134_; size_t v___x_2135_; size_t v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v_v_2130_ = lean_array_uget_borrowed(v_bs_2127_, v_i_2126_);
v___x_2131_ = l_unsafeCast___redArg(v_v_2130_);
v_traces_2132_ = lean_ctor_get(v___x_2131_, 3);
lean_inc_ref(v_traces_2132_);
lean_dec(v___x_2131_);
v___x_2133_ = lean_unsigned_to_nat(0u);
v_bs_x27_2134_ = lean_array_uset(v_bs_2127_, v_i_2126_, v___x_2133_);
v___x_2135_ = ((size_t)1ULL);
v___x_2136_ = lean_usize_add(v_i_2126_, v___x_2135_);
v___x_2137_ = l_unsafeCast___redArg(v_traces_2132_);
lean_dec_ref(v_traces_2132_);
v___x_2138_ = lean_array_uset(v_bs_x27_2134_, v_i_2126_, v___x_2137_);
v_i_2126_ = v___x_2136_;
v_bs_2127_ = v___x_2138_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5___boxed(lean_object* v_sz_2140_, lean_object* v_i_2141_, lean_object* v_bs_2142_){
_start:
{
size_t v_sz_boxed_2143_; size_t v_i_boxed_2144_; lean_object* v_res_2145_; 
v_sz_boxed_2143_ = lean_unbox_usize(v_sz_2140_);
lean_dec(v_sz_2140_);
v_i_boxed_2144_ = lean_unbox_usize(v_i_2141_);
lean_dec(v_i_2141_);
v_res_2145_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(v_sz_boxed_2143_, v_i_boxed_2144_, v_bs_2142_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(lean_object* v_as_2146_, size_t v_i_2147_, size_t v_stop_2148_, lean_object* v_b_2149_){
_start:
{
lean_object* v___y_2151_; uint8_t v___x_2155_; 
v___x_2155_ = lean_usize_dec_eq(v_i_2147_, v_stop_2148_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; lean_object* v_infoTree_x3f_2157_; 
v___x_2156_ = lean_array_uget_borrowed(v_as_2146_, v_i_2147_);
v_infoTree_x3f_2157_ = lean_ctor_get(v___x_2156_, 2);
if (lean_obj_tag(v_infoTree_x3f_2157_) == 1)
{
lean_object* v_val_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v_val_2158_ = lean_ctor_get(v_infoTree_x3f_2157_, 0);
v___x_2159_ = lean_unsigned_to_nat(1u);
v___x_2160_ = lean_mk_empty_array_with_capacity(v___x_2159_);
lean_inc(v_val_2158_);
v___x_2161_ = lean_array_push(v___x_2160_, v_val_2158_);
v___x_2162_ = l_Array_append___redArg(v_b_2149_, v___x_2161_);
lean_dec_ref(v___x_2161_);
v___y_2151_ = v___x_2162_;
goto v___jp_2150_;
}
else
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0));
v___x_2164_ = l_Array_append___redArg(v_b_2149_, v___x_2163_);
v___y_2151_ = v___x_2164_;
goto v___jp_2150_;
}
}
else
{
return v_b_2149_;
}
v___jp_2150_:
{
size_t v___x_2152_; size_t v___x_2153_; 
v___x_2152_ = ((size_t)1ULL);
v___x_2153_ = lean_usize_add(v_i_2147_, v___x_2152_);
v_i_2147_ = v___x_2153_;
v_b_2149_ = v___y_2151_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7___boxed(lean_object* v_as_2165_, lean_object* v_i_2166_, lean_object* v_stop_2167_, lean_object* v_b_2168_){
_start:
{
size_t v_i_boxed_2169_; size_t v_stop_boxed_2170_; lean_object* v_res_2171_; 
v_i_boxed_2169_ = lean_unbox_usize(v_i_2166_);
lean_dec(v_i_2166_);
v_stop_boxed_2170_ = lean_unbox_usize(v_stop_2167_);
lean_dec(v_stop_2167_);
v_res_2171_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(v_as_2165_, v_i_boxed_2169_, v_stop_boxed_2170_, v_b_2168_);
lean_dec_ref(v_as_2165_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9(lean_object* v_as_2172_, size_t v_i_2173_, size_t v_stop_2174_, lean_object* v_b_2175_){
_start:
{
uint8_t v___x_2176_; 
v___x_2176_ = lean_usize_dec_eq(v_i_2173_, v_stop_2174_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; uint8_t v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; size_t v___x_2181_; size_t v___x_2182_; 
v___x_2177_ = lean_array_uget_borrowed(v_as_2172_, v_i_2173_);
v___x_2178_ = 2;
v___x_2179_ = lean_box(v___x_2178_);
lean_inc(v___x_2177_);
v___x_2180_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_2177_, v___x_2179_, v_b_2175_);
v___x_2181_ = ((size_t)1ULL);
v___x_2182_ = lean_usize_add(v_i_2173_, v___x_2181_);
v_i_2173_ = v___x_2182_;
v_b_2175_ = v___x_2180_;
goto _start;
}
else
{
return v_b_2175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9___boxed(lean_object* v_as_2184_, lean_object* v_i_2185_, lean_object* v_stop_2186_, lean_object* v_b_2187_){
_start:
{
size_t v_i_boxed_2188_; size_t v_stop_boxed_2189_; lean_object* v_res_2190_; 
v_i_boxed_2188_ = lean_unbox_usize(v_i_2185_);
lean_dec(v_i_2185_);
v_stop_boxed_2189_ = lean_unbox_usize(v_stop_2186_);
lean_dec(v_stop_2186_);
v_res_2190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9(v_as_2184_, v_i_boxed_2188_, v_stop_boxed_2189_, v_b_2187_);
lean_dec_ref(v_as_2184_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(lean_object* v_o_2194_, lean_object* v_k_2195_, uint8_t v_v_2196_){
_start:
{
lean_object* v_map_2197_; uint8_t v_hasTrace_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2212_; 
v_map_2197_ = lean_ctor_get(v_o_2194_, 0);
v_hasTrace_2198_ = lean_ctor_get_uint8(v_o_2194_, sizeof(void*)*1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_o_2194_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2200_ = v_o_2194_;
v_isShared_2201_ = v_isSharedCheck_2212_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_map_2197_);
lean_dec(v_o_2194_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2212_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2202_, 0, v_v_2196_);
lean_inc(v_k_2195_);
v___x_2203_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_2195_, v___x_2202_, v_map_2197_);
if (v_hasTrace_2198_ == 0)
{
lean_object* v___x_2204_; uint8_t v___x_2205_; lean_object* v___x_2207_; 
v___x_2204_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1));
v___x_2205_ = l_Lean_Name_isPrefixOf(v___x_2204_, v_k_2195_);
lean_dec(v_k_2195_);
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 0, v___x_2203_);
v___x_2207_ = v___x_2200_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2203_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*1, v___x_2205_);
return v___x_2207_;
}
}
else
{
lean_object* v___x_2210_; 
lean_dec(v_k_2195_);
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 0, v___x_2203_);
v___x_2210_ = v___x_2200_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2203_);
lean_ctor_set_uint8(v_reuseFailAlloc_2211_, sizeof(void*)*1, v_hasTrace_2198_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___boxed(lean_object* v_o_2213_, lean_object* v_k_2214_, lean_object* v_v_2215_){
_start:
{
uint8_t v_v_boxed_2216_; lean_object* v_res_2217_; 
v_v_boxed_2216_ = lean_unbox(v_v_2215_);
v_res_2217_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(v_o_2213_, v_k_2214_, v_v_boxed_2216_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(lean_object* v_opts_2218_, lean_object* v_opt_2219_, uint8_t v_val_2220_){
_start:
{
lean_object* v_name_2221_; lean_object* v___x_2222_; 
v_name_2221_ = lean_ctor_get(v_opt_2219_, 0);
lean_inc(v_name_2221_);
lean_dec_ref(v_opt_2219_);
v___x_2222_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(v_opts_2218_, v_name_2221_, v_val_2220_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0___boxed(lean_object* v_opts_2223_, lean_object* v_opt_2224_, lean_object* v_val_2225_){
_start:
{
uint8_t v_val_boxed_2226_; lean_object* v_res_2227_; 
v_val_boxed_2226_ = lean_unbox(v_val_2225_);
v_res_2227_ = l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(v_opts_2223_, v_opt_2224_, v_val_boxed_2226_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(lean_object* v_opts_2228_, lean_object* v_opt_2229_, uint8_t v_val_2230_){
_start:
{
lean_object* v_name_2231_; lean_object* v_map_2232_; uint8_t v___x_2233_; 
v_name_2231_ = lean_ctor_get(v_opt_2229_, 0);
v_map_2232_ = lean_ctor_get(v_opts_2228_, 0);
v___x_2233_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_2231_, v_map_2232_);
if (v___x_2233_ == 0)
{
lean_object* v___x_2234_; 
v___x_2234_ = l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(v_opts_2228_, v_opt_2229_, v_val_2230_);
return v___x_2234_;
}
else
{
lean_dec_ref(v_opt_2229_);
return v_opts_2228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0___boxed(lean_object* v_opts_2235_, lean_object* v_opt_2236_, lean_object* v_val_2237_){
_start:
{
uint8_t v_val_boxed_2238_; lean_object* v_res_2239_; 
v_val_boxed_2238_ = lean_unbox(v_val_2237_);
v_res_2239_ = l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(v_opts_2235_, v_opt_2236_, v_val_boxed_2238_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___lam__0(lean_object* v_a_2240_, lean_object* v_entries_2241_){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2242_ = lean_task_get_own(v_a_2240_);
v___x_2243_ = l_Array_append___redArg(v_entries_2241_, v___x_2242_);
lean_dec(v___x_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(lean_object* v_as_2244_, size_t v_sz_2245_, size_t v_i_2246_, lean_object* v_b_2247_){
_start:
{
uint8_t v___x_2249_; 
v___x_2249_ = lean_usize_dec_lt(v_i_2246_, v_sz_2245_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; 
v___x_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2250_, 0, v_b_2247_);
return v___x_2250_;
}
else
{
lean_object* v___x_2251_; lean_object* v_toEnvExtension_2252_; lean_object* v_asyncMode_2253_; lean_object* v_a_2254_; lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; size_t v___x_2258_; size_t v___x_2259_; 
v___x_2251_ = l_Lean_Linter_codeQualityLogExt;
v_toEnvExtension_2252_ = lean_ctor_get(v___x_2251_, 0);
v_asyncMode_2253_ = lean_ctor_get(v_toEnvExtension_2252_, 2);
v_a_2254_ = lean_array_uget_borrowed(v_as_2244_, v_i_2246_);
lean_inc(v_a_2254_);
v___f_2255_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_2255_, 0, v_a_2254_);
v___x_2256_ = lean_obj_once(&l_Lean_Elab_Frontend_processCommand___closed__1, &l_Lean_Elab_Frontend_processCommand___closed__1_once, _init_l_Lean_Elab_Frontend_processCommand___closed__1);
v___x_2257_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_2251_, v_b_2247_, v___f_2255_, v_asyncMode_2253_, v___x_2256_);
v___x_2258_ = ((size_t)1ULL);
v___x_2259_ = lean_usize_add(v_i_2246_, v___x_2258_);
v_i_2246_ = v___x_2259_;
v_b_2247_ = v___x_2257_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___boxed(lean_object* v_as_2261_, lean_object* v_sz_2262_, lean_object* v_i_2263_, lean_object* v_b_2264_, lean_object* v___y_2265_){
_start:
{
size_t v_sz_boxed_2266_; size_t v_i_boxed_2267_; lean_object* v_res_2268_; 
v_sz_boxed_2266_ = lean_unbox_usize(v_sz_2262_);
lean_dec(v_sz_2262_);
v_i_boxed_2267_ = lean_unbox_usize(v_i_2263_);
lean_dec(v_i_2263_);
v_res_2268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(v_as_2261_, v_sz_boxed_2266_, v_i_boxed_2267_, v_b_2264_);
lean_dec_ref(v_as_2261_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0(lean_object* v_s_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2273_ = l_Lean_Language_Snapshot_transform(v_s_2271_, v___y_2272_);
v___x_2274_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0));
v___x_2275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2273_);
lean_ctor_set(v___x_2275_, 1, v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___boxed(lean_object* v_s_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0(v_s_2276_, v___y_2277_);
lean_dec_ref(v___y_2277_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(lean_object* v_t_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v___f_2282_; lean_object* v___x_2283_; 
v___f_2282_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0));
v___x_2283_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_2280_, v___f_2282_, v_a_2281_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___boxed(lean_object* v_t_2284_, lean_object* v_a_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(v_t_2284_, v_a_2285_);
lean_dec_ref(v_a_2285_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(lean_object* v_t_2288_, lean_object* v_a_2289_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0));
v___x_2291_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_2288_, v___x_2290_, v_a_2289_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___boxed(lean_object* v_t_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(v_t_2292_, v_a_2293_);
lean_dec_ref(v_a_2293_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0(lean_object* v_s_2295_, lean_object* v___y_2296_){
_start:
{
lean_object* v_toSnapshot_2297_; lean_object* v_metaSnap_2298_; lean_object* v_result_x3f_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___y_2303_; 
v_toSnapshot_2297_ = lean_ctor_get(v_s_2295_, 0);
lean_inc_ref(v_toSnapshot_2297_);
v_metaSnap_2298_ = lean_ctor_get(v_s_2295_, 1);
lean_inc_ref(v_metaSnap_2298_);
v_result_x3f_2299_ = lean_ctor_get(v_s_2295_, 2);
lean_inc(v_result_x3f_2299_);
lean_dec_ref(v_s_2295_);
v___x_2300_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_2297_, v___y_2296_);
v___x_2301_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(v_metaSnap_2298_, v___y_2296_);
if (lean_obj_tag(v_result_x3f_2299_) == 0)
{
lean_object* v___x_2309_; 
v___x_2309_ = lean_box(0);
v___y_2303_ = v___x_2309_;
goto v___jp_2302_;
}
else
{
lean_object* v_val_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2319_; 
v_val_2310_ = lean_ctor_get(v_result_x3f_2299_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v_result_x3f_2299_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2312_ = v_result_x3f_2299_;
v_isShared_2313_ = v_isSharedCheck_2319_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_val_2310_);
lean_dec(v_result_x3f_2299_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2319_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v_firstCmdSnap_2314_; lean_object* v___x_2315_; lean_object* v___x_2317_; 
v_firstCmdSnap_2314_ = lean_ctor_get(v_val_2310_, 1);
lean_inc_ref(v_firstCmdSnap_2314_);
lean_dec(v_val_2310_);
v___x_2315_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(v_firstCmdSnap_2314_, v___y_2296_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2315_);
v___x_2317_ = v___x_2312_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
v___y_2303_ = v___x_2317_;
goto v___jp_2302_;
}
}
}
v___jp_2302_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2304_ = lean_unsigned_to_nat(1u);
v___x_2305_ = lean_mk_empty_array_with_capacity(v___x_2304_);
v___x_2306_ = lean_array_push(v___x_2305_, v___x_2301_);
v___x_2307_ = l_Lean_Language_Lean_pushOpt___redArg(v___y_2303_, v___x_2306_);
v___x_2308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2300_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
return v___x_2308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0___boxed(lean_object* v_s_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0(v_s_2320_, v___y_2321_);
lean_dec_ref(v___y_2321_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(lean_object* v_t_2324_, lean_object* v_a_2325_){
_start:
{
lean_object* v___f_2326_; lean_object* v___x_2327_; 
v___f_2326_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0));
v___x_2327_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_2324_, v___f_2326_, v_a_2325_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___boxed(lean_object* v_t_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(v_t_2328_, v_a_2329_);
lean_dec_ref(v_a_2329_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2(lean_object* v_a_2331_){
_start:
{
lean_object* v_toSnapshot_2332_; lean_object* v_metaSnap_2333_; lean_object* v_result_x3f_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___y_2339_; 
v_toSnapshot_2332_ = lean_ctor_get(v_a_2331_, 0);
lean_inc_ref(v_toSnapshot_2332_);
v_metaSnap_2333_ = lean_ctor_get(v_a_2331_, 1);
lean_inc_ref(v_metaSnap_2333_);
v_result_x3f_2334_ = lean_ctor_get(v_a_2331_, 4);
lean_inc(v_result_x3f_2334_);
lean_dec_ref(v_a_2331_);
v___x_2335_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_2336_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_2332_, v___x_2335_);
v___x_2337_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(v_metaSnap_2333_, v___x_2335_);
if (lean_obj_tag(v_result_x3f_2334_) == 0)
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_box(0);
v___y_2339_ = v___x_2345_;
goto v___jp_2338_;
}
else
{
lean_object* v_val_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2355_; 
v_val_2346_ = lean_ctor_get(v_result_x3f_2334_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_result_x3f_2334_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2348_ = v_result_x3f_2334_;
v_isShared_2349_ = v_isSharedCheck_2355_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_val_2346_);
lean_dec(v_result_x3f_2334_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2355_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v_processedSnap_2350_; lean_object* v___x_2351_; lean_object* v___x_2353_; 
v_processedSnap_2350_ = lean_ctor_get(v_val_2346_, 1);
lean_inc_ref(v_processedSnap_2350_);
lean_dec(v_val_2346_);
v___x_2351_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(v_processedSnap_2350_, v___x_2335_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2351_);
v___x_2353_ = v___x_2348_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
v___y_2339_ = v___x_2353_;
goto v___jp_2338_;
}
}
}
v___jp_2338_:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_mk_empty_array_with_capacity(v___x_2340_);
v___x_2342_ = lean_array_push(v___x_2341_, v___x_2337_);
v___x_2343_ = l_Lean_Language_Lean_pushOpt___redArg(v___y_2339_, v___x_2342_);
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2336_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
return v___x_2344_;
}
}
}
static double _init_l_Lean_Elab_runFrontend___closed__1(void){
_start:
{
lean_object* v___x_2357_; double v___x_2358_; 
v___x_2357_ = lean_unsigned_to_nat(1000000000u);
v___x_2358_ = lean_float_of_nat(v___x_2357_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend(lean_object* v_input_2360_, lean_object* v_opts_2361_, lean_object* v_fileName_2362_, lean_object* v_mainModuleName_2363_, uint32_t v_trustLevel_2364_, lean_object* v_oleanFileName_x3f_2365_, lean_object* v_ileanFileName_x3f_2366_, uint8_t v_jsonOutput_2367_, lean_object* v_errorOnKinds_2368_, lean_object* v_plugins_2369_, uint8_t v_printStats_2370_, lean_object* v_setup_x3f_2371_, lean_object* v_incrSaveFileName_x3f_2372_, lean_object* v_incrLoadFileName_x3f_2373_, lean_object* v_incrHeaderSaveFileName_x3f_2374_){
_start:
{
lean_object* v___y_2377_; lean_object* v___y_2378_; lean_object* v___f_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; double v___x_2385_; double v___x_2386_; double v___x_2387_; uint8_t v___x_2388_; size_t v___y_2390_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___y_2394_; lean_object* v___x_2454_; lean_object* v___x_2455_; size_t v___y_2457_; lean_object* v___y_2458_; uint8_t v___y_2459_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; size_t v___y_2497_; lean_object* v___y_2498_; uint8_t v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; uint8_t v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; size_t v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; uint8_t v___y_2519_; lean_object* v___y_2520_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; uint8_t v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; size_t v___y_2549_; uint8_t v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; uint8_t v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; size_t v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; uint8_t v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v_a_2652_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v___y_2673_; 
v___f_2382_ = ((lean_object*)(l_Lean_Elab_runFrontend___closed__0));
v___x_2383_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2384_ = lean_io_mono_nanos_now();
v___x_2385_ = lean_float_of_nat(v___x_2384_);
v___x_2386_ = lean_float_once(&l_Lean_Elab_runFrontend___closed__1, &l_Lean_Elab_runFrontend___closed__1_once, _init_l_Lean_Elab_runFrontend___closed__1);
v___x_2387_ = lean_float_div(v___x_2385_, v___x_2386_);
v___x_2388_ = 1;
v___x_2454_ = lean_string_utf8_byte_size(v_input_2360_);
v___x_2455_ = l_Lean_Parser_mkInputContext___redArg(v_input_2360_, v_fileName_2362_, v___x_2388_, v___x_2454_);
v___x_2671_ = l_Lean_internal_cmdlineSnapshots;
if (lean_obj_tag(v_incrSaveFileName_x3f_2372_) == 0)
{
v___y_2673_ = v___x_2388_;
goto v___jp_2672_;
}
else
{
uint8_t v___x_2709_; 
v___x_2709_ = 0;
v___y_2673_ = v___x_2709_;
goto v___jp_2672_;
}
v___jp_2376_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2379_ = lean_runtime_forget(v___y_2377_);
v___x_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___y_2378_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
v___jp_2389_:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = l_Lean_trace_profiler_output;
v___x_2396_ = l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(v___y_2394_, v___x_2395_);
if (lean_obj_tag(v___x_2396_) == 1)
{
lean_object* v_val_2397_; lean_object* v___x_2398_; size_t v_sz_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
lean_dec_ref(v___y_2392_);
v_val_2397_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_val_2397_);
lean_dec_ref_known(v___x_2396_, 1);
lean_inc_ref(v___y_2391_);
v___x_2398_ = l_Lean_Language_SnapshotTree_getAll(v___y_2391_);
v_sz_2399_ = lean_array_size(v___x_2398_);
v___x_2400_ = l_unsafeCast___redArg(v___x_2398_);
lean_dec_ref(v___x_2398_);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(v_sz_2399_, v___y_2390_, v___x_2400_);
v___x_2402_ = l_unsafeCast___redArg(v___x_2401_);
lean_dec_ref(v___x_2401_);
v___x_2403_ = l_Lean_Name_toString(v_mainModuleName_2363_, v___x_2388_);
v___x_2404_ = l_Lean_Firefox_Profile_export(v___x_2403_, v___x_2387_, v___x_2402_, v___y_2394_);
lean_dec(v___x_2402_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
v___x_2406_ = l_Lean_Firefox_instToJsonProfile_toJson(v_a_2405_);
v___x_2407_ = l_Lean_Json_compress(v___x_2406_);
v___x_2408_ = l_IO_FS_writeFile(v_val_2397_, v___x_2407_);
lean_dec_ref(v___x_2407_);
lean_dec(v_val_2397_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_dec_ref_known(v___x_2408_, 1);
v___y_2377_ = v___y_2391_;
v___y_2378_ = v___y_2393_;
goto v___jp_2376_;
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2416_; 
lean_dec_ref(v___y_2393_);
lean_dec_ref(v___y_2391_);
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2411_ = v___x_2408_;
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v___x_2408_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec(v_val_2397_);
lean_dec_ref(v___y_2393_);
lean_dec_ref(v___y_2391_);
v_a_2417_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2404_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2404_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
else
{
lean_object* v___x_2425_; uint8_t v___x_2426_; 
lean_dec(v___x_2396_);
v___x_2425_ = l_Lean_trace_profiler_serve;
v___x_2426_ = l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(v___y_2392_, v___x_2425_);
lean_dec_ref(v___y_2392_);
if (v___x_2426_ == 0)
{
lean_dec_ref(v___y_2394_);
lean_dec(v_mainModuleName_2363_);
v___y_2377_ = v___y_2391_;
v___y_2378_ = v___y_2393_;
goto v___jp_2376_;
}
else
{
lean_object* v___x_2427_; size_t v_sz_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_inc_ref(v___y_2391_);
v___x_2427_ = l_Lean_Language_SnapshotTree_getAll(v___y_2391_);
v_sz_2428_ = lean_array_size(v___x_2427_);
v___x_2429_ = l_unsafeCast___redArg(v___x_2427_);
lean_dec_ref(v___x_2427_);
v___x_2430_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(v_sz_2428_, v___y_2390_, v___x_2429_);
v___x_2431_ = l_unsafeCast___redArg(v___x_2430_);
lean_dec_ref(v___x_2430_);
v___x_2432_ = l_Lean_Name_toString(v_mainModuleName_2363_, v___x_2388_);
v___x_2433_ = l_Lean_Firefox_Profile_export(v___x_2432_, v___x_2387_, v___x_2431_, v___y_2394_);
lean_dec(v___x_2431_);
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2433_, 1);
v___x_2435_ = l_Lean_Firefox_instToJsonProfile_toJson(v_a_2434_);
v___x_2436_ = l_Lean_Json_compress(v___x_2435_);
v___x_2437_ = l_Lean_Firefox_Profile_serve(v___x_2436_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_dec_ref_known(v___x_2437_, 1);
v___y_2377_ = v___y_2391_;
v___y_2378_ = v___y_2393_;
goto v___jp_2376_;
}
else
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2445_; 
lean_dec_ref(v___y_2393_);
lean_dec_ref(v___y_2391_);
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2440_ = v___x_2437_;
v_isShared_2441_ = v_isSharedCheck_2445_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2445_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2443_; 
if (v_isShared_2441_ == 0)
{
v___x_2443_ = v___x_2440_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v_a_2438_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
}
else
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2453_; 
lean_dec_ref(v___y_2393_);
lean_dec_ref(v___y_2391_);
v_a_2446_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2448_ = v___x_2433_;
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2433_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
}
}
v___jp_2456_:
{
lean_object* v_fileMap_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v_fst_2469_; lean_object* v_snd_2470_; lean_object* v_stx_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2491_; 
v_fileMap_2466_ = lean_ctor_get(v___x_2455_, 2);
lean_inc_ref(v_fileMap_2466_);
lean_dec_ref(v___x_2455_);
v___x_2467_ = l_Lean_Server_findModuleRefs(v_fileMap_2466_, v___y_2465_, v___y_2459_, v___y_2459_);
lean_dec_ref(v___y_2465_);
v___x_2468_ = l_Lean_Server_ModuleRefs_toLspModuleRefs(v___x_2467_);
v_fst_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_fst_2469_);
v_snd_2470_ = lean_ctor_get(v___x_2468_, 1);
lean_inc(v_snd_2470_);
lean_dec_ref(v___x_2468_);
v_stx_2471_ = lean_ctor_get(v___y_2462_, 3);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___y_2462_);
if (v_isSharedCheck_2491_ == 0)
{
lean_object* v_unused_2492_; lean_object* v_unused_2493_; lean_object* v_unused_2494_; lean_object* v_unused_2495_; 
v_unused_2492_ = lean_ctor_get(v___y_2462_, 4);
lean_dec(v_unused_2492_);
v_unused_2493_ = lean_ctor_get(v___y_2462_, 2);
lean_dec(v_unused_2493_);
v_unused_2494_ = lean_ctor_get(v___y_2462_, 1);
lean_dec(v_unused_2494_);
v_unused_2495_ = lean_ctor_get(v___y_2462_, 0);
lean_dec(v_unused_2495_);
v___x_2473_ = v___y_2462_;
v_isShared_2474_ = v_isSharedCheck_2491_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_stx_2471_);
lean_dec(v___y_2462_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2491_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2478_; 
v___x_2475_ = lean_unsigned_to_nat(5u);
v___x_2476_ = l_Lean_Server_collectImports(v_stx_2471_);
lean_inc(v_mainModuleName_2363_);
if (v_isShared_2474_ == 0)
{
lean_ctor_set(v___x_2473_, 4, v_snd_2470_);
lean_ctor_set(v___x_2473_, 3, v_fst_2469_);
lean_ctor_set(v___x_2473_, 2, v___x_2476_);
lean_ctor_set(v___x_2473_, 1, v_mainModuleName_2363_);
lean_ctor_set(v___x_2473_, 0, v___x_2475_);
v___x_2478_ = v___x_2473_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2475_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v_mainModuleName_2363_);
lean_ctor_set(v_reuseFailAlloc_2490_, 2, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2490_, 3, v_fst_2469_);
lean_ctor_set(v_reuseFailAlloc_2490_, 4, v_snd_2470_);
v___x_2478_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2479_ = l_Lean_Server_instToJsonIlean_toJson(v___x_2478_);
v___x_2480_ = l_Lean_Json_compress(v___x_2479_);
v___x_2481_ = l_IO_FS_writeFile(v___y_2460_, v___x_2480_);
lean_dec_ref(v___x_2480_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_dec_ref_known(v___x_2481_, 1);
v___y_2390_ = v___y_2457_;
v___y_2391_ = v___y_2458_;
v___y_2392_ = v___y_2461_;
v___y_2393_ = v___y_2463_;
v___y_2394_ = v___y_2464_;
goto v___jp_2389_;
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
lean_dec_ref(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec_ref(v___y_2461_);
lean_dec_ref(v___y_2458_);
lean_dec(v_mainModuleName_2363_);
v_a_2482_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2481_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2481_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
}
}
}
v___jp_2496_:
{
if (lean_obj_tag(v_ileanFileName_x3f_2366_) == 1)
{
lean_object* v_val_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; uint8_t v___x_2509_; 
v_val_2505_ = lean_ctor_get(v_ileanFileName_x3f_2366_, 0);
lean_inc_ref(v___y_2500_);
v___x_2506_ = l_Lean_Language_SnapshotTree_getAll(v___y_2500_);
v___x_2507_ = lean_mk_empty_array_with_capacity(v___y_2498_);
v___x_2508_ = lean_array_get_size(v___x_2506_);
v___x_2509_ = lean_nat_dec_lt(v___y_2498_, v___x_2508_);
lean_dec(v___y_2498_);
if (v___x_2509_ == 0)
{
lean_dec_ref(v___x_2506_);
v___y_2457_ = v___y_2497_;
v___y_2458_ = v___y_2500_;
v___y_2459_ = v___y_2499_;
v___y_2460_ = v_val_2505_;
v___y_2461_ = v___y_2502_;
v___y_2462_ = v___y_2501_;
v___y_2463_ = v___y_2503_;
v___y_2464_ = v___y_2504_;
v___y_2465_ = v___x_2507_;
goto v___jp_2456_;
}
else
{
size_t v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = lean_usize_of_nat(v___x_2508_);
v___x_2511_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(v___x_2506_, v___y_2497_, v___x_2510_, v___x_2507_);
lean_dec_ref(v___x_2506_);
v___y_2457_ = v___y_2497_;
v___y_2458_ = v___y_2500_;
v___y_2459_ = v___y_2499_;
v___y_2460_ = v_val_2505_;
v___y_2461_ = v___y_2502_;
v___y_2462_ = v___y_2501_;
v___y_2463_ = v___y_2503_;
v___y_2464_ = v___y_2504_;
v___y_2465_ = v___x_2511_;
goto v___jp_2456_;
}
}
else
{
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2498_);
lean_dec_ref(v___x_2455_);
v___y_2390_ = v___y_2497_;
v___y_2391_ = v___y_2500_;
v___y_2392_ = v___y_2502_;
v___y_2393_ = v___y_2503_;
v___y_2394_ = v___y_2504_;
goto v___jp_2389_;
}
}
v___jp_2512_:
{
if (v___y_2519_ == 0)
{
if (lean_obj_tag(v_oleanFileName_x3f_2365_) == 1)
{
lean_object* v_val_2524_; lean_object* v_fileMap_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___f_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v_val_2524_ = lean_ctor_get(v_oleanFileName_x3f_2365_, 0);
lean_inc(v_val_2524_);
lean_dec_ref_known(v_oleanFileName_x3f_2365_, 1);
v_fileMap_2525_ = lean_ctor_get(v___x_2455_, 2);
lean_inc_ref(v_fileMap_2525_);
v___x_2526_ = ((lean_object*)(l_Lean_Elab_runFrontend___closed__2));
v___x_2527_ = lean_box(0);
v___x_2528_ = lean_mk_empty_array_with_capacity(v___y_2518_);
lean_inc_ref(v___y_2517_);
v___x_2529_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(v___y_2517_, v___x_2527_, v___x_2528_);
v___x_2530_ = lean_box(v___x_2388_);
v___x_2531_ = lean_box(v___y_2513_);
v___f_2532_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2532_, 0, v_fileMap_2525_);
lean_closure_set(v___f_2532_, 1, v___y_2515_);
lean_closure_set(v___f_2532_, 2, v___x_2529_);
lean_closure_set(v___f_2532_, 3, v___y_2514_);
lean_closure_set(v___f_2532_, 4, v_val_2524_);
lean_closure_set(v___f_2532_, 5, v___x_2530_);
lean_closure_set(v___f_2532_, 6, v___x_2531_);
v___x_2533_ = lean_obj_once(&l_Lean_Elab_Frontend_processCommand___closed__1, &l_Lean_Elab_Frontend_processCommand___closed__1_once, _init_l_Lean_Elab_Frontend_processCommand___closed__1);
v___x_2534_ = l_Lean_profileitIOUnsafe___redArg(v___x_2526_, v___y_2521_, v___f_2532_, v___x_2533_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_dec_ref_known(v___x_2534_, 1);
v___y_2497_ = v___y_2516_;
v___y_2498_ = v___y_2518_;
v___y_2499_ = v___y_2519_;
v___y_2500_ = v___y_2517_;
v___y_2501_ = v___y_2520_;
v___y_2502_ = v___y_2521_;
v___y_2503_ = v___y_2522_;
v___y_2504_ = v___y_2523_;
goto v___jp_2496_;
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec_ref(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
lean_dec_ref(v___x_2455_);
lean_dec(v_mainModuleName_2363_);
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2534_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2534_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
else
{
lean_dec_ref(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v_oleanFileName_x3f_2365_);
v___y_2497_ = v___y_2516_;
v___y_2498_ = v___y_2518_;
v___y_2499_ = v___y_2519_;
v___y_2500_ = v___y_2517_;
v___y_2501_ = v___y_2520_;
v___y_2502_ = v___y_2521_;
v___y_2503_ = v___y_2522_;
v___y_2504_ = v___y_2523_;
goto v___jp_2496_;
}
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec_ref(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
lean_dec_ref(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v___x_2455_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v___x_2543_ = lean_box(0);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
v___jp_2545_:
{
if (v_printStats_2370_ == 0)
{
v___y_2513_ = v___y_2546_;
v___y_2514_ = v___y_2547_;
v___y_2515_ = v___y_2548_;
v___y_2516_ = v___y_2549_;
v___y_2517_ = v___y_2552_;
v___y_2518_ = v___y_2551_;
v___y_2519_ = v___y_2550_;
v___y_2520_ = v___y_2554_;
v___y_2521_ = v___y_2553_;
v___y_2522_ = v___y_2555_;
v___y_2523_ = v___y_2556_;
goto v___jp_2512_;
}
else
{
lean_object* v___x_2557_; 
lean_inc_ref(v___y_2555_);
v___x_2557_ = l_Lean_Environment_displayStats(v___y_2555_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_dec_ref_known(v___x_2557_, 1);
v___y_2513_ = v___y_2546_;
v___y_2514_ = v___y_2547_;
v___y_2515_ = v___y_2548_;
v___y_2516_ = v___y_2549_;
v___y_2517_ = v___y_2552_;
v___y_2518_ = v___y_2551_;
v___y_2519_ = v___y_2550_;
v___y_2520_ = v___y_2554_;
v___y_2521_ = v___y_2553_;
v___y_2522_ = v___y_2555_;
v___y_2523_ = v___y_2556_;
goto v___jp_2512_;
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_dec_ref(v___y_2556_);
lean_dec_ref(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v___x_2455_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
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
v___jp_2566_:
{
if (lean_obj_tag(v_incrHeaderSaveFileName_x3f_2374_) == 1)
{
lean_object* v_val_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v_val_2578_ = lean_ctor_get(v_incrHeaderSaveFileName_x3f_2374_, 0);
lean_inc(v_val_2578_);
lean_dec_ref_known(v_incrHeaderSaveFileName_x3f_2374_, 1);
lean_inc_ref(v___y_2576_);
v___x_2579_ = l_Lean_Language_Lean_truncateToHeader(v___y_2576_);
v___x_2580_ = lean_apply_3(v___y_2569_, v_val_2578_, v___x_2579_, lean_box(0));
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_dec_ref_known(v___x_2580_, 1);
lean_inc_ref(v___y_2570_);
v___y_2546_ = v___y_2567_;
v___y_2547_ = v___y_2568_;
v___y_2548_ = v___y_2570_;
v___y_2549_ = v___y_2571_;
v___y_2550_ = v___y_2574_;
v___y_2551_ = v___y_2573_;
v___y_2552_ = v___y_2572_;
v___y_2553_ = v___y_2575_;
v___y_2554_ = v___y_2576_;
v___y_2555_ = v___y_2570_;
v___y_2556_ = v___y_2577_;
goto v___jp_2545_;
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec_ref(v___y_2577_);
lean_dec_ref(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec_ref(v___y_2570_);
lean_dec_ref(v___y_2568_);
lean_dec_ref(v___x_2455_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2580_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2580_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
else
{
lean_dec_ref(v___y_2569_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_inc_ref(v___y_2570_);
v___y_2546_ = v___y_2567_;
v___y_2547_ = v___y_2568_;
v___y_2548_ = v___y_2570_;
v___y_2549_ = v___y_2571_;
v___y_2550_ = v___y_2574_;
v___y_2551_ = v___y_2573_;
v___y_2552_ = v___y_2572_;
v___y_2553_ = v___y_2575_;
v___y_2554_ = v___y_2576_;
v___y_2555_ = v___y_2570_;
v___y_2556_ = v___y_2577_;
goto v___jp_2545_;
}
}
v___jp_2589_:
{
lean_object* v___x_2595_; 
lean_inc_ref(v___y_2591_);
v___x_2595_ = l_Lean_Language_SnapshotTree_runAndReport(v___y_2591_, v___y_2593_, v_jsonOutput_2367_, v___y_2594_);
lean_dec(v___y_2594_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2640_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2598_ = v___x_2595_;
v_isShared_2599_ = v_isSharedCheck_2640_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2595_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2640_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2600_; 
lean_inc_ref(v___y_2592_);
v___x_2600_ = l_Lean_Language_Lean_waitForFinalCmdState_x3f(v___y_2592_);
if (lean_obj_tag(v___x_2600_) == 1)
{
lean_object* v_val_2601_; lean_object* v_env_2602_; lean_object* v_scopes_2603_; lean_object* v_codeQualityEntryTasks_2604_; lean_object* v___x_2605_; lean_object* v_opts_2606_; size_t v_sz_2607_; size_t v___x_2608_; lean_object* v___x_2609_; 
lean_del_object(v___x_2598_);
v_val_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_val_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v_env_2602_ = lean_ctor_get(v_val_2601_, 0);
lean_inc_ref(v_env_2602_);
v_scopes_2603_ = lean_ctor_get(v_val_2601_, 2);
lean_inc(v_scopes_2603_);
v_codeQualityEntryTasks_2604_ = lean_ctor_get(v_val_2601_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2604_);
lean_dec(v_val_2601_);
lean_inc(v___y_2590_);
v___x_2605_ = l_List_get_x21Internal___redArg(v___x_2383_, v_scopes_2603_, v___y_2590_);
lean_dec(v_scopes_2603_);
v_opts_2606_ = lean_ctor_get(v___x_2605_, 1);
lean_inc_ref(v_opts_2606_);
lean_dec(v___x_2605_);
v_sz_2607_ = lean_array_size(v_codeQualityEntryTasks_2604_);
v___x_2608_ = ((size_t)0ULL);
v___x_2609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(v_codeQualityEntryTasks_2604_, v_sz_2607_, v___x_2608_, v_env_2602_);
lean_dec_ref(v_codeQualityEntryTasks_2604_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; lean_object* v___x_2611_; lean_object* v___f_2612_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc_n(v_a_2610_, 2);
lean_dec_ref_known(v___x_2609_, 1);
v___x_2611_ = lean_box(v___x_2388_);
v___f_2612_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__1___boxed), 5, 2);
lean_closure_set(v___f_2612_, 0, v_a_2610_);
lean_closure_set(v___f_2612_, 1, v___x_2611_);
if (lean_obj_tag(v_incrSaveFileName_x3f_2372_) == 1)
{
lean_object* v_val_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_val_2613_ = lean_ctor_get(v_incrSaveFileName_x3f_2372_, 0);
lean_inc(v_val_2613_);
lean_dec_ref_known(v_incrSaveFileName_x3f_2372_, 1);
v___x_2614_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(v___y_2591_);
lean_inc_ref(v___y_2592_);
v___x_2615_ = l_Lean_Elab_runFrontend___lam__1(v_a_2610_, v___x_2388_, v_val_2613_, v___y_2592_);
if (lean_obj_tag(v___x_2615_) == 0)
{
uint8_t v___x_2616_; uint8_t v___x_2617_; 
lean_dec_ref_known(v___x_2615_, 1);
v___x_2616_ = lean_unbox(v_a_2596_);
v___x_2617_ = lean_unbox(v_a_2596_);
lean_dec(v_a_2596_);
lean_inc_ref(v_opts_2606_);
v___y_2567_ = v___x_2616_;
v___y_2568_ = v_opts_2606_;
v___y_2569_ = v___f_2612_;
v___y_2570_ = v_a_2610_;
v___y_2571_ = v___x_2608_;
v___y_2572_ = v___y_2591_;
v___y_2573_ = v___y_2590_;
v___y_2574_ = v___x_2617_;
v___y_2575_ = v_opts_2606_;
v___y_2576_ = v___y_2592_;
v___y_2577_ = v___y_2593_;
goto v___jp_2566_;
}
else
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
lean_dec_ref(v___f_2612_);
lean_dec(v_a_2610_);
lean_dec_ref(v_opts_2606_);
lean_dec(v_a_2596_);
lean_dec_ref(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v___y_2590_);
lean_dec_ref(v___x_2455_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2618_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2620_ = v___x_2615_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2615_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
else
{
uint8_t v___x_2626_; uint8_t v___x_2627_; 
lean_dec(v_incrSaveFileName_x3f_2372_);
v___x_2626_ = lean_unbox(v_a_2596_);
v___x_2627_ = lean_unbox(v_a_2596_);
lean_dec(v_a_2596_);
lean_inc_ref(v_opts_2606_);
v___y_2567_ = v___x_2626_;
v___y_2568_ = v_opts_2606_;
v___y_2569_ = v___f_2612_;
v___y_2570_ = v_a_2610_;
v___y_2571_ = v___x_2608_;
v___y_2572_ = v___y_2591_;
v___y_2573_ = v___y_2590_;
v___y_2574_ = v___x_2627_;
v___y_2575_ = v_opts_2606_;
v___y_2576_ = v___y_2592_;
v___y_2577_ = v___y_2593_;
goto v___jp_2566_;
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec_ref(v_opts_2606_);
lean_dec(v_a_2596_);
lean_dec_ref(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v___y_2590_);
lean_dec_ref(v___x_2455_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_dec(v_incrSaveFileName_x3f_2372_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2628_ = lean_ctor_get(v___x_2609_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2609_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2609_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2638_; 
lean_dec(v___x_2600_);
lean_dec(v_a_2596_);
lean_dec_ref(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v___y_2590_);
lean_dec_ref(v___x_2455_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_dec(v_incrSaveFileName_x3f_2372_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v___x_2636_ = lean_box(0);
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 0, v___x_2636_);
v___x_2638_ = v___x_2598_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2636_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
lean_dec_ref(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v___y_2590_);
lean_dec_ref(v___x_2455_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_dec(v_incrSaveFileName_x3f_2372_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2641_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2595_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2595_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
v___jp_2649_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; uint8_t v___x_2658_; 
v___x_2653_ = l_Lean_Language_Lean_process(v___y_2650_, v_a_2652_, v___x_2455_);
lean_inc_ref(v___x_2653_);
v___x_2654_ = l_Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2(v___x_2653_);
v___x_2655_ = lean_box(1);
v___x_2656_ = lean_unsigned_to_nat(0u);
v___x_2657_ = lean_array_get_size(v_errorOnKinds_2368_);
v___x_2658_ = lean_nat_dec_lt(v___x_2656_, v___x_2657_);
if (v___x_2658_ == 0)
{
v___y_2590_ = v___x_2656_;
v___y_2591_ = v___x_2654_;
v___y_2592_ = v___x_2653_;
v___y_2593_ = v___y_2651_;
v___y_2594_ = v___x_2655_;
goto v___jp_2589_;
}
else
{
uint8_t v___x_2659_; 
v___x_2659_ = lean_nat_dec_le(v___x_2657_, v___x_2657_);
if (v___x_2659_ == 0)
{
if (v___x_2658_ == 0)
{
v___y_2590_ = v___x_2656_;
v___y_2591_ = v___x_2654_;
v___y_2592_ = v___x_2653_;
v___y_2593_ = v___y_2651_;
v___y_2594_ = v___x_2655_;
goto v___jp_2589_;
}
else
{
size_t v___x_2660_; size_t v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = ((size_t)0ULL);
v___x_2661_ = lean_usize_of_nat(v___x_2657_);
v___x_2662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9(v_errorOnKinds_2368_, v___x_2660_, v___x_2661_, v___x_2655_);
v___y_2590_ = v___x_2656_;
v___y_2591_ = v___x_2654_;
v___y_2592_ = v___x_2653_;
v___y_2593_ = v___y_2651_;
v___y_2594_ = v___x_2662_;
goto v___jp_2589_;
}
}
else
{
size_t v___x_2663_; size_t v___x_2664_; lean_object* v___x_2665_; 
v___x_2663_ = ((size_t)0ULL);
v___x_2664_ = lean_usize_of_nat(v___x_2657_);
v___x_2665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__9(v_errorOnKinds_2368_, v___x_2663_, v___x_2664_, v___x_2655_);
v___y_2590_ = v___x_2656_;
v___y_2591_ = v___x_2654_;
v___y_2592_ = v___x_2653_;
v___y_2593_ = v___y_2651_;
v___y_2594_ = v___x_2665_;
goto v___jp_2589_;
}
}
}
v___jp_2666_:
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2670_, 0, v_a_2669_);
v___y_2650_ = v___y_2667_;
v___y_2651_ = v___y_2668_;
v_a_2652_ = v___x_2670_;
goto v___jp_2649_;
}
v___jp_2672_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___f_2679_; 
v___x_2674_ = l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(v_opts_2361_, v___x_2671_, v___y_2673_);
v___x_2675_ = l_Lean_Elab_async;
v___x_2676_ = l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(v___x_2674_, v___x_2675_, v___x_2388_);
v___x_2677_ = lean_box_uint32(v_trustLevel_2364_);
v___x_2678_ = lean_box(v___x_2388_);
lean_inc(v_mainModuleName_2363_);
lean_inc_ref(v___x_2676_);
v___f_2679_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__3___boxed), 10, 7);
lean_closure_set(v___f_2679_, 0, v_setup_x3f_2371_);
lean_closure_set(v___f_2679_, 1, v___f_2382_);
lean_closure_set(v___f_2679_, 2, v___x_2676_);
lean_closure_set(v___f_2679_, 3, v_plugins_2369_);
lean_closure_set(v___f_2679_, 4, v___x_2677_);
lean_closure_set(v___f_2679_, 5, v___x_2678_);
lean_closure_set(v___f_2679_, 6, v_mainModuleName_2363_);
if (lean_obj_tag(v_incrLoadFileName_x3f_2373_) == 0)
{
lean_object* v___x_2680_; 
v___x_2680_ = lean_box(0);
v___y_2650_ = v___f_2679_;
v___y_2651_ = v___x_2676_;
v_a_2652_ = v___x_2680_;
goto v___jp_2649_;
}
else
{
lean_object* v_val_2681_; lean_object* v___x_2682_; 
v_val_2681_ = lean_ctor_get(v_incrLoadFileName_x3f_2373_, 0);
lean_inc(v_val_2681_);
lean_dec_ref_known(v_incrLoadFileName_x3f_2373_, 1);
v___x_2682_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(v_val_2681_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v_snap_2684_; lean_object* v_initModIdxs_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v_snap_2684_ = lean_ctor_get(v_a_2683_, 0);
lean_inc_ref(v_snap_2684_);
v_initModIdxs_2685_ = lean_ctor_get(v_a_2683_, 1);
lean_inc_ref(v_initModIdxs_2685_);
lean_dec(v_a_2683_);
lean_inc(v_mainModuleName_2363_);
v___x_2686_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_setMainModule(v_snap_2684_, v_mainModuleName_2363_);
lean_inc_ref(v___x_2686_);
v___x_2687_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v___x_2686_);
v___x_2688_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_2687_);
if (lean_obj_tag(v___x_2688_) == 1)
{
lean_object* v_val_2689_; lean_object* v___f_2690_; lean_object* v___x_2691_; 
v_val_2689_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_val_2689_);
lean_dec_ref_known(v___x_2688_, 1);
lean_inc_ref(v___x_2676_);
v___f_2690_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__4___boxed), 4, 3);
lean_closure_set(v___f_2690_, 0, v_val_2689_);
lean_closure_set(v___f_2690_, 1, v_initModIdxs_2685_);
lean_closure_set(v___f_2690_, 2, v___x_2676_);
v___x_2691_ = l_Lean_withImporting___redArg(v___f_2690_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v___x_2692_; 
lean_dec_ref_known(v___x_2691_, 1);
v___x_2692_ = lean_enable_initializer_execution();
v___y_2667_ = v___f_2679_;
v___y_2668_ = v___x_2676_;
v_a_2669_ = v___x_2686_;
goto v___jp_2666_;
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2700_; 
lean_dec_ref(v___x_2686_);
lean_dec_ref(v___f_2679_);
lean_dec_ref(v___x_2676_);
lean_dec_ref(v___x_2455_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_dec(v_incrSaveFileName_x3f_2372_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2693_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2695_ = v___x_2691_;
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_a_2693_);
lean_dec(v___x_2691_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2698_; 
if (v_isShared_2696_ == 0)
{
v___x_2698_ = v___x_2695_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_a_2693_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
else
{
lean_dec(v___x_2688_);
lean_dec_ref(v_initModIdxs_2685_);
v___y_2667_ = v___f_2679_;
v___y_2668_ = v___x_2676_;
v_a_2669_ = v___x_2686_;
goto v___jp_2666_;
}
}
else
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
lean_dec_ref(v___f_2679_);
lean_dec_ref(v___x_2676_);
lean_dec_ref(v___x_2455_);
lean_dec(v_incrHeaderSaveFileName_x3f_2374_);
lean_dec(v_incrSaveFileName_x3f_2372_);
lean_dec(v_oleanFileName_x3f_2365_);
lean_dec(v_mainModuleName_2363_);
v_a_2701_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2682_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2682_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___boxed(lean_object* v_input_2710_, lean_object* v_opts_2711_, lean_object* v_fileName_2712_, lean_object* v_mainModuleName_2713_, lean_object* v_trustLevel_2714_, lean_object* v_oleanFileName_x3f_2715_, lean_object* v_ileanFileName_x3f_2716_, lean_object* v_jsonOutput_2717_, lean_object* v_errorOnKinds_2718_, lean_object* v_plugins_2719_, lean_object* v_printStats_2720_, lean_object* v_setup_x3f_2721_, lean_object* v_incrSaveFileName_x3f_2722_, lean_object* v_incrLoadFileName_x3f_2723_, lean_object* v_incrHeaderSaveFileName_x3f_2724_, lean_object* v_a_2725_){
_start:
{
uint32_t v_trustLevel_boxed_2726_; uint8_t v_jsonOutput_boxed_2727_; uint8_t v_printStats_boxed_2728_; lean_object* v_res_2729_; 
v_trustLevel_boxed_2726_ = lean_unbox_uint32(v_trustLevel_2714_);
lean_dec(v_trustLevel_2714_);
v_jsonOutput_boxed_2727_ = lean_unbox(v_jsonOutput_2717_);
v_printStats_boxed_2728_ = lean_unbox(v_printStats_2720_);
v_res_2729_ = l_Lean_Elab_runFrontend(v_input_2710_, v_opts_2711_, v_fileName_2712_, v_mainModuleName_2713_, v_trustLevel_boxed_2726_, v_oleanFileName_x3f_2715_, v_ileanFileName_x3f_2716_, v_jsonOutput_boxed_2727_, v_errorOnKinds_2718_, v_plugins_2719_, v_printStats_boxed_2728_, v_setup_x3f_2721_, v_incrSaveFileName_x3f_2722_, v_incrLoadFileName_x3f_2723_, v_incrHeaderSaveFileName_x3f_2724_);
lean_dec_ref(v_errorOnKinds_2718_);
lean_dec(v_ileanFileName_x3f_2716_);
return v_res_2729_;
}
}
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_References(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Profiler(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ProfilerServer(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_References(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Profiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ProfilerServer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Server_References(uint8_t builtin);
lean_object* initialize_Lean_Util_Profiler(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* initialize_Lean_Util_ProfilerServer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_References(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Profiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ProfilerServer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Frontend(builtin);
}
#ifdef __cplusplus
}
#endif

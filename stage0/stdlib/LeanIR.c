// Lean compiler output
// Module: LeanIR
// Imports: public import Init public meta import Init import Lean.CoreM import Lean.Util.ForEachExpr import all Lean.Util.Path import all Lean.Environment import Lean.Compiler.Options import Lean.Compiler.IR.CompilerM import all Lean.Compiler.CSimpAttr import Lean.Compiler.LCNF.EmitC import Lean.Language.Lean import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.Main
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_OLeanLevel_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_ir_export_entries(lean_object*);
lean_object* l_Lean_mkModuleData(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_println___at___00Lean_Environment_displayStats_spec__1(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
extern lean_object* l_Lean_instInhabitedClassState_default;
extern lean_object* l_Lean_Meta_Match_Extension_instInhabitedState;
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_inLeanIR;
lean_object* l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_maxHeartbeats;
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_saveModuleDataParts(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Compiler_LCNF_resumeCompilation(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
extern lean_object* l_Lean_trace_profiler_serve;
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_init_search_path();
lean_object* l_Lean_EnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_setDeclPublic(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_impureSigExt;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* l_Lean_withImporting___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_CSimp_ext;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instanceExtension;
extern lean_object* l_Lean_classExtension;
extern lean_object* l_Lean_Meta_Match_Extension_extension;
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__0 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__0_value;
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__1 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unknown option '"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__0 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__0_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__1 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__1_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__2 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value;
static const lean_ctor_object l___private_LeanIR_0__setConfigOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value)}};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__3 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__3_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "invalid trailing argument `"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__4 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__4_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`, expected argument of the form `-Dopt=val`"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__5 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00main_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00main_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00main_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_main___lam__1___closed__0 = (const lean_object*)&l_main___lam__1___closed__0_value;
static const lean_string_object l_main___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_main___lam__1___closed__1 = (const lean_object*)&l_main___lam__1___closed__1_value;
static const lean_string_object l_main___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_main___lam__1___closed__2 = (const lean_object*)&l_main___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_main___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--stat"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "usage: leanir <setup.json> <output.ir> <output.c> [--stat] <-Dopt=val>..."};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static lean_once_cell_t l_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__1;
static lean_once_cell_t l_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__2;
static lean_once_cell_t l_main___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__3;
static lean_once_cell_t l_main___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__4;
static lean_once_cell_t l_main___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__5;
static lean_once_cell_t l_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__6;
static lean_once_cell_t l_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__7;
static const lean_ctor_object l_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__8 = (const lean_object*)&l_main___closed__8_value;
static const lean_string_object l_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l_main___closed__9 = (const lean_object*)&l_main___closed__9_value;
static const lean_string_object l_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_main___closed__10 = (const lean_object*)&l_main___closed__10_value;
static const lean_ctor_object l_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__10_value),LEAN_SCALAR_PTR_LITERAL(157, 0, 67, 166, 172, 92, 38, 85)}};
static const lean_object* l_main___closed__11 = (const lean_object*)&l_main___closed__11_value;
static const lean_string_object l_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l_main___closed__12 = (const lean_object*)&l_main___closed__12_value;
static lean_once_cell_t l_main___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__13;
static const lean_string_object l_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l_main___closed__14 = (const lean_object*)&l_main___closed__14_value;
static const lean_string_object l_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "LeanIR"};
static const lean_object* l_main___closed__15 = (const lean_object*)&l_main___closed__15_value;
static const lean_string_object l_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l_main___closed__16 = (const lean_object*)&l_main___closed__16_value;
static const lean_string_object l_main___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_main___closed__17 = (const lean_object*)&l_main___closed__17_value;
static lean_once_cell_t l_main___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__18;
static const lean_string_object l_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_main___closed__19 = (const lean_object*)&l_main___closed__19_value;
static lean_once_cell_t l_main___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__20;
static lean_once_cell_t l_main___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__21;
static const lean_string_object l_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_main___closed__22 = (const lean_object*)&l_main___closed__22_value;
static const lean_ctor_object l_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__22_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_main___closed__23 = (const lean_object*)&l_main___closed__23_value;
static const lean_ctor_object l_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_main___closed__23_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__24 = (const lean_object*)&l_main___closed__24_value;
static lean_once_cell_t l_main___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__25;
static lean_once_cell_t l_main___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__26;
static lean_once_cell_t l_main___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__27;
static lean_once_cell_t l_main___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__28;
static lean_once_cell_t l_main___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__29;
static lean_once_cell_t l_main___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__30;
static const lean_array_object l_main___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__31 = (const lean_object*)&l_main___closed__31_value;
static const lean_array_object l_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__32 = (const lean_object*)&l_main___closed__32_value;
static const lean_string_object l_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "module '"};
static const lean_object* l_main___closed__33 = (const lean_object*)&l_main___closed__33_value;
static const lean_string_object l_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' not found"};
static const lean_object* l_main___closed__34 = (const lean_object*)&l_main___closed__34_value;
static lean_once_cell_t l_main___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_main___closed__35;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object* v_env_1_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 0;
v___x_4_ = lean_box(0);
lean_inc_ref(v_env_1_);
v___x_5_ = l_Lean_mkModuleData(v_env_1_, v___x_3_, v___x_4_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_28_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_28_ == 0)
{
v___x_8_ = v___x_5_;
v_isShared_9_ = v_isSharedCheck_28_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_a_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_28_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
uint8_t v_isModule_10_; lean_object* v_imports_11_; lean_object* v_constNames_12_; lean_object* v_constants_13_; lean_object* v_entries_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_26_; 
v_isModule_10_ = lean_ctor_get_uint8(v_a_6_, sizeof(void*)*5);
v_imports_11_ = lean_ctor_get(v_a_6_, 0);
v_constNames_12_ = lean_ctor_get(v_a_6_, 1);
v_constants_13_ = lean_ctor_get(v_a_6_, 2);
v_entries_14_ = lean_ctor_get(v_a_6_, 4);
v_isSharedCheck_26_ = !lean_is_exclusive(v_a_6_);
if (v_isSharedCheck_26_ == 0)
{
lean_object* v_unused_27_; 
v_unused_27_ = lean_ctor_get(v_a_6_, 3);
lean_dec(v_unused_27_);
v___x_16_ = v_a_6_;
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_entries_14_);
lean_inc(v_constants_13_);
lean_inc(v_constNames_12_);
lean_inc(v_imports_11_);
lean_dec(v_a_6_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
uint8_t v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_18_ = 0;
v___x_19_ = lean_get_ir_extra_const_names(v_env_1_, v___x_3_, v___x_18_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 3, v___x_19_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_imports_11_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v_constNames_12_);
lean_ctor_set(v_reuseFailAlloc_25_, 2, v_constants_13_);
lean_ctor_set(v_reuseFailAlloc_25_, 3, v___x_19_);
lean_ctor_set(v_reuseFailAlloc_25_, 4, v_entries_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_25_, sizeof(void*)*5, v_isModule_10_);
v___x_21_ = v_reuseFailAlloc_25_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_23_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 0, v___x_21_);
v___x_23_ = v___x_8_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
else
{
lean_dec_ref(v_env_1_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object* v_env_29_, lean_object* v_a_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l___private_LeanIR_0__mkIRSigData(v_env_29_);
return v_res_31_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object* v_a_32_, lean_object* v_as_33_, size_t v_i_34_, size_t v_stop_35_){
_start:
{
uint8_t v___x_36_; 
v___x_36_ = lean_usize_dec_eq(v_i_34_, v_stop_35_);
if (v___x_36_ == 0)
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = lean_array_uget_borrowed(v_as_33_, v_i_34_);
v___x_38_ = lean_name_eq(v_a_32_, v___x_37_);
if (v___x_38_ == 0)
{
size_t v___x_39_; size_t v___x_40_; 
v___x_39_ = ((size_t)1ULL);
v___x_40_ = lean_usize_add(v_i_34_, v___x_39_);
v_i_34_ = v___x_40_;
goto _start;
}
else
{
return v___x_38_;
}
}
else
{
uint8_t v___x_42_; 
v___x_42_ = 0;
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object* v_a_43_, lean_object* v_as_44_, lean_object* v_i_45_, lean_object* v_stop_46_){
_start:
{
size_t v_i_boxed_47_; size_t v_stop_boxed_48_; uint8_t v_res_49_; lean_object* v_r_50_; 
v_i_boxed_47_ = lean_unbox_usize(v_i_45_);
lean_dec(v_i_45_);
v_stop_boxed_48_ = lean_unbox_usize(v_stop_46_);
lean_dec(v_stop_46_);
v_res_49_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_43_, v_as_44_, v_i_boxed_47_, v_stop_boxed_48_);
lean_dec_ref(v_as_44_);
lean_dec(v_a_43_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object* v_as_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = lean_array_get_size(v_as_51_);
v___x_55_ = lean_nat_dec_lt(v___x_53_, v___x_54_);
if (v___x_55_ == 0)
{
return v___x_55_;
}
else
{
if (v___x_55_ == 0)
{
return v___x_55_;
}
else
{
size_t v___x_56_; size_t v___x_57_; uint8_t v___x_58_; 
v___x_56_ = ((size_t)0ULL);
v___x_57_ = lean_usize_of_nat(v___x_54_);
v___x_58_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_52_, v_as_51_, v___x_56_, v___x_57_);
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object* v_as_59_, lean_object* v_a_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_as_59_, v_a_60_);
lean_dec(v_a_60_);
lean_dec_ref(v_as_59_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object* v_irExtNames_63_, lean_object* v_as_64_, size_t v_i_65_, size_t v_stop_66_, lean_object* v_b_67_){
_start:
{
lean_object* v___y_69_; uint8_t v___x_73_; 
v___x_73_ = lean_usize_dec_eq(v_i_65_, v_stop_66_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v_fst_75_; uint8_t v___x_76_; 
v___x_74_ = lean_array_uget_borrowed(v_as_64_, v_i_65_);
v_fst_75_ = lean_ctor_get(v___x_74_, 0);
v___x_76_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_irExtNames_63_, v_fst_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
lean_inc(v___x_74_);
v___x_77_ = lean_array_push(v_b_67_, v___x_74_);
v___y_69_ = v___x_77_;
goto v___jp_68_;
}
else
{
v___y_69_ = v_b_67_;
goto v___jp_68_;
}
}
else
{
return v_b_67_;
}
v___jp_68_:
{
size_t v___x_70_; size_t v___x_71_; 
v___x_70_ = ((size_t)1ULL);
v___x_71_ = lean_usize_add(v_i_65_, v___x_70_);
v_i_65_ = v___x_71_;
v_b_67_ = v___y_69_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object* v_irExtNames_78_, lean_object* v_as_79_, lean_object* v_i_80_, lean_object* v_stop_81_, lean_object* v_b_82_){
_start:
{
size_t v_i_boxed_83_; size_t v_stop_boxed_84_; lean_object* v_res_85_; 
v_i_boxed_83_ = lean_unbox_usize(v_i_80_);
lean_dec(v_i_80_);
v_stop_boxed_84_ = lean_unbox_usize(v_stop_81_);
lean_dec(v_stop_81_);
v_res_85_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_78_, v_as_79_, v_i_boxed_83_, v_stop_boxed_84_, v_b_82_);
lean_dec_ref(v_as_79_);
lean_dec_ref(v_irExtNames_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t v_sz_86_, size_t v_i_87_, lean_object* v_bs_88_){
_start:
{
uint8_t v___x_89_; 
v___x_89_ = lean_usize_dec_lt(v_i_87_, v_sz_86_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; 
v___x_90_ = l_unsafeCast___redArg(v_bs_88_);
lean_dec_ref(v_bs_88_);
return v___x_90_;
}
else
{
lean_object* v_v_91_; lean_object* v___x_92_; lean_object* v_fst_93_; lean_object* v___x_94_; lean_object* v_bs_x27_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v_v_91_ = lean_array_uget_borrowed(v_bs_88_, v_i_87_);
v___x_92_ = l_unsafeCast___redArg(v_v_91_);
v_fst_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_fst_93_);
lean_dec(v___x_92_);
v___x_94_ = lean_unsigned_to_nat(0u);
v_bs_x27_95_ = lean_array_uset(v_bs_88_, v_i_87_, v___x_94_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_87_, v___x_96_);
v___x_98_ = l_unsafeCast___redArg(v_fst_93_);
lean_dec(v_fst_93_);
v___x_99_ = lean_array_uset(v_bs_x27_95_, v_i_87_, v___x_98_);
v_i_87_ = v___x_97_;
v_bs_88_ = v___x_99_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object* v_sz_101_, lean_object* v_i_102_, lean_object* v_bs_103_){
_start:
{
size_t v_sz_boxed_104_; size_t v_i_boxed_105_; lean_object* v_res_106_; 
v_sz_boxed_104_ = lean_unbox_usize(v_sz_101_);
lean_dec(v_sz_101_);
v_i_boxed_105_ = lean_unbox_usize(v_i_102_);
lean_dec(v_i_102_);
v_res_106_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_boxed_104_, v_i_boxed_105_, v_bs_103_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object* v_env_111_){
_start:
{
lean_object* v_irEntries_113_; size_t v_sz_114_; size_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_irExtNames_118_; uint8_t v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
lean_inc_ref_n(v_env_111_, 2);
v_irEntries_113_ = lean_ir_export_entries(v_env_111_);
v_sz_114_ = lean_array_size(v_irEntries_113_);
v___x_115_ = ((size_t)0ULL);
v___x_116_ = l_unsafeCast___redArg(v_irEntries_113_);
v___x_117_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_114_, v___x_115_, v___x_116_);
v_irExtNames_118_ = l_unsafeCast___redArg(v___x_117_);
lean_dec_ref(v___x_117_);
v___x_119_ = 2;
v___x_120_ = lean_box(0);
v___x_121_ = l_Lean_mkModuleData(v_env_111_, v___x_119_, v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_149_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_149_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_149_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_149_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___y_127_; lean_object* v_entries_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_entries_139_ = lean_ctor_get(v_a_122_, 4);
lean_inc_ref(v_entries_139_);
lean_dec(v_a_122_);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_array_get_size(v_entries_139_);
v___x_142_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__1));
v___x_143_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_143_ == 0)
{
lean_dec_ref(v_entries_139_);
lean_dec(v_irExtNames_118_);
v___y_127_ = v___x_142_;
goto v___jp_126_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = lean_nat_dec_le(v___x_141_, v___x_141_);
if (v___x_144_ == 0)
{
if (v___x_143_ == 0)
{
lean_dec_ref(v_entries_139_);
lean_dec(v_irExtNames_118_);
v___y_127_ = v___x_142_;
goto v___jp_126_;
}
else
{
size_t v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_usize_of_nat(v___x_141_);
v___x_146_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_118_, v_entries_139_, v___x_115_, v___x_145_, v___x_142_);
lean_dec_ref(v_entries_139_);
lean_dec(v_irExtNames_118_);
v___y_127_ = v___x_146_;
goto v___jp_126_;
}
}
else
{
size_t v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_usize_of_nat(v___x_141_);
v___x_148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_118_, v_entries_139_, v___x_115_, v___x_147_, v___x_142_);
lean_dec_ref(v_entries_139_);
lean_dec(v_irExtNames_118_);
v___y_127_ = v___x_148_;
goto v___jp_126_;
}
}
v___jp_126_:
{
lean_object* v___x_128_; uint8_t v_isModule_129_; lean_object* v_imports_130_; lean_object* v___x_131_; uint8_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_128_ = l_Lean_Environment_header(v_env_111_);
v_isModule_129_ = lean_ctor_get_uint8(v___x_128_, sizeof(void*)*7 + 4);
v_imports_130_ = lean_ctor_get(v___x_128_, 1);
lean_inc_ref(v_imports_130_);
lean_dec_ref(v___x_128_);
v___x_131_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__0));
v___x_132_ = 1;
v___x_133_ = lean_get_ir_extra_const_names(v_env_111_, v___x_119_, v___x_132_);
v___x_134_ = l_Array_append___redArg(v_irEntries_113_, v___y_127_);
lean_dec_ref(v___y_127_);
v___x_135_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_135_, 0, v_imports_130_);
lean_ctor_set(v___x_135_, 1, v___x_131_);
lean_ctor_set(v___x_135_, 2, v___x_131_);
lean_ctor_set(v___x_135_, 3, v___x_133_);
lean_ctor_set(v___x_135_, 4, v___x_134_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*5, v_isModule_129_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_135_);
v___x_137_ = v___x_124_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
else
{
lean_dec(v_irExtNames_118_);
lean_dec_ref(v_irEntries_113_);
lean_dec_ref(v_env_111_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object* v_env_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_LeanIR_0__mkIRData(v_env_150_);
return v_res_152_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_155_ = lean_string_utf8_byte_size(v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object* v_s_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_157_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_158_ = lean_string_utf8_byte_size(v_s_156_);
v___x_159_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1);
v___x_160_ = lean_nat_dec_le(v___x_159_, v___x_158_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
lean_dec_ref(v_s_156_);
v___x_161_ = lean_box(0);
return v___x_161_;
}
else
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_string_memcmp(v_s_156_, v___x_157_, v___x_162_, v___x_162_, v___x_159_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; 
lean_dec_ref(v_s_156_);
v___x_164_ = lean_box(0);
return v___x_164_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_inc_ref(v_s_156_);
v___x_165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_165_, 0, v_s_156_);
lean_ctor_set(v___x_165_, 1, v___x_162_);
lean_ctor_set(v___x_165_, 2, v___x_158_);
v___x_166_ = l_String_Slice_pos_x21(v___x_165_, v___x_159_);
lean_dec_ref_known(v___x_165_, 3);
v___x_167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_167_, 0, v_s_156_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
lean_ctor_set(v___x_167_, 2, v___x_158_);
v___x_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object* v_s_169_, lean_object* v_pat_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_s_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object* v_s_172_, lean_object* v_pat_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(v_s_172_, v_pat_173_);
lean_dec_ref(v_pat_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object* v_val_175_, lean_object* v_a_176_, lean_object* v_b_177_){
_start:
{
lean_object* v_str_178_; lean_object* v_startInclusive_179_; lean_object* v_endExclusive_180_; lean_object* v___x_181_; uint8_t v_decide_182_; 
v_str_178_ = lean_ctor_get(v_val_175_, 0);
v_startInclusive_179_ = lean_ctor_get(v_val_175_, 1);
v_endExclusive_180_ = lean_ctor_get(v_val_175_, 2);
v___x_181_ = lean_nat_sub(v_endExclusive_180_, v_startInclusive_179_);
v_decide_182_ = lean_nat_dec_eq(v_a_176_, v___x_181_);
lean_dec(v___x_181_);
if (v_decide_182_ == 0)
{
lean_object* v___x_183_; uint32_t v___x_184_; uint32_t v___x_185_; uint8_t v___x_186_; 
v___x_183_ = lean_nat_add(v_startInclusive_179_, v_a_176_);
v___x_184_ = lean_string_utf8_get_fast(v_str_178_, v___x_183_);
v___x_185_ = 61;
v___x_186_ = lean_uint32_dec_eq(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
lean_dec(v_a_176_);
v___x_187_ = lean_box(0);
v___x_188_ = lean_string_utf8_next_fast(v_str_178_, v___x_183_);
lean_dec(v___x_183_);
v___x_189_ = lean_nat_sub(v___x_188_, v_startInclusive_179_);
v_a_176_ = v___x_189_;
v_b_177_ = v___x_187_;
goto _start;
}
else
{
lean_object* v___x_191_; 
lean_dec(v___x_183_);
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v_a_176_);
return v___x_191_;
}
}
else
{
lean_dec(v_a_176_);
lean_inc(v_b_177_);
return v_b_177_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object* v_val_192_, lean_object* v_a_193_, lean_object* v_b_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_192_, v_a_193_, v_b_194_);
lean_dec(v_b_194_);
lean_dec_ref(v_val_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object* v_opts_203_, lean_object* v_arg_204_){
_start:
{
lean_object* v___x_206_; 
lean_inc_ref(v_arg_204_);
v___x_206_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_arg_204_);
if (lean_obj_tag(v___x_206_) == 1)
{
lean_object* v_val_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_arg_204_);
v_val_207_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_271_ == 0)
{
v___x_209_ = v___x_206_;
v_isShared_210_ = v_isSharedCheck_271_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_val_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_271_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___y_212_; lean_object* v_searcher_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_searcher_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_box(0);
v___x_266_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_207_, v_searcher_264_, v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_startInclusive_267_; lean_object* v_endExclusive_268_; lean_object* v___x_269_; 
v_startInclusive_267_ = lean_ctor_get(v_val_207_, 1);
v_endExclusive_268_ = lean_ctor_get(v_val_207_, 2);
v___x_269_ = lean_nat_sub(v_endExclusive_268_, v_startInclusive_267_);
v___y_212_ = v___x_269_;
goto v___jp_211_;
}
else
{
lean_object* v_val_270_; 
v_val_270_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_val_270_);
lean_dec_ref_known(v___x_266_, 1);
v___y_212_ = v_val_270_;
goto v___jp_211_;
}
v___jp_211_:
{
lean_object* v_str_213_; lean_object* v_startInclusive_214_; lean_object* v_endExclusive_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_263_; 
v_str_213_ = lean_ctor_get(v_val_207_, 0);
v_startInclusive_214_ = lean_ctor_get(v_val_207_, 1);
v_endExclusive_215_ = lean_ctor_get(v_val_207_, 2);
v_isSharedCheck_263_ = !lean_is_exclusive(v_val_207_);
if (v_isSharedCheck_263_ == 0)
{
v___x_217_ = v_val_207_;
v_isShared_218_ = v_isSharedCheck_263_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_endExclusive_215_);
lean_inc(v_startInclusive_214_);
lean_inc(v_str_213_);
lean_dec(v_val_207_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_263_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; uint8_t v_decide_220_; 
v___x_219_ = lean_nat_sub(v_endExclusive_215_, v_startInclusive_214_);
v_decide_220_ = lean_nat_dec_eq(v___y_212_, v___x_219_);
lean_dec(v___x_219_);
if (v_decide_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_221_ = lean_nat_add(v_startInclusive_214_, v___y_212_);
lean_dec(v___y_212_);
lean_inc(v___x_221_);
lean_inc(v_startInclusive_214_);
lean_inc_ref(v_str_213_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 2, v___x_221_);
v___x_223_ = v___x_217_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_str_213_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_startInclusive_214_);
lean_ctor_set(v_reuseFailAlloc_258_, 2, v___x_221_);
v___x_223_ = v_reuseFailAlloc_258_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v_name_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v_val_228_; lean_object* v___x_229_; 
v_name_224_ = l_String_Slice_toName(v___x_223_);
lean_dec_ref(v___x_223_);
v___x_225_ = lean_string_utf8_next_fast(v_str_213_, v___x_221_);
lean_dec(v___x_221_);
v___x_226_ = lean_nat_sub(v___x_225_, v_startInclusive_214_);
v___x_227_ = lean_nat_add(v_startInclusive_214_, v___x_226_);
lean_dec(v___x_226_);
lean_dec(v_startInclusive_214_);
v_val_228_ = lean_string_utf8_extract_fast(v_str_213_, v___x_227_, v_endExclusive_215_);
lean_dec(v_endExclusive_215_);
lean_dec(v___x_227_);
lean_dec_ref(v_str_213_);
v___x_229_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_249_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_249_ == 0)
{
v___x_232_ = v___x_229_;
v_isShared_233_ = v_isSharedCheck_249_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_249_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; 
v___x_234_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_230_, v_name_224_);
lean_dec(v_a_230_);
if (lean_obj_tag(v___x_234_) == 1)
{
lean_object* v_val_235_; lean_object* v___x_236_; 
lean_del_object(v___x_232_);
lean_del_object(v___x_209_);
v_val_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_val_235_);
lean_dec_ref_known(v___x_234_, 1);
v___x_236_ = l_Lean_Language_Lean_setOption(v_opts_203_, v_val_235_, v_name_224_, v_val_228_);
return v___x_236_;
}
else
{
lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
lean_dec(v___x_234_);
lean_dec_ref(v_val_228_);
lean_dec_ref(v_opts_203_);
v___x_237_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__0));
v___x_238_ = 1;
v___x_239_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_224_, v___x_238_);
v___x_240_ = lean_string_append(v___x_237_, v___x_239_);
lean_dec_ref(v___x_239_);
v___x_241_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_242_ = lean_string_append(v___x_240_, v___x_241_);
if (v_isShared_210_ == 0)
{
lean_ctor_set_tag(v___x_209_, 18);
lean_ctor_set(v___x_209_, 0, v___x_242_);
v___x_244_ = v___x_209_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_246_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set_tag(v___x_232_, 1);
lean_ctor_set(v___x_232_, 0, v___x_244_);
v___x_246_ = v___x_232_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v_val_228_);
lean_dec(v_name_224_);
lean_del_object(v___x_209_);
lean_dec_ref(v_opts_203_);
v_a_250_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_229_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_229_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
}
else
{
lean_object* v___x_259_; lean_object* v___x_261_; 
lean_del_object(v___x_217_);
lean_dec(v_endExclusive_215_);
lean_dec(v_startInclusive_214_);
lean_dec_ref(v_str_213_);
lean_dec(v___y_212_);
lean_dec_ref(v_opts_203_);
v___x_259_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__3));
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v___x_259_);
v___x_261_ = v___x_209_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
}
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v___x_206_);
lean_dec_ref(v_opts_203_);
v___x_272_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__4));
v___x_273_ = lean_string_append(v___x_272_, v_arg_204_);
lean_dec_ref(v_arg_204_);
v___x_274_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__5));
v___x_275_ = lean_string_append(v___x_273_, v___x_274_);
v___x_276_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object* v_opts_278_, lean_object* v_arg_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_LeanIR_0__setConfigOption(v_opts_278_, v_arg_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object* v_val_282_, lean_object* v_inst_283_, lean_object* v_R_284_, lean_object* v_a_285_, lean_object* v_b_286_, lean_object* v_c_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_282_, v_a_285_, v_b_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object* v_val_289_, lean_object* v_inst_290_, lean_object* v_R_291_, lean_object* v_a_292_, lean_object* v_b_293_, lean_object* v_c_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(v_val_289_, v_inst_290_, v_R_291_, v_a_292_, v_b_293_, v_c_294_);
lean_dec(v_b_293_);
lean_dec_ref(v_val_289_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object* v___x_296_, lean_object* v_inst_297_, lean_object* v_ext_298_, lean_object* v_env_299_){
_start:
{
lean_object* v_toEnvExtension_301_; lean_object* v_addImportedFn_302_; lean_object* v_asyncMode_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_importedEntries_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_334_; 
v_toEnvExtension_301_ = lean_ctor_get(v_ext_298_, 0);
lean_inc_ref(v_toEnvExtension_301_);
v_addImportedFn_302_ = lean_ctor_get(v_ext_298_, 2);
lean_inc_ref(v_addImportedFn_302_);
lean_dec_ref(v_ext_298_);
v_asyncMode_303_ = lean_ctor_get(v_toEnvExtension_301_, 2);
v___x_304_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v_inst_297_);
lean_inc_ref(v_env_299_);
v___x_305_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_304_, v_toEnvExtension_301_, v_env_299_, v_asyncMode_303_, v___x_296_);
lean_dec_ref(v___x_304_);
v_importedEntries_306_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_334_ == 0)
{
lean_object* v_unused_335_; 
v_unused_335_ = lean_ctor_get(v___x_305_, 1);
lean_dec(v_unused_335_);
v___x_308_ = v___x_305_;
v_isShared_309_ = v_isSharedCheck_334_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_importedEntries_306_);
lean_dec(v___x_305_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_334_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = l_Lean_Options_empty;
lean_inc_ref(v_env_299_);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v_env_299_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
lean_inc_ref(v_importedEntries_306_);
v___x_312_ = lean_apply_3(v_addImportedFn_302_, v_importedEntries_306_, v___x_311_, lean_box(0));
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_325_; 
v_a_313_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_325_ == 0)
{
v___x_315_ = v___x_312_;
v_isShared_316_ = v_isSharedCheck_325_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_312_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_325_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 1, v_a_313_);
v___x_318_ = v___x_308_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_importedEntries_306_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_a_313_);
v___x_318_ = v_reuseFailAlloc_324_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_319_ = lean_box(0);
v___x_320_ = l_Lean_EnvExtension_setState___redArg(v_toEnvExtension_301_, v_env_299_, v___x_318_, v___x_319_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_320_);
v___x_322_ = v___x_315_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
lean_del_object(v___x_308_);
lean_dec_ref(v_importedEntries_306_);
lean_dec_ref(v_toEnvExtension_301_);
lean_dec_ref(v_env_299_);
v_a_326_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_312_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_312_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object* v___x_336_, lean_object* v_inst_337_, lean_object* v_ext_338_, lean_object* v_env_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_main___elam__0___redArg(v___x_336_, v_inst_337_, v_ext_338_, v_env_339_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0(lean_object* v___x_342_, lean_object* v_00_u03b1_343_, lean_object* v_00_u03b2_344_, lean_object* v_00_u03c3_345_, lean_object* v_inst_346_, lean_object* v_ext_347_, lean_object* v_env_348_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_main___elam__0___redArg(v___x_342_, v_inst_346_, v_ext_347_, v_env_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object* v___x_351_, lean_object* v_00_u03b1_352_, lean_object* v_00_u03b2_353_, lean_object* v_00_u03c3_354_, lean_object* v_inst_355_, lean_object* v_ext_356_, lean_object* v_env_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_main___elam__0(v___x_351_, v_00_u03b1_352_, v_00_u03b2_353_, v_00_u03c3_354_, v_inst_355_, v_ext_356_, v_env_357_);
return v_res_359_;
}
}
static lean_object* _init_l_panic___at___00main_spec__5___closed__0(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = l_instInhabitedError;
v___x_361_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_361_, 0, lean_box(0));
lean_closure_set(v___x_361_, 1, lean_box(0));
lean_closure_set(v___x_361_, 2, v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object* v_msg_362_){
_start:
{
lean_object* v___x_364_; lean_object* v___x_18561__overap_365_; lean_object* v___x_366_; 
v___x_364_ = lean_obj_once(&l_panic___at___00main_spec__5___closed__0, &l_panic___at___00main_spec__5___closed__0_once, _init_l_panic___at___00main_spec__5___closed__0);
v___x_18561__overap_365_ = lean_panic_fn_borrowed(v___x_364_, v_msg_362_);
v___x_366_ = lean_apply_1(v___x_18561__overap_365_, lean_box(0));
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object* v_msg_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_panic___at___00main_spec__5(v_msg_367_);
return v_res_369_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00main_spec__8(lean_object* v_opts_370_, lean_object* v_opt_371_){
_start:
{
lean_object* v_name_372_; lean_object* v_defValue_373_; lean_object* v_map_374_; lean_object* v___x_375_; 
v_name_372_ = lean_ctor_get(v_opt_371_, 0);
v_defValue_373_ = lean_ctor_get(v_opt_371_, 1);
v_map_374_ = lean_ctor_get(v_opts_370_, 0);
v___x_375_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_374_, v_name_372_);
if (lean_obj_tag(v___x_375_) == 0)
{
uint8_t v___x_376_; 
v___x_376_ = lean_unbox(v_defValue_373_);
return v___x_376_;
}
else
{
lean_object* v_val_377_; 
v_val_377_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_val_377_);
lean_dec_ref_known(v___x_375_, 1);
if (lean_obj_tag(v_val_377_) == 1)
{
uint8_t v_v_378_; 
v_v_378_ = lean_ctor_get_uint8(v_val_377_, 0);
lean_dec_ref_known(v_val_377_, 0);
return v_v_378_;
}
else
{
uint8_t v___x_379_; 
lean_dec(v_val_377_);
v___x_379_ = lean_unbox(v_defValue_373_);
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object* v_opts_380_, lean_object* v_opt_381_){
_start:
{
uint8_t v_res_382_; lean_object* v_r_383_; 
v_res_382_ = l_Lean_Option_get___at___00main_spec__8(v_opts_380_, v_opt_381_);
lean_dec_ref(v_opt_381_);
lean_dec_ref(v_opts_380_);
v_r_383_ = lean_box(v_res_382_);
return v_r_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9(lean_object* v_opts_384_, lean_object* v_opt_385_){
_start:
{
lean_object* v_name_386_; lean_object* v_defValue_387_; lean_object* v_map_388_; lean_object* v___x_389_; 
v_name_386_ = lean_ctor_get(v_opt_385_, 0);
v_defValue_387_ = lean_ctor_get(v_opt_385_, 1);
v_map_388_ = lean_ctor_get(v_opts_384_, 0);
v___x_389_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_388_, v_name_386_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_inc(v_defValue_387_);
return v_defValue_387_;
}
else
{
lean_object* v_val_390_; 
v_val_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_val_390_);
lean_dec_ref_known(v___x_389_, 1);
if (lean_obj_tag(v_val_390_) == 3)
{
lean_object* v_v_391_; 
v_v_391_ = lean_ctor_get(v_val_390_, 0);
lean_inc(v_v_391_);
lean_dec_ref_known(v_val_390_, 1);
return v_v_391_;
}
else
{
lean_dec(v_val_390_);
lean_inc(v_defValue_387_);
return v_defValue_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9___boxed(lean_object* v_opts_392_, lean_object* v_opt_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Option_get___at___00main_spec__9(v_opts_392_, v_opt_393_);
lean_dec_ref(v_opt_393_);
lean_dec_ref(v_opts_392_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object* v_a_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
lean_dec(v_a_395_);
return v_x_396_;
}
else
{
lean_object* v_key_397_; lean_object* v_value_398_; lean_object* v_tail_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_432_; 
v_key_397_ = lean_ctor_get(v_x_396_, 0);
v_value_398_ = lean_ctor_get(v_x_396_, 1);
v_tail_399_ = lean_ctor_get(v_x_396_, 2);
v_isSharedCheck_432_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_432_ == 0)
{
v___x_401_ = v_x_396_;
v_isShared_402_ = v_isSharedCheck_432_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_tail_399_);
lean_inc(v_value_398_);
lean_inc(v_key_397_);
lean_dec(v_x_396_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_432_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
uint8_t v___x_403_; 
v___x_403_ = lean_name_eq(v_key_397_, v_a_395_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_404_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_395_, v_tail_399_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 2, v___x_404_);
v___x_406_ = v___x_401_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_key_397_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_value_398_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
else
{
lean_object* v_toEffectiveImport_408_; lean_object* v_parts_409_; lean_object* v_irParts_410_; uint8_t v_needsIRTrans_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_431_; 
lean_dec(v_key_397_);
v_toEffectiveImport_408_ = lean_ctor_get(v_value_398_, 0);
v_parts_409_ = lean_ctor_get(v_value_398_, 1);
v_irParts_410_ = lean_ctor_get(v_value_398_, 2);
v_needsIRTrans_411_ = lean_ctor_get_uint8(v_value_398_, sizeof(void*)*3);
v_isSharedCheck_431_ = !lean_is_exclusive(v_value_398_);
if (v_isSharedCheck_431_ == 0)
{
v___x_413_ = v_value_398_;
v_isShared_414_ = v_isSharedCheck_431_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_irParts_410_);
lean_inc(v_parts_409_);
lean_inc(v_toEffectiveImport_408_);
lean_dec(v_value_398_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_431_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v_toImport_415_; uint8_t v_hasData_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_430_; 
v_toImport_415_ = lean_ctor_get(v_toEffectiveImport_408_, 0);
v_hasData_416_ = lean_ctor_get_uint8(v_toEffectiveImport_408_, sizeof(void*)*1 + 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_toEffectiveImport_408_);
if (v_isSharedCheck_430_ == 0)
{
v___x_418_ = v_toEffectiveImport_408_;
v_isShared_419_ = v_isSharedCheck_430_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_toImport_415_);
lean_dec(v_toEffectiveImport_408_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_430_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
uint8_t v___x_420_; lean_object* v___x_422_; 
v___x_420_ = 0;
if (v_isShared_419_ == 0)
{
v___x_422_ = v___x_418_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_toImport_415_);
lean_ctor_set_uint8(v_reuseFailAlloc_429_, sizeof(void*)*1 + 1, v_hasData_416_);
v___x_422_ = v_reuseFailAlloc_429_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_424_; 
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*1, v___x_420_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 0, v___x_422_);
v___x_424_ = v___x_413_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_parts_409_);
lean_ctor_set(v_reuseFailAlloc_428_, 2, v_irParts_410_);
lean_ctor_set_uint8(v_reuseFailAlloc_428_, sizeof(void*)*3, v_needsIRTrans_411_);
v___x_424_ = v_reuseFailAlloc_428_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_426_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 1, v___x_424_);
lean_ctor_set(v___x_401_, 0, v_a_395_);
v___x_426_ = v___x_401_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_395_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_tail_399_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object* v_m_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_size_435_; lean_object* v_buckets_436_; lean_object* v___x_437_; uint64_t v___y_439_; lean_object* v___x_466_; 
v_size_435_ = lean_ctor_get(v_m_433_, 0);
v_buckets_436_ = lean_ctor_get(v_m_433_, 1);
v___x_437_ = lean_array_get_size(v_buckets_436_);
v___x_466_ = l_unsafeCast___redArg(v_a_434_);
if (lean_obj_tag(v___x_466_) == 0)
{
uint64_t v___x_467_; 
v___x_467_ = 1723ULL;
v___y_439_ = v___x_467_;
goto v___jp_438_;
}
else
{
uint64_t v_hash_468_; 
v_hash_468_ = lean_ctor_get_uint64(v___x_466_, sizeof(void*)*2);
lean_dec(v___x_466_);
v___y_439_ = v_hash_468_;
goto v___jp_438_;
}
v___jp_438_:
{
uint64_t v___x_440_; uint64_t v___x_441_; uint64_t v_fold_442_; uint64_t v___x_443_; uint64_t v___x_444_; uint64_t v___x_445_; size_t v___x_446_; size_t v___x_447_; size_t v___x_448_; size_t v___x_449_; size_t v___x_450_; lean_object* v_bucket_451_; uint8_t v___x_452_; 
v___x_440_ = 32ULL;
v___x_441_ = lean_uint64_shift_right(v___y_439_, v___x_440_);
v_fold_442_ = lean_uint64_xor(v___y_439_, v___x_441_);
v___x_443_ = 16ULL;
v___x_444_ = lean_uint64_shift_right(v_fold_442_, v___x_443_);
v___x_445_ = lean_uint64_xor(v_fold_442_, v___x_444_);
v___x_446_ = lean_uint64_to_usize(v___x_445_);
v___x_447_ = lean_usize_of_nat(v___x_437_);
v___x_448_ = ((size_t)1ULL);
v___x_449_ = lean_usize_sub(v___x_447_, v___x_448_);
v___x_450_ = lean_usize_land(v___x_446_, v___x_449_);
v_bucket_451_ = lean_array_uget_borrowed(v_buckets_436_, v___x_450_);
v___x_452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_a_434_, v_bucket_451_);
if (v___x_452_ == 0)
{
lean_dec(v_a_434_);
return v_m_433_;
}
else
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_463_; 
lean_inc(v_bucket_451_);
lean_inc_ref(v_buckets_436_);
lean_inc(v_size_435_);
v_isSharedCheck_463_ = !lean_is_exclusive(v_m_433_);
if (v_isSharedCheck_463_ == 0)
{
lean_object* v_unused_464_; lean_object* v_unused_465_; 
v_unused_464_ = lean_ctor_get(v_m_433_, 1);
lean_dec(v_unused_464_);
v_unused_465_ = lean_ctor_get(v_m_433_, 0);
lean_dec(v_unused_465_);
v___x_454_ = v_m_433_;
v_isShared_455_ = v_isSharedCheck_463_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_m_433_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_463_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v_buckets_457_; lean_object* v_bucket_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_456_ = lean_box(0);
v_buckets_457_ = lean_array_uset(v_buckets_436_, v___x_450_, v___x_456_);
v_bucket_458_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_434_, v_bucket_451_);
v___x_459_ = lean_array_uset(v_buckets_457_, v___x_450_, v_bucket_458_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_459_);
v___x_461_ = v___x_454_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_size_435_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__0(lean_object* v___x_469_, lean_object* v___x_470_, uint8_t v___x_471_, lean_object* v_importArts_472_, uint8_t v___y_473_, uint8_t v___x_474_, lean_object* v_name_475_, uint8_t v___x_476_, lean_object* v___x_477_, uint8_t v___x_478_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_st_mk_ref(v___x_469_);
v___x_481_ = l_Lean_importModulesCore(v___x_470_, v___x_471_, v_importArts_472_, v___y_473_, v___x_474_, v___x_480_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v___x_482_; lean_object* v_moduleNameMap_483_; lean_object* v_moduleNames_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_498_; 
lean_dec_ref_known(v___x_481_, 1);
v___x_482_ = lean_st_ref_get(v___x_480_);
lean_dec(v___x_480_);
v_moduleNameMap_483_ = lean_ctor_get(v___x_482_, 0);
v_moduleNames_484_ = lean_ctor_get(v___x_482_, 1);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_498_ == 0)
{
v___x_486_ = v___x_482_;
v_isShared_487_ = v_isSharedCheck_498_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_moduleNames_484_);
lean_inc(v_moduleNameMap_483_);
lean_dec(v___x_482_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_498_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_488_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(v_moduleNameMap_483_, v_name_475_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_488_);
v___x_490_ = v___x_486_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_moduleNames_484_);
v___x_490_ = v_reuseFailAlloc_497_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
uint32_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_491_ = 0;
v___x_492_ = l_Lean_OLeanLevel_ctorIdx(v___x_471_);
v___x_493_ = l_Lean_OLeanLevel_ctorIdx(v___x_476_);
v___x_494_ = lean_nat_dec_eq(v___x_492_, v___x_493_);
lean_dec(v___x_493_);
lean_dec(v___x_492_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; 
v___x_495_ = l_Lean_finalizeImport(v___x_490_, v___x_470_, v___x_477_, v___x_491_, v___x_474_, v___x_478_, v___x_471_, v___x_474_, v___x_474_);
lean_dec_ref(v___x_490_);
return v___x_495_;
}
else
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_finalizeImport(v___x_490_, v___x_470_, v___x_477_, v___x_491_, v___x_474_, v___x_478_, v___x_471_, v___x_478_, v___x_474_);
lean_dec_ref(v___x_490_);
return v___x_496_;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec(v___x_480_);
lean_dec_ref(v___x_477_);
lean_dec(v_name_475_);
lean_dec_ref(v___x_470_);
v_a_499_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_481_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_481_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__0___boxed(lean_object* v___x_507_, lean_object* v___x_508_, lean_object* v___x_509_, lean_object* v_importArts_510_, lean_object* v___y_511_, lean_object* v___x_512_, lean_object* v_name_513_, lean_object* v___x_514_, lean_object* v___x_515_, lean_object* v___x_516_, lean_object* v___y_517_){
_start:
{
uint8_t v___x_35413__boxed_518_; uint8_t v___y_35414__boxed_519_; uint8_t v___x_35415__boxed_520_; uint8_t v___x_35416__boxed_521_; uint8_t v___x_35418__boxed_522_; lean_object* v_res_523_; 
v___x_35413__boxed_518_ = lean_unbox(v___x_509_);
v___y_35414__boxed_519_ = lean_unbox(v___y_511_);
v___x_35415__boxed_520_ = lean_unbox(v___x_512_);
v___x_35416__boxed_521_ = lean_unbox(v___x_514_);
v___x_35418__boxed_522_ = lean_unbox(v___x_516_);
v_res_523_ = l_main___lam__0(v___x_507_, v___x_508_, v___x_35413__boxed_518_, v_importArts_510_, v___y_35414__boxed_519_, v___x_35415__boxed_520_, v_name_513_, v___x_35416__boxed_521_, v___x_515_, v___x_35418__boxed_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_main___lam__1(lean_object* v___x_527_, lean_object* v___x_528_, lean_object* v_head_529_, lean_object* v___x_530_, lean_object* v___x_531_, lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v___x_534_, lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v___x_537_, uint8_t v___x_538_, lean_object* v_name_539_, lean_object* v_a_540_, uint8_t v___x_541_, lean_object* v___x_542_){
_start:
{
lean_object* v_a_545_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; lean_object* v___y_555_; lean_object* v___x_587_; uint8_t v___y_589_; lean_object* v_env_609_; uint8_t v___x_610_; 
v___x_548_ = lean_io_get_num_heartbeats();
v___x_549_ = lean_st_mk_ref(v___x_527_);
v___x_550_ = l_Lean_inheritedTraceOptions;
v___x_551_ = lean_st_ref_get(v___x_550_);
v___x_552_ = l_Lean_diagnostics;
v___x_553_ = l_Lean_Option_get___at___00main_spec__8(v___x_528_, v___x_552_);
v___x_587_ = lean_st_ref_get(v___x_549_);
v_env_609_ = lean_ctor_get(v___x_587_, 0);
lean_inc_ref(v_env_609_);
lean_dec(v___x_587_);
v___x_610_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_609_);
lean_dec_ref(v_env_609_);
if (v___x_553_ == 0)
{
if (v___x_610_ == 0)
{
v___y_589_ = v___x_541_;
goto v___jp_588_;
}
else
{
v___y_589_ = v___x_553_;
goto v___jp_588_;
}
}
else
{
v___y_589_ = v___x_610_;
goto v___jp_588_;
}
v___jp_544_:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_mk_io_user_error(v_a_545_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
v___jp_554_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_556_ = l_Lean_maxRecDepth;
v___x_557_ = l_Lean_Option_get___at___00main_spec__9(v___x_528_, v___x_556_);
lean_inc(v___x_531_);
v___x_558_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_558_, 0, v_head_529_);
lean_ctor_set(v___x_558_, 1, v___x_530_);
lean_ctor_set(v___x_558_, 2, v___x_528_);
lean_ctor_set(v___x_558_, 3, v___x_557_);
lean_ctor_set(v___x_558_, 4, v___x_531_);
lean_ctor_set(v___x_558_, 5, v___x_532_);
lean_ctor_set(v___x_558_, 6, v___x_548_);
lean_ctor_set(v___x_558_, 7, v___x_533_);
lean_ctor_set(v___x_558_, 8, v___x_531_);
lean_ctor_set(v___x_558_, 9, v___x_534_);
lean_ctor_set(v___x_558_, 10, v___x_535_);
lean_ctor_set(v___x_558_, 11, v___x_551_);
v___x_559_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_559_, 0, v___x_558_);
lean_ctor_set(v___x_559_, 1, v___x_536_);
lean_ctor_set(v___x_559_, 2, v___x_537_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*3, v___x_553_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*3 + 1, v___x_538_);
v___x_560_ = l_Lean_Compiler_LCNF_emitC(v_name_539_, v___x_559_, v___y_555_);
lean_dec(v___y_555_);
lean_dec_ref_known(v___x_559_, 3);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = lean_st_ref_get(v___x_549_);
lean_dec(v___x_549_);
lean_dec(v___x_562_);
v___x_563_ = lean_string_to_utf8(v_a_561_);
lean_dec(v_a_561_);
v___x_564_ = lean_io_prim_handle_write(v_a_540_, v___x_563_);
lean_dec_ref(v___x_563_);
return v___x_564_;
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_586_; 
lean_dec(v___x_549_);
v_a_565_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_586_ == 0)
{
v___x_567_ = v___x_560_;
v_isShared_568_ = v_isSharedCheck_586_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_560_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_586_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
if (lean_obj_tag(v_a_565_) == 0)
{
lean_object* v_msg_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v_msg_569_ = lean_ctor_get(v_a_565_, 1);
lean_inc_ref(v_msg_569_);
lean_dec_ref_known(v_a_565_, 2);
v___x_570_ = l_Lean_MessageData_toString(v_msg_569_);
v___x_571_ = lean_mk_io_user_error(v___x_570_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_571_);
v___x_573_ = v___x_567_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
else
{
lean_object* v_id_575_; lean_object* v___x_576_; 
lean_del_object(v___x_567_);
v_id_575_ = lean_ctor_get(v_a_565_, 0);
lean_inc(v_id_575_);
lean_dec_ref_known(v_a_565_, 2);
v___x_576_ = l_Lean_InternalExceptionId_getName(v_id_575_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec(v_id_575_);
v_a_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_577_);
lean_dec_ref_known(v___x_576_, 1);
v___x_578_ = ((lean_object*)(l_main___lam__1___closed__0));
v___x_579_ = l_Lean_Name_toString(v_a_577_, v___x_541_);
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
lean_dec_ref(v___x_579_);
v_a_545_ = v___x_580_;
goto v___jp_544_;
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec_ref_known(v___x_576_, 1);
v___x_581_ = ((lean_object*)(l_main___lam__1___closed__1));
v___x_582_ = l_Nat_reprFast(v_id_575_);
v___x_583_ = lean_string_append(v___x_581_, v___x_582_);
lean_dec_ref(v___x_582_);
v___x_584_ = ((lean_object*)(l_main___lam__1___closed__2));
v___x_585_ = lean_string_append(v___x_583_, v___x_584_);
v_a_545_ = v___x_585_;
goto v___jp_544_;
}
}
}
}
}
v___jp_588_:
{
if (v___y_589_ == 0)
{
lean_object* v___x_590_; lean_object* v_env_591_; lean_object* v_nextMacroScope_592_; lean_object* v_ngen_593_; lean_object* v_auxDeclNGen_594_; lean_object* v_traceState_595_; lean_object* v_messages_596_; lean_object* v_infoState_597_; lean_object* v_snapshotTasks_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_607_; 
v___x_590_ = lean_st_ref_take(v___x_549_);
v_env_591_ = lean_ctor_get(v___x_590_, 0);
v_nextMacroScope_592_ = lean_ctor_get(v___x_590_, 1);
v_ngen_593_ = lean_ctor_get(v___x_590_, 2);
v_auxDeclNGen_594_ = lean_ctor_get(v___x_590_, 3);
v_traceState_595_ = lean_ctor_get(v___x_590_, 4);
v_messages_596_ = lean_ctor_get(v___x_590_, 6);
v_infoState_597_ = lean_ctor_get(v___x_590_, 7);
v_snapshotTasks_598_ = lean_ctor_get(v___x_590_, 8);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_607_ == 0)
{
lean_object* v_unused_608_; 
v_unused_608_ = lean_ctor_get(v___x_590_, 5);
lean_dec(v_unused_608_);
v___x_600_ = v___x_590_;
v_isShared_601_ = v_isSharedCheck_607_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_snapshotTasks_598_);
lean_inc(v_infoState_597_);
lean_inc(v_messages_596_);
lean_inc(v_traceState_595_);
lean_inc(v_auxDeclNGen_594_);
lean_inc(v_ngen_593_);
lean_inc(v_nextMacroScope_592_);
lean_inc(v_env_591_);
lean_dec(v___x_590_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_607_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = l_Lean_Kernel_enableDiag(v_env_591_, v___x_553_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 5, v___x_542_);
lean_ctor_set(v___x_600_, 0, v___x_602_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_nextMacroScope_592_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v_ngen_593_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v_auxDeclNGen_594_);
lean_ctor_set(v_reuseFailAlloc_606_, 4, v_traceState_595_);
lean_ctor_set(v_reuseFailAlloc_606_, 5, v___x_542_);
lean_ctor_set(v_reuseFailAlloc_606_, 6, v_messages_596_);
lean_ctor_set(v_reuseFailAlloc_606_, 7, v_infoState_597_);
lean_ctor_set(v_reuseFailAlloc_606_, 8, v_snapshotTasks_598_);
v___x_604_ = v_reuseFailAlloc_606_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_605_; 
v___x_605_ = lean_st_ref_put(v___x_549_, v___x_604_);
lean_inc(v___x_549_);
v___y_555_ = v___x_549_;
goto v___jp_554_;
}
}
}
else
{
lean_dec_ref(v___x_542_);
lean_inc(v___x_549_);
v___y_555_ = v___x_549_;
goto v___jp_554_;
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object** _args){
lean_object* v___x_611_ = _args[0];
lean_object* v___x_612_ = _args[1];
lean_object* v_head_613_ = _args[2];
lean_object* v___x_614_ = _args[3];
lean_object* v___x_615_ = _args[4];
lean_object* v___x_616_ = _args[5];
lean_object* v___x_617_ = _args[6];
lean_object* v___x_618_ = _args[7];
lean_object* v___x_619_ = _args[8];
lean_object* v___x_620_ = _args[9];
lean_object* v___x_621_ = _args[10];
lean_object* v___x_622_ = _args[11];
lean_object* v_name_623_ = _args[12];
lean_object* v_a_624_ = _args[13];
lean_object* v___x_625_ = _args[14];
lean_object* v___x_626_ = _args[15];
lean_object* v___y_627_ = _args[16];
_start:
{
uint8_t v___x_35506__boxed_628_; uint8_t v___x_35508__boxed_629_; lean_object* v_res_630_; 
v___x_35506__boxed_628_ = lean_unbox(v___x_622_);
v___x_35508__boxed_629_ = lean_unbox(v___x_625_);
v_res_630_ = l_main___lam__1(v___x_611_, v___x_612_, v_head_613_, v___x_614_, v___x_615_, v___x_616_, v___x_617_, v___x_618_, v___x_619_, v___x_620_, v___x_621_, v___x_35506__boxed_628_, v_name_623_, v_a_624_, v___x_35508__boxed_629_, v___x_626_);
lean_dec(v_a_624_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object* v_s_631_){
_start:
{
lean_object* v___x_633_; lean_object* v_putStr_634_; lean_object* v___x_635_; 
v___x_633_ = lean_get_stderr();
v_putStr_634_ = lean_ctor_get(v___x_633_, 4);
lean_inc_ref(v_putStr_634_);
lean_dec_ref(v___x_633_);
v___x_635_ = lean_apply_2(v_putStr_634_, v_s_631_, lean_box(0));
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object* v_s_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v_s_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object* v_s_639_){
_start:
{
uint32_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_641_ = 10;
v___x_642_ = lean_string_push(v_s_639_, v___x_641_);
v___x_643_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object* v_s_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_IO_eprintln___at___00main_spec__6(v_s_644_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object* v_o_650_, lean_object* v_k_651_, lean_object* v_v_652_){
_start:
{
lean_object* v_map_653_; uint8_t v_hasTrace_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_668_; 
v_map_653_ = lean_ctor_get(v_o_650_, 0);
v_hasTrace_654_ = lean_ctor_get_uint8(v_o_650_, sizeof(void*)*1);
v_isSharedCheck_668_ = !lean_is_exclusive(v_o_650_);
if (v_isSharedCheck_668_ == 0)
{
v___x_656_ = v_o_650_;
v_isShared_657_ = v_isSharedCheck_668_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_map_653_);
lean_dec(v_o_650_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_668_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_658_, 0, v_v_652_);
lean_inc(v_k_651_);
v___x_659_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_651_, v___x_658_, v_map_653_);
if (v_hasTrace_654_ == 0)
{
lean_object* v___x_660_; uint8_t v___x_661_; lean_object* v___x_663_; 
v___x_660_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_661_ = l_Lean_Name_isPrefixOf(v___x_660_, v_k_651_);
lean_dec(v_k_651_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_659_);
v___x_663_ = v___x_656_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_659_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_ctor_set_uint8(v___x_663_, sizeof(void*)*1, v___x_661_);
return v___x_663_;
}
}
else
{
lean_object* v___x_666_; 
lean_dec(v_k_651_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_659_);
v___x_666_ = v___x_656_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v___x_659_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, sizeof(void*)*1, v_hasTrace_654_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object* v_opts_669_, lean_object* v_opt_670_, lean_object* v_val_671_){
_start:
{
lean_object* v_name_672_; lean_object* v___x_673_; 
v_name_672_ = lean_ctor_get(v_opt_670_, 0);
lean_inc(v_name_672_);
lean_dec_ref(v_opt_670_);
v___x_673_ = l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(v_opts_669_, v_name_672_, v_val_671_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object* v___y_675_, lean_object* v_as_676_, size_t v_i_677_, size_t v_stop_678_, lean_object* v_b_679_){
_start:
{
lean_object* v___y_681_; uint8_t v___x_685_; 
v___x_685_ = lean_usize_dec_eq(v_i_677_, v_stop_678_);
if (v___x_685_ == 0)
{
lean_object* v_fst_686_; lean_object* v_snd_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___y_691_; 
v_fst_686_ = lean_ctor_get(v_b_679_, 0);
v_snd_687_ = lean_ctor_get(v_b_679_, 1);
v___x_688_ = lean_array_uget_borrowed(v_as_676_, v_i_677_);
v___x_689_ = l_Lean_IR_Decl_name(v___x_688_);
if (lean_obj_tag(v___x_689_) == 1)
{
lean_object* v_pre_704_; lean_object* v_str_705_; lean_object* v___x_706_; uint8_t v___x_707_; 
v_pre_704_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_pre_704_);
v_str_705_ = lean_ctor_get(v___x_689_, 1);
lean_inc_ref(v_str_705_);
v___x_706_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0));
v___x_707_ = lean_string_dec_eq(v_str_705_, v___x_706_);
lean_dec_ref(v_str_705_);
if (v___x_707_ == 0)
{
lean_dec(v_pre_704_);
lean_inc_ref(v___x_689_);
v___y_691_ = v___x_689_;
goto v___jp_690_;
}
else
{
v___y_691_ = v_pre_704_;
goto v___jp_690_;
}
}
else
{
lean_inc(v___x_689_);
v___y_691_ = v___x_689_;
goto v___jp_690_;
}
v___jp_690_:
{
uint8_t v___x_692_; 
lean_inc_ref(v___y_675_);
v___x_692_ = l_Lean_isExtern(v___y_675_, v___y_691_);
if (v___x_692_ == 0)
{
lean_dec(v___x_689_);
v___y_681_ = v_b_679_;
goto v___jp_680_;
}
else
{
lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_701_; 
lean_inc(v_snd_687_);
lean_inc(v_fst_686_);
v_isSharedCheck_701_ = !lean_is_exclusive(v_b_679_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; lean_object* v_unused_703_; 
v_unused_702_ = lean_ctor_get(v_b_679_, 1);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v_b_679_, 0);
lean_dec(v_unused_703_);
v___x_694_ = v_b_679_;
v_isShared_695_ = v_isSharedCheck_701_;
goto v_resetjp_693_;
}
else
{
lean_dec(v_b_679_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_701_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
lean_inc_n(v___x_688_, 2);
v___x_696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_688_);
lean_ctor_set(v___x_696_, 1, v_fst_686_);
v___x_697_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(v_snd_687_, v___x_689_, v___x_688_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 1, v___x_697_);
lean_ctor_set(v___x_694_, 0, v___x_696_);
v___x_699_ = v___x_694_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
v___y_681_ = v___x_699_;
goto v___jp_680_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_675_);
return v_b_679_;
}
v___jp_680_:
{
size_t v___x_682_; size_t v___x_683_; 
v___x_682_ = ((size_t)1ULL);
v___x_683_ = lean_usize_add(v_i_677_, v___x_682_);
v_i_677_ = v___x_683_;
v_b_679_ = v___y_681_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object* v___y_708_, lean_object* v_as_709_, lean_object* v_i_710_, lean_object* v_stop_711_, lean_object* v_b_712_){
_start:
{
size_t v_i_boxed_713_; size_t v_stop_boxed_714_; lean_object* v_res_715_; 
v_i_boxed_713_ = lean_unbox_usize(v_i_710_);
lean_dec(v_i_710_);
v_stop_boxed_714_ = lean_unbox_usize(v_stop_711_);
lean_dec(v_stop_711_);
v_res_715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_708_, v_as_709_, v_i_boxed_713_, v_stop_boxed_714_, v_b_712_);
lean_dec_ref(v_as_709_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_717_, lean_object* v_b_718_){
_start:
{
if (lean_obj_tag(v_as_x27_717_) == 0)
{
lean_object* v___x_720_; 
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v_b_718_);
return v___x_720_;
}
else
{
lean_object* v_head_721_; lean_object* v_tail_722_; lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_749_; 
v_head_721_ = lean_ctor_get(v_as_x27_717_, 0);
v_tail_722_ = lean_ctor_get(v_as_x27_717_, 1);
v_fst_723_ = lean_ctor_get(v_b_718_, 0);
v_snd_724_ = lean_ctor_get(v_b_718_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v_b_718_);
if (v_isSharedCheck_749_ == 0)
{
v___x_726_ = v_b_718_;
v_isShared_727_ = v_isSharedCheck_749_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_snd_724_);
lean_inc(v_fst_723_);
lean_dec(v_b_718_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_749_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_729_ = lean_string_dec_eq(v_head_721_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
lean_inc(v_head_721_);
v___x_730_ = l___private_LeanIR_0__setConfigOption(v_snd_724_, v_head_721_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v_a_731_);
v___x_733_ = v___x_726_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_fst_723_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_a_731_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_as_x27_717_ = v_tail_722_;
v_b_718_ = v___x_733_;
goto _start;
}
}
else
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_del_object(v___x_726_);
lean_dec(v_fst_723_);
v_a_736_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_730_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_730_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
}
else
{
lean_object* v___x_744_; lean_object* v___x_746_; 
lean_dec(v_fst_723_);
v___x_744_ = lean_box(v___x_729_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_744_);
v___x_746_ = v___x_726_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_snd_724_);
v___x_746_ = v_reuseFailAlloc_748_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
v_as_x27_717_ = v_tail_722_;
v_b_718_ = v___x_746_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_750_, lean_object* v_b_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_750_, v_b_751_);
lean_dec(v_as_x27_750_);
return v_res_753_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = lean_box(0);
v___x_755_ = l_unsafeCast___redArg(v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object* v_as_756_, size_t v_i_757_, size_t v_stop_758_, lean_object* v_b_759_){
_start:
{
uint8_t v___x_760_; 
v___x_760_ = lean_usize_dec_eq(v_i_757_, v_stop_758_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v_toEnvExtension_762_; lean_object* v_asyncMode_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; size_t v___x_767_; size_t v___x_768_; 
v___x_761_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_762_ = lean_ctor_get(v___x_761_, 0);
v_asyncMode_763_ = lean_ctor_get(v_toEnvExtension_762_, 2);
v___x_764_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0);
v___x_765_ = lean_array_uget_borrowed(v_as_756_, v_i_757_);
lean_inc(v___x_765_);
v___x_766_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_761_, v_b_759_, v___x_765_, v_asyncMode_763_, v___x_764_);
v___x_767_ = ((size_t)1ULL);
v___x_768_ = lean_usize_add(v_i_757_, v___x_767_);
v_i_757_ = v___x_768_;
v_b_759_ = v___x_766_;
goto _start;
}
else
{
return v_b_759_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object* v_as_770_, lean_object* v_i_771_, lean_object* v_stop_772_, lean_object* v_b_773_){
_start:
{
size_t v_i_boxed_774_; size_t v_stop_boxed_775_; lean_object* v_res_776_; 
v_i_boxed_774_ = lean_unbox_usize(v_i_771_);
lean_dec(v_i_771_);
v_stop_boxed_775_ = lean_unbox_usize(v_stop_772_);
lean_dec(v_stop_772_);
v_res_776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_as_770_, v_i_boxed_774_, v_stop_boxed_775_, v_b_773_);
lean_dec_ref(v_as_770_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(lean_object* v_as_780_, size_t v_sz_781_, size_t v_i_782_, lean_object* v_b_783_, lean_object* v___y_784_){
_start:
{
uint8_t v___x_786_; 
v___x_786_ = lean_usize_dec_lt(v_i_782_, v_sz_781_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; 
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v_b_783_);
return v___x_787_;
}
else
{
uint8_t v___x_788_; lean_object* v_a_789_; lean_object* v___x_790_; lean_object* v_ref_791_; lean_object* v___x_792_; 
lean_dec_ref(v_b_783_);
v___x_788_ = 0;
v_a_789_ = lean_array_uget_borrowed(v_as_780_, v_i_782_);
lean_inc(v_a_789_);
v___x_790_ = l_Lean_Message_toString(v_a_789_, v___x_788_);
v_ref_791_ = lean_ctor_get(v___y_784_, 2);
v___x_792_ = l_IO_eprintln___at___00main_spec__6(v___x_790_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; size_t v___x_794_; size_t v___x_795_; 
lean_dec_ref_known(v___x_792_, 1);
v___x_793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_794_ = ((size_t)1ULL);
v___x_795_ = lean_usize_add(v_i_782_, v___x_794_);
v_i_782_ = v___x_795_;
v_b_783_ = v___x_793_;
goto _start;
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_808_; 
v_a_797_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_808_ == 0)
{
v___x_799_ = v___x_792_;
v_isShared_800_ = v_isSharedCheck_808_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_792_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_808_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_806_; 
v___x_801_ = lean_io_error_to_string(v_a_797_);
v___x_802_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
v___x_803_ = l_Lean_MessageData_ofFormat(v___x_802_);
lean_inc(v_ref_791_);
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v_ref_791_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_804_);
v___x_806_ = v___x_799_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_804_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___boxed(lean_object* v_as_809_, lean_object* v_sz_810_, lean_object* v_i_811_, lean_object* v_b_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
size_t v_sz_boxed_815_; size_t v_i_boxed_816_; lean_object* v_res_817_; 
v_sz_boxed_815_ = lean_unbox_usize(v_sz_810_);
lean_dec(v_sz_810_);
v_i_boxed_816_ = lean_unbox_usize(v_i_811_);
lean_dec(v_i_811_);
v_res_817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(v_as_809_, v_sz_boxed_815_, v_i_boxed_816_, v_b_812_, v___y_813_);
lean_dec_ref(v___y_813_);
lean_dec_ref(v_as_809_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(lean_object* v_as_818_, size_t v_sz_819_, size_t v_i_820_, lean_object* v_b_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
uint8_t v___x_825_; 
v___x_825_ = lean_usize_dec_lt(v_i_820_, v_sz_819_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_826_, 0, v_b_821_);
return v___x_826_;
}
else
{
uint8_t v___x_827_; lean_object* v_a_828_; lean_object* v___x_829_; lean_object* v_ref_830_; lean_object* v___x_831_; 
lean_dec_ref(v_b_821_);
v___x_827_ = 0;
v_a_828_ = lean_array_uget_borrowed(v_as_818_, v_i_820_);
lean_inc(v_a_828_);
v___x_829_ = l_Lean_Message_toString(v_a_828_, v___x_827_);
v_ref_830_ = lean_ctor_get(v___y_822_, 2);
v___x_831_ = l_IO_eprintln___at___00main_spec__6(v___x_829_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v___x_832_; size_t v___x_833_; size_t v___x_834_; lean_object* v___x_835_; 
lean_dec_ref_known(v___x_831_, 1);
v___x_832_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_833_ = ((size_t)1ULL);
v___x_834_ = lean_usize_add(v_i_820_, v___x_833_);
v___x_835_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(v_as_818_, v_sz_819_, v___x_834_, v___x_832_, v___y_822_);
return v___x_835_;
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_847_; 
v_a_836_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_847_ == 0)
{
v___x_838_ = v___x_831_;
v_isShared_839_ = v_isSharedCheck_847_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_831_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_847_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_840_ = lean_io_error_to_string(v_a_836_);
v___x_841_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
v___x_842_ = l_Lean_MessageData_ofFormat(v___x_841_);
lean_inc(v_ref_830_);
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v_ref_830_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_843_);
v___x_845_ = v___x_838_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27___boxed(lean_object* v_as_848_, lean_object* v_sz_849_, lean_object* v_i_850_, lean_object* v_b_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
size_t v_sz_boxed_855_; size_t v_i_boxed_856_; lean_object* v_res_857_; 
v_sz_boxed_855_ = lean_unbox_usize(v_sz_849_);
lean_dec(v_sz_849_);
v_i_boxed_856_ = lean_unbox_usize(v_i_850_);
lean_dec(v_i_850_);
v_res_857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(v_as_848_, v_sz_boxed_855_, v_i_boxed_856_, v_b_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec_ref(v_as_848_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(lean_object* v_as_861_, size_t v_sz_862_, size_t v_i_863_, lean_object* v_b_864_, lean_object* v___y_865_){
_start:
{
uint8_t v___x_867_; 
v___x_867_ = lean_usize_dec_lt(v_i_863_, v_sz_862_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v_b_864_);
return v___x_868_;
}
else
{
uint8_t v___x_869_; lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v_ref_872_; lean_object* v___x_873_; 
lean_dec_ref(v_b_864_);
v___x_869_ = 0;
v_a_870_ = lean_array_uget_borrowed(v_as_861_, v_i_863_);
lean_inc(v_a_870_);
v___x_871_ = l_Lean_Message_toString(v_a_870_, v___x_869_);
v_ref_872_ = lean_ctor_get(v___y_865_, 2);
v___x_873_ = l_IO_eprintln___at___00main_spec__6(v___x_871_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v___x_874_; size_t v___x_875_; size_t v___x_876_; 
lean_dec_ref_known(v___x_873_, 1);
v___x_874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_875_ = ((size_t)1ULL);
v___x_876_ = lean_usize_add(v_i_863_, v___x_875_);
v_i_863_ = v___x_876_;
v_b_864_ = v___x_874_;
goto _start;
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_889_; 
v_a_878_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_889_ == 0)
{
v___x_880_ = v___x_873_;
v_isShared_881_ = v_isSharedCheck_889_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_873_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_889_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_882_ = lean_io_error_to_string(v_a_878_);
v___x_883_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
v___x_884_ = l_Lean_MessageData_ofFormat(v___x_883_);
lean_inc(v_ref_872_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v_ref_872_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_885_);
v___x_887_ = v___x_880_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___boxed(lean_object* v_as_890_, lean_object* v_sz_891_, lean_object* v_i_892_, lean_object* v_b_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
size_t v_sz_boxed_896_; size_t v_i_boxed_897_; lean_object* v_res_898_; 
v_sz_boxed_896_ = lean_unbox_usize(v_sz_891_);
lean_dec(v_sz_891_);
v_i_boxed_897_ = lean_unbox_usize(v_i_892_);
lean_dec(v_i_892_);
v_res_898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(v_as_890_, v_sz_boxed_896_, v_i_boxed_897_, v_b_893_, v___y_894_);
lean_dec_ref(v___y_894_);
lean_dec_ref(v_as_890_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(lean_object* v_as_899_, size_t v_sz_900_, size_t v_i_901_, lean_object* v_b_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
uint8_t v___x_906_; 
v___x_906_ = lean_usize_dec_lt(v_i_901_, v_sz_900_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; 
v___x_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_907_, 0, v_b_902_);
return v___x_907_;
}
else
{
uint8_t v___x_908_; lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v_ref_911_; lean_object* v___x_912_; 
lean_dec_ref(v_b_902_);
v___x_908_ = 0;
v_a_909_ = lean_array_uget_borrowed(v_as_899_, v_i_901_);
lean_inc(v_a_909_);
v___x_910_ = l_Lean_Message_toString(v_a_909_, v___x_908_);
v_ref_911_ = lean_ctor_get(v___y_903_, 2);
v___x_912_ = l_IO_eprintln___at___00main_spec__6(v___x_910_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v___x_913_; size_t v___x_914_; size_t v___x_915_; lean_object* v___x_916_; 
lean_dec_ref_known(v___x_912_, 1);
v___x_913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_914_ = ((size_t)1ULL);
v___x_915_ = lean_usize_add(v_i_901_, v___x_914_);
v___x_916_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(v_as_899_, v_sz_900_, v___x_915_, v___x_913_, v___y_903_);
return v___x_916_;
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_928_; 
v_a_917_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_928_ == 0)
{
v___x_919_ = v___x_912_;
v_isShared_920_ = v_isSharedCheck_928_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_912_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_928_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_921_ = lean_io_error_to_string(v_a_917_);
v___x_922_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
v___x_923_ = l_Lean_MessageData_ofFormat(v___x_922_);
lean_inc(v_ref_911_);
v___x_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_924_, 0, v_ref_911_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_924_);
v___x_926_ = v___x_919_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_924_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38___boxed(lean_object* v_as_929_, lean_object* v_sz_930_, lean_object* v_i_931_, lean_object* v_b_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
size_t v_sz_boxed_936_; size_t v_i_boxed_937_; lean_object* v_res_938_; 
v_sz_boxed_936_ = lean_unbox_usize(v_sz_930_);
lean_dec(v_sz_930_);
v_i_boxed_937_ = lean_unbox_usize(v_i_931_);
lean_dec(v_i_931_);
v_res_938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(v_as_929_, v_sz_boxed_936_, v_i_boxed_937_, v_b_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec_ref(v_as_929_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(lean_object* v_init_939_, lean_object* v_n_940_, lean_object* v_b_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
if (lean_obj_tag(v_n_940_) == 0)
{
lean_object* v_cs_945_; lean_object* v___x_946_; lean_object* v___x_947_; size_t v_sz_948_; size_t v___x_949_; lean_object* v___x_950_; 
v_cs_945_ = lean_ctor_get(v_n_940_, 0);
v___x_946_ = lean_box(0);
v___x_947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
lean_ctor_set(v___x_947_, 1, v_b_941_);
v_sz_948_ = lean_array_size(v_cs_945_);
v___x_949_ = ((size_t)0ULL);
v___x_950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(v_init_939_, v_cs_945_, v_sz_948_, v___x_949_, v___x_947_, v___y_942_, v___y_943_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_965_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_965_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_965_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_965_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v_fst_955_; 
v_fst_955_ = lean_ctor_get(v_a_951_, 0);
if (lean_obj_tag(v_fst_955_) == 0)
{
lean_object* v_snd_956_; lean_object* v___x_957_; lean_object* v___x_959_; 
v_snd_956_ = lean_ctor_get(v_a_951_, 1);
lean_inc(v_snd_956_);
lean_dec(v_a_951_);
v___x_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_957_, 0, v_snd_956_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_957_);
v___x_959_ = v___x_953_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
else
{
lean_object* v_val_961_; lean_object* v___x_963_; 
lean_inc_ref(v_fst_955_);
lean_dec(v_a_951_);
v_val_961_ = lean_ctor_get(v_fst_955_, 0);
lean_inc(v_val_961_);
lean_dec_ref_known(v_fst_955_, 1);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v_val_961_);
v___x_963_ = v___x_953_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_val_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_950_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_950_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
else
{
lean_object* v_vs_974_; lean_object* v___x_975_; lean_object* v___x_976_; size_t v_sz_977_; size_t v___x_978_; lean_object* v___x_979_; 
v_vs_974_ = lean_ctor_get(v_n_940_, 0);
v___x_975_ = lean_box(0);
v___x_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
lean_ctor_set(v___x_976_, 1, v_b_941_);
v_sz_977_ = lean_array_size(v_vs_974_);
v___x_978_ = ((size_t)0ULL);
v___x_979_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(v_vs_974_, v_sz_977_, v___x_978_, v___x_976_, v___y_942_, v___y_943_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_994_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_994_ == 0)
{
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_994_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_994_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_fst_984_; 
v_fst_984_ = lean_ctor_get(v_a_980_, 0);
if (lean_obj_tag(v_fst_984_) == 0)
{
lean_object* v_snd_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
v_snd_985_ = lean_ctor_get(v_a_980_, 1);
lean_inc(v_snd_985_);
lean_dec(v_a_980_);
v___x_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_986_, 0, v_snd_985_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v___x_986_);
v___x_988_ = v___x_982_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
else
{
lean_object* v_val_990_; lean_object* v___x_992_; 
lean_inc_ref(v_fst_984_);
lean_dec(v_a_980_);
v_val_990_ = lean_ctor_get(v_fst_984_, 0);
lean_inc(v_val_990_);
lean_dec_ref_known(v_fst_984_, 1);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v_val_990_);
v___x_992_ = v___x_982_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_val_990_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
v_a_995_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_979_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_979_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(lean_object* v_init_1003_, lean_object* v_as_1004_, size_t v_sz_1005_, size_t v_i_1006_, lean_object* v_b_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
uint8_t v___x_1011_; 
v___x_1011_ = lean_usize_dec_lt(v_i_1006_, v_sz_1005_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1012_, 0, v_b_1007_);
return v___x_1012_;
}
else
{
lean_object* v_snd_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1047_; 
v_snd_1013_ = lean_ctor_get(v_b_1007_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_b_1007_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v_b_1007_, 0);
lean_dec(v_unused_1048_);
v___x_1015_ = v_b_1007_;
v_isShared_1016_ = v_isSharedCheck_1047_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_snd_1013_);
lean_dec(v_b_1007_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1047_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1017_; lean_object* v_a_1018_; lean_object* v___x_1019_; 
v___x_1017_ = lean_box(0);
v_a_1018_ = lean_array_uget_borrowed(v_as_1004_, v_i_1006_);
lean_inc(v_snd_1013_);
v___x_1019_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(v_init_1003_, v_a_1018_, v_snd_1013_, v___y_1008_, v___y_1009_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1038_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1038_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1038_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
if (lean_obj_tag(v_a_1020_) == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1026_; 
v___x_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1024_, 0, v_a_1020_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1024_);
v___x_1026_ = v___x_1015_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1024_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_snd_1013_);
v___x_1026_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1028_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1026_);
v___x_1028_ = v___x_1022_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; 
lean_del_object(v___x_1022_);
lean_dec(v_snd_1013_);
v_a_1031_ = lean_ctor_get(v_a_1020_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v_a_1020_, 1);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 1, v_a_1031_);
lean_ctor_set(v___x_1015_, 0, v___x_1017_);
v___x_1033_ = v___x_1015_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_a_1031_);
v___x_1033_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
size_t v___x_1034_; size_t v___x_1035_; 
v___x_1034_ = ((size_t)1ULL);
v___x_1035_ = lean_usize_add(v_i_1006_, v___x_1034_);
v_i_1006_ = v___x_1035_;
v_b_1007_ = v___x_1033_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_del_object(v___x_1015_);
lean_dec(v_snd_1013_);
v_a_1039_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1019_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1019_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37___boxed(lean_object* v_init_1049_, lean_object* v_as_1050_, lean_object* v_sz_1051_, lean_object* v_i_1052_, lean_object* v_b_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
size_t v_sz_boxed_1057_; size_t v_i_boxed_1058_; lean_object* v_res_1059_; 
v_sz_boxed_1057_ = lean_unbox_usize(v_sz_1051_);
lean_dec(v_sz_1051_);
v_i_boxed_1058_ = lean_unbox_usize(v_i_1052_);
lean_dec(v_i_1052_);
v_res_1059_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(v_init_1049_, v_as_1050_, v_sz_boxed_1057_, v_i_boxed_1058_, v_b_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec_ref(v_as_1050_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26___boxed(lean_object* v_init_1060_, lean_object* v_n_1061_, lean_object* v_b_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(v_init_1060_, v_n_1061_, v_b_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec_ref(v_n_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12(lean_object* v_t_1067_, lean_object* v_init_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_root_1072_; lean_object* v_tail_1073_; lean_object* v___x_1074_; 
v_root_1072_ = lean_ctor_get(v_t_1067_, 0);
v_tail_1073_ = lean_ctor_get(v_t_1067_, 1);
v___x_1074_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(v_init_1068_, v_root_1072_, v_init_1068_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1111_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1111_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1111_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
if (lean_obj_tag(v_a_1075_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; 
v_a_1079_ = lean_ctor_get(v_a_1075_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v_a_1075_, 1);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v_a_1079_);
v___x_1081_ = v___x_1077_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1079_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; size_t v_sz_1086_; size_t v___x_1087_; lean_object* v___x_1088_; 
lean_del_object(v___x_1077_);
v_a_1083_ = lean_ctor_get(v_a_1075_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v_a_1075_, 1);
v___x_1084_ = lean_box(0);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_a_1083_);
v_sz_1086_ = lean_array_size(v_tail_1073_);
v___x_1087_ = ((size_t)0ULL);
v___x_1088_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(v_tail_1073_, v_sz_1086_, v___x_1087_, v___x_1085_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1102_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1091_ = v___x_1088_;
v_isShared_1092_ = v_isSharedCheck_1102_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1088_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1102_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v_fst_1093_; 
v_fst_1093_ = lean_ctor_get(v_a_1089_, 0);
if (lean_obj_tag(v_fst_1093_) == 0)
{
lean_object* v_snd_1094_; lean_object* v___x_1096_; 
v_snd_1094_ = lean_ctor_get(v_a_1089_, 1);
lean_inc(v_snd_1094_);
lean_dec(v_a_1089_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v_snd_1094_);
v___x_1096_ = v___x_1091_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_snd_1094_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
else
{
lean_object* v_val_1098_; lean_object* v___x_1100_; 
lean_inc_ref(v_fst_1093_);
lean_dec(v_a_1089_);
v_val_1098_ = lean_ctor_get(v_fst_1093_, 0);
lean_inc(v_val_1098_);
lean_dec_ref_known(v_fst_1093_, 1);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v_val_1098_);
v___x_1100_ = v___x_1091_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_val_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1088_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1088_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
v_a_1112_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1074_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1074_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12___boxed(lean_object* v_t_1120_, lean_object* v_init_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_PersistentArray_forIn___at___00main_spec__12(v_t_1120_, v_init_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec_ref(v_t_1120_);
return v_res_1125_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0(uint8_t v_suppressElabErrors_1133_, uint8_t v___x_1134_, lean_object* v___x_1135_, lean_object* v_x_1136_){
_start:
{
if (lean_obj_tag(v_x_1136_) == 1)
{
lean_object* v_pre_1137_; 
v_pre_1137_ = lean_ctor_get(v_x_1136_, 0);
switch(lean_obj_tag(v_pre_1137_))
{
case 1:
{
lean_object* v_pre_1138_; 
v_pre_1138_ = lean_ctor_get(v_pre_1137_, 0);
switch(lean_obj_tag(v_pre_1138_))
{
case 0:
{
lean_object* v_str_1139_; lean_object* v_str_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; 
v_str_1139_ = lean_ctor_get(v_x_1136_, 1);
v_str_1140_ = lean_ctor_get(v_pre_1137_, 1);
v___x_1141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0));
v___x_1142_ = lean_string_dec_eq(v_str_1140_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; uint8_t v___x_1144_; 
v___x_1143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1));
v___x_1144_ = lean_string_dec_eq(v_str_1140_, v___x_1143_);
if (v___x_1144_ == 0)
{
return v___x_1144_;
}
else
{
lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2));
v___x_1146_ = lean_string_dec_eq(v_str_1139_, v___x_1145_);
if (v___x_1146_ == 0)
{
return v___x_1146_;
}
else
{
return v_suppressElabErrors_1133_;
}
}
}
else
{
lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3));
v___x_1148_ = lean_string_dec_eq(v_str_1139_, v___x_1147_);
if (v___x_1148_ == 0)
{
return v___x_1148_;
}
else
{
return v_suppressElabErrors_1133_;
}
}
}
case 1:
{
lean_object* v_pre_1149_; 
v_pre_1149_ = lean_ctor_get(v_pre_1138_, 0);
if (lean_obj_tag(v_pre_1149_) == 0)
{
lean_object* v_str_1150_; lean_object* v_str_1151_; lean_object* v_str_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v_str_1150_ = lean_ctor_get(v_x_1136_, 1);
v_str_1151_ = lean_ctor_get(v_pre_1137_, 1);
v_str_1152_ = lean_ctor_get(v_pre_1138_, 1);
v___x_1153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4));
v___x_1154_ = lean_string_dec_eq(v_str_1152_, v___x_1153_);
if (v___x_1154_ == 0)
{
return v___x_1154_;
}
else
{
lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1155_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5));
v___x_1156_ = lean_string_dec_eq(v_str_1151_, v___x_1155_);
if (v___x_1156_ == 0)
{
return v___x_1156_;
}
else
{
lean_object* v___x_1157_; uint8_t v___x_1158_; 
v___x_1157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6));
v___x_1158_ = lean_string_dec_eq(v_str_1150_, v___x_1157_);
if (v___x_1158_ == 0)
{
return v___x_1158_;
}
else
{
return v_suppressElabErrors_1133_;
}
}
}
}
else
{
return v___x_1134_;
}
}
default: 
{
return v___x_1134_;
}
}
}
case 0:
{
lean_object* v_str_1159_; uint8_t v___x_1160_; 
v_str_1159_ = lean_ctor_get(v_x_1136_, 1);
v___x_1160_ = lean_string_dec_eq(v_str_1159_, v___x_1135_);
if (v___x_1160_ == 0)
{
return v___x_1160_;
}
else
{
return v_suppressElabErrors_1133_;
}
}
default: 
{
return v___x_1134_;
}
}
}
else
{
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___boxed(lean_object* v_suppressElabErrors_1161_, lean_object* v___x_1162_, lean_object* v___x_1163_, lean_object* v_x_1164_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1165_; uint8_t v___x_36400__boxed_1166_; uint8_t v_res_1167_; lean_object* v_r_1168_; 
v_suppressElabErrors_boxed_1165_ = lean_unbox(v_suppressElabErrors_1161_);
v___x_36400__boxed_1166_ = lean_unbox(v___x_1162_);
v_res_1167_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0(v_suppressElabErrors_boxed_1165_, v___x_36400__boxed_1166_, v___x_1163_, v_x_1164_);
lean_dec(v_x_1164_);
lean_dec_ref(v___x_1163_);
v_r_1168_ = lean_box(v_res_1167_);
return v_r_1168_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0(void){
_start:
{
lean_object* v___x_1169_; double v___x_1170_; 
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = lean_float_of_nat(v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(uint8_t v___x_1172_, lean_object* v_as_1173_, size_t v_sz_1174_, size_t v_i_1175_, lean_object* v_b_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v_a_1181_; uint8_t v___x_1185_; 
v___x_1185_ = lean_usize_dec_lt(v_i_1175_, v_sz_1174_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1186_, 0, v_b_1176_);
return v___x_1186_;
}
else
{
lean_object* v_a_1187_; lean_object* v_fst_1188_; lean_object* v_snd_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1267_; 
v_a_1187_ = lean_array_uget(v_as_1173_, v_i_1175_);
v_fst_1188_ = lean_ctor_get(v_a_1187_, 0);
v_snd_1189_ = lean_ctor_get(v_a_1187_, 1);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_a_1187_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1191_ = v_a_1187_;
v_isShared_1192_ = v_isSharedCheck_1267_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_snd_1189_);
lean_inc(v_fst_1188_);
lean_dec(v_a_1187_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1267_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_fst_1193_; lean_object* v_snd_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1266_; 
v_fst_1193_ = lean_ctor_get(v_fst_1188_, 0);
v_snd_1194_ = lean_ctor_get(v_fst_1188_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_fst_1188_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1196_ = v_fst_1188_;
v_isShared_1197_ = v_isSharedCheck_1266_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_snd_1194_);
lean_inc(v_fst_1193_);
lean_dec(v_fst_1188_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1266_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; double v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_toCold_1203_; uint8_t v_suppressElabErrors_1204_; lean_object* v_fileName_1205_; lean_object* v_fileMap_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; 
v___x_1198_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0);
v___x_1199_ = lean_box(0);
v___x_1200_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0);
v___x_1201_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1));
v___x_1202_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1202_, 0, v___x_1198_);
lean_ctor_set(v___x_1202_, 1, v___x_1199_);
lean_ctor_set(v___x_1202_, 2, v___x_1201_);
lean_ctor_set_float(v___x_1202_, sizeof(void*)*3, v___x_1200_);
lean_ctor_set_float(v___x_1202_, sizeof(void*)*3 + 8, v___x_1200_);
lean_ctor_set_uint8(v___x_1202_, sizeof(void*)*3 + 16, v___x_1185_);
v_toCold_1203_ = lean_ctor_get(v___y_1177_, 0);
v_suppressElabErrors_1204_ = lean_ctor_get_uint8(v___y_1177_, sizeof(void*)*3 + 1);
v_fileName_1205_ = lean_ctor_get(v_toCold_1203_, 0);
v_fileMap_1206_ = lean_ctor_get(v_toCold_1203_, 1);
v___x_1207_ = lean_box(0);
v___x_1208_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1209_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_1210_ = l_Lean_MessageData_nil;
v___x_1211_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1202_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
lean_ctor_set(v___x_1211_, 2, v_snd_1189_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set_tag(v___x_1196_, 8);
lean_ctor_set(v___x_1196_, 1, v___x_1211_);
lean_ctor_set(v___x_1196_, 0, v___x_1209_);
v___x_1213_ = v___x_1196_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
uint8_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___y_1217_; lean_object* v___y_1218_; 
v___x_1214_ = 0;
lean_inc_ref(v_fileMap_1206_);
lean_inc_ref(v_fileName_1205_);
v___x_1215_ = l_Lean_Elab_mkMessageCore(v_fileName_1205_, v_fileMap_1206_, v___x_1213_, v___x_1214_, v_fst_1193_, v_snd_1194_);
lean_dec(v_snd_1194_);
lean_dec(v_fst_1193_);
if (v_suppressElabErrors_1204_ == 0)
{
v___y_1217_ = v___y_1177_;
v___y_1218_ = v___y_1178_;
goto v___jp_1216_;
}
else
{
lean_object* v_data_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___f_1263_; uint8_t v___x_1264_; 
v_data_1260_ = lean_ctor_get(v___x_1215_, 4);
lean_inc(v_data_1260_);
v___x_1261_ = lean_box(v_suppressElabErrors_1204_);
v___x_1262_ = lean_box(v___x_1172_);
v___f_1263_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1263_, 0, v___x_1261_);
lean_closure_set(v___f_1263_, 1, v___x_1262_);
lean_closure_set(v___f_1263_, 2, v___x_1208_);
v___x_1264_ = l_Lean_MessageData_hasTag(v___f_1263_, v_data_1260_);
if (v___x_1264_ == 0)
{
lean_dec_ref(v___x_1215_);
lean_del_object(v___x_1191_);
v_a_1181_ = v___x_1207_;
goto v___jp_1180_;
}
else
{
v___y_1217_ = v___y_1177_;
v___y_1218_ = v___y_1178_;
goto v___jp_1216_;
}
}
v___jp_1216_:
{
lean_object* v_toCold_1219_; lean_object* v_fileName_1220_; lean_object* v_pos_1221_; lean_object* v_endPos_1222_; uint8_t v_keepFullRange_1223_; uint8_t v_severity_1224_; uint8_t v_isSilent_1225_; lean_object* v_caption_1226_; lean_object* v_data_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1259_; 
v_toCold_1219_ = lean_ctor_get(v___y_1217_, 0);
v_fileName_1220_ = lean_ctor_get(v___x_1215_, 0);
v_pos_1221_ = lean_ctor_get(v___x_1215_, 1);
v_endPos_1222_ = lean_ctor_get(v___x_1215_, 2);
v_keepFullRange_1223_ = lean_ctor_get_uint8(v___x_1215_, sizeof(void*)*5);
v_severity_1224_ = lean_ctor_get_uint8(v___x_1215_, sizeof(void*)*5 + 1);
v_isSilent_1225_ = lean_ctor_get_uint8(v___x_1215_, sizeof(void*)*5 + 2);
v_caption_1226_ = lean_ctor_get(v___x_1215_, 3);
v_data_1227_ = lean_ctor_get(v___x_1215_, 4);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1229_ = v___x_1215_;
v_isShared_1230_ = v_isSharedCheck_1259_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_data_1227_);
lean_inc(v_caption_1226_);
lean_inc(v_endPos_1222_);
lean_inc(v_pos_1221_);
lean_inc(v_fileName_1220_);
lean_dec(v___x_1215_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1259_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v_currNamespace_1231_; lean_object* v_openDecls_1232_; lean_object* v___x_1234_; 
v_currNamespace_1231_ = lean_ctor_get(v_toCold_1219_, 4);
v_openDecls_1232_ = lean_ctor_get(v_toCold_1219_, 5);
lean_inc(v_openDecls_1232_);
lean_inc(v_currNamespace_1231_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v_openDecls_1232_);
lean_ctor_set(v___x_1191_, 0, v_currNamespace_1231_);
v___x_1234_ = v___x_1191_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_currNamespace_1231_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_openDecls_1232_);
v___x_1234_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
lean_ctor_set(v___x_1235_, 1, v_data_1227_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v___x_1235_);
v___x_1237_ = v___x_1229_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_fileName_1220_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_pos_1221_);
lean_ctor_set(v_reuseFailAlloc_1257_, 2, v_endPos_1222_);
lean_ctor_set(v_reuseFailAlloc_1257_, 3, v_caption_1226_);
lean_ctor_set(v_reuseFailAlloc_1257_, 4, v___x_1235_);
lean_ctor_set_uint8(v_reuseFailAlloc_1257_, sizeof(void*)*5, v_keepFullRange_1223_);
lean_ctor_set_uint8(v_reuseFailAlloc_1257_, sizeof(void*)*5 + 1, v_severity_1224_);
lean_ctor_set_uint8(v_reuseFailAlloc_1257_, sizeof(void*)*5 + 2, v_isSilent_1225_);
v___x_1237_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
lean_object* v___x_1238_; lean_object* v_env_1239_; lean_object* v_nextMacroScope_1240_; lean_object* v_ngen_1241_; lean_object* v_auxDeclNGen_1242_; lean_object* v_traceState_1243_; lean_object* v_cache_1244_; lean_object* v_messages_1245_; lean_object* v_infoState_1246_; lean_object* v_snapshotTasks_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1256_; 
v___x_1238_ = lean_st_ref_take(v___y_1218_);
v_env_1239_ = lean_ctor_get(v___x_1238_, 0);
v_nextMacroScope_1240_ = lean_ctor_get(v___x_1238_, 1);
v_ngen_1241_ = lean_ctor_get(v___x_1238_, 2);
v_auxDeclNGen_1242_ = lean_ctor_get(v___x_1238_, 3);
v_traceState_1243_ = lean_ctor_get(v___x_1238_, 4);
v_cache_1244_ = lean_ctor_get(v___x_1238_, 5);
v_messages_1245_ = lean_ctor_get(v___x_1238_, 6);
v_infoState_1246_ = lean_ctor_get(v___x_1238_, 7);
v_snapshotTasks_1247_ = lean_ctor_get(v___x_1238_, 8);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1249_ = v___x_1238_;
v_isShared_1250_ = v_isSharedCheck_1256_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_snapshotTasks_1247_);
lean_inc(v_infoState_1246_);
lean_inc(v_messages_1245_);
lean_inc(v_cache_1244_);
lean_inc(v_traceState_1243_);
lean_inc(v_auxDeclNGen_1242_);
lean_inc(v_ngen_1241_);
lean_inc(v_nextMacroScope_1240_);
lean_inc(v_env_1239_);
lean_dec(v___x_1238_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1256_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; lean_object* v___x_1253_; 
v___x_1251_ = l_Lean_MessageLog_add(v___x_1237_, v_messages_1245_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 6, v___x_1251_);
v___x_1253_ = v___x_1249_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_env_1239_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_nextMacroScope_1240_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v_ngen_1241_);
lean_ctor_set(v_reuseFailAlloc_1255_, 3, v_auxDeclNGen_1242_);
lean_ctor_set(v_reuseFailAlloc_1255_, 4, v_traceState_1243_);
lean_ctor_set(v_reuseFailAlloc_1255_, 5, v_cache_1244_);
lean_ctor_set(v_reuseFailAlloc_1255_, 6, v___x_1251_);
lean_ctor_set(v_reuseFailAlloc_1255_, 7, v_infoState_1246_);
lean_ctor_set(v_reuseFailAlloc_1255_, 8, v_snapshotTasks_1247_);
v___x_1253_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1254_; 
v___x_1254_ = lean_st_ref_put(v___y_1218_, v___x_1253_);
v_a_1181_ = v___x_1207_;
goto v___jp_1180_;
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
v___jp_1180_:
{
size_t v___x_1182_; size_t v___x_1183_; 
v___x_1182_ = ((size_t)1ULL);
v___x_1183_ = lean_usize_add(v_i_1175_, v___x_1182_);
v_i_1175_ = v___x_1183_;
v_b_1176_ = v_a_1181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___boxed(lean_object* v___x_1268_, lean_object* v_as_1269_, lean_object* v_sz_1270_, lean_object* v_i_1271_, lean_object* v_b_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
uint8_t v___x_36475__boxed_1276_; size_t v_sz_boxed_1277_; size_t v_i_boxed_1278_; lean_object* v_res_1279_; 
v___x_36475__boxed_1276_ = lean_unbox(v___x_1268_);
v_sz_boxed_1277_ = lean_unbox_usize(v_sz_1270_);
lean_dec(v_sz_1270_);
v_i_boxed_1278_ = lean_unbox_usize(v_i_1271_);
lean_dec(v_i_1271_);
v_res_1279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(v___x_36475__boxed_1276_, v_as_1269_, v_sz_boxed_1277_, v_i_boxed_1278_, v_b_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec_ref(v_as_1269_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(lean_object* v_opts_1280_, lean_object* v_opt_1281_){
_start:
{
lean_object* v_name_1282_; lean_object* v_map_1283_; lean_object* v___x_1284_; 
v_name_1282_ = lean_ctor_get(v_opt_1281_, 0);
v_map_1283_ = lean_ctor_get(v_opts_1280_, 0);
v___x_1284_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1283_, v_name_1282_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v___x_1285_; 
v___x_1285_ = lean_box(0);
return v___x_1285_;
}
else
{
lean_object* v_val_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1295_; 
v_val_1286_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1288_ = v___x_1284_;
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_val_1286_);
lean_dec(v___x_1284_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
if (lean_obj_tag(v_val_1286_) == 0)
{
lean_object* v_v_1290_; lean_object* v___x_1292_; 
v_v_1290_ = lean_ctor_get(v_val_1286_, 0);
lean_inc_ref(v_v_1290_);
lean_dec_ref_known(v_val_1286_, 1);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v_v_1290_);
v___x_1292_ = v___x_1288_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_v_1290_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
else
{
lean_object* v___x_1294_; 
lean_del_object(v___x_1288_);
lean_dec(v_val_1286_);
v___x_1294_ = lean_box(0);
return v___x_1294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15___boxed(lean_object* v_opts_1296_, lean_object* v_opt_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(v_opts_1296_, v_opt_1297_);
lean_dec_ref(v_opt_1297_);
lean_dec_ref(v_opts_1296_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(lean_object* v_a_1299_, lean_object* v_fallback_1300_, lean_object* v_x_1301_){
_start:
{
if (lean_obj_tag(v_x_1301_) == 0)
{
lean_inc(v_fallback_1300_);
return v_fallback_1300_;
}
else
{
lean_object* v_key_1302_; lean_object* v_value_1303_; lean_object* v_tail_1304_; lean_object* v_fst_1305_; lean_object* v_snd_1306_; lean_object* v_fst_1307_; lean_object* v_snd_1308_; uint8_t v_decide_1309_; 
v_key_1302_ = lean_ctor_get(v_x_1301_, 0);
v_value_1303_ = lean_ctor_get(v_x_1301_, 1);
v_tail_1304_ = lean_ctor_get(v_x_1301_, 2);
v_fst_1305_ = lean_ctor_get(v_key_1302_, 0);
v_snd_1306_ = lean_ctor_get(v_key_1302_, 1);
v_fst_1307_ = lean_ctor_get(v_a_1299_, 0);
v_snd_1308_ = lean_ctor_get(v_a_1299_, 1);
v_decide_1309_ = lean_nat_dec_eq(v_fst_1305_, v_fst_1307_);
if (v_decide_1309_ == 0)
{
v_x_1301_ = v_tail_1304_;
goto _start;
}
else
{
uint8_t v_decide_1311_; 
v_decide_1311_ = lean_nat_dec_eq(v_snd_1306_, v_snd_1308_);
if (v_decide_1311_ == 0)
{
v_x_1301_ = v_tail_1304_;
goto _start;
}
else
{
lean_inc(v_value_1303_);
return v_value_1303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg___boxed(lean_object* v_a_1313_, lean_object* v_fallback_1314_, lean_object* v_x_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(v_a_1313_, v_fallback_1314_, v_x_1315_);
lean_dec(v_x_1315_);
lean_dec(v_fallback_1314_);
lean_dec_ref(v_a_1313_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(lean_object* v_m_1317_, lean_object* v_a_1318_, lean_object* v_fallback_1319_){
_start:
{
lean_object* v_buckets_1320_; lean_object* v_fst_1321_; lean_object* v_snd_1322_; lean_object* v___x_1323_; uint64_t v___x_1324_; uint64_t v___x_1325_; uint64_t v___x_1326_; uint64_t v___x_1327_; uint64_t v___x_1328_; uint64_t v_fold_1329_; uint64_t v___x_1330_; uint64_t v___x_1331_; uint64_t v___x_1332_; size_t v___x_1333_; size_t v___x_1334_; size_t v___x_1335_; size_t v___x_1336_; size_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v_buckets_1320_ = lean_ctor_get(v_m_1317_, 1);
v_fst_1321_ = lean_ctor_get(v_a_1318_, 0);
v_snd_1322_ = lean_ctor_get(v_a_1318_, 1);
v___x_1323_ = lean_array_get_size(v_buckets_1320_);
v___x_1324_ = l_String_instHashableRaw_hash(v_fst_1321_);
v___x_1325_ = l_String_instHashableRaw_hash(v_snd_1322_);
v___x_1326_ = lean_uint64_mix_hash(v___x_1324_, v___x_1325_);
v___x_1327_ = 32ULL;
v___x_1328_ = lean_uint64_shift_right(v___x_1326_, v___x_1327_);
v_fold_1329_ = lean_uint64_xor(v___x_1326_, v___x_1328_);
v___x_1330_ = 16ULL;
v___x_1331_ = lean_uint64_shift_right(v_fold_1329_, v___x_1330_);
v___x_1332_ = lean_uint64_xor(v_fold_1329_, v___x_1331_);
v___x_1333_ = lean_uint64_to_usize(v___x_1332_);
v___x_1334_ = lean_usize_of_nat(v___x_1323_);
v___x_1335_ = ((size_t)1ULL);
v___x_1336_ = lean_usize_sub(v___x_1334_, v___x_1335_);
v___x_1337_ = lean_usize_land(v___x_1333_, v___x_1336_);
v___x_1338_ = lean_array_uget_borrowed(v_buckets_1320_, v___x_1337_);
v___x_1339_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(v_a_1318_, v_fallback_1319_, v___x_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg___boxed(lean_object* v_m_1340_, lean_object* v_a_1341_, lean_object* v_fallback_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_m_1340_, v_a_1341_, v_fallback_1342_);
lean_dec(v_fallback_1342_);
lean_dec_ref(v_a_1341_);
lean_dec_ref(v_m_1340_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(lean_object* v_x_1344_, lean_object* v_x_1345_){
_start:
{
if (lean_obj_tag(v_x_1345_) == 0)
{
return v_x_1344_;
}
else
{
lean_object* v_key_1346_; lean_object* v_value_1347_; lean_object* v_tail_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1375_; 
v_key_1346_ = lean_ctor_get(v_x_1345_, 0);
v_value_1347_ = lean_ctor_get(v_x_1345_, 1);
v_tail_1348_ = lean_ctor_get(v_x_1345_, 2);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_x_1345_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1350_ = v_x_1345_;
v_isShared_1351_ = v_isSharedCheck_1375_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_tail_1348_);
lean_inc(v_value_1347_);
lean_inc(v_key_1346_);
lean_dec(v_x_1345_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1375_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v_fst_1352_; lean_object* v_snd_1353_; lean_object* v___x_1354_; uint64_t v___x_1355_; uint64_t v___x_1356_; uint64_t v___x_1357_; uint64_t v___x_1358_; uint64_t v___x_1359_; uint64_t v_fold_1360_; uint64_t v___x_1361_; uint64_t v___x_1362_; uint64_t v___x_1363_; size_t v___x_1364_; size_t v___x_1365_; size_t v___x_1366_; size_t v___x_1367_; size_t v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v_fst_1352_ = lean_ctor_get(v_key_1346_, 0);
v_snd_1353_ = lean_ctor_get(v_key_1346_, 1);
v___x_1354_ = lean_array_get_size(v_x_1344_);
v___x_1355_ = l_String_instHashableRaw_hash(v_fst_1352_);
v___x_1356_ = l_String_instHashableRaw_hash(v_snd_1353_);
v___x_1357_ = lean_uint64_mix_hash(v___x_1355_, v___x_1356_);
v___x_1358_ = 32ULL;
v___x_1359_ = lean_uint64_shift_right(v___x_1357_, v___x_1358_);
v_fold_1360_ = lean_uint64_xor(v___x_1357_, v___x_1359_);
v___x_1361_ = 16ULL;
v___x_1362_ = lean_uint64_shift_right(v_fold_1360_, v___x_1361_);
v___x_1363_ = lean_uint64_xor(v_fold_1360_, v___x_1362_);
v___x_1364_ = lean_uint64_to_usize(v___x_1363_);
v___x_1365_ = lean_usize_of_nat(v___x_1354_);
v___x_1366_ = ((size_t)1ULL);
v___x_1367_ = lean_usize_sub(v___x_1365_, v___x_1366_);
v___x_1368_ = lean_usize_land(v___x_1364_, v___x_1367_);
v___x_1369_ = lean_array_uget_borrowed(v_x_1344_, v___x_1368_);
lean_inc(v___x_1369_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 2, v___x_1369_);
v___x_1371_ = v___x_1350_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_key_1346_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v_value_1347_);
lean_ctor_set(v_reuseFailAlloc_1374_, 2, v___x_1369_);
v___x_1371_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_array_uset(v_x_1344_, v___x_1368_, v___x_1371_);
v_x_1344_ = v___x_1372_;
v_x_1345_ = v_tail_1348_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(lean_object* v_i_1376_, lean_object* v_source_1377_, lean_object* v_target_1378_){
_start:
{
lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = lean_array_get_size(v_source_1377_);
v___x_1380_ = lean_nat_dec_lt(v_i_1376_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_dec_ref(v_source_1377_);
lean_dec(v_i_1376_);
return v_target_1378_;
}
else
{
lean_object* v_es_1381_; lean_object* v___x_1382_; lean_object* v_source_1383_; lean_object* v_target_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v_es_1381_ = lean_array_fget(v_source_1377_, v_i_1376_);
v___x_1382_ = lean_box(0);
v_source_1383_ = lean_array_fset(v_source_1377_, v_i_1376_, v___x_1382_);
v_target_1384_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(v_target_1378_, v_es_1381_);
v___x_1385_ = lean_unsigned_to_nat(1u);
v___x_1386_ = lean_nat_add(v_i_1376_, v___x_1385_);
lean_dec(v_i_1376_);
v_i_1376_ = v___x_1386_;
v_source_1377_ = v_source_1383_;
v_target_1378_ = v_target_1384_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(lean_object* v_data_1388_){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v_nbuckets_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1389_ = lean_array_get_size(v_data_1388_);
v___x_1390_ = lean_unsigned_to_nat(2u);
v_nbuckets_1391_ = lean_nat_mul(v___x_1389_, v___x_1390_);
v___x_1392_ = lean_unsigned_to_nat(0u);
v___x_1393_ = lean_box(0);
v___x_1394_ = lean_mk_array(v_nbuckets_1391_, v___x_1393_);
v___x_1395_ = lean_array_propagate_mark(v_data_1388_, v___x_1394_);
v___x_1396_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(v___x_1392_, v_data_1388_, v___x_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(lean_object* v_a_1397_, lean_object* v_b_1398_, lean_object* v_x_1399_){
_start:
{
if (lean_obj_tag(v_x_1399_) == 0)
{
lean_dec(v_b_1398_);
lean_dec_ref(v_a_1397_);
return v_x_1399_;
}
else
{
lean_object* v_key_1400_; lean_object* v_value_1401_; lean_object* v_tail_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1418_; 
v_key_1400_ = lean_ctor_get(v_x_1399_, 0);
v_value_1401_ = lean_ctor_get(v_x_1399_, 1);
v_tail_1402_ = lean_ctor_get(v_x_1399_, 2);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_x_1399_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1404_ = v_x_1399_;
v_isShared_1405_ = v_isSharedCheck_1418_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_tail_1402_);
lean_inc(v_value_1401_);
lean_inc(v_key_1400_);
lean_dec(v_x_1399_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1418_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v_fst_1411_; lean_object* v_snd_1412_; lean_object* v_fst_1413_; lean_object* v_snd_1414_; uint8_t v_decide_1415_; 
v_fst_1411_ = lean_ctor_get(v_key_1400_, 0);
v_snd_1412_ = lean_ctor_get(v_key_1400_, 1);
v_fst_1413_ = lean_ctor_get(v_a_1397_, 0);
v_snd_1414_ = lean_ctor_get(v_a_1397_, 1);
v_decide_1415_ = lean_nat_dec_eq(v_fst_1411_, v_fst_1413_);
if (v_decide_1415_ == 0)
{
goto v___jp_1406_;
}
else
{
uint8_t v_decide_1416_; 
v_decide_1416_ = lean_nat_dec_eq(v_snd_1412_, v_snd_1414_);
if (v_decide_1416_ == 0)
{
goto v___jp_1406_;
}
else
{
lean_object* v___x_1417_; 
lean_del_object(v___x_1404_);
lean_dec(v_value_1401_);
lean_dec(v_key_1400_);
v___x_1417_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1417_, 0, v_a_1397_);
lean_ctor_set(v___x_1417_, 1, v_b_1398_);
lean_ctor_set(v___x_1417_, 2, v_tail_1402_);
return v___x_1417_;
}
}
v___jp_1406_:
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(v_a_1397_, v_b_1398_, v_tail_1402_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 2, v___x_1407_);
v___x_1409_ = v___x_1404_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_key_1400_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_value_1401_);
lean_ctor_set(v_reuseFailAlloc_1410_, 2, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(lean_object* v_a_1419_, lean_object* v_x_1420_){
_start:
{
if (lean_obj_tag(v_x_1420_) == 0)
{
uint8_t v___x_1421_; 
v___x_1421_ = 0;
return v___x_1421_;
}
else
{
lean_object* v_key_1422_; lean_object* v_tail_1423_; lean_object* v_fst_1424_; lean_object* v_snd_1425_; lean_object* v_fst_1426_; lean_object* v_snd_1427_; uint8_t v_decide_1428_; 
v_key_1422_ = lean_ctor_get(v_x_1420_, 0);
v_tail_1423_ = lean_ctor_get(v_x_1420_, 2);
v_fst_1424_ = lean_ctor_get(v_key_1422_, 0);
v_snd_1425_ = lean_ctor_get(v_key_1422_, 1);
v_fst_1426_ = lean_ctor_get(v_a_1419_, 0);
v_snd_1427_ = lean_ctor_get(v_a_1419_, 1);
v_decide_1428_ = lean_nat_dec_eq(v_fst_1424_, v_fst_1426_);
if (v_decide_1428_ == 0)
{
v_x_1420_ = v_tail_1423_;
goto _start;
}
else
{
uint8_t v_decide_1430_; 
v_decide_1430_ = lean_nat_dec_eq(v_snd_1425_, v_snd_1427_);
if (v_decide_1430_ == 0)
{
v_x_1420_ = v_tail_1423_;
goto _start;
}
else
{
return v_decide_1430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg___boxed(lean_object* v_a_1432_, lean_object* v_x_1433_){
_start:
{
uint8_t v_res_1434_; lean_object* v_r_1435_; 
v_res_1434_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(v_a_1432_, v_x_1433_);
lean_dec(v_x_1433_);
lean_dec_ref(v_a_1432_);
v_r_1435_ = lean_box(v_res_1434_);
return v_r_1435_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(lean_object* v_m_1436_, lean_object* v_a_1437_, lean_object* v_b_1438_){
_start:
{
lean_object* v_size_1439_; lean_object* v_buckets_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1487_; 
v_size_1439_ = lean_ctor_get(v_m_1436_, 0);
v_buckets_1440_ = lean_ctor_get(v_m_1436_, 1);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_m_1436_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1442_ = v_m_1436_;
v_isShared_1443_ = v_isSharedCheck_1487_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_buckets_1440_);
lean_inc(v_size_1439_);
lean_dec(v_m_1436_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1487_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v_fst_1444_; lean_object* v_snd_1445_; lean_object* v___x_1446_; uint64_t v___x_1447_; uint64_t v___x_1448_; uint64_t v___x_1449_; uint64_t v___x_1450_; uint64_t v___x_1451_; uint64_t v_fold_1452_; uint64_t v___x_1453_; uint64_t v___x_1454_; uint64_t v___x_1455_; size_t v___x_1456_; size_t v___x_1457_; size_t v___x_1458_; size_t v___x_1459_; size_t v___x_1460_; lean_object* v_bkt_1461_; uint8_t v___x_1462_; 
v_fst_1444_ = lean_ctor_get(v_a_1437_, 0);
v_snd_1445_ = lean_ctor_get(v_a_1437_, 1);
v___x_1446_ = lean_array_get_size(v_buckets_1440_);
v___x_1447_ = l_String_instHashableRaw_hash(v_fst_1444_);
v___x_1448_ = l_String_instHashableRaw_hash(v_snd_1445_);
v___x_1449_ = lean_uint64_mix_hash(v___x_1447_, v___x_1448_);
v___x_1450_ = 32ULL;
v___x_1451_ = lean_uint64_shift_right(v___x_1449_, v___x_1450_);
v_fold_1452_ = lean_uint64_xor(v___x_1449_, v___x_1451_);
v___x_1453_ = 16ULL;
v___x_1454_ = lean_uint64_shift_right(v_fold_1452_, v___x_1453_);
v___x_1455_ = lean_uint64_xor(v_fold_1452_, v___x_1454_);
v___x_1456_ = lean_uint64_to_usize(v___x_1455_);
v___x_1457_ = lean_usize_of_nat(v___x_1446_);
v___x_1458_ = ((size_t)1ULL);
v___x_1459_ = lean_usize_sub(v___x_1457_, v___x_1458_);
v___x_1460_ = lean_usize_land(v___x_1456_, v___x_1459_);
v_bkt_1461_ = lean_array_uget_borrowed(v_buckets_1440_, v___x_1460_);
v___x_1462_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(v_a_1437_, v_bkt_1461_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; lean_object* v_size_x27_1464_; lean_object* v___x_1465_; lean_object* v_buckets_x27_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1463_ = lean_unsigned_to_nat(1u);
v_size_x27_1464_ = lean_nat_add(v_size_1439_, v___x_1463_);
lean_dec(v_size_1439_);
lean_inc(v_bkt_1461_);
v___x_1465_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1465_, 0, v_a_1437_);
lean_ctor_set(v___x_1465_, 1, v_b_1438_);
lean_ctor_set(v___x_1465_, 2, v_bkt_1461_);
v_buckets_x27_1466_ = lean_array_uset(v_buckets_1440_, v___x_1460_, v___x_1465_);
v___x_1467_ = lean_unsigned_to_nat(4u);
v___x_1468_ = lean_nat_mul(v_size_x27_1464_, v___x_1467_);
v___x_1469_ = lean_unsigned_to_nat(3u);
v___x_1470_ = lean_nat_div(v___x_1468_, v___x_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_array_get_size(v_buckets_x27_1466_);
v___x_1472_ = lean_nat_dec_le(v___x_1470_, v___x_1471_);
lean_dec(v___x_1470_);
if (v___x_1472_ == 0)
{
lean_object* v_val_1473_; lean_object* v___x_1475_; 
v_val_1473_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(v_buckets_x27_1466_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v_val_1473_);
lean_ctor_set(v___x_1442_, 0, v_size_x27_1464_);
v___x_1475_ = v___x_1442_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_size_x27_1464_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_val_1473_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
else
{
lean_object* v___x_1478_; 
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v_buckets_x27_1466_);
lean_ctor_set(v___x_1442_, 0, v_size_x27_1464_);
v___x_1478_ = v___x_1442_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_size_x27_1464_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_buckets_x27_1466_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
else
{
lean_object* v___x_1480_; lean_object* v_buckets_x27_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1485_; 
lean_inc(v_bkt_1461_);
v___x_1480_ = lean_box(0);
v_buckets_x27_1481_ = lean_array_uset(v_buckets_1440_, v___x_1460_, v___x_1480_);
v___x_1482_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(v_a_1437_, v_b_1438_, v_bkt_1461_);
v___x_1483_ = lean_array_uset(v_buckets_x27_1481_, v___x_1460_, v___x_1482_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v___x_1483_);
v___x_1485_ = v___x_1442_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_size_1439_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t v___x_1490_, lean_object* v_as_1491_, size_t v_sz_1492_, size_t v_i_1493_, lean_object* v_b_1494_, lean_object* v___y_1495_){
_start:
{
uint8_t v___x_1497_; 
v___x_1497_ = lean_usize_dec_lt(v_i_1493_, v_sz_1492_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1498_; 
v___x_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1498_, 0, v_b_1494_);
return v___x_1498_;
}
else
{
lean_object* v_snd_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1536_; 
v_snd_1499_ = lean_ctor_get(v_b_1494_, 1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v_b_1494_);
if (v_isSharedCheck_1536_ == 0)
{
lean_object* v_unused_1537_; 
v_unused_1537_ = lean_ctor_get(v_b_1494_, 0);
lean_dec(v_unused_1537_);
v___x_1501_ = v_b_1494_;
v_isShared_1502_ = v_isSharedCheck_1536_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_snd_1499_);
lean_dec(v_b_1494_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1536_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v_ref_1503_; lean_object* v_a_1504_; lean_object* v_ref_1505_; lean_object* v_msg_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1535_; 
v_ref_1503_ = lean_ctor_get(v___y_1495_, 2);
v_a_1504_ = lean_array_uget(v_as_1491_, v_i_1493_);
v_ref_1505_ = lean_ctor_get(v_a_1504_, 0);
v_msg_1506_ = lean_ctor_get(v_a_1504_, 1);
v_isSharedCheck_1535_ = !lean_is_exclusive(v_a_1504_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1508_ = v_a_1504_;
v_isShared_1509_ = v_isSharedCheck_1535_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_msg_1506_);
lean_inc(v_ref_1505_);
lean_dec(v_a_1504_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1535_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1510_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v_ref_1527_; lean_object* v___y_1529_; lean_object* v___x_1532_; 
v___x_1510_ = lean_box(0);
v_ref_1527_ = l_Lean_replaceRef(v_ref_1505_, v_ref_1503_);
lean_dec(v_ref_1505_);
v___x_1532_ = l_Lean_Syntax_getPos_x3f(v_ref_1527_, v___x_1490_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v___x_1533_; 
v___x_1533_ = lean_unsigned_to_nat(0u);
v___y_1529_ = v___x_1533_;
goto v___jp_1528_;
}
else
{
lean_object* v_val_1534_; 
v_val_1534_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v___x_1532_, 1);
v___y_1529_ = v_val_1534_;
goto v___jp_1528_;
}
v___jp_1511_:
{
lean_object* v___x_1515_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 1, v___y_1513_);
lean_ctor_set(v___x_1501_, 0, v___y_1512_);
v___x_1515_ = v___x_1501_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___y_1512_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___y_1513_);
v___x_1515_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v_pos2traces_1519_; lean_object* v___x_1521_; 
v___x_1516_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1517_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1499_, v___x_1515_, v___x_1516_);
v___x_1518_ = lean_array_push(v___x_1517_, v_msg_1506_);
v_pos2traces_1519_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1499_, v___x_1515_, v___x_1518_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 1, v_pos2traces_1519_);
lean_ctor_set(v___x_1508_, 0, v___x_1510_);
v___x_1521_ = v___x_1508_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_pos2traces_1519_);
v___x_1521_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
size_t v___x_1522_; size_t v___x_1523_; 
v___x_1522_ = ((size_t)1ULL);
v___x_1523_ = lean_usize_add(v_i_1493_, v___x_1522_);
v_i_1493_ = v___x_1523_;
v_b_1494_ = v___x_1521_;
goto _start;
}
}
}
v___jp_1528_:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1527_, v___x_1490_);
lean_dec(v_ref_1527_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_inc(v___y_1529_);
v___y_1512_ = v___y_1529_;
v___y_1513_ = v___y_1529_;
goto v___jp_1511_;
}
else
{
lean_object* v_val_1531_; 
v_val_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_val_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___y_1512_ = v___y_1529_;
v___y_1513_ = v_val_1531_;
goto v___jp_1511_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object* v___x_1538_, lean_object* v_as_1539_, lean_object* v_sz_1540_, lean_object* v_i_1541_, lean_object* v_b_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
uint8_t v___x_36946__boxed_1545_; size_t v_sz_boxed_1546_; size_t v_i_boxed_1547_; lean_object* v_res_1548_; 
v___x_36946__boxed_1545_ = lean_unbox(v___x_1538_);
v_sz_boxed_1546_ = lean_unbox_usize(v_sz_1540_);
lean_dec(v_sz_1540_);
v_i_boxed_1547_ = lean_unbox_usize(v_i_1541_);
lean_dec(v_i_1541_);
v_res_1548_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(v___x_36946__boxed_1545_, v_as_1539_, v_sz_boxed_1546_, v_i_boxed_1547_, v_b_1542_, v___y_1543_);
lean_dec_ref(v___y_1543_);
lean_dec_ref(v_as_1539_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(uint8_t v___x_1549_, lean_object* v_as_1550_, size_t v_sz_1551_, size_t v_i_1552_, lean_object* v_b_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
uint8_t v___x_1557_; 
v___x_1557_ = lean_usize_dec_lt(v_i_1552_, v_sz_1551_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v_b_1553_);
return v___x_1558_;
}
else
{
lean_object* v_snd_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1596_; 
v_snd_1559_ = lean_ctor_get(v_b_1553_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_b_1553_);
if (v_isSharedCheck_1596_ == 0)
{
lean_object* v_unused_1597_; 
v_unused_1597_ = lean_ctor_get(v_b_1553_, 0);
lean_dec(v_unused_1597_);
v___x_1561_ = v_b_1553_;
v_isShared_1562_ = v_isSharedCheck_1596_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_snd_1559_);
lean_dec(v_b_1553_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1596_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_ref_1563_; lean_object* v_a_1564_; lean_object* v_ref_1565_; lean_object* v_msg_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1595_; 
v_ref_1563_ = lean_ctor_get(v___y_1554_, 2);
v_a_1564_ = lean_array_uget(v_as_1550_, v_i_1552_);
v_ref_1565_ = lean_ctor_get(v_a_1564_, 0);
v_msg_1566_ = lean_ctor_get(v_a_1564_, 1);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_a_1564_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1568_ = v_a_1564_;
v_isShared_1569_ = v_isSharedCheck_1595_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_msg_1566_);
lean_inc(v_ref_1565_);
lean_dec(v_a_1564_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1595_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v_ref_1587_; lean_object* v___y_1589_; lean_object* v___x_1592_; 
v___x_1570_ = lean_box(0);
v_ref_1587_ = l_Lean_replaceRef(v_ref_1565_, v_ref_1563_);
lean_dec(v_ref_1565_);
v___x_1592_ = l_Lean_Syntax_getPos_x3f(v_ref_1587_, v___x_1549_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_unsigned_to_nat(0u);
v___y_1589_ = v___x_1593_;
goto v___jp_1588_;
}
else
{
lean_object* v_val_1594_; 
v_val_1594_ = lean_ctor_get(v___x_1592_, 0);
lean_inc(v_val_1594_);
lean_dec_ref_known(v___x_1592_, 1);
v___y_1589_ = v_val_1594_;
goto v___jp_1588_;
}
v___jp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 1, v___y_1573_);
lean_ctor_set(v___x_1561_, 0, v___y_1572_);
v___x_1575_ = v___x_1561_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___y_1572_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v___y_1573_);
v___x_1575_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v_pos2traces_1579_; lean_object* v___x_1581_; 
v___x_1576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1577_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1559_, v___x_1575_, v___x_1576_);
v___x_1578_ = lean_array_push(v___x_1577_, v_msg_1566_);
v_pos2traces_1579_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1559_, v___x_1575_, v___x_1578_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 1, v_pos2traces_1579_);
lean_ctor_set(v___x_1568_, 0, v___x_1570_);
v___x_1581_ = v___x_1568_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v_pos2traces_1579_);
v___x_1581_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
size_t v___x_1582_; size_t v___x_1583_; lean_object* v___x_1584_; 
v___x_1582_ = ((size_t)1ULL);
v___x_1583_ = lean_usize_add(v_i_1552_, v___x_1582_);
v___x_1584_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(v___x_1549_, v_as_1550_, v_sz_1551_, v___x_1583_, v___x_1581_, v___y_1554_);
return v___x_1584_;
}
}
}
v___jp_1588_:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1587_, v___x_1549_);
lean_dec(v_ref_1587_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_inc(v___y_1589_);
v___y_1572_ = v___y_1589_;
v___y_1573_ = v___y_1589_;
goto v___jp_1571_;
}
else
{
lean_object* v_val_1591_; 
v_val_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_val_1591_);
lean_dec_ref_known(v___x_1590_, 1);
v___y_1572_ = v___y_1589_;
v___y_1573_ = v_val_1591_;
goto v___jp_1571_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40___boxed(lean_object* v___x_1598_, lean_object* v_as_1599_, lean_object* v_sz_1600_, lean_object* v_i_1601_, lean_object* v_b_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v___x_37027__boxed_1606_; size_t v_sz_boxed_1607_; size_t v_i_boxed_1608_; lean_object* v_res_1609_; 
v___x_37027__boxed_1606_ = lean_unbox(v___x_1598_);
v_sz_boxed_1607_ = lean_unbox_usize(v_sz_1600_);
lean_dec(v_sz_1600_);
v_i_boxed_1608_ = lean_unbox_usize(v_i_1601_);
lean_dec(v_i_1601_);
v_res_1609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(v___x_37027__boxed_1606_, v_as_1599_, v_sz_boxed_1607_, v_i_boxed_1608_, v_b_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec_ref(v_as_1599_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(lean_object* v_init_1610_, uint8_t v___x_1611_, lean_object* v_n_1612_, lean_object* v_b_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
if (lean_obj_tag(v_n_1612_) == 0)
{
lean_object* v_cs_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; size_t v_sz_1620_; size_t v___x_1621_; lean_object* v___x_1622_; 
v_cs_1617_ = lean_ctor_get(v_n_1612_, 0);
v___x_1618_ = lean_box(0);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
lean_ctor_set(v___x_1619_, 1, v_b_1613_);
v_sz_1620_ = lean_array_size(v_cs_1617_);
v___x_1621_ = ((size_t)0ULL);
v___x_1622_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(v_init_1610_, v___x_1611_, v_cs_1617_, v_sz_1620_, v___x_1621_, v___x_1619_, v___y_1614_, v___y_1615_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1637_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1625_ = v___x_1622_;
v_isShared_1626_ = v_isSharedCheck_1637_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1622_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1637_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v_fst_1627_; 
v_fst_1627_ = lean_ctor_get(v_a_1623_, 0);
if (lean_obj_tag(v_fst_1627_) == 0)
{
lean_object* v_snd_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
v_snd_1628_ = lean_ctor_get(v_a_1623_, 1);
lean_inc(v_snd_1628_);
lean_dec(v_a_1623_);
v___x_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1629_, 0, v_snd_1628_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1629_);
v___x_1631_ = v___x_1625_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
else
{
lean_object* v_val_1633_; lean_object* v___x_1635_; 
lean_inc_ref(v_fst_1627_);
lean_dec(v_a_1623_);
v_val_1633_ = lean_ctor_get(v_fst_1627_, 0);
lean_inc(v_val_1633_);
lean_dec_ref_known(v_fst_1627_, 1);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v_val_1633_);
v___x_1635_ = v___x_1625_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_val_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
v_a_1638_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1622_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1622_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
else
{
lean_object* v_vs_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; size_t v_sz_1649_; size_t v___x_1650_; lean_object* v___x_1651_; 
v_vs_1646_ = lean_ctor_get(v_n_1612_, 0);
v___x_1647_ = lean_box(0);
v___x_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
lean_ctor_set(v___x_1648_, 1, v_b_1613_);
v_sz_1649_ = lean_array_size(v_vs_1646_);
v___x_1650_ = ((size_t)0ULL);
v___x_1651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(v___x_1611_, v_vs_1646_, v_sz_1649_, v___x_1650_, v___x_1648_, v___y_1614_, v___y_1615_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1666_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1654_ = v___x_1651_;
v_isShared_1655_ = v_isSharedCheck_1666_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1651_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1666_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v_fst_1656_; 
v_fst_1656_ = lean_ctor_get(v_a_1652_, 0);
if (lean_obj_tag(v_fst_1656_) == 0)
{
lean_object* v_snd_1657_; lean_object* v___x_1658_; lean_object* v___x_1660_; 
v_snd_1657_ = lean_ctor_get(v_a_1652_, 1);
lean_inc(v_snd_1657_);
lean_dec(v_a_1652_);
v___x_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1658_, 0, v_snd_1657_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 0, v___x_1658_);
v___x_1660_ = v___x_1654_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
else
{
lean_object* v_val_1662_; lean_object* v___x_1664_; 
lean_inc_ref(v_fst_1656_);
lean_dec(v_a_1652_);
v_val_1662_ = lean_ctor_get(v_fst_1656_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v_fst_1656_, 1);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 0, v_val_1662_);
v___x_1664_ = v___x_1654_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_val_1662_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
v_a_1667_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1651_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1651_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(lean_object* v_init_1675_, uint8_t v___x_1676_, lean_object* v_as_1677_, size_t v_sz_1678_, size_t v_i_1679_, lean_object* v_b_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
uint8_t v___x_1684_; 
v___x_1684_ = lean_usize_dec_lt(v_i_1679_, v_sz_1678_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; 
v___x_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1685_, 0, v_b_1680_);
return v___x_1685_;
}
else
{
lean_object* v_snd_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1720_; 
v_snd_1686_ = lean_ctor_get(v_b_1680_, 1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_b_1680_);
if (v_isSharedCheck_1720_ == 0)
{
lean_object* v_unused_1721_; 
v_unused_1721_ = lean_ctor_get(v_b_1680_, 0);
lean_dec(v_unused_1721_);
v___x_1688_ = v_b_1680_;
v_isShared_1689_ = v_isSharedCheck_1720_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_snd_1686_);
lean_dec(v_b_1680_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1720_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1690_; lean_object* v_a_1691_; lean_object* v___x_1692_; 
v___x_1690_ = lean_box(0);
v_a_1691_ = lean_array_uget_borrowed(v_as_1677_, v_i_1679_);
lean_inc(v_snd_1686_);
v___x_1692_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(v_init_1675_, v___x_1676_, v_a_1691_, v_snd_1686_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1711_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1711_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1711_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
if (lean_obj_tag(v_a_1693_) == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1699_; 
v___x_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1697_, 0, v_a_1693_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1697_);
v___x_1699_ = v___x_1688_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1697_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v_snd_1686_);
v___x_1699_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1701_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 0, v___x_1699_);
v___x_1701_ = v___x_1695_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; 
lean_del_object(v___x_1695_);
lean_dec(v_snd_1686_);
v_a_1704_ = lean_ctor_get(v_a_1693_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v_a_1693_, 1);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v_a_1704_);
lean_ctor_set(v___x_1688_, 0, v___x_1690_);
v___x_1706_ = v___x_1688_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v_a_1704_);
v___x_1706_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
size_t v___x_1707_; size_t v___x_1708_; 
v___x_1707_ = ((size_t)1ULL);
v___x_1708_ = lean_usize_add(v_i_1679_, v___x_1707_);
v_i_1679_ = v___x_1708_;
v_b_1680_ = v___x_1706_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1719_; 
lean_del_object(v___x_1688_);
lean_dec(v_snd_1686_);
v_a_1712_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1714_ = v___x_1692_;
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1692_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_a_1712_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39___boxed(lean_object* v_init_1722_, lean_object* v___x_1723_, lean_object* v_as_1724_, lean_object* v_sz_1725_, lean_object* v_i_1726_, lean_object* v_b_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v___x_37108__boxed_1731_; size_t v_sz_boxed_1732_; size_t v_i_boxed_1733_; lean_object* v_res_1734_; 
v___x_37108__boxed_1731_ = lean_unbox(v___x_1723_);
v_sz_boxed_1732_ = lean_unbox_usize(v_sz_1725_);
lean_dec(v_sz_1725_);
v_i_boxed_1733_ = lean_unbox_usize(v_i_1726_);
lean_dec(v_i_1726_);
v_res_1734_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(v_init_1722_, v___x_37108__boxed_1731_, v_as_1724_, v_sz_boxed_1732_, v_i_boxed_1733_, v_b_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
lean_dec_ref(v_as_1724_);
lean_dec_ref(v_init_1722_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27___boxed(lean_object* v_init_1735_, lean_object* v___x_1736_, lean_object* v_n_1737_, lean_object* v_b_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
uint8_t v___x_37128__boxed_1742_; lean_object* v_res_1743_; 
v___x_37128__boxed_1742_ = lean_unbox(v___x_1736_);
v_res_1743_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(v_init_1735_, v___x_37128__boxed_1742_, v_n_1737_, v_b_1738_, v___y_1739_, v___y_1740_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec_ref(v_n_1737_);
lean_dec_ref(v_init_1735_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(uint8_t v___x_1744_, lean_object* v_as_1745_, size_t v_sz_1746_, size_t v_i_1747_, lean_object* v_b_1748_, lean_object* v___y_1749_){
_start:
{
uint8_t v___x_1751_; 
v___x_1751_ = lean_usize_dec_lt(v_i_1747_, v_sz_1746_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; 
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v_b_1748_);
return v___x_1752_;
}
else
{
lean_object* v_snd_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1790_; 
v_snd_1753_ = lean_ctor_get(v_b_1748_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_b_1748_);
if (v_isSharedCheck_1790_ == 0)
{
lean_object* v_unused_1791_; 
v_unused_1791_ = lean_ctor_get(v_b_1748_, 0);
lean_dec(v_unused_1791_);
v___x_1755_ = v_b_1748_;
v_isShared_1756_ = v_isSharedCheck_1790_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_snd_1753_);
lean_dec(v_b_1748_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1790_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v_ref_1757_; lean_object* v_a_1758_; lean_object* v_ref_1759_; lean_object* v_msg_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1789_; 
v_ref_1757_ = lean_ctor_get(v___y_1749_, 2);
v_a_1758_ = lean_array_uget(v_as_1745_, v_i_1747_);
v_ref_1759_ = lean_ctor_get(v_a_1758_, 0);
v_msg_1760_ = lean_ctor_get(v_a_1758_, 1);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_a_1758_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1762_ = v_a_1758_;
v_isShared_1763_ = v_isSharedCheck_1789_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_msg_1760_);
lean_inc(v_ref_1759_);
lean_dec(v_a_1758_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1789_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v_ref_1781_; lean_object* v___y_1783_; lean_object* v___x_1786_; 
v___x_1764_ = lean_box(0);
v_ref_1781_ = l_Lean_replaceRef(v_ref_1759_, v_ref_1757_);
lean_dec(v_ref_1759_);
v___x_1786_ = l_Lean_Syntax_getPos_x3f(v_ref_1781_, v___x_1744_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v___x_1787_; 
v___x_1787_ = lean_unsigned_to_nat(0u);
v___y_1783_ = v___x_1787_;
goto v___jp_1782_;
}
else
{
lean_object* v_val_1788_; 
v_val_1788_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_val_1788_);
lean_dec_ref_known(v___x_1786_, 1);
v___y_1783_ = v_val_1788_;
goto v___jp_1782_;
}
v___jp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 1, v___y_1767_);
lean_ctor_set(v___x_1755_, 0, v___y_1766_);
v___x_1769_ = v___x_1755_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___y_1766_);
lean_ctor_set(v_reuseFailAlloc_1780_, 1, v___y_1767_);
v___x_1769_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v_pos2traces_1773_; lean_object* v___x_1775_; 
v___x_1770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1771_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1753_, v___x_1769_, v___x_1770_);
v___x_1772_ = lean_array_push(v___x_1771_, v_msg_1760_);
v_pos2traces_1773_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1753_, v___x_1769_, v___x_1772_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 1, v_pos2traces_1773_);
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1775_ = v___x_1762_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v_pos2traces_1773_);
v___x_1775_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
size_t v___x_1776_; size_t v___x_1777_; 
v___x_1776_ = ((size_t)1ULL);
v___x_1777_ = lean_usize_add(v_i_1747_, v___x_1776_);
v_i_1747_ = v___x_1777_;
v_b_1748_ = v___x_1775_;
goto _start;
}
}
}
v___jp_1782_:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1781_, v___x_1744_);
lean_dec(v_ref_1781_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_inc(v___y_1783_);
v___y_1766_ = v___y_1783_;
v___y_1767_ = v___y_1783_;
goto v___jp_1765_;
}
else
{
lean_object* v_val_1785_; 
v_val_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_val_1785_);
lean_dec_ref_known(v___x_1784_, 1);
v___y_1766_ = v___y_1783_;
v___y_1767_ = v_val_1785_;
goto v___jp_1765_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg___boxed(lean_object* v___x_1792_, lean_object* v_as_1793_, lean_object* v_sz_1794_, lean_object* v_i_1795_, lean_object* v_b_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
uint8_t v___x_37311__boxed_1799_; size_t v_sz_boxed_1800_; size_t v_i_boxed_1801_; lean_object* v_res_1802_; 
v___x_37311__boxed_1799_ = lean_unbox(v___x_1792_);
v_sz_boxed_1800_ = lean_unbox_usize(v_sz_1794_);
lean_dec(v_sz_1794_);
v_i_boxed_1801_ = lean_unbox_usize(v_i_1795_);
lean_dec(v_i_1795_);
v_res_1802_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(v___x_37311__boxed_1799_, v_as_1793_, v_sz_boxed_1800_, v_i_boxed_1801_, v_b_1796_, v___y_1797_);
lean_dec_ref(v___y_1797_);
lean_dec_ref(v_as_1793_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(uint8_t v___x_1803_, lean_object* v_as_1804_, size_t v_sz_1805_, size_t v_i_1806_, lean_object* v_b_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
uint8_t v___x_1811_; 
v___x_1811_ = lean_usize_dec_lt(v_i_1806_, v_sz_1805_);
if (v___x_1811_ == 0)
{
lean_object* v___x_1812_; 
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v_b_1807_);
return v___x_1812_;
}
else
{
lean_object* v_snd_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1850_; 
v_snd_1813_ = lean_ctor_get(v_b_1807_, 1);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_b_1807_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; 
v_unused_1851_ = lean_ctor_get(v_b_1807_, 0);
lean_dec(v_unused_1851_);
v___x_1815_ = v_b_1807_;
v_isShared_1816_ = v_isSharedCheck_1850_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_snd_1813_);
lean_dec(v_b_1807_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1850_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v_ref_1817_; lean_object* v_a_1818_; lean_object* v_ref_1819_; lean_object* v_msg_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1849_; 
v_ref_1817_ = lean_ctor_get(v___y_1808_, 2);
v_a_1818_ = lean_array_uget(v_as_1804_, v_i_1806_);
v_ref_1819_ = lean_ctor_get(v_a_1818_, 0);
v_msg_1820_ = lean_ctor_get(v_a_1818_, 1);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_a_1818_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1822_ = v_a_1818_;
v_isShared_1823_ = v_isSharedCheck_1849_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_msg_1820_);
lean_inc(v_ref_1819_);
lean_dec(v_a_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1849_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1824_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v_ref_1841_; lean_object* v___y_1843_; lean_object* v___x_1846_; 
v___x_1824_ = lean_box(0);
v_ref_1841_ = l_Lean_replaceRef(v_ref_1819_, v_ref_1817_);
lean_dec(v_ref_1819_);
v___x_1846_ = l_Lean_Syntax_getPos_x3f(v_ref_1841_, v___x_1803_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_unsigned_to_nat(0u);
v___y_1843_ = v___x_1847_;
goto v___jp_1842_;
}
else
{
lean_object* v_val_1848_; 
v_val_1848_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_val_1848_);
lean_dec_ref_known(v___x_1846_, 1);
v___y_1843_ = v_val_1848_;
goto v___jp_1842_;
}
v___jp_1825_:
{
lean_object* v___x_1829_; 
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 1, v___y_1827_);
lean_ctor_set(v___x_1815_, 0, v___y_1826_);
v___x_1829_ = v___x_1815_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___y_1826_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v___y_1827_);
v___x_1829_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v_pos2traces_1833_; lean_object* v___x_1835_; 
v___x_1830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1831_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1813_, v___x_1829_, v___x_1830_);
v___x_1832_ = lean_array_push(v___x_1831_, v_msg_1820_);
v_pos2traces_1833_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1813_, v___x_1829_, v___x_1832_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 1, v_pos2traces_1833_);
lean_ctor_set(v___x_1822_, 0, v___x_1824_);
v___x_1835_ = v___x_1822_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1824_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_pos2traces_1833_);
v___x_1835_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
size_t v___x_1836_; size_t v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = ((size_t)1ULL);
v___x_1837_ = lean_usize_add(v_i_1806_, v___x_1836_);
v___x_1838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(v___x_1803_, v_as_1804_, v_sz_1805_, v___x_1837_, v___x_1835_, v___y_1808_);
return v___x_1838_;
}
}
}
v___jp_1842_:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1841_, v___x_1803_);
lean_dec(v_ref_1841_);
if (lean_obj_tag(v___x_1844_) == 0)
{
lean_inc(v___y_1843_);
v___y_1826_ = v___y_1843_;
v___y_1827_ = v___y_1843_;
goto v___jp_1825_;
}
else
{
lean_object* v_val_1845_; 
v_val_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_val_1845_);
lean_dec_ref_known(v___x_1844_, 1);
v___y_1826_ = v___y_1843_;
v___y_1827_ = v_val_1845_;
goto v___jp_1825_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28___boxed(lean_object* v___x_1852_, lean_object* v_as_1853_, lean_object* v_sz_1854_, lean_object* v_i_1855_, lean_object* v_b_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
uint8_t v___x_37391__boxed_1860_; size_t v_sz_boxed_1861_; size_t v_i_boxed_1862_; lean_object* v_res_1863_; 
v___x_37391__boxed_1860_ = lean_unbox(v___x_1852_);
v_sz_boxed_1861_ = lean_unbox_usize(v_sz_1854_);
lean_dec(v_sz_1854_);
v_i_boxed_1862_ = lean_unbox_usize(v_i_1855_);
lean_dec(v_i_1855_);
v_res_1863_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(v___x_37391__boxed_1860_, v_as_1853_, v_sz_boxed_1861_, v_i_boxed_1862_, v_b_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec_ref(v_as_1853_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(uint8_t v___x_1864_, lean_object* v_t_1865_, lean_object* v_init_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v_root_1870_; lean_object* v_tail_1871_; lean_object* v___x_1872_; 
v_root_1870_ = lean_ctor_get(v_t_1865_, 0);
v_tail_1871_ = lean_ctor_get(v_t_1865_, 1);
lean_inc_ref(v_init_1866_);
v___x_1872_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(v_init_1866_, v___x_1864_, v_root_1870_, v_init_1866_, v___y_1867_, v___y_1868_);
lean_dec_ref(v_init_1866_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1909_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1909_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1909_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
if (lean_obj_tag(v_a_1873_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1879_; 
v_a_1877_ = lean_ctor_get(v_a_1873_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v_a_1873_, 1);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v_a_1877_);
v___x_1879_ = v___x_1875_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; size_t v_sz_1884_; size_t v___x_1885_; lean_object* v___x_1886_; 
lean_del_object(v___x_1875_);
v_a_1881_ = lean_ctor_get(v_a_1873_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v_a_1873_, 1);
v___x_1882_ = lean_box(0);
v___x_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
lean_ctor_set(v___x_1883_, 1, v_a_1881_);
v_sz_1884_ = lean_array_size(v_tail_1871_);
v___x_1885_ = ((size_t)0ULL);
v___x_1886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(v___x_1864_, v_tail_1871_, v_sz_1884_, v___x_1885_, v___x_1883_, v___y_1867_, v___y_1868_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1900_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1889_ = v___x_1886_;
v_isShared_1890_ = v_isSharedCheck_1900_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1900_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v_fst_1891_; 
v_fst_1891_ = lean_ctor_get(v_a_1887_, 0);
if (lean_obj_tag(v_fst_1891_) == 0)
{
lean_object* v_snd_1892_; lean_object* v___x_1894_; 
v_snd_1892_ = lean_ctor_get(v_a_1887_, 1);
lean_inc(v_snd_1892_);
lean_dec(v_a_1887_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v_snd_1892_);
v___x_1894_ = v___x_1889_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_snd_1892_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
else
{
lean_object* v_val_1896_; lean_object* v___x_1898_; 
lean_inc_ref(v_fst_1891_);
lean_dec(v_a_1887_);
v_val_1896_ = lean_ctor_get(v_fst_1891_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v_fst_1891_, 1);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v_val_1896_);
v___x_1898_ = v___x_1889_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_val_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1886_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1886_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
v_a_1910_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1872_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1872_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19___boxed(lean_object* v___x_1918_, lean_object* v_t_1919_, lean_object* v_init_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
uint8_t v___x_37472__boxed_1924_; lean_object* v_res_1925_; 
v___x_37472__boxed_1924_ = lean_unbox(v___x_1918_);
v_res_1925_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(v___x_37472__boxed_1924_, v_t_1919_, v_init_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec_ref(v_t_1919_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(lean_object* v_x_1926_, lean_object* v_x_1927_){
_start:
{
if (lean_obj_tag(v_x_1927_) == 0)
{
return v_x_1926_;
}
else
{
lean_object* v_key_1928_; lean_object* v_value_1929_; lean_object* v_tail_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v_key_1928_ = lean_ctor_get(v_x_1927_, 0);
v_value_1929_ = lean_ctor_get(v_x_1927_, 1);
v_tail_1930_ = lean_ctor_get(v_x_1927_, 2);
lean_inc(v_value_1929_);
lean_inc(v_key_1928_);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v_key_1928_);
lean_ctor_set(v___x_1931_, 1, v_value_1929_);
v___x_1932_ = lean_array_push(v_x_1926_, v___x_1931_);
v_x_1926_ = v___x_1932_;
v_x_1927_ = v_tail_1930_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22___boxed(lean_object* v_x_1934_, lean_object* v_x_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(v_x_1934_, v_x_1935_);
lean_dec(v_x_1935_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(lean_object* v_as_1937_, size_t v_i_1938_, size_t v_stop_1939_, lean_object* v_b_1940_){
_start:
{
uint8_t v___x_1941_; 
v___x_1941_ = lean_usize_dec_eq(v_i_1938_, v_stop_1939_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; lean_object* v___x_1943_; size_t v___x_1944_; size_t v___x_1945_; 
v___x_1942_ = lean_array_uget_borrowed(v_as_1937_, v_i_1938_);
v___x_1943_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(v_b_1940_, v___x_1942_);
v___x_1944_ = ((size_t)1ULL);
v___x_1945_ = lean_usize_add(v_i_1938_, v___x_1944_);
v_i_1938_ = v___x_1945_;
v_b_1940_ = v___x_1943_;
goto _start;
}
else
{
return v_b_1940_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23___boxed(lean_object* v_as_1947_, lean_object* v_i_1948_, lean_object* v_stop_1949_, lean_object* v_b_1950_){
_start:
{
size_t v_i_boxed_1951_; size_t v_stop_boxed_1952_; lean_object* v_res_1953_; 
v_i_boxed_1951_ = lean_unbox_usize(v_i_1948_);
lean_dec(v_i_1948_);
v_stop_boxed_1952_ = lean_unbox_usize(v_stop_1949_);
lean_dec(v_stop_1949_);
v_res_1953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(v_as_1947_, v_i_boxed_1951_, v_stop_boxed_1952_, v_b_1950_);
lean_dec_ref(v_as_1947_);
return v_res_1953_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1954_ = lean_unsigned_to_nat(32u);
v___x_1955_ = lean_mk_empty_array_with_capacity(v___x_1954_);
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
return v___x_1956_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1(void){
_start:
{
size_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1957_ = ((size_t)5ULL);
v___x_1958_ = lean_unsigned_to_nat(0u);
v___x_1959_ = lean_unsigned_to_nat(32u);
v___x_1960_ = lean_mk_empty_array_with_capacity(v___x_1959_);
v___x_1961_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0);
v___x_1962_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
lean_ctor_set(v___x_1962_, 1, v___x_1960_);
lean_ctor_set(v___x_1962_, 2, v___x_1958_);
lean_ctor_set(v___x_1962_, 3, v___x_1958_);
lean_ctor_set_usize(v___x_1962_, 4, v___x_1957_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(lean_object* v___y_1963_){
_start:
{
lean_object* v___x_1965_; lean_object* v_traceState_1966_; lean_object* v_traces_1967_; lean_object* v___x_1968_; lean_object* v_traceState_1969_; lean_object* v_env_1970_; lean_object* v_nextMacroScope_1971_; lean_object* v_ngen_1972_; lean_object* v_auxDeclNGen_1973_; lean_object* v_cache_1974_; lean_object* v_messages_1975_; lean_object* v_infoState_1976_; lean_object* v_snapshotTasks_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1996_; 
v___x_1965_ = lean_st_ref_get(v___y_1963_);
v_traceState_1966_ = lean_ctor_get(v___x_1965_, 4);
lean_inc_ref(v_traceState_1966_);
lean_dec(v___x_1965_);
v_traces_1967_ = lean_ctor_get(v_traceState_1966_, 0);
lean_inc_ref(v_traces_1967_);
lean_dec_ref(v_traceState_1966_);
v___x_1968_ = lean_st_ref_take(v___y_1963_);
v_traceState_1969_ = lean_ctor_get(v___x_1968_, 4);
v_env_1970_ = lean_ctor_get(v___x_1968_, 0);
v_nextMacroScope_1971_ = lean_ctor_get(v___x_1968_, 1);
v_ngen_1972_ = lean_ctor_get(v___x_1968_, 2);
v_auxDeclNGen_1973_ = lean_ctor_get(v___x_1968_, 3);
v_cache_1974_ = lean_ctor_get(v___x_1968_, 5);
v_messages_1975_ = lean_ctor_get(v___x_1968_, 6);
v_infoState_1976_ = lean_ctor_get(v___x_1968_, 7);
v_snapshotTasks_1977_ = lean_ctor_get(v___x_1968_, 8);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1979_ = v___x_1968_;
v_isShared_1980_ = v_isSharedCheck_1996_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_snapshotTasks_1977_);
lean_inc(v_infoState_1976_);
lean_inc(v_messages_1975_);
lean_inc(v_cache_1974_);
lean_inc(v_traceState_1969_);
lean_inc(v_auxDeclNGen_1973_);
lean_inc(v_ngen_1972_);
lean_inc(v_nextMacroScope_1971_);
lean_inc(v_env_1970_);
lean_dec(v___x_1968_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1996_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
uint64_t v_tid_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1994_; 
v_tid_1981_ = lean_ctor_get_uint64(v_traceState_1969_, sizeof(void*)*1);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_traceState_1969_);
if (v_isSharedCheck_1994_ == 0)
{
lean_object* v_unused_1995_; 
v_unused_1995_ = lean_ctor_get(v_traceState_1969_, 0);
lean_dec(v_unused_1995_);
v___x_1983_ = v_traceState_1969_;
v_isShared_1984_ = v_isSharedCheck_1994_;
goto v_resetjp_1982_;
}
else
{
lean_dec(v_traceState_1969_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1994_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1985_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_1985_);
v___x_1987_ = v___x_1983_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1985_);
lean_ctor_set_uint64(v_reuseFailAlloc_1993_, sizeof(void*)*1, v_tid_1981_);
v___x_1987_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 4, v___x_1987_);
v___x_1989_ = v___x_1979_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_env_1970_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_nextMacroScope_1971_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_ngen_1972_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_auxDeclNGen_1973_);
lean_ctor_set(v_reuseFailAlloc_1992_, 4, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_1992_, 5, v_cache_1974_);
lean_ctor_set(v_reuseFailAlloc_1992_, 6, v_messages_1975_);
lean_ctor_set(v_reuseFailAlloc_1992_, 7, v_infoState_1976_);
lean_ctor_set(v_reuseFailAlloc_1992_, 8, v_snapshotTasks_1977_);
v___x_1989_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1990_ = lean_st_ref_put(v___y_1963_, v___x_1989_);
v___x_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1991_, 0, v_traces_1967_);
return v___x_1991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___boxed(lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(v___y_1997_);
lean_dec(v___y_1997_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(lean_object* v_hi_2000_, lean_object* v_pivot_2001_, lean_object* v_as_2002_, lean_object* v_i_2003_, lean_object* v_k_2004_){
_start:
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_nat_dec_lt(v_k_2004_, v_hi_2000_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_dec(v_k_2004_);
v___x_2006_ = lean_array_fswap(v_as_2002_, v_i_2003_, v_hi_2000_);
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v_i_2003_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
return v___x_2007_;
}
else
{
lean_object* v___x_2008_; lean_object* v_fst_2009_; lean_object* v_fst_2010_; lean_object* v_fst_2011_; lean_object* v_fst_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2008_ = lean_array_fget_borrowed(v_as_2002_, v_k_2004_);
v_fst_2009_ = lean_ctor_get(v___x_2008_, 0);
v_fst_2010_ = lean_ctor_get(v_pivot_2001_, 0);
v_fst_2011_ = lean_ctor_get(v_fst_2009_, 0);
v_fst_2012_ = lean_ctor_get(v_fst_2010_, 0);
v___x_2013_ = lean_unsigned_to_nat(1u);
v___x_2014_ = lean_nat_add(v_fst_2011_, v___x_2013_);
v___x_2015_ = lean_nat_dec_le(v___x_2014_, v_fst_2012_);
lean_dec(v___x_2014_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_nat_add(v_k_2004_, v___x_2013_);
lean_dec(v_k_2004_);
v_k_2004_ = v___x_2016_;
goto _start;
}
else
{
lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2018_ = lean_array_fswap(v_as_2002_, v_i_2003_, v_k_2004_);
v___x_2019_ = lean_nat_add(v_i_2003_, v___x_2013_);
lean_dec(v_i_2003_);
v___x_2020_ = lean_nat_add(v_k_2004_, v___x_2013_);
lean_dec(v_k_2004_);
v_as_2002_ = v___x_2018_;
v_i_2003_ = v___x_2019_;
v_k_2004_ = v___x_2020_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg___boxed(lean_object* v_hi_2022_, lean_object* v_pivot_2023_, lean_object* v_as_2024_, lean_object* v_i_2025_, lean_object* v_k_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(v_hi_2022_, v_pivot_2023_, v_as_2024_, v_i_2025_, v_k_2026_);
lean_dec_ref(v_pivot_2023_);
lean_dec(v_hi_2022_);
return v_res_2027_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(lean_object* v_x_2028_, lean_object* v_x_2029_){
_start:
{
lean_object* v_fst_2030_; lean_object* v_fst_2031_; lean_object* v_fst_2032_; lean_object* v_fst_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_fst_2030_ = lean_ctor_get(v_x_2028_, 0);
v_fst_2031_ = lean_ctor_get(v_x_2029_, 0);
v_fst_2032_ = lean_ctor_get(v_fst_2030_, 0);
v_fst_2033_ = lean_ctor_get(v_fst_2031_, 0);
v___x_2034_ = lean_unsigned_to_nat(1u);
v___x_2035_ = lean_nat_add(v_fst_2032_, v___x_2034_);
v___x_2036_ = lean_nat_dec_le(v___x_2035_, v_fst_2033_);
lean_dec(v___x_2035_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0___boxed(lean_object* v_x_2037_, lean_object* v_x_2038_){
_start:
{
uint8_t v_res_2039_; lean_object* v_r_2040_; 
v_res_2039_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v_x_2037_, v_x_2038_);
lean_dec_ref(v_x_2038_);
lean_dec_ref(v_x_2037_);
v_r_2040_ = lean_box(v_res_2039_);
return v_r_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(lean_object* v_n_2041_, lean_object* v_as_2042_, lean_object* v_lo_2043_, lean_object* v_hi_2044_){
_start:
{
lean_object* v___y_2046_; uint8_t v___x_2056_; 
v___x_2056_ = lean_nat_dec_lt(v_lo_2043_, v_hi_2044_);
if (v___x_2056_ == 0)
{
lean_dec(v_lo_2043_);
return v_as_2042_;
}
else
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v_mid_2059_; lean_object* v___y_2061_; lean_object* v___y_2067_; lean_object* v___x_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; 
v___x_2057_ = lean_nat_add(v_lo_2043_, v_hi_2044_);
v___x_2058_ = lean_unsigned_to_nat(1u);
v_mid_2059_ = lean_nat_shiftr(v___x_2057_, v___x_2058_);
lean_dec(v___x_2057_);
v___x_2072_ = lean_array_fget_borrowed(v_as_2042_, v_mid_2059_);
v___x_2073_ = lean_array_fget_borrowed(v_as_2042_, v_lo_2043_);
v___x_2074_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v___x_2072_, v___x_2073_);
if (v___x_2074_ == 0)
{
v___y_2067_ = v_as_2042_;
goto v___jp_2066_;
}
else
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_array_fswap(v_as_2042_, v_lo_2043_, v_mid_2059_);
v___y_2067_ = v___x_2075_;
goto v___jp_2066_;
}
v___jp_2060_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; 
v___x_2062_ = lean_array_fget_borrowed(v___y_2061_, v_mid_2059_);
v___x_2063_ = lean_array_fget_borrowed(v___y_2061_, v_hi_2044_);
v___x_2064_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v___x_2062_, v___x_2063_);
if (v___x_2064_ == 0)
{
lean_dec(v_mid_2059_);
v___y_2046_ = v___y_2061_;
goto v___jp_2045_;
}
else
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_array_fswap(v___y_2061_, v_mid_2059_, v_hi_2044_);
lean_dec(v_mid_2059_);
v___y_2046_ = v___x_2065_;
goto v___jp_2045_;
}
}
v___jp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; uint8_t v___x_2070_; 
v___x_2068_ = lean_array_fget_borrowed(v___y_2067_, v_hi_2044_);
v___x_2069_ = lean_array_fget_borrowed(v___y_2067_, v_lo_2043_);
v___x_2070_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v___x_2068_, v___x_2069_);
if (v___x_2070_ == 0)
{
v___y_2061_ = v___y_2067_;
goto v___jp_2060_;
}
else
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_array_fswap(v___y_2067_, v_lo_2043_, v_hi_2044_);
v___y_2061_ = v___x_2071_;
goto v___jp_2060_;
}
}
}
v___jp_2045_:
{
lean_object* v_pivot_2047_; lean_object* v___x_2048_; lean_object* v_fst_2049_; lean_object* v_snd_2050_; uint8_t v___x_2051_; 
v_pivot_2047_ = lean_array_fget(v___y_2046_, v_hi_2044_);
lean_inc_n(v_lo_2043_, 2);
v___x_2048_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(v_hi_2044_, v_pivot_2047_, v___y_2046_, v_lo_2043_, v_lo_2043_);
lean_dec(v_pivot_2047_);
v_fst_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_fst_2049_);
v_snd_2050_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_snd_2050_);
lean_dec_ref(v___x_2048_);
v___x_2051_ = lean_nat_dec_le(v_hi_2044_, v_fst_2049_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2052_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v_n_2041_, v_snd_2050_, v_lo_2043_, v_fst_2049_);
v___x_2053_ = lean_unsigned_to_nat(1u);
v___x_2054_ = lean_nat_add(v_fst_2049_, v___x_2053_);
lean_dec(v_fst_2049_);
v_as_2042_ = v___x_2052_;
v_lo_2043_ = v___x_2054_;
goto _start;
}
else
{
lean_dec(v_fst_2049_);
lean_dec(v_lo_2043_);
return v_snd_2050_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___boxed(lean_object* v_n_2076_, lean_object* v_as_2077_, lean_object* v_lo_2078_, lean_object* v_hi_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v_n_2076_, v_as_2077_, v_lo_2078_, v_hi_2079_);
lean_dec(v_hi_2079_);
lean_dec(v_n_2076_);
return v_res_2080_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2081_ = lean_box(0);
v___x_2082_ = lean_unsigned_to_nat(16u);
v___x_2083_ = lean_mk_array(v___x_2082_, v___x_2081_);
return v___x_2083_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1(void){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v_pos2traces_2086_; 
v___x_2084_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0, &l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0);
v___x_2085_ = lean_unsigned_to_nat(0u);
v_pos2traces_2086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_2086_, 0, v___x_2085_);
lean_ctor_set(v_pos2traces_2086_, 1, v___x_2084_);
return v_pos2traces_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10(lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
lean_object* v_toCold_2093_; lean_object* v_options_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v_toCold_2093_ = lean_ctor_get(v___y_2087_, 0);
v_options_2094_ = lean_ctor_get(v_toCold_2093_, 2);
v___x_2095_ = l_Lean_trace_profiler_output;
v___x_2096_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(v_options_2094_, v___x_2095_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v___x_2097_; uint8_t v___x_2098_; 
v___x_2097_ = l_Lean_trace_profiler_serve;
v___x_2098_ = l_Lean_Option_get___at___00main_spec__8(v_options_2094_, v___x_2097_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2162_; 
v___x_2099_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(v___y_2088_);
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2162_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2162_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
uint8_t v___x_2104_; 
v___x_2104_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_2100_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; lean_object* v_pos2traces_2106_; lean_object* v___x_2107_; 
lean_del_object(v___x_2102_);
v___x_2105_ = lean_unsigned_to_nat(0u);
v_pos2traces_2106_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1, &l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1);
v___x_2107_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(v___x_2104_, v_a_2100_, v_pos2traces_2106_, v___y_2087_, v___y_2088_);
lean_dec(v_a_2100_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___y_2110_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2136_; lean_object* v_size_2142_; lean_object* v_buckets_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v_size_2142_ = lean_ctor_get(v_a_2108_, 0);
lean_inc(v_size_2142_);
v_buckets_2143_ = lean_ctor_get(v_a_2108_, 1);
lean_inc_ref(v_buckets_2143_);
lean_dec(v_a_2108_);
v___x_2144_ = lean_mk_empty_array_with_capacity(v_size_2142_);
lean_dec(v_size_2142_);
v___x_2145_ = lean_array_get_size(v_buckets_2143_);
v___x_2146_ = lean_nat_dec_lt(v___x_2105_, v___x_2145_);
if (v___x_2146_ == 0)
{
lean_dec_ref(v_buckets_2143_);
v___y_2136_ = v___x_2144_;
goto v___jp_2135_;
}
else
{
size_t v___x_2147_; size_t v___x_2148_; lean_object* v___x_2149_; 
v___x_2147_ = ((size_t)0ULL);
v___x_2148_ = lean_usize_of_nat(v___x_2145_);
v___x_2149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(v_buckets_2143_, v___x_2147_, v___x_2148_, v___x_2144_);
lean_dec_ref(v_buckets_2143_);
v___y_2136_ = v___x_2149_;
goto v___jp_2135_;
}
v___jp_2109_:
{
lean_object* v___x_2111_; size_t v_sz_2112_; size_t v___x_2113_; lean_object* v___x_2114_; 
v___x_2111_ = lean_box(0);
v_sz_2112_ = lean_array_size(v___y_2110_);
v___x_2113_ = ((size_t)0ULL);
v___x_2114_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(v___x_2098_, v___y_2110_, v_sz_2112_, v___x_2113_, v___x_2111_, v___y_2087_, v___y_2088_);
lean_dec_ref(v___y_2110_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2121_ == 0)
{
lean_object* v_unused_2122_; 
v_unused_2122_ = lean_ctor_get(v___x_2114_, 0);
lean_dec(v_unused_2122_);
v___x_2116_ = v___x_2114_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_dec(v___x_2114_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2111_);
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2111_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
else
{
return v___x_2114_;
}
}
v___jp_2123_:
{
lean_object* v___x_2128_; 
v___x_2128_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v___y_2125_, v___y_2126_, v___y_2124_, v___y_2127_);
lean_dec(v___y_2127_);
lean_dec(v___y_2125_);
v___y_2110_ = v___x_2128_;
goto v___jp_2109_;
}
v___jp_2129_:
{
uint8_t v___x_2134_; 
v___x_2134_ = lean_nat_dec_le(v___y_2133_, v___y_2131_);
if (v___x_2134_ == 0)
{
lean_dec(v___y_2131_);
lean_inc(v___y_2133_);
v___y_2124_ = v___y_2133_;
v___y_2125_ = v___y_2130_;
v___y_2126_ = v___y_2132_;
v___y_2127_ = v___y_2133_;
goto v___jp_2123_;
}
else
{
v___y_2124_ = v___y_2133_;
v___y_2125_ = v___y_2130_;
v___y_2126_ = v___y_2132_;
v___y_2127_ = v___y_2131_;
goto v___jp_2123_;
}
}
v___jp_2135_:
{
lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2137_ = lean_array_get_size(v___y_2136_);
v___x_2138_ = lean_nat_dec_eq(v___x_2137_, v___x_2105_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2139_ = lean_unsigned_to_nat(1u);
v___x_2140_ = lean_nat_sub(v___x_2137_, v___x_2139_);
v___x_2141_ = lean_nat_dec_le(v___x_2105_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_inc(v___x_2140_);
v___y_2130_ = v___x_2137_;
v___y_2131_ = v___x_2140_;
v___y_2132_ = v___y_2136_;
v___y_2133_ = v___x_2140_;
goto v___jp_2129_;
}
else
{
v___y_2130_ = v___x_2137_;
v___y_2131_ = v___x_2140_;
v___y_2132_ = v___y_2136_;
v___y_2133_ = v___x_2105_;
goto v___jp_2129_;
}
}
else
{
v___y_2110_ = v___y_2136_;
goto v___jp_2109_;
}
}
}
else
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
v_a_2150_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2107_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2107_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
else
{
lean_object* v___x_2158_; lean_object* v___x_2160_; 
lean_dec(v_a_2100_);
v___x_2158_ = lean_box(0);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2158_);
v___x_2160_ = v___x_2102_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v___x_2158_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
else
{
goto v___jp_2090_;
}
}
else
{
lean_dec_ref_known(v___x_2096_, 1);
goto v___jp_2090_;
}
v___jp_2090_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = lean_box(0);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
return v___x_2092_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___boxed(lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lean_addTraceAsMessages___at___00main_spec__10(v___y_2163_, v___y_2164_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(lean_object* v_as_2167_, size_t v_sz_2168_, size_t v_i_2169_, lean_object* v_b_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_){
_start:
{
uint8_t v___x_2174_; 
v___x_2174_ = lean_usize_dec_lt(v_i_2169_, v_sz_2168_);
if (v___x_2174_ == 0)
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v_b_2170_);
return v___x_2175_;
}
else
{
lean_object* v_toCold_2176_; lean_object* v_options_2177_; lean_object* v___x_2178_; lean_object* v_a_2179_; lean_object* v___x_2180_; 
v_toCold_2176_ = lean_ctor_get(v___y_2171_, 0);
v_options_2177_ = lean_ctor_get(v_toCold_2176_, 2);
v___x_2178_ = lean_box(0);
v_a_2179_ = lean_array_uget_borrowed(v_as_2167_, v_i_2169_);
lean_inc_ref(v_options_2177_);
lean_inc(v_a_2179_);
v___x_2180_ = l_Lean_Compiler_LCNF_resumeCompilation(v_a_2179_, v_options_2177_, v___y_2171_, v___y_2172_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v___x_2181_; 
lean_dec_ref_known(v___x_2180_, 1);
v___x_2181_ = l_Lean_addTraceAsMessages___at___00main_spec__10(v___y_2171_, v___y_2172_);
if (lean_obj_tag(v___x_2181_) == 0)
{
size_t v___x_2182_; size_t v___x_2183_; 
lean_dec_ref_known(v___x_2181_, 1);
v___x_2182_ = ((size_t)1ULL);
v___x_2183_ = lean_usize_add(v_i_2169_, v___x_2182_);
v_i_2169_ = v___x_2183_;
v_b_2170_ = v___x_2178_;
goto _start;
}
else
{
return v___x_2181_;
}
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2186_; 
v_a_2185_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2185_);
lean_dec_ref_known(v___x_2180_, 1);
v___x_2186_ = l_Lean_addTraceAsMessages___at___00main_spec__10(v___y_2171_, v___y_2172_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2193_ == 0)
{
lean_object* v_unused_2194_; 
v_unused_2194_ = lean_ctor_get(v___x_2186_, 0);
lean_dec(v_unused_2194_);
v___x_2188_ = v___x_2186_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_dec(v___x_2186_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
lean_ctor_set_tag(v___x_2188_, 1);
lean_ctor_set(v___x_2188_, 0, v_a_2185_);
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2185_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
else
{
lean_dec(v_a_2185_);
return v___x_2186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11___boxed(lean_object* v_as_2195_, lean_object* v_sz_2196_, lean_object* v_i_2197_, lean_object* v_b_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
size_t v_sz_boxed_2202_; size_t v_i_boxed_2203_; lean_object* v_res_2204_; 
v_sz_boxed_2202_ = lean_unbox_usize(v_sz_2196_);
lean_dec(v_sz_2196_);
v_i_boxed_2203_ = lean_unbox_usize(v_i_2197_);
lean_dec(v_i_2197_);
v_res_2204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(v_as_2195_, v_sz_boxed_2202_, v_i_boxed_2203_, v_b_2198_, v___y_2199_, v___y_2200_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec_ref(v_as_2195_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(lean_object* v_as_2205_, size_t v_sz_2206_, size_t v_i_2207_, lean_object* v_b_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
uint8_t v___x_2212_; 
v___x_2212_ = lean_usize_dec_lt(v_i_2207_, v_sz_2206_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; 
v___x_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2213_, 0, v_b_2208_);
return v___x_2213_;
}
else
{
lean_object* v_a_2214_; lean_object* v_declNames_2215_; lean_object* v___x_2216_; size_t v_sz_2217_; size_t v___x_2218_; lean_object* v___x_2219_; 
v_a_2214_ = lean_array_uget_borrowed(v_as_2205_, v_i_2207_);
v_declNames_2215_ = lean_ctor_get(v_a_2214_, 0);
v___x_2216_ = lean_box(0);
v_sz_2217_ = lean_array_size(v_declNames_2215_);
v___x_2218_ = ((size_t)0ULL);
v___x_2219_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(v_declNames_2215_, v_sz_2217_, v___x_2218_, v___x_2216_, v___y_2209_, v___y_2210_);
if (lean_obj_tag(v___x_2219_) == 0)
{
lean_object* v___x_2220_; 
lean_dec_ref_known(v___x_2219_, 1);
v___x_2220_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_2210_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v_unreported_2222_; lean_object* v___x_2223_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_a_2221_);
lean_dec_ref_known(v___x_2220_, 1);
v_unreported_2222_ = lean_ctor_get(v_a_2221_, 1);
lean_inc_ref(v_unreported_2222_);
lean_dec(v_a_2221_);
v___x_2223_ = l_Lean_PersistentArray_forIn___at___00main_spec__12(v_unreported_2222_, v___x_2216_, v___y_2209_, v___y_2210_);
lean_dec_ref(v_unreported_2222_);
if (lean_obj_tag(v___x_2223_) == 0)
{
size_t v___x_2224_; size_t v___x_2225_; 
lean_dec_ref_known(v___x_2223_, 1);
v___x_2224_ = ((size_t)1ULL);
v___x_2225_ = lean_usize_add(v_i_2207_, v___x_2224_);
v_i_2207_ = v___x_2225_;
v_b_2208_ = v___x_2216_;
goto _start;
}
else
{
return v___x_2223_;
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
v_a_2227_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2220_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2220_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
return v___x_2219_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13___boxed(lean_object* v_as_2235_, lean_object* v_sz_2236_, lean_object* v_i_2237_, lean_object* v_b_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
size_t v_sz_boxed_2242_; size_t v_i_boxed_2243_; lean_object* v_res_2244_; 
v_sz_boxed_2242_ = lean_unbox_usize(v_sz_2236_);
lean_dec(v_sz_2236_);
v_i_boxed_2243_ = lean_unbox_usize(v_i_2237_);
lean_dec(v_i_2237_);
v_res_2244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(v_as_2235_, v_sz_boxed_2242_, v_i_boxed_2243_, v_b_2238_, v___y_2239_, v___y_2240_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec_ref(v_as_2235_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object* v_as_2245_, size_t v_i_2246_, size_t v_stop_2247_, lean_object* v_b_2248_){
_start:
{
uint8_t v___x_2249_; 
v___x_2249_ = lean_usize_dec_eq(v_i_2246_, v_stop_2247_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; lean_object* v_name_2251_; lean_object* v___x_2252_; size_t v___x_2253_; size_t v___x_2254_; 
v___x_2250_ = lean_array_uget_borrowed(v_as_2245_, v_i_2246_);
v_name_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_name_2251_);
v___x_2252_ = l_Lean_Compiler_LCNF_setDeclPublic(v_b_2248_, v_name_2251_);
v___x_2253_ = ((size_t)1ULL);
v___x_2254_ = lean_usize_add(v_i_2246_, v___x_2253_);
v_i_2246_ = v___x_2254_;
v_b_2248_ = v___x_2252_;
goto _start;
}
else
{
return v_b_2248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object* v_as_2256_, lean_object* v_i_2257_, lean_object* v_stop_2258_, lean_object* v_b_2259_){
_start:
{
size_t v_i_boxed_2260_; size_t v_stop_boxed_2261_; lean_object* v_res_2262_; 
v_i_boxed_2260_ = lean_unbox_usize(v_i_2257_);
lean_dec(v_i_2257_);
v_stop_boxed_2261_ = lean_unbox_usize(v_stop_2258_);
lean_dec(v_stop_2258_);
v_res_2262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v_as_2256_, v_i_boxed_2260_, v_stop_boxed_2261_, v_b_2259_);
lean_dec_ref(v_as_2256_);
return v_res_2262_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0(uint8_t v_suppressElabErrors_2263_, uint8_t v___y_2264_, lean_object* v_x_2265_){
_start:
{
if (lean_obj_tag(v_x_2265_) == 1)
{
lean_object* v_pre_2266_; 
v_pre_2266_ = lean_ctor_get(v_x_2265_, 0);
switch(lean_obj_tag(v_pre_2266_))
{
case 1:
{
lean_object* v_pre_2267_; 
v_pre_2267_ = lean_ctor_get(v_pre_2266_, 0);
switch(lean_obj_tag(v_pre_2267_))
{
case 0:
{
lean_object* v_str_2268_; lean_object* v_str_2269_; lean_object* v___x_2270_; uint8_t v___x_2271_; 
v_str_2268_ = lean_ctor_get(v_x_2265_, 1);
v_str_2269_ = lean_ctor_get(v_pre_2266_, 1);
v___x_2270_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0));
v___x_2271_ = lean_string_dec_eq(v_str_2269_, v___x_2270_);
if (v___x_2271_ == 0)
{
lean_object* v___x_2272_; uint8_t v___x_2273_; 
v___x_2272_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1));
v___x_2273_ = lean_string_dec_eq(v_str_2269_, v___x_2272_);
if (v___x_2273_ == 0)
{
return v___x_2273_;
}
else
{
lean_object* v___x_2274_; uint8_t v___x_2275_; 
v___x_2274_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2));
v___x_2275_ = lean_string_dec_eq(v_str_2268_, v___x_2274_);
if (v___x_2275_ == 0)
{
return v___x_2275_;
}
else
{
return v_suppressElabErrors_2263_;
}
}
}
else
{
lean_object* v___x_2276_; uint8_t v___x_2277_; 
v___x_2276_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3));
v___x_2277_ = lean_string_dec_eq(v_str_2268_, v___x_2276_);
if (v___x_2277_ == 0)
{
return v___x_2277_;
}
else
{
return v_suppressElabErrors_2263_;
}
}
}
case 1:
{
lean_object* v_pre_2278_; 
v_pre_2278_ = lean_ctor_get(v_pre_2267_, 0);
if (lean_obj_tag(v_pre_2278_) == 0)
{
lean_object* v_str_2279_; lean_object* v_str_2280_; lean_object* v_str_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; 
v_str_2279_ = lean_ctor_get(v_x_2265_, 1);
v_str_2280_ = lean_ctor_get(v_pre_2266_, 1);
v_str_2281_ = lean_ctor_get(v_pre_2267_, 1);
v___x_2282_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4));
v___x_2283_ = lean_string_dec_eq(v_str_2281_, v___x_2282_);
if (v___x_2283_ == 0)
{
return v___x_2283_;
}
else
{
lean_object* v___x_2284_; uint8_t v___x_2285_; 
v___x_2284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5));
v___x_2285_ = lean_string_dec_eq(v_str_2280_, v___x_2284_);
if (v___x_2285_ == 0)
{
return v___x_2285_;
}
else
{
lean_object* v___x_2286_; uint8_t v___x_2287_; 
v___x_2286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6));
v___x_2287_ = lean_string_dec_eq(v_str_2279_, v___x_2286_);
if (v___x_2287_ == 0)
{
return v___x_2287_;
}
else
{
return v_suppressElabErrors_2263_;
}
}
}
}
else
{
return v___y_2264_;
}
}
default: 
{
return v___y_2264_;
}
}
}
case 0:
{
lean_object* v_str_2288_; lean_object* v___x_2289_; uint8_t v___x_2290_; 
v_str_2288_ = lean_ctor_get(v_x_2265_, 1);
v___x_2289_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_2290_ = lean_string_dec_eq(v_str_2288_, v___x_2289_);
if (v___x_2290_ == 0)
{
return v___x_2290_;
}
else
{
return v_suppressElabErrors_2263_;
}
}
default: 
{
return v___y_2264_;
}
}
}
else
{
return v___y_2264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0___boxed(lean_object* v_suppressElabErrors_2291_, lean_object* v___y_2292_, lean_object* v_x_2293_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2294_; uint8_t v___y_38072__boxed_2295_; uint8_t v_res_2296_; lean_object* v_r_2297_; 
v_suppressElabErrors_boxed_2294_ = lean_unbox(v_suppressElabErrors_2291_);
v___y_38072__boxed_2295_ = lean_unbox(v___y_2292_);
v_res_2296_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0(v_suppressElabErrors_boxed_2294_, v___y_38072__boxed_2295_, v_x_2293_);
lean_dec(v_x_2293_);
v_r_2297_ = lean_box(v_res_2296_);
return v_r_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(lean_object* v_ref_2298_, lean_object* v_msgData_2299_, uint8_t v_severity_2300_, uint8_t v_isSilent_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
uint8_t v___y_2306_; lean_object* v___y_2307_; lean_object* v___y_2308_; uint8_t v___y_2309_; lean_object* v___y_2310_; lean_object* v___y_2311_; lean_object* v___y_2312_; lean_object* v_currNamespace_2313_; lean_object* v_openDecls_2314_; lean_object* v___y_2315_; lean_object* v___y_2341_; lean_object* v___y_2342_; lean_object* v___y_2343_; lean_object* v___y_2344_; uint8_t v___y_2345_; lean_object* v___y_2346_; uint8_t v___y_2347_; uint8_t v___y_2348_; lean_object* v___y_2349_; lean_object* v___y_2350_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; uint8_t v___y_2371_; lean_object* v___y_2372_; lean_object* v___y_2373_; uint8_t v___y_2374_; uint8_t v___y_2375_; lean_object* v___y_2376_; lean_object* v___y_2377_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2384_; uint8_t v___y_2385_; lean_object* v___y_2386_; lean_object* v___y_2387_; uint8_t v___y_2388_; uint8_t v___y_2389_; uint8_t v___x_2394_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; uint8_t v___y_2401_; lean_object* v___y_2402_; uint8_t v___y_2403_; uint8_t v___y_2404_; uint8_t v___y_2406_; uint8_t v___x_2424_; 
v___x_2394_ = 2;
v___x_2424_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2300_, v___x_2394_);
if (v___x_2424_ == 0)
{
v___y_2406_ = v___x_2424_;
goto v___jp_2405_;
}
else
{
uint8_t v___x_2425_; 
lean_inc_ref(v_msgData_2299_);
v___x_2425_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2299_);
v___y_2406_ = v___x_2425_;
goto v___jp_2405_;
}
v___jp_2305_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v_env_2320_; lean_object* v_nextMacroScope_2321_; lean_object* v_ngen_2322_; lean_object* v_auxDeclNGen_2323_; lean_object* v_traceState_2324_; lean_object* v_cache_2325_; lean_object* v_messages_2326_; lean_object* v_infoState_2327_; lean_object* v_snapshotTasks_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2339_; 
lean_inc(v_openDecls_2314_);
lean_inc(v_currNamespace_2313_);
v___x_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2316_, 0, v_currNamespace_2313_);
lean_ctor_set(v___x_2316_, 1, v_openDecls_2314_);
v___x_2317_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
lean_ctor_set(v___x_2317_, 1, v___y_2311_);
lean_inc_ref(v___y_2312_);
lean_inc_ref(v___y_2308_);
v___x_2318_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2318_, 0, v___y_2308_);
lean_ctor_set(v___x_2318_, 1, v___y_2310_);
lean_ctor_set(v___x_2318_, 2, v___y_2307_);
lean_ctor_set(v___x_2318_, 3, v___y_2312_);
lean_ctor_set(v___x_2318_, 4, v___x_2317_);
lean_ctor_set_uint8(v___x_2318_, sizeof(void*)*5, v___y_2306_);
lean_ctor_set_uint8(v___x_2318_, sizeof(void*)*5 + 1, v___y_2309_);
lean_ctor_set_uint8(v___x_2318_, sizeof(void*)*5 + 2, v_isSilent_2301_);
v___x_2319_ = lean_st_ref_take(v___y_2315_);
v_env_2320_ = lean_ctor_get(v___x_2319_, 0);
v_nextMacroScope_2321_ = lean_ctor_get(v___x_2319_, 1);
v_ngen_2322_ = lean_ctor_get(v___x_2319_, 2);
v_auxDeclNGen_2323_ = lean_ctor_get(v___x_2319_, 3);
v_traceState_2324_ = lean_ctor_get(v___x_2319_, 4);
v_cache_2325_ = lean_ctor_get(v___x_2319_, 5);
v_messages_2326_ = lean_ctor_get(v___x_2319_, 6);
v_infoState_2327_ = lean_ctor_get(v___x_2319_, 7);
v_snapshotTasks_2328_ = lean_ctor_get(v___x_2319_, 8);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2330_ = v___x_2319_;
v_isShared_2331_ = v_isSharedCheck_2339_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_snapshotTasks_2328_);
lean_inc(v_infoState_2327_);
lean_inc(v_messages_2326_);
lean_inc(v_cache_2325_);
lean_inc(v_traceState_2324_);
lean_inc(v_auxDeclNGen_2323_);
lean_inc(v_ngen_2322_);
lean_inc(v_nextMacroScope_2321_);
lean_inc(v_env_2320_);
lean_dec(v___x_2319_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2339_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2335_; 
v___x_2332_ = lean_box(0);
v___x_2333_ = l_Lean_MessageLog_add(v___x_2318_, v_messages_2326_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 6, v___x_2333_);
v___x_2335_ = v___x_2330_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_env_2320_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v_nextMacroScope_2321_);
lean_ctor_set(v_reuseFailAlloc_2338_, 2, v_ngen_2322_);
lean_ctor_set(v_reuseFailAlloc_2338_, 3, v_auxDeclNGen_2323_);
lean_ctor_set(v_reuseFailAlloc_2338_, 4, v_traceState_2324_);
lean_ctor_set(v_reuseFailAlloc_2338_, 5, v_cache_2325_);
lean_ctor_set(v_reuseFailAlloc_2338_, 6, v___x_2333_);
lean_ctor_set(v_reuseFailAlloc_2338_, 7, v_infoState_2327_);
lean_ctor_set(v_reuseFailAlloc_2338_, 8, v_snapshotTasks_2328_);
v___x_2335_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = lean_st_ref_put(v___y_2315_, v___x_2335_);
v___x_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2332_);
return v___x_2337_;
}
}
}
v___jp_2340_:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2366_; 
v___x_2351_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2299_);
v___x_2352_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(v___x_2351_, v___y_2302_, v___y_2303_);
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2355_ = v___x_2352_;
v_isShared_2356_ = v_isSharedCheck_2366_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2352_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2366_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
lean_inc_ref_n(v___y_2346_, 2);
v___x_2357_ = l_Lean_FileMap_toPosition(v___y_2346_, v___y_2349_);
lean_dec(v___y_2349_);
v___x_2358_ = l_Lean_FileMap_toPosition(v___y_2346_, v___y_2350_);
lean_dec(v___y_2350_);
v___x_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
v___x_2360_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1));
if (v___y_2348_ == 0)
{
lean_del_object(v___x_2355_);
lean_dec_ref(v___y_2341_);
v___y_2306_ = v___y_2345_;
v___y_2307_ = v___x_2359_;
v___y_2308_ = v___y_2344_;
v___y_2309_ = v___y_2347_;
v___y_2310_ = v___x_2357_;
v___y_2311_ = v_a_2353_;
v___y_2312_ = v___x_2360_;
v_currNamespace_2313_ = v___y_2342_;
v_openDecls_2314_ = v___y_2343_;
v___y_2315_ = v___y_2303_;
goto v___jp_2305_;
}
else
{
uint8_t v___x_2361_; 
lean_inc(v_a_2353_);
v___x_2361_ = l_Lean_MessageData_hasTag(v___y_2341_, v_a_2353_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2362_; lean_object* v___x_2364_; 
lean_dec_ref_known(v___x_2359_, 1);
lean_dec_ref(v___x_2357_);
lean_dec(v_a_2353_);
v___x_2362_ = lean_box(0);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2362_);
v___x_2364_ = v___x_2355_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
else
{
lean_del_object(v___x_2355_);
v___y_2306_ = v___y_2345_;
v___y_2307_ = v___x_2359_;
v___y_2308_ = v___y_2344_;
v___y_2309_ = v___y_2347_;
v___y_2310_ = v___x_2357_;
v___y_2311_ = v_a_2353_;
v___y_2312_ = v___x_2360_;
v_currNamespace_2313_ = v___y_2342_;
v_openDecls_2314_ = v___y_2343_;
v___y_2315_ = v___y_2303_;
goto v___jp_2305_;
}
}
}
}
v___jp_2367_:
{
lean_object* v___x_2378_; 
v___x_2378_ = l_Lean_Syntax_getTailPos_x3f(v___y_2376_, v___y_2371_);
lean_dec(v___y_2376_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_inc(v___y_2377_);
v___y_2341_ = v___y_2369_;
v___y_2342_ = v___y_2368_;
v___y_2343_ = v___y_2370_;
v___y_2344_ = v___y_2372_;
v___y_2345_ = v___y_2371_;
v___y_2346_ = v___y_2373_;
v___y_2347_ = v___y_2374_;
v___y_2348_ = v___y_2375_;
v___y_2349_ = v___y_2377_;
v___y_2350_ = v___y_2377_;
goto v___jp_2340_;
}
else
{
lean_object* v_val_2379_; 
v_val_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_val_2379_);
lean_dec_ref_known(v___x_2378_, 1);
v___y_2341_ = v___y_2369_;
v___y_2342_ = v___y_2368_;
v___y_2343_ = v___y_2370_;
v___y_2344_ = v___y_2372_;
v___y_2345_ = v___y_2371_;
v___y_2346_ = v___y_2373_;
v___y_2347_ = v___y_2374_;
v___y_2348_ = v___y_2375_;
v___y_2349_ = v___y_2377_;
v___y_2350_ = v_val_2379_;
goto v___jp_2340_;
}
}
v___jp_2380_:
{
lean_object* v_ref_2390_; lean_object* v___x_2391_; 
v_ref_2390_ = l_Lean_replaceRef(v_ref_2298_, v___y_2387_);
v___x_2391_ = l_Lean_Syntax_getPos_x3f(v_ref_2390_, v___y_2385_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v___x_2392_; 
v___x_2392_ = lean_unsigned_to_nat(0u);
v___y_2368_ = v___y_2382_;
v___y_2369_ = v___y_2381_;
v___y_2370_ = v___y_2383_;
v___y_2371_ = v___y_2385_;
v___y_2372_ = v___y_2384_;
v___y_2373_ = v___y_2386_;
v___y_2374_ = v___y_2389_;
v___y_2375_ = v___y_2388_;
v___y_2376_ = v_ref_2390_;
v___y_2377_ = v___x_2392_;
goto v___jp_2367_;
}
else
{
lean_object* v_val_2393_; 
v_val_2393_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_val_2393_);
lean_dec_ref_known(v___x_2391_, 1);
v___y_2368_ = v___y_2382_;
v___y_2369_ = v___y_2381_;
v___y_2370_ = v___y_2383_;
v___y_2371_ = v___y_2385_;
v___y_2372_ = v___y_2384_;
v___y_2373_ = v___y_2386_;
v___y_2374_ = v___y_2389_;
v___y_2375_ = v___y_2388_;
v___y_2376_ = v_ref_2390_;
v___y_2377_ = v_val_2393_;
goto v___jp_2367_;
}
}
v___jp_2395_:
{
if (v___y_2404_ == 0)
{
v___y_2381_ = v___y_2399_;
v___y_2382_ = v___y_2398_;
v___y_2383_ = v___y_2400_;
v___y_2384_ = v___y_2396_;
v___y_2385_ = v___y_2401_;
v___y_2386_ = v___y_2397_;
v___y_2387_ = v___y_2402_;
v___y_2388_ = v___y_2403_;
v___y_2389_ = v_severity_2300_;
goto v___jp_2380_;
}
else
{
v___y_2381_ = v___y_2399_;
v___y_2382_ = v___y_2398_;
v___y_2383_ = v___y_2400_;
v___y_2384_ = v___y_2396_;
v___y_2385_ = v___y_2401_;
v___y_2386_ = v___y_2397_;
v___y_2387_ = v___y_2402_;
v___y_2388_ = v___y_2403_;
v___y_2389_ = v___x_2394_;
goto v___jp_2380_;
}
}
v___jp_2405_:
{
if (v___y_2406_ == 0)
{
lean_object* v_toCold_2407_; lean_object* v_ref_2408_; uint8_t v_suppressElabErrors_2409_; lean_object* v_fileName_2410_; lean_object* v_fileMap_2411_; lean_object* v_options_2412_; lean_object* v_currNamespace_2413_; lean_object* v_openDecls_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___f_2417_; uint8_t v___x_2418_; uint8_t v___x_2419_; 
v_toCold_2407_ = lean_ctor_get(v___y_2302_, 0);
v_ref_2408_ = lean_ctor_get(v___y_2302_, 2);
v_suppressElabErrors_2409_ = lean_ctor_get_uint8(v___y_2302_, sizeof(void*)*3 + 1);
v_fileName_2410_ = lean_ctor_get(v_toCold_2407_, 0);
v_fileMap_2411_ = lean_ctor_get(v_toCold_2407_, 1);
v_options_2412_ = lean_ctor_get(v_toCold_2407_, 2);
v_currNamespace_2413_ = lean_ctor_get(v_toCold_2407_, 4);
v_openDecls_2414_ = lean_ctor_get(v_toCold_2407_, 5);
v___x_2415_ = lean_box(v_suppressElabErrors_2409_);
v___x_2416_ = lean_box(v___y_2406_);
v___f_2417_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2417_, 0, v___x_2415_);
lean_closure_set(v___f_2417_, 1, v___x_2416_);
v___x_2418_ = 1;
v___x_2419_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2300_, v___x_2418_);
if (v___x_2419_ == 0)
{
v___y_2396_ = v_fileName_2410_;
v___y_2397_ = v_fileMap_2411_;
v___y_2398_ = v_currNamespace_2413_;
v___y_2399_ = v___f_2417_;
v___y_2400_ = v_openDecls_2414_;
v___y_2401_ = v___y_2406_;
v___y_2402_ = v_ref_2408_;
v___y_2403_ = v_suppressElabErrors_2409_;
v___y_2404_ = v___x_2419_;
goto v___jp_2395_;
}
else
{
lean_object* v___x_2420_; uint8_t v___x_2421_; 
v___x_2420_ = l_Lean_warningAsError;
v___x_2421_ = l_Lean_Option_get___at___00main_spec__8(v_options_2412_, v___x_2420_);
v___y_2396_ = v_fileName_2410_;
v___y_2397_ = v_fileMap_2411_;
v___y_2398_ = v_currNamespace_2413_;
v___y_2399_ = v___f_2417_;
v___y_2400_ = v_openDecls_2414_;
v___y_2401_ = v___y_2406_;
v___y_2402_ = v_ref_2408_;
v___y_2403_ = v_suppressElabErrors_2409_;
v___y_2404_ = v___x_2421_;
goto v___jp_2395_;
}
}
else
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
lean_dec_ref(v_msgData_2299_);
v___x_2422_ = lean_box(0);
v___x_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
return v___x_2423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___boxed(lean_object* v_ref_2426_, lean_object* v_msgData_2427_, lean_object* v_severity_2428_, lean_object* v_isSilent_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
uint8_t v_severity_boxed_2433_; uint8_t v_isSilent_boxed_2434_; lean_object* v_res_2435_; 
v_severity_boxed_2433_ = lean_unbox(v_severity_2428_);
v_isSilent_boxed_2434_ = lean_unbox(v_isSilent_2429_);
v_res_2435_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(v_ref_2426_, v_msgData_2427_, v_severity_boxed_2433_, v_isSilent_boxed_2434_, v___y_2430_, v___y_2431_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v_ref_2426_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(lean_object* v_msgData_2436_, uint8_t v_severity_2437_, uint8_t v_isSilent_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_ref_2442_; lean_object* v___x_2443_; 
v_ref_2442_ = lean_ctor_get(v___y_2439_, 2);
v___x_2443_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(v_ref_2442_, v_msgData_2436_, v_severity_2437_, v_isSilent_2438_, v___y_2439_, v___y_2440_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30___boxed(lean_object* v_msgData_2444_, lean_object* v_severity_2445_, lean_object* v_isSilent_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
uint8_t v_severity_boxed_2450_; uint8_t v_isSilent_boxed_2451_; lean_object* v_res_2452_; 
v_severity_boxed_2450_ = lean_unbox(v_severity_2445_);
v_isSilent_boxed_2451_ = lean_unbox(v_isSilent_2446_);
v_res_2452_ = l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(v_msgData_2444_, v_severity_boxed_2450_, v_isSilent_boxed_2451_, v___y_2447_, v___y_2448_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14(lean_object* v_msgData_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
uint8_t v___x_2457_; uint8_t v___x_2458_; lean_object* v___x_2459_; 
v___x_2457_ = 2;
v___x_2458_ = 0;
v___x_2459_ = l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(v_msgData_2453_, v___x_2457_, v___x_2458_, v___y_2454_, v___y_2455_);
return v___x_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14___boxed(lean_object* v_msgData_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Lean_logError___at___00main_spec__14(v_msgData_2460_, v___y_2461_, v___y_2462_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object* v_x2_2465_, lean_object* v_as_2466_, size_t v_i_2467_, size_t v_stop_2468_, lean_object* v_b_2469_){
_start:
{
uint8_t v___x_2470_; 
v___x_2470_ = lean_usize_dec_eq(v_i_2467_, v_stop_2468_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2472_; size_t v___x_2473_; size_t v___x_2474_; 
v___x_2471_ = lean_array_uget_borrowed(v_as_2466_, v_i_2467_);
lean_inc_ref(v_x2_2465_);
lean_inc(v___x_2471_);
v___x_2472_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_2471_, v_x2_2465_, v_b_2469_);
v___x_2473_ = ((size_t)1ULL);
v___x_2474_ = lean_usize_add(v_i_2467_, v___x_2473_);
v_i_2467_ = v___x_2474_;
v_b_2469_ = v___x_2472_;
goto _start;
}
else
{
lean_dec_ref(v_x2_2465_);
return v_b_2469_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object* v_x2_2476_, lean_object* v_as_2477_, lean_object* v_i_2478_, lean_object* v_stop_2479_, lean_object* v_b_2480_){
_start:
{
size_t v_i_boxed_2481_; size_t v_stop_boxed_2482_; lean_object* v_res_2483_; 
v_i_boxed_2481_ = lean_unbox_usize(v_i_2478_);
lean_dec(v_i_2478_);
v_stop_boxed_2482_ = lean_unbox_usize(v_stop_2479_);
lean_dec(v_stop_2479_);
v_res_2483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v_x2_2476_, v_as_2477_, v_i_boxed_2481_, v_stop_boxed_2482_, v_b_2480_);
lean_dec_ref(v_as_2477_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object* v_as_2484_, size_t v_i_2485_, size_t v_stop_2486_, lean_object* v_b_2487_){
_start:
{
lean_object* v___y_2489_; uint8_t v___x_2493_; 
v___x_2493_ = lean_usize_dec_eq(v_i_2485_, v_stop_2486_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v_declNames_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; uint8_t v___x_2498_; 
v___x_2494_ = lean_array_uget_borrowed(v_as_2484_, v_i_2485_);
v_declNames_2495_ = lean_ctor_get(v___x_2494_, 0);
v___x_2496_ = lean_unsigned_to_nat(0u);
v___x_2497_ = lean_array_get_size(v_declNames_2495_);
v___x_2498_ = lean_nat_dec_lt(v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
v___y_2489_ = v_b_2487_;
goto v___jp_2488_;
}
else
{
uint8_t v___x_2499_; 
v___x_2499_ = lean_nat_dec_le(v___x_2497_, v___x_2497_);
if (v___x_2499_ == 0)
{
if (v___x_2498_ == 0)
{
v___y_2489_ = v_b_2487_;
goto v___jp_2488_;
}
else
{
size_t v___x_2500_; size_t v___x_2501_; lean_object* v___x_2502_; 
v___x_2500_ = ((size_t)0ULL);
v___x_2501_ = lean_usize_of_nat(v___x_2497_);
lean_inc(v___x_2494_);
v___x_2502_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_2494_, v_declNames_2495_, v___x_2500_, v___x_2501_, v_b_2487_);
v___y_2489_ = v___x_2502_;
goto v___jp_2488_;
}
}
else
{
size_t v___x_2503_; size_t v___x_2504_; lean_object* v___x_2505_; 
v___x_2503_ = ((size_t)0ULL);
v___x_2504_ = lean_usize_of_nat(v___x_2497_);
lean_inc(v___x_2494_);
v___x_2505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_2494_, v_declNames_2495_, v___x_2503_, v___x_2504_, v_b_2487_);
v___y_2489_ = v___x_2505_;
goto v___jp_2488_;
}
}
}
else
{
return v_b_2487_;
}
v___jp_2488_:
{
size_t v___x_2490_; size_t v___x_2491_; 
v___x_2490_ = ((size_t)1ULL);
v___x_2491_ = lean_usize_add(v_i_2485_, v___x_2490_);
v_i_2485_ = v___x_2491_;
v_b_2487_ = v___y_2489_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object* v_as_2506_, lean_object* v_i_2507_, lean_object* v_stop_2508_, lean_object* v_b_2509_){
_start:
{
size_t v_i_boxed_2510_; size_t v_stop_boxed_2511_; lean_object* v_res_2512_; 
v_i_boxed_2510_ = lean_unbox_usize(v_i_2507_);
lean_dec(v_i_2507_);
v_stop_boxed_2511_ = lean_unbox_usize(v_stop_2508_);
lean_dec(v_stop_2508_);
v_res_2512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v_as_2506_, v_i_boxed_2510_, v_stop_boxed_2511_, v_b_2509_);
lean_dec_ref(v_as_2506_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(lean_object* v_a_2513_, lean_object* v_as_2514_, size_t v_i_2515_, size_t v_stop_2516_, lean_object* v_b_2517_){
_start:
{
lean_object* v___y_2519_; uint8_t v___x_2523_; 
v___x_2523_ = lean_usize_dec_eq(v_i_2515_, v_stop_2516_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2524_; lean_object* v_name_2525_; uint8_t v___x_2526_; 
v___x_2524_ = lean_array_uget_borrowed(v_as_2514_, v_i_2515_);
v_name_2525_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_name_2525_);
lean_inc_ref(v_a_2513_);
v___x_2526_ = l_Lean_isExtern(v_a_2513_, v_name_2525_);
if (v___x_2526_ == 0)
{
v___y_2519_ = v_b_2517_;
goto v___jp_2518_;
}
else
{
lean_object* v___x_2527_; 
lean_inc(v___x_2524_);
v___x_2527_ = lean_array_push(v_b_2517_, v___x_2524_);
v___y_2519_ = v___x_2527_;
goto v___jp_2518_;
}
}
else
{
lean_dec_ref(v_a_2513_);
return v_b_2517_;
}
v___jp_2518_:
{
size_t v___x_2520_; size_t v___x_2521_; 
v___x_2520_ = ((size_t)1ULL);
v___x_2521_ = lean_usize_add(v_i_2515_, v___x_2520_);
v_i_2515_ = v___x_2521_;
v_b_2517_ = v___y_2519_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19___boxed(lean_object* v_a_2528_, lean_object* v_as_2529_, lean_object* v_i_2530_, lean_object* v_stop_2531_, lean_object* v_b_2532_){
_start:
{
size_t v_i_boxed_2533_; size_t v_stop_boxed_2534_; lean_object* v_res_2535_; 
v_i_boxed_2533_ = lean_unbox_usize(v_i_2530_);
lean_dec(v_i_2530_);
v_stop_boxed_2534_ = lean_unbox_usize(v_stop_2531_);
lean_dec(v_stop_2531_);
v_res_2535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(v_a_2528_, v_as_2529_, v_i_boxed_2533_, v_stop_boxed_2534_, v_b_2532_);
lean_dec_ref(v_as_2529_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(lean_object* v_as_2536_, size_t v_sz_2537_, size_t v_i_2538_, lean_object* v_b_2539_){
_start:
{
uint8_t v___x_2541_; 
v___x_2541_ = lean_usize_dec_lt(v_i_2538_, v_sz_2537_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; 
v___x_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2542_, 0, v_b_2539_);
return v___x_2542_;
}
else
{
uint8_t v___x_2543_; lean_object* v_a_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
lean_dec_ref(v_b_2539_);
v___x_2543_ = 0;
v_a_2544_ = lean_array_uget_borrowed(v_as_2536_, v_i_2538_);
lean_inc(v_a_2544_);
v___x_2545_ = l_Lean_Message_toString(v_a_2544_, v___x_2543_);
v___x_2546_ = l_IO_eprintln___at___00main_spec__6(v___x_2545_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v___x_2547_; size_t v___x_2548_; size_t v___x_2549_; 
lean_dec_ref_known(v___x_2546_, 1);
v___x_2547_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_2548_ = ((size_t)1ULL);
v___x_2549_ = lean_usize_add(v_i_2538_, v___x_2548_);
v_i_2538_ = v___x_2549_;
v_b_2539_ = v___x_2547_;
goto _start;
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
v_a_2551_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2546_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2546_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27___boxed(lean_object* v_as_2559_, lean_object* v_sz_2560_, lean_object* v_i_2561_, lean_object* v_b_2562_, lean_object* v___y_2563_){
_start:
{
size_t v_sz_boxed_2564_; size_t v_i_boxed_2565_; lean_object* v_res_2566_; 
v_sz_boxed_2564_ = lean_unbox_usize(v_sz_2560_);
lean_dec(v_sz_2560_);
v_i_boxed_2565_ = lean_unbox_usize(v_i_2561_);
lean_dec(v_i_2561_);
v_res_2566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(v_as_2559_, v_sz_boxed_2564_, v_i_boxed_2565_, v_b_2562_);
lean_dec_ref(v_as_2559_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(lean_object* v_as_2567_, size_t v_sz_2568_, size_t v_i_2569_, lean_object* v_b_2570_){
_start:
{
uint8_t v___x_2572_; 
v___x_2572_ = lean_usize_dec_lt(v_i_2569_, v_sz_2568_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2573_; 
v___x_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2573_, 0, v_b_2570_);
return v___x_2573_;
}
else
{
uint8_t v___x_2574_; lean_object* v_a_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
lean_dec_ref(v_b_2570_);
v___x_2574_ = 0;
v_a_2575_ = lean_array_uget_borrowed(v_as_2567_, v_i_2569_);
lean_inc(v_a_2575_);
v___x_2576_ = l_Lean_Message_toString(v_a_2575_, v___x_2574_);
v___x_2577_ = l_IO_eprintln___at___00main_spec__6(v___x_2576_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v___x_2578_; size_t v___x_2579_; size_t v___x_2580_; lean_object* v___x_2581_; 
lean_dec_ref_known(v___x_2577_, 1);
v___x_2578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_2579_ = ((size_t)1ULL);
v___x_2580_ = lean_usize_add(v_i_2569_, v___x_2579_);
v___x_2581_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(v_as_2567_, v_sz_2568_, v___x_2580_, v___x_2578_);
return v___x_2581_;
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
v_a_2582_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2584_ = v___x_2577_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2577_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2585_ == 0)
{
v___x_2587_ = v___x_2584_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2582_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14___boxed(lean_object* v_as_2590_, lean_object* v_sz_2591_, lean_object* v_i_2592_, lean_object* v_b_2593_, lean_object* v___y_2594_){
_start:
{
size_t v_sz_boxed_2595_; size_t v_i_boxed_2596_; lean_object* v_res_2597_; 
v_sz_boxed_2595_ = lean_unbox_usize(v_sz_2591_);
lean_dec(v_sz_2591_);
v_i_boxed_2596_ = lean_unbox_usize(v_i_2592_);
lean_dec(v_i_2592_);
v_res_2597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(v_as_2590_, v_sz_boxed_2595_, v_i_boxed_2596_, v_b_2593_);
lean_dec_ref(v_as_2590_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object* v_init_2598_, lean_object* v_n_2599_, lean_object* v_b_2600_){
_start:
{
if (lean_obj_tag(v_n_2599_) == 0)
{
lean_object* v_cs_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; size_t v_sz_2605_; size_t v___x_2606_; lean_object* v___x_2607_; 
v_cs_2602_ = lean_ctor_get(v_n_2599_, 0);
v___x_2603_ = lean_box(0);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v_b_2600_);
v_sz_2605_ = lean_array_size(v_cs_2602_);
v___x_2606_ = ((size_t)0ULL);
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_init_2598_, v_cs_2602_, v_sz_2605_, v___x_2606_, v___x_2604_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2622_; 
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2610_ = v___x_2607_;
v_isShared_2611_ = v_isSharedCheck_2622_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2607_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2622_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v_fst_2612_; 
v_fst_2612_ = lean_ctor_get(v_a_2608_, 0);
if (lean_obj_tag(v_fst_2612_) == 0)
{
lean_object* v_snd_2613_; lean_object* v___x_2614_; lean_object* v___x_2616_; 
v_snd_2613_ = lean_ctor_get(v_a_2608_, 1);
lean_inc(v_snd_2613_);
lean_dec(v_a_2608_);
v___x_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2614_, 0, v_snd_2613_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 0, v___x_2614_);
v___x_2616_ = v___x_2610_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
else
{
lean_object* v_val_2618_; lean_object* v___x_2620_; 
lean_inc_ref(v_fst_2612_);
lean_dec(v_a_2608_);
v_val_2618_ = lean_ctor_get(v_fst_2612_, 0);
lean_inc(v_val_2618_);
lean_dec_ref_known(v_fst_2612_, 1);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 0, v_val_2618_);
v___x_2620_ = v___x_2610_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_val_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
v_a_2623_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2607_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2607_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
else
{
lean_object* v_vs_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; size_t v_sz_2634_; size_t v___x_2635_; lean_object* v___x_2636_; 
v_vs_2631_ = lean_ctor_get(v_n_2599_, 0);
v___x_2632_ = lean_box(0);
v___x_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2632_);
lean_ctor_set(v___x_2633_, 1, v_b_2600_);
v_sz_2634_ = lean_array_size(v_vs_2631_);
v___x_2635_ = ((size_t)0ULL);
v___x_2636_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(v_vs_2631_, v_sz_2634_, v___x_2635_, v___x_2633_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2651_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2651_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2651_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v_fst_2641_; 
v_fst_2641_ = lean_ctor_get(v_a_2637_, 0);
if (lean_obj_tag(v_fst_2641_) == 0)
{
lean_object* v_snd_2642_; lean_object* v___x_2643_; lean_object* v___x_2645_; 
v_snd_2642_ = lean_ctor_get(v_a_2637_, 1);
lean_inc(v_snd_2642_);
lean_dec(v_a_2637_);
v___x_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2643_, 0, v_snd_2642_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2643_);
v___x_2645_ = v___x_2639_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v___x_2643_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
else
{
lean_object* v_val_2647_; lean_object* v___x_2649_; 
lean_inc_ref(v_fst_2641_);
lean_dec(v_a_2637_);
v_val_2647_ = lean_ctor_get(v_fst_2641_, 0);
lean_inc(v_val_2647_);
lean_dec_ref_known(v_fst_2641_, 1);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v_val_2647_);
v___x_2649_ = v___x_2639_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_val_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
v_a_2652_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2636_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2636_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object* v_init_2660_, lean_object* v_as_2661_, size_t v_sz_2662_, size_t v_i_2663_, lean_object* v_b_2664_){
_start:
{
uint8_t v___x_2666_; 
v___x_2666_ = lean_usize_dec_lt(v_i_2663_, v_sz_2662_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; 
v___x_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2667_, 0, v_b_2664_);
return v___x_2667_;
}
else
{
lean_object* v_snd_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2702_; 
v_snd_2668_ = lean_ctor_get(v_b_2664_, 1);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_b_2664_);
if (v_isSharedCheck_2702_ == 0)
{
lean_object* v_unused_2703_; 
v_unused_2703_ = lean_ctor_get(v_b_2664_, 0);
lean_dec(v_unused_2703_);
v___x_2670_ = v_b_2664_;
v_isShared_2671_ = v_isSharedCheck_2702_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_snd_2668_);
lean_dec(v_b_2664_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2702_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; lean_object* v_a_2673_; lean_object* v___x_2674_; 
v___x_2672_ = lean_box(0);
v_a_2673_ = lean_array_uget_borrowed(v_as_2661_, v_i_2663_);
lean_inc(v_snd_2668_);
v___x_2674_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_2660_, v_a_2673_, v_snd_2668_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2693_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2677_ = v___x_2674_;
v_isShared_2678_ = v_isSharedCheck_2693_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2674_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2693_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
if (lean_obj_tag(v_a_2675_) == 0)
{
lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2679_, 0, v_a_2675_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2679_);
v___x_2681_ = v___x_2670_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v___x_2679_);
lean_ctor_set(v_reuseFailAlloc_2685_, 1, v_snd_2668_);
v___x_2681_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
lean_object* v___x_2683_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2681_);
v___x_2683_ = v___x_2677_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v___x_2681_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; 
lean_del_object(v___x_2677_);
lean_dec(v_snd_2668_);
v_a_2686_ = lean_ctor_get(v_a_2675_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v_a_2675_, 1);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 1, v_a_2686_);
lean_ctor_set(v___x_2670_, 0, v___x_2672_);
v___x_2688_ = v___x_2670_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2672_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v_a_2686_);
v___x_2688_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
size_t v___x_2689_; size_t v___x_2690_; 
v___x_2689_ = ((size_t)1ULL);
v___x_2690_ = lean_usize_add(v_i_2663_, v___x_2689_);
v_i_2663_ = v___x_2690_;
v_b_2664_ = v___x_2688_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
lean_del_object(v___x_2670_);
lean_dec(v_snd_2668_);
v_a_2694_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2674_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2674_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object* v_init_2704_, lean_object* v_as_2705_, lean_object* v_sz_2706_, lean_object* v_i_2707_, lean_object* v_b_2708_, lean_object* v___y_2709_){
_start:
{
size_t v_sz_boxed_2710_; size_t v_i_boxed_2711_; lean_object* v_res_2712_; 
v_sz_boxed_2710_ = lean_unbox_usize(v_sz_2706_);
lean_dec(v_sz_2706_);
v_i_boxed_2711_ = lean_unbox_usize(v_i_2707_);
lean_dec(v_i_2707_);
v_res_2712_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_init_2704_, v_as_2705_, v_sz_boxed_2710_, v_i_boxed_2711_, v_b_2708_);
lean_dec_ref(v_as_2705_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object* v_init_2713_, lean_object* v_n_2714_, lean_object* v_b_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_2713_, v_n_2714_, v_b_2715_);
lean_dec_ref(v_n_2714_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(lean_object* v_as_2718_, size_t v_sz_2719_, size_t v_i_2720_, lean_object* v_b_2721_){
_start:
{
uint8_t v___x_2723_; 
v___x_2723_ = lean_usize_dec_lt(v_i_2720_, v_sz_2719_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; 
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v_b_2721_);
return v___x_2724_;
}
else
{
uint8_t v___x_2725_; lean_object* v_a_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
lean_dec_ref(v_b_2721_);
v___x_2725_ = 0;
v_a_2726_ = lean_array_uget_borrowed(v_as_2718_, v_i_2720_);
lean_inc(v_a_2726_);
v___x_2727_ = l_Lean_Message_toString(v_a_2726_, v___x_2725_);
v___x_2728_ = l_IO_eprintln___at___00main_spec__6(v___x_2727_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v___x_2729_; size_t v___x_2730_; size_t v___x_2731_; 
lean_dec_ref_known(v___x_2728_, 1);
v___x_2729_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_2730_ = ((size_t)1ULL);
v___x_2731_ = lean_usize_add(v_i_2720_, v___x_2730_);
v_i_2720_ = v___x_2731_;
v_b_2721_ = v___x_2729_;
goto _start;
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
v_a_2733_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v___x_2728_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2728_);
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
v_reuseFailAlloc_2739_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16___boxed(lean_object* v_as_2741_, lean_object* v_sz_2742_, lean_object* v_i_2743_, lean_object* v_b_2744_, lean_object* v___y_2745_){
_start:
{
size_t v_sz_boxed_2746_; size_t v_i_boxed_2747_; lean_object* v_res_2748_; 
v_sz_boxed_2746_ = lean_unbox_usize(v_sz_2742_);
lean_dec(v_sz_2742_);
v_i_boxed_2747_ = lean_unbox_usize(v_i_2743_);
lean_dec(v_i_2743_);
v_res_2748_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(v_as_2741_, v_sz_boxed_2746_, v_i_boxed_2747_, v_b_2744_);
lean_dec_ref(v_as_2741_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object* v_as_2749_, size_t v_sz_2750_, size_t v_i_2751_, lean_object* v_b_2752_){
_start:
{
uint8_t v___x_2754_; 
v___x_2754_ = lean_usize_dec_lt(v_i_2751_, v_sz_2750_);
if (v___x_2754_ == 0)
{
lean_object* v___x_2755_; 
v___x_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2755_, 0, v_b_2752_);
return v___x_2755_;
}
else
{
uint8_t v___x_2756_; lean_object* v_a_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
lean_dec_ref(v_b_2752_);
v___x_2756_ = 0;
v_a_2757_ = lean_array_uget_borrowed(v_as_2749_, v_i_2751_);
lean_inc(v_a_2757_);
v___x_2758_ = l_Lean_Message_toString(v_a_2757_, v___x_2756_);
v___x_2759_ = l_IO_eprintln___at___00main_spec__6(v___x_2758_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v___x_2760_; size_t v___x_2761_; size_t v___x_2762_; lean_object* v___x_2763_; 
lean_dec_ref_known(v___x_2759_, 1);
v___x_2760_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_2761_ = ((size_t)1ULL);
v___x_2762_ = lean_usize_add(v_i_2751_, v___x_2761_);
v___x_2763_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(v_as_2749_, v_sz_2750_, v___x_2762_, v___x_2760_);
return v___x_2763_;
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
v_a_2764_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2759_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2759_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object* v_as_2772_, lean_object* v_sz_2773_, lean_object* v_i_2774_, lean_object* v_b_2775_, lean_object* v___y_2776_){
_start:
{
size_t v_sz_boxed_2777_; size_t v_i_boxed_2778_; lean_object* v_res_2779_; 
v_sz_boxed_2777_ = lean_unbox_usize(v_sz_2773_);
lean_dec(v_sz_2773_);
v_i_boxed_2778_ = lean_unbox_usize(v_i_2774_);
lean_dec(v_i_2774_);
v_res_2779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_as_2772_, v_sz_boxed_2777_, v_i_boxed_2778_, v_b_2775_);
lean_dec_ref(v_as_2772_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object* v_t_2780_, lean_object* v_init_2781_){
_start:
{
lean_object* v_root_2783_; lean_object* v_tail_2784_; lean_object* v___x_2785_; 
v_root_2783_ = lean_ctor_get(v_t_2780_, 0);
v_tail_2784_ = lean_ctor_get(v_t_2780_, 1);
v___x_2785_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_2781_, v_root_2783_, v_init_2781_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2822_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2788_ = v___x_2785_;
v_isShared_2789_ = v_isSharedCheck_2822_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2785_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2822_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
if (lean_obj_tag(v_a_2786_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2792_; 
v_a_2790_ = lean_ctor_get(v_a_2786_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v_a_2786_, 1);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 0, v_a_2790_);
v___x_2792_ = v___x_2788_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; size_t v_sz_2797_; size_t v___x_2798_; lean_object* v___x_2799_; 
lean_del_object(v___x_2788_);
v_a_2794_ = lean_ctor_get(v_a_2786_, 0);
lean_inc(v_a_2794_);
lean_dec_ref_known(v_a_2786_, 1);
v___x_2795_ = lean_box(0);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
lean_ctor_set(v___x_2796_, 1, v_a_2794_);
v_sz_2797_ = lean_array_size(v_tail_2784_);
v___x_2798_ = ((size_t)0ULL);
v___x_2799_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_tail_2784_, v_sz_2797_, v___x_2798_, v___x_2796_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2813_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2802_ = v___x_2799_;
v_isShared_2803_ = v_isSharedCheck_2813_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v___x_2799_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2813_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v_fst_2804_; 
v_fst_2804_ = lean_ctor_get(v_a_2800_, 0);
if (lean_obj_tag(v_fst_2804_) == 0)
{
lean_object* v_snd_2805_; lean_object* v___x_2807_; 
v_snd_2805_ = lean_ctor_get(v_a_2800_, 1);
lean_inc(v_snd_2805_);
lean_dec(v_a_2800_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 0, v_snd_2805_);
v___x_2807_ = v___x_2802_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_snd_2805_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
else
{
lean_object* v_val_2809_; lean_object* v___x_2811_; 
lean_inc_ref(v_fst_2804_);
lean_dec(v_a_2800_);
v_val_2809_ = lean_ctor_get(v_fst_2804_, 0);
lean_inc(v_val_2809_);
lean_dec_ref_known(v_fst_2804_, 1);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 0, v_val_2809_);
v___x_2811_ = v___x_2802_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_val_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
v_a_2814_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2799_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2799_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
}
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
v_a_2823_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2785_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2785_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object* v_t_2831_, lean_object* v_init_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_t_2831_, v_init_2832_);
lean_dec_ref(v_t_2831_);
return v_res_2834_;
}
}
static lean_object* _init_l_main___closed__1(void){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_2836_;
}
}
static lean_object* _init_l_main___closed__2(void){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2837_ = l_Lean_instInhabitedClassState_default;
v___x_2838_ = lean_box(0);
v___x_2839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
lean_ctor_set(v___x_2839_, 1, v___x_2837_);
return v___x_2839_;
}
}
static lean_object* _init_l_main___closed__3(void){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2840_ = l_Lean_Meta_Match_Extension_instInhabitedState;
v___x_2841_ = lean_box(0);
v___x_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
lean_ctor_set(v___x_2842_, 1, v___x_2840_);
return v___x_2842_;
}
}
static lean_object* _init_l_main___closed__4(void){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2843_;
}
}
static lean_object* _init_l_main___closed__5(void){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2844_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2845_ = lean_box(0);
v___x_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
lean_ctor_set(v___x_2846_, 1, v___x_2844_);
return v___x_2846_;
}
}
static lean_object* _init_l_main___closed__6(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_obj_once(&l_main___closed__5, &l_main___closed__5_once, _init_l_main___closed__5);
v___x_2848_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2847_);
return v___x_2848_;
}
}
static lean_object* _init_l_main___closed__7(void){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Array_instInhabited___redArg();
return v___x_2849_;
}
}
static lean_object* _init_l_main___closed__13(void){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = l_Lean_Options_empty;
v___x_2859_ = l_Lean_Core_getMaxHeartbeats(v___x_2858_);
return v___x_2859_;
}
}
static lean_object* _init_l_main___closed__18(void){
_start:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2864_ = ((lean_object*)(l_main___closed__17));
v___x_2865_ = lean_unsigned_to_nat(27u);
v___x_2866_ = lean_unsigned_to_nat(149u);
v___x_2867_ = ((lean_object*)(l_main___closed__16));
v___x_2868_ = ((lean_object*)(l_main___closed__15));
v___x_2869_ = l_mkPanicMessageWithDecl(v___x_2868_, v___x_2867_, v___x_2866_, v___x_2865_, v___x_2864_);
return v___x_2869_;
}
}
static lean_object* _init_l_main___closed__20(void){
_start:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2871_ = ((lean_object*)(l_main___closed__17));
v___x_2872_ = lean_unsigned_to_nat(51u);
v___x_2873_ = lean_unsigned_to_nat(122u);
v___x_2874_ = ((lean_object*)(l_main___closed__16));
v___x_2875_ = ((lean_object*)(l_main___closed__15));
v___x_2876_ = l_mkPanicMessageWithDecl(v___x_2875_, v___x_2874_, v___x_2873_, v___x_2872_, v___x_2871_);
return v___x_2876_;
}
}
static lean_object* _init_l_main___closed__21(void){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2877_ = lean_unsigned_to_nat(1u);
v___x_2878_ = l_Lean_firstFrontendMacroScope;
v___x_2879_ = lean_nat_add(v___x_2878_, v___x_2877_);
return v___x_2879_;
}
}
static lean_object* _init_l_main___closed__25(void){
_start:
{
lean_object* v___x_2886_; uint64_t v___x_2887_; lean_object* v___x_2888_; 
v___x_2886_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
v___x_2887_ = 0ULL;
v___x_2888_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set_uint64(v___x_2888_, sizeof(void*)*1, v___x_2887_);
return v___x_2888_;
}
}
static lean_object* _init_l_main___closed__26(void){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2889_;
}
}
static lean_object* _init_l_main___closed__27(void){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
return v___x_2891_;
}
}
static lean_object* _init_l_main___closed__28(void){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = lean_obj_once(&l_main___closed__27, &l_main___closed__27_once, _init_l_main___closed__27);
v___x_2893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
return v___x_2893_;
}
}
static lean_object* _init_l_main___closed__29(void){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2894_ = l_Lean_NameSet_empty;
v___x_2895_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
v___x_2896_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
lean_ctor_set(v___x_2896_, 2, v___x_2894_);
return v___x_2896_;
}
}
static lean_object* _init_l_main___closed__30(void){
_start:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; uint8_t v___x_2899_; lean_object* v___x_2900_; 
v___x_2897_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
v___x_2898_ = lean_obj_once(&l_main___closed__27, &l_main___closed__27_once, _init_l_main___closed__27);
v___x_2899_ = 1;
v___x_2900_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2900_, 0, v___x_2898_);
lean_ctor_set(v___x_2900_, 1, v___x_2898_);
lean_ctor_set(v___x_2900_, 2, v___x_2897_);
lean_ctor_set_uint8(v___x_2900_, sizeof(void*)*3, v___x_2899_);
return v___x_2900_;
}
}
static uint8_t _init_l_main___closed__35(void){
_start:
{
uint8_t v___x_2907_; uint8_t v___x_2908_; uint8_t v___x_2909_; 
v___x_2907_ = 2;
v___x_2908_ = 0;
v___x_2909_ = l_Lean_instOrdOLeanLevel_ord(v___x_2908_, v___x_2907_);
return v___x_2909_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = 1;
v___x_2911_ = lean_box_uint32(v___x_2910_);
return v___x_2911_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_2912_; lean_object* v___x_2913_; 
v___x_2912_ = 0;
v___x_2913_ = lean_box_uint32(v___x_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_2914_){
_start:
{
if (lean_obj_tag(v_args_2914_) == 1)
{
lean_object* v_tail_2939_; 
v_tail_2939_ = lean_ctor_get(v_args_2914_, 1);
lean_inc(v_tail_2939_);
if (lean_obj_tag(v_tail_2939_) == 1)
{
lean_object* v_tail_2940_; 
v_tail_2940_ = lean_ctor_get(v_tail_2939_, 1);
lean_inc(v_tail_2940_);
if (lean_obj_tag(v_tail_2940_) == 1)
{
lean_object* v_head_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_3589_; 
v_head_2941_ = lean_ctor_get(v_args_2914_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_args_2914_);
if (v_isSharedCheck_3589_ == 0)
{
lean_object* v_unused_3590_; 
v_unused_3590_ = lean_ctor_get(v_args_2914_, 1);
lean_dec(v_unused_3590_);
v___x_2943_ = v_args_2914_;
v_isShared_2944_ = v_isSharedCheck_3589_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_head_2941_);
lean_dec(v_args_2914_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_3589_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v_head_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_3587_; 
v_head_2945_ = lean_ctor_get(v_tail_2939_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_tail_2939_);
if (v_isSharedCheck_3587_ == 0)
{
lean_object* v_unused_3588_; 
v_unused_3588_ = lean_ctor_get(v_tail_2939_, 1);
lean_dec(v_unused_3588_);
v___x_2947_ = v_tail_2939_;
v_isShared_2948_ = v_isSharedCheck_3587_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_head_2945_);
lean_dec(v_tail_2939_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_3587_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v_head_2949_; lean_object* v_tail_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_3586_; 
v_head_2949_ = lean_ctor_get(v_tail_2940_, 0);
v_tail_2950_ = lean_ctor_get(v_tail_2940_, 1);
v_isSharedCheck_3586_ = !lean_is_exclusive(v_tail_2940_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_2952_ = v_tail_2940_;
v_isShared_2953_ = v_isSharedCheck_3586_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_tail_2950_);
lean_inc(v_head_2949_);
lean_dec(v_tail_2940_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_3586_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2954_ = lean_obj_once(&l_main___closed__1, &l_main___closed__1_once, _init_l_main___closed__1);
v___x_2955_ = lean_box(0);
v___x_2956_ = lean_obj_once(&l_main___closed__2, &l_main___closed__2_once, _init_l_main___closed__2);
v___x_2957_ = lean_obj_once(&l_main___closed__3, &l_main___closed__3_once, _init_l_main___closed__3);
v___x_2958_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2959_ = lean_obj_once(&l_main___closed__6, &l_main___closed__6_once, _init_l_main___closed__6);
v___x_2960_ = lean_obj_once(&l_main___closed__7, &l_main___closed__7_once, _init_l_main___closed__7);
v___x_2961_ = lean_box(1);
v___x_2962_ = ((lean_object*)(l_main___closed__8));
v___x_2963_ = l_Lean_ModuleSetup_load(v_head_2941_);
lean_dec(v_head_2941_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v_name_2965_; lean_object* v_importArts_2966_; lean_object* v_options_2967_; uint8_t v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2972_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2963_, 1);
v_name_2965_ = lean_ctor_get(v_a_2964_, 0);
lean_inc(v_name_2965_);
v_importArts_2966_ = lean_ctor_get(v_a_2964_, 3);
lean_inc(v_importArts_2966_);
v_options_2967_ = lean_ctor_get(v_a_2964_, 6);
lean_inc(v_options_2967_);
lean_dec(v_a_2964_);
v___x_2968_ = 0;
v___x_2969_ = l_Lean_LeanOptions_toOptions(v_options_2967_);
v___x_2970_ = lean_box(v___x_2968_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set_tag(v___x_2952_, 0);
lean_ctor_set(v___x_2952_, 1, v___x_2969_);
lean_ctor_set(v___x_2952_, 0, v___x_2970_);
v___x_2972_ = v___x_2952_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_2970_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v___x_2969_);
v___x_2972_ = v_reuseFailAlloc_3577_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
lean_object* v___x_2973_; 
v___x_2973_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_tail_2950_, v___x_2972_);
lean_dec(v_tail_2950_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v_fst_2975_; lean_object* v_snd_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3568_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2973_, 1);
v_fst_2975_ = lean_ctor_get(v_a_2974_, 0);
v_snd_2976_ = lean_ctor_get(v_a_2974_, 1);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_a_2974_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_2978_ = v_a_2974_;
v_isShared_2979_ = v_isSharedCheck_3568_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_snd_2976_);
lean_inc(v_fst_2975_);
lean_dec(v_a_2974_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3568_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; uint8_t v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; uint8_t v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3139_; lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v___y_3142_; uint8_t v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v_nextMacroScope_3151_; lean_object* v_ngen_3152_; lean_object* v_auxDeclNGen_3153_; lean_object* v_traceState_3154_; lean_object* v_messages_3155_; lean_object* v_infoState_3156_; lean_object* v_snapshotTasks_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3184_; uint8_t v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; uint8_t v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3261_; lean_object* v___y_3262_; lean_object* v___y_3263_; uint8_t v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___y_3274_; uint8_t v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; uint8_t v___y_3280_; lean_object* v___x_3300_; 
v___x_2980_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_2981_ = 1;
v___x_2982_ = l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(v_snd_2976_, v___x_2980_, v___x_2981_);
v___x_2983_ = l_Lean_maxHeartbeats;
v___x_2984_ = lean_unsigned_to_nat(0u);
v___x_2985_ = l_Lean_Option_set___at___00main_spec__3(v___x_2982_, v___x_2983_, v___x_2984_);
v___x_3300_ = lean_init_search_path();
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; uint8_t v___x_3306_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; uint8_t v___x_3463_; uint8_t v___y_3465_; uint8_t v___x_3559_; 
lean_dec_ref_known(v___x_3300_, 1);
v___x_3301_ = ((lean_object*)(l_main___closed__19));
lean_inc(v_name_2965_);
v___x_3302_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3302_, 0, v_name_2965_);
lean_ctor_set_uint8(v___x_3302_, sizeof(void*)*1, v___x_2981_);
lean_ctor_set_uint8(v___x_3302_, sizeof(void*)*1 + 1, v___x_2981_);
lean_ctor_set_uint8(v___x_3302_, sizeof(void*)*1 + 2, v___x_2968_);
v___x_3303_ = lean_unsigned_to_nat(1u);
v___x_3304_ = lean_mk_empty_array_with_capacity(v___x_3303_);
v___x_3305_ = lean_array_push(v___x_3304_, v___x_3302_);
v___x_3306_ = 0;
v___x_3463_ = 2;
v___x_3559_ = lean_uint8_once(&l_main___closed__35, &l_main___closed__35_once, _init_l_main___closed__35);
if (v___x_3559_ == 0)
{
v___y_3465_ = v___x_2981_;
goto v___jp_3464_;
}
else
{
v___y_3465_ = v___x_2968_;
goto v___jp_3464_;
}
v___jp_3307_:
{
lean_object* v___x_3316_; 
if (v_isShared_2944_ == 0)
{
lean_ctor_set_tag(v___x_2943_, 0);
lean_ctor_set(v___x_2943_, 1, v___y_3314_);
lean_ctor_set(v___x_2943_, 0, v___y_3310_);
v___x_3316_ = v___x_2943_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___y_3310_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v___y_3314_);
v___x_3316_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v_moduleData_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v___x_3317_ = lean_box(0);
lean_inc_ref(v___y_3309_);
v___x_3318_ = l_Lean_EnvExtension_setState___redArg(v___y_3309_, v___y_3312_, v___x_3316_, v___x_3317_);
v___x_3319_ = l_Lean_Environment_header(v___x_3318_);
v_moduleData_3320_ = lean_ctor_get(v___x_3319_, 6);
lean_inc_ref(v_moduleData_3320_);
lean_dec_ref(v___x_3319_);
v___x_3321_ = lean_array_get_size(v_moduleData_3320_);
v___x_3322_ = lean_nat_dec_lt(v___y_3311_, v___x_3321_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_dec_ref(v_moduleData_3320_);
lean_dec_ref(v___x_3318_);
lean_dec(v___y_3313_);
lean_dec(v___y_3311_);
lean_dec(v___y_3308_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
v___x_3323_ = lean_obj_once(&l_main___closed__20, &l_main___closed__20_once, _init_l_main___closed__20);
v___x_3324_ = l_panic___at___00main_spec__5(v___x_3323_);
return v___x_3324_;
}
else
{
lean_object* v_base_3325_; lean_object* v_private_3326_; lean_object* v_header_3327_; lean_object* v_serverBaseExts_3328_; lean_object* v_checked_3329_; lean_object* v_asyncConstsMap_3330_; lean_object* v_asyncCtx_x3f_3331_; lean_object* v_importRealizationCtx_x3f_3332_; lean_object* v_localRealizationCtxMap_3333_; lean_object* v_allRealizations_3334_; uint8_t v_isExporting_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3410_; 
v_base_3325_ = lean_ctor_get(v___x_3318_, 0);
lean_inc_ref(v_base_3325_);
v_private_3326_ = lean_ctor_get(v_base_3325_, 0);
lean_inc(v_private_3326_);
v_header_3327_ = lean_ctor_get(v_private_3326_, 5);
lean_inc_ref(v_header_3327_);
v_serverBaseExts_3328_ = lean_ctor_get(v___x_3318_, 1);
v_checked_3329_ = lean_ctor_get(v___x_3318_, 2);
v_asyncConstsMap_3330_ = lean_ctor_get(v___x_3318_, 3);
v_asyncCtx_x3f_3331_ = lean_ctor_get(v___x_3318_, 4);
v_importRealizationCtx_x3f_3332_ = lean_ctor_get(v___x_3318_, 5);
v_localRealizationCtxMap_3333_ = lean_ctor_get(v___x_3318_, 6);
v_allRealizations_3334_ = lean_ctor_get(v___x_3318_, 7);
v_isExporting_3335_ = lean_ctor_get_uint8(v___x_3318_, sizeof(void*)*8);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v___x_3318_, 0);
lean_dec(v_unused_3411_);
v___x_3337_ = v___x_3318_;
v_isShared_3338_ = v_isSharedCheck_3410_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_allRealizations_3334_);
lean_inc(v_localRealizationCtxMap_3333_);
lean_inc(v_importRealizationCtx_x3f_3332_);
lean_inc(v_asyncCtx_x3f_3331_);
lean_inc(v_asyncConstsMap_3330_);
lean_inc(v_checked_3329_);
lean_inc(v_serverBaseExts_3328_);
lean_dec(v___x_3318_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3410_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v_public_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3408_; 
v_public_3339_ = lean_ctor_get(v_base_3325_, 1);
v_isSharedCheck_3408_ = !lean_is_exclusive(v_base_3325_);
if (v_isSharedCheck_3408_ == 0)
{
lean_object* v_unused_3409_; 
v_unused_3409_ = lean_ctor_get(v_base_3325_, 0);
lean_dec(v_unused_3409_);
v___x_3341_ = v_base_3325_;
v_isShared_3342_ = v_isSharedCheck_3408_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_public_3339_);
lean_dec(v_base_3325_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3408_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v_constants_3343_; uint8_t v_quotInit_3344_; lean_object* v_diagnostics_3345_; lean_object* v_const2ModIdx_3346_; lean_object* v_extensions_3347_; lean_object* v_irBaseExts_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3406_; 
v_constants_3343_ = lean_ctor_get(v_private_3326_, 0);
v_quotInit_3344_ = lean_ctor_get_uint8(v_private_3326_, sizeof(void*)*6);
v_diagnostics_3345_ = lean_ctor_get(v_private_3326_, 1);
v_const2ModIdx_3346_ = lean_ctor_get(v_private_3326_, 2);
v_extensions_3347_ = lean_ctor_get(v_private_3326_, 3);
v_irBaseExts_3348_ = lean_ctor_get(v_private_3326_, 4);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_private_3326_);
if (v_isSharedCheck_3406_ == 0)
{
lean_object* v_unused_3407_; 
v_unused_3407_ = lean_ctor_get(v_private_3326_, 5);
lean_dec(v_unused_3407_);
v___x_3350_ = v_private_3326_;
v_isShared_3351_ = v_isSharedCheck_3406_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_irBaseExts_3348_);
lean_inc(v_extensions_3347_);
lean_inc(v_const2ModIdx_3346_);
lean_inc(v_diagnostics_3345_);
lean_inc(v_constants_3343_);
lean_dec(v_private_3326_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3406_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
uint32_t v_trustLevel_3352_; lean_object* v_mainModule_3353_; uint8_t v_isModule_3354_; lean_object* v_regions_3355_; lean_object* v_modules_3356_; lean_object* v_moduleName2Idx_3357_; lean_object* v_importAllModules_3358_; lean_object* v_moduleData_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3404_; 
v_trustLevel_3352_ = lean_ctor_get_uint32(v_header_3327_, sizeof(void*)*7);
v_mainModule_3353_ = lean_ctor_get(v_header_3327_, 0);
v_isModule_3354_ = lean_ctor_get_uint8(v_header_3327_, sizeof(void*)*7 + 4);
v_regions_3355_ = lean_ctor_get(v_header_3327_, 2);
v_modules_3356_ = lean_ctor_get(v_header_3327_, 3);
v_moduleName2Idx_3357_ = lean_ctor_get(v_header_3327_, 4);
v_importAllModules_3358_ = lean_ctor_get(v_header_3327_, 5);
v_moduleData_3359_ = lean_ctor_get(v_header_3327_, 6);
v_isSharedCheck_3404_ = !lean_is_exclusive(v_header_3327_);
if (v_isSharedCheck_3404_ == 0)
{
lean_object* v_unused_3405_; 
v_unused_3405_ = lean_ctor_get(v_header_3327_, 1);
lean_dec(v_unused_3405_);
v___x_3361_ = v_header_3327_;
v_isShared_3362_ = v_isSharedCheck_3404_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_moduleData_3359_);
lean_inc(v_importAllModules_3358_);
lean_inc(v_moduleName2Idx_3357_);
lean_inc(v_modules_3356_);
lean_inc(v_regions_3355_);
lean_inc(v_mainModule_3353_);
lean_dec(v_header_3327_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3404_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3363_; lean_object* v_imports_3364_; lean_object* v___x_3366_; 
v___x_3363_ = lean_array_fget(v_moduleData_3320_, v___y_3311_);
lean_dec_ref(v_moduleData_3320_);
v_imports_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc_ref(v_imports_3364_);
lean_dec(v___x_3363_);
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 1, v_imports_3364_);
v___x_3366_ = v___x_3361_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(0, 7, 5);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_mainModule_3353_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v_imports_3364_);
lean_ctor_set(v_reuseFailAlloc_3403_, 2, v_regions_3355_);
lean_ctor_set(v_reuseFailAlloc_3403_, 3, v_modules_3356_);
lean_ctor_set(v_reuseFailAlloc_3403_, 4, v_moduleName2Idx_3357_);
lean_ctor_set(v_reuseFailAlloc_3403_, 5, v_importAllModules_3358_);
lean_ctor_set(v_reuseFailAlloc_3403_, 6, v_moduleData_3359_);
lean_ctor_set_uint32(v_reuseFailAlloc_3403_, sizeof(void*)*7, v_trustLevel_3352_);
lean_ctor_set_uint8(v_reuseFailAlloc_3403_, sizeof(void*)*7 + 4, v_isModule_3354_);
v___x_3366_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3368_; 
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 5, v___x_3366_);
v___x_3368_ = v___x_3350_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_constants_3343_);
lean_ctor_set(v_reuseFailAlloc_3402_, 1, v_diagnostics_3345_);
lean_ctor_set(v_reuseFailAlloc_3402_, 2, v_const2ModIdx_3346_);
lean_ctor_set(v_reuseFailAlloc_3402_, 3, v_extensions_3347_);
lean_ctor_set(v_reuseFailAlloc_3402_, 4, v_irBaseExts_3348_);
lean_ctor_set(v_reuseFailAlloc_3402_, 5, v___x_3366_);
lean_ctor_set_uint8(v_reuseFailAlloc_3402_, sizeof(void*)*6, v_quotInit_3344_);
v___x_3368_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3370_; 
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 0, v___x_3368_);
v___x_3370_ = v___x_3341_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v___x_3368_);
lean_ctor_set(v_reuseFailAlloc_3401_, 1, v_public_3339_);
v___x_3370_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
lean_object* v___x_3372_; 
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v___x_3370_);
v___x_3372_ = v___x_3337_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3370_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v_serverBaseExts_3328_);
lean_ctor_set(v_reuseFailAlloc_3400_, 2, v_checked_3329_);
lean_ctor_set(v_reuseFailAlloc_3400_, 3, v_asyncConstsMap_3330_);
lean_ctor_set(v_reuseFailAlloc_3400_, 4, v_asyncCtx_x3f_3331_);
lean_ctor_set(v_reuseFailAlloc_3400_, 5, v_importRealizationCtx_x3f_3332_);
lean_ctor_set(v_reuseFailAlloc_3400_, 6, v_localRealizationCtxMap_3333_);
lean_ctor_set(v_reuseFailAlloc_3400_, 7, v_allRealizations_3334_);
lean_ctor_set_uint8(v_reuseFailAlloc_3400_, sizeof(void*)*8, v_isExporting_3335_);
v___x_3372_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; uint8_t v___x_3396_; lean_object* v___x_3397_; lean_object* v_env_3398_; uint8_t v___x_3399_; 
v___x_3373_ = l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
v___x_3374_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2962_, v___x_3373_, v___x_3372_, v___y_3311_, v___x_3306_);
lean_dec(v___y_3311_);
v___x_3375_ = l_Lean_instInhabitedFileMap_default;
v___x_3376_ = lean_unsigned_to_nat(1000u);
v___x_3377_ = l_Lean_Core_getMaxHeartbeats(v___x_2985_);
v___x_3378_ = l_Lean_firstFrontendMacroScope;
v___x_3379_ = lean_box(0);
v___x_3380_ = lean_box(0);
v___x_3381_ = lean_obj_once(&l_main___closed__21, &l_main___closed__21_once, _init_l_main___closed__21);
v___x_3382_ = ((lean_object*)(l_main___closed__24));
lean_inc_n(v___y_3313_, 3);
v___x_3383_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3383_, 0, v___y_3313_);
lean_ctor_set(v___x_3383_, 1, v___x_3303_);
lean_ctor_set(v___x_3383_, 2, v___x_2955_);
v___x_3384_ = lean_obj_once(&l_main___closed__25, &l_main___closed__25_once, _init_l_main___closed__25);
v___x_3385_ = lean_obj_once(&l_main___closed__28, &l_main___closed__28_once, _init_l_main___closed__28);
v___x_3386_ = lean_obj_once(&l_main___closed__29, &l_main___closed__29_once, _init_l_main___closed__29);
v___x_3387_ = lean_obj_once(&l_main___closed__30, &l_main___closed__30_once, _init_l_main___closed__30);
v___x_3388_ = ((lean_object*)(l_main___closed__31));
lean_inc_ref(v___x_3383_);
v___x_3389_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3372_);
lean_ctor_set(v___x_3389_, 1, v___x_3381_);
lean_ctor_set(v___x_3389_, 2, v___x_3382_);
lean_ctor_set(v___x_3389_, 3, v___x_3383_);
lean_ctor_set(v___x_3389_, 4, v___x_3384_);
lean_ctor_set(v___x_3389_, 5, v___x_3385_);
lean_ctor_set(v___x_3389_, 6, v___x_3386_);
lean_ctor_set(v___x_3389_, 7, v___x_3387_);
lean_ctor_set(v___x_3389_, 8, v___x_3388_);
v___x_3390_ = lean_st_mk_ref(v___x_3389_);
v___x_3391_ = l_Lean_inheritedTraceOptions;
v___x_3392_ = lean_st_ref_get(v___x_3391_);
lean_inc_ref(v___x_2985_);
lean_inc(v_head_2945_);
v___x_3393_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3393_, 0, v_head_2945_);
lean_ctor_set(v___x_3393_, 1, v___x_3375_);
lean_ctor_set(v___x_3393_, 2, v___x_2985_);
lean_ctor_set(v___x_3393_, 3, v___x_3376_);
lean_ctor_set(v___x_3393_, 4, v___y_3313_);
lean_ctor_set(v___x_3393_, 5, v___x_2955_);
lean_ctor_set(v___x_3393_, 6, v___x_2984_);
lean_ctor_set(v___x_3393_, 7, v___x_3377_);
lean_ctor_set(v___x_3393_, 8, v___y_3313_);
lean_ctor_set(v___x_3393_, 9, v___x_3378_);
lean_ctor_set(v___x_3393_, 10, v___x_3379_);
lean_ctor_set(v___x_3393_, 11, v___x_3392_);
v___x_3394_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3394_, 0, v___x_3393_);
lean_ctor_set(v___x_3394_, 1, v___x_2984_);
lean_ctor_set(v___x_3394_, 2, v___x_3380_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*3, v___x_2968_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*3 + 1, v___x_2968_);
v___x_3395_ = l_Lean_diagnostics;
v___x_3396_ = l_Lean_Option_get___at___00main_spec__8(v___x_2985_, v___x_3395_);
v___x_3397_ = lean_st_ref_get(v___x_3390_);
v_env_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc_ref(v_env_3398_);
lean_dec(v___x_3397_);
v___x_3399_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3398_);
lean_dec_ref(v_env_3398_);
if (v___x_3396_ == 0)
{
if (v___x_3399_ == 0)
{
v___y_3259_ = v___x_3381_;
v___y_3260_ = v___x_3384_;
v___y_3261_ = v___x_3379_;
v___y_3262_ = v___x_3378_;
v___y_3263_ = v___x_3382_;
v___y_3264_ = v___x_3322_;
v___y_3265_ = v___x_3385_;
v___y_3266_ = v___x_3380_;
v___y_3267_ = v___x_3373_;
v___y_3268_ = v___x_3375_;
v___y_3269_ = v___x_3374_;
v___y_3270_ = v___x_3383_;
v___y_3271_ = v___x_2955_;
v___y_3272_ = v___y_3308_;
v___y_3273_ = v___x_3394_;
v___y_3274_ = v___x_3386_;
v___y_3275_ = v___x_3396_;
v___y_3276_ = v___x_3390_;
v___y_3277_ = v___x_3388_;
v___y_3278_ = v___x_3387_;
v___y_3279_ = v___y_3313_;
v___y_3280_ = v___x_3322_;
goto v___jp_3258_;
}
else
{
v___y_3259_ = v___x_3381_;
v___y_3260_ = v___x_3384_;
v___y_3261_ = v___x_3379_;
v___y_3262_ = v___x_3378_;
v___y_3263_ = v___x_3382_;
v___y_3264_ = v___x_3322_;
v___y_3265_ = v___x_3385_;
v___y_3266_ = v___x_3380_;
v___y_3267_ = v___x_3373_;
v___y_3268_ = v___x_3375_;
v___y_3269_ = v___x_3374_;
v___y_3270_ = v___x_3383_;
v___y_3271_ = v___x_2955_;
v___y_3272_ = v___y_3308_;
v___y_3273_ = v___x_3394_;
v___y_3274_ = v___x_3386_;
v___y_3275_ = v___x_3396_;
v___y_3276_ = v___x_3390_;
v___y_3277_ = v___x_3388_;
v___y_3278_ = v___x_3387_;
v___y_3279_ = v___y_3313_;
v___y_3280_ = v___x_3396_;
goto v___jp_3258_;
}
}
else
{
v___y_3259_ = v___x_3381_;
v___y_3260_ = v___x_3384_;
v___y_3261_ = v___x_3379_;
v___y_3262_ = v___x_3378_;
v___y_3263_ = v___x_3382_;
v___y_3264_ = v___x_3322_;
v___y_3265_ = v___x_3385_;
v___y_3266_ = v___x_3380_;
v___y_3267_ = v___x_3373_;
v___y_3268_ = v___x_3375_;
v___y_3269_ = v___x_3374_;
v___y_3270_ = v___x_3383_;
v___y_3271_ = v___x_2955_;
v___y_3272_ = v___y_3308_;
v___y_3273_ = v___x_3394_;
v___y_3274_ = v___x_3386_;
v___y_3275_ = v___x_3396_;
v___y_3276_ = v___x_3390_;
v___y_3277_ = v___x_3388_;
v___y_3278_ = v___x_3387_;
v___y_3279_ = v___y_3313_;
v___y_3280_ = v___x_3399_;
goto v___jp_3258_;
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
v___jp_3413_:
{
lean_object* v___x_3418_; lean_object* v_toEnvExtension_3419_; lean_object* v_asyncMode_3420_; lean_object* v___x_3421_; lean_object* v_importedEntries_3422_; lean_object* v_state_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___x_3418_ = l_Lean_IR_declMapExt;
v_toEnvExtension_3419_ = lean_ctor_get(v___x_3418_, 0);
v_asyncMode_3420_ = lean_ctor_get(v_toEnvExtension_3419_, 2);
lean_inc(v___y_3416_);
lean_inc_ref(v___y_3417_);
v___x_3421_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2959_, v_toEnvExtension_3419_, v___y_3417_, v_asyncMode_3420_, v___y_3416_);
v_importedEntries_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc_ref(v_importedEntries_3422_);
v_state_3423_ = lean_ctor_get(v___x_3421_, 1);
lean_inc(v_state_3423_);
lean_dec(v___x_3421_);
v___x_3424_ = lean_array_get_borrowed(v___x_2960_, v_importedEntries_3422_, v___y_3415_);
v___x_3425_ = lean_array_get_size(v___x_3424_);
v___x_3426_ = lean_nat_dec_lt(v___x_2984_, v___x_3425_);
if (v___x_3426_ == 0)
{
v___y_3308_ = v___y_3414_;
v___y_3309_ = v_toEnvExtension_3419_;
v___y_3310_ = v_importedEntries_3422_;
v___y_3311_ = v___y_3415_;
v___y_3312_ = v___y_3417_;
v___y_3313_ = v___y_3416_;
v___y_3314_ = v_state_3423_;
goto v___jp_3307_;
}
else
{
uint8_t v___x_3427_; 
v___x_3427_ = lean_nat_dec_le(v___x_3425_, v___x_3425_);
if (v___x_3427_ == 0)
{
if (v___x_3426_ == 0)
{
v___y_3308_ = v___y_3414_;
v___y_3309_ = v_toEnvExtension_3419_;
v___y_3310_ = v_importedEntries_3422_;
v___y_3311_ = v___y_3415_;
v___y_3312_ = v___y_3417_;
v___y_3313_ = v___y_3416_;
v___y_3314_ = v_state_3423_;
goto v___jp_3307_;
}
else
{
size_t v___x_3428_; size_t v___x_3429_; lean_object* v___x_3430_; 
v___x_3428_ = ((size_t)0ULL);
v___x_3429_ = lean_usize_of_nat(v___x_3425_);
lean_inc_ref(v___y_3417_);
v___x_3430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3417_, v___x_3424_, v___x_3428_, v___x_3429_, v_state_3423_);
v___y_3308_ = v___y_3414_;
v___y_3309_ = v_toEnvExtension_3419_;
v___y_3310_ = v_importedEntries_3422_;
v___y_3311_ = v___y_3415_;
v___y_3312_ = v___y_3417_;
v___y_3313_ = v___y_3416_;
v___y_3314_ = v___x_3430_;
goto v___jp_3307_;
}
}
else
{
size_t v___x_3431_; size_t v___x_3432_; lean_object* v___x_3433_; 
v___x_3431_ = ((size_t)0ULL);
v___x_3432_ = lean_usize_of_nat(v___x_3425_);
lean_inc_ref(v___y_3417_);
v___x_3433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3417_, v___x_3424_, v___x_3431_, v___x_3432_, v_state_3423_);
v___y_3308_ = v___y_3414_;
v___y_3309_ = v_toEnvExtension_3419_;
v___y_3310_ = v_importedEntries_3422_;
v___y_3311_ = v___y_3415_;
v___y_3312_ = v___y_3417_;
v___y_3313_ = v___y_3416_;
v___y_3314_ = v___x_3433_;
goto v___jp_3307_;
}
}
}
v___jp_3434_:
{
uint8_t v___x_3441_; 
v___x_3441_ = lean_nat_dec_lt(v___x_2984_, v___y_3436_);
if (v___x_3441_ == 0)
{
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
v___y_3414_ = v___y_3435_;
v___y_3415_ = v___y_3438_;
v___y_3416_ = v___y_3439_;
v___y_3417_ = v___y_3440_;
goto v___jp_3413_;
}
else
{
uint8_t v___x_3442_; 
v___x_3442_ = lean_nat_dec_le(v___y_3436_, v___y_3436_);
if (v___x_3442_ == 0)
{
if (v___x_3441_ == 0)
{
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
v___y_3414_ = v___y_3435_;
v___y_3415_ = v___y_3438_;
v___y_3416_ = v___y_3439_;
v___y_3417_ = v___y_3440_;
goto v___jp_3413_;
}
else
{
size_t v___x_3443_; size_t v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = ((size_t)0ULL);
v___x_3444_ = lean_usize_of_nat(v___y_3436_);
lean_dec(v___y_3436_);
v___x_3445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3437_, v___x_3443_, v___x_3444_, v___y_3440_);
lean_dec_ref(v___y_3437_);
v___y_3414_ = v___y_3435_;
v___y_3415_ = v___y_3438_;
v___y_3416_ = v___y_3439_;
v___y_3417_ = v___x_3445_;
goto v___jp_3413_;
}
}
else
{
size_t v___x_3446_; size_t v___x_3447_; lean_object* v___x_3448_; 
v___x_3446_ = ((size_t)0ULL);
v___x_3447_ = lean_usize_of_nat(v___y_3436_);
lean_dec(v___y_3436_);
v___x_3448_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3437_, v___x_3446_, v___x_3447_, v___y_3440_);
lean_dec_ref(v___y_3437_);
v___y_3414_ = v___y_3435_;
v___y_3415_ = v___y_3438_;
v___y_3416_ = v___y_3439_;
v___y_3417_ = v___x_3448_;
goto v___jp_3413_;
}
}
}
v___jp_3449_:
{
lean_object* v___x_3454_; uint8_t v___x_3455_; 
v___x_3454_ = lean_array_get_size(v___y_3453_);
v___x_3455_ = lean_nat_dec_lt(v___x_2984_, v___x_3454_);
if (v___x_3455_ == 0)
{
lean_inc(v___y_3450_);
v___y_3435_ = v___y_3450_;
v___y_3436_ = v___x_3454_;
v___y_3437_ = v___y_3453_;
v___y_3438_ = v___y_3452_;
v___y_3439_ = v___y_3450_;
v___y_3440_ = v___y_3451_;
goto v___jp_3434_;
}
else
{
uint8_t v___x_3456_; 
v___x_3456_ = lean_nat_dec_le(v___x_3454_, v___x_3454_);
if (v___x_3456_ == 0)
{
if (v___x_3455_ == 0)
{
lean_inc(v___y_3450_);
v___y_3435_ = v___y_3450_;
v___y_3436_ = v___x_3454_;
v___y_3437_ = v___y_3453_;
v___y_3438_ = v___y_3452_;
v___y_3439_ = v___y_3450_;
v___y_3440_ = v___y_3451_;
goto v___jp_3434_;
}
else
{
size_t v___x_3457_; size_t v___x_3458_; lean_object* v___x_3459_; 
v___x_3457_ = ((size_t)0ULL);
v___x_3458_ = lean_usize_of_nat(v___x_3454_);
v___x_3459_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v___y_3453_, v___x_3457_, v___x_3458_, v___y_3451_);
lean_inc(v___y_3450_);
v___y_3435_ = v___y_3450_;
v___y_3436_ = v___x_3454_;
v___y_3437_ = v___y_3453_;
v___y_3438_ = v___y_3452_;
v___y_3439_ = v___y_3450_;
v___y_3440_ = v___x_3459_;
goto v___jp_3434_;
}
}
else
{
size_t v___x_3460_; size_t v___x_3461_; lean_object* v___x_3462_; 
v___x_3460_ = ((size_t)0ULL);
v___x_3461_ = lean_usize_of_nat(v___x_3454_);
v___x_3462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v___y_3453_, v___x_3460_, v___x_3461_, v___y_3451_);
lean_inc(v___y_3450_);
v___y_3435_ = v___y_3450_;
v___y_3436_ = v___x_3454_;
v___y_3437_ = v___y_3453_;
v___y_3438_ = v___y_3452_;
v___y_3439_ = v___y_3450_;
v___y_3440_ = v___x_3462_;
goto v___jp_3434_;
}
}
}
v___jp_3464_:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___f_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3466_ = l_Lean_instInhabitedImportState_default;
v___x_3467_ = lean_box(v___x_3306_);
v___x_3468_ = lean_box(v___y_3465_);
v___x_3469_ = lean_box(v___x_2981_);
v___x_3470_ = lean_box(v___x_3463_);
v___x_3471_ = lean_box(v___x_2968_);
lean_inc_ref(v___x_2985_);
lean_inc(v_name_2965_);
v___f_3472_ = lean_alloc_closure((void*)(l_main___lam__0___boxed), 11, 10);
lean_closure_set(v___f_3472_, 0, v___x_3466_);
lean_closure_set(v___f_3472_, 1, v___x_3305_);
lean_closure_set(v___f_3472_, 2, v___x_3467_);
lean_closure_set(v___f_3472_, 3, v_importArts_2966_);
lean_closure_set(v___f_3472_, 4, v___x_3468_);
lean_closure_set(v___f_3472_, 5, v___x_3469_);
lean_closure_set(v___f_3472_, 6, v_name_2965_);
lean_closure_set(v___f_3472_, 7, v___x_3470_);
lean_closure_set(v___f_3472_, 8, v___x_2985_);
lean_closure_set(v___f_3472_, 9, v___x_3471_);
v___x_3473_ = lean_alloc_closure((void*)(l_Lean_withImporting___boxed), 3, 2);
lean_closure_set(v___x_3473_, 0, lean_box(0));
lean_closure_set(v___x_3473_, 1, v___f_3472_);
v___x_3474_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___closed__0);
v___x_3475_ = l_Lean_profileitIOUnsafe___redArg(v___x_3301_, v___x_2985_, v___x_3473_, v___x_3474_);
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3477_; lean_object* v_ext_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v_a_3476_ = lean_ctor_get(v___x_3475_, 0);
lean_inc(v_a_3476_);
lean_dec_ref_known(v___x_3475_, 1);
v___x_3477_ = l_Lean_Compiler_CSimp_ext;
v_ext_3478_ = lean_ctor_get(v___x_3477_, 1);
lean_inc(v_name_2965_);
v___x_3479_ = l_Lean_Environment_setMainModule(v_a_3476_, v_name_2965_);
lean_inc_ref(v_ext_3478_);
v___x_3480_ = l_main___elam__0___redArg(v___x_3474_, v___x_2954_, v_ext_3478_, v___x_3479_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3482_; lean_object* v_ext_3483_; lean_object* v___x_3484_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v___x_3482_ = l_Lean_Meta_instanceExtension;
v_ext_3483_ = lean_ctor_get(v___x_3482_, 1);
lean_inc_ref(v_ext_3483_);
v___x_3484_ = l_main___elam__0___redArg(v___x_3474_, v___x_2954_, v_ext_3483_, v_a_3481_);
if (lean_obj_tag(v___x_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
lean_inc(v_a_3485_);
lean_dec_ref_known(v___x_3484_, 1);
v___x_3486_ = l_Lean_classExtension;
v___x_3487_ = l_main___elam__0___redArg(v___x_3474_, v___x_2956_, v___x_3486_, v_a_3485_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3489_ = l_Lean_Meta_Match_Extension_extension;
v___x_3490_ = l_main___elam__0___redArg(v___x_3474_, v___x_2957_, v___x_3489_, v_a_3488_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3518_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3493_ = v___x_3490_;
v_isShared_3494_ = v_isSharedCheck_3518_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3490_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3518_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3495_; 
v___x_3495_ = l_Lean_Environment_getModuleIdx_x3f(v_a_3491_, v_name_2965_);
if (lean_obj_tag(v___x_3495_) == 1)
{
lean_object* v_val_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
lean_del_object(v___x_3493_);
v_val_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_val_3496_);
lean_dec_ref_known(v___x_3495_, 1);
v___x_3497_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_3498_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2958_, v___x_3497_, v_a_3491_, v_val_3496_, v___x_3306_);
v___x_3499_ = lean_array_get_size(v___x_3498_);
v___x_3500_ = ((lean_object*)(l_main___closed__32));
v___x_3501_ = lean_nat_dec_lt(v___x_2984_, v___x_3499_);
if (v___x_3501_ == 0)
{
lean_dec_ref(v___x_3498_);
v___y_3450_ = v___x_3474_;
v___y_3451_ = v_a_3491_;
v___y_3452_ = v_val_3496_;
v___y_3453_ = v___x_3500_;
goto v___jp_3449_;
}
else
{
uint8_t v___x_3502_; 
v___x_3502_ = lean_nat_dec_le(v___x_3499_, v___x_3499_);
if (v___x_3502_ == 0)
{
if (v___x_3501_ == 0)
{
lean_dec_ref(v___x_3498_);
v___y_3450_ = v___x_3474_;
v___y_3451_ = v_a_3491_;
v___y_3452_ = v_val_3496_;
v___y_3453_ = v___x_3500_;
goto v___jp_3449_;
}
else
{
size_t v___x_3503_; size_t v___x_3504_; lean_object* v___x_3505_; 
v___x_3503_ = ((size_t)0ULL);
v___x_3504_ = lean_usize_of_nat(v___x_3499_);
lean_inc(v_a_3491_);
v___x_3505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(v_a_3491_, v___x_3498_, v___x_3503_, v___x_3504_, v___x_3500_);
lean_dec_ref(v___x_3498_);
v___y_3450_ = v___x_3474_;
v___y_3451_ = v_a_3491_;
v___y_3452_ = v_val_3496_;
v___y_3453_ = v___x_3505_;
goto v___jp_3449_;
}
}
else
{
size_t v___x_3506_; size_t v___x_3507_; lean_object* v___x_3508_; 
v___x_3506_ = ((size_t)0ULL);
v___x_3507_ = lean_usize_of_nat(v___x_3499_);
lean_inc(v_a_3491_);
v___x_3508_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(v_a_3491_, v___x_3498_, v___x_3506_, v___x_3507_, v___x_3500_);
lean_dec_ref(v___x_3498_);
v___y_3450_ = v___x_3474_;
v___y_3451_ = v_a_3491_;
v___y_3452_ = v_val_3496_;
v___y_3453_ = v___x_3508_;
goto v___jp_3449_;
}
}
}
else
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3516_; 
lean_dec(v___x_3495_);
lean_dec(v_a_3491_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v___x_3509_ = ((lean_object*)(l_main___closed__33));
v___x_3510_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2965_, v___x_2981_);
v___x_3511_ = lean_string_append(v___x_3509_, v___x_3510_);
lean_dec_ref(v___x_3510_);
v___x_3512_ = ((lean_object*)(l_main___closed__34));
v___x_3513_ = lean_string_append(v___x_3511_, v___x_3512_);
v___x_3514_ = lean_mk_io_user_error(v___x_3513_);
if (v_isShared_3494_ == 0)
{
lean_ctor_set_tag(v___x_3493_, 1);
lean_ctor_set(v___x_3493_, 0, v___x_3514_);
v___x_3516_ = v___x_3493_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v___x_3514_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
else
{
lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3526_; 
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3519_ = lean_ctor_get(v___x_3490_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3521_ = v___x_3490_;
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___x_3490_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3524_; 
if (v_isShared_3522_ == 0)
{
v___x_3524_ = v___x_3521_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3519_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
}
else
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3534_; 
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3527_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3529_ = v___x_3487_;
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3487_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3535_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3484_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3484_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3543_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3480_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3480_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3551_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3475_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3475_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_importArts_2966_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3560_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3300_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3300_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
v___jp_2986_:
{
lean_object* v___x_3005_; lean_object* v_messages_3006_; lean_object* v_env_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3130_; 
v___x_3005_ = lean_st_ref_get(v___y_2996_);
lean_dec(v___y_2996_);
v_messages_3006_ = lean_ctor_get(v___x_3005_, 6);
v_env_3007_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3130_ == 0)
{
lean_object* v_unused_3131_; lean_object* v_unused_3132_; lean_object* v_unused_3133_; lean_object* v_unused_3134_; lean_object* v_unused_3135_; lean_object* v_unused_3136_; lean_object* v_unused_3137_; 
v_unused_3131_ = lean_ctor_get(v___x_3005_, 8);
lean_dec(v_unused_3131_);
v_unused_3132_ = lean_ctor_get(v___x_3005_, 7);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v___x_3005_, 5);
lean_dec(v_unused_3133_);
v_unused_3134_ = lean_ctor_get(v___x_3005_, 4);
lean_dec(v_unused_3134_);
v_unused_3135_ = lean_ctor_get(v___x_3005_, 3);
lean_dec(v_unused_3135_);
v_unused_3136_ = lean_ctor_get(v___x_3005_, 2);
lean_dec(v_unused_3136_);
v_unused_3137_ = lean_ctor_get(v___x_3005_, 1);
lean_dec(v_unused_3137_);
v___x_3009_ = v___x_3005_;
v_isShared_3010_ = v_isSharedCheck_3130_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_messages_3006_);
lean_inc(v_env_3007_);
lean_dec(v___x_3005_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3130_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v_unreported_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v_unreported_3011_ = lean_ctor_get(v_messages_3006_, 1);
v___x_3012_ = lean_box(0);
v___x_3013_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_unreported_3011_, v___x_3012_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3120_; 
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3120_ == 0)
{
lean_object* v_unused_3121_; 
v_unused_3121_ = lean_ctor_get(v___x_3013_, 0);
lean_dec(v_unused_3121_);
v___x_3015_ = v___x_3013_;
v_isShared_3016_ = v_isSharedCheck_3120_;
goto v_resetjp_3014_;
}
else
{
lean_dec(v___x_3013_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3120_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
uint8_t v___x_3017_; 
v___x_3017_ = l_Lean_MessageLog_hasErrors(v_messages_3006_);
lean_dec_ref(v_messages_3006_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
lean_del_object(v___x_3015_);
v___x_3018_ = ((lean_object*)(l_main___closed__9));
lean_inc(v_head_2945_);
v___x_3019_ = l_System_FilePath_addExtension(v_head_2945_, v___x_3018_);
lean_inc_ref(v_env_3007_);
v___x_3020_ = l___private_LeanIR_0__mkIRSigData(v_env_3007_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3022_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
lean_inc_ref(v_env_3007_);
v___x_3022_ = l___private_LeanIR_0__mkIRData(v_env_3007_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3028_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = l_Lean_Environment_mainModule(v_env_3007_);
v___x_3025_ = ((lean_object*)(l_main___closed__11));
v___x_3026_ = l_Lean_Name_append(v___x_3024_, v___x_3025_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 1, v_a_3021_);
lean_ctor_set(v___x_2978_, 0, v___x_3019_);
v___x_3028_ = v___x_2978_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3099_, 1, v_a_3021_);
v___x_3028_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3030_; 
lean_inc(v_head_2945_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set_tag(v___x_2947_, 0);
lean_ctor_set(v___x_2947_, 1, v_a_3023_);
v___x_3030_ = v___x_2947_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_head_2945_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_a_3023_);
v___x_3030_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3031_ = lean_unsigned_to_nat(2u);
v___x_3032_ = lean_mk_empty_array_with_capacity(v___x_3031_);
v___x_3033_ = lean_array_push(v___x_3032_, v___x_3028_);
v___x_3034_ = lean_array_push(v___x_3033_, v___x_3030_);
v___x_3035_ = l_Lean_saveModuleDataParts(v___x_3026_, v___x_3034_);
lean_dec_ref(v___x_3034_);
lean_dec(v___x_3026_);
if (lean_obj_tag(v___x_3035_) == 0)
{
uint8_t v___x_3036_; lean_object* v___x_3037_; 
lean_dec_ref_known(v___x_3035_, 1);
v___x_3036_ = 1;
v___x_3037_ = lean_io_prim_handle_mk(v_head_2949_, v___x_3036_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3043_; 
lean_dec(v_head_2949_);
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3038_);
lean_dec_ref_known(v___x_3037_, 1);
v___x_3039_ = ((lean_object*)(l_main___closed__12));
v___x_3040_ = l_Lean_Options_empty;
v___x_3041_ = lean_obj_once(&l_main___closed__13, &l_main___closed__13_once, _init_l_main___closed__13);
lean_inc_ref(v___y_2997_);
lean_inc_ref(v___y_3002_);
lean_inc_ref(v___y_3000_);
lean_inc_ref(v___y_3004_);
lean_inc_ref(v___y_2999_);
lean_inc_ref(v___y_3001_);
lean_inc(v___y_2998_);
lean_inc_ref(v_env_3007_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 8, v___y_2997_);
lean_ctor_set(v___x_3009_, 7, v___y_3002_);
lean_ctor_set(v___x_3009_, 6, v___y_3000_);
lean_ctor_set(v___x_3009_, 5, v___y_3004_);
lean_ctor_set(v___x_3009_, 4, v___y_2999_);
lean_ctor_set(v___x_3009_, 3, v___y_2995_);
lean_ctor_set(v___x_3009_, 2, v___y_3001_);
lean_ctor_set(v___x_3009_, 1, v___y_2998_);
v___x_3043_ = v___x_3009_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_env_3007_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v___y_2998_);
lean_ctor_set(v_reuseFailAlloc_3067_, 2, v___y_3001_);
lean_ctor_set(v_reuseFailAlloc_3067_, 3, v___y_2995_);
lean_ctor_set(v_reuseFailAlloc_3067_, 4, v___y_2999_);
lean_ctor_set(v_reuseFailAlloc_3067_, 5, v___y_3004_);
lean_ctor_set(v_reuseFailAlloc_3067_, 6, v___y_3000_);
lean_ctor_set(v_reuseFailAlloc_3067_, 7, v___y_3002_);
lean_ctor_set(v_reuseFailAlloc_3067_, 8, v___y_2997_);
v___x_3043_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___f_3046_; lean_object* v___x_3047_; 
v___x_3044_ = lean_box(v___x_2968_);
v___x_3045_ = lean_box(v___y_2991_);
lean_inc_ref(v___y_2994_);
lean_inc(v___y_2987_);
lean_inc(v___y_2989_);
lean_inc(v___y_2990_);
lean_inc(v___y_2992_);
lean_inc_ref(v___y_2988_);
v___f_3046_ = lean_alloc_closure((void*)(l_main___lam__1___boxed), 17, 16);
lean_closure_set(v___f_3046_, 0, v___x_3043_);
lean_closure_set(v___f_3046_, 1, v___x_3040_);
lean_closure_set(v___f_3046_, 2, v_head_2945_);
lean_closure_set(v___f_3046_, 3, v___y_2988_);
lean_closure_set(v___f_3046_, 4, v___y_2993_);
lean_closure_set(v___f_3046_, 5, v___y_2992_);
lean_closure_set(v___f_3046_, 6, v___x_3041_);
lean_closure_set(v___f_3046_, 7, v___y_2990_);
lean_closure_set(v___f_3046_, 8, v___y_2989_);
lean_closure_set(v___f_3046_, 9, v___x_2984_);
lean_closure_set(v___f_3046_, 10, v___y_2987_);
lean_closure_set(v___f_3046_, 11, v___x_3044_);
lean_closure_set(v___f_3046_, 12, v_name_2965_);
lean_closure_set(v___f_3046_, 13, v_a_3038_);
lean_closure_set(v___f_3046_, 14, v___x_3045_);
lean_closure_set(v___f_3046_, 15, v___y_2994_);
v___x_3047_ = l_Lean_profileitIOUnsafe___redArg(v___x_3039_, v___x_2985_, v___f_3046_, v___y_3003_);
lean_dec_ref(v___x_2985_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v___x_3048_; uint8_t v___x_3049_; 
lean_dec_ref_known(v___x_3047_, 1);
v___x_3048_ = lean_display_cumulative_profiling_times();
v___x_3049_ = lean_unbox(v_fst_2975_);
lean_dec(v_fst_2975_);
if (v___x_3049_ == 0)
{
lean_dec_ref(v_env_3007_);
goto v___jp_2936_;
}
else
{
lean_object* v___x_3050_; 
v___x_3050_ = l_Lean_Environment_displayStats(v_env_3007_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_dec_ref_known(v___x_3050_, 1);
goto v___jp_2936_;
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
v_a_3051_ = lean_ctor_get(v___x_3050_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_3050_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_3050_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec_ref(v_env_3007_);
lean_dec(v_fst_2975_);
v_a_3059_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3047_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3047_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
}
else
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
lean_dec_ref_known(v___x_3037_, 1);
lean_del_object(v___x_3009_);
lean_dec_ref(v_env_3007_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2945_);
v___x_3068_ = ((lean_object*)(l_main___closed__14));
v___x_3069_ = lean_string_append(v___x_3068_, v_head_2949_);
lean_dec(v_head_2949_);
v___x_3070_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_3071_ = lean_string_append(v___x_3069_, v___x_3070_);
v___x_3072_ = l_IO_eprintln___at___00main_spec__6(v___x_3071_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3080_; 
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3080_ == 0)
{
lean_object* v_unused_3081_; 
v_unused_3081_ = lean_ctor_get(v___x_3072_, 0);
lean_dec(v_unused_3081_);
v___x_3074_ = v___x_3072_;
v_isShared_3075_ = v_isSharedCheck_3080_;
goto v_resetjp_3073_;
}
else
{
lean_dec(v___x_3072_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3080_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3076_; lean_object* v___x_3078_; 
v___x_3076_ = l_main___boxed__const__1;
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 0, v___x_3076_);
v___x_3078_ = v___x_3074_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v___x_3076_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
else
{
lean_object* v_a_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
v_a_3082_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3084_ = v___x_3072_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_a_3082_);
lean_dec(v___x_3072_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_a_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_del_object(v___x_3009_);
lean_dec_ref(v_env_3007_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_dec(v_head_2945_);
v_a_3090_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3035_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3035_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec(v_a_3021_);
lean_dec_ref(v___x_3019_);
lean_del_object(v___x_3009_);
lean_dec_ref(v_env_3007_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
v_a_3100_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3022_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3022_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec_ref(v___x_3019_);
lean_del_object(v___x_3009_);
lean_dec_ref(v_env_3007_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
v_a_3108_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3020_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3020_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
else
{
lean_object* v___x_3116_; lean_object* v___x_3118_; 
lean_del_object(v___x_3009_);
lean_dec_ref(v_env_3007_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
v___x_3116_ = l_main___boxed__const__1;
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 0, v___x_3116_);
v___x_3118_ = v___x_3015_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3129_; 
lean_del_object(v___x_3009_);
lean_dec_ref(v_env_3007_);
lean_dec_ref(v_messages_3006_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
v_a_3122_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3124_ = v___x_3013_;
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3013_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
if (v_isShared_3125_ == 0)
{
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
}
v___jp_3138_:
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; size_t v_sz_3171_; size_t v___x_3172_; lean_object* v___x_3173_; 
lean_inc_ref(v___y_3160_);
v___x_3168_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3168_, 0, v___y_3167_);
lean_ctor_set(v___x_3168_, 1, v_nextMacroScope_3151_);
lean_ctor_set(v___x_3168_, 2, v_ngen_3152_);
lean_ctor_set(v___x_3168_, 3, v_auxDeclNGen_3153_);
lean_ctor_set(v___x_3168_, 4, v_traceState_3154_);
lean_ctor_set(v___x_3168_, 5, v___y_3160_);
lean_ctor_set(v___x_3168_, 6, v_messages_3155_);
lean_ctor_set(v___x_3168_, 7, v_infoState_3156_);
lean_ctor_set(v___x_3168_, 8, v_snapshotTasks_3157_);
v___x_3169_ = lean_st_ref_put(v___y_3147_, v___x_3168_);
v___x_3170_ = lean_box(0);
v_sz_3171_ = lean_array_size(v___y_3161_);
v___x_3172_ = ((size_t)0ULL);
v___x_3173_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(v___y_3161_, v_sz_3171_, v___x_3172_, v___x_3170_, v___y_3148_, v___y_3147_);
lean_dec_ref(v___y_3161_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_dec_ref_known(v___x_3173_, 1);
lean_dec_ref(v___y_3148_);
lean_dec(v___y_3147_);
v___y_2987_ = v___y_3139_;
v___y_2988_ = v___y_3140_;
v___y_2989_ = v___y_3141_;
v___y_2990_ = v___y_3142_;
v___y_2991_ = v___y_3143_;
v___y_2992_ = v___y_3144_;
v___y_2993_ = v___y_3145_;
v___y_2994_ = v___y_3146_;
v___y_2995_ = v___y_3162_;
v___y_2996_ = v___y_3163_;
v___y_2997_ = v___y_3164_;
v___y_2998_ = v___y_3149_;
v___y_2999_ = v___y_3150_;
v___y_3000_ = v___y_3158_;
v___y_3001_ = v___y_3159_;
v___y_3002_ = v___y_3165_;
v___y_3003_ = v___y_3166_;
v___y_3004_ = v___y_3160_;
goto v___jp_2986_;
}
else
{
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_dec_ref_known(v___x_3173_, 1);
lean_dec_ref(v___y_3148_);
lean_dec(v___y_3147_);
v___y_2987_ = v___y_3139_;
v___y_2988_ = v___y_3140_;
v___y_2989_ = v___y_3141_;
v___y_2990_ = v___y_3142_;
v___y_2991_ = v___y_3143_;
v___y_2992_ = v___y_3144_;
v___y_2993_ = v___y_3145_;
v___y_2994_ = v___y_3146_;
v___y_2995_ = v___y_3162_;
v___y_2996_ = v___y_3163_;
v___y_2997_ = v___y_3164_;
v___y_2998_ = v___y_3149_;
v___y_2999_ = v___y_3150_;
v___y_3000_ = v___y_3158_;
v___y_3001_ = v___y_3159_;
v___y_3002_ = v___y_3165_;
v___y_3003_ = v___y_3166_;
v___y_3004_ = v___y_3160_;
goto v___jp_2986_;
}
else
{
lean_object* v_a_3174_; uint8_t v___x_3175_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___x_3173_, 1);
v___x_3175_ = l_Lean_Exception_isInterrupt(v_a_3174_);
if (v___x_3175_ == 0)
{
lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3176_ = l_Lean_Exception_toMessageData(v_a_3174_);
v___x_3177_ = l_Lean_logError___at___00main_spec__14(v___x_3176_, v___y_3148_, v___y_3147_);
lean_dec(v___y_3147_);
lean_dec_ref(v___y_3148_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_dec_ref_known(v___x_3177_, 1);
v___y_2987_ = v___y_3139_;
v___y_2988_ = v___y_3140_;
v___y_2989_ = v___y_3141_;
v___y_2990_ = v___y_3142_;
v___y_2991_ = v___y_3143_;
v___y_2992_ = v___y_3144_;
v___y_2993_ = v___y_3145_;
v___y_2994_ = v___y_3146_;
v___y_2995_ = v___y_3162_;
v___y_2996_ = v___y_3163_;
v___y_2997_ = v___y_3164_;
v___y_2998_ = v___y_3149_;
v___y_2999_ = v___y_3150_;
v___y_3000_ = v___y_3158_;
v___y_3001_ = v___y_3159_;
v___y_3002_ = v___y_3165_;
v___y_3003_ = v___y_3166_;
v___y_3004_ = v___y_3160_;
goto v___jp_2986_;
}
else
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
lean_dec_ref_known(v___x_3177_, 1);
lean_dec(v___y_3166_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3145_);
lean_dec_ref(v___x_2985_);
lean_del_object(v___x_2978_);
lean_dec(v_fst_2975_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
v___x_3178_ = lean_obj_once(&l_main___closed__18, &l_main___closed__18_once, _init_l_main___closed__18);
v___x_3179_ = l_panic___at___00main_spec__5(v___x_3178_);
return v___x_3179_;
}
}
else
{
lean_dec(v_a_3174_);
lean_dec_ref(v___y_3148_);
lean_dec(v___y_3147_);
v___y_2987_ = v___y_3139_;
v___y_2988_ = v___y_3140_;
v___y_2989_ = v___y_3141_;
v___y_2990_ = v___y_3142_;
v___y_2991_ = v___y_3143_;
v___y_2992_ = v___y_3144_;
v___y_2993_ = v___y_3145_;
v___y_2994_ = v___y_3146_;
v___y_2995_ = v___y_3162_;
v___y_2996_ = v___y_3163_;
v___y_2997_ = v___y_3164_;
v___y_2998_ = v___y_3149_;
v___y_2999_ = v___y_3150_;
v___y_3000_ = v___y_3158_;
v___y_3001_ = v___y_3159_;
v___y_3002_ = v___y_3165_;
v___y_3003_ = v___y_3166_;
v___y_3004_ = v___y_3160_;
goto v___jp_2986_;
}
}
}
}
v___jp_3180_:
{
lean_object* v_toCold_3204_; lean_object* v_currRecDepth_3205_; lean_object* v_ref_3206_; uint8_t v_suppressElabErrors_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3257_; 
v_toCold_3204_ = lean_ctor_get(v___y_3202_, 0);
v_currRecDepth_3205_ = lean_ctor_get(v___y_3202_, 1);
v_ref_3206_ = lean_ctor_get(v___y_3202_, 2);
v_suppressElabErrors_3207_ = lean_ctor_get_uint8(v___y_3202_, sizeof(void*)*3 + 1);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___y_3202_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3209_ = v___y_3202_;
v_isShared_3210_ = v_isSharedCheck_3257_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_ref_3206_);
lean_inc(v_currRecDepth_3205_);
lean_inc(v_toCold_3204_);
lean_dec(v___y_3202_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3257_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v_fileName_3211_; lean_object* v_fileMap_3212_; lean_object* v_currNamespace_3213_; lean_object* v_openDecls_3214_; lean_object* v_initHeartbeats_3215_; lean_object* v_maxHeartbeats_3216_; lean_object* v_quotContext_3217_; lean_object* v_currMacroScope_3218_; lean_object* v_cancelTk_x3f_3219_; lean_object* v_inheritedTraceOptions_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3254_; 
v_fileName_3211_ = lean_ctor_get(v_toCold_3204_, 0);
v_fileMap_3212_ = lean_ctor_get(v_toCold_3204_, 1);
v_currNamespace_3213_ = lean_ctor_get(v_toCold_3204_, 4);
v_openDecls_3214_ = lean_ctor_get(v_toCold_3204_, 5);
v_initHeartbeats_3215_ = lean_ctor_get(v_toCold_3204_, 6);
v_maxHeartbeats_3216_ = lean_ctor_get(v_toCold_3204_, 7);
v_quotContext_3217_ = lean_ctor_get(v_toCold_3204_, 8);
v_currMacroScope_3218_ = lean_ctor_get(v_toCold_3204_, 9);
v_cancelTk_x3f_3219_ = lean_ctor_get(v_toCold_3204_, 10);
v_inheritedTraceOptions_3220_ = lean_ctor_get(v_toCold_3204_, 11);
v_isSharedCheck_3254_ = !lean_is_exclusive(v_toCold_3204_);
if (v_isSharedCheck_3254_ == 0)
{
lean_object* v_unused_3255_; lean_object* v_unused_3256_; 
v_unused_3255_ = lean_ctor_get(v_toCold_3204_, 3);
lean_dec(v_unused_3255_);
v_unused_3256_ = lean_ctor_get(v_toCold_3204_, 2);
lean_dec(v_unused_3256_);
v___x_3222_ = v_toCold_3204_;
v_isShared_3223_ = v_isSharedCheck_3254_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_inheritedTraceOptions_3220_);
lean_inc(v_cancelTk_x3f_3219_);
lean_inc(v_currMacroScope_3218_);
lean_inc(v_quotContext_3217_);
lean_inc(v_maxHeartbeats_3216_);
lean_inc(v_initHeartbeats_3215_);
lean_inc(v_openDecls_3214_);
lean_inc(v_currNamespace_3213_);
lean_inc(v_fileMap_3212_);
lean_inc(v_fileName_3211_);
lean_dec(v_toCold_3204_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3254_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3227_; 
v___x_3224_ = l_Lean_maxRecDepth;
v___x_3225_ = l_Lean_Option_get___at___00main_spec__9(v___x_2985_, v___x_3224_);
lean_inc_ref(v___x_2985_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 3, v___x_3225_);
lean_ctor_set(v___x_3222_, 2, v___x_2985_);
v___x_3227_ = v___x_3222_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_fileName_3211_);
lean_ctor_set(v_reuseFailAlloc_3253_, 1, v_fileMap_3212_);
lean_ctor_set(v_reuseFailAlloc_3253_, 2, v___x_2985_);
lean_ctor_set(v_reuseFailAlloc_3253_, 3, v___x_3225_);
lean_ctor_set(v_reuseFailAlloc_3253_, 4, v_currNamespace_3213_);
lean_ctor_set(v_reuseFailAlloc_3253_, 5, v_openDecls_3214_);
lean_ctor_set(v_reuseFailAlloc_3253_, 6, v_initHeartbeats_3215_);
lean_ctor_set(v_reuseFailAlloc_3253_, 7, v_maxHeartbeats_3216_);
lean_ctor_set(v_reuseFailAlloc_3253_, 8, v_quotContext_3217_);
lean_ctor_set(v_reuseFailAlloc_3253_, 9, v_currMacroScope_3218_);
lean_ctor_set(v_reuseFailAlloc_3253_, 10, v_cancelTk_x3f_3219_);
lean_ctor_set(v_reuseFailAlloc_3253_, 11, v_inheritedTraceOptions_3220_);
v___x_3227_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
lean_object* v___x_3229_; 
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 0, v___x_3227_);
v___x_3229_ = v___x_3209_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v___x_3227_);
lean_ctor_set(v_reuseFailAlloc_3252_, 1, v_currRecDepth_3205_);
lean_ctor_set(v_reuseFailAlloc_3252_, 2, v_ref_3206_);
lean_ctor_set_uint8(v_reuseFailAlloc_3252_, sizeof(void*)*3 + 1, v_suppressElabErrors_3207_);
v___x_3229_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3230_; lean_object* v_env_3231_; lean_object* v_nextMacroScope_3232_; lean_object* v_ngen_3233_; lean_object* v_auxDeclNGen_3234_; lean_object* v_traceState_3235_; lean_object* v_messages_3236_; lean_object* v_infoState_3237_; lean_object* v_snapshotTasks_3238_; lean_object* v___x_3239_; uint8_t v___x_3240_; 
lean_ctor_set_uint8(v___x_3229_, sizeof(void*)*3, v___y_3194_);
v___x_3230_ = lean_st_ref_take(v___y_3203_);
v_env_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc_ref(v_env_3231_);
v_nextMacroScope_3232_ = lean_ctor_get(v___x_3230_, 1);
lean_inc(v_nextMacroScope_3232_);
v_ngen_3233_ = lean_ctor_get(v___x_3230_, 2);
lean_inc_ref(v_ngen_3233_);
v_auxDeclNGen_3234_ = lean_ctor_get(v___x_3230_, 3);
lean_inc_ref(v_auxDeclNGen_3234_);
v_traceState_3235_ = lean_ctor_get(v___x_3230_, 4);
lean_inc_ref(v_traceState_3235_);
v_messages_3236_ = lean_ctor_get(v___x_3230_, 6);
lean_inc_ref(v_messages_3236_);
v_infoState_3237_ = lean_ctor_get(v___x_3230_, 7);
lean_inc_ref(v_infoState_3237_);
v_snapshotTasks_3238_ = lean_ctor_get(v___x_3230_, 8);
lean_inc_ref(v_snapshotTasks_3238_);
lean_dec(v___x_3230_);
v___x_3239_ = lean_array_get_size(v___y_3196_);
v___x_3240_ = lean_nat_dec_lt(v___x_2984_, v___x_3239_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; 
lean_inc_ref(v___y_3195_);
v___x_3241_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3195_, v_env_3231_, v___x_2961_);
v___y_3139_ = v___y_3181_;
v___y_3140_ = v___y_3182_;
v___y_3141_ = v___y_3183_;
v___y_3142_ = v___y_3184_;
v___y_3143_ = v___y_3185_;
v___y_3144_ = v___y_3186_;
v___y_3145_ = v___y_3187_;
v___y_3146_ = v___y_3188_;
v___y_3147_ = v___y_3203_;
v___y_3148_ = v___x_3229_;
v___y_3149_ = v___y_3189_;
v___y_3150_ = v___y_3190_;
v_nextMacroScope_3151_ = v_nextMacroScope_3232_;
v_ngen_3152_ = v_ngen_3233_;
v_auxDeclNGen_3153_ = v_auxDeclNGen_3234_;
v_traceState_3154_ = v_traceState_3235_;
v_messages_3155_ = v_messages_3236_;
v_infoState_3156_ = v_infoState_3237_;
v_snapshotTasks_3157_ = v_snapshotTasks_3238_;
v___y_3158_ = v___y_3191_;
v___y_3159_ = v___y_3192_;
v___y_3160_ = v___y_3193_;
v___y_3161_ = v___y_3196_;
v___y_3162_ = v___y_3197_;
v___y_3163_ = v___y_3198_;
v___y_3164_ = v___y_3199_;
v___y_3165_ = v___y_3200_;
v___y_3166_ = v___y_3201_;
v___y_3167_ = v___x_3241_;
goto v___jp_3138_;
}
else
{
uint8_t v___x_3242_; 
v___x_3242_ = lean_nat_dec_le(v___x_3239_, v___x_3239_);
if (v___x_3242_ == 0)
{
if (v___x_3240_ == 0)
{
lean_object* v___x_3243_; 
lean_inc_ref(v___y_3195_);
v___x_3243_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3195_, v_env_3231_, v___x_2961_);
v___y_3139_ = v___y_3181_;
v___y_3140_ = v___y_3182_;
v___y_3141_ = v___y_3183_;
v___y_3142_ = v___y_3184_;
v___y_3143_ = v___y_3185_;
v___y_3144_ = v___y_3186_;
v___y_3145_ = v___y_3187_;
v___y_3146_ = v___y_3188_;
v___y_3147_ = v___y_3203_;
v___y_3148_ = v___x_3229_;
v___y_3149_ = v___y_3189_;
v___y_3150_ = v___y_3190_;
v_nextMacroScope_3151_ = v_nextMacroScope_3232_;
v_ngen_3152_ = v_ngen_3233_;
v_auxDeclNGen_3153_ = v_auxDeclNGen_3234_;
v_traceState_3154_ = v_traceState_3235_;
v_messages_3155_ = v_messages_3236_;
v_infoState_3156_ = v_infoState_3237_;
v_snapshotTasks_3157_ = v_snapshotTasks_3238_;
v___y_3158_ = v___y_3191_;
v___y_3159_ = v___y_3192_;
v___y_3160_ = v___y_3193_;
v___y_3161_ = v___y_3196_;
v___y_3162_ = v___y_3197_;
v___y_3163_ = v___y_3198_;
v___y_3164_ = v___y_3199_;
v___y_3165_ = v___y_3200_;
v___y_3166_ = v___y_3201_;
v___y_3167_ = v___x_3243_;
goto v___jp_3138_;
}
else
{
size_t v___x_3244_; size_t v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3244_ = ((size_t)0ULL);
v___x_3245_ = lean_usize_of_nat(v___x_3239_);
v___x_3246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3196_, v___x_3244_, v___x_3245_, v___x_2961_);
lean_inc_ref(v___y_3195_);
v___x_3247_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3195_, v_env_3231_, v___x_3246_);
v___y_3139_ = v___y_3181_;
v___y_3140_ = v___y_3182_;
v___y_3141_ = v___y_3183_;
v___y_3142_ = v___y_3184_;
v___y_3143_ = v___y_3185_;
v___y_3144_ = v___y_3186_;
v___y_3145_ = v___y_3187_;
v___y_3146_ = v___y_3188_;
v___y_3147_ = v___y_3203_;
v___y_3148_ = v___x_3229_;
v___y_3149_ = v___y_3189_;
v___y_3150_ = v___y_3190_;
v_nextMacroScope_3151_ = v_nextMacroScope_3232_;
v_ngen_3152_ = v_ngen_3233_;
v_auxDeclNGen_3153_ = v_auxDeclNGen_3234_;
v_traceState_3154_ = v_traceState_3235_;
v_messages_3155_ = v_messages_3236_;
v_infoState_3156_ = v_infoState_3237_;
v_snapshotTasks_3157_ = v_snapshotTasks_3238_;
v___y_3158_ = v___y_3191_;
v___y_3159_ = v___y_3192_;
v___y_3160_ = v___y_3193_;
v___y_3161_ = v___y_3196_;
v___y_3162_ = v___y_3197_;
v___y_3163_ = v___y_3198_;
v___y_3164_ = v___y_3199_;
v___y_3165_ = v___y_3200_;
v___y_3166_ = v___y_3201_;
v___y_3167_ = v___x_3247_;
goto v___jp_3138_;
}
}
else
{
size_t v___x_3248_; size_t v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3248_ = ((size_t)0ULL);
v___x_3249_ = lean_usize_of_nat(v___x_3239_);
v___x_3250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3196_, v___x_3248_, v___x_3249_, v___x_2961_);
lean_inc_ref(v___y_3195_);
v___x_3251_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3195_, v_env_3231_, v___x_3250_);
v___y_3139_ = v___y_3181_;
v___y_3140_ = v___y_3182_;
v___y_3141_ = v___y_3183_;
v___y_3142_ = v___y_3184_;
v___y_3143_ = v___y_3185_;
v___y_3144_ = v___y_3186_;
v___y_3145_ = v___y_3187_;
v___y_3146_ = v___y_3188_;
v___y_3147_ = v___y_3203_;
v___y_3148_ = v___x_3229_;
v___y_3149_ = v___y_3189_;
v___y_3150_ = v___y_3190_;
v_nextMacroScope_3151_ = v_nextMacroScope_3232_;
v_ngen_3152_ = v_ngen_3233_;
v_auxDeclNGen_3153_ = v_auxDeclNGen_3234_;
v_traceState_3154_ = v_traceState_3235_;
v_messages_3155_ = v_messages_3236_;
v_infoState_3156_ = v_infoState_3237_;
v_snapshotTasks_3157_ = v_snapshotTasks_3238_;
v___y_3158_ = v___y_3191_;
v___y_3159_ = v___y_3192_;
v___y_3160_ = v___y_3193_;
v___y_3161_ = v___y_3196_;
v___y_3162_ = v___y_3197_;
v___y_3163_ = v___y_3198_;
v___y_3164_ = v___y_3199_;
v___y_3165_ = v___y_3200_;
v___y_3166_ = v___y_3201_;
v___y_3167_ = v___x_3251_;
goto v___jp_3138_;
}
}
}
}
}
}
}
v___jp_3258_:
{
if (v___y_3280_ == 0)
{
lean_object* v___x_3281_; lean_object* v_env_3282_; lean_object* v_nextMacroScope_3283_; lean_object* v_ngen_3284_; lean_object* v_auxDeclNGen_3285_; lean_object* v_traceState_3286_; lean_object* v_messages_3287_; lean_object* v_infoState_3288_; lean_object* v_snapshotTasks_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3298_; 
v___x_3281_ = lean_st_ref_take(v___y_3276_);
v_env_3282_ = lean_ctor_get(v___x_3281_, 0);
v_nextMacroScope_3283_ = lean_ctor_get(v___x_3281_, 1);
v_ngen_3284_ = lean_ctor_get(v___x_3281_, 2);
v_auxDeclNGen_3285_ = lean_ctor_get(v___x_3281_, 3);
v_traceState_3286_ = lean_ctor_get(v___x_3281_, 4);
v_messages_3287_ = lean_ctor_get(v___x_3281_, 6);
v_infoState_3288_ = lean_ctor_get(v___x_3281_, 7);
v_snapshotTasks_3289_ = lean_ctor_get(v___x_3281_, 8);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3298_ == 0)
{
lean_object* v_unused_3299_; 
v_unused_3299_ = lean_ctor_get(v___x_3281_, 5);
lean_dec(v_unused_3299_);
v___x_3291_ = v___x_3281_;
v_isShared_3292_ = v_isSharedCheck_3298_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_snapshotTasks_3289_);
lean_inc(v_infoState_3288_);
lean_inc(v_messages_3287_);
lean_inc(v_traceState_3286_);
lean_inc(v_auxDeclNGen_3285_);
lean_inc(v_ngen_3284_);
lean_inc(v_nextMacroScope_3283_);
lean_inc(v_env_3282_);
lean_dec(v___x_3281_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3298_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3293_; lean_object* v___x_3295_; 
v___x_3293_ = l_Lean_Kernel_enableDiag(v_env_3282_, v___y_3275_);
lean_inc_ref(v___y_3265_);
if (v_isShared_3292_ == 0)
{
lean_ctor_set(v___x_3291_, 5, v___y_3265_);
lean_ctor_set(v___x_3291_, 0, v___x_3293_);
v___x_3295_ = v___x_3291_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3293_);
lean_ctor_set(v_reuseFailAlloc_3297_, 1, v_nextMacroScope_3283_);
lean_ctor_set(v_reuseFailAlloc_3297_, 2, v_ngen_3284_);
lean_ctor_set(v_reuseFailAlloc_3297_, 3, v_auxDeclNGen_3285_);
lean_ctor_set(v_reuseFailAlloc_3297_, 4, v_traceState_3286_);
lean_ctor_set(v_reuseFailAlloc_3297_, 5, v___y_3265_);
lean_ctor_set(v_reuseFailAlloc_3297_, 6, v_messages_3287_);
lean_ctor_set(v_reuseFailAlloc_3297_, 7, v_infoState_3288_);
lean_ctor_set(v_reuseFailAlloc_3297_, 8, v_snapshotTasks_3289_);
v___x_3295_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_st_ref_put(v___y_3276_, v___x_3295_);
lean_inc(v___y_3276_);
v___y_3181_ = v___y_3266_;
v___y_3182_ = v___y_3268_;
v___y_3183_ = v___y_3261_;
v___y_3184_ = v___y_3262_;
v___y_3185_ = v___y_3264_;
v___y_3186_ = v___y_3271_;
v___y_3187_ = v___y_3272_;
v___y_3188_ = v___y_3265_;
v___y_3189_ = v___y_3259_;
v___y_3190_ = v___y_3260_;
v___y_3191_ = v___y_3274_;
v___y_3192_ = v___y_3263_;
v___y_3193_ = v___y_3265_;
v___y_3194_ = v___y_3275_;
v___y_3195_ = v___y_3267_;
v___y_3196_ = v___y_3269_;
v___y_3197_ = v___y_3270_;
v___y_3198_ = v___y_3276_;
v___y_3199_ = v___y_3277_;
v___y_3200_ = v___y_3278_;
v___y_3201_ = v___y_3279_;
v___y_3202_ = v___y_3273_;
v___y_3203_ = v___y_3276_;
goto v___jp_3180_;
}
}
}
else
{
lean_inc(v___y_3276_);
v___y_3181_ = v___y_3266_;
v___y_3182_ = v___y_3268_;
v___y_3183_ = v___y_3261_;
v___y_3184_ = v___y_3262_;
v___y_3185_ = v___y_3264_;
v___y_3186_ = v___y_3271_;
v___y_3187_ = v___y_3272_;
v___y_3188_ = v___y_3265_;
v___y_3189_ = v___y_3259_;
v___y_3190_ = v___y_3260_;
v___y_3191_ = v___y_3274_;
v___y_3192_ = v___y_3263_;
v___y_3193_ = v___y_3265_;
v___y_3194_ = v___y_3275_;
v___y_3195_ = v___y_3267_;
v___y_3196_ = v___y_3269_;
v___y_3197_ = v___y_3270_;
v___y_3198_ = v___y_3276_;
v___y_3199_ = v___y_3277_;
v___y_3200_ = v___y_3278_;
v___y_3201_ = v___y_3279_;
v___y_3202_ = v___y_3273_;
v___y_3203_ = v___y_3276_;
goto v___jp_3180_;
}
}
}
}
else
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3576_; 
lean_dec(v_importArts_2966_);
lean_dec(v_name_2965_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3569_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3571_ = v___x_2973_;
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_2973_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3574_; 
if (v_isShared_3572_ == 0)
{
v___x_3574_ = v___x_3571_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3569_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
return v___x_3574_;
}
}
}
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_del_object(v___x_2952_);
lean_dec(v_tail_2950_);
lean_dec(v_head_2949_);
lean_del_object(v___x_2947_);
lean_dec(v_head_2945_);
lean_del_object(v___x_2943_);
v_a_3578_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_2963_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_2963_);
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
}
}
}
else
{
lean_dec(v_tail_2940_);
lean_dec_ref_known(v_tail_2939_, 2);
lean_dec_ref_known(v_args_2914_, 2);
goto v___jp_2916_;
}
}
else
{
lean_dec(v_tail_2939_);
lean_dec_ref_known(v_args_2914_, 2);
goto v___jp_2916_;
}
}
else
{
lean_dec(v_args_2914_);
goto v___jp_2916_;
}
v___jp_2916_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = ((lean_object*)(l_main___closed__0));
v___x_2918_ = l_IO_println___at___00Lean_Environment_displayStats_spec__1(v___x_2917_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2926_; 
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; 
v_unused_2927_ = lean_ctor_get(v___x_2918_, 0);
lean_dec(v_unused_2927_);
v___x_2920_ = v___x_2918_;
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
else
{
lean_dec(v___x_2918_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2922_ = l_main___boxed__const__1;
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2922_);
v___x_2924_ = v___x_2920_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
v_a_2928_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2918_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2918_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
v___jp_2936_:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = l_main___boxed__const__2;
v___x_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
return v___x_2938_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_3591_, lean_object* v_a_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = _lean_main(v_args_3591_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_3594_, lean_object* v_as_x27_3595_, lean_object* v_b_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_3595_, v_b_3596_);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_3600_, lean_object* v_as_x27_3601_, lean_object* v_b_3602_, lean_object* v_a_3603_, lean_object* v___y_3604_){
_start:
{
lean_object* v_res_3605_; 
v_res_3605_ = l_List_forIn_x27_loop___at___00main_spec__1(v_as_3600_, v_as_x27_3601_, v_b_3602_, v_a_3603_);
lean_dec(v_as_x27_3601_);
lean_dec(v_as_3600_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16(lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(v___y_3607_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___boxed(lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16(v___y_3610_, v___y_3611_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17(lean_object* v_00_u03b2_3614_, lean_object* v_m_3615_, lean_object* v_a_3616_, lean_object* v_fallback_3617_){
_start:
{
lean_object* v___x_3618_; 
v___x_3618_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_m_3615_, v_a_3616_, v_fallback_3617_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___boxed(lean_object* v_00_u03b2_3619_, lean_object* v_m_3620_, lean_object* v_a_3621_, lean_object* v_fallback_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17(v_00_u03b2_3619_, v_m_3620_, v_a_3621_, v_fallback_3622_);
lean_dec(v_fallback_3622_);
lean_dec_ref(v_a_3621_);
lean_dec_ref(v_m_3620_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18(lean_object* v_00_u03b2_3624_, lean_object* v_m_3625_, lean_object* v_a_3626_, lean_object* v_b_3627_){
_start:
{
lean_object* v___x_3628_; 
v___x_3628_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_m_3625_, v_a_3626_, v_b_3627_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21(lean_object* v_n_3629_, lean_object* v_as_3630_, lean_object* v_lo_3631_, lean_object* v_hi_3632_, lean_object* v_w_3633_, lean_object* v_hlo_3634_, lean_object* v_hhi_3635_){
_start:
{
lean_object* v___x_3636_; 
v___x_3636_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v_n_3629_, v_as_3630_, v_lo_3631_, v_hi_3632_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___boxed(lean_object* v_n_3637_, lean_object* v_as_3638_, lean_object* v_lo_3639_, lean_object* v_hi_3640_, lean_object* v_w_3641_, lean_object* v_hlo_3642_, lean_object* v_hhi_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21(v_n_3637_, v_as_3638_, v_lo_3639_, v_hi_3640_, v_w_3641_, v_hlo_3642_, v_hhi_3643_);
lean_dec(v_hi_3640_);
lean_dec(v_n_3637_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21(lean_object* v_00_u03b2_3645_, lean_object* v_a_3646_, lean_object* v_fallback_3647_, lean_object* v_x_3648_){
_start:
{
lean_object* v___x_3649_; 
v___x_3649_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(v_a_3646_, v_fallback_3647_, v_x_3648_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___boxed(lean_object* v_00_u03b2_3650_, lean_object* v_a_3651_, lean_object* v_fallback_3652_, lean_object* v_x_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21(v_00_u03b2_3650_, v_a_3651_, v_fallback_3652_, v_x_3653_);
lean_dec(v_x_3653_);
lean_dec(v_fallback_3652_);
lean_dec_ref(v_a_3651_);
return v_res_3654_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23(lean_object* v_00_u03b2_3655_, lean_object* v_a_3656_, lean_object* v_x_3657_){
_start:
{
uint8_t v___x_3658_; 
v___x_3658_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(v_a_3656_, v_x_3657_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___boxed(lean_object* v_00_u03b2_3659_, lean_object* v_a_3660_, lean_object* v_x_3661_){
_start:
{
uint8_t v_res_3662_; lean_object* v_r_3663_; 
v_res_3662_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23(v_00_u03b2_3659_, v_a_3660_, v_x_3661_);
lean_dec(v_x_3661_);
lean_dec_ref(v_a_3660_);
v_r_3663_ = lean_box(v_res_3662_);
return v_r_3663_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24(lean_object* v_00_u03b2_3664_, lean_object* v_data_3665_){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(v_data_3665_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25(lean_object* v_00_u03b2_3667_, lean_object* v_a_3668_, lean_object* v_b_3669_, lean_object* v_x_3670_){
_start:
{
lean_object* v___x_3671_; 
v___x_3671_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(v_a_3668_, v_b_3669_, v_x_3670_);
return v___x_3671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31(lean_object* v_n_3672_, lean_object* v_lo_3673_, lean_object* v_hi_3674_, lean_object* v_hhi_3675_, lean_object* v_pivot_3676_, lean_object* v_as_3677_, lean_object* v_i_3678_, lean_object* v_k_3679_, lean_object* v_ilo_3680_, lean_object* v_ik_3681_, lean_object* v_w_3682_){
_start:
{
lean_object* v___x_3683_; 
v___x_3683_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(v_hi_3674_, v_pivot_3676_, v_as_3677_, v_i_3678_, v_k_3679_);
return v___x_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___boxed(lean_object* v_n_3684_, lean_object* v_lo_3685_, lean_object* v_hi_3686_, lean_object* v_hhi_3687_, lean_object* v_pivot_3688_, lean_object* v_as_3689_, lean_object* v_i_3690_, lean_object* v_k_3691_, lean_object* v_ilo_3692_, lean_object* v_ik_3693_, lean_object* v_w_3694_){
_start:
{
lean_object* v_res_3695_; 
v_res_3695_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31(v_n_3684_, v_lo_3685_, v_hi_3686_, v_hhi_3687_, v_pivot_3688_, v_as_3689_, v_i_3690_, v_k_3691_, v_ilo_3692_, v_ik_3693_, v_w_3694_);
lean_dec_ref(v_pivot_3688_);
lean_dec(v_hi_3686_);
lean_dec(v_lo_3685_);
lean_dec(v_n_3684_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40(lean_object* v_as_3696_, size_t v_sz_3697_, size_t v_i_3698_, lean_object* v_b_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_){
_start:
{
lean_object* v___x_3703_; 
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(v_as_3696_, v_sz_3697_, v_i_3698_, v_b_3699_, v___y_3700_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___boxed(lean_object* v_as_3704_, lean_object* v_sz_3705_, lean_object* v_i_3706_, lean_object* v_b_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_){
_start:
{
size_t v_sz_boxed_3711_; size_t v_i_boxed_3712_; lean_object* v_res_3713_; 
v_sz_boxed_3711_ = lean_unbox_usize(v_sz_3705_);
lean_dec(v_sz_3705_);
v_i_boxed_3712_ = lean_unbox_usize(v_i_3706_);
lean_dec(v_i_3706_);
v_res_3713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40(v_as_3704_, v_sz_boxed_3711_, v_i_boxed_3712_, v_b_3707_, v___y_3708_, v___y_3709_);
lean_dec(v___y_3709_);
lean_dec_ref(v___y_3708_);
lean_dec_ref(v_as_3704_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35(lean_object* v_00_u03b2_3714_, lean_object* v_i_3715_, lean_object* v_source_3716_, lean_object* v_target_3717_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(v_i_3715_, v_source_3716_, v_target_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42(uint8_t v___x_3719_, lean_object* v_as_3720_, size_t v_sz_3721_, size_t v_i_3722_, lean_object* v_b_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
lean_object* v___x_3727_; 
v___x_3727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(v___x_3719_, v_as_3720_, v_sz_3721_, v_i_3722_, v_b_3723_, v___y_3724_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___boxed(lean_object* v___x_3728_, lean_object* v_as_3729_, lean_object* v_sz_3730_, lean_object* v_i_3731_, lean_object* v_b_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
uint8_t v___x_40459__boxed_3736_; size_t v_sz_boxed_3737_; size_t v_i_boxed_3738_; lean_object* v_res_3739_; 
v___x_40459__boxed_3736_ = lean_unbox(v___x_3728_);
v_sz_boxed_3737_ = lean_unbox_usize(v_sz_3730_);
lean_dec(v_sz_3730_);
v_i_boxed_3738_ = lean_unbox_usize(v_i_3731_);
lean_dec(v_i_3731_);
v_res_3739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42(v___x_40459__boxed_3736_, v_as_3729_, v_sz_boxed_3737_, v_i_boxed_3738_, v_b_3732_, v___y_3733_, v___y_3734_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
lean_dec_ref(v_as_3729_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51(lean_object* v_as_3740_, size_t v_sz_3741_, size_t v_i_3742_, lean_object* v_b_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
lean_object* v___x_3747_; 
v___x_3747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(v_as_3740_, v_sz_3741_, v_i_3742_, v_b_3743_, v___y_3744_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___boxed(lean_object* v_as_3748_, lean_object* v_sz_3749_, lean_object* v_i_3750_, lean_object* v_b_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
size_t v_sz_boxed_3755_; size_t v_i_boxed_3756_; lean_object* v_res_3757_; 
v_sz_boxed_3755_ = lean_unbox_usize(v_sz_3749_);
lean_dec(v_sz_3749_);
v_i_boxed_3756_ = lean_unbox_usize(v_i_3750_);
lean_dec(v_i_3750_);
v_res_3757_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51(v_as_3748_, v_sz_boxed_3755_, v_i_boxed_3756_, v_b_3751_, v___y_3752_, v___y_3753_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec_ref(v_as_3748_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44(lean_object* v_00_u03b2_3758_, lean_object* v_x_3759_, lean_object* v_x_3760_){
_start:
{
lean_object* v___x_3761_; 
v___x_3761_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(v_x_3759_, v_x_3760_);
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49(uint8_t v___x_3762_, lean_object* v_as_3763_, size_t v_sz_3764_, size_t v_i_3765_, lean_object* v_b_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_){
_start:
{
lean_object* v___x_3770_; 
v___x_3770_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(v___x_3762_, v_as_3763_, v_sz_3764_, v_i_3765_, v_b_3766_, v___y_3767_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___boxed(lean_object* v___x_3771_, lean_object* v_as_3772_, lean_object* v_sz_3773_, lean_object* v_i_3774_, lean_object* v_b_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_){
_start:
{
uint8_t v___x_40490__boxed_3779_; size_t v_sz_boxed_3780_; size_t v_i_boxed_3781_; lean_object* v_res_3782_; 
v___x_40490__boxed_3779_ = lean_unbox(v___x_3771_);
v_sz_boxed_3780_ = lean_unbox_usize(v_sz_3773_);
lean_dec(v_sz_3773_);
v_i_boxed_3781_ = lean_unbox_usize(v_i_3774_);
lean_dec(v_i_3774_);
v_res_3782_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49(v___x_40490__boxed_3779_, v_as_3772_, v_sz_boxed_3780_, v_i_boxed_3781_, v_b_3775_, v___y_3776_, v___y_3777_);
lean_dec(v___y_3777_);
lean_dec_ref(v___y_3776_);
lean_dec_ref(v_as_3772_);
return v_res_3782_;
}
}
lean_object* runtime_initialize_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
l_main___boxed__const__2 = _init_l_main___boxed__const__2();
lean_mark_persistent(l_main___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Util_Path(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanIR(builtin);
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = runtime_initialize_LeanIR(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif

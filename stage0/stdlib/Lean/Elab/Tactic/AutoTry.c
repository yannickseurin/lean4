// Lean compiler output
// Module: Lean.Elab.Tactic.AutoTry
// Imports: import Init.Try import Lean.Linter.Basic import Lean.Server.InfoUtils import Lean.Elab.Tactic.Try import Lean.Elab.Tactic.Meta import Lean.Elab.BuiltinTerm
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Try_collectTryCoreSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isMaxRecDepth(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_ofPosition(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Elab_InfoTree_goalsAt_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_ppTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "autoTry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "onEmptyProof"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(246, 66, 211, 114, 249, 119, 53, 144)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "run `try\?` on empty proofs and empty subproofs and report any suggestions"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "AutoTry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__22_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__22_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tryOnEmptyBy"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(157, 147, 145, 244, 86, 29, 251, 255)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "deprecated alias for `autoTry.onEmptyProof`"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-06-29"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "use `autoTry.onEmptyProof` instead"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "onUnsolvedGoal"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 35, 177, 27, 37, 159, 95, 227)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "run `try\?` on each proof or subproof that left a goal unsolved and report any suggestions"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onSorry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(114, 120, 5, 251, 211, 194, 145, 174)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "run `try\?` on each `sorry` tactic and report any suggestions"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showEdits"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(20, 21, 81, 144, 12, 72, 243, 203)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(17, 28, 27, 160, 121, 115, 26, 139)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 155, .m_capacity = 155, .m_length = 154, .m_data = "if set, autoTry logs an info message per emitted suggestion showing the edit's source range and the literal replacement text (for testing the widget data)"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(163, 27, 117, 182, 216, 95, 83, 170)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2;
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticSorry"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticAdmit"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeqBracketed"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 55, 102, 232, 177, 170, 100, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 145, .m_capacity = 145, .m_length = 144, .m_data = "Tactic.unsolvedGoals message yielded no (msgCtx, namingCtx, goal) tuples; producer not following the `withContext`/`withNamingContext` contract\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "no tacticSeq body found for unsolved-goals message at "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "; unrecognised seq variant\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10_spec__12(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2_value;
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "try\? raised: "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "term elab raised: "};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 1, 0, 1, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4;
static const lean_array_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try these:"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try this: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "autoTry edit: insert "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " at +"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tryTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 128, 230, 128, 87, 180, 97, 21)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "try\?"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7;
static const lean_ctor_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "suppressed: InfoView at insert point does not show exactly one goal state with one goal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "trigger points: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " onSorry="};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " onUnsolved="};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "running: onEmpty="};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "skipping: command has non-unsolved-goal errors"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "autoTryHook"};
static const lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_box(0);
v___x_46_ = l_unsafeCast___redArg(v___x_45_);
return v___x_46_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_49_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_50_ = l_Lean_Name_str___override(v___x_49_, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_53_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_54_ = l_Lean_Name_str___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_57_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_58_ = l_Lean_Name_str___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_61_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_62_ = l_Lean_Name_str___override(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_65_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_66_ = l_Lean_Name_str___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__15_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_69_ = l_Lean_Name_num___override(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_71_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__16_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_72_ = l_Lean_Name_str___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_74_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__17_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_75_ = l_Lean_Name_str___override(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_77_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__18_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_78_ = l_Lean_Name_str___override(v___x_77_, v___x_76_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_80_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__19_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_81_ = l_Lean_Name_str___override(v___x_80_, v___x_79_);
return v___x_81_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_83_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_84_ = l_Lean_Name_str___override(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__22_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_86_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_87_ = l_Lean_Name_str___override(v___x_86_, v___x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_89_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_90_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_91_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__22_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__22_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__22_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_92_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_89_, v___x_90_, v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4____boxed(lean_object* v_a_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_();
return v_res_94_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_117_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_118_ = l_Lean_Name_str___override(v___x_117_, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_120_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_);
v___x_121_ = l_Lean_Name_str___override(v___x_120_, v___x_119_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_123_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_124_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_));
v___x_125_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_);
v___x_126_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_123_, v___x_124_, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4____boxed(lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_();
return v_res_128_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_));
v___x_140_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_141_ = l_Lean_Name_str___override(v___x_140_, v___x_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_));
v___x_144_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_));
v___x_145_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_);
v___x_146_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_143_, v___x_144_, v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4____boxed(lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_();
return v_res_148_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_));
v___x_160_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__21_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_161_ = l_Lean_Name_str___override(v___x_160_, v___x_159_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_));
v___x_164_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_));
v___x_165_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_);
v___x_166_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_163_, v___x_164_, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4____boxed(lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_();
return v_res_168_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_182_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_183_ = l_Lean_Name_str___override(v___x_182_, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_185_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_);
v___x_186_ = l_Lean_Name_str___override(v___x_185_, v___x_184_);
return v___x_186_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_188_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_);
v___x_189_ = l_Lean_Name_str___override(v___x_188_, v___x_187_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_191_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_192_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_));
v___x_193_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_);
v___x_194_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__spec__0(v___x_191_, v___x_192_, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4____boxed(lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_();
return v_res_196_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__1_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_201_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_202_ = l_Lean_Name_str___override(v___x_201_, v___x_200_);
return v___x_202_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__3_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_205_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__2_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_206_ = l_Lean_Name_str___override(v___x_205_, v___x_204_);
return v___x_206_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_208_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__4_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_209_ = l_Lean_Name_str___override(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_211_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_212_ = l_Lean_Name_str___override(v___x_211_, v___x_210_);
return v___x_212_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_214_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__6_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_215_ = l_Lean_Name_str___override(v___x_214_, v___x_213_);
return v___x_215_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_217_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__7_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_218_ = l_Lean_Name_str___override(v___x_217_, v___x_216_);
return v___x_218_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = lean_unsigned_to_nat(938150806u);
v___x_220_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_221_ = l_Lean_Name_num___override(v___x_220_, v___x_219_);
return v___x_221_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__10_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_224_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__9_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_225_ = l_Lean_Name_str___override(v___x_224_, v___x_223_);
return v___x_225_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_227_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_228_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__11_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_229_ = l_Lean_Name_str___override(v___x_228_, v___x_227_);
return v___x_229_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_unsigned_to_nat(2u);
v___x_231_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__13_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_232_ = l_Lean_Name_num___override(v___x_231_, v___x_230_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_234_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_235_ = 0;
v___x_236_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__14_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_);
v___x_237_ = l_Lean_registerTraceClass(v___x_234_, v___x_235_, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2____boxed(lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_();
return v_res_239_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(lean_object* v_opts_240_, lean_object* v_opt_241_){
_start:
{
lean_object* v_name_242_; lean_object* v_defValue_243_; lean_object* v_map_244_; lean_object* v___x_245_; 
v_name_242_ = lean_ctor_get(v_opt_241_, 0);
v_defValue_243_ = lean_ctor_get(v_opt_241_, 1);
v_map_244_ = lean_ctor_get(v_opts_240_, 0);
v___x_245_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_244_, v_name_242_);
if (lean_obj_tag(v___x_245_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = lean_unbox(v_defValue_243_);
return v___x_246_;
}
else
{
lean_object* v_val_247_; 
v_val_247_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_val_247_);
lean_dec_ref_known(v___x_245_, 1);
if (lean_obj_tag(v_val_247_) == 1)
{
uint8_t v_v_248_; 
v_v_248_ = lean_ctor_get_uint8(v_val_247_, 0);
lean_dec_ref_known(v_val_247_, 0);
return v_v_248_;
}
else
{
uint8_t v___x_249_; 
lean_dec(v_val_247_);
v___x_249_ = lean_unbox(v_defValue_243_);
return v___x_249_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0___boxed(lean_object* v_opts_250_, lean_object* v_opt_251_){
_start:
{
uint8_t v_res_252_; lean_object* v_r_253_; 
v_res_252_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_250_, v_opt_251_);
lean_dec_ref(v_opt_251_);
lean_dec_ref(v_opts_250_);
v_r_253_ = lean_box(v_res_252_);
return v_r_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(lean_object* v_opts_254_, lean_object* v_opt_255_){
_start:
{
lean_object* v_name_256_; lean_object* v_defValue_257_; lean_object* v_map_258_; lean_object* v___x_259_; 
v_name_256_ = lean_ctor_get(v_opt_255_, 0);
v_defValue_257_ = lean_ctor_get(v_opt_255_, 1);
v_map_258_ = lean_ctor_get(v_opts_254_, 0);
v___x_259_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_258_, v_name_256_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_inc(v_defValue_257_);
return v_defValue_257_;
}
else
{
lean_object* v_val_260_; 
v_val_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_val_260_);
lean_dec_ref_known(v___x_259_, 1);
if (lean_obj_tag(v_val_260_) == 3)
{
lean_object* v_v_261_; 
v_v_261_ = lean_ctor_get(v_val_260_, 0);
lean_inc(v_v_261_);
lean_dec_ref_known(v_val_260_, 1);
return v_v_261_;
}
else
{
lean_dec(v_val_260_);
lean_inc(v_defValue_257_);
return v_defValue_257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1___boxed(lean_object* v_opts_262_, lean_object* v_opt_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(v_opts_262_, v_opt_263_);
lean_dec_ref(v_opt_263_);
lean_dec_ref(v_opts_262_);
return v_res_264_;
}
}
static uint64_t _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1(void){
_start:
{
lean_object* v___x_271_; uint64_t v___x_272_; 
v___x_271_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0));
v___x_272_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_271_);
return v___x_272_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2(void){
_start:
{
uint64_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_uint64_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__1);
v___x_274_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__0));
v___x_275_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set_uint64(v___x_275_, sizeof(void*)*1, v___x_273_);
return v___x_275_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_278_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_282_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
lean_ctor_set(v___x_282_, 2, v___x_281_);
lean_ctor_set(v___x_282_, 3, v___x_281_);
lean_ctor_set(v___x_282_, 4, v___x_281_);
lean_ctor_set(v___x_282_, 5, v___x_281_);
return v___x_282_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = lean_unsigned_to_nat(32u);
v___x_284_ = lean_mk_empty_array_with_capacity(v___x_283_);
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8(void){
_start:
{
size_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_286_ = ((size_t)5ULL);
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = lean_unsigned_to_nat(32u);
v___x_289_ = lean_mk_empty_array_with_capacity(v___x_288_);
v___x_290_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__7);
v___x_291_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_289_);
lean_ctor_set(v___x_291_, 2, v___x_287_);
lean_ctor_set(v___x_291_, 3, v___x_287_);
lean_ctor_set_usize(v___x_291_, 4, v___x_286_);
return v___x_291_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
lean_ctor_set(v___x_293_, 2, v___x_292_);
lean_ctor_set(v___x_293_, 3, v___x_292_);
lean_ctor_set(v___x_293_, 4, v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = l_Lean_Options_empty;
v___x_295_ = l_Lean_Core_getMaxHeartbeats(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_unsigned_to_nat(1u);
v___x_297_ = l_Lean_firstFrontendMacroScope;
v___x_298_ = lean_nat_add(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_305_ = lean_box(0);
v___x_306_ = lean_unsigned_to_nat(1u);
v___x_307_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_308_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___x_306_);
lean_ctor_set(v___x_308_, 2, v___x_305_);
return v___x_308_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16(void){
_start:
{
lean_object* v___x_309_; uint64_t v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8);
v___x_310_ = 0ULL;
v___x_311_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_311_, 0, v___x_309_);
lean_ctor_set_uint64(v___x_311_, sizeof(void*)*1, v___x_310_);
return v___x_311_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = l_Lean_NameSet_empty;
v___x_315_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8);
v___x_316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_ctor_set(v___x_316_, 2, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; lean_object* v___x_320_; 
v___x_317_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8);
v___x_318_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__5);
v___x_319_ = 1;
v___x_320_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set(v___x_320_, 1, v___x_318_);
lean_ctor_set(v___x_320_, 2, v___x_317_);
lean_ctor_set_uint8(v___x_320_, sizeof(void*)*3, v___x_319_);
return v___x_320_;
}
}
static uint8_t _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_324_ = l_Lean_diagnostics;
v___x_325_ = l_Lean_Options_empty;
v___x_326_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v___x_325_, v___x_324_);
return v___x_326_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = l_Lean_maxRecDepth;
v___x_328_ = l_Lean_Options_empty;
v___x_329_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(v___x_328_, v___x_327_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(lean_object* v_env_330_, lean_object* v_mctx_331_, lean_object* v_lctx_332_, lean_object* v_opts_333_, lean_object* v_namingCtx_334_, lean_object* v_x_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_fileName_351_; lean_object* v_fileMap_352_; lean_object* v_ref_353_; lean_object* v_cancelTk_x3f_354_; lean_object* v_a_356_; lean_object* v_a_363_; lean_object* v_currNamespace_365_; lean_object* v_openDecls_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___y_384_; uint8_t v___y_385_; lean_object* v_fileName_386_; lean_object* v_fileMap_387_; lean_object* v_currNamespace_388_; lean_object* v_openDecls_389_; lean_object* v_initHeartbeats_390_; lean_object* v_maxHeartbeats_391_; lean_object* v_quotContext_392_; lean_object* v_currMacroScope_393_; lean_object* v_cancelTk_x3f_394_; lean_object* v_inheritedTraceOptions_395_; lean_object* v_currRecDepth_396_; lean_object* v_ref_397_; uint8_t v_suppressElabErrors_398_; lean_object* v___y_399_; lean_object* v___y_468_; uint8_t v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_487_; lean_object* v___y_488_; uint8_t v___y_489_; lean_object* v___y_490_; uint8_t v___y_491_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; lean_object* v___y_516_; lean_object* v___x_525_; uint8_t v___y_527_; lean_object* v_env_547_; uint8_t v___x_548_; 
v___x_339_ = lean_box(1);
v___x_340_ = 0;
v___x_341_ = l_Lean_Environment_setExporting(v_env_330_, v___x_340_);
v___x_342_ = 1;
v___x_343_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__2);
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__3));
v___x_346_ = lean_box(0);
v___x_347_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_347_, 0, v___x_343_);
lean_ctor_set(v___x_347_, 1, v___x_339_);
lean_ctor_set(v___x_347_, 2, v_lctx_332_);
lean_ctor_set(v___x_347_, 3, v___x_345_);
lean_ctor_set(v___x_347_, 4, v___x_346_);
lean_ctor_set(v___x_347_, 5, v___x_344_);
lean_ctor_set(v___x_347_, 6, v___x_346_);
lean_ctor_set_uint8(v___x_347_, sizeof(void*)*7, v___x_340_);
lean_ctor_set_uint8(v___x_347_, sizeof(void*)*7 + 1, v___x_340_);
lean_ctor_set_uint8(v___x_347_, sizeof(void*)*7 + 2, v___x_340_);
lean_ctor_set_uint8(v___x_347_, sizeof(void*)*7 + 3, v___x_342_);
v___x_348_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__6);
v___x_349_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__8);
v___x_350_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__9);
v_fileName_351_ = lean_ctor_get(v_a_336_, 0);
v_fileMap_352_ = lean_ctor_get(v_a_336_, 1);
v_ref_353_ = lean_ctor_get(v_a_336_, 7);
v_cancelTk_x3f_354_ = lean_ctor_get(v_a_336_, 9);
v_currNamespace_365_ = lean_ctor_get(v_namingCtx_334_, 0);
lean_inc(v_currNamespace_365_);
v_openDecls_366_ = lean_ctor_get(v_namingCtx_334_, 1);
lean_inc(v_openDecls_366_);
lean_dec_ref(v_namingCtx_334_);
v___x_367_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_367_, 0, v_mctx_331_);
lean_ctor_set(v___x_367_, 1, v___x_348_);
lean_ctor_set(v___x_367_, 2, v___x_339_);
lean_ctor_set(v___x_367_, 3, v___x_349_);
lean_ctor_set(v___x_367_, 4, v___x_350_);
v___x_368_ = l_Lean_Options_empty;
v___x_369_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__10);
v___x_370_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_371_ = l_Lean_firstFrontendMacroScope;
v___x_372_ = lean_box(0);
v___x_373_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__11);
v___x_374_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__14));
v___x_375_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__15);
v___x_376_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__16);
v___x_377_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__17);
v___x_378_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__18);
v___x_379_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__19);
v___x_380_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_380_, 0, v___x_341_);
lean_ctor_set(v___x_380_, 1, v___x_373_);
lean_ctor_set(v___x_380_, 2, v___x_374_);
lean_ctor_set(v___x_380_, 3, v___x_375_);
lean_ctor_set(v___x_380_, 4, v___x_376_);
lean_ctor_set(v___x_380_, 5, v___x_377_);
lean_ctor_set(v___x_380_, 6, v___x_378_);
lean_ctor_set(v___x_380_, 7, v___x_379_);
lean_ctor_set(v___x_380_, 8, v___x_345_);
v___x_381_ = lean_io_get_num_heartbeats();
v___x_382_ = lean_st_mk_ref(v___x_380_);
v___x_511_ = l_Lean_inheritedTraceOptions;
v___x_512_ = lean_st_ref_get(v___x_511_);
v___x_513_ = l_Lean_diagnostics;
v___x_514_ = lean_uint8_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__23);
v___x_525_ = lean_st_ref_get(v___x_382_);
v_env_547_ = lean_ctor_get(v___x_525_, 0);
lean_inc_ref(v_env_547_);
lean_dec(v___x_525_);
v___x_548_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_547_);
lean_dec_ref(v_env_547_);
if (v___x_514_ == 0)
{
if (v___x_548_ == 0)
{
lean_inc(v___x_382_);
v___y_516_ = v___x_382_;
goto v___jp_515_;
}
else
{
v___y_527_ = v___x_514_;
goto v___jp_526_;
}
}
else
{
v___y_527_ = v___x_548_;
goto v___jp_526_;
}
v___jp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_357_ = lean_io_error_to_string(v_a_356_);
v___x_358_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
v___x_359_ = l_Lean_MessageData_ofFormat(v___x_358_);
lean_inc(v_ref_353_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v_ref_353_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
v___jp_362_:
{
lean_object* v___x_364_; 
v___x_364_ = lean_mk_io_user_error(v_a_363_);
v_a_356_ = v___x_364_;
goto v___jp_355_;
}
v___jp_383_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_400_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__1(v_opts_333_, v___y_384_);
v___x_401_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_401_, 0, v_fileName_386_);
lean_ctor_set(v___x_401_, 1, v_fileMap_387_);
lean_ctor_set(v___x_401_, 2, v_opts_333_);
lean_ctor_set(v___x_401_, 3, v___x_400_);
lean_ctor_set(v___x_401_, 4, v_currNamespace_388_);
lean_ctor_set(v___x_401_, 5, v_openDecls_389_);
lean_ctor_set(v___x_401_, 6, v_initHeartbeats_390_);
lean_ctor_set(v___x_401_, 7, v_maxHeartbeats_391_);
lean_ctor_set(v___x_401_, 8, v_quotContext_392_);
lean_ctor_set(v___x_401_, 9, v_currMacroScope_393_);
lean_ctor_set(v___x_401_, 10, v_cancelTk_x3f_394_);
lean_ctor_set(v___x_401_, 11, v_inheritedTraceOptions_395_);
v___x_402_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v_currRecDepth_396_);
lean_ctor_set(v___x_402_, 2, v_ref_397_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*3, v___y_385_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*3 + 1, v_suppressElabErrors_398_);
v___x_403_ = lean_st_mk_ref(v___x_367_);
lean_inc(v___x_403_);
v___x_404_ = lean_apply_5(v_x_335_, v___x_347_, v___x_403_, v___x_402_, v___y_399_, lean_box(0));
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_451_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_451_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_451_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_451_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v_traceState_412_; lean_object* v_traceState_413_; lean_object* v_env_414_; lean_object* v_messages_415_; lean_object* v_scopes_416_; lean_object* v_usedQuotCtxts_417_; lean_object* v_nextMacroScope_418_; lean_object* v_maxRecDepth_419_; lean_object* v_ngen_420_; lean_object* v_auxDeclNGen_421_; lean_object* v_infoState_422_; lean_object* v_snapshotTasks_423_; lean_object* v_prevLinterStates_424_; lean_object* v_codeQualityEntryTasks_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_449_; 
v___x_409_ = lean_st_ref_get(v___x_403_);
lean_dec(v___x_403_);
lean_dec(v___x_409_);
v___x_410_ = lean_st_ref_get(v___x_382_);
lean_dec(v___x_382_);
v___x_411_ = lean_st_ref_take(v_a_337_);
v_traceState_412_ = lean_ctor_get(v___x_411_, 9);
lean_inc_ref(v_traceState_412_);
v_traceState_413_ = lean_ctor_get(v___x_410_, 4);
lean_inc_ref(v_traceState_413_);
v_env_414_ = lean_ctor_get(v___x_411_, 0);
v_messages_415_ = lean_ctor_get(v___x_411_, 1);
v_scopes_416_ = lean_ctor_get(v___x_411_, 2);
v_usedQuotCtxts_417_ = lean_ctor_get(v___x_411_, 3);
v_nextMacroScope_418_ = lean_ctor_get(v___x_411_, 4);
v_maxRecDepth_419_ = lean_ctor_get(v___x_411_, 5);
v_ngen_420_ = lean_ctor_get(v___x_411_, 6);
v_auxDeclNGen_421_ = lean_ctor_get(v___x_411_, 7);
v_infoState_422_ = lean_ctor_get(v___x_411_, 8);
v_snapshotTasks_423_ = lean_ctor_get(v___x_411_, 10);
v_prevLinterStates_424_ = lean_ctor_get(v___x_411_, 11);
v_codeQualityEntryTasks_425_ = lean_ctor_get(v___x_411_, 12);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_449_ == 0)
{
lean_object* v_unused_450_; 
v_unused_450_ = lean_ctor_get(v___x_411_, 9);
lean_dec(v_unused_450_);
v___x_427_ = v___x_411_;
v_isShared_428_ = v_isSharedCheck_449_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_codeQualityEntryTasks_425_);
lean_inc(v_prevLinterStates_424_);
lean_inc(v_snapshotTasks_423_);
lean_inc(v_infoState_422_);
lean_inc(v_auxDeclNGen_421_);
lean_inc(v_ngen_420_);
lean_inc(v_maxRecDepth_419_);
lean_inc(v_nextMacroScope_418_);
lean_inc(v_usedQuotCtxts_417_);
lean_inc(v_scopes_416_);
lean_inc(v_messages_415_);
lean_inc(v_env_414_);
lean_dec(v___x_411_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_449_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v_messages_429_; uint64_t v_tid_430_; lean_object* v_traces_431_; lean_object* v_traces_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_448_; 
v_messages_429_ = lean_ctor_get(v___x_410_, 6);
lean_inc_ref(v_messages_429_);
lean_dec(v___x_410_);
v_tid_430_ = lean_ctor_get_uint64(v_traceState_412_, sizeof(void*)*1);
v_traces_431_ = lean_ctor_get(v_traceState_412_, 0);
lean_inc_ref(v_traces_431_);
lean_dec_ref(v_traceState_412_);
v_traces_432_ = lean_ctor_get(v_traceState_413_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v_traceState_413_);
if (v_isSharedCheck_448_ == 0)
{
v___x_434_ = v_traceState_413_;
v_isShared_435_ = v_isSharedCheck_448_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_traces_432_);
lean_dec(v_traceState_413_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_448_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_436_ = l_Lean_MessageLog_append(v_messages_415_, v_messages_429_);
v___x_437_ = l_Lean_PersistentArray_append___redArg(v_traces_431_, v_traces_432_);
lean_dec_ref(v_traces_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_437_);
v___x_439_ = v___x_434_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_437_);
v___x_439_ = v_reuseFailAlloc_447_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_441_; 
lean_ctor_set_uint64(v___x_439_, sizeof(void*)*1, v_tid_430_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 9, v___x_439_);
lean_ctor_set(v___x_427_, 1, v___x_436_);
v___x_441_ = v___x_427_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_env_414_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_446_, 2, v_scopes_416_);
lean_ctor_set(v_reuseFailAlloc_446_, 3, v_usedQuotCtxts_417_);
lean_ctor_set(v_reuseFailAlloc_446_, 4, v_nextMacroScope_418_);
lean_ctor_set(v_reuseFailAlloc_446_, 5, v_maxRecDepth_419_);
lean_ctor_set(v_reuseFailAlloc_446_, 6, v_ngen_420_);
lean_ctor_set(v_reuseFailAlloc_446_, 7, v_auxDeclNGen_421_);
lean_ctor_set(v_reuseFailAlloc_446_, 8, v_infoState_422_);
lean_ctor_set(v_reuseFailAlloc_446_, 9, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_446_, 10, v_snapshotTasks_423_);
lean_ctor_set(v_reuseFailAlloc_446_, 11, v_prevLinterStates_424_);
lean_ctor_set(v_reuseFailAlloc_446_, 12, v_codeQualityEntryTasks_425_);
v___x_441_ = v_reuseFailAlloc_446_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_442_ = lean_st_ref_put(v_a_337_, v___x_441_);
if (v_isShared_408_ == 0)
{
v___x_444_ = v___x_407_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_405_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_452_; 
lean_dec(v___x_403_);
lean_dec(v___x_382_);
v_a_452_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_452_);
lean_dec_ref_known(v___x_404_, 1);
if (lean_obj_tag(v_a_452_) == 0)
{
lean_object* v_msg_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v_msg_453_ = lean_ctor_get(v_a_452_, 1);
lean_inc_ref(v_msg_453_);
lean_dec_ref_known(v_a_452_, 2);
v___x_454_ = l_Lean_MessageData_toString(v_msg_453_);
v___x_455_ = lean_mk_io_user_error(v___x_454_);
v_a_356_ = v___x_455_;
goto v___jp_355_;
}
else
{
lean_object* v_id_456_; lean_object* v___x_457_; 
v_id_456_ = lean_ctor_get(v_a_452_, 0);
lean_inc(v_id_456_);
lean_dec_ref_known(v_a_452_, 2);
v___x_457_ = l_Lean_InternalExceptionId_getName(v_id_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
lean_dec(v_id_456_);
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
lean_dec_ref_known(v___x_457_, 1);
v___x_459_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__20));
v___x_460_ = l_Lean_Name_toString(v_a_458_, v___x_342_);
v___x_461_ = lean_string_append(v___x_459_, v___x_460_);
lean_dec_ref(v___x_460_);
v_a_363_ = v___x_461_;
goto v___jp_362_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref_known(v___x_457_, 1);
v___x_462_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__21));
v___x_463_ = l_Nat_reprFast(v_id_456_);
v___x_464_ = lean_string_append(v___x_462_, v___x_463_);
lean_dec_ref(v___x_463_);
v___x_465_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__22));
v___x_466_ = lean_string_append(v___x_464_, v___x_465_);
v_a_363_ = v___x_466_;
goto v___jp_362_;
}
}
}
}
v___jp_467_:
{
lean_object* v_toCold_472_; lean_object* v_currRecDepth_473_; lean_object* v_ref_474_; uint8_t v_suppressElabErrors_475_; lean_object* v_fileName_476_; lean_object* v_fileMap_477_; lean_object* v_currNamespace_478_; lean_object* v_openDecls_479_; lean_object* v_initHeartbeats_480_; lean_object* v_maxHeartbeats_481_; lean_object* v_quotContext_482_; lean_object* v_currMacroScope_483_; lean_object* v_cancelTk_x3f_484_; lean_object* v_inheritedTraceOptions_485_; 
v_toCold_472_ = lean_ctor_get(v___y_470_, 0);
lean_inc_ref(v_toCold_472_);
v_currRecDepth_473_ = lean_ctor_get(v___y_470_, 1);
lean_inc(v_currRecDepth_473_);
v_ref_474_ = lean_ctor_get(v___y_470_, 2);
lean_inc(v_ref_474_);
v_suppressElabErrors_475_ = lean_ctor_get_uint8(v___y_470_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_470_);
v_fileName_476_ = lean_ctor_get(v_toCold_472_, 0);
lean_inc_ref(v_fileName_476_);
v_fileMap_477_ = lean_ctor_get(v_toCold_472_, 1);
lean_inc_ref(v_fileMap_477_);
v_currNamespace_478_ = lean_ctor_get(v_toCold_472_, 4);
lean_inc(v_currNamespace_478_);
v_openDecls_479_ = lean_ctor_get(v_toCold_472_, 5);
lean_inc(v_openDecls_479_);
v_initHeartbeats_480_ = lean_ctor_get(v_toCold_472_, 6);
lean_inc(v_initHeartbeats_480_);
v_maxHeartbeats_481_ = lean_ctor_get(v_toCold_472_, 7);
lean_inc(v_maxHeartbeats_481_);
v_quotContext_482_ = lean_ctor_get(v_toCold_472_, 8);
lean_inc(v_quotContext_482_);
v_currMacroScope_483_ = lean_ctor_get(v_toCold_472_, 9);
lean_inc(v_currMacroScope_483_);
v_cancelTk_x3f_484_ = lean_ctor_get(v_toCold_472_, 10);
lean_inc(v_cancelTk_x3f_484_);
v_inheritedTraceOptions_485_ = lean_ctor_get(v_toCold_472_, 11);
lean_inc_ref(v_inheritedTraceOptions_485_);
lean_dec_ref(v_toCold_472_);
v___y_384_ = v___y_468_;
v___y_385_ = v___y_469_;
v_fileName_386_ = v_fileName_476_;
v_fileMap_387_ = v_fileMap_477_;
v_currNamespace_388_ = v_currNamespace_478_;
v_openDecls_389_ = v_openDecls_479_;
v_initHeartbeats_390_ = v_initHeartbeats_480_;
v_maxHeartbeats_391_ = v_maxHeartbeats_481_;
v_quotContext_392_ = v_quotContext_482_;
v_currMacroScope_393_ = v_currMacroScope_483_;
v_cancelTk_x3f_394_ = v_cancelTk_x3f_484_;
v_inheritedTraceOptions_395_ = v_inheritedTraceOptions_485_;
v_currRecDepth_396_ = v_currRecDepth_473_;
v_ref_397_ = v_ref_474_;
v_suppressElabErrors_398_ = v_suppressElabErrors_475_;
v___y_399_ = v___y_471_;
goto v___jp_383_;
}
v___jp_486_:
{
if (v___y_491_ == 0)
{
lean_object* v___x_492_; lean_object* v_env_493_; lean_object* v_nextMacroScope_494_; lean_object* v_ngen_495_; lean_object* v_auxDeclNGen_496_; lean_object* v_traceState_497_; lean_object* v_messages_498_; lean_object* v_infoState_499_; lean_object* v_snapshotTasks_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_509_; 
v___x_492_ = lean_st_ref_take(v___y_488_);
v_env_493_ = lean_ctor_get(v___x_492_, 0);
v_nextMacroScope_494_ = lean_ctor_get(v___x_492_, 1);
v_ngen_495_ = lean_ctor_get(v___x_492_, 2);
v_auxDeclNGen_496_ = lean_ctor_get(v___x_492_, 3);
v_traceState_497_ = lean_ctor_get(v___x_492_, 4);
v_messages_498_ = lean_ctor_get(v___x_492_, 6);
v_infoState_499_ = lean_ctor_get(v___x_492_, 7);
v_snapshotTasks_500_ = lean_ctor_get(v___x_492_, 8);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v___x_492_, 5);
lean_dec(v_unused_510_);
v___x_502_ = v___x_492_;
v_isShared_503_ = v_isSharedCheck_509_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_snapshotTasks_500_);
lean_inc(v_infoState_499_);
lean_inc(v_messages_498_);
lean_inc(v_traceState_497_);
lean_inc(v_auxDeclNGen_496_);
lean_inc(v_ngen_495_);
lean_inc(v_nextMacroScope_494_);
lean_inc(v_env_493_);
lean_dec(v___x_492_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_509_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_504_ = l_Lean_Kernel_enableDiag(v_env_493_, v___y_489_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 5, v___x_377_);
lean_ctor_set(v___x_502_, 0, v___x_504_);
v___x_506_ = v___x_502_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_nextMacroScope_494_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_ngen_495_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_auxDeclNGen_496_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_traceState_497_);
lean_ctor_set(v_reuseFailAlloc_508_, 5, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_508_, 6, v_messages_498_);
lean_ctor_set(v_reuseFailAlloc_508_, 7, v_infoState_499_);
lean_ctor_set(v_reuseFailAlloc_508_, 8, v_snapshotTasks_500_);
v___x_506_ = v_reuseFailAlloc_508_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_507_; 
v___x_507_ = lean_st_ref_put(v___y_488_, v___x_506_);
v___y_468_ = v___y_487_;
v___y_469_ = v___y_489_;
v___y_470_ = v___y_490_;
v___y_471_ = v___y_488_;
goto v___jp_467_;
}
}
}
else
{
v___y_468_ = v___y_487_;
v___y_469_ = v___y_489_;
v___y_470_ = v___y_490_;
v___y_471_ = v___y_488_;
goto v___jp_467_;
}
}
v___jp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; lean_object* v___x_522_; lean_object* v_env_523_; uint8_t v___x_524_; 
v___x_517_ = l_Lean_maxRecDepth;
v___x_518_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__24);
lean_inc(v___x_512_);
lean_inc(v_cancelTk_x3f_354_);
lean_inc(v___x_381_);
lean_inc(v_openDecls_366_);
lean_inc(v_currNamespace_365_);
lean_inc_ref(v_fileMap_352_);
lean_inc_ref(v_fileName_351_);
v___x_519_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_519_, 0, v_fileName_351_);
lean_ctor_set(v___x_519_, 1, v_fileMap_352_);
lean_ctor_set(v___x_519_, 2, v___x_368_);
lean_ctor_set(v___x_519_, 3, v___x_518_);
lean_ctor_set(v___x_519_, 4, v_currNamespace_365_);
lean_ctor_set(v___x_519_, 5, v_openDecls_366_);
lean_ctor_set(v___x_519_, 6, v___x_381_);
lean_ctor_set(v___x_519_, 7, v___x_369_);
lean_ctor_set(v___x_519_, 8, v___x_370_);
lean_ctor_set(v___x_519_, 9, v___x_371_);
lean_ctor_set(v___x_519_, 10, v_cancelTk_x3f_354_);
lean_ctor_set(v___x_519_, 11, v___x_512_);
v___x_520_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_520_, 0, v___x_519_);
lean_ctor_set(v___x_520_, 1, v___x_344_);
lean_ctor_set(v___x_520_, 2, v___x_372_);
lean_ctor_set_uint8(v___x_520_, sizeof(void*)*3, v___x_514_);
lean_ctor_set_uint8(v___x_520_, sizeof(void*)*3 + 1, v___x_340_);
v___x_521_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_333_, v___x_513_);
v___x_522_ = lean_st_ref_get(v___y_516_);
v_env_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc_ref(v_env_523_);
lean_dec(v___x_522_);
v___x_524_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_523_);
lean_dec_ref(v_env_523_);
if (v___x_521_ == 0)
{
if (v___x_524_ == 0)
{
lean_dec_ref_known(v___x_520_, 3);
lean_inc(v_cancelTk_x3f_354_);
lean_inc_ref(v_fileMap_352_);
lean_inc_ref(v_fileName_351_);
v___y_384_ = v___x_517_;
v___y_385_ = v___x_521_;
v_fileName_386_ = v_fileName_351_;
v_fileMap_387_ = v_fileMap_352_;
v_currNamespace_388_ = v_currNamespace_365_;
v_openDecls_389_ = v_openDecls_366_;
v_initHeartbeats_390_ = v___x_381_;
v_maxHeartbeats_391_ = v___x_369_;
v_quotContext_392_ = v___x_370_;
v_currMacroScope_393_ = v___x_371_;
v_cancelTk_x3f_394_ = v_cancelTk_x3f_354_;
v_inheritedTraceOptions_395_ = v___x_512_;
v_currRecDepth_396_ = v___x_344_;
v_ref_397_ = v___x_372_;
v_suppressElabErrors_398_ = v___x_340_;
v___y_399_ = v___y_516_;
goto v___jp_383_;
}
else
{
lean_dec(v___x_512_);
lean_dec(v___x_381_);
lean_dec(v_openDecls_366_);
lean_dec(v_currNamespace_365_);
v___y_487_ = v___x_517_;
v___y_488_ = v___y_516_;
v___y_489_ = v___x_521_;
v___y_490_ = v___x_520_;
v___y_491_ = v___x_521_;
goto v___jp_486_;
}
}
else
{
lean_dec(v___x_512_);
lean_dec(v___x_381_);
lean_dec(v_openDecls_366_);
lean_dec(v_currNamespace_365_);
v___y_487_ = v___x_517_;
v___y_488_ = v___y_516_;
v___y_489_ = v___x_521_;
v___y_490_ = v___x_520_;
v___y_491_ = v___x_524_;
goto v___jp_486_;
}
}
v___jp_526_:
{
if (v___y_527_ == 0)
{
lean_object* v___x_528_; lean_object* v_env_529_; lean_object* v_nextMacroScope_530_; lean_object* v_ngen_531_; lean_object* v_auxDeclNGen_532_; lean_object* v_traceState_533_; lean_object* v_messages_534_; lean_object* v_infoState_535_; lean_object* v_snapshotTasks_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_545_; 
v___x_528_ = lean_st_ref_take(v___x_382_);
v_env_529_ = lean_ctor_get(v___x_528_, 0);
v_nextMacroScope_530_ = lean_ctor_get(v___x_528_, 1);
v_ngen_531_ = lean_ctor_get(v___x_528_, 2);
v_auxDeclNGen_532_ = lean_ctor_get(v___x_528_, 3);
v_traceState_533_ = lean_ctor_get(v___x_528_, 4);
v_messages_534_ = lean_ctor_get(v___x_528_, 6);
v_infoState_535_ = lean_ctor_get(v___x_528_, 7);
v_snapshotTasks_536_ = lean_ctor_get(v___x_528_, 8);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v___x_528_, 5);
lean_dec(v_unused_546_);
v___x_538_ = v___x_528_;
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snapshotTasks_536_);
lean_inc(v_infoState_535_);
lean_inc(v_messages_534_);
lean_inc(v_traceState_533_);
lean_inc(v_auxDeclNGen_532_);
lean_inc(v_ngen_531_);
lean_inc(v_nextMacroScope_530_);
lean_inc(v_env_529_);
lean_dec(v___x_528_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_540_ = l_Lean_Kernel_enableDiag(v_env_529_, v___x_514_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 5, v___x_377_);
lean_ctor_set(v___x_538_, 0, v___x_540_);
v___x_542_ = v___x_538_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_540_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_nextMacroScope_530_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_ngen_531_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_auxDeclNGen_532_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v_traceState_533_);
lean_ctor_set(v_reuseFailAlloc_544_, 5, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_544_, 6, v_messages_534_);
lean_ctor_set(v_reuseFailAlloc_544_, 7, v_infoState_535_);
lean_ctor_set(v_reuseFailAlloc_544_, 8, v_snapshotTasks_536_);
v___x_542_ = v_reuseFailAlloc_544_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; 
v___x_543_ = lean_st_ref_put(v___x_382_, v___x_542_);
lean_inc(v___x_382_);
v___y_516_ = v___x_382_;
goto v___jp_515_;
}
}
}
else
{
lean_inc(v___x_382_);
v___y_516_ = v___x_382_;
goto v___jp_515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___boxed(lean_object* v_env_549_, lean_object* v_mctx_550_, lean_object* v_lctx_551_, lean_object* v_opts_552_, lean_object* v_namingCtx_553_, lean_object* v_x_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_549_, v_mctx_550_, v_lctx_551_, v_opts_552_, v_namingCtx_553_, v_x_554_, v_a_555_, v_a_556_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope(lean_object* v_00_u03b1_559_, lean_object* v_env_560_, lean_object* v_mctx_561_, lean_object* v_lctx_562_, lean_object* v_opts_563_, lean_object* v_namingCtx_564_, lean_object* v_x_565_, lean_object* v_a_566_, lean_object* v_a_567_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_560_, v_mctx_561_, v_lctx_562_, v_opts_563_, v_namingCtx_564_, v_x_565_, v_a_566_, v_a_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___boxed(lean_object* v_00_u03b1_570_, lean_object* v_env_571_, lean_object* v_mctx_572_, lean_object* v_lctx_573_, lean_object* v_opts_574_, lean_object* v_namingCtx_575_, lean_object* v_x_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope(v_00_u03b1_570_, v_env_571_, v_mctx_572_, v_lctx_573_, v_opts_574_, v_namingCtx_575_, v_x_576_, v_a_577_, v_a_578_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
return v_res_580_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(lean_object* v_stx_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lean_Syntax_getKind(v_stx_584_);
if (lean_obj_tag(v___x_585_) == 1)
{
lean_object* v_pre_586_; 
v_pre_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_pre_586_);
if (lean_obj_tag(v_pre_586_) == 1)
{
lean_object* v_pre_587_; 
v_pre_587_ = lean_ctor_get(v_pre_586_, 0);
lean_inc(v_pre_587_);
if (lean_obj_tag(v_pre_587_) == 1)
{
lean_object* v_pre_588_; 
v_pre_588_ = lean_ctor_get(v_pre_587_, 0);
lean_inc(v_pre_588_);
if (lean_obj_tag(v_pre_588_) == 1)
{
lean_object* v_pre_589_; 
v_pre_589_ = lean_ctor_get(v_pre_588_, 0);
if (lean_obj_tag(v_pre_589_) == 0)
{
lean_object* v_str_590_; lean_object* v_str_591_; lean_object* v_str_592_; lean_object* v_str_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_str_590_ = lean_ctor_get(v___x_585_, 1);
lean_inc_ref(v_str_590_);
lean_dec_ref_known(v___x_585_, 2);
v_str_591_ = lean_ctor_get(v_pre_586_, 1);
lean_inc_ref(v_str_591_);
lean_dec_ref_known(v_pre_586_, 2);
v_str_592_ = lean_ctor_get(v_pre_587_, 1);
lean_inc_ref(v_str_592_);
lean_dec_ref_known(v_pre_587_, 2);
v_str_593_ = lean_ctor_get(v_pre_588_, 1);
lean_inc_ref(v_str_593_);
lean_dec_ref_known(v_pre_588_, 2);
v___x_594_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_595_ = lean_string_dec_eq(v_str_593_, v___x_594_);
lean_dec_ref(v_str_593_);
if (v___x_595_ == 0)
{
lean_dec_ref(v_str_592_);
lean_dec_ref(v_str_591_);
lean_dec_ref(v_str_590_);
return v___x_595_;
}
else
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0));
v___x_597_ = lean_string_dec_eq(v_str_592_, v___x_596_);
lean_dec_ref(v_str_592_);
if (v___x_597_ == 0)
{
lean_dec_ref(v_str_591_);
lean_dec_ref(v_str_590_);
return v___x_597_;
}
else
{
lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_598_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_599_ = lean_string_dec_eq(v_str_591_, v___x_598_);
lean_dec_ref(v_str_591_);
if (v___x_599_ == 0)
{
lean_dec_ref(v_str_590_);
return v___x_599_;
}
else
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__1));
v___x_601_ = lean_string_dec_eq(v_str_590_, v___x_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_602_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__2));
v___x_603_ = lean_string_dec_eq(v_str_590_, v___x_602_);
lean_dec_ref(v_str_590_);
return v___x_603_;
}
else
{
lean_dec_ref(v_str_590_);
return v___x_601_;
}
}
}
}
}
else
{
uint8_t v___x_604_; 
lean_dec_ref_known(v_pre_588_, 2);
lean_dec_ref_known(v_pre_587_, 2);
lean_dec_ref_known(v_pre_586_, 2);
lean_dec_ref_known(v___x_585_, 2);
v___x_604_ = 0;
return v___x_604_;
}
}
else
{
uint8_t v___x_605_; 
lean_dec_ref_known(v_pre_587_, 2);
lean_dec(v_pre_588_);
lean_dec_ref_known(v_pre_586_, 2);
lean_dec_ref_known(v___x_585_, 2);
v___x_605_ = 0;
return v___x_605_;
}
}
else
{
uint8_t v___x_606_; 
lean_dec(v_pre_587_);
lean_dec_ref_known(v_pre_586_, 2);
lean_dec_ref_known(v___x_585_, 2);
v___x_606_ = 0;
return v___x_606_;
}
}
else
{
uint8_t v___x_607_; 
lean_dec(v_pre_586_);
lean_dec_ref_known(v___x_585_, 2);
v___x_607_ = 0;
return v___x_607_;
}
}
else
{
uint8_t v___x_608_; 
lean_dec(v___x_585_);
v___x_608_ = 0;
return v___x_608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___boxed(lean_object* v_stx_609_){
_start:
{
uint8_t v_res_610_; lean_object* v_r_611_; 
v_res_610_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(v_stx_609_);
v_r_611_ = lean_box(v_res_610_);
return v_r_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx(lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v___x_613_; 
v___x_613_ = lean_unsigned_to_nat(0u);
return v___x_613_;
}
else
{
lean_object* v___x_614_; 
v___x_614_ = lean_unsigned_to_nat(1u);
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx___boxed(lean_object* v_x_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorIdx(v_x_615_);
lean_dec(v_x_615_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(lean_object* v_t_617_, lean_object* v_k_618_){
_start:
{
if (lean_obj_tag(v_t_617_) == 0)
{
lean_object* v_tacticSeq_619_; lean_object* v_insertPos_620_; lean_object* v___x_621_; 
v_tacticSeq_619_ = lean_ctor_get(v_t_617_, 0);
lean_inc(v_tacticSeq_619_);
v_insertPos_620_ = lean_ctor_get(v_t_617_, 1);
lean_inc(v_insertPos_620_);
lean_dec_ref_known(v_t_617_, 2);
v___x_621_ = lean_apply_2(v_k_618_, v_tacticSeq_619_, v_insertPos_620_);
return v___x_621_;
}
else
{
return v_k_618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim(lean_object* v_motive_622_, lean_object* v_ctorIdx_623_, lean_object* v_t_624_, lean_object* v_h_625_, lean_object* v_k_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_624_, v_k_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___boxed(lean_object* v_motive_628_, lean_object* v_ctorIdx_629_, lean_object* v_t_630_, lean_object* v_h_631_, lean_object* v_k_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim(v_motive_628_, v_ctorIdx_629_, v_t_630_, v_h_631_, v_k_632_);
lean_dec(v_ctorIdx_629_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim___redArg(lean_object* v_t_634_, lean_object* v_unsolvedGoal_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_634_, v_unsolvedGoal_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_unsolvedGoal_elim(lean_object* v_motive_637_, lean_object* v_t_638_, lean_object* v_h_639_, lean_object* v_unsolvedGoal_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_638_, v_unsolvedGoal_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim___redArg(lean_object* v_t_642_, lean_object* v_sorryTactic_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_642_, v_sorryTactic_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_sorryTactic_elim(lean_object* v_motive_645_, lean_object* v_t_646_, lean_object* v_h_647_, lean_object* v_sorryTactic_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_TriggerKind_ctorElim___redArg(v_t_646_, v_sorryTactic_648_);
return v___x_649_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1(void){
_start:
{
uint32_t v___x_653_; lean_object* v___x_654_; 
v___x_653_ = 32;
v___x_654_ = lean_box_uint32(v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(lean_object* v_tacticSeq_655_, lean_object* v_fileMap_656_){
_start:
{
uint8_t v___x_657_; lean_object* v___x_658_; 
v___x_657_ = 0;
v___x_658_ = l_Lean_Syntax_getPos_x3f(v_tacticSeq_655_, v___x_657_);
if (lean_obj_tag(v___x_658_) == 1)
{
lean_object* v_val_659_; lean_object* v___x_660_; 
v_val_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = l_Lean_Syntax_getTailPos_x3f(v_tacticSeq_655_, v___x_657_);
if (lean_obj_tag(v___x_660_) == 1)
{
lean_object* v_val_661_; lean_object* v_startPos_662_; lean_object* v_line_663_; lean_object* v_column_664_; lean_object* v_endPos_665_; lean_object* v_line_666_; uint8_t v___x_667_; 
v_val_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_val_661_);
lean_dec_ref_known(v___x_660_, 1);
lean_inc_ref(v_fileMap_656_);
v_startPos_662_ = l_Lean_FileMap_toPosition(v_fileMap_656_, v_val_659_);
lean_dec(v_val_659_);
v_line_663_ = lean_ctor_get(v_startPos_662_, 0);
lean_inc(v_line_663_);
v_column_664_ = lean_ctor_get(v_startPos_662_, 1);
lean_inc(v_column_664_);
lean_dec_ref(v_startPos_662_);
v_endPos_665_ = l_Lean_FileMap_toPosition(v_fileMap_656_, v_val_661_);
lean_dec(v_val_661_);
v_line_666_ = lean_ctor_get(v_endPos_665_, 0);
lean_inc(v_line_666_);
lean_dec_ref(v_endPos_665_);
v___x_667_ = lean_nat_dec_eq(v_line_663_, v_line_666_);
lean_dec(v_line_666_);
lean_dec(v_line_663_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_668_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__0));
v___x_669_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1;
v___x_670_ = l_List_replicateTR___redArg(v_column_664_, v___x_669_);
v___x_671_ = lean_string_mk(v___x_670_);
v___x_672_ = lean_string_append(v___x_668_, v___x_671_);
lean_dec_ref(v___x_671_);
return v___x_672_;
}
else
{
lean_object* v___x_673_; 
lean_dec(v_column_664_);
v___x_673_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__1));
return v___x_673_;
}
}
else
{
lean_object* v___x_674_; 
lean_dec(v___x_660_);
lean_dec(v_val_659_);
lean_dec_ref(v_fileMap_656_);
v___x_674_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2));
return v___x_674_;
}
}
else
{
lean_object* v___x_675_; 
lean_dec(v___x_658_);
lean_dec_ref(v_fileMap_656_);
v___x_675_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___closed__2));
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed(lean_object* v_tacticSeq_676_, lean_object* v_fileMap_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(v_tacticSeq_676_, v_fileMap_677_);
lean_dec(v_tacticSeq_676_);
return v_res_678_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_681_ = lean_string_utf8_byte_size(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_682_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__1);
v___x_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v___x_683_);
lean_ctor_set(v___x_685_, 2, v___x_682_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx(lean_object* v_p_686_){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_688_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2);
lean_inc(v_p_686_);
v___x_689_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v_p_686_);
lean_ctor_set(v___x_689_, 2, v___x_688_);
lean_ctor_set(v___x_689_, 3, v_p_686_);
v___x_690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v___x_687_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(lean_object* v_range_691_){
_start:
{
lean_object* v_start_692_; lean_object* v_stop_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_703_; 
v_start_692_ = lean_ctor_get(v_range_691_, 0);
v_stop_693_ = lean_ctor_get(v_range_691_, 1);
v_isSharedCheck_703_ = !lean_is_exclusive(v_range_691_);
if (v_isSharedCheck_703_ == 0)
{
v___x_695_ = v_range_691_;
v_isShared_696_ = v_isSharedCheck_703_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_stop_693_);
lean_inc(v_start_692_);
lean_dec(v_range_691_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_703_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_701_; 
v___x_697_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_698_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__2);
v___x_699_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v_start_692_);
lean_ctor_set(v___x_699_, 2, v___x_698_);
lean_ctor_set(v___x_699_, 3, v_stop_693_);
if (v_isShared_696_ == 0)
{
lean_ctor_set_tag(v___x_695_, 2);
lean_ctor_set(v___x_695_, 1, v___x_697_);
lean_ctor_set(v___x_695_, 0, v___x_699_);
v___x_701_ = v___x_695_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v___x_697_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(lean_object* v_mc_x3f_704_, lean_object* v_nc_x3f_705_, lean_object* v_msg_706_, lean_object* v_acc_707_){
_start:
{
switch(lean_obj_tag(v_msg_706_))
{
case 3:
{
lean_object* v_a_708_; lean_object* v_a_709_; lean_object* v___x_710_; 
lean_dec(v_mc_x3f_704_);
v_a_708_ = lean_ctor_get(v_msg_706_, 0);
v_a_709_ = lean_ctor_get(v_msg_706_, 1);
lean_inc_ref(v_a_708_);
v___x_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_710_, 0, v_a_708_);
v_mc_x3f_704_ = v___x_710_;
v_msg_706_ = v_a_709_;
goto _start;
}
case 4:
{
lean_object* v_a_712_; lean_object* v_a_713_; lean_object* v___x_714_; 
lean_dec(v_nc_x3f_705_);
v_a_712_ = lean_ctor_get(v_msg_706_, 0);
v_a_713_ = lean_ctor_get(v_msg_706_, 1);
lean_inc_ref(v_a_712_);
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v_a_712_);
v_nc_x3f_705_ = v___x_714_;
v_msg_706_ = v_a_713_;
goto _start;
}
case 5:
{
lean_object* v_a_716_; 
v_a_716_ = lean_ctor_get(v_msg_706_, 1);
v_msg_706_ = v_a_716_;
goto _start;
}
case 6:
{
lean_object* v_a_718_; 
v_a_718_ = lean_ctor_get(v_msg_706_, 0);
v_msg_706_ = v_a_718_;
goto _start;
}
case 8:
{
lean_object* v_a_720_; 
v_a_720_ = lean_ctor_get(v_msg_706_, 1);
v_msg_706_ = v_a_720_;
goto _start;
}
case 7:
{
lean_object* v_a_722_; lean_object* v_a_723_; lean_object* v___x_724_; 
v_a_722_ = lean_ctor_get(v_msg_706_, 0);
v_a_723_ = lean_ctor_get(v_msg_706_, 1);
lean_inc(v_nc_x3f_705_);
lean_inc(v_mc_x3f_704_);
v___x_724_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_704_, v_nc_x3f_705_, v_a_722_, v_acc_707_);
v_msg_706_ = v_a_723_;
v_acc_707_ = v___x_724_;
goto _start;
}
case 2:
{
lean_object* v_a_726_; 
v_a_726_ = lean_ctor_get(v_msg_706_, 1);
v_msg_706_ = v_a_726_;
goto _start;
}
case 9:
{
lean_object* v_msg_728_; lean_object* v_children_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_msg_728_ = lean_ctor_get(v_msg_706_, 1);
v_children_729_ = lean_ctor_get(v_msg_706_, 2);
lean_inc(v_nc_x3f_705_);
lean_inc(v_mc_x3f_704_);
v___x_730_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_704_, v_nc_x3f_705_, v_msg_728_, v_acc_707_);
v___x_731_ = lean_unsigned_to_nat(0u);
v___x_732_ = lean_array_get_size(v_children_729_);
v___x_733_ = lean_nat_dec_lt(v___x_731_, v___x_732_);
if (v___x_733_ == 0)
{
lean_dec(v_nc_x3f_705_);
lean_dec(v_mc_x3f_704_);
return v___x_730_;
}
else
{
uint8_t v___x_734_; 
v___x_734_ = lean_nat_dec_le(v___x_732_, v___x_732_);
if (v___x_734_ == 0)
{
if (v___x_733_ == 0)
{
lean_dec(v_nc_x3f_705_);
lean_dec(v_mc_x3f_704_);
return v___x_730_;
}
else
{
size_t v___x_735_; size_t v___x_736_; lean_object* v___x_737_; 
v___x_735_ = ((size_t)0ULL);
v___x_736_ = lean_usize_of_nat(v___x_732_);
v___x_737_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(v_mc_x3f_704_, v_nc_x3f_705_, v_children_729_, v___x_735_, v___x_736_, v___x_730_);
return v___x_737_;
}
}
else
{
size_t v___x_738_; size_t v___x_739_; lean_object* v___x_740_; 
v___x_738_ = ((size_t)0ULL);
v___x_739_ = lean_usize_of_nat(v___x_732_);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(v_mc_x3f_704_, v_nc_x3f_705_, v_children_729_, v___x_738_, v___x_739_, v___x_730_);
return v___x_740_;
}
}
}
case 1:
{
if (lean_obj_tag(v_mc_x3f_704_) == 1)
{
if (lean_obj_tag(v_nc_x3f_705_) == 1)
{
lean_object* v_a_741_; lean_object* v_val_742_; lean_object* v_val_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_a_741_ = lean_ctor_get(v_msg_706_, 0);
v_val_742_ = lean_ctor_get(v_mc_x3f_704_, 0);
lean_inc(v_val_742_);
lean_dec_ref_known(v_mc_x3f_704_, 1);
v_val_743_ = lean_ctor_get(v_nc_x3f_705_, 0);
lean_inc(v_val_743_);
lean_dec_ref_known(v_nc_x3f_705_, 1);
lean_inc(v_a_741_);
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_val_743_);
lean_ctor_set(v___x_744_, 1, v_a_741_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v_val_742_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_array_push(v_acc_707_, v___x_745_);
return v___x_746_;
}
else
{
lean_dec_ref_known(v_mc_x3f_704_, 1);
lean_dec(v_nc_x3f_705_);
return v_acc_707_;
}
}
else
{
lean_dec(v_nc_x3f_705_);
lean_dec(v_mc_x3f_704_);
return v_acc_707_;
}
}
default: 
{
lean_dec(v_nc_x3f_705_);
lean_dec(v_mc_x3f_704_);
return v_acc_707_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(lean_object* v_mc_x3f_747_, lean_object* v_nc_x3f_748_, lean_object* v_as_749_, size_t v_i_750_, size_t v_stop_751_, lean_object* v_b_752_){
_start:
{
uint8_t v___x_753_; 
v___x_753_ = lean_usize_dec_eq(v_i_750_, v_stop_751_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; lean_object* v___x_755_; size_t v___x_756_; size_t v___x_757_; 
v___x_754_ = lean_array_uget_borrowed(v_as_749_, v_i_750_);
lean_inc(v_nc_x3f_748_);
lean_inc(v_mc_x3f_747_);
v___x_755_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_747_, v_nc_x3f_748_, v___x_754_, v_b_752_);
v___x_756_ = ((size_t)1ULL);
v___x_757_ = lean_usize_add(v_i_750_, v___x_756_);
v_i_750_ = v___x_757_;
v_b_752_ = v___x_755_;
goto _start;
}
else
{
lean_dec(v_nc_x3f_748_);
lean_dec(v_mc_x3f_747_);
return v_b_752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0___boxed(lean_object* v_mc_x3f_759_, lean_object* v_nc_x3f_760_, lean_object* v_as_761_, lean_object* v_i_762_, lean_object* v_stop_763_, lean_object* v_b_764_){
_start:
{
size_t v_i_boxed_765_; size_t v_stop_boxed_766_; lean_object* v_res_767_; 
v_i_boxed_765_ = lean_unbox_usize(v_i_762_);
lean_dec(v_i_762_);
v_stop_boxed_766_ = lean_unbox_usize(v_stop_763_);
lean_dec(v_stop_763_);
v_res_767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go_spec__0(v_mc_x3f_759_, v_nc_x3f_760_, v_as_761_, v_i_boxed_765_, v_stop_boxed_766_, v_b_764_);
lean_dec_ref(v_as_761_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go___boxed(lean_object* v_mc_x3f_768_, lean_object* v_nc_x3f_769_, lean_object* v_msg_770_, lean_object* v_acc_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v_mc_x3f_768_, v_nc_x3f_769_, v_msg_770_, v_acc_771_);
lean_dec_ref(v_msg_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(lean_object* v_msg_775_){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = lean_box(0);
v___x_777_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___closed__0));
v___x_778_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage_go(v___x_776_, v___x_776_, v_msg_775_, v___x_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage___boxed(lean_object* v_msg_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_msg_779_);
lean_dec_ref(v_msg_779_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f(lean_object* v_range_783_, lean_object* v_stx_784_){
_start:
{
lean_object* v___x_785_; 
lean_inc(v_stx_784_);
v___x_785_ = l_Lean_Syntax_getKind(v_stx_784_);
if (lean_obj_tag(v___x_785_) == 1)
{
lean_object* v_pre_786_; 
v_pre_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_pre_786_);
if (lean_obj_tag(v_pre_786_) == 1)
{
lean_object* v_pre_787_; 
v_pre_787_ = lean_ctor_get(v_pre_786_, 0);
lean_inc(v_pre_787_);
if (lean_obj_tag(v_pre_787_) == 1)
{
lean_object* v_pre_788_; 
v_pre_788_ = lean_ctor_get(v_pre_787_, 0);
lean_inc(v_pre_788_);
if (lean_obj_tag(v_pre_788_) == 1)
{
lean_object* v_pre_789_; 
v_pre_789_ = lean_ctor_get(v_pre_788_, 0);
if (lean_obj_tag(v_pre_789_) == 0)
{
lean_object* v_str_790_; lean_object* v_str_791_; lean_object* v_str_792_; lean_object* v_str_793_; lean_object* v___x_794_; uint8_t v___x_795_; 
v_str_790_ = lean_ctor_get(v___x_785_, 1);
lean_inc_ref(v_str_790_);
lean_dec_ref_known(v___x_785_, 2);
v_str_791_ = lean_ctor_get(v_pre_786_, 1);
lean_inc_ref(v_str_791_);
lean_dec_ref_known(v_pre_786_, 2);
v_str_792_ = lean_ctor_get(v_pre_787_, 1);
lean_inc_ref(v_str_792_);
lean_dec_ref_known(v_pre_787_, 2);
v_str_793_ = lean_ctor_get(v_pre_788_, 1);
lean_inc_ref(v_str_793_);
lean_dec_ref_known(v_pre_788_, 2);
v___x_794_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__8_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_795_ = lean_string_dec_eq(v_str_793_, v___x_794_);
lean_dec_ref(v_str_793_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; 
lean_dec_ref(v_str_792_);
lean_dec_ref(v_str_791_);
lean_dec_ref(v_str_790_);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_796_ = lean_box(0);
return v___x_796_;
}
else
{
lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_797_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic___closed__0));
v___x_798_ = lean_string_dec_eq(v_str_792_, v___x_797_);
lean_dec_ref(v_str_792_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
lean_dec_ref(v_str_791_);
lean_dec_ref(v_str_790_);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_799_ = lean_box(0);
return v___x_799_;
}
else
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__12_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_));
v___x_801_ = lean_string_dec_eq(v_str_791_, v___x_800_);
lean_dec_ref(v_str_791_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; 
lean_dec_ref(v_str_790_);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_802_ = lean_box(0);
return v___x_802_;
}
else
{
lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_803_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__0));
v___x_804_ = lean_string_dec_eq(v_str_790_, v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f___closed__1));
v___x_806_ = lean_string_dec_eq(v_str_790_, v___x_805_);
lean_dec_ref(v_str_790_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; 
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_807_ = lean_box(0);
return v___x_807_;
}
else
{
lean_object* v___x_808_; lean_object* v_body_809_; lean_object* v___y_811_; lean_object* v___x_814_; 
v___x_808_ = lean_unsigned_to_nat(1u);
v_body_809_ = l_Lean_Syntax_getArg(v_stx_784_, v___x_808_);
v___x_814_ = l_Lean_Syntax_getTailPos_x3f(v_body_809_, v___x_804_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = lean_unsigned_to_nat(2u);
v___x_816_ = l_Lean_Syntax_getArg(v_stx_784_, v___x_815_);
lean_dec(v_stx_784_);
v___x_817_ = l_Lean_Syntax_getPos_x3f(v___x_816_, v___x_804_);
lean_dec(v___x_816_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_stop_818_; 
v_stop_818_ = lean_ctor_get(v_range_783_, 1);
lean_inc(v_stop_818_);
lean_dec_ref(v_range_783_);
v___y_811_ = v_stop_818_;
goto v___jp_810_;
}
else
{
lean_object* v_val_819_; 
lean_dec_ref(v_range_783_);
v_val_819_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_val_819_);
lean_dec_ref_known(v___x_817_, 1);
v___y_811_ = v_val_819_;
goto v___jp_810_;
}
}
else
{
lean_object* v_val_820_; 
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v_val_820_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_val_820_);
lean_dec_ref_known(v___x_814_, 1);
v___y_811_ = v_val_820_;
goto v___jp_810_;
}
v___jp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_body_809_);
lean_ctor_set(v___x_812_, 1, v___y_811_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
}
}
else
{
lean_object* v___x_821_; lean_object* v_body_822_; lean_object* v___y_824_; uint8_t v___x_827_; lean_object* v___x_828_; 
lean_dec_ref(v_str_790_);
v___x_821_ = lean_unsigned_to_nat(0u);
v_body_822_ = l_Lean_Syntax_getArg(v_stx_784_, v___x_821_);
lean_dec(v_stx_784_);
v___x_827_ = 0;
v___x_828_ = l_Lean_Syntax_getTailPos_x3f(v_body_822_, v___x_827_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_stop_829_; 
v_stop_829_ = lean_ctor_get(v_range_783_, 1);
lean_inc(v_stop_829_);
lean_dec_ref(v_range_783_);
v___y_824_ = v_stop_829_;
goto v___jp_823_;
}
else
{
lean_object* v_val_830_; 
lean_dec_ref(v_range_783_);
v_val_830_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_val_830_);
lean_dec_ref_known(v___x_828_, 1);
v___y_824_ = v_val_830_;
goto v___jp_823_;
}
v___jp_823_:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v_body_822_);
lean_ctor_set(v___x_825_, 1, v___y_824_);
v___x_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
return v___x_826_;
}
}
}
}
}
}
else
{
lean_object* v___x_831_; 
lean_dec_ref_known(v_pre_788_, 2);
lean_dec_ref_known(v_pre_787_, 2);
lean_dec_ref_known(v_pre_786_, 2);
lean_dec_ref_known(v___x_785_, 2);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_831_ = lean_box(0);
return v___x_831_;
}
}
else
{
lean_object* v___x_832_; 
lean_dec(v_pre_788_);
lean_dec_ref_known(v_pre_787_, 2);
lean_dec_ref_known(v_pre_786_, 2);
lean_dec_ref_known(v___x_785_, 2);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_832_ = lean_box(0);
return v___x_832_;
}
}
else
{
lean_object* v___x_833_; 
lean_dec(v_pre_787_);
lean_dec_ref_known(v_pre_786_, 2);
lean_dec_ref_known(v___x_785_, 2);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_833_ = lean_box(0);
return v___x_833_;
}
}
else
{
lean_object* v___x_834_; 
lean_dec(v_pre_786_);
lean_dec_ref_known(v___x_785_, 2);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_834_ = lean_box(0);
return v___x_834_;
}
}
else
{
lean_object* v___x_835_; 
lean_dec(v___x_785_);
lean_dec(v_stx_784_);
lean_dec_ref(v_range_783_);
v___x_835_ = lean_box(0);
return v___x_835_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(lean_object* v_range_839_, lean_object* v_stx_840_){
_start:
{
lean_object* v___x_841_; 
lean_inc(v_stx_840_);
lean_inc_ref(v_range_839_);
v___x_841_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_seqBodyAndInsertPos_x3f(v_range_839_, v_stx_840_);
if (lean_obj_tag(v___x_841_) == 1)
{
lean_dec(v_stx_840_);
lean_dec_ref(v_range_839_);
return v___x_841_;
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; size_t v_sz_845_; size_t v___x_846_; lean_object* v___x_847_; lean_object* v_fst_848_; 
lean_dec(v___x_841_);
v___x_842_ = l_Lean_Syntax_getArgs(v_stx_840_);
lean_dec(v_stx_840_);
v___x_843_ = lean_box(0);
v___x_844_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v_sz_845_ = lean_array_size(v___x_842_);
v___x_846_ = ((size_t)0ULL);
v___x_847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(v_range_839_, v___x_842_, v_sz_845_, v___x_846_, v___x_844_);
lean_dec_ref(v___x_842_);
v_fst_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_fst_848_);
lean_dec_ref(v___x_847_);
if (lean_obj_tag(v_fst_848_) == 0)
{
return v___x_843_;
}
else
{
lean_object* v_val_849_; 
v_val_849_ = lean_ctor_get(v_fst_848_, 0);
lean_inc(v_val_849_);
lean_dec_ref_known(v_fst_848_, 1);
return v_val_849_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(lean_object* v_range_850_, lean_object* v_as_851_, size_t v_sz_852_, size_t v_i_853_, lean_object* v_b_854_){
_start:
{
uint8_t v___x_855_; 
v___x_855_ = lean_usize_dec_lt(v_i_853_, v_sz_852_);
if (v___x_855_ == 0)
{
lean_dec_ref(v_range_850_);
lean_inc_ref(v_b_854_);
return v_b_854_;
}
else
{
lean_object* v___x_856_; lean_object* v_a_857_; lean_object* v___x_858_; 
v___x_856_ = lean_box(0);
v_a_857_ = lean_array_uget_borrowed(v_as_851_, v_i_853_);
lean_inc(v_a_857_);
lean_inc_ref(v_range_850_);
v___x_858_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(v_range_850_, v_a_857_);
if (lean_obj_tag(v___x_858_) == 1)
{
lean_object* v___x_859_; lean_object* v___x_860_; 
lean_dec_ref(v_range_850_);
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
v___x_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_859_);
lean_ctor_set(v___x_860_, 1, v___x_856_);
return v___x_860_;
}
else
{
lean_object* v___x_861_; size_t v___x_862_; size_t v___x_863_; 
lean_dec(v___x_858_);
v___x_861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v___x_862_ = ((size_t)1ULL);
v___x_863_ = lean_usize_add(v_i_853_, v___x_862_);
v_i_853_ = v___x_863_;
v_b_854_ = v___x_861_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___boxed(lean_object* v_range_865_, lean_object* v_as_866_, lean_object* v_sz_867_, lean_object* v_i_868_, lean_object* v_b_869_){
_start:
{
size_t v_sz_boxed_870_; size_t v_i_boxed_871_; lean_object* v_res_872_; 
v_sz_boxed_870_ = lean_unbox_usize(v_sz_867_);
lean_dec(v_sz_867_);
v_i_boxed_871_ = lean_unbox_usize(v_i_868_);
lean_dec(v_i_868_);
v_res_872_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0(v_range_865_, v_as_866_, v_sz_boxed_870_, v_i_boxed_871_, v_b_869_);
lean_dec_ref(v_b_869_);
lean_dec_ref(v_as_866_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(lean_object* v_range_873_, lean_object* v_stx_874_){
_start:
{
uint8_t v___x_875_; lean_object* v___x_876_; 
v___x_875_ = 0;
v___x_876_ = l_Lean_Syntax_getRange_x3f(v_stx_874_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 1)
{
lean_object* v_val_877_; uint8_t v___x_878_; 
v_val_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_val_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = l_Lean_Syntax_Range_includes(v_val_877_, v_range_873_, v___x_875_, v___x_875_);
lean_dec(v_val_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
lean_dec(v_stx_874_);
lean_dec_ref(v_range_873_);
v___x_879_ = lean_box(0);
return v___x_879_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; size_t v_sz_882_; size_t v___x_883_; lean_object* v___x_884_; lean_object* v_fst_885_; 
v___x_880_ = l_Lean_Syntax_getArgs(v_stx_874_);
v___x_881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v_sz_882_ = lean_array_size(v___x_880_);
v___x_883_ = ((size_t)0ULL);
lean_inc_ref(v_range_873_);
v___x_884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(v_range_873_, v___x_880_, v_sz_882_, v___x_883_, v___x_881_);
lean_dec_ref(v___x_880_);
v_fst_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_fst_885_);
lean_dec_ref(v___x_884_);
if (lean_obj_tag(v_fst_885_) == 0)
{
lean_object* v___x_886_; 
v___x_886_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree(v_range_873_, v_stx_874_);
return v___x_886_;
}
else
{
lean_object* v_val_887_; 
lean_dec(v_stx_874_);
lean_dec_ref(v_range_873_);
v_val_887_ = lean_ctor_get(v_fst_885_, 0);
lean_inc(v_val_887_);
lean_dec_ref_known(v_fst_885_, 1);
return v_val_887_;
}
}
}
else
{
lean_object* v___x_888_; 
lean_dec(v___x_876_);
lean_dec(v_stx_874_);
lean_dec_ref(v_range_873_);
v___x_888_ = lean_box(0);
return v___x_888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(lean_object* v_range_889_, lean_object* v_as_890_, size_t v_sz_891_, size_t v_i_892_, lean_object* v_b_893_){
_start:
{
uint8_t v___x_894_; 
v___x_894_ = lean_usize_dec_lt(v_i_892_, v_sz_891_);
if (v___x_894_ == 0)
{
lean_dec_ref(v_range_889_);
lean_inc_ref(v_b_893_);
return v_b_893_;
}
else
{
lean_object* v___x_895_; lean_object* v_a_896_; lean_object* v___x_897_; 
v___x_895_ = lean_box(0);
v_a_896_ = lean_array_uget_borrowed(v_as_890_, v_i_892_);
lean_inc(v_a_896_);
lean_inc_ref(v_range_889_);
v___x_897_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v_range_889_, v_a_896_);
if (lean_obj_tag(v___x_897_) == 1)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec_ref(v_range_889_);
v___x_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v___x_895_);
return v___x_899_;
}
else
{
lean_object* v___x_900_; size_t v___x_901_; size_t v___x_902_; 
lean_dec(v___x_897_);
v___x_900_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_outermostSeqInSubtree_spec__0___closed__0));
v___x_901_ = ((size_t)1ULL);
v___x_902_ = lean_usize_add(v_i_892_, v___x_901_);
v_i_892_ = v___x_902_;
v_b_893_ = v___x_900_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0___boxed(lean_object* v_range_904_, lean_object* v_as_905_, lean_object* v_sz_906_, lean_object* v_i_907_, lean_object* v_b_908_){
_start:
{
size_t v_sz_boxed_909_; size_t v_i_boxed_910_; lean_object* v_res_911_; 
v_sz_boxed_909_ = lean_unbox_usize(v_sz_906_);
lean_dec(v_sz_906_);
v_i_boxed_910_ = lean_unbox_usize(v_i_907_);
lean_dec(v_i_907_);
v_res_911_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind_spec__0(v_range_904_, v_as_905_, v_sz_boxed_909_, v_i_boxed_910_, v_b_908_);
lean_dec_ref(v_b_908_);
lean_dec_ref(v_as_905_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody(lean_object* v_cmd_912_, lean_object* v_range_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v_range_913_, v_cmd_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0(lean_object* v_ctx_915_, lean_object* v_info_916_, lean_object* v_acc_917_){
_start:
{
if (lean_obj_tag(v_info_916_) == 0)
{
lean_object* v_i_918_; lean_object* v_toElabInfo_919_; lean_object* v_mctxBefore_920_; lean_object* v_goalsBefore_921_; lean_object* v_stx_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_940_; 
v_i_918_ = lean_ctor_get(v_info_916_, 0);
lean_inc_ref(v_i_918_);
lean_dec_ref_known(v_info_916_, 1);
v_toElabInfo_919_ = lean_ctor_get(v_i_918_, 0);
lean_inc_ref(v_toElabInfo_919_);
v_mctxBefore_920_ = lean_ctor_get(v_i_918_, 1);
lean_inc_ref(v_mctxBefore_920_);
v_goalsBefore_921_ = lean_ctor_get(v_i_918_, 2);
lean_inc(v_goalsBefore_921_);
lean_dec_ref(v_i_918_);
v_stx_922_ = lean_ctor_get(v_toElabInfo_919_, 1);
v_isSharedCheck_940_ = !lean_is_exclusive(v_toElabInfo_919_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; 
v_unused_941_ = lean_ctor_get(v_toElabInfo_919_, 0);
lean_dec(v_unused_941_);
v___x_924_ = v_toElabInfo_919_;
v_isShared_925_ = v_isSharedCheck_940_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_stx_922_);
lean_dec(v_toElabInfo_919_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_940_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
uint8_t v___x_926_; 
lean_inc(v_stx_922_);
v___x_926_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_isSorryTactic(v_stx_922_);
if (v___x_926_ == 0)
{
lean_del_object(v___x_924_);
lean_dec(v_stx_922_);
lean_dec(v_goalsBefore_921_);
lean_dec_ref(v_mctxBefore_920_);
return v_acc_917_;
}
else
{
lean_object* v___x_927_; 
v___x_927_ = l_List_head_x3f___redArg(v_goalsBefore_921_);
lean_dec(v_goalsBefore_921_);
if (lean_obj_tag(v___x_927_) == 1)
{
lean_object* v_toCommandContextInfo_928_; lean_object* v_val_929_; lean_object* v_env_930_; lean_object* v_options_931_; lean_object* v_currNamespace_932_; lean_object* v_openDecls_933_; lean_object* v_namingCtx_935_; 
v_toCommandContextInfo_928_ = lean_ctor_get(v_ctx_915_, 0);
v_val_929_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_val_929_);
lean_dec_ref_known(v___x_927_, 1);
v_env_930_ = lean_ctor_get(v_toCommandContextInfo_928_, 0);
v_options_931_ = lean_ctor_get(v_toCommandContextInfo_928_, 4);
v_currNamespace_932_ = lean_ctor_get(v_toCommandContextInfo_928_, 5);
v_openDecls_933_ = lean_ctor_get(v_toCommandContextInfo_928_, 6);
lean_inc(v_openDecls_933_);
lean_inc(v_currNamespace_932_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v_openDecls_933_);
lean_ctor_set(v___x_924_, 0, v_currNamespace_932_);
v_namingCtx_935_ = v___x_924_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_currNamespace_932_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v_openDecls_933_);
v_namingCtx_935_ = v_reuseFailAlloc_939_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_936_ = lean_box(1);
lean_inc_ref(v_options_931_);
lean_inc_ref(v_env_930_);
v___x_937_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v_stx_922_);
lean_ctor_set(v___x_937_, 2, v_env_930_);
lean_ctor_set(v___x_937_, 3, v_mctxBefore_920_);
lean_ctor_set(v___x_937_, 4, v_options_931_);
lean_ctor_set(v___x_937_, 5, v_namingCtx_935_);
lean_ctor_set(v___x_937_, 6, v_val_929_);
v___x_938_ = lean_array_push(v_acc_917_, v___x_937_);
return v___x_938_;
}
}
else
{
lean_dec(v___x_927_);
lean_del_object(v___x_924_);
lean_dec(v_stx_922_);
lean_dec_ref(v_mctxBefore_920_);
return v_acc_917_;
}
}
}
}
else
{
lean_dec_ref(v_info_916_);
return v_acc_917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0___boxed(lean_object* v_ctx_942_, lean_object* v_info_943_, lean_object* v_acc_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___lam__0(v_ctx_942_, v_info_943_, v_acc_944_);
lean_dec_ref(v_ctx_942_);
return v_res_945_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg___closed__4);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0);
v___x_949_ = lean_unsigned_to_nat(0u);
v___x_950_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
lean_ctor_set(v___x_950_, 2, v___x_949_);
lean_ctor_set(v___x_950_, 3, v___x_949_);
lean_ctor_set(v___x_950_, 4, v___x_948_);
lean_ctor_set(v___x_950_, 5, v___x_948_);
lean_ctor_set(v___x_950_, 6, v___x_948_);
lean_ctor_set(v___x_950_, 7, v___x_948_);
lean_ctor_set(v___x_950_, 8, v___x_948_);
lean_ctor_set(v___x_950_, 9, v___x_948_);
lean_ctor_set(v___x_950_, 10, v___x_948_);
return v___x_950_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = lean_unsigned_to_nat(32u);
v___x_952_ = lean_mk_empty_array_with_capacity(v___x_951_);
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__3(void){
_start:
{
size_t v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_954_ = ((size_t)5ULL);
v___x_955_ = lean_unsigned_to_nat(0u);
v___x_956_ = lean_unsigned_to_nat(32u);
v___x_957_ = lean_mk_empty_array_with_capacity(v___x_956_);
v___x_958_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__2);
v___x_959_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set(v___x_959_, 1, v___x_957_);
lean_ctor_set(v___x_959_, 2, v___x_955_);
lean_ctor_set(v___x_959_, 3, v___x_955_);
lean_ctor_set_usize(v___x_959_, 4, v___x_954_);
return v___x_959_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__4(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_960_ = lean_box(1);
v___x_961_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__3);
v___x_962_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__0);
v___x_963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
lean_ctor_set(v___x_963_, 1, v___x_961_);
lean_ctor_set(v___x_963_, 2, v___x_960_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg(lean_object* v_msgData_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; lean_object* v_env_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v_scopes_971_; lean_object* v___x_972_; lean_object* v_opts_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_967_ = lean_st_ref_get(v___y_965_);
v_env_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc_ref(v_env_968_);
lean_dec(v___x_967_);
v___x_969_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_970_ = lean_st_ref_get(v___y_965_);
v_scopes_971_ = lean_ctor_get(v___x_970_, 2);
lean_inc(v_scopes_971_);
lean_dec(v___x_970_);
v___x_972_ = l_List_head_x21___redArg(v___x_969_, v_scopes_971_);
lean_dec(v_scopes_971_);
v_opts_973_ = lean_ctor_get(v___x_972_, 1);
lean_inc_ref(v_opts_973_);
lean_dec(v___x_972_);
v___x_974_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__1);
v___x_975_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___closed__4);
v___x_976_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_976_, 0, v_env_968_);
lean_ctor_set(v___x_976_, 1, v___x_974_);
lean_ctor_set(v___x_976_, 2, v___x_975_);
lean_ctor_set(v___x_976_, 3, v_opts_973_);
v___x_977_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v_msgData_964_);
v___x_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg___boxed(lean_object* v_msgData_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg(v_msgData_979_, v___y_980_);
lean_dec(v___y_980_);
return v_res_982_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0(void){
_start:
{
lean_object* v___x_983_; double v___x_984_; 
v___x_983_ = lean_unsigned_to_nat(0u);
v___x_984_ = lean_float_of_nat(v___x_983_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(lean_object* v_cls_987_, lean_object* v_msg_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_Elab_Command_getRef___redArg(v___y_989_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_994_; lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1043_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_992_, 1);
v___x_994_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg(v_msg_988_, v___y_990_);
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1043_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1043_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v_traceState_1000_; lean_object* v_env_1001_; lean_object* v_messages_1002_; lean_object* v_scopes_1003_; lean_object* v_usedQuotCtxts_1004_; lean_object* v_nextMacroScope_1005_; lean_object* v_maxRecDepth_1006_; lean_object* v_ngen_1007_; lean_object* v_auxDeclNGen_1008_; lean_object* v_infoState_1009_; lean_object* v_snapshotTasks_1010_; lean_object* v_prevLinterStates_1011_; lean_object* v_codeQualityEntryTasks_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1042_; 
v___x_999_ = lean_st_ref_take(v___y_990_);
v_traceState_1000_ = lean_ctor_get(v___x_999_, 9);
v_env_1001_ = lean_ctor_get(v___x_999_, 0);
v_messages_1002_ = lean_ctor_get(v___x_999_, 1);
v_scopes_1003_ = lean_ctor_get(v___x_999_, 2);
v_usedQuotCtxts_1004_ = lean_ctor_get(v___x_999_, 3);
v_nextMacroScope_1005_ = lean_ctor_get(v___x_999_, 4);
v_maxRecDepth_1006_ = lean_ctor_get(v___x_999_, 5);
v_ngen_1007_ = lean_ctor_get(v___x_999_, 6);
v_auxDeclNGen_1008_ = lean_ctor_get(v___x_999_, 7);
v_infoState_1009_ = lean_ctor_get(v___x_999_, 8);
v_snapshotTasks_1010_ = lean_ctor_get(v___x_999_, 10);
v_prevLinterStates_1011_ = lean_ctor_get(v___x_999_, 11);
v_codeQualityEntryTasks_1012_ = lean_ctor_get(v___x_999_, 12);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1014_ = v___x_999_;
v_isShared_1015_ = v_isSharedCheck_1042_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1012_);
lean_inc(v_prevLinterStates_1011_);
lean_inc(v_snapshotTasks_1010_);
lean_inc(v_traceState_1000_);
lean_inc(v_infoState_1009_);
lean_inc(v_auxDeclNGen_1008_);
lean_inc(v_ngen_1007_);
lean_inc(v_maxRecDepth_1006_);
lean_inc(v_nextMacroScope_1005_);
lean_inc(v_usedQuotCtxts_1004_);
lean_inc(v_scopes_1003_);
lean_inc(v_messages_1002_);
lean_inc(v_env_1001_);
lean_dec(v___x_999_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1042_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
uint64_t v_tid_1016_; lean_object* v_traces_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1041_; 
v_tid_1016_ = lean_ctor_get_uint64(v_traceState_1000_, sizeof(void*)*1);
v_traces_1017_ = lean_ctor_get(v_traceState_1000_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v_traceState_1000_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1019_ = v_traceState_1000_;
v_isShared_1020_ = v_isSharedCheck_1041_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_traces_1017_);
lean_dec(v_traceState_1000_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1041_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; double v___x_1023_; uint8_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1021_ = lean_box(0);
v___x_1022_ = lean_box(0);
v___x_1023_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0);
v___x_1024_ = 0;
v___x_1025_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_1026_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1026_, 0, v_cls_987_);
lean_ctor_set(v___x_1026_, 1, v___x_1022_);
lean_ctor_set(v___x_1026_, 2, v___x_1025_);
lean_ctor_set_float(v___x_1026_, sizeof(void*)*3, v___x_1023_);
lean_ctor_set_float(v___x_1026_, sizeof(void*)*3 + 8, v___x_1023_);
lean_ctor_set_uint8(v___x_1026_, sizeof(void*)*3 + 16, v___x_1024_);
v___x_1027_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__1));
v___x_1028_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v_a_995_);
lean_ctor_set(v___x_1028_, 2, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_a_993_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_PersistentArray_push___redArg(v_traces_1017_, v___x_1029_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 0, v___x_1030_);
v___x_1032_ = v___x_1019_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1030_);
lean_ctor_set_uint64(v_reuseFailAlloc_1040_, sizeof(void*)*1, v_tid_1016_);
v___x_1032_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1034_; 
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 9, v___x_1032_);
v___x_1034_ = v___x_1014_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_env_1001_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_messages_1002_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v_scopes_1003_);
lean_ctor_set(v_reuseFailAlloc_1039_, 3, v_usedQuotCtxts_1004_);
lean_ctor_set(v_reuseFailAlloc_1039_, 4, v_nextMacroScope_1005_);
lean_ctor_set(v_reuseFailAlloc_1039_, 5, v_maxRecDepth_1006_);
lean_ctor_set(v_reuseFailAlloc_1039_, 6, v_ngen_1007_);
lean_ctor_set(v_reuseFailAlloc_1039_, 7, v_auxDeclNGen_1008_);
lean_ctor_set(v_reuseFailAlloc_1039_, 8, v_infoState_1009_);
lean_ctor_set(v_reuseFailAlloc_1039_, 9, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1039_, 10, v_snapshotTasks_1010_);
lean_ctor_set(v_reuseFailAlloc_1039_, 11, v_prevLinterStates_1011_);
lean_ctor_set(v_reuseFailAlloc_1039_, 12, v_codeQualityEntryTasks_1012_);
v___x_1034_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1035_ = lean_st_ref_put(v___y_990_, v___x_1034_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1021_);
v___x_1037_ = v___x_997_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1021_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
lean_dec_ref(v_msg_988_);
lean_dec(v_cls_987_);
v_a_1044_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_992_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_992_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___boxed(lean_object* v_cls_1052_, lean_object* v_msg_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v_cls_1052_, v_msg_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0(lean_object* v_x_1062_){
_start:
{
lean_object* v___x_1063_; uint8_t v___x_1064_; 
v___x_1063_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___closed__1));
v___x_1064_ = lean_name_eq(v_x_1062_, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0___boxed(lean_object* v_x_1065_){
_start:
{
uint8_t v_res_1066_; lean_object* v_r_1067_; 
v_res_1066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___lam__0(v_x_1065_);
lean_dec(v_x_1065_);
v_r_1067_ = lean_box(v_res_1066_);
return v_r_1067_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg(lean_object* v_a_1068_, lean_object* v_x_1069_){
_start:
{
if (lean_obj_tag(v_x_1069_) == 0)
{
uint8_t v___x_1070_; 
v___x_1070_ = 0;
return v___x_1070_;
}
else
{
lean_object* v_key_1071_; lean_object* v_tail_1072_; uint8_t v___y_1074_; lean_object* v_fst_1076_; lean_object* v_snd_1077_; lean_object* v_fst_1078_; lean_object* v_snd_1079_; uint8_t v___x_1080_; 
v_key_1071_ = lean_ctor_get(v_x_1069_, 0);
v_tail_1072_ = lean_ctor_get(v_x_1069_, 2);
v_fst_1076_ = lean_ctor_get(v_key_1071_, 0);
v_snd_1077_ = lean_ctor_get(v_key_1071_, 1);
v_fst_1078_ = lean_ctor_get(v_a_1068_, 0);
v_snd_1079_ = lean_ctor_get(v_a_1068_, 1);
v___x_1080_ = l_Lean_Syntax_instBEqRange_beq(v_fst_1076_, v_fst_1078_);
if (v___x_1080_ == 0)
{
v___y_1074_ = v___x_1080_;
goto v___jp_1073_;
}
else
{
uint8_t v___x_1081_; 
v___x_1081_ = l_Lean_instBEqMVarId_beq(v_snd_1077_, v_snd_1079_);
v___y_1074_ = v___x_1081_;
goto v___jp_1073_;
}
v___jp_1073_:
{
if (v___y_1074_ == 0)
{
v_x_1069_ = v_tail_1072_;
goto _start;
}
else
{
return v___y_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg___boxed(lean_object* v_a_1082_, lean_object* v_x_1083_){
_start:
{
uint8_t v_res_1084_; lean_object* v_r_1085_; 
v_res_1084_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg(v_a_1082_, v_x_1083_);
lean_dec(v_x_1083_);
lean_dec_ref(v_a_1082_);
v_r_1085_ = lean_box(v_res_1084_);
return v_r_1085_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg(lean_object* v_m_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_buckets_1088_; lean_object* v_fst_1089_; lean_object* v_snd_1090_; lean_object* v___x_1091_; uint64_t v___x_1092_; uint64_t v___x_1093_; uint64_t v___x_1094_; uint64_t v___x_1095_; uint64_t v___x_1096_; uint64_t v_fold_1097_; uint64_t v___x_1098_; uint64_t v___x_1099_; uint64_t v___x_1100_; size_t v___x_1101_; size_t v___x_1102_; size_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v_buckets_1088_ = lean_ctor_get(v_m_1086_, 1);
v_fst_1089_ = lean_ctor_get(v_a_1087_, 0);
v_snd_1090_ = lean_ctor_get(v_a_1087_, 1);
v___x_1091_ = lean_array_get_size(v_buckets_1088_);
v___x_1092_ = l_Lean_Syntax_instHashableRange_hash(v_fst_1089_);
v___x_1093_ = l_Lean_instHashableMVarId_hash(v_snd_1090_);
v___x_1094_ = lean_uint64_mix_hash(v___x_1092_, v___x_1093_);
v___x_1095_ = 32ULL;
v___x_1096_ = lean_uint64_shift_right(v___x_1094_, v___x_1095_);
v_fold_1097_ = lean_uint64_xor(v___x_1094_, v___x_1096_);
v___x_1098_ = 16ULL;
v___x_1099_ = lean_uint64_shift_right(v_fold_1097_, v___x_1098_);
v___x_1100_ = lean_uint64_xor(v_fold_1097_, v___x_1099_);
v___x_1101_ = lean_uint64_to_usize(v___x_1100_);
v___x_1102_ = lean_usize_of_nat(v___x_1091_);
v___x_1103_ = ((size_t)1ULL);
v___x_1104_ = lean_usize_sub(v___x_1102_, v___x_1103_);
v___x_1105_ = lean_usize_land(v___x_1101_, v___x_1104_);
v___x_1106_ = lean_array_uget_borrowed(v_buckets_1088_, v___x_1105_);
v___x_1107_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg(v_a_1087_, v___x_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg___boxed(lean_object* v_m_1108_, lean_object* v_a_1109_){
_start:
{
uint8_t v_res_1110_; lean_object* v_r_1111_; 
v_res_1110_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg(v_m_1108_, v_a_1109_);
lean_dec_ref(v_a_1109_);
lean_dec_ref(v_m_1108_);
v_r_1111_ = lean_box(v_res_1110_);
return v_r_1111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3_spec__8___redArg(lean_object* v_x_1112_, lean_object* v_x_1113_){
_start:
{
if (lean_obj_tag(v_x_1113_) == 0)
{
return v_x_1112_;
}
else
{
lean_object* v_key_1114_; lean_object* v_value_1115_; lean_object* v_tail_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1143_; 
v_key_1114_ = lean_ctor_get(v_x_1113_, 0);
v_value_1115_ = lean_ctor_get(v_x_1113_, 1);
v_tail_1116_ = lean_ctor_get(v_x_1113_, 2);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_x_1113_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1118_ = v_x_1113_;
v_isShared_1119_ = v_isSharedCheck_1143_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_tail_1116_);
lean_inc(v_value_1115_);
lean_inc(v_key_1114_);
lean_dec(v_x_1113_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1143_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v_fst_1120_; lean_object* v_snd_1121_; lean_object* v___x_1122_; uint64_t v___x_1123_; uint64_t v___x_1124_; uint64_t v___x_1125_; uint64_t v___x_1126_; uint64_t v___x_1127_; uint64_t v_fold_1128_; uint64_t v___x_1129_; uint64_t v___x_1130_; uint64_t v___x_1131_; size_t v___x_1132_; size_t v___x_1133_; size_t v___x_1134_; size_t v___x_1135_; size_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1139_; 
v_fst_1120_ = lean_ctor_get(v_key_1114_, 0);
v_snd_1121_ = lean_ctor_get(v_key_1114_, 1);
v___x_1122_ = lean_array_get_size(v_x_1112_);
v___x_1123_ = l_Lean_Syntax_instHashableRange_hash(v_fst_1120_);
v___x_1124_ = l_Lean_instHashableMVarId_hash(v_snd_1121_);
v___x_1125_ = lean_uint64_mix_hash(v___x_1123_, v___x_1124_);
v___x_1126_ = 32ULL;
v___x_1127_ = lean_uint64_shift_right(v___x_1125_, v___x_1126_);
v_fold_1128_ = lean_uint64_xor(v___x_1125_, v___x_1127_);
v___x_1129_ = 16ULL;
v___x_1130_ = lean_uint64_shift_right(v_fold_1128_, v___x_1129_);
v___x_1131_ = lean_uint64_xor(v_fold_1128_, v___x_1130_);
v___x_1132_ = lean_uint64_to_usize(v___x_1131_);
v___x_1133_ = lean_usize_of_nat(v___x_1122_);
v___x_1134_ = ((size_t)1ULL);
v___x_1135_ = lean_usize_sub(v___x_1133_, v___x_1134_);
v___x_1136_ = lean_usize_land(v___x_1132_, v___x_1135_);
v___x_1137_ = lean_array_uget_borrowed(v_x_1112_, v___x_1136_);
lean_inc(v___x_1137_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 2, v___x_1137_);
v___x_1139_ = v___x_1118_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_key_1114_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_value_1115_);
lean_ctor_set(v_reuseFailAlloc_1142_, 2, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_array_uset(v_x_1112_, v___x_1136_, v___x_1139_);
v_x_1112_ = v___x_1140_;
v_x_1113_ = v_tail_1116_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3___redArg(lean_object* v_i_1144_, lean_object* v_source_1145_, lean_object* v_target_1146_){
_start:
{
lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1147_ = lean_array_get_size(v_source_1145_);
v___x_1148_ = lean_nat_dec_lt(v_i_1144_, v___x_1147_);
if (v___x_1148_ == 0)
{
lean_dec_ref(v_source_1145_);
lean_dec(v_i_1144_);
return v_target_1146_;
}
else
{
lean_object* v_es_1149_; lean_object* v___x_1150_; lean_object* v_source_1151_; lean_object* v_target_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_es_1149_ = lean_array_fget(v_source_1145_, v_i_1144_);
v___x_1150_ = lean_box(0);
v_source_1151_ = lean_array_fset(v_source_1145_, v_i_1144_, v___x_1150_);
v_target_1152_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3_spec__8___redArg(v_target_1146_, v_es_1149_);
v___x_1153_ = lean_unsigned_to_nat(1u);
v___x_1154_ = lean_nat_add(v_i_1144_, v___x_1153_);
lean_dec(v_i_1144_);
v_i_1144_ = v___x_1154_;
v_source_1145_ = v_source_1151_;
v_target_1146_ = v_target_1152_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2___redArg(lean_object* v_data_1156_){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v_nbuckets_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1157_ = lean_array_get_size(v_data_1156_);
v___x_1158_ = lean_unsigned_to_nat(2u);
v_nbuckets_1159_ = lean_nat_mul(v___x_1157_, v___x_1158_);
v___x_1160_ = lean_unsigned_to_nat(0u);
v___x_1161_ = lean_box(0);
v___x_1162_ = lean_mk_array(v_nbuckets_1159_, v___x_1161_);
v___x_1163_ = lean_array_propagate_mark(v_data_1156_, v___x_1162_);
v___x_1164_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3___redArg(v___x_1160_, v_data_1156_, v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(lean_object* v_m_1165_, lean_object* v_a_1166_, lean_object* v_b_1167_){
_start:
{
lean_object* v_size_1168_; lean_object* v_buckets_1169_; lean_object* v_fst_1170_; lean_object* v_snd_1171_; lean_object* v___x_1172_; uint64_t v___x_1173_; uint64_t v___x_1174_; uint64_t v___x_1175_; uint64_t v___x_1176_; uint64_t v___x_1177_; uint64_t v_fold_1178_; uint64_t v___x_1179_; uint64_t v___x_1180_; uint64_t v___x_1181_; size_t v___x_1182_; size_t v___x_1183_; size_t v___x_1184_; size_t v___x_1185_; size_t v___x_1186_; lean_object* v_bkt_1187_; uint8_t v___x_1188_; 
v_size_1168_ = lean_ctor_get(v_m_1165_, 0);
v_buckets_1169_ = lean_ctor_get(v_m_1165_, 1);
v_fst_1170_ = lean_ctor_get(v_a_1166_, 0);
v_snd_1171_ = lean_ctor_get(v_a_1166_, 1);
v___x_1172_ = lean_array_get_size(v_buckets_1169_);
v___x_1173_ = l_Lean_Syntax_instHashableRange_hash(v_fst_1170_);
v___x_1174_ = l_Lean_instHashableMVarId_hash(v_snd_1171_);
v___x_1175_ = lean_uint64_mix_hash(v___x_1173_, v___x_1174_);
v___x_1176_ = 32ULL;
v___x_1177_ = lean_uint64_shift_right(v___x_1175_, v___x_1176_);
v_fold_1178_ = lean_uint64_xor(v___x_1175_, v___x_1177_);
v___x_1179_ = 16ULL;
v___x_1180_ = lean_uint64_shift_right(v_fold_1178_, v___x_1179_);
v___x_1181_ = lean_uint64_xor(v_fold_1178_, v___x_1180_);
v___x_1182_ = lean_uint64_to_usize(v___x_1181_);
v___x_1183_ = lean_usize_of_nat(v___x_1172_);
v___x_1184_ = ((size_t)1ULL);
v___x_1185_ = lean_usize_sub(v___x_1183_, v___x_1184_);
v___x_1186_ = lean_usize_land(v___x_1182_, v___x_1185_);
v_bkt_1187_ = lean_array_uget_borrowed(v_buckets_1169_, v___x_1186_);
v___x_1188_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg(v_a_1166_, v_bkt_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1209_; 
lean_inc_ref(v_buckets_1169_);
lean_inc(v_size_1168_);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_m_1165_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; lean_object* v_unused_1211_; 
v_unused_1210_ = lean_ctor_get(v_m_1165_, 1);
lean_dec(v_unused_1210_);
v_unused_1211_ = lean_ctor_get(v_m_1165_, 0);
lean_dec(v_unused_1211_);
v___x_1190_ = v_m_1165_;
v_isShared_1191_ = v_isSharedCheck_1209_;
goto v_resetjp_1189_;
}
else
{
lean_dec(v_m_1165_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1209_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1192_; lean_object* v_size_x27_1193_; lean_object* v___x_1194_; lean_object* v_buckets_x27_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; uint8_t v___x_1201_; 
v___x_1192_ = lean_unsigned_to_nat(1u);
v_size_x27_1193_ = lean_nat_add(v_size_1168_, v___x_1192_);
lean_dec(v_size_1168_);
lean_inc(v_bkt_1187_);
v___x_1194_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1194_, 0, v_a_1166_);
lean_ctor_set(v___x_1194_, 1, v_b_1167_);
lean_ctor_set(v___x_1194_, 2, v_bkt_1187_);
v_buckets_x27_1195_ = lean_array_uset(v_buckets_1169_, v___x_1186_, v___x_1194_);
v___x_1196_ = lean_unsigned_to_nat(4u);
v___x_1197_ = lean_nat_mul(v_size_x27_1193_, v___x_1196_);
v___x_1198_ = lean_unsigned_to_nat(3u);
v___x_1199_ = lean_nat_div(v___x_1197_, v___x_1198_);
lean_dec(v___x_1197_);
v___x_1200_ = lean_array_get_size(v_buckets_x27_1195_);
v___x_1201_ = lean_nat_dec_le(v___x_1199_, v___x_1200_);
lean_dec(v___x_1199_);
if (v___x_1201_ == 0)
{
lean_object* v_val_1202_; lean_object* v___x_1204_; 
v_val_1202_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2___redArg(v_buckets_x27_1195_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 1, v_val_1202_);
lean_ctor_set(v___x_1190_, 0, v_size_x27_1193_);
v___x_1204_ = v___x_1190_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_size_x27_1193_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v_val_1202_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
else
{
lean_object* v___x_1207_; 
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 1, v_buckets_x27_1195_);
lean_ctor_set(v___x_1190_, 0, v_size_x27_1193_);
v___x_1207_ = v___x_1190_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_size_x27_1193_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_buckets_x27_1195_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_dec(v_b_1167_);
lean_dec_ref(v_a_1166_);
return v_m_1165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(lean_object* v___x_1212_, lean_object* v_fst_1213_, lean_object* v_snd_1214_, lean_object* v___x_1215_, lean_object* v_as_1216_, size_t v_sz_1217_, size_t v_i_1218_, lean_object* v_b_1219_){
_start:
{
lean_object* v_a_1222_; uint8_t v___x_1226_; 
v___x_1226_ = lean_usize_dec_lt(v_i_1218_, v_sz_1217_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; 
lean_dec(v___x_1215_);
lean_dec(v_snd_1214_);
lean_dec(v_fst_1213_);
lean_dec_ref(v___x_1212_);
v___x_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1227_, 0, v_b_1219_);
return v___x_1227_;
}
else
{
lean_object* v_a_1228_; lean_object* v_snd_1229_; lean_object* v_fst_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1266_; 
v_a_1228_ = lean_array_uget(v_as_1216_, v_i_1218_);
v_snd_1229_ = lean_ctor_get(v_a_1228_, 1);
v_fst_1230_ = lean_ctor_get(v_a_1228_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_a_1228_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1232_ = v_a_1228_;
v_isShared_1233_ = v_isSharedCheck_1266_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_snd_1229_);
lean_inc(v_fst_1230_);
lean_dec(v_a_1228_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1266_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v_fst_1234_; lean_object* v_snd_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1265_; 
v_fst_1234_ = lean_ctor_get(v_snd_1229_, 0);
v_snd_1235_ = lean_ctor_get(v_snd_1229_, 1);
v_isSharedCheck_1265_ = !lean_is_exclusive(v_snd_1229_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1237_ = v_snd_1229_;
v_isShared_1238_ = v_isSharedCheck_1265_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_snd_1235_);
lean_inc(v_fst_1234_);
lean_dec(v_snd_1229_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1265_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v_fst_1239_; lean_object* v_snd_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1264_; 
v_fst_1239_ = lean_ctor_get(v_b_1219_, 0);
v_snd_1240_ = lean_ctor_get(v_b_1219_, 1);
v_isSharedCheck_1264_ = !lean_is_exclusive(v_b_1219_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1242_ = v_b_1219_;
v_isShared_1243_ = v_isSharedCheck_1264_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_snd_1240_);
lean_inc(v_fst_1239_);
lean_dec(v_b_1219_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1264_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
lean_inc(v_snd_1235_);
lean_inc_ref(v___x_1212_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v_snd_1235_);
lean_ctor_set(v___x_1242_, 0, v___x_1212_);
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_snd_1235_);
v___x_1245_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
uint8_t v___x_1246_; 
v___x_1246_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg(v_snd_1240_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_object* v_env_1247_; lean_object* v_mctx_1248_; lean_object* v_opts_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; 
v_env_1247_ = lean_ctor_get(v_fst_1230_, 0);
lean_inc_ref(v_env_1247_);
v_mctx_1248_ = lean_ctor_get(v_fst_1230_, 1);
lean_inc_ref(v_mctx_1248_);
v_opts_1249_ = lean_ctor_get(v_fst_1230_, 3);
lean_inc_ref(v_opts_1249_);
lean_dec(v_fst_1230_);
v___x_1250_ = lean_box(0);
v___x_1251_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(v_snd_1240_, v___x_1245_, v___x_1250_);
lean_inc(v_snd_1214_);
lean_inc(v_fst_1213_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 1, v_snd_1214_);
lean_ctor_set(v___x_1232_, 0, v_fst_1213_);
v___x_1253_ = v___x_1232_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_fst_1213_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_snd_1214_);
v___x_1253_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1257_; 
lean_inc(v___x_1215_);
v___x_1254_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
lean_ctor_set(v___x_1254_, 1, v___x_1215_);
lean_ctor_set(v___x_1254_, 2, v_env_1247_);
lean_ctor_set(v___x_1254_, 3, v_mctx_1248_);
lean_ctor_set(v___x_1254_, 4, v_opts_1249_);
lean_ctor_set(v___x_1254_, 5, v_fst_1234_);
lean_ctor_set(v___x_1254_, 6, v_snd_1235_);
v___x_1255_ = lean_array_push(v_fst_1239_, v___x_1254_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 1, v___x_1251_);
lean_ctor_set(v___x_1237_, 0, v___x_1255_);
v___x_1257_ = v___x_1237_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1255_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v___x_1251_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
v_a_1222_ = v___x_1257_;
goto v___jp_1221_;
}
}
}
else
{
lean_object* v___x_1261_; 
lean_dec_ref(v___x_1245_);
lean_dec(v_snd_1235_);
lean_dec(v_fst_1234_);
lean_del_object(v___x_1232_);
lean_dec(v_fst_1230_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 1, v_snd_1240_);
lean_ctor_set(v___x_1237_, 0, v_fst_1239_);
v___x_1261_ = v___x_1237_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_fst_1239_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_snd_1240_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
v_a_1222_ = v___x_1261_;
goto v___jp_1221_;
}
}
}
}
}
}
}
v___jp_1221_:
{
size_t v___x_1223_; size_t v___x_1224_; 
v___x_1223_ = ((size_t)1ULL);
v___x_1224_ = lean_usize_add(v_i_1218_, v___x_1223_);
v_i_1218_ = v___x_1224_;
v_b_1219_ = v_a_1222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg___boxed(lean_object* v___x_1267_, lean_object* v_fst_1268_, lean_object* v_snd_1269_, lean_object* v___x_1270_, lean_object* v_as_1271_, lean_object* v_sz_1272_, lean_object* v_i_1273_, lean_object* v_b_1274_, lean_object* v___y_1275_){
_start:
{
size_t v_sz_boxed_1276_; size_t v_i_boxed_1277_; lean_object* v_res_1278_; 
v_sz_boxed_1276_ = lean_unbox_usize(v_sz_1272_);
lean_dec(v_sz_1272_);
v_i_boxed_1277_ = lean_unbox_usize(v_i_1273_);
lean_dec(v_i_1273_);
v_res_1278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v___x_1267_, v_fst_1268_, v_snd_1269_, v___x_1270_, v_as_1271_, v_sz_boxed_1276_, v_i_boxed_1277_, v_b_1274_);
lean_dec_ref(v_as_1271_);
return v_res_1278_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1283_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__2));
v___x_1285_ = l_Lean_Name_append(v___x_1284_, v___x_1283_);
return v___x_1285_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__4));
v___x_1288_ = l_Lean_stringToMessageData(v___x_1287_);
return v___x_1288_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__6));
v___x_1291_ = l_Lean_stringToMessageData(v___x_1290_);
return v___x_1291_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__8));
v___x_1294_ = l_Lean_stringToMessageData(v___x_1293_);
return v___x_1294_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__10));
v___x_1297_ = l_Lean_stringToMessageData(v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12(lean_object* v___x_1298_, lean_object* v_val_1299_, lean_object* v_cmd_1300_, uint8_t v_onUnsolved_1301_, uint8_t v___y_1302_, lean_object* v_as_1303_, size_t v_sz_1304_, size_t v_i_1305_, lean_object* v_b_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
uint8_t v___x_1310_; 
v___x_1310_ = lean_usize_dec_lt(v_i_1305_, v_sz_1304_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; 
lean_dec(v_cmd_1300_);
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v_b_1306_);
return v___x_1311_;
}
else
{
lean_object* v_snd_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1460_; 
v_snd_1312_ = lean_ctor_get(v_b_1306_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_b_1306_);
if (v_isSharedCheck_1460_ == 0)
{
lean_object* v_unused_1461_; 
v_unused_1461_ = lean_ctor_get(v_b_1306_, 0);
lean_dec(v_unused_1461_);
v___x_1314_ = v_b_1306_;
v_isShared_1315_ = v_isSharedCheck_1460_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_snd_1312_);
lean_dec(v_b_1306_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1460_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v_fst_1316_; lean_object* v_snd_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1459_; 
v_fst_1316_ = lean_ctor_get(v_snd_1312_, 0);
v_snd_1317_ = lean_ctor_get(v_snd_1312_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_snd_1312_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1319_ = v_snd_1312_;
v_isShared_1320_ = v_isSharedCheck_1459_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_snd_1317_);
lean_inc(v_fst_1316_);
lean_dec(v_snd_1312_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1459_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v_a_1321_; lean_object* v_pos_1322_; lean_object* v_endPos_1323_; uint8_t v_severity_1324_; lean_object* v_data_1325_; lean_object* v___x_1326_; lean_object* v_a_1328_; 
v_a_1321_ = lean_array_uget_borrowed(v_as_1303_, v_i_1305_);
v_pos_1322_ = lean_ctor_get(v_a_1321_, 1);
v_endPos_1323_ = lean_ctor_get(v_a_1321_, 2);
lean_inc(v_endPos_1323_);
v_severity_1324_ = lean_ctor_get_uint8(v_a_1321_, sizeof(void*)*5 + 1);
v_data_1325_ = lean_ctor_get(v_a_1321_, 4);
v___x_1326_ = lean_box(0);
if (v_severity_1324_ == 2)
{
lean_object* v___f_1341_; uint8_t v___x_1342_; 
v___f_1341_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0));
lean_inc(v_data_1325_);
v___x_1342_ = l_Lean_MessageData_hasTag(v___f_1341_, v_data_1325_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
lean_dec(v_endPos_1323_);
lean_del_object(v___x_1314_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_fst_1316_);
lean_ctor_set(v___x_1343_, 1, v_snd_1317_);
v_a_1328_ = v___x_1343_;
goto v___jp_1327_;
}
else
{
if (lean_obj_tag(v_endPos_1323_) == 1)
{
lean_object* v_val_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1456_; 
v_val_1344_ = lean_ctor_get(v_endPos_1323_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_endPos_1323_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1346_ = v_endPos_1323_;
v_isShared_1347_ = v_isSharedCheck_1456_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_val_1344_);
lean_dec(v_endPos_1323_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1456_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; uint8_t v___x_1352_; 
lean_inc_ref(v_pos_1322_);
v___x_1348_ = l_Lean_FileMap_ofPosition(v___x_1298_, v_pos_1322_);
v___x_1349_ = l_Lean_FileMap_ofPosition(v___x_1298_, v_val_1344_);
lean_inc(v___x_1349_);
lean_inc(v___x_1348_);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
v___x_1351_ = 0;
v___x_1352_ = l_Lean_Syntax_Range_includes(v_val_1299_, v___x_1350_, v___x_1351_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; 
lean_dec_ref_known(v___x_1350_, 2);
lean_dec(v___x_1349_);
lean_dec(v___x_1348_);
lean_del_object(v___x_1346_);
lean_del_object(v___x_1314_);
v___x_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1353_, 0, v_fst_1316_);
lean_ctor_set(v___x_1353_, 1, v_snd_1317_);
v_a_1328_ = v___x_1353_;
goto v___jp_1327_;
}
else
{
lean_object* v___x_1354_; 
lean_inc(v_cmd_1300_);
lean_inc_ref(v___x_1350_);
v___x_1354_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1350_, v_cmd_1300_);
if (lean_obj_tag(v___x_1354_) == 1)
{
lean_object* v_val_1355_; lean_object* v_fst_1356_; lean_object* v_snd_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1420_; 
lean_dec(v___x_1349_);
lean_dec(v___x_1348_);
lean_del_object(v___x_1346_);
v_val_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_val_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v_fst_1356_ = lean_ctor_get(v_val_1355_, 0);
v_snd_1357_ = lean_ctor_get(v_val_1355_, 1);
v_isSharedCheck_1420_ = !lean_is_exclusive(v_val_1355_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1359_ = v_val_1355_;
v_isShared_1360_ = v_isSharedCheck_1420_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_snd_1357_);
lean_inc(v_fst_1356_);
lean_dec(v_val_1355_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1420_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; uint8_t v___y_1418_; lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_Syntax_getPos_x3f(v_fst_1356_, v___x_1351_);
if (lean_obj_tag(v___x_1419_) == 0)
{
v___y_1418_ = v___x_1352_;
goto v___jp_1417_;
}
else
{
lean_dec_ref_known(v___x_1419_, 1);
v___y_1418_ = v___x_1351_;
goto v___jp_1417_;
}
v___jp_1361_:
{
lean_object* v___x_1367_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v_snd_1317_);
lean_ctor_set(v___x_1359_, 0, v_fst_1316_);
v___x_1367_ = v___x_1359_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_fst_1316_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v_snd_1317_);
v___x_1367_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
size_t v_sz_1368_; size_t v___x_1369_; lean_object* v___x_1370_; 
v_sz_1368_ = lean_array_size(v___y_1363_);
v___x_1369_ = ((size_t)0ULL);
v___x_1370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v___x_1350_, v_fst_1356_, v_snd_1357_, v___y_1362_, v___y_1363_, v_sz_1368_, v___x_1369_, v___x_1367_);
lean_dec_ref(v___y_1363_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v_fst_1372_; lean_object* v_snd_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v_fst_1372_ = lean_ctor_get(v_a_1371_, 0);
v_snd_1373_ = lean_ctor_get(v_a_1371_, 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_a_1371_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v_a_1371_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_snd_1373_);
lean_inc(v_fst_1372_);
lean_dec(v_a_1371_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_fst_1372_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_snd_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
v_a_1328_ = v___x_1378_;
goto v___jp_1327_;
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_del_object(v___x_1319_);
lean_dec(v_cmd_1300_);
v_a_1381_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1370_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1370_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
v___jp_1390_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
lean_inc_ref(v___x_1350_);
v___x_1391_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1350_);
v___x_1392_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1325_);
v___x_1393_ = lean_array_get_size(v___x_1392_);
v___x_1394_ = lean_unsigned_to_nat(0u);
v___x_1395_ = lean_nat_dec_eq(v___x_1393_, v___x_1394_);
if (v___x_1395_ == 0)
{
v___y_1362_ = v___x_1391_;
v___y_1363_ = v___x_1392_;
v___y_1364_ = v___y_1307_;
v___y_1365_ = v___y_1308_;
goto v___jp_1361_;
}
else
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v_scopes_1401_; lean_object* v___x_1402_; lean_object* v_opts_1403_; uint8_t v_hasTrace_1404_; 
v___x_1396_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1397_ = l_Lean_inheritedTraceOptions;
v___x_1398_ = lean_st_ref_get(v___x_1397_);
v___x_1399_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1400_ = lean_st_ref_get(v___y_1308_);
v_scopes_1401_ = lean_ctor_get(v___x_1400_, 2);
lean_inc(v_scopes_1401_);
lean_dec(v___x_1400_);
v___x_1402_ = l_List_head_x21___redArg(v___x_1399_, v_scopes_1401_);
lean_dec(v_scopes_1401_);
v_opts_1403_ = lean_ctor_get(v___x_1402_, 1);
lean_inc_ref(v_opts_1403_);
lean_dec(v___x_1402_);
v_hasTrace_1404_ = lean_ctor_get_uint8(v_opts_1403_, sizeof(void*)*1);
if (v_hasTrace_1404_ == 0)
{
lean_dec_ref(v_opts_1403_);
lean_dec(v___x_1398_);
v___y_1362_ = v___x_1391_;
v___y_1363_ = v___x_1392_;
v___y_1364_ = v___y_1307_;
v___y_1365_ = v___y_1308_;
goto v___jp_1361_;
}
else
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1406_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1398_, v_opts_1403_, v___x_1405_);
lean_dec_ref(v_opts_1403_);
lean_dec(v___x_1398_);
if (v___x_1406_ == 0)
{
v___y_1362_ = v___x_1391_;
v___y_1363_ = v___x_1392_;
v___y_1364_ = v___y_1307_;
v___y_1365_ = v___y_1308_;
goto v___jp_1361_;
}
else
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5);
v___x_1408_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1396_, v___x_1407_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_dec_ref_known(v___x_1408_, 1);
v___y_1362_ = v___x_1391_;
v___y_1363_ = v___x_1392_;
v___y_1364_ = v___y_1307_;
v___y_1365_ = v___y_1308_;
goto v___jp_1361_;
}
else
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
lean_dec_ref(v___x_1392_);
lean_dec(v___x_1391_);
lean_del_object(v___x_1359_);
lean_dec(v_snd_1357_);
lean_dec(v_fst_1356_);
lean_dec_ref_known(v___x_1350_, 2);
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v_fst_1316_);
lean_dec(v_cmd_1300_);
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1408_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1408_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
}
}
v___jp_1417_:
{
if (v_onUnsolved_1301_ == 0)
{
if (v___y_1302_ == 0)
{
lean_del_object(v___x_1359_);
lean_dec(v_snd_1357_);
lean_dec(v_fst_1356_);
lean_dec_ref_known(v___x_1350_, 2);
goto v___jp_1335_;
}
else
{
if (v___y_1418_ == 0)
{
lean_del_object(v___x_1359_);
lean_dec(v_snd_1357_);
lean_dec(v_fst_1356_);
lean_dec_ref_known(v___x_1350_, 2);
goto v___jp_1335_;
}
else
{
lean_del_object(v___x_1314_);
goto v___jp_1390_;
}
}
}
else
{
lean_del_object(v___x_1314_);
goto v___jp_1390_;
}
}
}
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v_scopes_1426_; lean_object* v___x_1427_; lean_object* v_opts_1428_; uint8_t v_hasTrace_1429_; 
lean_dec(v___x_1354_);
lean_dec_ref_known(v___x_1350_, 2);
lean_del_object(v___x_1314_);
v___x_1421_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1422_ = l_Lean_inheritedTraceOptions;
v___x_1423_ = lean_st_ref_get(v___x_1422_);
v___x_1424_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1425_ = lean_st_ref_get(v___y_1308_);
v_scopes_1426_ = lean_ctor_get(v___x_1425_, 2);
lean_inc(v_scopes_1426_);
lean_dec(v___x_1425_);
v___x_1427_ = l_List_head_x21___redArg(v___x_1424_, v_scopes_1426_);
lean_dec(v_scopes_1426_);
v_opts_1428_ = lean_ctor_get(v___x_1427_, 1);
lean_inc_ref(v_opts_1428_);
lean_dec(v___x_1427_);
v_hasTrace_1429_ = lean_ctor_get_uint8(v_opts_1428_, sizeof(void*)*1);
if (v_hasTrace_1429_ == 0)
{
lean_dec_ref(v_opts_1428_);
lean_dec(v___x_1423_);
lean_dec(v___x_1349_);
lean_dec(v___x_1348_);
lean_del_object(v___x_1346_);
goto v___jp_1339_;
}
else
{
lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1430_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1431_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1423_, v_opts_1428_, v___x_1430_);
lean_dec_ref(v_opts_1428_);
lean_dec(v___x_1423_);
if (v___x_1431_ == 0)
{
lean_dec(v___x_1349_);
lean_dec(v___x_1348_);
lean_del_object(v___x_1346_);
goto v___jp_1339_;
}
else
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
v___x_1432_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7);
v___x_1433_ = l_Nat_reprFast(v___x_1348_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set_tag(v___x_1346_, 3);
lean_ctor_set(v___x_1346_, 0, v___x_1433_);
v___x_1435_ = v___x_1346_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1436_ = l_Lean_MessageData_ofFormat(v___x_1435_);
v___x_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1432_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9);
v___x_1439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
v___x_1440_ = l_Nat_reprFast(v___x_1349_);
v___x_1441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
v___x_1442_ = l_Lean_MessageData_ofFormat(v___x_1441_);
v___x_1443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1439_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11);
v___x_1445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
v___x_1446_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1421_, v___x_1445_, v___y_1307_, v___y_1308_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_dec_ref_known(v___x_1446_, 1);
goto v___jp_1339_;
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v_fst_1316_);
lean_dec(v_cmd_1300_);
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
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
lean_object* v___x_1457_; 
lean_dec(v_endPos_1323_);
lean_del_object(v___x_1314_);
v___x_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1457_, 0, v_fst_1316_);
lean_ctor_set(v___x_1457_, 1, v_snd_1317_);
v_a_1328_ = v___x_1457_;
goto v___jp_1327_;
}
}
}
else
{
lean_object* v___x_1458_; 
lean_dec(v_endPos_1323_);
lean_del_object(v___x_1314_);
v___x_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1458_, 0, v_fst_1316_);
lean_ctor_set(v___x_1458_, 1, v_snd_1317_);
v_a_1328_ = v___x_1458_;
goto v___jp_1327_;
}
v___jp_1327_:
{
lean_object* v___x_1330_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 1, v_a_1328_);
lean_ctor_set(v___x_1319_, 0, v___x_1326_);
v___x_1330_ = v___x_1319_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v_a_1328_);
v___x_1330_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
size_t v___x_1331_; size_t v___x_1332_; 
v___x_1331_ = ((size_t)1ULL);
v___x_1332_ = lean_usize_add(v_i_1305_, v___x_1331_);
v_i_1305_ = v___x_1332_;
v_b_1306_ = v___x_1330_;
goto _start;
}
}
v___jp_1335_:
{
lean_object* v___x_1337_; 
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 1, v_snd_1317_);
lean_ctor_set(v___x_1314_, 0, v_fst_1316_);
v___x_1337_ = v___x_1314_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_fst_1316_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_snd_1317_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
v_a_1328_ = v___x_1337_;
goto v___jp_1327_;
}
}
v___jp_1339_:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v_fst_1316_);
lean_ctor_set(v___x_1340_, 1, v_snd_1317_);
v_a_1328_ = v___x_1340_;
goto v___jp_1327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___boxed(lean_object* v___x_1462_, lean_object* v_val_1463_, lean_object* v_cmd_1464_, lean_object* v_onUnsolved_1465_, lean_object* v___y_1466_, lean_object* v_as_1467_, lean_object* v_sz_1468_, lean_object* v_i_1469_, lean_object* v_b_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
uint8_t v_onUnsolved_boxed_1474_; uint8_t v___y_11947__boxed_1475_; size_t v_sz_boxed_1476_; size_t v_i_boxed_1477_; lean_object* v_res_1478_; 
v_onUnsolved_boxed_1474_ = lean_unbox(v_onUnsolved_1465_);
v___y_11947__boxed_1475_ = lean_unbox(v___y_1466_);
v_sz_boxed_1476_ = lean_unbox_usize(v_sz_1468_);
lean_dec(v_sz_1468_);
v_i_boxed_1477_ = lean_unbox_usize(v_i_1469_);
lean_dec(v_i_1469_);
v_res_1478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12(v___x_1462_, v_val_1463_, v_cmd_1464_, v_onUnsolved_boxed_1474_, v___y_11947__boxed_1475_, v_as_1467_, v_sz_boxed_1476_, v_i_boxed_1477_, v_b_1470_, v___y_1471_, v___y_1472_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec_ref(v_as_1467_);
lean_dec_ref(v_val_1463_);
lean_dec_ref(v___x_1462_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8(lean_object* v___x_1479_, lean_object* v_val_1480_, lean_object* v_cmd_1481_, uint8_t v_onUnsolved_1482_, uint8_t v___y_1483_, lean_object* v_as_1484_, size_t v_sz_1485_, size_t v_i_1486_, lean_object* v_b_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
uint8_t v___x_1491_; 
v___x_1491_ = lean_usize_dec_lt(v_i_1486_, v_sz_1485_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; 
lean_dec(v_cmd_1481_);
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v_b_1487_);
return v___x_1492_;
}
else
{
lean_object* v_snd_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1641_; 
v_snd_1493_ = lean_ctor_get(v_b_1487_, 1);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_b_1487_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; 
v_unused_1642_ = lean_ctor_get(v_b_1487_, 0);
lean_dec(v_unused_1642_);
v___x_1495_ = v_b_1487_;
v_isShared_1496_ = v_isSharedCheck_1641_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_snd_1493_);
lean_dec(v_b_1487_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1641_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v_fst_1497_; lean_object* v_snd_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1640_; 
v_fst_1497_ = lean_ctor_get(v_snd_1493_, 0);
v_snd_1498_ = lean_ctor_get(v_snd_1493_, 1);
v_isSharedCheck_1640_ = !lean_is_exclusive(v_snd_1493_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1500_ = v_snd_1493_;
v_isShared_1501_ = v_isSharedCheck_1640_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_snd_1498_);
lean_inc(v_fst_1497_);
lean_dec(v_snd_1493_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1640_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v_a_1502_; lean_object* v_pos_1503_; lean_object* v_endPos_1504_; uint8_t v_severity_1505_; lean_object* v_data_1506_; lean_object* v___x_1507_; lean_object* v_a_1509_; 
v_a_1502_ = lean_array_uget_borrowed(v_as_1484_, v_i_1486_);
v_pos_1503_ = lean_ctor_get(v_a_1502_, 1);
v_endPos_1504_ = lean_ctor_get(v_a_1502_, 2);
lean_inc(v_endPos_1504_);
v_severity_1505_ = lean_ctor_get_uint8(v_a_1502_, sizeof(void*)*5 + 1);
v_data_1506_ = lean_ctor_get(v_a_1502_, 4);
v___x_1507_ = lean_box(0);
if (v_severity_1505_ == 2)
{
lean_object* v___f_1522_; uint8_t v___x_1523_; 
v___f_1522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0));
lean_inc(v_data_1506_);
v___x_1523_ = l_Lean_MessageData_hasTag(v___f_1522_, v_data_1506_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; 
lean_dec(v_endPos_1504_);
lean_del_object(v___x_1495_);
v___x_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1524_, 0, v_fst_1497_);
lean_ctor_set(v___x_1524_, 1, v_snd_1498_);
v_a_1509_ = v___x_1524_;
goto v___jp_1508_;
}
else
{
if (lean_obj_tag(v_endPos_1504_) == 1)
{
lean_object* v_val_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1637_; 
v_val_1525_ = lean_ctor_get(v_endPos_1504_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v_endPos_1504_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1527_ = v_endPos_1504_;
v_isShared_1528_ = v_isSharedCheck_1637_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_val_1525_);
lean_dec(v_endPos_1504_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1637_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; uint8_t v___x_1533_; 
lean_inc_ref(v_pos_1503_);
v___x_1529_ = l_Lean_FileMap_ofPosition(v___x_1479_, v_pos_1503_);
v___x_1530_ = l_Lean_FileMap_ofPosition(v___x_1479_, v_val_1525_);
lean_inc(v___x_1530_);
lean_inc(v___x_1529_);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
v___x_1532_ = 0;
v___x_1533_ = l_Lean_Syntax_Range_includes(v_val_1480_, v___x_1531_, v___x_1532_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; 
lean_dec_ref_known(v___x_1531_, 2);
lean_dec(v___x_1530_);
lean_dec(v___x_1529_);
lean_del_object(v___x_1527_);
lean_del_object(v___x_1495_);
v___x_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1534_, 0, v_fst_1497_);
lean_ctor_set(v___x_1534_, 1, v_snd_1498_);
v_a_1509_ = v___x_1534_;
goto v___jp_1508_;
}
else
{
lean_object* v___x_1535_; 
lean_inc(v_cmd_1481_);
lean_inc_ref(v___x_1531_);
v___x_1535_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1531_, v_cmd_1481_);
if (lean_obj_tag(v___x_1535_) == 1)
{
lean_object* v_val_1536_; lean_object* v_fst_1537_; lean_object* v_snd_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1601_; 
lean_dec(v___x_1530_);
lean_dec(v___x_1529_);
lean_del_object(v___x_1527_);
v_val_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_val_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v_fst_1537_ = lean_ctor_get(v_val_1536_, 0);
v_snd_1538_ = lean_ctor_get(v_val_1536_, 1);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_val_1536_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1540_ = v_val_1536_;
v_isShared_1541_ = v_isSharedCheck_1601_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_snd_1538_);
lean_inc(v_fst_1537_);
lean_dec(v_val_1536_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1601_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; uint8_t v___y_1599_; lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_Syntax_getPos_x3f(v_fst_1537_, v___x_1532_);
if (lean_obj_tag(v___x_1600_) == 0)
{
v___y_1599_ = v___x_1533_;
goto v___jp_1598_;
}
else
{
lean_dec_ref_known(v___x_1600_, 1);
v___y_1599_ = v___x_1532_;
goto v___jp_1598_;
}
v___jp_1542_:
{
lean_object* v___x_1548_; 
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 1, v_snd_1498_);
lean_ctor_set(v___x_1540_, 0, v_fst_1497_);
v___x_1548_ = v___x_1540_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_fst_1497_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_snd_1498_);
v___x_1548_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
size_t v_sz_1549_; size_t v___x_1550_; lean_object* v___x_1551_; 
v_sz_1549_ = lean_array_size(v___y_1543_);
v___x_1550_ = ((size_t)0ULL);
v___x_1551_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v___x_1531_, v_fst_1537_, v_snd_1538_, v___y_1544_, v___y_1543_, v_sz_1549_, v___x_1550_, v___x_1548_);
lean_dec_ref(v___y_1543_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v_fst_1553_; lean_object* v_snd_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
v_fst_1553_ = lean_ctor_get(v_a_1552_, 0);
v_snd_1554_ = lean_ctor_get(v_a_1552_, 1);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_a_1552_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v_a_1552_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_snd_1554_);
lean_inc(v_fst_1553_);
lean_dec(v_a_1552_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_fst_1553_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_snd_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
v_a_1509_ = v___x_1559_;
goto v___jp_1508_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
lean_del_object(v___x_1500_);
lean_dec(v_cmd_1481_);
v_a_1562_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1551_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1551_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
v___jp_1571_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
lean_inc_ref(v___x_1531_);
v___x_1572_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1531_);
v___x_1573_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1506_);
v___x_1574_ = lean_array_get_size(v___x_1573_);
v___x_1575_ = lean_unsigned_to_nat(0u);
v___x_1576_ = lean_nat_dec_eq(v___x_1574_, v___x_1575_);
if (v___x_1576_ == 0)
{
v___y_1543_ = v___x_1573_;
v___y_1544_ = v___x_1572_;
v___y_1545_ = v___y_1488_;
v___y_1546_ = v___y_1489_;
goto v___jp_1542_;
}
else
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v_scopes_1582_; lean_object* v___x_1583_; lean_object* v_opts_1584_; uint8_t v_hasTrace_1585_; 
v___x_1577_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1578_ = l_Lean_inheritedTraceOptions;
v___x_1579_ = lean_st_ref_get(v___x_1578_);
v___x_1580_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1581_ = lean_st_ref_get(v___y_1489_);
v_scopes_1582_ = lean_ctor_get(v___x_1581_, 2);
lean_inc(v_scopes_1582_);
lean_dec(v___x_1581_);
v___x_1583_ = l_List_head_x21___redArg(v___x_1580_, v_scopes_1582_);
lean_dec(v_scopes_1582_);
v_opts_1584_ = lean_ctor_get(v___x_1583_, 1);
lean_inc_ref(v_opts_1584_);
lean_dec(v___x_1583_);
v_hasTrace_1585_ = lean_ctor_get_uint8(v_opts_1584_, sizeof(void*)*1);
if (v_hasTrace_1585_ == 0)
{
lean_dec_ref(v_opts_1584_);
lean_dec(v___x_1579_);
v___y_1543_ = v___x_1573_;
v___y_1544_ = v___x_1572_;
v___y_1545_ = v___y_1488_;
v___y_1546_ = v___y_1489_;
goto v___jp_1542_;
}
else
{
lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1586_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1587_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1579_, v_opts_1584_, v___x_1586_);
lean_dec_ref(v_opts_1584_);
lean_dec(v___x_1579_);
if (v___x_1587_ == 0)
{
v___y_1543_ = v___x_1573_;
v___y_1544_ = v___x_1572_;
v___y_1545_ = v___y_1488_;
v___y_1546_ = v___y_1489_;
goto v___jp_1542_;
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5);
v___x_1589_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1577_, v___x_1588_, v___y_1488_, v___y_1489_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_dec_ref_known(v___x_1589_, 1);
v___y_1543_ = v___x_1573_;
v___y_1544_ = v___x_1572_;
v___y_1545_ = v___y_1488_;
v___y_1546_ = v___y_1489_;
goto v___jp_1542_;
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec_ref(v___x_1573_);
lean_dec(v___x_1572_);
lean_del_object(v___x_1540_);
lean_dec(v_snd_1538_);
lean_dec(v_fst_1537_);
lean_dec_ref_known(v___x_1531_, 2);
lean_del_object(v___x_1500_);
lean_dec(v_snd_1498_);
lean_dec(v_fst_1497_);
lean_dec(v_cmd_1481_);
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1589_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
}
}
v___jp_1598_:
{
if (v_onUnsolved_1482_ == 0)
{
if (v___y_1483_ == 0)
{
lean_del_object(v___x_1540_);
lean_dec(v_snd_1538_);
lean_dec(v_fst_1537_);
lean_dec_ref_known(v___x_1531_, 2);
goto v___jp_1516_;
}
else
{
if (v___y_1599_ == 0)
{
lean_del_object(v___x_1540_);
lean_dec(v_snd_1538_);
lean_dec(v_fst_1537_);
lean_dec_ref_known(v___x_1531_, 2);
goto v___jp_1516_;
}
else
{
lean_del_object(v___x_1495_);
goto v___jp_1571_;
}
}
}
else
{
lean_del_object(v___x_1495_);
goto v___jp_1571_;
}
}
}
}
else
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v_scopes_1607_; lean_object* v___x_1608_; lean_object* v_opts_1609_; uint8_t v_hasTrace_1610_; 
lean_dec(v___x_1535_);
lean_dec_ref_known(v___x_1531_, 2);
lean_del_object(v___x_1495_);
v___x_1602_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1603_ = l_Lean_inheritedTraceOptions;
v___x_1604_ = lean_st_ref_get(v___x_1603_);
v___x_1605_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1606_ = lean_st_ref_get(v___y_1489_);
v_scopes_1607_ = lean_ctor_get(v___x_1606_, 2);
lean_inc(v_scopes_1607_);
lean_dec(v___x_1606_);
v___x_1608_ = l_List_head_x21___redArg(v___x_1605_, v_scopes_1607_);
lean_dec(v_scopes_1607_);
v_opts_1609_ = lean_ctor_get(v___x_1608_, 1);
lean_inc_ref(v_opts_1609_);
lean_dec(v___x_1608_);
v_hasTrace_1610_ = lean_ctor_get_uint8(v_opts_1609_, sizeof(void*)*1);
if (v_hasTrace_1610_ == 0)
{
lean_dec_ref(v_opts_1609_);
lean_dec(v___x_1604_);
lean_dec(v___x_1530_);
lean_dec(v___x_1529_);
lean_del_object(v___x_1527_);
goto v___jp_1520_;
}
else
{
lean_object* v___x_1611_; uint8_t v___x_1612_; 
v___x_1611_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1612_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1604_, v_opts_1609_, v___x_1611_);
lean_dec_ref(v_opts_1609_);
lean_dec(v___x_1604_);
if (v___x_1612_ == 0)
{
lean_dec(v___x_1530_);
lean_dec(v___x_1529_);
lean_del_object(v___x_1527_);
goto v___jp_1520_;
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1616_; 
v___x_1613_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7);
v___x_1614_ = l_Nat_reprFast(v___x_1529_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 3);
lean_ctor_set(v___x_1527_, 0, v___x_1614_);
v___x_1616_ = v___x_1527_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1617_ = l_Lean_MessageData_ofFormat(v___x_1616_);
v___x_1618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1613_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9);
v___x_1620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1618_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = l_Nat_reprFast(v___x_1530_);
v___x_1622_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
v___x_1623_ = l_Lean_MessageData_ofFormat(v___x_1622_);
v___x_1624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1620_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11);
v___x_1626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1624_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1602_, v___x_1626_, v___y_1488_, v___y_1489_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_dec_ref_known(v___x_1627_, 1);
goto v___jp_1520_;
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_del_object(v___x_1500_);
lean_dec(v_snd_1498_);
lean_dec(v_fst_1497_);
lean_dec(v_cmd_1481_);
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
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
}
}
}
}
}
}
else
{
lean_object* v___x_1638_; 
lean_dec(v_endPos_1504_);
lean_del_object(v___x_1495_);
v___x_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1638_, 0, v_fst_1497_);
lean_ctor_set(v___x_1638_, 1, v_snd_1498_);
v_a_1509_ = v___x_1638_;
goto v___jp_1508_;
}
}
}
else
{
lean_object* v___x_1639_; 
lean_dec(v_endPos_1504_);
lean_del_object(v___x_1495_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v_fst_1497_);
lean_ctor_set(v___x_1639_, 1, v_snd_1498_);
v_a_1509_ = v___x_1639_;
goto v___jp_1508_;
}
v___jp_1508_:
{
lean_object* v___x_1511_; 
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 1, v_a_1509_);
lean_ctor_set(v___x_1500_, 0, v___x_1507_);
v___x_1511_ = v___x_1500_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v_a_1509_);
v___x_1511_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
size_t v___x_1512_; size_t v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = ((size_t)1ULL);
v___x_1513_ = lean_usize_add(v_i_1486_, v___x_1512_);
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12(v___x_1479_, v_val_1480_, v_cmd_1481_, v_onUnsolved_1482_, v___y_1483_, v_as_1484_, v_sz_1485_, v___x_1513_, v___x_1511_, v___y_1488_, v___y_1489_);
return v___x_1514_;
}
}
v___jp_1516_:
{
lean_object* v___x_1518_; 
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 1, v_snd_1498_);
lean_ctor_set(v___x_1495_, 0, v_fst_1497_);
v___x_1518_ = v___x_1495_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_fst_1497_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v_snd_1498_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
v_a_1509_ = v___x_1518_;
goto v___jp_1508_;
}
}
v___jp_1520_:
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1521_, 0, v_fst_1497_);
lean_ctor_set(v___x_1521_, 1, v_snd_1498_);
v_a_1509_ = v___x_1521_;
goto v___jp_1508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8___boxed(lean_object* v___x_1643_, lean_object* v_val_1644_, lean_object* v_cmd_1645_, lean_object* v_onUnsolved_1646_, lean_object* v___y_1647_, lean_object* v_as_1648_, lean_object* v_sz_1649_, lean_object* v_i_1650_, lean_object* v_b_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
uint8_t v_onUnsolved_boxed_1655_; uint8_t v___y_12288__boxed_1656_; size_t v_sz_boxed_1657_; size_t v_i_boxed_1658_; lean_object* v_res_1659_; 
v_onUnsolved_boxed_1655_ = lean_unbox(v_onUnsolved_1646_);
v___y_12288__boxed_1656_ = lean_unbox(v___y_1647_);
v_sz_boxed_1657_ = lean_unbox_usize(v_sz_1649_);
lean_dec(v_sz_1649_);
v_i_boxed_1658_ = lean_unbox_usize(v_i_1650_);
lean_dec(v_i_1650_);
v_res_1659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8(v___x_1643_, v_val_1644_, v_cmd_1645_, v_onUnsolved_boxed_1655_, v___y_12288__boxed_1656_, v_as_1648_, v_sz_boxed_1657_, v_i_boxed_1658_, v_b_1651_, v___y_1652_, v___y_1653_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec_ref(v_as_1648_);
lean_dec_ref(v_val_1644_);
lean_dec_ref(v___x_1643_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10_spec__12(lean_object* v___x_1660_, lean_object* v_val_1661_, lean_object* v_cmd_1662_, uint8_t v_onUnsolved_1663_, uint8_t v___y_1664_, lean_object* v_as_1665_, size_t v_sz_1666_, size_t v_i_1667_, lean_object* v_b_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
uint8_t v___x_1672_; 
v___x_1672_ = lean_usize_dec_lt(v_i_1667_, v_sz_1666_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; 
lean_dec(v_cmd_1662_);
v___x_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1673_, 0, v_b_1668_);
return v___x_1673_;
}
else
{
lean_object* v_snd_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1822_; 
v_snd_1674_ = lean_ctor_get(v_b_1668_, 1);
v_isSharedCheck_1822_ = !lean_is_exclusive(v_b_1668_);
if (v_isSharedCheck_1822_ == 0)
{
lean_object* v_unused_1823_; 
v_unused_1823_ = lean_ctor_get(v_b_1668_, 0);
lean_dec(v_unused_1823_);
v___x_1676_ = v_b_1668_;
v_isShared_1677_ = v_isSharedCheck_1822_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_snd_1674_);
lean_dec(v_b_1668_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1822_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v_fst_1678_; lean_object* v_snd_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1821_; 
v_fst_1678_ = lean_ctor_get(v_snd_1674_, 0);
v_snd_1679_ = lean_ctor_get(v_snd_1674_, 1);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_snd_1674_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1681_ = v_snd_1674_;
v_isShared_1682_ = v_isSharedCheck_1821_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_snd_1679_);
lean_inc(v_fst_1678_);
lean_dec(v_snd_1674_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1821_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v_a_1683_; lean_object* v_pos_1684_; lean_object* v_endPos_1685_; uint8_t v_severity_1686_; lean_object* v_data_1687_; lean_object* v___x_1688_; lean_object* v_a_1690_; 
v_a_1683_ = lean_array_uget_borrowed(v_as_1665_, v_i_1667_);
v_pos_1684_ = lean_ctor_get(v_a_1683_, 1);
v_endPos_1685_ = lean_ctor_get(v_a_1683_, 2);
lean_inc(v_endPos_1685_);
v_severity_1686_ = lean_ctor_get_uint8(v_a_1683_, sizeof(void*)*5 + 1);
v_data_1687_ = lean_ctor_get(v_a_1683_, 4);
v___x_1688_ = lean_box(0);
if (v_severity_1686_ == 2)
{
lean_object* v___f_1703_; uint8_t v___x_1704_; 
v___f_1703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0));
lean_inc(v_data_1687_);
v___x_1704_ = l_Lean_MessageData_hasTag(v___f_1703_, v_data_1687_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; 
lean_dec(v_endPos_1685_);
lean_del_object(v___x_1676_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v_fst_1678_);
lean_ctor_set(v___x_1705_, 1, v_snd_1679_);
v_a_1690_ = v___x_1705_;
goto v___jp_1689_;
}
else
{
if (lean_obj_tag(v_endPos_1685_) == 1)
{
lean_object* v_val_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1818_; 
v_val_1706_ = lean_ctor_get(v_endPos_1685_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_endPos_1685_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1708_ = v_endPos_1685_;
v_isShared_1709_ = v_isSharedCheck_1818_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_val_1706_);
lean_dec(v_endPos_1685_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1818_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; uint8_t v___x_1713_; uint8_t v___x_1714_; 
lean_inc_ref(v_pos_1684_);
v___x_1710_ = l_Lean_FileMap_ofPosition(v___x_1660_, v_pos_1684_);
v___x_1711_ = l_Lean_FileMap_ofPosition(v___x_1660_, v_val_1706_);
lean_inc(v___x_1711_);
lean_inc(v___x_1710_);
v___x_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1710_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
v___x_1713_ = 0;
v___x_1714_ = l_Lean_Syntax_Range_includes(v_val_1661_, v___x_1712_, v___x_1713_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; 
lean_dec_ref_known(v___x_1712_, 2);
lean_dec(v___x_1711_);
lean_dec(v___x_1710_);
lean_del_object(v___x_1708_);
lean_del_object(v___x_1676_);
v___x_1715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1715_, 0, v_fst_1678_);
lean_ctor_set(v___x_1715_, 1, v_snd_1679_);
v_a_1690_ = v___x_1715_;
goto v___jp_1689_;
}
else
{
lean_object* v___x_1716_; 
lean_inc(v_cmd_1662_);
lean_inc_ref(v___x_1712_);
v___x_1716_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1712_, v_cmd_1662_);
if (lean_obj_tag(v___x_1716_) == 1)
{
lean_object* v_val_1717_; lean_object* v_fst_1718_; lean_object* v_snd_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v___x_1711_);
lean_dec(v___x_1710_);
lean_del_object(v___x_1708_);
v_val_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_val_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v_fst_1718_ = lean_ctor_get(v_val_1717_, 0);
v_snd_1719_ = lean_ctor_get(v_val_1717_, 1);
v_isSharedCheck_1782_ = !lean_is_exclusive(v_val_1717_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1721_ = v_val_1717_;
v_isShared_1722_ = v_isSharedCheck_1782_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_snd_1719_);
lean_inc(v_fst_1718_);
lean_dec(v_val_1717_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1782_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; uint8_t v___y_1780_; lean_object* v___x_1781_; 
v___x_1781_ = l_Lean_Syntax_getPos_x3f(v_fst_1718_, v___x_1713_);
if (lean_obj_tag(v___x_1781_) == 0)
{
v___y_1780_ = v___x_1714_;
goto v___jp_1779_;
}
else
{
lean_dec_ref_known(v___x_1781_, 1);
v___y_1780_ = v___x_1713_;
goto v___jp_1779_;
}
v___jp_1723_:
{
lean_object* v___x_1729_; 
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 1, v_snd_1679_);
lean_ctor_set(v___x_1721_, 0, v_fst_1678_);
v___x_1729_ = v___x_1721_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_snd_1679_);
v___x_1729_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
size_t v_sz_1730_; size_t v___x_1731_; lean_object* v___x_1732_; 
v_sz_1730_ = lean_array_size(v___y_1724_);
v___x_1731_ = ((size_t)0ULL);
v___x_1732_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v___x_1712_, v_fst_1718_, v_snd_1719_, v___y_1725_, v___y_1724_, v_sz_1730_, v___x_1731_, v___x_1729_);
lean_dec_ref(v___y_1724_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v_fst_1734_; lean_object* v_snd_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1732_, 1);
v_fst_1734_ = lean_ctor_get(v_a_1733_, 0);
v_snd_1735_ = lean_ctor_get(v_a_1733_, 1);
v_isSharedCheck_1742_ = !lean_is_exclusive(v_a_1733_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1737_ = v_a_1733_;
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_snd_1735_);
lean_inc(v_fst_1734_);
lean_dec(v_a_1733_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_fst_1734_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_snd_1735_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
v_a_1690_ = v___x_1740_;
goto v___jp_1689_;
}
}
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_del_object(v___x_1681_);
lean_dec(v_cmd_1662_);
v_a_1743_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1732_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1732_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
}
v___jp_1752_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; 
lean_inc_ref(v___x_1712_);
v___x_1753_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1712_);
v___x_1754_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1687_);
v___x_1755_ = lean_array_get_size(v___x_1754_);
v___x_1756_ = lean_unsigned_to_nat(0u);
v___x_1757_ = lean_nat_dec_eq(v___x_1755_, v___x_1756_);
if (v___x_1757_ == 0)
{
v___y_1724_ = v___x_1754_;
v___y_1725_ = v___x_1753_;
v___y_1726_ = v___y_1669_;
v___y_1727_ = v___y_1670_;
goto v___jp_1723_;
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v_scopes_1763_; lean_object* v___x_1764_; lean_object* v_opts_1765_; uint8_t v_hasTrace_1766_; 
v___x_1758_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1759_ = l_Lean_inheritedTraceOptions;
v___x_1760_ = lean_st_ref_get(v___x_1759_);
v___x_1761_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1762_ = lean_st_ref_get(v___y_1670_);
v_scopes_1763_ = lean_ctor_get(v___x_1762_, 2);
lean_inc(v_scopes_1763_);
lean_dec(v___x_1762_);
v___x_1764_ = l_List_head_x21___redArg(v___x_1761_, v_scopes_1763_);
lean_dec(v_scopes_1763_);
v_opts_1765_ = lean_ctor_get(v___x_1764_, 1);
lean_inc_ref(v_opts_1765_);
lean_dec(v___x_1764_);
v_hasTrace_1766_ = lean_ctor_get_uint8(v_opts_1765_, sizeof(void*)*1);
if (v_hasTrace_1766_ == 0)
{
lean_dec_ref(v_opts_1765_);
lean_dec(v___x_1760_);
v___y_1724_ = v___x_1754_;
v___y_1725_ = v___x_1753_;
v___y_1726_ = v___y_1669_;
v___y_1727_ = v___y_1670_;
goto v___jp_1723_;
}
else
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1768_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1760_, v_opts_1765_, v___x_1767_);
lean_dec_ref(v_opts_1765_);
lean_dec(v___x_1760_);
if (v___x_1768_ == 0)
{
v___y_1724_ = v___x_1754_;
v___y_1725_ = v___x_1753_;
v___y_1726_ = v___y_1669_;
v___y_1727_ = v___y_1670_;
goto v___jp_1723_;
}
else
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5);
v___x_1770_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1758_, v___x_1769_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_dec_ref_known(v___x_1770_, 1);
v___y_1724_ = v___x_1754_;
v___y_1725_ = v___x_1753_;
v___y_1726_ = v___y_1669_;
v___y_1727_ = v___y_1670_;
goto v___jp_1723_;
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v___x_1754_);
lean_dec(v___x_1753_);
lean_del_object(v___x_1721_);
lean_dec(v_snd_1719_);
lean_dec(v_fst_1718_);
lean_dec_ref_known(v___x_1712_, 2);
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_dec(v_cmd_1662_);
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
}
}
}
v___jp_1779_:
{
if (v_onUnsolved_1663_ == 0)
{
if (v___y_1664_ == 0)
{
lean_del_object(v___x_1721_);
lean_dec(v_snd_1719_);
lean_dec(v_fst_1718_);
lean_dec_ref_known(v___x_1712_, 2);
goto v___jp_1697_;
}
else
{
if (v___y_1780_ == 0)
{
lean_del_object(v___x_1721_);
lean_dec(v_snd_1719_);
lean_dec(v_fst_1718_);
lean_dec_ref_known(v___x_1712_, 2);
goto v___jp_1697_;
}
else
{
lean_del_object(v___x_1676_);
goto v___jp_1752_;
}
}
}
else
{
lean_del_object(v___x_1676_);
goto v___jp_1752_;
}
}
}
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v_scopes_1788_; lean_object* v___x_1789_; lean_object* v_opts_1790_; uint8_t v_hasTrace_1791_; 
lean_dec(v___x_1716_);
lean_dec_ref_known(v___x_1712_, 2);
lean_del_object(v___x_1676_);
v___x_1783_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1784_ = l_Lean_inheritedTraceOptions;
v___x_1785_ = lean_st_ref_get(v___x_1784_);
v___x_1786_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1787_ = lean_st_ref_get(v___y_1670_);
v_scopes_1788_ = lean_ctor_get(v___x_1787_, 2);
lean_inc(v_scopes_1788_);
lean_dec(v___x_1787_);
v___x_1789_ = l_List_head_x21___redArg(v___x_1786_, v_scopes_1788_);
lean_dec(v_scopes_1788_);
v_opts_1790_ = lean_ctor_get(v___x_1789_, 1);
lean_inc_ref(v_opts_1790_);
lean_dec(v___x_1789_);
v_hasTrace_1791_ = lean_ctor_get_uint8(v_opts_1790_, sizeof(void*)*1);
if (v_hasTrace_1791_ == 0)
{
lean_dec_ref(v_opts_1790_);
lean_dec(v___x_1785_);
lean_dec(v___x_1711_);
lean_dec(v___x_1710_);
lean_del_object(v___x_1708_);
goto v___jp_1701_;
}
else
{
lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1793_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1785_, v_opts_1790_, v___x_1792_);
lean_dec_ref(v_opts_1790_);
lean_dec(v___x_1785_);
if (v___x_1793_ == 0)
{
lean_dec(v___x_1711_);
lean_dec(v___x_1710_);
lean_del_object(v___x_1708_);
goto v___jp_1701_;
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1794_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7);
v___x_1795_ = l_Nat_reprFast(v___x_1710_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set_tag(v___x_1708_, 3);
lean_ctor_set(v___x_1708_, 0, v___x_1795_);
v___x_1797_ = v___x_1708_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1798_ = l_Lean_MessageData_ofFormat(v___x_1797_);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1794_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9);
v___x_1801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = l_Nat_reprFast(v___x_1711_);
v___x_1803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
v___x_1804_ = l_Lean_MessageData_ofFormat(v___x_1803_);
v___x_1805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1801_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11);
v___x_1807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1783_, v___x_1807_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_dec_ref_known(v___x_1808_, 1);
goto v___jp_1701_;
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
lean_del_object(v___x_1681_);
lean_dec(v_snd_1679_);
lean_dec(v_fst_1678_);
lean_dec(v_cmd_1662_);
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1808_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1808_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
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
lean_object* v___x_1819_; 
lean_dec(v_endPos_1685_);
lean_del_object(v___x_1676_);
v___x_1819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1819_, 0, v_fst_1678_);
lean_ctor_set(v___x_1819_, 1, v_snd_1679_);
v_a_1690_ = v___x_1819_;
goto v___jp_1689_;
}
}
}
else
{
lean_object* v___x_1820_; 
lean_dec(v_endPos_1685_);
lean_del_object(v___x_1676_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_fst_1678_);
lean_ctor_set(v___x_1820_, 1, v_snd_1679_);
v_a_1690_ = v___x_1820_;
goto v___jp_1689_;
}
v___jp_1689_:
{
lean_object* v___x_1692_; 
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 1, v_a_1690_);
lean_ctor_set(v___x_1681_, 0, v___x_1688_);
v___x_1692_ = v___x_1681_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1688_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_a_1690_);
v___x_1692_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
size_t v___x_1693_; size_t v___x_1694_; 
v___x_1693_ = ((size_t)1ULL);
v___x_1694_ = lean_usize_add(v_i_1667_, v___x_1693_);
v_i_1667_ = v___x_1694_;
v_b_1668_ = v___x_1692_;
goto _start;
}
}
v___jp_1697_:
{
lean_object* v___x_1699_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v_snd_1679_);
lean_ctor_set(v___x_1676_, 0, v_fst_1678_);
v___x_1699_ = v___x_1676_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_snd_1679_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
v_a_1690_ = v___x_1699_;
goto v___jp_1689_;
}
}
v___jp_1701_:
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_fst_1678_);
lean_ctor_set(v___x_1702_, 1, v_snd_1679_);
v_a_1690_ = v___x_1702_;
goto v___jp_1689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10_spec__12___boxed(lean_object* v___x_1824_, lean_object* v_val_1825_, lean_object* v_cmd_1826_, lean_object* v_onUnsolved_1827_, lean_object* v___y_1828_, lean_object* v_as_1829_, lean_object* v_sz_1830_, lean_object* v_i_1831_, lean_object* v_b_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
uint8_t v_onUnsolved_boxed_1836_; uint8_t v___y_12620__boxed_1837_; size_t v_sz_boxed_1838_; size_t v_i_boxed_1839_; lean_object* v_res_1840_; 
v_onUnsolved_boxed_1836_ = lean_unbox(v_onUnsolved_1827_);
v___y_12620__boxed_1837_ = lean_unbox(v___y_1828_);
v_sz_boxed_1838_ = lean_unbox_usize(v_sz_1830_);
lean_dec(v_sz_1830_);
v_i_boxed_1839_ = lean_unbox_usize(v_i_1831_);
lean_dec(v_i_1831_);
v_res_1840_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10_spec__12(v___x_1824_, v_val_1825_, v_cmd_1826_, v_onUnsolved_boxed_1836_, v___y_12620__boxed_1837_, v_as_1829_, v_sz_boxed_1838_, v_i_boxed_1839_, v_b_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v_as_1829_);
lean_dec_ref(v_val_1825_);
lean_dec_ref(v___x_1824_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10(lean_object* v___x_1841_, lean_object* v_val_1842_, lean_object* v_cmd_1843_, uint8_t v_onUnsolved_1844_, uint8_t v___y_1845_, lean_object* v_as_1846_, size_t v_sz_1847_, size_t v_i_1848_, lean_object* v_b_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
uint8_t v___x_1853_; 
v___x_1853_ = lean_usize_dec_lt(v_i_1848_, v_sz_1847_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; 
lean_dec(v_cmd_1843_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_b_1849_);
return v___x_1854_;
}
else
{
lean_object* v_snd_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_2003_; 
v_snd_1855_ = lean_ctor_get(v_b_1849_, 1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_b_1849_);
if (v_isSharedCheck_2003_ == 0)
{
lean_object* v_unused_2004_; 
v_unused_2004_ = lean_ctor_get(v_b_1849_, 0);
lean_dec(v_unused_2004_);
v___x_1857_ = v_b_1849_;
v_isShared_1858_ = v_isSharedCheck_2003_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_snd_1855_);
lean_dec(v_b_1849_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_2003_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v_fst_1859_; lean_object* v_snd_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_2002_; 
v_fst_1859_ = lean_ctor_get(v_snd_1855_, 0);
v_snd_1860_ = lean_ctor_get(v_snd_1855_, 1);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_snd_1855_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1862_ = v_snd_1855_;
v_isShared_1863_ = v_isSharedCheck_2002_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_snd_1860_);
lean_inc(v_fst_1859_);
lean_dec(v_snd_1855_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_2002_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v_a_1864_; lean_object* v_pos_1865_; lean_object* v_endPos_1866_; uint8_t v_severity_1867_; lean_object* v_data_1868_; lean_object* v___x_1869_; lean_object* v_a_1871_; 
v_a_1864_ = lean_array_uget_borrowed(v_as_1846_, v_i_1848_);
v_pos_1865_ = lean_ctor_get(v_a_1864_, 1);
v_endPos_1866_ = lean_ctor_get(v_a_1864_, 2);
lean_inc(v_endPos_1866_);
v_severity_1867_ = lean_ctor_get_uint8(v_a_1864_, sizeof(void*)*5 + 1);
v_data_1868_ = lean_ctor_get(v_a_1864_, 4);
v___x_1869_ = lean_box(0);
if (v_severity_1867_ == 2)
{
lean_object* v___f_1884_; uint8_t v___x_1885_; 
v___f_1884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0));
lean_inc(v_data_1868_);
v___x_1885_ = l_Lean_MessageData_hasTag(v___f_1884_, v_data_1868_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; 
lean_dec(v_endPos_1866_);
lean_del_object(v___x_1857_);
v___x_1886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1886_, 0, v_fst_1859_);
lean_ctor_set(v___x_1886_, 1, v_snd_1860_);
v_a_1871_ = v___x_1886_;
goto v___jp_1870_;
}
else
{
if (lean_obj_tag(v_endPos_1866_) == 1)
{
lean_object* v_val_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1999_; 
v_val_1887_ = lean_ctor_get(v_endPos_1866_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_endPos_1866_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1889_ = v_endPos_1866_;
v_isShared_1890_ = v_isSharedCheck_1999_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_val_1887_);
lean_dec(v_endPos_1866_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1999_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; uint8_t v___x_1895_; 
lean_inc_ref(v_pos_1865_);
v___x_1891_ = l_Lean_FileMap_ofPosition(v___x_1841_, v_pos_1865_);
v___x_1892_ = l_Lean_FileMap_ofPosition(v___x_1841_, v_val_1887_);
lean_inc(v___x_1892_);
lean_inc(v___x_1891_);
v___x_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1891_);
lean_ctor_set(v___x_1893_, 1, v___x_1892_);
v___x_1894_ = 0;
v___x_1895_ = l_Lean_Syntax_Range_includes(v_val_1842_, v___x_1893_, v___x_1894_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; 
lean_dec_ref_known(v___x_1893_, 2);
lean_dec(v___x_1892_);
lean_dec(v___x_1891_);
lean_del_object(v___x_1889_);
lean_del_object(v___x_1857_);
v___x_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1896_, 0, v_fst_1859_);
lean_ctor_set(v___x_1896_, 1, v_snd_1860_);
v_a_1871_ = v___x_1896_;
goto v___jp_1870_;
}
else
{
lean_object* v___x_1897_; 
lean_inc(v_cmd_1843_);
lean_inc_ref(v___x_1893_);
v___x_1897_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_findTacticSeqBody_walkAndFind(v___x_1893_, v_cmd_1843_);
if (lean_obj_tag(v___x_1897_) == 1)
{
lean_object* v_val_1898_; lean_object* v_fst_1899_; lean_object* v_snd_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1963_; 
lean_dec(v___x_1892_);
lean_dec(v___x_1891_);
lean_del_object(v___x_1889_);
v_val_1898_ = lean_ctor_get(v___x_1897_, 0);
lean_inc(v_val_1898_);
lean_dec_ref_known(v___x_1897_, 1);
v_fst_1899_ = lean_ctor_get(v_val_1898_, 0);
v_snd_1900_ = lean_ctor_get(v_val_1898_, 1);
v_isSharedCheck_1963_ = !lean_is_exclusive(v_val_1898_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1902_ = v_val_1898_;
v_isShared_1903_ = v_isSharedCheck_1963_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_snd_1900_);
lean_inc(v_fst_1899_);
lean_dec(v_val_1898_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1963_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; uint8_t v___y_1961_; lean_object* v___x_1962_; 
v___x_1962_ = l_Lean_Syntax_getPos_x3f(v_fst_1899_, v___x_1894_);
if (lean_obj_tag(v___x_1962_) == 0)
{
v___y_1961_ = v___x_1895_;
goto v___jp_1960_;
}
else
{
lean_dec_ref_known(v___x_1962_, 1);
v___y_1961_ = v___x_1894_;
goto v___jp_1960_;
}
v___jp_1904_:
{
lean_object* v___x_1910_; 
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 1, v_snd_1860_);
lean_ctor_set(v___x_1902_, 0, v_fst_1859_);
v___x_1910_ = v___x_1902_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_fst_1859_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v_snd_1860_);
v___x_1910_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
size_t v_sz_1911_; size_t v___x_1912_; lean_object* v___x_1913_; 
v_sz_1911_ = lean_array_size(v___y_1905_);
v___x_1912_ = ((size_t)0ULL);
v___x_1913_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v___x_1893_, v_fst_1899_, v_snd_1900_, v___y_1906_, v___y_1905_, v_sz_1911_, v___x_1912_, v___x_1910_);
lean_dec_ref(v___y_1905_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v_fst_1915_; lean_object* v_snd_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1913_, 1);
v_fst_1915_ = lean_ctor_get(v_a_1914_, 0);
v_snd_1916_ = lean_ctor_get(v_a_1914_, 1);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_a_1914_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v_a_1914_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_snd_1916_);
lean_inc(v_fst_1915_);
lean_dec(v_a_1914_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_fst_1915_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v_snd_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
v_a_1871_ = v___x_1921_;
goto v___jp_1870_;
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_del_object(v___x_1862_);
lean_dec(v_cmd_1843_);
v_a_1924_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1913_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1913_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
v___jp_1933_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; 
lean_inc_ref(v___x_1893_);
v___x_1934_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkRangeStx(v___x_1893_);
v___x_1935_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectGoalsAndCtxFromMessage(v_data_1868_);
v___x_1936_ = lean_array_get_size(v___x_1935_);
v___x_1937_ = lean_unsigned_to_nat(0u);
v___x_1938_ = lean_nat_dec_eq(v___x_1936_, v___x_1937_);
if (v___x_1938_ == 0)
{
v___y_1905_ = v___x_1935_;
v___y_1906_ = v___x_1934_;
v___y_1907_ = v___y_1850_;
v___y_1908_ = v___y_1851_;
goto v___jp_1904_;
}
else
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v_scopes_1944_; lean_object* v___x_1945_; lean_object* v_opts_1946_; uint8_t v_hasTrace_1947_; 
v___x_1939_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1940_ = l_Lean_inheritedTraceOptions;
v___x_1941_ = lean_st_ref_get(v___x_1940_);
v___x_1942_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1943_ = lean_st_ref_get(v___y_1851_);
v_scopes_1944_ = lean_ctor_get(v___x_1943_, 2);
lean_inc(v_scopes_1944_);
lean_dec(v___x_1943_);
v___x_1945_ = l_List_head_x21___redArg(v___x_1942_, v_scopes_1944_);
lean_dec(v_scopes_1944_);
v_opts_1946_ = lean_ctor_get(v___x_1945_, 1);
lean_inc_ref(v_opts_1946_);
lean_dec(v___x_1945_);
v_hasTrace_1947_ = lean_ctor_get_uint8(v_opts_1946_, sizeof(void*)*1);
if (v_hasTrace_1947_ == 0)
{
lean_dec_ref(v_opts_1946_);
lean_dec(v___x_1941_);
v___y_1905_ = v___x_1935_;
v___y_1906_ = v___x_1934_;
v___y_1907_ = v___y_1850_;
v___y_1908_ = v___y_1851_;
goto v___jp_1904_;
}
else
{
lean_object* v___x_1948_; uint8_t v___x_1949_; 
v___x_1948_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1949_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1941_, v_opts_1946_, v___x_1948_);
lean_dec_ref(v_opts_1946_);
lean_dec(v___x_1941_);
if (v___x_1949_ == 0)
{
v___y_1905_ = v___x_1935_;
v___y_1906_ = v___x_1934_;
v___y_1907_ = v___y_1850_;
v___y_1908_ = v___y_1851_;
goto v___jp_1904_;
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1950_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__5);
v___x_1951_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1939_, v___x_1950_, v___y_1850_, v___y_1851_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_dec_ref_known(v___x_1951_, 1);
v___y_1905_ = v___x_1935_;
v___y_1906_ = v___x_1934_;
v___y_1907_ = v___y_1850_;
v___y_1908_ = v___y_1851_;
goto v___jp_1904_;
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec_ref(v___x_1935_);
lean_dec(v___x_1934_);
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec(v_fst_1899_);
lean_dec_ref_known(v___x_1893_, 2);
lean_del_object(v___x_1862_);
lean_dec(v_snd_1860_);
lean_dec(v_fst_1859_);
lean_dec(v_cmd_1843_);
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
}
}
}
v___jp_1960_:
{
if (v_onUnsolved_1844_ == 0)
{
if (v___y_1845_ == 0)
{
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec(v_fst_1899_);
lean_dec_ref_known(v___x_1893_, 2);
goto v___jp_1878_;
}
else
{
if (v___y_1961_ == 0)
{
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec(v_fst_1899_);
lean_dec_ref_known(v___x_1893_, 2);
goto v___jp_1878_;
}
else
{
lean_del_object(v___x_1857_);
goto v___jp_1933_;
}
}
}
else
{
lean_del_object(v___x_1857_);
goto v___jp_1933_;
}
}
}
}
else
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v_scopes_1969_; lean_object* v___x_1970_; lean_object* v_opts_1971_; uint8_t v_hasTrace_1972_; 
lean_dec(v___x_1897_);
lean_dec_ref_known(v___x_1893_, 2);
lean_del_object(v___x_1857_);
v___x_1964_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_1965_ = l_Lean_inheritedTraceOptions;
v___x_1966_ = lean_st_ref_get(v___x_1965_);
v___x_1967_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1968_ = lean_st_ref_get(v___y_1851_);
v_scopes_1969_ = lean_ctor_get(v___x_1968_, 2);
lean_inc(v_scopes_1969_);
lean_dec(v___x_1968_);
v___x_1970_ = l_List_head_x21___redArg(v___x_1967_, v_scopes_1969_);
lean_dec(v_scopes_1969_);
v_opts_1971_ = lean_ctor_get(v___x_1970_, 1);
lean_inc_ref(v_opts_1971_);
lean_dec(v___x_1970_);
v_hasTrace_1972_ = lean_ctor_get_uint8(v_opts_1971_, sizeof(void*)*1);
if (v_hasTrace_1972_ == 0)
{
lean_dec_ref(v_opts_1971_);
lean_dec(v___x_1966_);
lean_dec(v___x_1892_);
lean_dec(v___x_1891_);
lean_del_object(v___x_1889_);
goto v___jp_1882_;
}
else
{
lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_1974_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1966_, v_opts_1971_, v___x_1973_);
lean_dec_ref(v_opts_1971_);
lean_dec(v___x_1966_);
if (v___x_1974_ == 0)
{
lean_dec(v___x_1892_);
lean_dec(v___x_1891_);
lean_del_object(v___x_1889_);
goto v___jp_1882_;
}
else
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1978_; 
v___x_1975_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__7);
v___x_1976_ = l_Nat_reprFast(v___x_1891_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 3);
lean_ctor_set(v___x_1889_, 0, v___x_1976_);
v___x_1978_ = v___x_1889_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1976_);
v___x_1978_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1979_ = l_Lean_MessageData_ofFormat(v___x_1978_);
v___x_1980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1975_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__9);
v___x_1982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1980_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = l_Nat_reprFast(v___x_1892_);
v___x_1984_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
v___x_1985_ = l_Lean_MessageData_ofFormat(v___x_1984_);
v___x_1986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1982_);
lean_ctor_set(v___x_1986_, 1, v___x_1985_);
v___x_1987_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__11);
v___x_1988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1986_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
v___x_1989_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_1964_, v___x_1988_, v___y_1850_, v___y_1851_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_dec_ref_known(v___x_1989_, 1);
goto v___jp_1882_;
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_del_object(v___x_1862_);
lean_dec(v_snd_1860_);
lean_dec(v_fst_1859_);
lean_dec(v_cmd_1843_);
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1989_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1989_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
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
lean_object* v___x_2000_; 
lean_dec(v_endPos_1866_);
lean_del_object(v___x_1857_);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v_fst_1859_);
lean_ctor_set(v___x_2000_, 1, v_snd_1860_);
v_a_1871_ = v___x_2000_;
goto v___jp_1870_;
}
}
}
else
{
lean_object* v___x_2001_; 
lean_dec(v_endPos_1866_);
lean_del_object(v___x_1857_);
v___x_2001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2001_, 0, v_fst_1859_);
lean_ctor_set(v___x_2001_, 1, v_snd_1860_);
v_a_1871_ = v___x_2001_;
goto v___jp_1870_;
}
v___jp_1870_:
{
lean_object* v___x_1873_; 
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 1, v_a_1871_);
lean_ctor_set(v___x_1862_, 0, v___x_1869_);
v___x_1873_ = v___x_1862_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1869_);
lean_ctor_set(v_reuseFailAlloc_1877_, 1, v_a_1871_);
v___x_1873_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
size_t v___x_1874_; size_t v___x_1875_; lean_object* v___x_1876_; 
v___x_1874_ = ((size_t)1ULL);
v___x_1875_ = lean_usize_add(v_i_1848_, v___x_1874_);
v___x_1876_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10_spec__12(v___x_1841_, v_val_1842_, v_cmd_1843_, v_onUnsolved_1844_, v___y_1845_, v_as_1846_, v_sz_1847_, v___x_1875_, v___x_1873_, v___y_1850_, v___y_1851_);
return v___x_1876_;
}
}
v___jp_1878_:
{
lean_object* v___x_1880_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v_snd_1860_);
lean_ctor_set(v___x_1857_, 0, v_fst_1859_);
v___x_1880_ = v___x_1857_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_fst_1859_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_snd_1860_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
v_a_1871_ = v___x_1880_;
goto v___jp_1870_;
}
}
v___jp_1882_:
{
lean_object* v___x_1883_; 
v___x_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1883_, 0, v_fst_1859_);
lean_ctor_set(v___x_1883_, 1, v_snd_1860_);
v_a_1871_ = v___x_1883_;
goto v___jp_1870_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10___boxed(lean_object* v___x_2005_, lean_object* v_val_2006_, lean_object* v_cmd_2007_, lean_object* v_onUnsolved_2008_, lean_object* v___y_2009_, lean_object* v_as_2010_, lean_object* v_sz_2011_, lean_object* v_i_2012_, lean_object* v_b_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
uint8_t v_onUnsolved_boxed_2017_; uint8_t v___y_12952__boxed_2018_; size_t v_sz_boxed_2019_; size_t v_i_boxed_2020_; lean_object* v_res_2021_; 
v_onUnsolved_boxed_2017_ = lean_unbox(v_onUnsolved_2008_);
v___y_12952__boxed_2018_ = lean_unbox(v___y_2009_);
v_sz_boxed_2019_ = lean_unbox_usize(v_sz_2011_);
lean_dec(v_sz_2011_);
v_i_boxed_2020_ = lean_unbox_usize(v_i_2012_);
lean_dec(v_i_2012_);
v_res_2021_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10(v___x_2005_, v_val_2006_, v_cmd_2007_, v_onUnsolved_boxed_2017_, v___y_12952__boxed_2018_, v_as_2010_, v_sz_boxed_2019_, v_i_boxed_2020_, v_b_2013_, v___y_2014_, v___y_2015_);
lean_dec(v___y_2015_);
lean_dec_ref(v___y_2014_);
lean_dec_ref(v_as_2010_);
lean_dec_ref(v_val_2006_);
lean_dec_ref(v___x_2005_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7(lean_object* v_init_2022_, lean_object* v___x_2023_, lean_object* v_val_2024_, lean_object* v_cmd_2025_, uint8_t v_onUnsolved_2026_, uint8_t v___y_2027_, lean_object* v_n_2028_, lean_object* v_b_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
if (lean_obj_tag(v_n_2028_) == 0)
{
lean_object* v_cs_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; size_t v_sz_2036_; size_t v___x_2037_; lean_object* v___x_2038_; 
v_cs_2033_ = lean_ctor_get(v_n_2028_, 0);
v___x_2034_ = lean_box(0);
v___x_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
lean_ctor_set(v___x_2035_, 1, v_b_2029_);
v_sz_2036_ = lean_array_size(v_cs_2033_);
v___x_2037_ = ((size_t)0ULL);
v___x_2038_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__9(v_init_2022_, v___x_2023_, v_val_2024_, v_cmd_2025_, v_onUnsolved_2026_, v___y_2027_, v_cs_2033_, v_sz_2036_, v___x_2037_, v___x_2035_, v___y_2030_, v___y_2031_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2053_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2041_ = v___x_2038_;
v_isShared_2042_ = v_isSharedCheck_2053_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v___x_2038_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2053_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v_fst_2043_; 
v_fst_2043_ = lean_ctor_get(v_a_2039_, 0);
if (lean_obj_tag(v_fst_2043_) == 0)
{
lean_object* v_snd_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v_snd_2044_ = lean_ctor_get(v_a_2039_, 1);
lean_inc(v_snd_2044_);
lean_dec(v_a_2039_);
v___x_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2045_, 0, v_snd_2044_);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v___x_2045_);
v___x_2047_ = v___x_2041_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
else
{
lean_object* v_val_2049_; lean_object* v___x_2051_; 
lean_inc_ref(v_fst_2043_);
lean_dec(v_a_2039_);
v_val_2049_ = lean_ctor_get(v_fst_2043_, 0);
lean_inc(v_val_2049_);
lean_dec_ref_known(v_fst_2043_, 1);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v_val_2049_);
v___x_2051_ = v___x_2041_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_val_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
else
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2061_; 
v_a_2054_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2056_ = v___x_2038_;
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2038_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2059_; 
if (v_isShared_2057_ == 0)
{
v___x_2059_ = v___x_2056_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_a_2054_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
else
{
lean_object* v_vs_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; size_t v_sz_2065_; size_t v___x_2066_; lean_object* v___x_2067_; 
v_vs_2062_ = lean_ctor_get(v_n_2028_, 0);
v___x_2063_ = lean_box(0);
v___x_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
lean_ctor_set(v___x_2064_, 1, v_b_2029_);
v_sz_2065_ = lean_array_size(v_vs_2062_);
v___x_2066_ = ((size_t)0ULL);
v___x_2067_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__10(v___x_2023_, v_val_2024_, v_cmd_2025_, v_onUnsolved_2026_, v___y_2027_, v_vs_2062_, v_sz_2065_, v___x_2066_, v___x_2064_, v___y_2030_, v___y_2031_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2082_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2082_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2082_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v_fst_2072_; 
v_fst_2072_ = lean_ctor_get(v_a_2068_, 0);
if (lean_obj_tag(v_fst_2072_) == 0)
{
lean_object* v_snd_2073_; lean_object* v___x_2074_; lean_object* v___x_2076_; 
v_snd_2073_ = lean_ctor_get(v_a_2068_, 1);
lean_inc(v_snd_2073_);
lean_dec(v_a_2068_);
v___x_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_snd_2073_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v___x_2074_);
v___x_2076_ = v___x_2070_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
else
{
lean_object* v_val_2078_; lean_object* v___x_2080_; 
lean_inc_ref(v_fst_2072_);
lean_dec(v_a_2068_);
v_val_2078_ = lean_ctor_get(v_fst_2072_, 0);
lean_inc(v_val_2078_);
lean_dec_ref_known(v_fst_2072_, 1);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v_val_2078_);
v___x_2080_ = v___x_2070_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_val_2078_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
v_a_2083_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2067_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2067_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__9(lean_object* v_init_2091_, lean_object* v___x_2092_, lean_object* v_val_2093_, lean_object* v_cmd_2094_, uint8_t v_onUnsolved_2095_, uint8_t v___y_2096_, lean_object* v_as_2097_, size_t v_sz_2098_, size_t v_i_2099_, lean_object* v_b_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
uint8_t v___x_2104_; 
v___x_2104_ = lean_usize_dec_lt(v_i_2099_, v_sz_2098_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; 
lean_dec(v_cmd_2094_);
v___x_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2105_, 0, v_b_2100_);
return v___x_2105_;
}
else
{
lean_object* v_snd_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2140_; 
v_snd_2106_ = lean_ctor_get(v_b_2100_, 1);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_b_2100_);
if (v_isSharedCheck_2140_ == 0)
{
lean_object* v_unused_2141_; 
v_unused_2141_ = lean_ctor_get(v_b_2100_, 0);
lean_dec(v_unused_2141_);
v___x_2108_ = v_b_2100_;
v_isShared_2109_ = v_isSharedCheck_2140_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_snd_2106_);
lean_dec(v_b_2100_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2140_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v_a_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_box(0);
v_a_2111_ = lean_array_uget_borrowed(v_as_2097_, v_i_2099_);
lean_inc(v_snd_2106_);
lean_inc(v_cmd_2094_);
v___x_2112_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7(v_init_2091_, v___x_2092_, v_val_2093_, v_cmd_2094_, v_onUnsolved_2095_, v___y_2096_, v_a_2111_, v_snd_2106_, v___y_2101_, v___y_2102_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2131_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2115_ = v___x_2112_;
v_isShared_2116_ = v_isSharedCheck_2131_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2112_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2131_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
if (lean_obj_tag(v_a_2113_) == 0)
{
lean_object* v___x_2117_; lean_object* v___x_2119_; 
lean_dec(v_cmd_2094_);
v___x_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2117_, 0, v_a_2113_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v___x_2117_);
v___x_2119_ = v___x_2108_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v___x_2117_);
lean_ctor_set(v_reuseFailAlloc_2123_, 1, v_snd_2106_);
v___x_2119_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
lean_object* v___x_2121_; 
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v___x_2119_);
v___x_2121_ = v___x_2115_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; 
lean_del_object(v___x_2115_);
lean_dec(v_snd_2106_);
v_a_2124_ = lean_ctor_get(v_a_2113_, 0);
lean_inc(v_a_2124_);
lean_dec_ref_known(v_a_2113_, 1);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 1, v_a_2124_);
lean_ctor_set(v___x_2108_, 0, v___x_2110_);
v___x_2126_ = v___x_2108_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2130_, 1, v_a_2124_);
v___x_2126_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
size_t v___x_2127_; size_t v___x_2128_; 
v___x_2127_ = ((size_t)1ULL);
v___x_2128_ = lean_usize_add(v_i_2099_, v___x_2127_);
v_i_2099_ = v___x_2128_;
v_b_2100_ = v___x_2126_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_del_object(v___x_2108_);
lean_dec(v_snd_2106_);
lean_dec(v_cmd_2094_);
v_a_2132_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2112_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2112_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__9___boxed(lean_object* v_init_2142_, lean_object* v___x_2143_, lean_object* v_val_2144_, lean_object* v_cmd_2145_, lean_object* v_onUnsolved_2146_, lean_object* v___y_2147_, lean_object* v_as_2148_, lean_object* v_sz_2149_, lean_object* v_i_2150_, lean_object* v_b_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
uint8_t v_onUnsolved_boxed_2155_; uint8_t v___y_13253__boxed_2156_; size_t v_sz_boxed_2157_; size_t v_i_boxed_2158_; lean_object* v_res_2159_; 
v_onUnsolved_boxed_2155_ = lean_unbox(v_onUnsolved_2146_);
v___y_13253__boxed_2156_ = lean_unbox(v___y_2147_);
v_sz_boxed_2157_ = lean_unbox_usize(v_sz_2149_);
lean_dec(v_sz_2149_);
v_i_boxed_2158_ = lean_unbox_usize(v_i_2150_);
lean_dec(v_i_2150_);
v_res_2159_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7_spec__9(v_init_2142_, v___x_2143_, v_val_2144_, v_cmd_2145_, v_onUnsolved_boxed_2155_, v___y_13253__boxed_2156_, v_as_2148_, v_sz_boxed_2157_, v_i_boxed_2158_, v_b_2151_, v___y_2152_, v___y_2153_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
lean_dec_ref(v_as_2148_);
lean_dec_ref(v_val_2144_);
lean_dec_ref(v___x_2143_);
lean_dec_ref(v_init_2142_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7___boxed(lean_object* v_init_2160_, lean_object* v___x_2161_, lean_object* v_val_2162_, lean_object* v_cmd_2163_, lean_object* v_onUnsolved_2164_, lean_object* v___y_2165_, lean_object* v_n_2166_, lean_object* v_b_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
uint8_t v_onUnsolved_boxed_2171_; uint8_t v___y_13275__boxed_2172_; lean_object* v_res_2173_; 
v_onUnsolved_boxed_2171_ = lean_unbox(v_onUnsolved_2164_);
v___y_13275__boxed_2172_ = lean_unbox(v___y_2165_);
v_res_2173_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7(v_init_2160_, v___x_2161_, v_val_2162_, v_cmd_2163_, v_onUnsolved_boxed_2171_, v___y_13275__boxed_2172_, v_n_2166_, v_b_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v_n_2166_);
lean_dec_ref(v_val_2162_);
lean_dec_ref(v___x_2161_);
lean_dec_ref(v_init_2160_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(lean_object* v___x_2174_, lean_object* v_val_2175_, lean_object* v_cmd_2176_, uint8_t v_onUnsolved_2177_, uint8_t v___y_2178_, lean_object* v_t_2179_, lean_object* v_init_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v_root_2184_; lean_object* v_tail_2185_; lean_object* v___x_2186_; 
v_root_2184_ = lean_ctor_get(v_t_2179_, 0);
v_tail_2185_ = lean_ctor_get(v_t_2179_, 1);
lean_inc(v_cmd_2176_);
lean_inc_ref(v_init_2180_);
v___x_2186_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__7(v_init_2180_, v___x_2174_, v_val_2175_, v_cmd_2176_, v_onUnsolved_2177_, v___y_2178_, v_root_2184_, v_init_2180_, v___y_2181_, v___y_2182_);
lean_dec_ref(v_init_2180_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2223_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2189_ = v___x_2186_;
v_isShared_2190_ = v_isSharedCheck_2223_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2186_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2223_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
if (lean_obj_tag(v_a_2187_) == 0)
{
lean_object* v_a_2191_; lean_object* v___x_2193_; 
lean_dec(v_cmd_2176_);
v_a_2191_ = lean_ctor_get(v_a_2187_, 0);
lean_inc(v_a_2191_);
lean_dec_ref_known(v_a_2187_, 1);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v_a_2191_);
v___x_2193_ = v___x_2189_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_a_2191_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; size_t v_sz_2198_; size_t v___x_2199_; lean_object* v___x_2200_; 
lean_del_object(v___x_2189_);
v_a_2195_ = lean_ctor_get(v_a_2187_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v_a_2187_, 1);
v___x_2196_ = lean_box(0);
v___x_2197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v_a_2195_);
v_sz_2198_ = lean_array_size(v_tail_2185_);
v___x_2199_ = ((size_t)0ULL);
v___x_2200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8(v___x_2174_, v_val_2175_, v_cmd_2176_, v_onUnsolved_2177_, v___y_2178_, v_tail_2185_, v_sz_2198_, v___x_2199_, v___x_2197_, v___y_2181_, v___y_2182_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2214_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2203_ = v___x_2200_;
v_isShared_2204_ = v_isSharedCheck_2214_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2200_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2214_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_fst_2205_; 
v_fst_2205_ = lean_ctor_get(v_a_2201_, 0);
if (lean_obj_tag(v_fst_2205_) == 0)
{
lean_object* v_snd_2206_; lean_object* v___x_2208_; 
v_snd_2206_ = lean_ctor_get(v_a_2201_, 1);
lean_inc(v_snd_2206_);
lean_dec(v_a_2201_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v_snd_2206_);
v___x_2208_ = v___x_2203_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_snd_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
else
{
lean_object* v_val_2210_; lean_object* v___x_2212_; 
lean_inc_ref(v_fst_2205_);
lean_dec(v_a_2201_);
v_val_2210_ = lean_ctor_get(v_fst_2205_, 0);
lean_inc(v_val_2210_);
lean_dec_ref_known(v_fst_2205_, 1);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v_val_2210_);
v___x_2212_ = v___x_2203_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_val_2210_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
v_a_2215_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2217_ = v___x_2200_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2200_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec(v_cmd_2176_);
v_a_2224_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2186_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2186_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4___boxed(lean_object* v___x_2232_, lean_object* v_val_2233_, lean_object* v_cmd_2234_, lean_object* v_onUnsolved_2235_, lean_object* v___y_2236_, lean_object* v_t_2237_, lean_object* v_init_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
uint8_t v_onUnsolved_boxed_2242_; uint8_t v___y_13466__boxed_2243_; lean_object* v_res_2244_; 
v_onUnsolved_boxed_2242_ = lean_unbox(v_onUnsolved_2235_);
v___y_13466__boxed_2243_ = lean_unbox(v___y_2236_);
v_res_2244_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v___x_2232_, v_val_2233_, v_cmd_2234_, v_onUnsolved_boxed_2242_, v___y_13466__boxed_2243_, v_t_2237_, v_init_2238_, v___y_2239_, v___y_2240_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec_ref(v_t_2237_);
lean_dec_ref(v_val_2233_);
lean_dec_ref(v___x_2232_);
return v_res_2244_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = lean_box(0);
v___x_2246_ = lean_unsigned_to_nat(16u);
v___x_2247_ = lean_mk_array(v___x_2246_, v___x_2245_);
return v___x_2247_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__0);
v___x_2249_ = lean_unsigned_to_nat(0u);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
lean_ctor_set(v___x_2250_, 1, v___x_2248_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(lean_object* v_cmd_2254_, lean_object* v_opts_2255_, lean_object* v_tree_2256_, lean_object* v_msgs_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_){
_start:
{
uint8_t v___y_2262_; lean_object* v___y_2263_; uint8_t v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; uint8_t v___y_2267_; uint8_t v___y_2293_; uint8_t v___y_2294_; lean_object* v_acc_2295_; lean_object* v___y_2296_; lean_object* v___y_2297_; lean_object* v___f_2299_; uint8_t v___y_2301_; lean_object* v___x_2308_; uint8_t v___x_2309_; 
v___f_2299_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__2));
v___x_2308_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof;
v___x_2309_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_2255_, v___x_2308_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy;
v___x_2311_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_2255_, v___x_2310_);
v___y_2301_ = v___x_2311_;
goto v___jp_2300_;
}
else
{
v___y_2301_ = v___x_2309_;
goto v___jp_2300_;
}
v___jp_2261_:
{
lean_object* v___x_2268_; 
v___x_2268_ = l_Lean_Syntax_getRange_x3f(v_cmd_2254_, v___y_2267_);
if (lean_obj_tag(v___x_2268_) == 1)
{
lean_object* v_val_2269_; lean_object* v_fileMap_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v_val_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_val_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v_fileMap_2270_ = lean_ctor_get(v___y_2266_, 1);
v___x_2271_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__1);
v___x_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___y_2263_);
lean_ctor_set(v___x_2272_, 1, v___x_2271_);
v___x_2273_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4(v_fileMap_2270_, v_val_2269_, v_cmd_2254_, v___y_2264_, v___y_2262_, v_msgs_2257_, v___x_2272_, v___y_2266_, v___y_2265_);
lean_dec(v_val_2269_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2282_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2276_ = v___x_2273_;
v_isShared_2277_ = v_isSharedCheck_2282_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2273_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2282_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v_fst_2278_; lean_object* v___x_2280_; 
v_fst_2278_ = lean_ctor_get(v_a_2274_, 0);
lean_inc(v_fst_2278_);
lean_dec(v_a_2274_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v_fst_2278_);
v___x_2280_ = v___x_2276_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_fst_2278_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_a_2283_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2273_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2273_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
else
{
lean_object* v___x_2291_; 
lean_dec(v___x_2268_);
lean_dec(v_cmd_2254_);
v___x_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2291_, 0, v___y_2263_);
return v___x_2291_;
}
}
v___jp_2292_:
{
if (v___y_2294_ == 0)
{
if (v___y_2293_ == 0)
{
lean_object* v___x_2298_; 
lean_dec(v_cmd_2254_);
v___x_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2298_, 0, v_acc_2295_);
return v___x_2298_;
}
else
{
v___y_2262_ = v___y_2293_;
v___y_2263_ = v_acc_2295_;
v___y_2264_ = v___y_2294_;
v___y_2265_ = v___y_2297_;
v___y_2266_ = v___y_2296_;
v___y_2267_ = v___y_2293_;
goto v___jp_2261_;
}
}
else
{
v___y_2262_ = v___y_2293_;
v___y_2263_ = v_acc_2295_;
v___y_2264_ = v___y_2294_;
v___y_2265_ = v___y_2297_;
v___y_2266_ = v___y_2296_;
v___y_2267_ = v___y_2294_;
goto v___jp_2261_;
}
}
v___jp_2300_:
{
lean_object* v___x_2302_; uint8_t v_onUnsolved_2303_; lean_object* v___x_2304_; uint8_t v_onSorry_2305_; lean_object* v_acc_2306_; 
v___x_2302_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal;
v_onUnsolved_2303_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_2255_, v___x_2302_);
v___x_2304_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry;
v_onSorry_2305_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_2255_, v___x_2304_);
v_acc_2306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___closed__3));
if (v_onSorry_2305_ == 0)
{
lean_dec_ref(v_tree_2256_);
v___y_2293_ = v___y_2301_;
v___y_2294_ = v_onUnsolved_2303_;
v_acc_2295_ = v_acc_2306_;
v___y_2296_ = v_a_2258_;
v___y_2297_ = v_a_2259_;
goto v___jp_2292_;
}
else
{
lean_object* v_acc_2307_; 
v_acc_2307_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_2299_, v_acc_2306_, v_tree_2256_);
v___y_2293_ = v___y_2301_;
v___y_2294_ = v_onUnsolved_2303_;
v_acc_2295_ = v_acc_2307_;
v___y_2296_ = v_a_2258_;
v___y_2297_ = v_a_2259_;
goto v___jp_2292_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints___boxed(lean_object* v_cmd_2312_, lean_object* v_opts_2313_, lean_object* v_tree_2314_, lean_object* v_msgs_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_cmd_2312_, v_opts_2313_, v_tree_2314_, v_msgs_2315_, v_a_2316_, v_a_2317_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec_ref(v_msgs_2315_);
lean_dec_ref(v_opts_2313_);
return v_res_2319_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(lean_object* v_00_u03b2_2320_, lean_object* v_m_2321_, lean_object* v_a_2322_){
_start:
{
uint8_t v___x_2323_; 
v___x_2323_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___redArg(v_m_2321_, v_a_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0___boxed(lean_object* v_00_u03b2_2324_, lean_object* v_m_2325_, lean_object* v_a_2326_){
_start:
{
uint8_t v_res_2327_; lean_object* v_r_2328_; 
v_res_2327_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0(v_00_u03b2_2324_, v_m_2325_, v_a_2326_);
lean_dec_ref(v_a_2326_);
lean_dec_ref(v_m_2325_);
v_r_2328_ = lean_box(v_res_2327_);
return v_r_2328_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1(lean_object* v_00_u03b2_2329_, lean_object* v_m_2330_, lean_object* v_a_2331_, lean_object* v_b_2332_){
_start:
{
lean_object* v___x_2333_; 
v___x_2333_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1___redArg(v_m_2330_, v_a_2331_, v_b_2332_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2(lean_object* v___x_2334_, lean_object* v_fst_2335_, lean_object* v_snd_2336_, lean_object* v___x_2337_, lean_object* v_as_2338_, size_t v_sz_2339_, size_t v_i_2340_, lean_object* v_b_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___redArg(v___x_2334_, v_fst_2335_, v_snd_2336_, v___x_2337_, v_as_2338_, v_sz_2339_, v_i_2340_, v_b_2341_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2___boxed(lean_object* v___x_2346_, lean_object* v_fst_2347_, lean_object* v_snd_2348_, lean_object* v___x_2349_, lean_object* v_as_2350_, lean_object* v_sz_2351_, lean_object* v_i_2352_, lean_object* v_b_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
size_t v_sz_boxed_2357_; size_t v_i_boxed_2358_; lean_object* v_res_2359_; 
v_sz_boxed_2357_ = lean_unbox_usize(v_sz_2351_);
lean_dec(v_sz_2351_);
v_i_boxed_2358_ = lean_unbox_usize(v_i_2352_);
lean_dec(v_i_2352_);
v_res_2359_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__2(v___x_2346_, v_fst_2347_, v_snd_2348_, v___x_2349_, v_as_2350_, v_sz_boxed_2357_, v_i_boxed_2358_, v_b_2353_, v___y_2354_, v___y_2355_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec_ref(v_as_2350_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5(lean_object* v_msgData_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v___x_2364_; 
v___x_2364_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg(v_msgData_2360_, v___y_2362_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___boxed(lean_object* v_msgData_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5(v_msgData_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
return v_res_2369_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0(lean_object* v_00_u03b2_2370_, lean_object* v_a_2371_, lean_object* v_x_2372_){
_start:
{
uint8_t v___x_2373_; 
v___x_2373_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___redArg(v_a_2371_, v_x_2372_);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2374_, lean_object* v_a_2375_, lean_object* v_x_2376_){
_start:
{
uint8_t v_res_2377_; lean_object* v_r_2378_; 
v_res_2377_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__0_spec__0(v_00_u03b2_2374_, v_a_2375_, v_x_2376_);
lean_dec(v_x_2376_);
lean_dec_ref(v_a_2375_);
v_r_2378_ = lean_box(v_res_2377_);
return v_r_2378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2(lean_object* v_00_u03b2_2379_, lean_object* v_data_2380_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2___redArg(v_data_2380_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2382_, lean_object* v_i_2383_, lean_object* v_source_2384_, lean_object* v_target_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3___redArg(v_i_2383_, v_source_2384_, v_target_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3_spec__8(lean_object* v_00_u03b2_2387_, lean_object* v_x_2388_, lean_object* v_x_2389_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__1_spec__2_spec__3_spec__8___redArg(v_x_2388_, v_x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0(lean_object* v_x_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; 
lean_inc(v___y_2393_);
lean_inc_ref(v___y_2392_);
v___x_2399_ = lean_apply_7(v_x_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, lean_box(0));
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0___boxed(lean_object* v_x_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0(v_x_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(lean_object* v_mvarId_2409_, lean_object* v_x_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v___f_2418_; lean_object* v___x_2419_; 
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v___f_2418_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_2418_, 0, v_x_2410_);
lean_closure_set(v___f_2418_, 1, v___y_2411_);
lean_closure_set(v___f_2418_, 2, v___y_2412_);
v___x_2419_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2409_, v___f_2418_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
if (lean_obj_tag(v___x_2419_) == 0)
{
return v___x_2419_;
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2419_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2419_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg___boxed(lean_object* v_mvarId_2428_, lean_object* v_x_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(v_mvarId_2428_, v_x_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2(lean_object* v_00_u03b1_2438_, lean_object* v_mvarId_2439_, lean_object* v_x_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___redArg(v_mvarId_2439_, v_x_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___boxed(lean_object* v_00_u03b1_2449_, lean_object* v_mvarId_2450_, lean_object* v_x_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2(v_00_u03b1_2449_, v_mvarId_2450_, v_x_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0(lean_object* v_____r_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1));
v___x_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___boxed(lean_object* v_____r_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0(v_____r_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec_ref(v___y_2477_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1(lean_object* v_____r_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__1));
v___x_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1___boxed(lean_object* v_____r_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__1(v_____r_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
return v_res_2501_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2(uint8_t v___x_2502_, lean_object* v_x_2503_){
_start:
{
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2___boxed(lean_object* v___x_2504_, lean_object* v_x_2505_){
_start:
{
uint8_t v___x_10981__boxed_2506_; uint8_t v_res_2507_; lean_object* v_r_2508_; 
v___x_10981__boxed_2506_ = lean_unbox(v___x_2504_);
v_res_2507_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__2(v___x_10981__boxed_2506_, v_x_2505_);
lean_dec(v_x_2505_);
v_r_2508_ = lean_box(v_res_2507_);
return v_r_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(lean_object* v_msgData_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; lean_object* v_env_2516_; lean_object* v___x_2517_; lean_object* v_toCold_2518_; lean_object* v_mctx_2519_; lean_object* v_lctx_2520_; lean_object* v_options_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2515_ = lean_st_ref_get(v___y_2513_);
v_env_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc_ref(v_env_2516_);
lean_dec(v___x_2515_);
v___x_2517_ = lean_st_ref_get(v___y_2511_);
v_toCold_2518_ = lean_ctor_get(v___y_2512_, 0);
v_mctx_2519_ = lean_ctor_get(v___x_2517_, 0);
lean_inc_ref(v_mctx_2519_);
lean_dec(v___x_2517_);
v_lctx_2520_ = lean_ctor_get(v___y_2510_, 2);
v_options_2521_ = lean_ctor_get(v_toCold_2518_, 2);
lean_inc_ref(v_options_2521_);
lean_inc_ref(v_lctx_2520_);
v___x_2522_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2522_, 0, v_env_2516_);
lean_ctor_set(v___x_2522_, 1, v_mctx_2519_);
lean_ctor_set(v___x_2522_, 2, v_lctx_2520_);
lean_ctor_set(v___x_2522_, 3, v_options_2521_);
v___x_2523_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2522_);
lean_ctor_set(v___x_2523_, 1, v_msgData_2509_);
v___x_2524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2___boxed(lean_object* v_msgData_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(v_msgData_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(lean_object* v_cls_2532_, lean_object* v_msg_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v_ref_2539_; lean_object* v___x_2540_; lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2585_; 
v_ref_2539_ = lean_ctor_get(v___y_2536_, 2);
v___x_2540_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(v_msg_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2543_ = v___x_2540_;
v_isShared_2544_ = v_isSharedCheck_2585_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2540_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2585_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2545_; lean_object* v_traceState_2546_; lean_object* v_env_2547_; lean_object* v_nextMacroScope_2548_; lean_object* v_ngen_2549_; lean_object* v_auxDeclNGen_2550_; lean_object* v_cache_2551_; lean_object* v_messages_2552_; lean_object* v_infoState_2553_; lean_object* v_snapshotTasks_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2584_; 
v___x_2545_ = lean_st_ref_take(v___y_2537_);
v_traceState_2546_ = lean_ctor_get(v___x_2545_, 4);
v_env_2547_ = lean_ctor_get(v___x_2545_, 0);
v_nextMacroScope_2548_ = lean_ctor_get(v___x_2545_, 1);
v_ngen_2549_ = lean_ctor_get(v___x_2545_, 2);
v_auxDeclNGen_2550_ = lean_ctor_get(v___x_2545_, 3);
v_cache_2551_ = lean_ctor_get(v___x_2545_, 5);
v_messages_2552_ = lean_ctor_get(v___x_2545_, 6);
v_infoState_2553_ = lean_ctor_get(v___x_2545_, 7);
v_snapshotTasks_2554_ = lean_ctor_get(v___x_2545_, 8);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2556_ = v___x_2545_;
v_isShared_2557_ = v_isSharedCheck_2584_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_snapshotTasks_2554_);
lean_inc(v_infoState_2553_);
lean_inc(v_messages_2552_);
lean_inc(v_cache_2551_);
lean_inc(v_traceState_2546_);
lean_inc(v_auxDeclNGen_2550_);
lean_inc(v_ngen_2549_);
lean_inc(v_nextMacroScope_2548_);
lean_inc(v_env_2547_);
lean_dec(v___x_2545_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2584_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
uint64_t v_tid_2558_; lean_object* v_traces_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2583_; 
v_tid_2558_ = lean_ctor_get_uint64(v_traceState_2546_, sizeof(void*)*1);
v_traces_2559_ = lean_ctor_get(v_traceState_2546_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v_traceState_2546_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2561_ = v_traceState_2546_;
v_isShared_2562_ = v_isSharedCheck_2583_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_traces_2559_);
lean_dec(v_traceState_2546_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2583_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; double v___x_2565_; uint8_t v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2574_; 
v___x_2563_ = lean_box(0);
v___x_2564_ = lean_box(0);
v___x_2565_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0);
v___x_2566_ = 0;
v___x_2567_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_2568_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2568_, 0, v_cls_2532_);
lean_ctor_set(v___x_2568_, 1, v___x_2564_);
lean_ctor_set(v___x_2568_, 2, v___x_2567_);
lean_ctor_set_float(v___x_2568_, sizeof(void*)*3, v___x_2565_);
lean_ctor_set_float(v___x_2568_, sizeof(void*)*3 + 8, v___x_2565_);
lean_ctor_set_uint8(v___x_2568_, sizeof(void*)*3 + 16, v___x_2566_);
v___x_2569_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__1));
v___x_2570_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2568_);
lean_ctor_set(v___x_2570_, 1, v_a_2541_);
lean_ctor_set(v___x_2570_, 2, v___x_2569_);
lean_inc(v_ref_2539_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_ref_2539_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = l_Lean_PersistentArray_push___redArg(v_traces_2559_, v___x_2571_);
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 0, v___x_2572_);
v___x_2574_ = v___x_2561_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2572_);
lean_ctor_set_uint64(v_reuseFailAlloc_2582_, sizeof(void*)*1, v_tid_2558_);
v___x_2574_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
lean_object* v___x_2576_; 
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 4, v___x_2574_);
v___x_2576_ = v___x_2556_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_env_2547_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v_nextMacroScope_2548_);
lean_ctor_set(v_reuseFailAlloc_2581_, 2, v_ngen_2549_);
lean_ctor_set(v_reuseFailAlloc_2581_, 3, v_auxDeclNGen_2550_);
lean_ctor_set(v_reuseFailAlloc_2581_, 4, v___x_2574_);
lean_ctor_set(v_reuseFailAlloc_2581_, 5, v_cache_2551_);
lean_ctor_set(v_reuseFailAlloc_2581_, 6, v_messages_2552_);
lean_ctor_set(v_reuseFailAlloc_2581_, 7, v_infoState_2553_);
lean_ctor_set(v_reuseFailAlloc_2581_, 8, v_snapshotTasks_2554_);
v___x_2576_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
lean_object* v___x_2577_; lean_object* v___x_2579_; 
v___x_2577_ = lean_st_ref_put(v___y_2537_, v___x_2576_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 0, v___x_2563_);
v___x_2579_ = v___x_2543_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2563_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg___boxed(lean_object* v_cls_2586_, lean_object* v_msg_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(v_cls_2586_, v_msg_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
return v_res_2593_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2595_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__0));
v___x_2596_ = l_Lean_stringToMessageData(v___x_2595_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3(lean_object* v___x_2597_, lean_object* v___f_2598_, lean_object* v___x_2599_, lean_object* v___x_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_){
_start:
{
lean_object* v___x_2608_; lean_object* v_a_2610_; lean_object* v___y_2614_; lean_object* v___x_2628_; 
v___x_2608_ = lean_st_mk_ref(v___x_2597_);
v___x_2628_ = l_Lean_Elab_Tactic_saveState___redArg(v___x_2608_, v___y_2602_, v___y_2604_, v___y_2606_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2630_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = l_Lean_Elab_Tactic_Try_collectTryCoreSuggestions(v___x_2600_, v___x_2599_, v___x_2608_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; 
lean_dec(v_a_2629_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2631_);
lean_dec_ref_known(v___x_2630_, 1);
v_a_2610_ = v_a_2631_;
goto v___jp_2609_;
}
else
{
lean_object* v_a_2632_; uint8_t v___y_2634_; uint8_t v___x_2678_; 
v_a_2632_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2632_);
v___x_2678_ = l_Lean_Exception_isInterrupt(v_a_2632_);
if (v___x_2678_ == 0)
{
uint8_t v___x_2679_; 
lean_inc(v_a_2632_);
v___x_2679_ = l_Lean_Exception_isRuntime(v_a_2632_);
v___y_2634_ = v___x_2679_;
goto v___jp_2633_;
}
else
{
v___y_2634_ = v___x_2678_;
goto v___jp_2633_;
}
v___jp_2633_:
{
if (v___y_2634_ == 0)
{
lean_object* v___x_2635_; 
lean_dec_ref_known(v___x_2630_, 1);
v___x_2635_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_2629_, v___y_2634_, v___x_2608_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2668_; 
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2668_ == 0)
{
lean_object* v_unused_2669_; 
v_unused_2669_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2669_);
v___x_2637_ = v___x_2635_;
v_isShared_2638_ = v_isSharedCheck_2668_;
goto v_resetjp_2636_;
}
else
{
lean_dec(v___x_2635_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2668_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
uint8_t v___x_2639_; 
v___x_2639_ = l_Lean_Exception_isInterrupt(v_a_2632_);
if (v___x_2639_ == 0)
{
uint8_t v___x_2640_; 
lean_inc(v_a_2632_);
v___x_2640_ = l_Lean_Exception_isMaxRecDepth(v_a_2632_);
if (v___x_2640_ == 0)
{
lean_object* v_toCold_2641_; lean_object* v_options_2642_; uint8_t v_hasTrace_2643_; 
lean_del_object(v___x_2637_);
v_toCold_2641_ = lean_ctor_get(v___y_2605_, 0);
v_options_2642_ = lean_ctor_get(v_toCold_2641_, 2);
v_hasTrace_2643_ = lean_ctor_get_uint8(v_options_2642_, sizeof(void*)*1);
if (v_hasTrace_2643_ == 0)
{
lean_dec(v_a_2632_);
goto v___jp_2625_;
}
else
{
lean_object* v_inheritedTraceOptions_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; uint8_t v___x_2647_; 
v_inheritedTraceOptions_2644_ = lean_ctor_get(v_toCold_2641_, 11);
v___x_2645_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_2646_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_2647_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2644_, v_options_2642_, v___x_2646_);
if (v___x_2647_ == 0)
{
lean_dec(v_a_2632_);
goto v___jp_2625_;
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2648_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1);
v___x_2649_ = l_Lean_Exception_toMessageData(v_a_2632_);
v___x_2650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2648_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(v___x_2645_, v___x_2650_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v___x_2653_; 
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2652_);
lean_dec_ref_known(v___x_2651_, 1);
lean_inc(v___x_2608_);
v___x_2653_ = lean_apply_10(v___f_2598_, v_a_2652_, v___x_2599_, v___x_2608_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, lean_box(0));
v___y_2614_ = v___x_2653_;
goto v___jp_2613_;
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_dec(v___x_2608_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
v_a_2654_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2651_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_dec(v___x_2651_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
}
}
}
else
{
lean_object* v___x_2663_; 
lean_dec(v___x_2608_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set_tag(v___x_2637_, 1);
lean_ctor_set(v___x_2637_, 0, v_a_2632_);
v___x_2663_ = v___x_2637_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2632_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
else
{
lean_object* v___x_2666_; 
lean_dec(v___x_2608_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set_tag(v___x_2637_, 1);
lean_ctor_set(v___x_2637_, 0, v_a_2632_);
v___x_2666_ = v___x_2637_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2632_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec(v_a_2632_);
lean_dec(v___x_2608_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
v_a_2670_ = lean_ctor_get(v___x_2635_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2635_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2635_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
else
{
lean_dec(v_a_2632_);
lean_dec(v_a_2629_);
lean_dec(v___x_2608_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
return v___x_2630_;
}
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec(v___x_2608_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___x_2600_);
lean_dec_ref(v___x_2599_);
lean_dec_ref(v___f_2598_);
v_a_2680_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2628_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2628_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
v___jp_2609_:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = lean_st_ref_get(v___x_2608_);
lean_dec(v___x_2608_);
lean_dec(v___x_2611_);
v___x_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2612_, 0, v_a_2610_);
return v___x_2612_;
}
v___jp_2613_:
{
if (lean_obj_tag(v___y_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v_a_2616_; 
v_a_2615_ = lean_ctor_get(v___y_2614_, 0);
lean_inc(v_a_2615_);
lean_dec_ref_known(v___y_2614_, 1);
v_a_2616_ = lean_ctor_get(v_a_2615_, 0);
lean_inc(v_a_2616_);
lean_dec(v_a_2615_);
v_a_2610_ = v_a_2616_;
goto v___jp_2609_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec(v___x_2608_);
v_a_2617_ = lean_ctor_get(v___y_2614_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___y_2614_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___y_2614_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___y_2614_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
v___jp_2625_:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2626_ = lean_box(0);
lean_inc(v___x_2608_);
v___x_2627_ = lean_apply_10(v___f_2598_, v___x_2626_, v___x_2599_, v___x_2608_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, lean_box(0));
v___y_2614_ = v___x_2627_;
goto v___jp_2613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___boxed(lean_object* v___x_2688_, lean_object* v___f_2689_, lean_object* v___x_2690_, lean_object* v___x_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3(v___x_2688_, v___f_2689_, v___x_2690_, v___x_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4(lean_object* v___x_2700_, uint8_t v___x_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_2700_, v___x_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4___boxed(lean_object* v___x_2710_, lean_object* v___x_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
uint8_t v___x_11310__boxed_2719_; lean_object* v_res_2720_; 
v___x_11310__boxed_2719_ = lean_unbox(v___x_2711_);
v_res_2720_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4(v___x_2710_, v___x_11310__boxed_2719_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2712_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(lean_object* v_cls_2721_, lean_object* v_msg_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_ref_2728_; lean_object* v___x_2729_; lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2774_; 
v_ref_2728_ = lean_ctor_get(v___y_2725_, 2);
v___x_2729_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1_spec__2(v_msg_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2732_ = v___x_2729_;
v_isShared_2733_ = v_isSharedCheck_2774_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2729_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2774_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2734_; lean_object* v_traceState_2735_; lean_object* v_env_2736_; lean_object* v_nextMacroScope_2737_; lean_object* v_ngen_2738_; lean_object* v_auxDeclNGen_2739_; lean_object* v_cache_2740_; lean_object* v_messages_2741_; lean_object* v_infoState_2742_; lean_object* v_snapshotTasks_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2773_; 
v___x_2734_ = lean_st_ref_take(v___y_2726_);
v_traceState_2735_ = lean_ctor_get(v___x_2734_, 4);
v_env_2736_ = lean_ctor_get(v___x_2734_, 0);
v_nextMacroScope_2737_ = lean_ctor_get(v___x_2734_, 1);
v_ngen_2738_ = lean_ctor_get(v___x_2734_, 2);
v_auxDeclNGen_2739_ = lean_ctor_get(v___x_2734_, 3);
v_cache_2740_ = lean_ctor_get(v___x_2734_, 5);
v_messages_2741_ = lean_ctor_get(v___x_2734_, 6);
v_infoState_2742_ = lean_ctor_get(v___x_2734_, 7);
v_snapshotTasks_2743_ = lean_ctor_get(v___x_2734_, 8);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2745_ = v___x_2734_;
v_isShared_2746_ = v_isSharedCheck_2773_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_snapshotTasks_2743_);
lean_inc(v_infoState_2742_);
lean_inc(v_messages_2741_);
lean_inc(v_cache_2740_);
lean_inc(v_traceState_2735_);
lean_inc(v_auxDeclNGen_2739_);
lean_inc(v_ngen_2738_);
lean_inc(v_nextMacroScope_2737_);
lean_inc(v_env_2736_);
lean_dec(v___x_2734_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2773_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
uint64_t v_tid_2747_; lean_object* v_traces_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2772_; 
v_tid_2747_ = lean_ctor_get_uint64(v_traceState_2735_, sizeof(void*)*1);
v_traces_2748_ = lean_ctor_get(v_traceState_2735_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v_traceState_2735_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2750_ = v_traceState_2735_;
v_isShared_2751_ = v_isSharedCheck_2772_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_traces_2748_);
lean_dec(v_traceState_2735_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2772_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; double v___x_2754_; uint8_t v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2763_; 
v___x_2752_ = lean_box(0);
v___x_2753_ = lean_box(0);
v___x_2754_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__0);
v___x_2755_ = 0;
v___x_2756_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
v___x_2757_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2757_, 0, v_cls_2721_);
lean_ctor_set(v___x_2757_, 1, v___x_2753_);
lean_ctor_set(v___x_2757_, 2, v___x_2756_);
lean_ctor_set_float(v___x_2757_, sizeof(void*)*3, v___x_2754_);
lean_ctor_set_float(v___x_2757_, sizeof(void*)*3 + 8, v___x_2754_);
lean_ctor_set_uint8(v___x_2757_, sizeof(void*)*3 + 16, v___x_2755_);
v___x_2758_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3___closed__1));
v___x_2759_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v_a_2730_);
lean_ctor_set(v___x_2759_, 2, v___x_2758_);
lean_inc(v_ref_2728_);
v___x_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2760_, 0, v_ref_2728_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = l_Lean_PersistentArray_push___redArg(v_traces_2748_, v___x_2760_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v___x_2761_);
v___x_2763_ = v___x_2750_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v___x_2761_);
lean_ctor_set_uint64(v_reuseFailAlloc_2771_, sizeof(void*)*1, v_tid_2747_);
v___x_2763_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
lean_object* v___x_2765_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 4, v___x_2763_);
v___x_2765_ = v___x_2745_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_env_2736_);
lean_ctor_set(v_reuseFailAlloc_2770_, 1, v_nextMacroScope_2737_);
lean_ctor_set(v_reuseFailAlloc_2770_, 2, v_ngen_2738_);
lean_ctor_set(v_reuseFailAlloc_2770_, 3, v_auxDeclNGen_2739_);
lean_ctor_set(v_reuseFailAlloc_2770_, 4, v___x_2763_);
lean_ctor_set(v_reuseFailAlloc_2770_, 5, v_cache_2740_);
lean_ctor_set(v_reuseFailAlloc_2770_, 6, v_messages_2741_);
lean_ctor_set(v_reuseFailAlloc_2770_, 7, v_infoState_2742_);
lean_ctor_set(v_reuseFailAlloc_2770_, 8, v_snapshotTasks_2743_);
v___x_2765_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
lean_object* v___x_2766_; lean_object* v___x_2768_; 
v___x_2766_ = lean_st_ref_put(v___y_2726_, v___x_2765_);
if (v_isShared_2733_ == 0)
{
lean_ctor_set(v___x_2732_, 0, v___x_2752_);
v___x_2768_ = v___x_2732_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2752_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3___boxed(lean_object* v_cls_2775_, lean_object* v_msg_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(v_cls_2775_, v_msg_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
lean_dec(v___y_2778_);
lean_dec_ref(v___y_2777_);
return v_res_2782_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__0));
v___x_2785_ = l_Lean_stringToMessageData(v___x_2784_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5(lean_object* v___f_2786_, lean_object* v_term_2787_, lean_object* v___x_2788_, lean_object* v___x_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v___y_2796_; lean_object* v___x_2817_; 
v___x_2817_ = l_Lean_Elab_Term_TermElabM_run___redArg(v_term_2787_, v___x_2788_, v___x_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___f_2786_);
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2820_ = v___x_2817_;
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2817_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v_fst_2822_; lean_object* v___x_2824_; 
v_fst_2822_ = lean_ctor_get(v_a_2818_, 0);
lean_inc(v_fst_2822_);
lean_dec(v_a_2818_);
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 0, v_fst_2822_);
v___x_2824_ = v___x_2820_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_fst_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2867_; 
v_a_2827_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2829_ = v___x_2817_;
v_isShared_2830_ = v_isSharedCheck_2867_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2817_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2867_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
uint8_t v___y_2832_; uint8_t v___x_2865_; 
v___x_2865_ = l_Lean_Exception_isInterrupt(v_a_2827_);
if (v___x_2865_ == 0)
{
uint8_t v___x_2866_; 
lean_inc(v_a_2827_);
v___x_2866_ = l_Lean_Exception_isRuntime(v_a_2827_);
v___y_2832_ = v___x_2866_;
goto v___jp_2831_;
}
else
{
v___y_2832_ = v___x_2865_;
goto v___jp_2831_;
}
v___jp_2831_:
{
if (v___y_2832_ == 0)
{
uint8_t v___x_2833_; 
v___x_2833_ = l_Lean_Exception_isInterrupt(v_a_2827_);
if (v___x_2833_ == 0)
{
uint8_t v___x_2834_; 
lean_inc(v_a_2827_);
v___x_2834_ = l_Lean_Exception_isMaxRecDepth(v_a_2827_);
if (v___x_2834_ == 0)
{
lean_object* v_toCold_2835_; lean_object* v_options_2836_; uint8_t v_hasTrace_2837_; 
lean_del_object(v___x_2829_);
v_toCold_2835_ = lean_ctor_get(v___y_2792_, 0);
v_options_2836_ = lean_ctor_get(v_toCold_2835_, 2);
v_hasTrace_2837_ = lean_ctor_get_uint8(v_options_2836_, sizeof(void*)*1);
if (v_hasTrace_2837_ == 0)
{
lean_dec(v_a_2827_);
goto v___jp_2814_;
}
else
{
lean_object* v_inheritedTraceOptions_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; uint8_t v___x_2841_; 
v_inheritedTraceOptions_2838_ = lean_ctor_get(v_toCold_2835_, 11);
v___x_2839_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_2840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_2841_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2838_, v_options_2836_, v___x_2840_);
if (v___x_2841_ == 0)
{
lean_dec(v_a_2827_);
goto v___jp_2814_;
}
else
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2842_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___closed__1);
v___x_2843_ = l_Lean_Exception_toMessageData(v_a_2827_);
v___x_2844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2842_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
v___x_2845_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(v___x_2839_, v___x_2844_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2847_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v___x_2847_ = lean_apply_6(v___f_2786_, v_a_2846_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, lean_box(0));
v___y_2796_ = v___x_2847_;
goto v___jp_2795_;
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___f_2786_);
v_a_2848_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2845_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2845_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
}
}
else
{
lean_object* v___x_2857_; 
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___f_2786_);
if (v_isShared_2830_ == 0)
{
v___x_2857_ = v___x_2829_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2827_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
else
{
lean_object* v___x_2860_; 
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___f_2786_);
if (v_isShared_2830_ == 0)
{
v___x_2860_ = v___x_2829_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2827_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
else
{
lean_object* v___x_2863_; 
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___f_2786_);
if (v_isShared_2830_ == 0)
{
v___x_2863_ = v___x_2829_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_a_2827_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
}
v___jp_2795_:
{
if (lean_obj_tag(v___y_2796_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2805_; 
v_a_2797_ = lean_ctor_get(v___y_2796_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___y_2796_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2799_ = v___y_2796_;
v_isShared_2800_ = v_isSharedCheck_2805_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___y_2796_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2805_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v_a_2801_; lean_object* v___x_2803_; 
v_a_2801_ = lean_ctor_get(v_a_2797_, 0);
lean_inc(v_a_2801_);
lean_dec(v_a_2797_);
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 0, v_a_2801_);
v___x_2803_ = v___x_2799_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
v_a_2806_ = lean_ctor_get(v___y_2796_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___y_2796_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___y_2796_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___y_2796_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
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
v___jp_2814_:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2815_ = lean_box(0);
v___x_2816_ = lean_apply_6(v___f_2786_, v___x_2815_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, lean_box(0));
v___y_2796_ = v___x_2816_;
goto v___jp_2795_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___boxed(lean_object* v___f_2868_, lean_object* v_term_2869_, lean_object* v___x_2870_, lean_object* v___x_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5(v___f_2868_, v_term_2869_, v___x_2870_, v___x_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2878_, lean_object* v_vals_2879_, lean_object* v_i_2880_, lean_object* v_k_2881_){
_start:
{
lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2882_ = lean_array_get_size(v_keys_2878_);
v___x_2883_ = lean_nat_dec_lt(v_i_2880_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
lean_dec(v_i_2880_);
v___x_2884_ = lean_box(0);
return v___x_2884_;
}
else
{
lean_object* v_k_x27_2885_; uint8_t v___x_2886_; 
v_k_x27_2885_ = lean_array_fget_borrowed(v_keys_2878_, v_i_2880_);
v___x_2886_ = l_Lean_instBEqMVarId_beq(v_k_2881_, v_k_x27_2885_);
if (v___x_2886_ == 0)
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = lean_unsigned_to_nat(1u);
v___x_2888_ = lean_nat_add(v_i_2880_, v___x_2887_);
lean_dec(v_i_2880_);
v_i_2880_ = v___x_2888_;
goto _start;
}
else
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_array_fget_borrowed(v_vals_2879_, v_i_2880_);
lean_dec(v_i_2880_);
lean_inc(v___x_2890_);
v___x_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
return v___x_2891_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2892_, lean_object* v_vals_2893_, lean_object* v_i_2894_, lean_object* v_k_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(v_keys_2892_, v_vals_2893_, v_i_2894_, v_k_2895_);
lean_dec(v_k_2895_);
lean_dec_ref(v_vals_2893_);
lean_dec_ref(v_keys_2892_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(lean_object* v_x_2897_, size_t v_x_2898_, lean_object* v_x_2899_){
_start:
{
if (lean_obj_tag(v_x_2897_) == 0)
{
lean_object* v_es_2900_; lean_object* v___x_2901_; size_t v___x_2902_; size_t v___x_2903_; lean_object* v_j_2904_; lean_object* v___x_2905_; 
v_es_2900_ = lean_ctor_get(v_x_2897_, 0);
v___x_2901_ = lean_box(2);
v___x_2902_ = ((size_t)31ULL);
v___x_2903_ = lean_usize_land(v_x_2898_, v___x_2902_);
v_j_2904_ = lean_usize_to_nat(v___x_2903_);
v___x_2905_ = lean_array_get_borrowed(v___x_2901_, v_es_2900_, v_j_2904_);
lean_dec(v_j_2904_);
switch(lean_obj_tag(v___x_2905_))
{
case 0:
{
lean_object* v_key_2906_; lean_object* v_val_2907_; uint8_t v___x_2908_; 
v_key_2906_ = lean_ctor_get(v___x_2905_, 0);
v_val_2907_ = lean_ctor_get(v___x_2905_, 1);
v___x_2908_ = l_Lean_instBEqMVarId_beq(v_x_2899_, v_key_2906_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_box(0);
return v___x_2909_;
}
else
{
lean_object* v___x_2910_; 
lean_inc(v_val_2907_);
v___x_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_val_2907_);
return v___x_2910_;
}
}
case 1:
{
lean_object* v_node_2911_; size_t v___x_2912_; size_t v___x_2913_; 
v_node_2911_ = lean_ctor_get(v___x_2905_, 0);
v___x_2912_ = ((size_t)5ULL);
v___x_2913_ = lean_usize_shift_right(v_x_2898_, v___x_2912_);
v_x_2897_ = v_node_2911_;
v_x_2898_ = v___x_2913_;
goto _start;
}
default: 
{
lean_object* v___x_2915_; 
v___x_2915_ = lean_box(0);
return v___x_2915_;
}
}
}
else
{
lean_object* v_ks_2916_; lean_object* v_vs_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v_ks_2916_ = lean_ctor_get(v_x_2897_, 0);
v_vs_2917_ = lean_ctor_get(v_x_2897_, 1);
v___x_2918_ = lean_unsigned_to_nat(0u);
v___x_2919_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(v_ks_2916_, v_vs_2917_, v___x_2918_, v_x_2899_);
return v___x_2919_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg___boxed(lean_object* v_x_2920_, lean_object* v_x_2921_, lean_object* v_x_2922_){
_start:
{
size_t v_x_11629__boxed_2923_; lean_object* v_res_2924_; 
v_x_11629__boxed_2923_ = lean_unbox_usize(v_x_2921_);
lean_dec(v_x_2921_);
v_res_2924_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(v_x_2920_, v_x_11629__boxed_2923_, v_x_2922_);
lean_dec(v_x_2922_);
lean_dec_ref(v_x_2920_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(lean_object* v_x_2925_, lean_object* v_x_2926_){
_start:
{
uint64_t v___x_2927_; size_t v___x_2928_; lean_object* v___x_2929_; 
v___x_2927_ = l_Lean_instHashableMVarId_hash(v_x_2926_);
v___x_2928_ = lean_uint64_to_usize(v___x_2927_);
v___x_2929_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(v_x_2925_, v___x_2928_, v_x_2926_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg___boxed(lean_object* v_x_2930_, lean_object* v_x_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_x_2930_, v_x_2931_);
lean_dec(v_x_2931_);
lean_dec_ref(v_x_2930_);
return v_res_2932_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4(void){
_start:
{
uint8_t v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2942_ = 1;
v___x_2943_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__5_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_2944_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
lean_ctor_set_uint8(v___x_2944_, sizeof(void*)*1, v___x_2942_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(lean_object* v_c_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_mctx_2962_; lean_object* v_env_2963_; lean_object* v_opts_2964_; lean_object* v_namingCtx_2965_; lean_object* v_goal_2966_; lean_object* v_decls_2967_; lean_object* v___x_2968_; 
v_mctx_2962_ = lean_ctor_get(v_c_2958_, 3);
lean_inc_ref(v_mctx_2962_);
v_env_2963_ = lean_ctor_get(v_c_2958_, 2);
lean_inc_ref(v_env_2963_);
v_opts_2964_ = lean_ctor_get(v_c_2958_, 4);
lean_inc_ref(v_opts_2964_);
v_namingCtx_2965_ = lean_ctor_get(v_c_2958_, 5);
lean_inc_ref(v_namingCtx_2965_);
v_goal_2966_ = lean_ctor_get(v_c_2958_, 6);
lean_inc(v_goal_2966_);
lean_dec_ref(v_c_2958_);
v_decls_2967_ = lean_ctor_get(v_mctx_2962_, 5);
v___x_2968_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_decls_2967_, v_goal_2966_);
if (lean_obj_tag(v___x_2968_) == 1)
{
lean_object* v_val_2969_; lean_object* v_lctx_2970_; lean_object* v___f_2971_; lean_object* v___f_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___f_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; lean_object* v___x_2980_; lean_object* v_term_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___f_2984_; lean_object* v___x_2985_; 
v_val_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_val_2969_);
lean_dec_ref_known(v___x_2968_, 1);
v_lctx_2970_ = lean_ctor_get(v_val_2969_, 1);
lean_inc_ref(v_lctx_2970_);
lean_dec(v_val_2969_);
v___f_2971_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__0));
v___f_2972_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__1));
v___x_2973_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__3));
v___x_2974_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__4);
v___x_2975_ = lean_box(0);
lean_inc(v_goal_2966_);
v___x_2976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2976_, 0, v_goal_2966_);
lean_ctor_set(v___x_2976_, 1, v___x_2975_);
v___f_2977_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___boxed), 11, 4);
lean_closure_set(v___f_2977_, 0, v___x_2976_);
lean_closure_set(v___f_2977_, 1, v___f_2971_);
lean_closure_set(v___f_2977_, 2, v___x_2974_);
lean_closure_set(v___f_2977_, 3, v___x_2973_);
v___x_2978_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__2___boxed), 10, 3);
lean_closure_set(v___x_2978_, 0, lean_box(0));
lean_closure_set(v___x_2978_, 1, v_goal_2966_);
lean_closure_set(v___x_2978_, 2, v___f_2977_);
v___x_2979_ = 1;
v___x_2980_ = lean_box(v___x_2979_);
v_term_2981_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__4___boxed), 9, 2);
lean_closure_set(v_term_2981_, 0, v___x_2978_);
lean_closure_set(v_term_2981_, 1, v___x_2980_);
v___x_2982_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__6));
v___x_2983_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__7));
v___f_2984_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__5___boxed), 9, 4);
lean_closure_set(v___f_2984_, 0, v___f_2972_);
lean_closure_set(v___f_2984_, 1, v_term_2981_);
lean_closure_set(v___f_2984_, 2, v___x_2982_);
lean_closure_set(v___f_2984_, 3, v___x_2983_);
v___x_2985_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_2963_, v_mctx_2962_, v_lctx_2970_, v_opts_2964_, v_namingCtx_2965_, v___f_2984_, v_a_2959_, v_a_2960_);
return v___x_2985_;
}
else
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
lean_dec(v___x_2968_);
lean_dec(v_goal_2966_);
lean_dec_ref(v_namingCtx_2965_);
lean_dec_ref(v_opts_2964_);
lean_dec_ref(v_env_2963_);
lean_dec_ref(v_mctx_2962_);
v___x_2986_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__0___closed__0));
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
return v___x_2987_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___boxed(lean_object* v_c_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(v_c_2988_, v_a_2989_, v_a_2990_);
lean_dec(v_a_2990_);
lean_dec_ref(v_a_2989_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0(lean_object* v_00_u03b2_2993_, lean_object* v_x_2994_, lean_object* v_x_2995_){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_x_2994_, v_x_2995_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___boxed(lean_object* v_00_u03b2_2997_, lean_object* v_x_2998_, lean_object* v_x_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0(v_00_u03b2_2997_, v_x_2998_, v_x_2999_);
lean_dec(v_x_2999_);
lean_dec_ref(v_x_2998_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1(lean_object* v_cls_3001_, lean_object* v_msg_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v___x_3012_; 
v___x_3012_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___redArg(v_cls_3001_, v_msg_3002_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1___boxed(lean_object* v_cls_3013_, lean_object* v_msg_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v_res_3024_; 
v_res_3024_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__1(v_cls_3013_, v_msg_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
lean_dec(v___y_3018_);
lean_dec_ref(v___y_3017_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0(lean_object* v_00_u03b2_3025_, lean_object* v_x_3026_, size_t v_x_3027_, lean_object* v_x_3028_){
_start:
{
lean_object* v___x_3029_; 
v___x_3029_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___redArg(v_x_3026_, v_x_3027_, v_x_3028_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3030_, lean_object* v_x_3031_, lean_object* v_x_3032_, lean_object* v_x_3033_){
_start:
{
size_t v_x_11888__boxed_3034_; lean_object* v_res_3035_; 
v_x_11888__boxed_3034_ = lean_unbox_usize(v_x_3032_);
lean_dec(v_x_3032_);
v_res_3035_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0(v_00_u03b2_3030_, v_x_3031_, v_x_11888__boxed_3034_, v_x_3033_);
lean_dec(v_x_3033_);
lean_dec_ref(v_x_3031_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3036_, lean_object* v_keys_3037_, lean_object* v_vals_3038_, lean_object* v_heq_3039_, lean_object* v_i_3040_, lean_object* v_k_3041_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___redArg(v_keys_3037_, v_vals_3038_, v_i_3040_, v_k_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3043_, lean_object* v_keys_3044_, lean_object* v_vals_3045_, lean_object* v_heq_3046_, lean_object* v_i_3047_, lean_object* v_k_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0_spec__0_spec__2(v_00_u03b2_3043_, v_keys_3044_, v_vals_3045_, v_heq_3046_, v_i_3047_, v_k_3048_);
lean_dec(v_k_3048_);
lean_dec_ref(v_vals_3045_);
lean_dec_ref(v_keys_3044_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0(uint8_t v___x_3052_, lean_object* v___x_3053_, lean_object* v_ref_3054_, lean_object* v_a_3055_, lean_object* v___x_3056_, lean_object* v___x_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
if (v___x_3052_ == 0)
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; uint8_t v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3053_);
v___x_3062_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__0));
v___x_3063_ = lean_box(0);
v___x_3064_ = 4;
v___x_3065_ = l_Lean_MessageData_nil;
v___x_3066_ = l_Lean_Meta_Tactic_TryThis_addSuggestions___redArg(v_ref_3054_, v_a_3055_, v___x_3061_, v___x_3062_, v___x_3063_, v___x_3064_, v___x_3065_, v___y_3058_, v___y_3059_);
return v___x_3066_;
}
else
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3067_ = lean_array_get_borrowed(v___x_3056_, v_a_3055_, v___x_3057_);
v___x_3068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3053_);
v___x_3069_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___closed__1));
v___x_3070_ = lean_box(0);
v___x_3071_ = 4;
v___x_3072_ = l_Lean_MessageData_nil;
lean_inc(v___x_3067_);
v___x_3073_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_ref_3054_, v___x_3067_, v___x_3068_, v___x_3069_, v___x_3070_, v___x_3071_, v___x_3072_, v___y_3058_, v___y_3059_);
return v___x_3073_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___boxed(lean_object* v___x_3074_, lean_object* v___x_3075_, lean_object* v_ref_3076_, lean_object* v_a_3077_, lean_object* v___x_3078_, lean_object* v___x_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
uint8_t v___x_3512__boxed_3083_; lean_object* v_res_3084_; 
v___x_3512__boxed_3083_ = lean_unbox(v___x_3074_);
v_res_3084_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0(v___x_3512__boxed_3083_, v___x_3075_, v_ref_3076_, v_a_3077_, v___x_3078_, v___x_3079_, v___y_3080_, v___y_3081_);
lean_dec(v___y_3081_);
lean_dec_ref(v___y_3080_);
lean_dec(v___x_3079_);
lean_dec_ref(v___x_3078_);
lean_dec_ref(v_a_3077_);
return v_res_3084_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0(uint8_t v_suppressElabErrors_3085_, uint8_t v___y_3086_, lean_object* v_x_3087_){
_start:
{
if (lean_obj_tag(v_x_3087_) == 1)
{
lean_object* v_pre_3088_; 
v_pre_3088_ = lean_ctor_get(v_x_3087_, 0);
if (lean_obj_tag(v_pre_3088_) == 0)
{
lean_object* v_str_3089_; lean_object* v___x_3090_; uint8_t v___x_3091_; 
v_str_3089_ = lean_ctor_get(v_x_3087_, 1);
v___x_3090_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__1));
v___x_3091_ = lean_string_dec_eq(v_str_3089_, v___x_3090_);
if (v___x_3091_ == 0)
{
return v___x_3091_;
}
else
{
return v_suppressElabErrors_3085_;
}
}
else
{
return v___y_3086_;
}
}
else
{
return v___y_3086_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0___boxed(lean_object* v_suppressElabErrors_3092_, lean_object* v___y_3093_, lean_object* v_x_3094_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3095_; uint8_t v___y_3565__boxed_3096_; uint8_t v_res_3097_; lean_object* v_r_3098_; 
v_suppressElabErrors_boxed_3095_ = lean_unbox(v_suppressElabErrors_3092_);
v___y_3565__boxed_3096_ = lean_unbox(v___y_3093_);
v_res_3097_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0(v_suppressElabErrors_boxed_3095_, v___y_3565__boxed_3096_, v_x_3094_);
lean_dec(v_x_3094_);
v_r_3098_ = lean_box(v_res_3097_);
return v_r_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(lean_object* v_ref_3099_, lean_object* v_msgData_3100_, uint8_t v_severity_3101_, uint8_t v_isSilent_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; uint8_t v___y_3111_; uint8_t v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; uint8_t v___y_3172_; uint8_t v___y_3173_; uint8_t v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; uint8_t v___y_3200_; uint8_t v___y_3201_; lean_object* v___y_3202_; uint8_t v___y_3203_; lean_object* v___y_3204_; uint8_t v___y_3208_; uint8_t v___y_3209_; uint8_t v___y_3210_; uint8_t v___x_3225_; uint8_t v___y_3227_; uint8_t v___y_3228_; uint8_t v___y_3229_; uint8_t v___y_3231_; uint8_t v___x_3243_; 
v___x_3225_ = 2;
v___x_3243_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3101_, v___x_3225_);
if (v___x_3243_ == 0)
{
v___y_3231_ = v___x_3243_;
goto v___jp_3230_;
}
else
{
uint8_t v___x_3244_; 
lean_inc_ref(v_msgData_3100_);
v___x_3244_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3100_);
v___y_3231_ = v___x_3244_;
goto v___jp_3230_;
}
v___jp_3106_:
{
lean_object* v___x_3115_; 
v___x_3115_ = l_Lean_Elab_Command_getScope___redArg(v___y_3114_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v_currNamespace_3117_; lean_object* v___x_3118_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_a_3116_);
lean_dec_ref_known(v___x_3115_, 1);
v_currNamespace_3117_ = lean_ctor_get(v_a_3116_, 2);
lean_inc(v_currNamespace_3117_);
lean_dec(v_a_3116_);
v___x_3118_ = l_Lean_Elab_Command_getScope___redArg(v___y_3114_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3154_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3121_ = v___x_3118_;
v_isShared_3122_ = v_isSharedCheck_3154_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3118_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3154_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v_openDecls_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v_env_3128_; lean_object* v_messages_3129_; lean_object* v_scopes_3130_; lean_object* v_usedQuotCtxts_3131_; lean_object* v_nextMacroScope_3132_; lean_object* v_maxRecDepth_3133_; lean_object* v_ngen_3134_; lean_object* v_auxDeclNGen_3135_; lean_object* v_infoState_3136_; lean_object* v_traceState_3137_; lean_object* v_snapshotTasks_3138_; lean_object* v_prevLinterStates_3139_; lean_object* v_codeQualityEntryTasks_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3153_; 
v_openDecls_3123_ = lean_ctor_get(v_a_3119_, 3);
lean_inc(v_openDecls_3123_);
lean_dec(v_a_3119_);
v___x_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3124_, 0, v_currNamespace_3117_);
lean_ctor_set(v___x_3124_, 1, v_openDecls_3123_);
v___x_3125_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
lean_ctor_set(v___x_3125_, 1, v___y_3107_);
lean_inc_ref(v___y_3108_);
lean_inc_ref(v___y_3110_);
v___x_3126_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3126_, 0, v___y_3110_);
lean_ctor_set(v___x_3126_, 1, v___y_3109_);
lean_ctor_set(v___x_3126_, 2, v___y_3113_);
lean_ctor_set(v___x_3126_, 3, v___y_3108_);
lean_ctor_set(v___x_3126_, 4, v___x_3125_);
lean_ctor_set_uint8(v___x_3126_, sizeof(void*)*5, v___y_3111_);
lean_ctor_set_uint8(v___x_3126_, sizeof(void*)*5 + 1, v___y_3112_);
lean_ctor_set_uint8(v___x_3126_, sizeof(void*)*5 + 2, v_isSilent_3102_);
v___x_3127_ = lean_st_ref_take(v___y_3114_);
v_env_3128_ = lean_ctor_get(v___x_3127_, 0);
v_messages_3129_ = lean_ctor_get(v___x_3127_, 1);
v_scopes_3130_ = lean_ctor_get(v___x_3127_, 2);
v_usedQuotCtxts_3131_ = lean_ctor_get(v___x_3127_, 3);
v_nextMacroScope_3132_ = lean_ctor_get(v___x_3127_, 4);
v_maxRecDepth_3133_ = lean_ctor_get(v___x_3127_, 5);
v_ngen_3134_ = lean_ctor_get(v___x_3127_, 6);
v_auxDeclNGen_3135_ = lean_ctor_get(v___x_3127_, 7);
v_infoState_3136_ = lean_ctor_get(v___x_3127_, 8);
v_traceState_3137_ = lean_ctor_get(v___x_3127_, 9);
v_snapshotTasks_3138_ = lean_ctor_get(v___x_3127_, 10);
v_prevLinterStates_3139_ = lean_ctor_get(v___x_3127_, 11);
v_codeQualityEntryTasks_3140_ = lean_ctor_get(v___x_3127_, 12);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3142_ = v___x_3127_;
v_isShared_3143_ = v_isSharedCheck_3153_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3140_);
lean_inc(v_prevLinterStates_3139_);
lean_inc(v_snapshotTasks_3138_);
lean_inc(v_traceState_3137_);
lean_inc(v_infoState_3136_);
lean_inc(v_auxDeclNGen_3135_);
lean_inc(v_ngen_3134_);
lean_inc(v_maxRecDepth_3133_);
lean_inc(v_nextMacroScope_3132_);
lean_inc(v_usedQuotCtxts_3131_);
lean_inc(v_scopes_3130_);
lean_inc(v_messages_3129_);
lean_inc(v_env_3128_);
lean_dec(v___x_3127_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3153_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3147_; 
v___x_3144_ = lean_box(0);
v___x_3145_ = l_Lean_MessageLog_add(v___x_3126_, v_messages_3129_);
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 1, v___x_3145_);
v___x_3147_ = v___x_3142_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_env_3128_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v___x_3145_);
lean_ctor_set(v_reuseFailAlloc_3152_, 2, v_scopes_3130_);
lean_ctor_set(v_reuseFailAlloc_3152_, 3, v_usedQuotCtxts_3131_);
lean_ctor_set(v_reuseFailAlloc_3152_, 4, v_nextMacroScope_3132_);
lean_ctor_set(v_reuseFailAlloc_3152_, 5, v_maxRecDepth_3133_);
lean_ctor_set(v_reuseFailAlloc_3152_, 6, v_ngen_3134_);
lean_ctor_set(v_reuseFailAlloc_3152_, 7, v_auxDeclNGen_3135_);
lean_ctor_set(v_reuseFailAlloc_3152_, 8, v_infoState_3136_);
lean_ctor_set(v_reuseFailAlloc_3152_, 9, v_traceState_3137_);
lean_ctor_set(v_reuseFailAlloc_3152_, 10, v_snapshotTasks_3138_);
lean_ctor_set(v_reuseFailAlloc_3152_, 11, v_prevLinterStates_3139_);
lean_ctor_set(v_reuseFailAlloc_3152_, 12, v_codeQualityEntryTasks_3140_);
v___x_3147_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3148_; lean_object* v___x_3150_; 
v___x_3148_ = lean_st_ref_put(v___y_3114_, v___x_3147_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3144_);
v___x_3150_ = v___x_3121_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3144_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
lean_dec(v_currNamespace_3117_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3109_);
lean_dec_ref(v___y_3107_);
v_a_3155_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___x_3118_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3118_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3109_);
lean_dec_ref(v___y_3107_);
v_a_3163_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3115_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3115_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
v___jp_3171_:
{
lean_object* v_fileName_3177_; lean_object* v_fileMap_3178_; uint8_t v_suppressElabErrors_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___f_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3198_; 
v_fileName_3177_ = lean_ctor_get(v___y_3103_, 0);
v_fileMap_3178_ = lean_ctor_get(v___y_3103_, 1);
v_suppressElabErrors_3179_ = lean_ctor_get_uint8(v___y_3103_, sizeof(void*)*10);
v___x_3180_ = lean_box(v_suppressElabErrors_3179_);
v___x_3181_ = lean_box(v___y_3172_);
v___f_3182_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3182_, 0, v___x_3180_);
lean_closure_set(v___f_3182_, 1, v___x_3181_);
v___x_3183_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3100_);
v___x_3184_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3_spec__5___redArg(v___x_3183_, v___y_3104_);
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3187_ = v___x_3184_;
v_isShared_3188_ = v_isSharedCheck_3198_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3184_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3198_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
lean_inc_ref_n(v_fileMap_3178_, 2);
v___x_3189_ = l_Lean_FileMap_toPosition(v_fileMap_3178_, v___y_3175_);
lean_dec(v___y_3175_);
v___x_3190_ = l_Lean_FileMap_toPosition(v_fileMap_3178_, v___y_3176_);
lean_dec(v___y_3176_);
v___x_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
v___x_3192_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx___closed__0));
if (v_suppressElabErrors_3179_ == 0)
{
lean_del_object(v___x_3187_);
lean_dec_ref(v___f_3182_);
v___y_3107_ = v_a_3185_;
v___y_3108_ = v___x_3192_;
v___y_3109_ = v___x_3189_;
v___y_3110_ = v_fileName_3177_;
v___y_3111_ = v___y_3173_;
v___y_3112_ = v___y_3174_;
v___y_3113_ = v___x_3191_;
v___y_3114_ = v___y_3104_;
goto v___jp_3106_;
}
else
{
uint8_t v___x_3193_; 
lean_inc(v_a_3185_);
v___x_3193_ = l_Lean_MessageData_hasTag(v___f_3182_, v_a_3185_);
if (v___x_3193_ == 0)
{
lean_object* v___x_3194_; lean_object* v___x_3196_; 
lean_dec_ref_known(v___x_3191_, 1);
lean_dec_ref(v___x_3189_);
lean_dec(v_a_3185_);
v___x_3194_ = lean_box(0);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 0, v___x_3194_);
v___x_3196_ = v___x_3187_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v___x_3194_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
else
{
lean_del_object(v___x_3187_);
v___y_3107_ = v_a_3185_;
v___y_3108_ = v___x_3192_;
v___y_3109_ = v___x_3189_;
v___y_3110_ = v_fileName_3177_;
v___y_3111_ = v___y_3173_;
v___y_3112_ = v___y_3174_;
v___y_3113_ = v___x_3191_;
v___y_3114_ = v___y_3104_;
goto v___jp_3106_;
}
}
}
}
v___jp_3199_:
{
lean_object* v___x_3205_; 
v___x_3205_ = l_Lean_Syntax_getTailPos_x3f(v___y_3202_, v___y_3201_);
lean_dec(v___y_3202_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_inc(v___y_3204_);
v___y_3172_ = v___y_3200_;
v___y_3173_ = v___y_3201_;
v___y_3174_ = v___y_3203_;
v___y_3175_ = v___y_3204_;
v___y_3176_ = v___y_3204_;
goto v___jp_3171_;
}
else
{
lean_object* v_val_3206_; 
v_val_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_val_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v___y_3172_ = v___y_3200_;
v___y_3173_ = v___y_3201_;
v___y_3174_ = v___y_3203_;
v___y_3175_ = v___y_3204_;
v___y_3176_ = v_val_3206_;
goto v___jp_3171_;
}
}
v___jp_3207_:
{
lean_object* v___x_3211_; 
v___x_3211_ = l_Lean_Elab_Command_getRef___redArg(v___y_3103_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v_ref_3213_; lean_object* v___x_3214_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
lean_inc(v_a_3212_);
lean_dec_ref_known(v___x_3211_, 1);
v_ref_3213_ = l_Lean_replaceRef(v_ref_3099_, v_a_3212_);
lean_dec(v_a_3212_);
v___x_3214_ = l_Lean_Syntax_getPos_x3f(v_ref_3213_, v___y_3209_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v___x_3215_; 
v___x_3215_ = lean_unsigned_to_nat(0u);
v___y_3200_ = v___y_3208_;
v___y_3201_ = v___y_3209_;
v___y_3202_ = v_ref_3213_;
v___y_3203_ = v___y_3210_;
v___y_3204_ = v___x_3215_;
goto v___jp_3199_;
}
else
{
lean_object* v_val_3216_; 
v_val_3216_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_val_3216_);
lean_dec_ref_known(v___x_3214_, 1);
v___y_3200_ = v___y_3208_;
v___y_3201_ = v___y_3209_;
v___y_3202_ = v_ref_3213_;
v___y_3203_ = v___y_3210_;
v___y_3204_ = v_val_3216_;
goto v___jp_3199_;
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3224_; 
lean_dec_ref(v_msgData_3100_);
v_a_3217_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3219_ = v___x_3211_;
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3211_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3222_; 
if (v_isShared_3220_ == 0)
{
v___x_3222_ = v___x_3219_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_a_3217_);
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
v___jp_3226_:
{
if (v___y_3229_ == 0)
{
v___y_3208_ = v___y_3227_;
v___y_3209_ = v___y_3228_;
v___y_3210_ = v_severity_3101_;
goto v___jp_3207_;
}
else
{
v___y_3208_ = v___y_3227_;
v___y_3209_ = v___y_3228_;
v___y_3210_ = v___x_3225_;
goto v___jp_3207_;
}
}
v___jp_3230_:
{
if (v___y_3231_ == 0)
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v_scopes_3234_; lean_object* v___x_3235_; lean_object* v_opts_3236_; uint8_t v___x_3237_; uint8_t v___x_3238_; 
v___x_3232_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3233_ = lean_st_ref_get(v___y_3104_);
v_scopes_3234_ = lean_ctor_get(v___x_3233_, 2);
lean_inc(v_scopes_3234_);
lean_dec(v___x_3233_);
v___x_3235_ = l_List_head_x21___redArg(v___x_3232_, v_scopes_3234_);
lean_dec(v_scopes_3234_);
v_opts_3236_ = lean_ctor_get(v___x_3235_, 1);
lean_inc_ref(v_opts_3236_);
lean_dec(v___x_3235_);
v___x_3237_ = 1;
v___x_3238_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3101_, v___x_3237_);
if (v___x_3238_ == 0)
{
lean_dec_ref(v_opts_3236_);
v___y_3227_ = v___y_3231_;
v___y_3228_ = v___y_3231_;
v___y_3229_ = v___x_3238_;
goto v___jp_3226_;
}
else
{
lean_object* v___x_3239_; uint8_t v___x_3240_; 
v___x_3239_ = l_Lean_warningAsError;
v___x_3240_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_3236_, v___x_3239_);
lean_dec_ref(v_opts_3236_);
v___y_3227_ = v___y_3231_;
v___y_3228_ = v___y_3231_;
v___y_3229_ = v___x_3240_;
goto v___jp_3226_;
}
}
else
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
lean_dec_ref(v_msgData_3100_);
v___x_3241_ = lean_box(0);
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0___boxed(lean_object* v_ref_3245_, lean_object* v_msgData_3246_, lean_object* v_severity_3247_, lean_object* v_isSilent_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_){
_start:
{
uint8_t v_severity_boxed_3252_; uint8_t v_isSilent_boxed_3253_; lean_object* v_res_3254_; 
v_severity_boxed_3252_ = lean_unbox(v_severity_3247_);
v_isSilent_boxed_3253_ = lean_unbox(v_isSilent_3248_);
v_res_3254_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(v_ref_3245_, v_msgData_3246_, v_severity_boxed_3252_, v_isSilent_boxed_3253_, v___y_3249_, v___y_3250_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
lean_dec(v_ref_3245_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(lean_object* v_ref_3255_, lean_object* v_msgData_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_){
_start:
{
uint8_t v___x_3260_; uint8_t v___x_3261_; lean_object* v___x_3262_; 
v___x_3260_ = 0;
v___x_3261_ = 0;
v___x_3262_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0_spec__0(v_ref_3255_, v_msgData_3256_, v___x_3260_, v___x_3261_, v___y_3257_, v___y_3258_);
return v___x_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0___boxed(lean_object* v_ref_3263_, lean_object* v_msgData_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(v_ref_3263_, v_msgData_3264_, v___y_3265_, v___y_3266_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v_ref_3263_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0(lean_object* v___x_3270_, lean_object* v_x_3271_){
_start:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3272_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___closed__0));
v___x_3273_ = lean_string_append(v___x_3272_, v___x_3270_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___boxed(lean_object* v___x_3274_, lean_object* v_x_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0(v___x_3274_, v_x_3275_);
lean_dec_ref(v_x_3275_);
lean_dec_ref(v___x_3274_);
return v_res_3276_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__0));
v___x_3279_ = l_Lean_stringToMessageData(v___x_3278_);
return v___x_3279_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__2));
v___x_3282_ = l_Lean_stringToMessageData(v___x_3281_);
return v___x_3282_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__4));
v___x_3285_ = l_Lean_stringToMessageData(v___x_3284_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(lean_object* v___x_3286_, uint8_t v___x_3287_, lean_object* v___x_3288_, lean_object* v_insertPos_3289_, lean_object* v_cmdLine_3290_, lean_object* v_ref_3291_, size_t v_sz_3292_, size_t v_i_3293_, lean_object* v_bs_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
uint8_t v___x_3298_; 
v___x_3298_ = lean_usize_dec_lt(v_i_3293_, v_sz_3292_);
if (v___x_3298_ == 0)
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_dec_ref(v___x_3288_);
lean_dec_ref(v___x_3286_);
v___x_3299_ = l_unsafeCast___redArg(v_bs_3294_);
lean_dec_ref(v_bs_3294_);
v___x_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
return v___x_3300_;
}
else
{
lean_object* v_v_3301_; lean_object* v___x_3302_; lean_object* v_bs_x27_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v_v_3301_ = lean_array_uget(v_bs_3294_, v_i_3293_);
v___x_3302_ = lean_unsigned_to_nat(0u);
v_bs_x27_3303_ = lean_array_uset(v_bs_3294_, v_i_3293_, v___x_3302_);
v___x_3304_ = l_unsafeCast___redArg(v_v_3301_);
lean_dec(v_v_3301_);
lean_inc(v___x_3304_);
v___x_3305_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppTactic___boxed), 4, 1);
lean_closure_set(v___x_3305_, 0, v___x_3304_);
v___x_3306_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3305_, v___y_3295_, v___y_3296_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___f_3310_; lean_object* v___x_3311_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = l_Std_Format_defWidth;
v___x_3309_ = l_Std_Format_pretty(v_a_3307_, v___x_3308_, v___x_3302_, v___x_3302_);
lean_inc_ref(v___x_3309_);
v___f_3310_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3310_, 0, v___x_3309_);
lean_inc_ref(v___x_3286_);
v___x_3311_ = lean_string_append(v___x_3286_, v___x_3309_);
lean_dec_ref(v___x_3309_);
if (v___x_3287_ == 0)
{
goto v___jp_3312_;
}
else
{
lean_object* v___x_3324_; lean_object* v_line_3325_; lean_object* v_column_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3361_; 
lean_inc_ref(v___x_3288_);
v___x_3324_ = l_Lean_FileMap_toPosition(v___x_3288_, v_insertPos_3289_);
v_line_3325_ = lean_ctor_get(v___x_3324_, 0);
v_column_3326_ = lean_ctor_get(v___x_3324_, 1);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3328_ = v___x_3324_;
v_isShared_3329_ = v_isSharedCheck_3361_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_column_3326_);
lean_inc(v_line_3325_);
lean_dec(v___x_3324_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3361_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3338_; 
v___x_3330_ = lean_nat_sub(v_line_3325_, v_cmdLine_3290_);
lean_dec(v_line_3325_);
v___x_3331_ = lean_unsigned_to_nat(1u);
v___x_3332_ = lean_nat_add(v___x_3330_, v___x_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__1);
lean_inc_ref(v___x_3311_);
v___x_3334_ = l_String_quote(v___x_3311_);
v___x_3335_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
v___x_3336_ = l_Lean_MessageData_ofFormat(v___x_3335_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set_tag(v___x_3328_, 7);
lean_ctor_set(v___x_3328_, 1, v___x_3336_);
lean_ctor_set(v___x_3328_, 0, v___x_3333_);
v___x_3338_ = v___x_3328_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3360_, 1, v___x_3336_);
v___x_3338_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3339_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__3);
v___x_3340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3338_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
v___x_3341_ = l_Nat_reprFast(v___x_3332_);
v___x_3342_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
v___x_3343_ = l_Lean_MessageData_ofFormat(v___x_3342_);
v___x_3344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3340_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___x_3345_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___closed__5);
v___x_3346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = l_Nat_reprFast(v_column_3326_);
v___x_3348_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3347_);
v___x_3349_ = l_Lean_MessageData_ofFormat(v___x_3348_);
v___x_3350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3346_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__0(v_ref_3291_, v___x_3350_, v___y_3295_, v___y_3296_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_dec_ref_known(v___x_3351_, 1);
goto v___jp_3312_;
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec_ref(v___x_3311_);
lean_dec_ref(v___f_3310_);
lean_dec(v___x_3304_);
lean_dec_ref(v_bs_x27_3303_);
lean_dec_ref(v___x_3288_);
lean_dec_ref(v___x_3286_);
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3351_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3351_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
}
}
v___jp_3312_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; size_t v___x_3319_; size_t v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3311_);
v___x_3314_ = lean_box(0);
v___x_3315_ = l_Lean_MessageData_ofSyntax(v___x_3304_);
v___x_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3315_);
v___x_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3317_, 0, v___f_3310_);
v___x_3318_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3313_);
lean_ctor_set(v___x_3318_, 1, v___x_3314_);
lean_ctor_set(v___x_3318_, 2, v___x_3314_);
lean_ctor_set(v___x_3318_, 3, v___x_3314_);
lean_ctor_set(v___x_3318_, 4, v___x_3316_);
lean_ctor_set(v___x_3318_, 5, v___x_3317_);
v___x_3319_ = ((size_t)1ULL);
v___x_3320_ = lean_usize_add(v_i_3293_, v___x_3319_);
v___x_3321_ = l_unsafeCast___redArg(v___x_3318_);
lean_dec_ref_known(v___x_3318_, 6);
v___x_3322_ = lean_array_uset(v_bs_x27_3303_, v_i_3293_, v___x_3321_);
v_i_3293_ = v___x_3320_;
v_bs_3294_ = v___x_3322_;
goto _start;
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec(v___x_3304_);
lean_dec_ref(v_bs_x27_3303_);
lean_dec_ref(v___x_3288_);
lean_dec_ref(v___x_3286_);
v_a_3362_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3306_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3306_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___boxed(lean_object* v___x_3370_, lean_object* v___x_3371_, lean_object* v___x_3372_, lean_object* v_insertPos_3373_, lean_object* v_cmdLine_3374_, lean_object* v_ref_3375_, lean_object* v_sz_3376_, lean_object* v_i_3377_, lean_object* v_bs_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
uint8_t v___x_3877__boxed_3382_; size_t v_sz_boxed_3383_; size_t v_i_boxed_3384_; lean_object* v_res_3385_; 
v___x_3877__boxed_3382_ = lean_unbox(v___x_3371_);
v_sz_boxed_3383_ = lean_unbox_usize(v_sz_3376_);
lean_dec(v_sz_3376_);
v_i_boxed_3384_ = lean_unbox_usize(v_i_3377_);
lean_dec(v_i_3377_);
v_res_3385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1(v___x_3370_, v___x_3877__boxed_3382_, v___x_3372_, v_insertPos_3373_, v_cmdLine_3374_, v_ref_3375_, v_sz_boxed_3383_, v_i_boxed_3384_, v_bs_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v_ref_3375_);
lean_dec(v_cmdLine_3374_);
lean_dec(v_insertPos_3373_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(lean_object* v_tacticSeq_3388_, lean_object* v_ref_3389_, lean_object* v_insertPos_3390_, lean_object* v_suggs_3391_, lean_object* v_cmdLine_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v___x_3396_ = lean_array_get_size(v_suggs_3391_);
v___x_3397_ = lean_unsigned_to_nat(0u);
v___x_3398_ = lean_nat_dec_eq(v___x_3396_, v___x_3397_);
if (v___x_3398_ == 0)
{
lean_object* v_fileMap_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v_scopes_3405_; lean_object* v___x_3406_; lean_object* v_opts_3407_; lean_object* v___x_3408_; uint8_t v___x_3409_; size_t v_sz_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3442__overap_3416_; lean_object* v___x_3417_; 
v_fileMap_3399_ = lean_ctor_get(v_a_3393_, 1);
v___x_3400_ = l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default;
lean_inc_ref_n(v_fileMap_3399_, 2);
v___x_3401_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep(v_tacticSeq_3388_, v_fileMap_3399_);
lean_inc(v_insertPos_3390_);
v___x_3402_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_mkEmptyRangeStx(v_insertPos_3390_);
v___x_3403_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3404_ = lean_st_ref_get(v_a_3394_);
v_scopes_3405_ = lean_ctor_get(v___x_3404_, 2);
lean_inc(v_scopes_3405_);
lean_dec(v___x_3404_);
v___x_3406_ = l_List_head_x21___redArg(v___x_3403_, v_scopes_3405_);
lean_dec(v_scopes_3405_);
v_opts_3407_ = lean_ctor_get(v___x_3406_, 1);
lean_inc_ref(v_opts_3407_);
lean_dec(v___x_3406_);
v___x_3408_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits;
v___x_3409_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_3407_, v___x_3408_);
lean_dec_ref(v_opts_3407_);
v_sz_3410_ = lean_array_size(v_suggs_3391_);
v___x_3411_ = l_unsafeCast___redArg(v_suggs_3391_);
v___x_3412_ = lean_box(v___x_3409_);
v___x_3413_ = lean_box_usize(v_sz_3410_);
v___x_3414_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed__const__1));
lean_inc(v_ref_3389_);
v___x_3415_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions_spec__1___boxed), 12, 9);
lean_closure_set(v___x_3415_, 0, v___x_3401_);
lean_closure_set(v___x_3415_, 1, v___x_3412_);
lean_closure_set(v___x_3415_, 2, v_fileMap_3399_);
lean_closure_set(v___x_3415_, 3, v_insertPos_3390_);
lean_closure_set(v___x_3415_, 4, v_cmdLine_3392_);
lean_closure_set(v___x_3415_, 5, v_ref_3389_);
lean_closure_set(v___x_3415_, 6, v___x_3413_);
lean_closure_set(v___x_3415_, 7, v___x_3414_);
lean_closure_set(v___x_3415_, 8, v___x_3411_);
v___x_3442__overap_3416_ = l_unsafeCast___redArg(v___x_3415_);
lean_dec_ref(v___x_3415_);
lean_inc(v_a_3394_);
lean_inc_ref(v_a_3393_);
v___x_3417_ = lean_apply_3(v___x_3442__overap_3416_, v_a_3393_, v_a_3394_, lean_box(0));
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_object* v_a_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; lean_object* v___x_3422_; lean_object* v___y_3423_; lean_object* v___x_3424_; 
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___x_3417_, 1);
v___x_3419_ = lean_array_get_size(v_a_3418_);
v___x_3420_ = lean_unsigned_to_nat(1u);
v___x_3421_ = lean_nat_dec_eq(v___x_3419_, v___x_3420_);
v___x_3422_ = lean_box(v___x_3421_);
v___y_3423_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___lam__0___boxed), 9, 6);
lean_closure_set(v___y_3423_, 0, v___x_3422_);
lean_closure_set(v___y_3423_, 1, v___x_3402_);
lean_closure_set(v___y_3423_, 2, v_ref_3389_);
lean_closure_set(v___y_3423_, 3, v_a_3418_);
lean_closure_set(v___y_3423_, 4, v___x_3400_);
lean_closure_set(v___y_3423_, 5, v___x_3397_);
v___x_3424_ = l_Lean_Elab_Command_liftCoreM___redArg(v___y_3423_, v_a_3393_, v_a_3394_);
return v___x_3424_;
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_dec(v___x_3402_);
lean_dec(v_ref_3389_);
v_a_3425_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3417_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3417_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
else
{
lean_object* v___x_3433_; lean_object* v___x_3434_; 
lean_dec(v_cmdLine_3392_);
lean_dec(v_insertPos_3390_);
lean_dec(v_ref_3389_);
v___x_3433_ = lean_box(0);
v___x_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3433_);
return v___x_3434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions___boxed(lean_object* v_tacticSeq_3435_, lean_object* v_ref_3436_, lean_object* v_insertPos_3437_, lean_object* v_suggs_3438_, lean_object* v_cmdLine_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_){
_start:
{
lean_object* v_res_3443_; 
v_res_3443_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(v_tacticSeq_3435_, v_ref_3436_, v_insertPos_3437_, v_suggs_3438_, v_cmdLine_3439_, v_a_3440_, v_a_3441_);
lean_dec(v_a_3441_);
lean_dec_ref(v_a_3440_);
lean_dec_ref(v_suggs_3438_);
lean_dec(v_tacticSeq_3435_);
return v_res_3443_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0(lean_object* v_x_3444_){
_start:
{
uint8_t v___x_3445_; 
v___x_3445_ = 0;
return v___x_3445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0___boxed(lean_object* v_x_3446_){
_start:
{
uint8_t v_res_3447_; lean_object* v_r_3448_; 
v_res_3447_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__0(v_x_3446_);
lean_dec(v_x_3446_);
v_r_3448_ = lean_box(v_res_3447_);
return v_r_3448_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = l_Array_mkArray0___redArg();
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1(lean_object* v___f_3469_, lean_object* v_ref_3470_, lean_object* v_goal_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v_toCold_3480_; lean_object* v_currRecDepth_3481_; lean_object* v_ref_3482_; uint8_t v_diag_3483_; uint8_t v_suppressElabErrors_3484_; uint8_t v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; uint8_t v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v_ref_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v_toCold_3480_ = lean_ctor_get(v___y_3474_, 0);
v_currRecDepth_3481_ = lean_ctor_get(v___y_3474_, 1);
v_ref_3482_ = lean_ctor_get(v___y_3474_, 2);
v_diag_3483_ = lean_ctor_get_uint8(v___y_3474_, sizeof(void*)*3);
v_suppressElabErrors_3484_ = lean_ctor_get_uint8(v___y_3474_, sizeof(void*)*3 + 1);
v___x_3485_ = 0;
v___x_3486_ = l_Lean_SourceInfo_fromRef(v_ref_3482_, v___x_3485_);
v___x_3487_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__1));
v___x_3488_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__2));
lean_inc_n(v___x_3486_, 3);
v___x_3489_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3486_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
v___x_3490_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__4));
v___x_3491_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__6));
v___x_3492_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__7);
v___x_3493_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3486_);
lean_ctor_set(v___x_3493_, 1, v___x_3491_);
lean_ctor_set(v___x_3493_, 2, v___x_3492_);
v___x_3494_ = l_Lean_Syntax_node1(v___x_3486_, v___x_3490_, v___x_3493_);
v___x_3495_ = l_Lean_Syntax_node2(v___x_3486_, v___x_3487_, v___x_3489_, v___x_3494_);
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_box(0);
v___x_3498_ = 1;
v___x_3499_ = lean_box(1);
v___x_3500_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___closed__5));
v___x_3501_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_3501_, 0, v___x_3496_);
lean_ctor_set(v___x_3501_, 1, v___x_3497_);
lean_ctor_set(v___x_3501_, 2, v___x_3496_);
lean_ctor_set(v___x_3501_, 3, v___f_3469_);
lean_ctor_set(v___x_3501_, 4, v___x_3499_);
lean_ctor_set(v___x_3501_, 5, v___x_3499_);
lean_ctor_set(v___x_3501_, 6, v___x_3496_);
lean_ctor_set(v___x_3501_, 7, v___x_3500_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8, v___x_3498_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 1, v___x_3498_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 2, v___x_3498_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 3, v___x_3498_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 4, v___x_3485_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 5, v___x_3485_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 6, v___x_3485_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 7, v___x_3485_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 8, v___x_3498_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 9, v___x_3485_);
lean_ctor_set_uint8(v___x_3501_, sizeof(void*)*8 + 10, v___x_3498_);
v___x_3502_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___closed__8));
v___x_3503_ = lean_box(0);
v_ref_3504_ = l_Lean_replaceRef(v_ref_3470_, v_ref_3482_);
lean_inc(v_currRecDepth_3481_);
lean_inc_ref(v_toCold_3480_);
v___x_3505_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3505_, 0, v_toCold_3480_);
lean_ctor_set(v___x_3505_, 1, v_currRecDepth_3481_);
lean_ctor_set(v___x_3505_, 2, v_ref_3504_);
lean_ctor_set_uint8(v___x_3505_, sizeof(void*)*3, v_diag_3483_);
lean_ctor_set_uint8(v___x_3505_, sizeof(void*)*3 + 1, v_suppressElabErrors_3484_);
v___x_3506_ = l_Lean_Elab_runTactic(v_goal_3471_, v___x_3495_, v___x_3501_, v___x_3502_, v___y_3472_, v___y_3473_, v___x_3505_, v___y_3475_);
lean_dec_ref_known(v___x_3505_, 3);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3513_ == 0)
{
lean_object* v_unused_3514_; 
v_unused_3514_ = lean_ctor_get(v___x_3506_, 0);
lean_dec(v_unused_3514_);
v___x_3508_ = v___x_3506_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_dec(v___x_3506_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 0, v___x_3503_);
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3503_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3540_; 
v_a_3515_ = lean_ctor_get(v___x_3506_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3517_ = v___x_3506_;
v_isShared_3518_ = v_isSharedCheck_3540_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3506_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3540_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
lean_inc(v_a_3515_);
if (v_isShared_3518_ == 0)
{
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
uint8_t v___y_3522_; uint8_t v___y_3534_; uint8_t v___x_3537_; 
v___x_3537_ = l_Lean_Exception_isInterrupt(v_a_3515_);
if (v___x_3537_ == 0)
{
uint8_t v___x_3538_; 
lean_inc(v_a_3515_);
v___x_3538_ = l_Lean_Exception_isRuntime(v_a_3515_);
v___y_3534_ = v___x_3538_;
goto v___jp_3533_;
}
else
{
v___y_3534_ = v___x_3537_;
goto v___jp_3533_;
}
v___jp_3521_:
{
if (v___y_3522_ == 0)
{
lean_object* v_options_3523_; uint8_t v_hasTrace_3524_; 
lean_dec_ref(v___x_3520_);
v_options_3523_ = lean_ctor_get(v_toCold_3480_, 2);
v_hasTrace_3524_ = lean_ctor_get_uint8(v_options_3523_, sizeof(void*)*1);
if (v_hasTrace_3524_ == 0)
{
lean_dec(v_a_3515_);
goto v___jp_3477_;
}
else
{
lean_object* v_inheritedTraceOptions_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; uint8_t v___x_3528_; 
v_inheritedTraceOptions_3525_ = lean_ctor_get(v_toCold_3480_, 11);
v___x_3526_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_3527_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_3528_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3525_, v_options_3523_, v___x_3527_);
if (v___x_3528_ == 0)
{
lean_dec(v_a_3515_);
goto v___jp_3477_;
}
else
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3529_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal___lam__3___closed__1);
v___x_3530_ = l_Lean_Exception_toMessageData(v_a_3515_);
v___x_3531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3529_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__3(v___x_3526_, v___x_3531_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
return v___x_3532_;
}
}
}
else
{
lean_dec(v_a_3515_);
return v___x_3520_;
}
}
v___jp_3533_:
{
if (v___y_3534_ == 0)
{
uint8_t v___x_3535_; 
v___x_3535_ = l_Lean_Exception_isInterrupt(v_a_3515_);
if (v___x_3535_ == 0)
{
uint8_t v___x_3536_; 
lean_inc(v_a_3515_);
v___x_3536_ = l_Lean_Exception_isMaxRecDepth(v_a_3515_);
v___y_3522_ = v___x_3536_;
goto v___jp_3521_;
}
else
{
v___y_3522_ = v___x_3535_;
goto v___jp_3521_;
}
}
else
{
lean_dec(v_a_3515_);
return v___x_3520_;
}
}
}
}
}
v___jp_3477_:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3478_ = lean_box(0);
v___x_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3478_);
return v___x_3479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___boxed(lean_object* v___f_3541_, lean_object* v_ref_3542_, lean_object* v_goal_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1(v___f_3541_, v_ref_3542_, v_goal_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v_ref_3542_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(lean_object* v_c_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_){
_start:
{
lean_object* v_mctx_3555_; lean_object* v_ref_3556_; lean_object* v_env_3557_; lean_object* v_opts_3558_; lean_object* v_namingCtx_3559_; lean_object* v_goal_3560_; lean_object* v_decls_3561_; lean_object* v___x_3562_; 
v_mctx_3555_ = lean_ctor_get(v_c_3551_, 3);
lean_inc_ref(v_mctx_3555_);
v_ref_3556_ = lean_ctor_get(v_c_3551_, 1);
lean_inc(v_ref_3556_);
v_env_3557_ = lean_ctor_get(v_c_3551_, 2);
lean_inc_ref(v_env_3557_);
v_opts_3558_ = lean_ctor_get(v_c_3551_, 4);
lean_inc_ref(v_opts_3558_);
v_namingCtx_3559_ = lean_ctor_get(v_c_3551_, 5);
lean_inc_ref(v_namingCtx_3559_);
v_goal_3560_ = lean_ctor_get(v_c_3551_, 6);
lean_inc(v_goal_3560_);
lean_dec_ref(v_c_3551_);
v_decls_3561_ = lean_ctor_get(v_mctx_3555_, 5);
v___x_3562_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal_spec__0___redArg(v_decls_3561_, v_goal_3560_);
if (lean_obj_tag(v___x_3562_) == 1)
{
lean_object* v_val_3563_; lean_object* v_lctx_3564_; lean_object* v___f_3565_; lean_object* v___f_3566_; lean_object* v___x_3567_; 
v_val_3563_ = lean_ctor_get(v___x_3562_, 0);
lean_inc(v_val_3563_);
lean_dec_ref_known(v___x_3562_, 1);
v_lctx_3564_ = lean_ctor_get(v_val_3563_, 1);
lean_inc_ref(v_lctx_3564_);
lean_dec(v_val_3563_);
v___f_3565_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___closed__0));
v___f_3566_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___lam__1___boxed), 8, 3);
lean_closure_set(v___f_3566_, 0, v___f_3565_);
lean_closure_set(v___f_3566_, 1, v_ref_3556_);
lean_closure_set(v___f_3566_, 2, v_goal_3560_);
v___x_3567_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope___redArg(v_env_3557_, v_mctx_3555_, v_lctx_3564_, v_opts_3558_, v_namingCtx_3559_, v___f_3566_, v_a_3552_, v_a_3553_);
return v___x_3567_;
}
else
{
lean_object* v___x_3568_; lean_object* v___x_3569_; 
lean_dec(v___x_3562_);
lean_dec(v_goal_3560_);
lean_dec_ref(v_namingCtx_3559_);
lean_dec_ref(v_opts_3558_);
lean_dec_ref(v_env_3557_);
lean_dec(v_ref_3556_);
lean_dec_ref(v_mctx_3555_);
v___x_3568_ = lean_box(0);
v___x_3569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3568_);
return v___x_3569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal___boxed(lean_object* v_c_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_){
_start:
{
lean_object* v_res_3574_; 
v_res_3574_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(v_c_3570_, v_a_3571_, v_a_3572_);
lean_dec(v_a_3572_);
lean_dec_ref(v_a_3571_);
return v_res_3574_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(lean_object* v___x_3575_, lean_object* v_val_3576_, lean_object* v_as_3577_, size_t v_i_3578_, size_t v_stop_3579_){
_start:
{
uint8_t v___x_3584_; uint8_t v___x_3585_; 
v___x_3584_ = 0;
v___x_3585_ = lean_usize_dec_eq(v_i_3578_, v_stop_3579_);
if (v___x_3585_ == 0)
{
lean_object* v___x_3586_; lean_object* v_pos_3587_; uint8_t v_severity_3588_; lean_object* v_data_3589_; lean_object* v___f_3590_; uint8_t v___x_3591_; lean_object* v___x_3592_; uint8_t v___x_3593_; uint8_t v___y_3595_; 
v___x_3586_ = lean_array_uget_borrowed(v_as_3577_, v_i_3578_);
v_pos_3587_ = lean_ctor_get(v___x_3586_, 1);
v_severity_3588_ = lean_ctor_get_uint8(v___x_3586_, sizeof(void*)*5 + 1);
v_data_3589_ = lean_ctor_get(v___x_3586_, 4);
v___f_3590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__0));
v___x_3591_ = 1;
lean_inc_ref(v_pos_3587_);
v___x_3592_ = l_Lean_FileMap_ofPosition(v___x_3575_, v_pos_3587_);
v___x_3593_ = l_Lean_Syntax_Range_contains(v_val_3576_, v___x_3592_, v___x_3591_);
lean_dec(v___x_3592_);
if (v_severity_3588_ == 2)
{
v___y_3595_ = v___x_3591_;
goto v___jp_3594_;
}
else
{
v___y_3595_ = v___x_3584_;
goto v___jp_3594_;
}
v___jp_3594_:
{
if (v___x_3593_ == 0)
{
goto v___jp_3580_;
}
else
{
if (v___y_3595_ == 0)
{
goto v___jp_3580_;
}
else
{
uint8_t v___x_3596_; 
lean_inc(v_data_3589_);
v___x_3596_ = l_Lean_MessageData_hasTag(v___f_3590_, v_data_3589_);
if (v___x_3596_ == 0)
{
return v___x_3591_;
}
else
{
goto v___jp_3580_;
}
}
}
}
}
else
{
return v___x_3584_;
}
v___jp_3580_:
{
size_t v___x_3581_; size_t v___x_3582_; 
v___x_3581_ = ((size_t)1ULL);
v___x_3582_ = lean_usize_add(v_i_3578_, v___x_3581_);
v_i_3578_ = v___x_3582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1___boxed(lean_object* v___x_3597_, lean_object* v_val_3598_, lean_object* v_as_3599_, lean_object* v_i_3600_, lean_object* v_stop_3601_){
_start:
{
size_t v_i_boxed_3602_; size_t v_stop_boxed_3603_; uint8_t v_res_3604_; lean_object* v_r_3605_; 
v_i_boxed_3602_ = lean_unbox_usize(v_i_3600_);
lean_dec(v_i_3600_);
v_stop_boxed_3603_ = lean_unbox_usize(v_stop_3601_);
lean_dec(v_stop_3601_);
v_res_3604_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(v___x_3597_, v_val_3598_, v_as_3599_, v_i_boxed_3602_, v_stop_boxed_3603_);
lean_dec_ref(v_as_3599_);
lean_dec_ref(v_val_3598_);
lean_dec_ref(v___x_3597_);
v_r_3605_ = lean_box(v_res_3604_);
return v_r_3605_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(lean_object* v___x_3606_, lean_object* v_val_3607_, lean_object* v_x_3608_){
_start:
{
if (lean_obj_tag(v_x_3608_) == 0)
{
lean_object* v_cs_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; uint8_t v___x_3612_; 
v_cs_3609_ = lean_ctor_get(v_x_3608_, 0);
v___x_3610_ = lean_unsigned_to_nat(0u);
v___x_3611_ = lean_array_get_size(v_cs_3609_);
v___x_3612_ = lean_nat_dec_lt(v___x_3610_, v___x_3611_);
if (v___x_3612_ == 0)
{
return v___x_3612_;
}
else
{
if (v___x_3612_ == 0)
{
return v___x_3612_;
}
else
{
size_t v___x_3613_; size_t v___x_3614_; uint8_t v___x_3615_; 
v___x_3613_ = ((size_t)0ULL);
v___x_3614_ = lean_usize_of_nat(v___x_3611_);
v___x_3615_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(v___x_3606_, v_val_3607_, v_cs_3609_, v___x_3613_, v___x_3614_);
return v___x_3615_;
}
}
}
else
{
lean_object* v_vs_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v_vs_3616_ = lean_ctor_get(v_x_3608_, 0);
v___x_3617_ = lean_unsigned_to_nat(0u);
v___x_3618_ = lean_array_get_size(v_vs_3616_);
v___x_3619_ = lean_nat_dec_lt(v___x_3617_, v___x_3618_);
if (v___x_3619_ == 0)
{
return v___x_3619_;
}
else
{
if (v___x_3619_ == 0)
{
return v___x_3619_;
}
else
{
size_t v___x_3620_; size_t v___x_3621_; uint8_t v___x_3622_; 
v___x_3620_ = ((size_t)0ULL);
v___x_3621_ = lean_usize_of_nat(v___x_3618_);
v___x_3622_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(v___x_3606_, v_val_3607_, v_vs_3616_, v___x_3620_, v___x_3621_);
return v___x_3622_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(lean_object* v___x_3623_, lean_object* v_val_3624_, lean_object* v_as_3625_, size_t v_i_3626_, size_t v_stop_3627_){
_start:
{
uint8_t v___x_3628_; 
v___x_3628_ = lean_usize_dec_eq(v_i_3626_, v_stop_3627_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; uint8_t v___x_3630_; 
v___x_3629_ = lean_array_uget_borrowed(v_as_3625_, v_i_3626_);
v___x_3630_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(v___x_3623_, v_val_3624_, v___x_3629_);
if (v___x_3630_ == 0)
{
size_t v___x_3631_; size_t v___x_3632_; 
v___x_3631_ = ((size_t)1ULL);
v___x_3632_ = lean_usize_add(v_i_3626_, v___x_3631_);
v_i_3626_ = v___x_3632_;
goto _start;
}
else
{
return v___x_3630_;
}
}
else
{
uint8_t v___x_3634_; 
v___x_3634_ = 0;
return v___x_3634_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1___boxed(lean_object* v___x_3635_, lean_object* v_val_3636_, lean_object* v_as_3637_, lean_object* v_i_3638_, lean_object* v_stop_3639_){
_start:
{
size_t v_i_boxed_3640_; size_t v_stop_boxed_3641_; uint8_t v_res_3642_; lean_object* v_r_3643_; 
v_i_boxed_3640_ = lean_unbox_usize(v_i_3638_);
lean_dec(v_i_3638_);
v_stop_boxed_3641_ = lean_unbox_usize(v_stop_3639_);
lean_dec(v_stop_3639_);
v_res_3642_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0_spec__1(v___x_3635_, v_val_3636_, v_as_3637_, v_i_boxed_3640_, v_stop_boxed_3641_);
lean_dec_ref(v_as_3637_);
lean_dec_ref(v_val_3636_);
lean_dec_ref(v___x_3635_);
v_r_3643_ = lean_box(v_res_3642_);
return v_r_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0___boxed(lean_object* v___x_3644_, lean_object* v_val_3645_, lean_object* v_x_3646_){
_start:
{
uint8_t v_res_3647_; lean_object* v_r_3648_; 
v_res_3647_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(v___x_3644_, v_val_3645_, v_x_3646_);
lean_dec_ref(v_x_3646_);
lean_dec_ref(v_val_3645_);
lean_dec_ref(v___x_3644_);
v_r_3648_ = lean_box(v_res_3647_);
return v_r_3648_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(lean_object* v___x_3649_, lean_object* v_val_3650_, lean_object* v_t_3651_){
_start:
{
lean_object* v_root_3652_; lean_object* v_tail_3653_; uint8_t v___x_3654_; 
v_root_3652_ = lean_ctor_get(v_t_3651_, 0);
v_tail_3653_ = lean_ctor_get(v_t_3651_, 1);
v___x_3654_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__0(v___x_3649_, v_val_3650_, v_root_3652_);
if (v___x_3654_ == 0)
{
lean_object* v___x_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; 
v___x_3655_ = lean_unsigned_to_nat(0u);
v___x_3656_ = lean_array_get_size(v_tail_3653_);
v___x_3657_ = lean_nat_dec_lt(v___x_3655_, v___x_3656_);
if (v___x_3657_ == 0)
{
return v___x_3657_;
}
else
{
if (v___x_3657_ == 0)
{
return v___x_3657_;
}
else
{
size_t v___x_3658_; size_t v___x_3659_; uint8_t v___x_3660_; 
v___x_3658_ = ((size_t)0ULL);
v___x_3659_ = lean_usize_of_nat(v___x_3656_);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0_spec__1(v___x_3649_, v_val_3650_, v_tail_3653_, v___x_3658_, v___x_3659_);
return v___x_3660_;
}
}
}
else
{
return v___x_3654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0___boxed(lean_object* v___x_3661_, lean_object* v_val_3662_, lean_object* v_t_3663_){
_start:
{
uint8_t v_res_3664_; lean_object* v_r_3665_; 
v_res_3664_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(v___x_3661_, v_val_3662_, v_t_3663_);
lean_dec_ref(v_t_3663_);
lean_dec_ref(v_val_3662_);
lean_dec_ref(v___x_3661_);
v_r_3665_ = lean_box(v_res_3664_);
return v_r_3665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(lean_object* v_stx_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_){
_start:
{
uint8_t v___x_3670_; lean_object* v___x_3671_; 
v___x_3670_ = 0;
v___x_3671_ = l_Lean_Syntax_getRange_x3f(v_stx_3666_, v___x_3670_);
if (lean_obj_tag(v___x_3671_) == 1)
{
lean_object* v_val_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3685_; 
v_val_3672_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3674_ = v___x_3671_;
v_isShared_3675_ = v_isSharedCheck_3685_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_val_3672_);
lean_dec(v___x_3671_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3685_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v_fileMap_3676_; lean_object* v___x_3677_; lean_object* v_messages_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3683_; 
v_fileMap_3676_ = lean_ctor_get(v_a_3667_, 1);
v___x_3677_ = lean_st_ref_get(v_a_3668_);
v_messages_3678_ = lean_ctor_get(v___x_3677_, 1);
lean_inc_ref(v_messages_3678_);
lean_dec(v___x_3677_);
v___x_3679_ = l_Lean_MessageLog_reportedPlusUnreported(v_messages_3678_);
v___x_3680_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError_spec__0(v_fileMap_3676_, v_val_3672_, v___x_3679_);
lean_dec_ref(v___x_3679_);
lean_dec(v_val_3672_);
v___x_3681_ = lean_box(v___x_3680_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set_tag(v___x_3674_, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3681_);
v___x_3683_ = v___x_3674_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3681_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
else
{
lean_object* v___x_3686_; lean_object* v___x_3687_; 
lean_dec(v___x_3671_);
v___x_3686_ = lean_box(v___x_3670_);
v___x_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3686_);
return v___x_3687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError___boxed(lean_object* v_stx_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_){
_start:
{
lean_object* v_res_3692_; 
v_res_3692_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(v_stx_3688_, v_a_3689_, v_a_3690_);
lean_dec(v_a_3690_);
lean_dec_ref(v_a_3689_);
lean_dec(v_stx_3688_);
return v_res_3692_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(lean_object* v_tree_3693_, lean_object* v_fileMap_3694_, lean_object* v_c_3695_){
_start:
{
lean_object* v___y_3697_; lean_object* v_kind_3701_; lean_object* v_ref_3702_; lean_object* v___y_3704_; 
v_kind_3701_ = lean_ctor_get(v_c_3695_, 0);
lean_inc(v_kind_3701_);
v_ref_3702_ = lean_ctor_get(v_c_3695_, 1);
lean_inc(v_ref_3702_);
lean_dec_ref(v_c_3695_);
if (lean_obj_tag(v_kind_3701_) == 0)
{
lean_object* v_insertPos_3720_; 
lean_dec(v_ref_3702_);
v_insertPos_3720_ = lean_ctor_get(v_kind_3701_, 1);
lean_inc(v_insertPos_3720_);
v___y_3704_ = v_insertPos_3720_;
goto v___jp_3703_;
}
else
{
uint8_t v___x_3721_; lean_object* v___x_3722_; 
v___x_3721_ = 0;
v___x_3722_ = l_Lean_Syntax_getPos_x3f(v_ref_3702_, v___x_3721_);
lean_dec(v_ref_3702_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v___x_3723_; 
v___x_3723_ = lean_unsigned_to_nat(0u);
v___y_3704_ = v___x_3723_;
goto v___jp_3703_;
}
else
{
lean_object* v_val_3724_; 
v_val_3724_ = lean_ctor_get(v___x_3722_, 0);
lean_inc(v_val_3724_);
lean_dec_ref_known(v___x_3722_, 1);
v___y_3704_ = v_val_3724_;
goto v___jp_3703_;
}
}
v___jp_3696_:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; 
v___x_3698_ = l_List_lengthTR___redArg(v___y_3697_);
lean_dec(v___y_3697_);
v___x_3699_ = lean_unsigned_to_nat(1u);
v___x_3700_ = lean_nat_dec_eq(v___x_3698_, v___x_3699_);
lean_dec(v___x_3698_);
return v___x_3700_;
}
v___jp_3703_:
{
lean_object* v___x_3705_; 
v___x_3705_ = l_Lean_Elab_InfoTree_goalsAt_x3f(v_fileMap_3694_, v_tree_3693_, v___y_3704_);
if (lean_obj_tag(v___x_3705_) == 1)
{
lean_object* v_tail_3706_; 
v_tail_3706_ = lean_ctor_get(v___x_3705_, 1);
lean_inc(v_tail_3706_);
if (lean_obj_tag(v_tail_3706_) == 0)
{
if (lean_obj_tag(v_kind_3701_) == 0)
{
lean_object* v_head_3707_; lean_object* v_tacticSeq_3708_; uint8_t v___x_3709_; lean_object* v___x_3710_; 
v_head_3707_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_head_3707_);
lean_dec_ref_known(v___x_3705_, 2);
v_tacticSeq_3708_ = lean_ctor_get(v_kind_3701_, 0);
lean_inc(v_tacticSeq_3708_);
lean_dec_ref_known(v_kind_3701_, 2);
v___x_3709_ = 0;
v___x_3710_ = l_Lean_Syntax_getPos_x3f(v_tacticSeq_3708_, v___x_3709_);
lean_dec(v_tacticSeq_3708_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_tacticInfo_3711_; lean_object* v_goalsBefore_3712_; 
v_tacticInfo_3711_ = lean_ctor_get(v_head_3707_, 1);
lean_inc_ref(v_tacticInfo_3711_);
lean_dec(v_head_3707_);
v_goalsBefore_3712_ = lean_ctor_get(v_tacticInfo_3711_, 2);
lean_inc(v_goalsBefore_3712_);
lean_dec_ref(v_tacticInfo_3711_);
v___y_3697_ = v_goalsBefore_3712_;
goto v___jp_3696_;
}
else
{
lean_object* v_tacticInfo_3713_; lean_object* v_goalsAfter_3714_; 
lean_dec_ref_known(v___x_3710_, 1);
v_tacticInfo_3713_ = lean_ctor_get(v_head_3707_, 1);
lean_inc_ref(v_tacticInfo_3713_);
lean_dec(v_head_3707_);
v_goalsAfter_3714_ = lean_ctor_get(v_tacticInfo_3713_, 4);
lean_inc(v_goalsAfter_3714_);
lean_dec_ref(v_tacticInfo_3713_);
v___y_3697_ = v_goalsAfter_3714_;
goto v___jp_3696_;
}
}
else
{
lean_object* v_head_3715_; lean_object* v_tacticInfo_3716_; lean_object* v_goalsBefore_3717_; 
v_head_3715_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_head_3715_);
lean_dec_ref_known(v___x_3705_, 2);
v_tacticInfo_3716_ = lean_ctor_get(v_head_3715_, 1);
lean_inc_ref(v_tacticInfo_3716_);
lean_dec(v_head_3715_);
v_goalsBefore_3717_ = lean_ctor_get(v_tacticInfo_3716_, 2);
lean_inc(v_goalsBefore_3717_);
lean_dec_ref(v_tacticInfo_3716_);
v___y_3697_ = v_goalsBefore_3717_;
goto v___jp_3696_;
}
}
else
{
uint8_t v___x_3718_; 
lean_dec_ref_known(v___x_3705_, 2);
lean_dec(v_tail_3706_);
lean_dec(v_kind_3701_);
v___x_3718_ = 0;
return v___x_3718_;
}
}
else
{
uint8_t v___x_3719_; 
lean_dec(v___x_3705_);
lean_dec(v_kind_3701_);
v___x_3719_ = 0;
return v___x_3719_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos___boxed(lean_object* v_tree_3725_, lean_object* v_fileMap_3726_, lean_object* v_c_3727_){
_start:
{
uint8_t v_res_3728_; lean_object* v_r_3729_; 
v_res_3728_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(v_tree_3725_, v_fileMap_3726_, v_c_3727_);
v_r_3729_ = lean_box(v_res_3728_);
return v_r_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(lean_object* v___y_3730_){
_start:
{
lean_object* v___x_3732_; lean_object* v_infoState_3733_; lean_object* v_trees_3734_; lean_object* v___x_3735_; 
v___x_3732_ = lean_st_ref_get(v___y_3730_);
v_infoState_3733_ = lean_ctor_get(v___x_3732_, 8);
lean_inc_ref(v_infoState_3733_);
lean_dec(v___x_3732_);
v_trees_3734_ = lean_ctor_get(v_infoState_3733_, 2);
lean_inc_ref(v_trees_3734_);
lean_dec_ref(v_infoState_3733_);
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v_trees_3734_);
return v___x_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg___boxed(lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(v___y_3736_);
lean_dec(v___y_3736_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0(lean_object* v___y_3739_, lean_object* v___y_3740_){
_start:
{
lean_object* v___x_3742_; 
v___x_3742_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(v___y_3740_);
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___boxed(lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
lean_object* v_res_3746_; 
v_res_3746_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0(v___y_3743_, v___y_3744_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
return v_res_3746_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__0));
v___x_3749_ = l_Lean_stringToMessageData(v___x_3748_);
return v___x_3749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(lean_object* v_tree_3750_, lean_object* v___x_3751_, lean_object* v___x_3752_, lean_object* v_as_3753_, size_t v_sz_3754_, size_t v_i_3755_, lean_object* v_b_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_){
_start:
{
lean_object* v_a_3761_; uint8_t v___x_3765_; 
v___x_3765_ = lean_usize_dec_lt(v_i_3755_, v_sz_3754_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; 
lean_dec(v___x_3752_);
lean_dec_ref(v___x_3751_);
lean_dec_ref(v_tree_3750_);
v___x_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3766_, 0, v_b_3756_);
return v___x_3766_;
}
else
{
lean_object* v___x_3767_; lean_object* v_a_3768_; uint8_t v___x_3769_; 
v___x_3767_ = lean_box(0);
v_a_3768_ = lean_array_uget_borrowed(v_as_3753_, v_i_3755_);
lean_inc(v_a_3768_);
lean_inc_ref(v___x_3751_);
lean_inc_ref(v_tree_3750_);
v___x_3769_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_singleGoalAtInsertPos(v_tree_3750_, v___x_3751_, v_a_3768_);
if (v___x_3769_ == 0)
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v_scopes_3775_; lean_object* v___x_3776_; lean_object* v_opts_3777_; uint8_t v_hasTrace_3778_; 
v___x_3770_ = l_Lean_inheritedTraceOptions;
v___x_3771_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_3772_ = lean_st_ref_get(v___x_3770_);
v___x_3773_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3774_ = lean_st_ref_get(v___y_3758_);
v_scopes_3775_ = lean_ctor_get(v___x_3774_, 2);
lean_inc(v_scopes_3775_);
lean_dec(v___x_3774_);
v___x_3776_ = l_List_head_x21___redArg(v___x_3773_, v_scopes_3775_);
lean_dec(v_scopes_3775_);
v_opts_3777_ = lean_ctor_get(v___x_3776_, 1);
lean_inc_ref(v_opts_3777_);
lean_dec(v___x_3776_);
v_hasTrace_3778_ = lean_ctor_get_uint8(v_opts_3777_, sizeof(void*)*1);
if (v_hasTrace_3778_ == 0)
{
lean_dec_ref(v_opts_3777_);
lean_dec(v___x_3772_);
v_a_3761_ = v___x_3767_;
goto v___jp_3760_;
}
else
{
lean_object* v___x_3779_; uint8_t v___x_3780_; 
v___x_3779_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_3780_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3772_, v_opts_3777_, v___x_3779_);
lean_dec_ref(v_opts_3777_);
lean_dec(v___x_3772_);
if (v___x_3780_ == 0)
{
v_a_3761_ = v___x_3767_;
goto v___jp_3760_;
}
else
{
lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3781_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___closed__1);
v___x_3782_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_3771_, v___x_3781_, v___y_3757_, v___y_3758_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_dec_ref_known(v___x_3782_, 1);
v_a_3761_ = v___x_3767_;
goto v___jp_3760_;
}
else
{
lean_dec(v___x_3752_);
lean_dec_ref(v___x_3751_);
lean_dec_ref(v_tree_3750_);
return v___x_3782_;
}
}
}
}
else
{
lean_object* v_kind_3783_; 
v_kind_3783_ = lean_ctor_get(v_a_3768_, 0);
if (lean_obj_tag(v_kind_3783_) == 0)
{
lean_object* v_ref_3784_; lean_object* v_tacticSeq_3785_; lean_object* v_insertPos_3786_; lean_object* v___x_3787_; 
v_ref_3784_ = lean_ctor_get(v_a_3768_, 1);
v_tacticSeq_3785_ = lean_ctor_get(v_kind_3783_, 0);
v_insertPos_3786_ = lean_ctor_get(v_kind_3783_, 1);
lean_inc(v_a_3768_);
v___x_3787_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectSuggestionsForGoal(v_a_3768_, v___y_3757_, v___y_3758_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3789_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_a_3788_);
lean_dec_ref_known(v___x_3787_, 1);
lean_inc(v___x_3752_);
lean_inc(v_insertPos_3786_);
lean_inc(v_ref_3784_);
v___x_3789_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_emitAppendSuggestions(v_tacticSeq_3785_, v_ref_3784_, v_insertPos_3786_, v_a_3788_, v___x_3752_, v___y_3757_, v___y_3758_);
lean_dec(v_a_3788_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_dec_ref_known(v___x_3789_, 1);
v_a_3761_ = v___x_3767_;
goto v___jp_3760_;
}
else
{
lean_dec(v___x_3752_);
lean_dec_ref(v___x_3751_);
lean_dec_ref(v_tree_3750_);
return v___x_3789_;
}
}
else
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3797_; 
lean_dec(v___x_3752_);
lean_dec_ref(v___x_3751_);
lean_dec_ref(v_tree_3750_);
v_a_3790_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3792_ = v___x_3787_;
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3787_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
}
else
{
lean_object* v___x_3798_; 
lean_inc(v_a_3768_);
v___x_3798_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runReplaceTryOnGoal(v_a_3768_, v___y_3757_, v___y_3758_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_dec_ref_known(v___x_3798_, 1);
v_a_3761_ = v___x_3767_;
goto v___jp_3760_;
}
else
{
lean_dec(v___x_3752_);
lean_dec_ref(v___x_3751_);
lean_dec_ref(v_tree_3750_);
return v___x_3798_;
}
}
}
}
v___jp_3760_:
{
size_t v___x_3762_; size_t v___x_3763_; 
v___x_3762_ = ((size_t)1ULL);
v___x_3763_ = lean_usize_add(v_i_3755_, v___x_3762_);
v_i_3755_ = v___x_3763_;
v_b_3756_ = v_a_3761_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1___boxed(lean_object* v_tree_3799_, lean_object* v___x_3800_, lean_object* v___x_3801_, lean_object* v_as_3802_, lean_object* v_sz_3803_, lean_object* v_i_3804_, lean_object* v_b_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_){
_start:
{
size_t v_sz_boxed_3809_; size_t v_i_boxed_3810_; lean_object* v_res_3811_; 
v_sz_boxed_3809_ = lean_unbox_usize(v_sz_3803_);
lean_dec(v_sz_3803_);
v_i_boxed_3810_ = lean_unbox_usize(v_i_3804_);
lean_dec(v_i_3804_);
v_res_3811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_tree_3799_, v___x_3800_, v___x_3801_, v_as_3802_, v_sz_boxed_3809_, v_i_boxed_3810_, v_b_3805_, v___y_3806_, v___y_3807_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec_ref(v_as_3802_);
return v_res_3811_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2(void){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3816_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__1));
v___x_3817_ = l_Lean_stringToMessageData(v___x_3816_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(lean_object* v_stx_3818_, lean_object* v___x_3819_, lean_object* v___x_3820_, lean_object* v___x_3821_, lean_object* v___x_3822_, lean_object* v_as_3823_, size_t v_sz_3824_, size_t v_i_3825_, lean_object* v_b_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
uint8_t v___x_3830_; 
v___x_3830_ = lean_usize_dec_lt(v_i_3825_, v_sz_3824_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; 
lean_dec(v___x_3822_);
lean_dec_ref(v___x_3821_);
lean_dec(v_stx_3818_);
v___x_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3831_, 0, v_b_3826_);
return v___x_3831_;
}
else
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v_a_3835_; lean_object* v___x_3836_; 
lean_dec_ref(v_b_3826_);
v___x_3832_ = lean_box(0);
v___x_3833_ = l_Lean_inheritedTraceOptions;
v___x_3834_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_3835_ = lean_array_uget_borrowed(v_as_3823_, v_i_3825_);
lean_inc(v_a_3835_);
lean_inc(v_stx_3818_);
v___x_3836_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_3818_, v___x_3819_, v_a_3835_, v___x_3820_, v___y_3827_, v___y_3828_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v_a_3837_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v_scopes_3859_; lean_object* v___x_3860_; lean_object* v_opts_3861_; uint8_t v_hasTrace_3862_; 
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
lean_inc(v_a_3837_);
lean_dec_ref_known(v___x_3836_, 1);
v___x_3856_ = lean_st_ref_get(v___x_3833_);
v___x_3857_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3858_ = lean_st_ref_get(v___y_3828_);
v_scopes_3859_ = lean_ctor_get(v___x_3858_, 2);
lean_inc(v_scopes_3859_);
lean_dec(v___x_3858_);
v___x_3860_ = l_List_head_x21___redArg(v___x_3857_, v_scopes_3859_);
lean_dec(v_scopes_3859_);
v_opts_3861_ = lean_ctor_get(v___x_3860_, 1);
lean_inc_ref(v_opts_3861_);
lean_dec(v___x_3860_);
v_hasTrace_3862_ = lean_ctor_get_uint8(v_opts_3861_, sizeof(void*)*1);
if (v_hasTrace_3862_ == 0)
{
lean_dec_ref(v_opts_3861_);
lean_dec(v___x_3856_);
v___y_3839_ = v___y_3827_;
v___y_3840_ = v___y_3828_;
goto v___jp_3838_;
}
else
{
lean_object* v___x_3863_; uint8_t v___x_3864_; 
v___x_3863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_3864_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3856_, v_opts_3861_, v___x_3863_);
lean_dec_ref(v_opts_3861_);
lean_dec(v___x_3856_);
if (v___x_3864_ == 0)
{
v___y_3839_ = v___y_3827_;
v___y_3840_ = v___y_3828_;
goto v___jp_3838_;
}
else
{
lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3865_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_3866_ = lean_array_get_size(v_a_3837_);
v___x_3867_ = l_Nat_reprFast(v___x_3866_);
v___x_3868_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3867_);
v___x_3869_ = l_Lean_MessageData_ofFormat(v___x_3868_);
v___x_3870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3865_);
lean_ctor_set(v___x_3870_, 1, v___x_3869_);
v___x_3871_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_3834_, v___x_3870_, v___y_3827_, v___y_3828_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_dec_ref_known(v___x_3871_, 1);
v___y_3839_ = v___y_3827_;
v___y_3840_ = v___y_3828_;
goto v___jp_3838_;
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
lean_dec(v_a_3837_);
lean_dec(v___x_3822_);
lean_dec_ref(v___x_3821_);
lean_dec(v_stx_3818_);
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3871_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3871_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
}
v___jp_3838_:
{
size_t v_sz_3841_; size_t v___x_3842_; lean_object* v___x_3843_; 
v_sz_3841_ = lean_array_size(v_a_3837_);
v___x_3842_ = ((size_t)0ULL);
lean_inc(v___x_3822_);
lean_inc_ref(v___x_3821_);
lean_inc(v_a_3835_);
v___x_3843_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_3835_, v___x_3821_, v___x_3822_, v_a_3837_, v_sz_3841_, v___x_3842_, v___x_3832_, v___y_3839_, v___y_3840_);
lean_dec(v_a_3837_);
if (lean_obj_tag(v___x_3843_) == 0)
{
lean_object* v___x_3844_; size_t v___x_3845_; size_t v___x_3846_; 
lean_dec_ref_known(v___x_3843_, 1);
v___x_3844_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0));
v___x_3845_ = ((size_t)1ULL);
v___x_3846_ = lean_usize_add(v_i_3825_, v___x_3845_);
v_i_3825_ = v___x_3846_;
v_b_3826_ = v___x_3844_;
goto _start;
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v___x_3822_);
lean_dec_ref(v___x_3821_);
lean_dec(v_stx_3818_);
v_a_3848_ = lean_ctor_get(v___x_3843_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3843_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3843_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3843_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
}
else
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
lean_dec(v___x_3822_);
lean_dec_ref(v___x_3821_);
lean_dec(v_stx_3818_);
v_a_3880_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3836_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3836_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___boxed(lean_object* v_stx_3888_, lean_object* v___x_3889_, lean_object* v___x_3890_, lean_object* v___x_3891_, lean_object* v___x_3892_, lean_object* v_as_3893_, lean_object* v_sz_3894_, lean_object* v_i_3895_, lean_object* v_b_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
size_t v_sz_boxed_3900_; size_t v_i_boxed_3901_; lean_object* v_res_3902_; 
v_sz_boxed_3900_ = lean_unbox_usize(v_sz_3894_);
lean_dec(v_sz_3894_);
v_i_boxed_3901_ = lean_unbox_usize(v_i_3895_);
lean_dec(v_i_3895_);
v_res_3902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(v_stx_3888_, v___x_3889_, v___x_3890_, v___x_3891_, v___x_3892_, v_as_3893_, v_sz_boxed_3900_, v_i_boxed_3901_, v_b_3896_, v___y_3897_, v___y_3898_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec_ref(v_as_3893_);
lean_dec_ref(v___x_3890_);
lean_dec_ref(v___x_3889_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(lean_object* v_stx_3903_, lean_object* v___x_3904_, lean_object* v___x_3905_, lean_object* v___x_3906_, lean_object* v___x_3907_, lean_object* v_as_3908_, size_t v_sz_3909_, size_t v_i_3910_, lean_object* v_b_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_){
_start:
{
uint8_t v___x_3915_; 
v___x_3915_ = lean_usize_dec_lt(v_i_3910_, v_sz_3909_);
if (v___x_3915_ == 0)
{
lean_object* v___x_3916_; 
lean_dec(v___x_3907_);
lean_dec_ref(v___x_3906_);
lean_dec(v_stx_3903_);
v___x_3916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3916_, 0, v_b_3911_);
return v___x_3916_;
}
else
{
lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v_a_3920_; lean_object* v___x_3921_; 
lean_dec_ref(v_b_3911_);
v___x_3917_ = lean_box(0);
v___x_3918_ = l_Lean_inheritedTraceOptions;
v___x_3919_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_3920_ = lean_array_uget_borrowed(v_as_3908_, v_i_3910_);
lean_inc(v_a_3920_);
lean_inc(v_stx_3903_);
v___x_3921_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_3903_, v___x_3904_, v_a_3920_, v___x_3905_, v___y_3912_, v___y_3913_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v_scopes_3944_; lean_object* v___x_3945_; lean_object* v_opts_3946_; uint8_t v_hasTrace_3947_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
v___x_3941_ = lean_st_ref_get(v___x_3918_);
v___x_3942_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3943_ = lean_st_ref_get(v___y_3913_);
v_scopes_3944_ = lean_ctor_get(v___x_3943_, 2);
lean_inc(v_scopes_3944_);
lean_dec(v___x_3943_);
v___x_3945_ = l_List_head_x21___redArg(v___x_3942_, v_scopes_3944_);
lean_dec(v_scopes_3944_);
v_opts_3946_ = lean_ctor_get(v___x_3945_, 1);
lean_inc_ref(v_opts_3946_);
lean_dec(v___x_3945_);
v_hasTrace_3947_ = lean_ctor_get_uint8(v_opts_3946_, sizeof(void*)*1);
if (v_hasTrace_3947_ == 0)
{
lean_dec_ref(v_opts_3946_);
lean_dec(v___x_3941_);
v___y_3924_ = v___y_3912_;
v___y_3925_ = v___y_3913_;
goto v___jp_3923_;
}
else
{
lean_object* v___x_3948_; uint8_t v___x_3949_; 
v___x_3948_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_3949_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3941_, v_opts_3946_, v___x_3948_);
lean_dec_ref(v_opts_3946_);
lean_dec(v___x_3941_);
if (v___x_3949_ == 0)
{
v___y_3924_ = v___y_3912_;
v___y_3925_ = v___y_3913_;
goto v___jp_3923_;
}
else
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; 
v___x_3950_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_3951_ = lean_array_get_size(v_a_3922_);
v___x_3952_ = l_Nat_reprFast(v___x_3951_);
v___x_3953_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3952_);
v___x_3954_ = l_Lean_MessageData_ofFormat(v___x_3953_);
v___x_3955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3950_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_3919_, v___x_3955_, v___y_3912_, v___y_3913_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_dec_ref_known(v___x_3956_, 1);
v___y_3924_ = v___y_3912_;
v___y_3925_ = v___y_3913_;
goto v___jp_3923_;
}
else
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3964_; 
lean_dec(v_a_3922_);
lean_dec(v___x_3907_);
lean_dec_ref(v___x_3906_);
lean_dec(v_stx_3903_);
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3959_ = v___x_3956_;
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3956_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
}
}
v___jp_3923_:
{
size_t v_sz_3926_; size_t v___x_3927_; lean_object* v___x_3928_; 
v_sz_3926_ = lean_array_size(v_a_3922_);
v___x_3927_ = ((size_t)0ULL);
lean_inc(v___x_3907_);
lean_inc_ref(v___x_3906_);
lean_inc(v_a_3920_);
v___x_3928_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_3920_, v___x_3906_, v___x_3907_, v_a_3922_, v_sz_3926_, v___x_3927_, v___x_3917_, v___y_3924_, v___y_3925_);
lean_dec(v_a_3922_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v___x_3929_; size_t v___x_3930_; size_t v___x_3931_; lean_object* v___x_3932_; 
lean_dec_ref_known(v___x_3928_, 1);
v___x_3929_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__0));
v___x_3930_ = ((size_t)1ULL);
v___x_3931_ = lean_usize_add(v_i_3910_, v___x_3930_);
v___x_3932_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6(v_stx_3903_, v___x_3904_, v___x_3905_, v___x_3906_, v___x_3907_, v_as_3908_, v_sz_3909_, v___x_3931_, v___x_3929_, v___y_3912_, v___y_3913_);
return v___x_3932_;
}
else
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3940_; 
lean_dec(v___x_3907_);
lean_dec_ref(v___x_3906_);
lean_dec(v_stx_3903_);
v_a_3933_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3935_ = v___x_3928_;
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3928_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3933_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_dec(v___x_3907_);
lean_dec_ref(v___x_3906_);
lean_dec(v_stx_3903_);
v_a_3965_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3921_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3921_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3___boxed(lean_object* v_stx_3973_, lean_object* v___x_3974_, lean_object* v___x_3975_, lean_object* v___x_3976_, lean_object* v___x_3977_, lean_object* v_as_3978_, lean_object* v_sz_3979_, lean_object* v_i_3980_, lean_object* v_b_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
size_t v_sz_boxed_3985_; size_t v_i_boxed_3986_; lean_object* v_res_3987_; 
v_sz_boxed_3985_ = lean_unbox_usize(v_sz_3979_);
lean_dec(v_sz_3979_);
v_i_boxed_3986_ = lean_unbox_usize(v_i_3980_);
lean_dec(v_i_3980_);
v_res_3987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(v_stx_3973_, v___x_3974_, v___x_3975_, v___x_3976_, v___x_3977_, v_as_3978_, v_sz_boxed_3985_, v_i_boxed_3986_, v_b_3981_, v___y_3982_, v___y_3983_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec_ref(v_as_3978_);
lean_dec_ref(v___x_3975_);
lean_dec_ref(v___x_3974_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(lean_object* v_stx_3991_, lean_object* v___x_3992_, lean_object* v___x_3993_, lean_object* v___x_3994_, lean_object* v___x_3995_, lean_object* v_as_3996_, size_t v_sz_3997_, size_t v_i_3998_, lean_object* v_b_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_){
_start:
{
uint8_t v___x_4003_; 
v___x_4003_ = lean_usize_dec_lt(v_i_3998_, v_sz_3997_);
if (v___x_4003_ == 0)
{
lean_object* v___x_4004_; 
lean_dec(v___x_3995_);
lean_dec_ref(v___x_3994_);
lean_dec(v_stx_3991_);
v___x_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4004_, 0, v_b_3999_);
return v___x_4004_;
}
else
{
lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v_a_4008_; lean_object* v___x_4009_; 
lean_dec_ref(v_b_3999_);
v___x_4005_ = lean_box(0);
v___x_4006_ = l_Lean_inheritedTraceOptions;
v___x_4007_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_4008_ = lean_array_uget_borrowed(v_as_3996_, v_i_3998_);
lean_inc(v_a_4008_);
lean_inc(v_stx_3991_);
v___x_4009_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_3991_, v___x_3992_, v_a_4008_, v___x_3993_, v___y_4000_, v___y_4001_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v_scopes_4032_; lean_object* v___x_4033_; lean_object* v_opts_4034_; uint8_t v_hasTrace_4035_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 0);
lean_inc(v_a_4010_);
lean_dec_ref_known(v___x_4009_, 1);
v___x_4029_ = lean_st_ref_get(v___x_4006_);
v___x_4030_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4031_ = lean_st_ref_get(v___y_4001_);
v_scopes_4032_ = lean_ctor_get(v___x_4031_, 2);
lean_inc(v_scopes_4032_);
lean_dec(v___x_4031_);
v___x_4033_ = l_List_head_x21___redArg(v___x_4030_, v_scopes_4032_);
lean_dec(v_scopes_4032_);
v_opts_4034_ = lean_ctor_get(v___x_4033_, 1);
lean_inc_ref(v_opts_4034_);
lean_dec(v___x_4033_);
v_hasTrace_4035_ = lean_ctor_get_uint8(v_opts_4034_, sizeof(void*)*1);
if (v_hasTrace_4035_ == 0)
{
lean_dec_ref(v_opts_4034_);
lean_dec(v___x_4029_);
v___y_4012_ = v___y_4000_;
v___y_4013_ = v___y_4001_;
goto v___jp_4011_;
}
else
{
lean_object* v___x_4036_; uint8_t v___x_4037_; 
v___x_4036_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_4037_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4029_, v_opts_4034_, v___x_4036_);
lean_dec_ref(v_opts_4034_);
lean_dec(v___x_4029_);
if (v___x_4037_ == 0)
{
v___y_4012_ = v___y_4000_;
v___y_4013_ = v___y_4001_;
goto v___jp_4011_;
}
else
{
lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v___x_4038_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_4039_ = lean_array_get_size(v_a_4010_);
v___x_4040_ = l_Nat_reprFast(v___x_4039_);
v___x_4041_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4041_, 0, v___x_4040_);
v___x_4042_ = l_Lean_MessageData_ofFormat(v___x_4041_);
v___x_4043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4038_);
lean_ctor_set(v___x_4043_, 1, v___x_4042_);
v___x_4044_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_4007_, v___x_4043_, v___y_4000_, v___y_4001_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_dec_ref_known(v___x_4044_, 1);
v___y_4012_ = v___y_4000_;
v___y_4013_ = v___y_4001_;
goto v___jp_4011_;
}
else
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4052_; 
lean_dec(v_a_4010_);
lean_dec(v___x_3995_);
lean_dec_ref(v___x_3994_);
lean_dec(v_stx_3991_);
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4047_ = v___x_4044_;
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4044_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4050_; 
if (v_isShared_4048_ == 0)
{
v___x_4050_ = v___x_4047_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_a_4045_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
}
}
v___jp_4011_:
{
size_t v_sz_4014_; size_t v___x_4015_; lean_object* v___x_4016_; 
v_sz_4014_ = lean_array_size(v_a_4010_);
v___x_4015_ = ((size_t)0ULL);
lean_inc(v___x_3995_);
lean_inc_ref(v___x_3994_);
lean_inc(v_a_4008_);
v___x_4016_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_4008_, v___x_3994_, v___x_3995_, v_a_4010_, v_sz_4014_, v___x_4015_, v___x_4005_, v___y_4012_, v___y_4013_);
lean_dec(v_a_4010_);
if (lean_obj_tag(v___x_4016_) == 0)
{
lean_object* v___x_4017_; size_t v___x_4018_; size_t v___x_4019_; 
lean_dec_ref_known(v___x_4016_, 1);
v___x_4017_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0));
v___x_4018_ = ((size_t)1ULL);
v___x_4019_ = lean_usize_add(v_i_3998_, v___x_4018_);
v_i_3998_ = v___x_4019_;
v_b_3999_ = v___x_4017_;
goto _start;
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4028_; 
lean_dec(v___x_3995_);
lean_dec_ref(v___x_3994_);
lean_dec(v_stx_3991_);
v_a_4021_ = lean_ctor_get(v___x_4016_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4023_ = v___x_4016_;
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_4016_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v___x_4026_; 
if (v_isShared_4024_ == 0)
{
v___x_4026_ = v___x_4023_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4021_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
}
}
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_dec(v___x_3995_);
lean_dec_ref(v___x_3994_);
lean_dec(v_stx_3991_);
v_a_4053_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4009_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4009_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_stx_4061_, lean_object* v___x_4062_, lean_object* v___x_4063_, lean_object* v___x_4064_, lean_object* v___x_4065_, lean_object* v_as_4066_, lean_object* v_sz_4067_, lean_object* v_i_4068_, lean_object* v_b_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
size_t v_sz_boxed_4073_; size_t v_i_boxed_4074_; lean_object* v_res_4075_; 
v_sz_boxed_4073_ = lean_unbox_usize(v_sz_4067_);
lean_dec(v_sz_4067_);
v_i_boxed_4074_ = lean_unbox_usize(v_i_4068_);
lean_dec(v_i_4068_);
v_res_4075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(v_stx_4061_, v___x_4062_, v___x_4063_, v___x_4064_, v___x_4065_, v_as_4066_, v_sz_boxed_4073_, v_i_boxed_4074_, v_b_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec_ref(v_as_4066_);
lean_dec_ref(v___x_4063_);
lean_dec_ref(v___x_4062_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(lean_object* v_stx_4076_, lean_object* v___x_4077_, lean_object* v___x_4078_, lean_object* v___x_4079_, lean_object* v___x_4080_, lean_object* v_as_4081_, size_t v_sz_4082_, size_t v_i_4083_, lean_object* v_b_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
uint8_t v___x_4088_; 
v___x_4088_ = lean_usize_dec_lt(v_i_4083_, v_sz_4082_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4089_; 
lean_dec(v___x_4080_);
lean_dec_ref(v___x_4079_);
lean_dec(v_stx_4076_);
v___x_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4089_, 0, v_b_4084_);
return v___x_4089_;
}
else
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v_a_4093_; lean_object* v___x_4094_; 
lean_dec_ref(v_b_4084_);
v___x_4090_ = lean_box(0);
v___x_4091_ = l_Lean_inheritedTraceOptions;
v___x_4092_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v_a_4093_ = lean_array_uget_borrowed(v_as_4081_, v_i_4083_);
lean_inc(v_a_4093_);
lean_inc(v_stx_4076_);
v___x_4094_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints(v_stx_4076_, v___x_4077_, v_a_4093_, v___x_4078_, v___y_4085_, v___y_4086_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v___y_4097_; lean_object* v___y_4098_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v_scopes_4117_; lean_object* v___x_4118_; lean_object* v_opts_4119_; uint8_t v_hasTrace_4120_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v___x_4114_ = lean_st_ref_get(v___x_4091_);
v___x_4115_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4116_ = lean_st_ref_get(v___y_4086_);
v_scopes_4117_ = lean_ctor_get(v___x_4116_, 2);
lean_inc(v_scopes_4117_);
lean_dec(v___x_4116_);
v___x_4118_ = l_List_head_x21___redArg(v___x_4115_, v_scopes_4117_);
lean_dec(v_scopes_4117_);
v_opts_4119_ = lean_ctor_get(v___x_4118_, 1);
lean_inc_ref(v_opts_4119_);
lean_dec(v___x_4118_);
v_hasTrace_4120_ = lean_ctor_get_uint8(v_opts_4119_, sizeof(void*)*1);
if (v_hasTrace_4120_ == 0)
{
lean_dec_ref(v_opts_4119_);
lean_dec(v___x_4114_);
v___y_4097_ = v___y_4085_;
v___y_4098_ = v___y_4086_;
goto v___jp_4096_;
}
else
{
lean_object* v___x_4121_; uint8_t v___x_4122_; 
v___x_4121_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_4122_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4114_, v_opts_4119_, v___x_4121_);
lean_dec_ref(v_opts_4119_);
lean_dec(v___x_4114_);
if (v___x_4122_ == 0)
{
v___y_4097_ = v___y_4085_;
v___y_4098_ = v___y_4086_;
goto v___jp_4096_;
}
else
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; 
v___x_4123_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3_spec__6___closed__2);
v___x_4124_ = lean_array_get_size(v_a_4095_);
v___x_4125_ = l_Nat_reprFast(v___x_4124_);
v___x_4126_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
v___x_4127_ = l_Lean_MessageData_ofFormat(v___x_4126_);
v___x_4128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4128_, 0, v___x_4123_);
lean_ctor_set(v___x_4128_, 1, v___x_4127_);
v___x_4129_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_4092_, v___x_4128_, v___y_4085_, v___y_4086_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_dec_ref_known(v___x_4129_, 1);
v___y_4097_ = v___y_4085_;
v___y_4098_ = v___y_4086_;
goto v___jp_4096_;
}
else
{
lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
lean_dec(v_a_4095_);
lean_dec(v___x_4080_);
lean_dec_ref(v___x_4079_);
lean_dec(v_stx_4076_);
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4129_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4132_ = v___x_4129_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_dec(v___x_4129_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
}
}
v___jp_4096_:
{
size_t v_sz_4099_; size_t v___x_4100_; lean_object* v___x_4101_; 
v_sz_4099_ = lean_array_size(v_a_4095_);
v___x_4100_ = ((size_t)0ULL);
lean_inc(v___x_4080_);
lean_inc_ref(v___x_4079_);
lean_inc(v_a_4093_);
v___x_4101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__1(v_a_4093_, v___x_4079_, v___x_4080_, v_a_4095_, v_sz_4099_, v___x_4100_, v___x_4090_, v___y_4097_, v___y_4098_);
lean_dec(v_a_4095_);
if (lean_obj_tag(v___x_4101_) == 0)
{
lean_object* v___x_4102_; size_t v___x_4103_; size_t v___x_4104_; lean_object* v___x_4105_; 
lean_dec_ref_known(v___x_4101_, 1);
v___x_4102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5___closed__0));
v___x_4103_ = ((size_t)1ULL);
v___x_4104_ = lean_usize_add(v_i_4083_, v___x_4103_);
v___x_4105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4_spec__5(v_stx_4076_, v___x_4077_, v___x_4078_, v___x_4079_, v___x_4080_, v_as_4081_, v_sz_4082_, v___x_4104_, v___x_4102_, v___y_4085_, v___y_4086_);
return v___x_4105_;
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
lean_dec(v___x_4080_);
lean_dec_ref(v___x_4079_);
lean_dec(v_stx_4076_);
v_a_4106_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4101_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4101_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
lean_dec(v___x_4080_);
lean_dec_ref(v___x_4079_);
lean_dec(v_stx_4076_);
v_a_4138_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4094_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4094_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4___boxed(lean_object* v_stx_4146_, lean_object* v___x_4147_, lean_object* v___x_4148_, lean_object* v___x_4149_, lean_object* v___x_4150_, lean_object* v_as_4151_, lean_object* v_sz_4152_, lean_object* v_i_4153_, lean_object* v_b_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
size_t v_sz_boxed_4158_; size_t v_i_boxed_4159_; lean_object* v_res_4160_; 
v_sz_boxed_4158_ = lean_unbox_usize(v_sz_4152_);
lean_dec(v_sz_4152_);
v_i_boxed_4159_ = lean_unbox_usize(v_i_4153_);
lean_dec(v_i_4153_);
v_res_4160_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(v_stx_4146_, v___x_4147_, v___x_4148_, v___x_4149_, v___x_4150_, v_as_4151_, v_sz_boxed_4158_, v_i_boxed_4159_, v_b_4154_, v___y_4155_, v___y_4156_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec_ref(v_as_4151_);
lean_dec_ref(v___x_4148_);
lean_dec_ref(v___x_4147_);
return v_res_4160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(lean_object* v_init_4161_, lean_object* v_stx_4162_, lean_object* v___x_4163_, lean_object* v___x_4164_, lean_object* v___x_4165_, lean_object* v___x_4166_, lean_object* v_n_4167_, lean_object* v_b_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_){
_start:
{
if (lean_obj_tag(v_n_4167_) == 0)
{
lean_object* v_cs_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; size_t v_sz_4175_; size_t v___x_4176_; lean_object* v___x_4177_; 
v_cs_4172_ = lean_ctor_get(v_n_4167_, 0);
v___x_4173_ = lean_box(0);
v___x_4174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4173_);
lean_ctor_set(v___x_4174_, 1, v_b_4168_);
v_sz_4175_ = lean_array_size(v_cs_4172_);
v___x_4176_ = ((size_t)0ULL);
v___x_4177_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(v_init_4161_, v_stx_4162_, v___x_4163_, v___x_4164_, v___x_4165_, v___x_4166_, v_cs_4172_, v_sz_4175_, v___x_4176_, v___x_4174_, v___y_4169_, v___y_4170_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4192_; 
v_a_4178_ = lean_ctor_get(v___x_4177_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4180_ = v___x_4177_;
v_isShared_4181_ = v_isSharedCheck_4192_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4177_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4192_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v_fst_4182_; 
v_fst_4182_ = lean_ctor_get(v_a_4178_, 0);
if (lean_obj_tag(v_fst_4182_) == 0)
{
lean_object* v_snd_4183_; lean_object* v___x_4184_; lean_object* v___x_4186_; 
v_snd_4183_ = lean_ctor_get(v_a_4178_, 1);
lean_inc(v_snd_4183_);
lean_dec(v_a_4178_);
v___x_4184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4184_, 0, v_snd_4183_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4184_);
v___x_4186_ = v___x_4180_;
goto v_reusejp_4185_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v___x_4184_);
v___x_4186_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4185_;
}
v_reusejp_4185_:
{
return v___x_4186_;
}
}
else
{
lean_object* v_val_4188_; lean_object* v___x_4190_; 
lean_inc_ref(v_fst_4182_);
lean_dec(v_a_4178_);
v_val_4188_ = lean_ctor_get(v_fst_4182_, 0);
lean_inc(v_val_4188_);
lean_dec_ref_known(v_fst_4182_, 1);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v_val_4188_);
v___x_4190_ = v___x_4180_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_val_4188_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
v_a_4193_ = lean_ctor_get(v___x_4177_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4177_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4177_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
else
{
lean_object* v_vs_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; size_t v_sz_4204_; size_t v___x_4205_; lean_object* v___x_4206_; 
v_vs_4201_ = lean_ctor_get(v_n_4167_, 0);
v___x_4202_ = lean_box(0);
v___x_4203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4202_);
lean_ctor_set(v___x_4203_, 1, v_b_4168_);
v_sz_4204_ = lean_array_size(v_vs_4201_);
v___x_4205_ = ((size_t)0ULL);
v___x_4206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__4(v_stx_4162_, v___x_4163_, v___x_4164_, v___x_4165_, v___x_4166_, v_vs_4201_, v_sz_4204_, v___x_4205_, v___x_4203_, v___y_4169_, v___y_4170_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4221_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4209_ = v___x_4206_;
v_isShared_4210_ = v_isSharedCheck_4221_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_dec(v___x_4206_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4221_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v_fst_4211_; 
v_fst_4211_ = lean_ctor_get(v_a_4207_, 0);
if (lean_obj_tag(v_fst_4211_) == 0)
{
lean_object* v_snd_4212_; lean_object* v___x_4213_; lean_object* v___x_4215_; 
v_snd_4212_ = lean_ctor_get(v_a_4207_, 1);
lean_inc(v_snd_4212_);
lean_dec(v_a_4207_);
v___x_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4213_, 0, v_snd_4212_);
if (v_isShared_4210_ == 0)
{
lean_ctor_set(v___x_4209_, 0, v___x_4213_);
v___x_4215_ = v___x_4209_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v___x_4213_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
else
{
lean_object* v_val_4217_; lean_object* v___x_4219_; 
lean_inc_ref(v_fst_4211_);
lean_dec(v_a_4207_);
v_val_4217_ = lean_ctor_get(v_fst_4211_, 0);
lean_inc(v_val_4217_);
lean_dec_ref_known(v_fst_4211_, 1);
if (v_isShared_4210_ == 0)
{
lean_ctor_set(v___x_4209_, 0, v_val_4217_);
v___x_4219_ = v___x_4209_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_val_4217_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
else
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
v_a_4222_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4206_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_4206_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(lean_object* v_init_4230_, lean_object* v_stx_4231_, lean_object* v___x_4232_, lean_object* v___x_4233_, lean_object* v___x_4234_, lean_object* v___x_4235_, lean_object* v_as_4236_, size_t v_sz_4237_, size_t v_i_4238_, lean_object* v_b_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_){
_start:
{
uint8_t v___x_4243_; 
v___x_4243_ = lean_usize_dec_lt(v_i_4238_, v_sz_4237_);
if (v___x_4243_ == 0)
{
lean_object* v___x_4244_; 
lean_dec(v___x_4235_);
lean_dec_ref(v___x_4234_);
lean_dec(v_stx_4231_);
v___x_4244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4244_, 0, v_b_4239_);
return v___x_4244_;
}
else
{
lean_object* v_snd_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4279_; 
v_snd_4245_ = lean_ctor_get(v_b_4239_, 1);
v_isSharedCheck_4279_ = !lean_is_exclusive(v_b_4239_);
if (v_isSharedCheck_4279_ == 0)
{
lean_object* v_unused_4280_; 
v_unused_4280_ = lean_ctor_get(v_b_4239_, 0);
lean_dec(v_unused_4280_);
v___x_4247_ = v_b_4239_;
v_isShared_4248_ = v_isSharedCheck_4279_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_snd_4245_);
lean_dec(v_b_4239_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4279_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4249_; lean_object* v_a_4250_; lean_object* v___x_4251_; 
v___x_4249_ = lean_box(0);
v_a_4250_ = lean_array_uget_borrowed(v_as_4236_, v_i_4238_);
lean_inc(v_snd_4245_);
lean_inc(v___x_4235_);
lean_inc_ref(v___x_4234_);
lean_inc(v_stx_4231_);
v___x_4251_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(v_init_4230_, v_stx_4231_, v___x_4232_, v___x_4233_, v___x_4234_, v___x_4235_, v_a_4250_, v_snd_4245_, v___y_4240_, v___y_4241_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v_a_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4270_; 
v_a_4252_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4254_ = v___x_4251_;
v_isShared_4255_ = v_isSharedCheck_4270_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_a_4252_);
lean_dec(v___x_4251_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4270_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
if (lean_obj_tag(v_a_4252_) == 0)
{
lean_object* v___x_4256_; lean_object* v___x_4258_; 
lean_dec(v___x_4235_);
lean_dec_ref(v___x_4234_);
lean_dec(v_stx_4231_);
v___x_4256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4256_, 0, v_a_4252_);
if (v_isShared_4248_ == 0)
{
lean_ctor_set(v___x_4247_, 0, v___x_4256_);
v___x_4258_ = v___x_4247_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v___x_4256_);
lean_ctor_set(v_reuseFailAlloc_4262_, 1, v_snd_4245_);
v___x_4258_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
lean_object* v___x_4260_; 
if (v_isShared_4255_ == 0)
{
lean_ctor_set(v___x_4254_, 0, v___x_4258_);
v___x_4260_ = v___x_4254_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v___x_4258_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4265_; 
lean_del_object(v___x_4254_);
lean_dec(v_snd_4245_);
v_a_4263_ = lean_ctor_get(v_a_4252_, 0);
lean_inc(v_a_4263_);
lean_dec_ref_known(v_a_4252_, 1);
if (v_isShared_4248_ == 0)
{
lean_ctor_set(v___x_4247_, 1, v_a_4263_);
lean_ctor_set(v___x_4247_, 0, v___x_4249_);
v___x_4265_ = v___x_4247_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v___x_4249_);
lean_ctor_set(v_reuseFailAlloc_4269_, 1, v_a_4263_);
v___x_4265_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
size_t v___x_4266_; size_t v___x_4267_; 
v___x_4266_ = ((size_t)1ULL);
v___x_4267_ = lean_usize_add(v_i_4238_, v___x_4266_);
v_i_4238_ = v___x_4267_;
v_b_4239_ = v___x_4265_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
lean_del_object(v___x_4247_);
lean_dec(v_snd_4245_);
lean_dec(v___x_4235_);
lean_dec_ref(v___x_4234_);
lean_dec(v_stx_4231_);
v_a_4271_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4251_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4251_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3___boxed(lean_object* v_init_4281_, lean_object* v_stx_4282_, lean_object* v___x_4283_, lean_object* v___x_4284_, lean_object* v___x_4285_, lean_object* v___x_4286_, lean_object* v_as_4287_, lean_object* v_sz_4288_, lean_object* v_i_4289_, lean_object* v_b_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
size_t v_sz_boxed_4294_; size_t v_i_boxed_4295_; lean_object* v_res_4296_; 
v_sz_boxed_4294_ = lean_unbox_usize(v_sz_4288_);
lean_dec(v_sz_4288_);
v_i_boxed_4295_ = lean_unbox_usize(v_i_4289_);
lean_dec(v_i_4289_);
v_res_4296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2_spec__3(v_init_4281_, v_stx_4282_, v___x_4283_, v___x_4284_, v___x_4285_, v___x_4286_, v_as_4287_, v_sz_boxed_4294_, v_i_boxed_4295_, v_b_4290_, v___y_4291_, v___y_4292_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec_ref(v_as_4287_);
lean_dec_ref(v___x_4284_);
lean_dec_ref(v___x_4283_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2___boxed(lean_object* v_init_4297_, lean_object* v_stx_4298_, lean_object* v___x_4299_, lean_object* v___x_4300_, lean_object* v___x_4301_, lean_object* v___x_4302_, lean_object* v_n_4303_, lean_object* v_b_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(v_init_4297_, v_stx_4298_, v___x_4299_, v___x_4300_, v___x_4301_, v___x_4302_, v_n_4303_, v_b_4304_, v___y_4305_, v___y_4306_);
lean_dec(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec_ref(v_n_4303_);
lean_dec_ref(v___x_4300_);
lean_dec_ref(v___x_4299_);
return v_res_4308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(lean_object* v___x_4309_, lean_object* v___x_4310_, lean_object* v_stx_4311_, lean_object* v___x_4312_, lean_object* v___x_4313_, lean_object* v_t_4314_, lean_object* v_init_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_root_4319_; lean_object* v_tail_4320_; lean_object* v___x_4321_; 
v_root_4319_ = lean_ctor_get(v_t_4314_, 0);
v_tail_4320_ = lean_ctor_get(v_t_4314_, 1);
lean_inc(v___x_4310_);
lean_inc_ref(v___x_4309_);
lean_inc(v_stx_4311_);
v___x_4321_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__2(v_init_4315_, v_stx_4311_, v___x_4312_, v___x_4313_, v___x_4309_, v___x_4310_, v_root_4319_, v_init_4315_, v___y_4316_, v___y_4317_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4358_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4324_ = v___x_4321_;
v_isShared_4325_ = v_isSharedCheck_4358_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_a_4322_);
lean_dec(v___x_4321_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4358_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
if (lean_obj_tag(v_a_4322_) == 0)
{
lean_object* v_a_4326_; lean_object* v___x_4328_; 
lean_dec(v_stx_4311_);
lean_dec(v___x_4310_);
lean_dec_ref(v___x_4309_);
v_a_4326_ = lean_ctor_get(v_a_4322_, 0);
lean_inc(v_a_4326_);
lean_dec_ref_known(v_a_4322_, 1);
if (v_isShared_4325_ == 0)
{
lean_ctor_set(v___x_4324_, 0, v_a_4326_);
v___x_4328_ = v___x_4324_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4326_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
return v___x_4328_;
}
}
else
{
lean_object* v_a_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; size_t v_sz_4333_; size_t v___x_4334_; lean_object* v___x_4335_; 
lean_del_object(v___x_4324_);
v_a_4330_ = lean_ctor_get(v_a_4322_, 0);
lean_inc(v_a_4330_);
lean_dec_ref_known(v_a_4322_, 1);
v___x_4331_ = lean_box(0);
v___x_4332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4331_);
lean_ctor_set(v___x_4332_, 1, v_a_4330_);
v_sz_4333_ = lean_array_size(v_tail_4320_);
v___x_4334_ = ((size_t)0ULL);
v___x_4335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2_spec__3(v_stx_4311_, v___x_4312_, v___x_4313_, v___x_4309_, v___x_4310_, v_tail_4320_, v_sz_4333_, v___x_4334_, v___x_4332_, v___y_4316_, v___y_4317_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v_a_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4349_; 
v_a_4336_ = lean_ctor_get(v___x_4335_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4335_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4338_ = v___x_4335_;
v_isShared_4339_ = v_isSharedCheck_4349_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_a_4336_);
lean_dec(v___x_4335_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4349_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
lean_object* v_fst_4340_; 
v_fst_4340_ = lean_ctor_get(v_a_4336_, 0);
if (lean_obj_tag(v_fst_4340_) == 0)
{
lean_object* v_snd_4341_; lean_object* v___x_4343_; 
v_snd_4341_ = lean_ctor_get(v_a_4336_, 1);
lean_inc(v_snd_4341_);
lean_dec(v_a_4336_);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v_snd_4341_);
v___x_4343_ = v___x_4338_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_snd_4341_);
v___x_4343_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
return v___x_4343_;
}
}
else
{
lean_object* v_val_4345_; lean_object* v___x_4347_; 
lean_inc_ref(v_fst_4340_);
lean_dec(v_a_4336_);
v_val_4345_ = lean_ctor_get(v_fst_4340_, 0);
lean_inc(v_val_4345_);
lean_dec_ref_known(v_fst_4340_, 1);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v_val_4345_);
v___x_4347_ = v___x_4338_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_val_4345_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
}
else
{
lean_object* v_a_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4357_; 
v_a_4350_ = lean_ctor_get(v___x_4335_, 0);
v_isSharedCheck_4357_ = !lean_is_exclusive(v___x_4335_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4352_ = v___x_4335_;
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_a_4350_);
lean_dec(v___x_4335_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4355_; 
if (v_isShared_4353_ == 0)
{
v___x_4355_ = v___x_4352_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v_a_4350_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
}
}
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4366_; 
lean_dec(v_stx_4311_);
lean_dec(v___x_4310_);
lean_dec_ref(v___x_4309_);
v_a_4359_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4361_ = v___x_4321_;
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_dec(v___x_4321_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4364_; 
if (v_isShared_4362_ == 0)
{
v___x_4364_ = v___x_4361_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4359_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
return v___x_4364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2___boxed(lean_object* v___x_4367_, lean_object* v___x_4368_, lean_object* v_stx_4369_, lean_object* v___x_4370_, lean_object* v___x_4371_, lean_object* v_t_4372_, lean_object* v_init_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v_res_4377_; 
v_res_4377_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(v___x_4367_, v___x_4368_, v_stx_4369_, v___x_4370_, v___x_4371_, v_t_4372_, v_init_4373_, v___y_4374_, v___y_4375_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
lean_dec_ref(v_t_4372_);
lean_dec_ref(v___x_4371_);
lean_dec_ref(v___x_4370_);
return v_res_4377_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4379_; lean_object* v___x_4380_; 
v___x_4379_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__0));
v___x_4380_ = l_Lean_stringToMessageData(v___x_4379_);
return v___x_4380_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4384_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__4));
v___x_4385_ = l_Lean_stringToMessageData(v___x_4384_);
return v___x_4385_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4387_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__6));
v___x_4388_ = l_Lean_stringToMessageData(v___x_4387_);
return v___x_4388_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9(void){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4390_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__8));
v___x_4391_ = l_Lean_stringToMessageData(v___x_4390_);
return v___x_4391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0(lean_object* v_stx_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v_scopes_4401_; lean_object* v___x_4402_; lean_object* v_opts_4403_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v___y_4408_; uint8_t v___y_4427_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4435_; uint8_t v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4444_; lean_object* v___y_4445_; uint8_t v___y_4446_; uint8_t v___y_4447_; lean_object* v___y_4448_; uint8_t v___y_4457_; lean_object* v___y_4458_; uint8_t v___y_4459_; uint8_t v___y_4460_; lean_object* v___y_4461_; lean_object* v___y_4462_; uint8_t v___y_4471_; uint8_t v___y_4472_; uint8_t v___y_4473_; uint8_t v___y_4507_; lean_object* v___x_4514_; uint8_t v___x_4515_; 
v___x_4399_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4400_ = lean_st_ref_get(v___y_4394_);
v_scopes_4401_ = lean_ctor_get(v___x_4400_, 2);
lean_inc(v_scopes_4401_);
lean_dec(v___x_4400_);
v___x_4402_ = l_List_head_x21___redArg(v___x_4399_, v_scopes_4401_);
lean_dec(v_scopes_4401_);
v_opts_4403_ = lean_ctor_get(v___x_4402_, 1);
lean_inc_ref(v_opts_4403_);
lean_dec(v___x_4402_);
v___x_4514_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof;
v___x_4515_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_4403_, v___x_4514_);
if (v___x_4515_ == 0)
{
lean_object* v___x_4516_; uint8_t v___x_4517_; 
v___x_4516_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy;
v___x_4517_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_4403_, v___x_4516_);
v___y_4507_ = v___x_4517_;
goto v___jp_4506_;
}
else
{
v___y_4507_ = v___x_4515_;
goto v___jp_4506_;
}
v___jp_4396_:
{
lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4397_ = lean_box(0);
v___x_4398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4397_);
return v___x_4398_;
}
v___jp_4404_:
{
lean_object* v___x_4409_; lean_object* v_line_4410_; lean_object* v___x_4411_; lean_object* v_messages_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v_a_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
lean_inc_ref_n(v___y_4405_, 2);
v___x_4409_ = l_Lean_FileMap_toPosition(v___y_4405_, v___y_4408_);
lean_dec(v___y_4408_);
v_line_4410_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_line_4410_);
lean_dec_ref(v___x_4409_);
v___x_4411_ = lean_st_ref_get(v___y_4406_);
v_messages_4412_ = lean_ctor_get(v___x_4411_, 1);
lean_inc_ref(v_messages_4412_);
lean_dec(v___x_4411_);
v___x_4413_ = l_Lean_MessageLog_reportedPlusUnreported(v_messages_4412_);
v___x_4414_ = l_Lean_Elab_getInfoTrees___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__0___redArg(v___y_4406_);
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
lean_inc(v_a_4415_);
lean_dec_ref(v___x_4414_);
v___x_4416_ = lean_box(0);
v___x_4417_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook_spec__2(v___y_4405_, v_line_4410_, v_stx_4392_, v_opts_4403_, v___x_4413_, v_a_4415_, v___x_4416_, v___y_4407_, v___y_4406_);
lean_dec(v_a_4415_);
lean_dec_ref(v___x_4413_);
lean_dec_ref(v_opts_4403_);
if (lean_obj_tag(v___x_4417_) == 0)
{
lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4417_);
if (v_isSharedCheck_4424_ == 0)
{
lean_object* v_unused_4425_; 
v_unused_4425_ = lean_ctor_get(v___x_4417_, 0);
lean_dec(v_unused_4425_);
v___x_4419_ = v___x_4417_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_dec(v___x_4417_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
lean_ctor_set(v___x_4419_, 0, v___x_4416_);
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v___x_4416_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
else
{
return v___x_4417_;
}
}
v___jp_4426_:
{
lean_object* v_fileMap_4430_; lean_object* v___x_4431_; 
v_fileMap_4430_ = lean_ctor_get(v___y_4428_, 1);
v___x_4431_ = l_Lean_Syntax_getPos_x3f(v_stx_4392_, v___y_4427_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v___x_4432_; 
v___x_4432_ = lean_unsigned_to_nat(0u);
v___y_4405_ = v_fileMap_4430_;
v___y_4406_ = v___y_4429_;
v___y_4407_ = v___y_4428_;
v___y_4408_ = v___x_4432_;
goto v___jp_4404_;
}
else
{
lean_object* v_val_4433_; 
v_val_4433_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_val_4433_);
lean_dec_ref_known(v___x_4431_, 1);
v___y_4405_ = v_fileMap_4430_;
v___y_4406_ = v___y_4429_;
v___y_4407_ = v___y_4428_;
v___y_4408_ = v_val_4433_;
goto v___jp_4404_;
}
}
v___jp_4434_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
lean_inc_ref(v___y_4438_);
v___x_4439_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4439_, 0, v___y_4438_);
v___x_4440_ = l_Lean_MessageData_ofFormat(v___x_4439_);
v___x_4441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4441_, 0, v___y_4437_);
lean_ctor_set(v___x_4441_, 1, v___x_4440_);
lean_inc(v___y_4435_);
v___x_4442_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___y_4435_, v___x_4441_, v___y_4393_, v___y_4394_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_dec_ref_known(v___x_4442_, 1);
v___y_4427_ = v___y_4436_;
v___y_4428_ = v___y_4393_;
v___y_4429_ = v___y_4394_;
goto v___jp_4426_;
}
else
{
lean_dec_ref(v_opts_4403_);
lean_dec(v_stx_4392_);
return v___x_4442_;
}
}
v___jp_4443_:
{
lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; 
lean_inc_ref(v___y_4448_);
v___x_4449_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4449_, 0, v___y_4448_);
v___x_4450_ = l_Lean_MessageData_ofFormat(v___x_4449_);
v___x_4451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4451_, 0, v___y_4444_);
lean_ctor_set(v___x_4451_, 1, v___x_4450_);
v___x_4452_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__1);
v___x_4453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4453_, 0, v___x_4451_);
lean_ctor_set(v___x_4453_, 1, v___x_4452_);
if (v___y_4447_ == 0)
{
lean_object* v___x_4454_; 
v___x_4454_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2));
v___y_4435_ = v___y_4445_;
v___y_4436_ = v___y_4446_;
v___y_4437_ = v___x_4453_;
v___y_4438_ = v___x_4454_;
goto v___jp_4434_;
}
else
{
lean_object* v___x_4455_; 
v___x_4455_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3));
v___y_4435_ = v___y_4445_;
v___y_4436_ = v___y_4446_;
v___y_4437_ = v___x_4453_;
v___y_4438_ = v___x_4455_;
goto v___jp_4434_;
}
}
v___jp_4456_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
lean_inc_ref(v___y_4462_);
v___x_4463_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4463_, 0, v___y_4462_);
v___x_4464_ = l_Lean_MessageData_ofFormat(v___x_4463_);
lean_inc_ref(v___y_4461_);
v___x_4465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4465_, 0, v___y_4461_);
lean_ctor_set(v___x_4465_, 1, v___x_4464_);
v___x_4466_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__5);
v___x_4467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4467_, 0, v___x_4465_);
lean_ctor_set(v___x_4467_, 1, v___x_4466_);
if (v___y_4457_ == 0)
{
lean_object* v___x_4468_; 
v___x_4468_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2));
v___y_4444_ = v___x_4467_;
v___y_4445_ = v___y_4458_;
v___y_4446_ = v___y_4459_;
v___y_4447_ = v___y_4460_;
v___y_4448_ = v___x_4468_;
goto v___jp_4443_;
}
else
{
lean_object* v___x_4469_; 
v___x_4469_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3));
v___y_4444_ = v___x_4467_;
v___y_4445_ = v___y_4458_;
v___y_4446_ = v___y_4459_;
v___y_4447_ = v___y_4460_;
v___y_4448_ = v___x_4469_;
goto v___jp_4443_;
}
}
v___jp_4470_:
{
lean_object* v___x_4474_; lean_object* v_a_4475_; uint8_t v___x_4476_; 
v___x_4474_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_hasNonUnsolvedGoalError(v_stx_4392_, v___y_4393_, v___y_4394_);
v_a_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc(v_a_4475_);
lean_dec_ref(v___x_4474_);
v___x_4476_ = lean_unbox(v_a_4475_);
if (v___x_4476_ == 0)
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v_scopes_4481_; lean_object* v___x_4482_; lean_object* v_opts_4483_; uint8_t v_hasTrace_4484_; 
v___x_4477_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_4478_ = l_Lean_inheritedTraceOptions;
v___x_4479_ = lean_st_ref_get(v___x_4478_);
v___x_4480_ = lean_st_ref_get(v___y_4394_);
v_scopes_4481_ = lean_ctor_get(v___x_4480_, 2);
lean_inc(v_scopes_4481_);
lean_dec(v___x_4480_);
v___x_4482_ = l_List_head_x21___redArg(v___x_4399_, v_scopes_4481_);
lean_dec(v_scopes_4481_);
v_opts_4483_ = lean_ctor_get(v___x_4482_, 1);
lean_inc_ref(v_opts_4483_);
lean_dec(v___x_4482_);
v_hasTrace_4484_ = lean_ctor_get_uint8(v_opts_4483_, sizeof(void*)*1);
if (v_hasTrace_4484_ == 0)
{
uint8_t v___x_4485_; 
lean_dec_ref(v_opts_4483_);
lean_dec(v___x_4479_);
v___x_4485_ = lean_unbox(v_a_4475_);
lean_dec(v_a_4475_);
v___y_4427_ = v___x_4485_;
v___y_4428_ = v___y_4393_;
v___y_4429_ = v___y_4394_;
goto v___jp_4426_;
}
else
{
lean_object* v___x_4486_; uint8_t v___x_4487_; 
v___x_4486_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_4487_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4479_, v_opts_4483_, v___x_4486_);
lean_dec_ref(v_opts_4483_);
lean_dec(v___x_4479_);
if (v___x_4487_ == 0)
{
uint8_t v___x_4488_; 
v___x_4488_ = lean_unbox(v_a_4475_);
lean_dec(v_a_4475_);
v___y_4427_ = v___x_4488_;
v___y_4428_ = v___y_4393_;
v___y_4429_ = v___y_4394_;
goto v___jp_4426_;
}
else
{
lean_object* v___x_4489_; 
v___x_4489_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__7);
if (v___y_4472_ == 0)
{
lean_object* v___x_4490_; uint8_t v___x_4491_; 
v___x_4490_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__2));
v___x_4491_ = lean_unbox(v_a_4475_);
lean_dec(v_a_4475_);
v___y_4457_ = v___y_4471_;
v___y_4458_ = v___x_4477_;
v___y_4459_ = v___x_4491_;
v___y_4460_ = v___y_4473_;
v___y_4461_ = v___x_4489_;
v___y_4462_ = v___x_4490_;
goto v___jp_4456_;
}
else
{
lean_object* v___x_4492_; uint8_t v___x_4493_; 
v___x_4492_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__3));
v___x_4493_ = lean_unbox(v_a_4475_);
lean_dec(v_a_4475_);
v___y_4457_ = v___y_4471_;
v___y_4458_ = v___x_4477_;
v___y_4459_ = v___x_4493_;
v___y_4460_ = v___y_4473_;
v___y_4461_ = v___x_4489_;
v___y_4462_ = v___x_4492_;
goto v___jp_4456_;
}
}
}
}
else
{
lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v_scopes_4498_; lean_object* v___x_4499_; lean_object* v_opts_4500_; uint8_t v_hasTrace_4501_; 
lean_dec(v_a_4475_);
lean_dec_ref(v_opts_4403_);
lean_dec(v_stx_4392_);
v___x_4494_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__0_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_));
v___x_4495_ = l_Lean_inheritedTraceOptions;
v___x_4496_ = lean_st_ref_get(v___x_4495_);
v___x_4497_ = lean_st_ref_get(v___y_4394_);
v_scopes_4498_ = lean_ctor_get(v___x_4497_, 2);
lean_inc(v_scopes_4498_);
lean_dec(v___x_4497_);
v___x_4499_ = l_List_head_x21___redArg(v___x_4399_, v_scopes_4498_);
lean_dec(v_scopes_4498_);
v_opts_4500_ = lean_ctor_get(v___x_4499_, 1);
lean_inc_ref(v_opts_4500_);
lean_dec(v___x_4499_);
v_hasTrace_4501_ = lean_ctor_get_uint8(v_opts_4500_, sizeof(void*)*1);
if (v_hasTrace_4501_ == 0)
{
lean_dec_ref(v_opts_4500_);
lean_dec(v___x_4496_);
goto v___jp_4396_;
}
else
{
lean_object* v___x_4502_; uint8_t v___x_4503_; 
v___x_4502_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__4_spec__8_spec__12___closed__3);
v___x_4503_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4496_, v_opts_4500_, v___x_4502_);
lean_dec_ref(v_opts_4500_);
lean_dec(v___x_4496_);
if (v___x_4503_ == 0)
{
goto v___jp_4396_;
}
else
{
lean_object* v___x_4504_; lean_object* v___x_4505_; 
v___x_4504_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___closed__9);
v___x_4505_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_collectTriggerPoints_spec__3(v___x_4494_, v___x_4504_, v___y_4393_, v___y_4394_);
if (lean_obj_tag(v___x_4505_) == 0)
{
lean_dec_ref_known(v___x_4505_, 1);
goto v___jp_4396_;
}
else
{
return v___x_4505_;
}
}
}
}
}
v___jp_4506_:
{
lean_object* v___x_4508_; uint8_t v___x_4509_; lean_object* v___x_4510_; uint8_t v___x_4511_; 
v___x_4508_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal;
v___x_4509_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_4403_, v___x_4508_);
v___x_4510_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry;
v___x_4511_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_runMetaMInScope_spec__0(v_opts_4403_, v___x_4510_);
if (v___y_4507_ == 0)
{
if (v___x_4509_ == 0)
{
if (v___x_4511_ == 0)
{
lean_object* v___x_4512_; lean_object* v___x_4513_; 
lean_dec_ref(v_opts_4403_);
lean_dec(v_stx_4392_);
v___x_4512_ = lean_box(0);
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4512_);
return v___x_4513_;
}
else
{
v___y_4471_ = v___x_4509_;
v___y_4472_ = v___y_4507_;
v___y_4473_ = v___x_4511_;
goto v___jp_4470_;
}
}
else
{
v___y_4471_ = v___x_4509_;
v___y_4472_ = v___y_4507_;
v___y_4473_ = v___x_4511_;
goto v___jp_4470_;
}
}
else
{
v___y_4471_ = v___x_4509_;
v___y_4472_ = v___y_4507_;
v___y_4473_ = v___x_4511_;
goto v___jp_4470_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0___boxed(lean_object* v_stx_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___lam__0(v_stx_4518_, v___y_4519_, v___y_4520_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
return v_res_4522_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3(void){
_start:
{
lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4527_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__2));
v___x_4528_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn___closed__20_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_);
v___x_4529_ = l_Lean_Name_str___override(v___x_4528_, v___x_4527_);
return v___x_4529_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4530_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__3);
v___x_4531_ = ((lean_object*)(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__1));
v___x_4532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
lean_ctor_set(v___x_4532_, 1, v___x_4530_);
return v___x_4532_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook(void){
_start:
{
lean_object* v___x_4533_; 
v___x_4533_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4, &l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4_once, _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook___closed__4);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4535_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook;
v___x_4536_ = l_Lean_Elab_Command_addLinter(v___x_4535_);
return v___x_4536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2____boxed(lean_object* v_a_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_();
return v_res_4538_;
}
}
lean_object* runtime_initialize_Init_Try(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_InfoUtils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Try(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinTerm(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_AutoTry(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3400009768____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onEmptyProof);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1181904795____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_tactic_tryOnEmptyBy);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_419759358____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onUnsolvedGoal);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_3925664777____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTry_onSorry);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_1514339415____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_debug_autoTry_showEdits);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_938150806____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1 = _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_computeAppendSep___boxed__const__1);
l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook = _init_l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook();
lean_mark_persistent(l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_autoTryHook);
res = l___private_Lean_Elab_Tactic_AutoTry_0__Lean_Elab_Tactic_AutoTry_initFn_00___x40_Lean_Elab_Tactic_AutoTry_2389746878____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_AutoTry(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Try(uint8_t builtin);
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* initialize_Lean_Server_InfoUtils(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Try(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinTerm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_AutoTry(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_AutoTry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_AutoTry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_AutoTry(builtin);
}
#ifdef __cplusplus
}
#endif

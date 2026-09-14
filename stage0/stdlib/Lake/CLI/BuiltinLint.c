// Lean compiler output
// Module: Lake.CLI.BuiltinLint
// Imports: public import Lean.Linter.EnvLinter public import Lean.Linter.PersistentLintLog import Lean.Elab.DocString.Builtin.Postponed import Lean.Linter.CodeQuality
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
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_formatLinterResults(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_builtinDeclRanges;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRanges_default;
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
lean_object* lean_get_stderr();
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_SearchPath_findWithExt(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_lintCore(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Linter_EnvLinter_getEnvLinters(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Linter_isLinterEnabledByOptions(lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_getPackageChecks(lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_runPackageChecks(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedPosition_default;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_linter_doc_deferred;
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Doc_DeferredCheck_run(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Linter_getAllCodeQualityEntries(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_SerialMessage_toString(lean_object*, uint8_t);
lean_object* l_Lean_Linter_getAllLints(lean_object*);
lean_object* lean_enable_initializer_execution();
lean_object* l_Lean_findOLean(lean_object*);
lean_object* l_Lean_readModuleData(lean_object*);
lean_object* lean_compacted_region_free(lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_instToJsonEntry_toJson(lean_object*);
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuiltinLint_instBEqMode_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instBEqMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_BuiltinLint_instBEqMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuiltinLint_instBEqMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuiltinLint_instBEqMode___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_instBEqMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuiltinLint_instBEqMode = (const lean_object*)&l_Lake_BuiltinLint_instBEqMode___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weak"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 5, 49, 232, 223, 147, 119, 138)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lake_BuiltinLint_leanOptOverrides___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__0_value;
static const lean_string_object l_Lake_BuiltinLint_leanOptOverrides___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "internal"};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__1 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__1_value;
static const lean_string_object l_Lake_BuiltinLint_leanOptOverrides___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cmdlineSnapshots"};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__2 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 49, 45, 44, 152, 148, 209, 41)}};
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value_aux_0),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value),LEAN_SCALAR_PTR_LITERAL(129, 168, 39, 157, 17, 55, 119, 69)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__3 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__4 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__4_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__4_value)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__5 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0_value;
static lean_once_cell_t l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1;
static lean_once_cell_t l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__2;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "-- recorded by `lake lint --record-exceptions`"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "set_option "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " false in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "warning: could not read `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "`; skipping its "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " exception(s)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "the docstring of `"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "module docstring #"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "warning: could not determine the position of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "`; cannot record a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "warning: could not locate source file for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` to record a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "error: in module `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "`, in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": error: in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2_value;
static const lean_closure_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3_value;
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18;
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "warning: could not determine the command position of a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` text-linter warning in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`; skipping its exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "-- Text linter diagnostics in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "warning: no declaration range for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "-- Environment linting passed for "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "in "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "-- No environment linters were run for "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "EnvLinter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 76, 236, 169, 217, 120, 18, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__0;
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__1;
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__2;
static const lean_string_object l_Lake_BuiltinLint_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "lake lint: no modules specified for builtin linting"};
static const lean_object* l_Lake_BuiltinLint_run___closed__3 = (const lean_object*)&l_Lake_BuiltinLint_run___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__2;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lake_BuiltinLint_Mode_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lake_BuiltinLint_Mode_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lake_BuiltinLint_Mode_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg(lean_object* v_report_23_){
_start:
{
lean_inc(v_report_23_);
return v_report_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg___boxed(lean_object* v_report_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_BuiltinLint_Mode_report_elim___redArg(v_report_24_);
lean_dec(v_report_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_report_29_){
_start:
{
lean_inc(v_report_29_);
return v_report_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_report_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lake_BuiltinLint_Mode_report_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_report_33_);
lean_dec(v_report_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(lean_object* v_recordExceptions_36_){
_start:
{
lean_inc(v_recordExceptions_36_);
return v_recordExceptions_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg___boxed(lean_object* v_recordExceptions_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(v_recordExceptions_37_);
lean_dec(v_recordExceptions_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_recordExceptions_42_){
_start:
{
lean_inc(v_recordExceptions_42_);
return v_recordExceptions_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_recordExceptions_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lake_BuiltinLint_Mode_recordExceptions_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_recordExceptions_46_);
lean_dec(v_recordExceptions_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(lean_object* v_codeQuality_49_){
_start:
{
lean_inc(v_codeQuality_49_);
return v_codeQuality_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg___boxed(lean_object* v_codeQuality_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(v_codeQuality_50_);
lean_dec(v_codeQuality_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_codeQuality_55_){
_start:
{
lean_inc(v_codeQuality_55_);
return v_codeQuality_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_codeQuality_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lake_BuiltinLint_Mode_codeQuality_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_codeQuality_59_);
lean_dec(v_codeQuality_59_);
return v_res_61_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuiltinLint_instBEqMode_beq(uint8_t v_x_62_, uint8_t v_y_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_64_ = l_Lake_BuiltinLint_Mode_ctorIdx(v_x_62_);
v___x_65_ = l_Lake_BuiltinLint_Mode_ctorIdx(v_y_63_);
v___x_66_ = lean_nat_dec_eq(v___x_64_, v___x_65_);
lean_dec(v___x_65_);
lean_dec(v___x_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instBEqMode_beq___boxed(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
uint8_t v_x_21__boxed_69_; uint8_t v_y_22__boxed_70_; uint8_t v_res_71_; lean_object* v_r_72_; 
v_x_21__boxed_69_ = lean_unbox(v_x_67_);
v_y_22__boxed_70_ = lean_unbox(v_y_68_);
v_res_71_ = l_Lake_BuiltinLint_instBEqMode_beq(v_x_21__boxed_69_, v_y_22__boxed_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(size_t v_sz_78_, size_t v_i_79_, lean_object* v_bs_80_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_usize_dec_lt(v_i_79_, v_sz_78_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
v___x_82_ = l_unsafeCast___redArg(v_bs_80_);
lean_dec_ref(v_bs_80_);
return v___x_82_;
}
else
{
lean_object* v_v_83_; lean_object* v___x_84_; lean_object* v_fst_85_; lean_object* v_snd_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_104_; 
v_v_83_ = lean_array_uget_borrowed(v_bs_80_, v_i_79_);
v___x_84_ = l_unsafeCast___redArg(v_v_83_);
v_fst_85_ = lean_ctor_get(v___x_84_, 0);
v_snd_86_ = lean_ctor_get(v___x_84_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_104_ == 0)
{
v___x_88_ = v___x_84_;
v_isShared_89_ = v_isSharedCheck_104_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_snd_86_);
lean_inc(v_fst_85_);
lean_dec(v___x_84_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_104_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v_bs_x27_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_97_; 
v___x_90_ = lean_unsigned_to_nat(0u);
v_bs_x27_91_ = lean_array_uset(v_bs_80_, v_i_79_, v___x_90_);
v___x_92_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1));
v___x_93_ = l_Lean_Name_append(v___x_92_, v_fst_85_);
v___x_94_ = lean_alloc_ctor(1, 0, 1);
v___x_95_ = lean_unbox(v_snd_86_);
lean_dec(v_snd_86_);
lean_ctor_set_uint8(v___x_94_, 0, v___x_95_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 1, v___x_94_);
lean_ctor_set(v___x_88_, 0, v___x_93_);
v___x_97_ = v___x_88_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___x_94_);
v___x_97_ = v_reuseFailAlloc_103_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
size_t v___x_98_; size_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = ((size_t)1ULL);
v___x_99_ = lean_usize_add(v_i_79_, v___x_98_);
v___x_100_ = l_unsafeCast___redArg(v___x_97_);
lean_dec_ref(v___x_97_);
v___x_101_ = lean_array_uset(v_bs_x27_91_, v_i_79_, v___x_100_);
v_i_79_ = v___x_99_;
v_bs_80_ = v___x_101_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___boxed(lean_object* v_sz_105_, lean_object* v_i_106_, lean_object* v_bs_107_){
_start:
{
size_t v_sz_boxed_108_; size_t v_i_boxed_109_; lean_object* v_res_110_; 
v_sz_boxed_108_ = lean_unbox_usize(v_sz_105_);
lean_dec(v_sz_105_);
v_i_boxed_109_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_sz_boxed_108_, v_i_boxed_109_, v_bs_107_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(lean_object* v_as_111_, size_t v_i_112_, size_t v_stop_113_, lean_object* v_b_114_){
_start:
{
uint8_t v___x_115_; 
v___x_115_ = lean_usize_dec_eq(v_i_112_, v_stop_113_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v_fst_117_; lean_object* v_snd_118_; lean_object* v___x_119_; size_t v___x_120_; size_t v___x_121_; 
v___x_116_ = lean_array_uget_borrowed(v_as_111_, v_i_112_);
v_fst_117_ = lean_ctor_get(v___x_116_, 0);
v_snd_118_ = lean_ctor_get(v___x_116_, 1);
lean_inc(v_snd_118_);
lean_inc(v_fst_117_);
v___x_119_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_117_, v_snd_118_, v_b_114_);
v___x_120_ = ((size_t)1ULL);
v___x_121_ = lean_usize_add(v_i_112_, v___x_120_);
v_i_112_ = v___x_121_;
v_b_114_ = v___x_119_;
goto _start;
}
else
{
return v_b_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2___boxed(lean_object* v_as_123_, lean_object* v_i_124_, lean_object* v_stop_125_, lean_object* v_b_126_){
_start:
{
size_t v_i_boxed_127_; size_t v_stop_boxed_128_; lean_object* v_res_129_; 
v_i_boxed_127_ = lean_unbox_usize(v_i_124_);
lean_dec(v_i_124_);
v_stop_boxed_128_ = lean_unbox_usize(v_stop_125_);
lean_dec(v_stop_125_);
v_res_129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(v_as_123_, v_i_boxed_127_, v_stop_boxed_128_, v_b_126_);
lean_dec_ref(v_as_123_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(lean_object* v_init_130_, lean_object* v_x_131_){
_start:
{
if (lean_obj_tag(v_x_131_) == 0)
{
lean_object* v_k_132_; lean_object* v_v_133_; lean_object* v_l_134_; lean_object* v_r_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_k_132_ = lean_ctor_get(v_x_131_, 1);
v_v_133_ = lean_ctor_get(v_x_131_, 2);
v_l_134_ = lean_ctor_get(v_x_131_, 3);
v_r_135_ = lean_ctor_get(v_x_131_, 4);
v___x_136_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v_init_130_, v_l_134_);
lean_inc(v_v_133_);
lean_inc(v_k_132_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v_k_132_);
lean_ctor_set(v___x_137_, 1, v_v_133_);
v___x_138_ = lean_array_push(v___x_136_, v___x_137_);
v_init_130_ = v___x_138_;
v_x_131_ = v_r_135_;
goto _start;
}
else
{
return v_init_130_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0___boxed(lean_object* v_init_140_, lean_object* v_x_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v_init_140_, v_x_141_);
lean_dec(v_x_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides(lean_object* v_args_155_){
_start:
{
lean_object* v_linterOverrides_156_; uint8_t v_mode_157_; lean_object* v___y_159_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_linterOverrides_156_ = lean_ctor_get(v_args_155_, 0);
v_mode_157_ = lean_ctor_get_uint8(v_args_155_, sizeof(void*)*4 + 1);
v___x_173_ = lean_box(1);
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = lean_array_get_size(v_linterOverrides_156_);
v___x_176_ = lean_nat_dec_lt(v___x_174_, v___x_175_);
if (v___x_176_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint8_t v___x_177_; 
v___x_177_ = lean_nat_dec_le(v___x_175_, v___x_175_);
if (v___x_177_ == 0)
{
if (v___x_176_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
size_t v___x_178_; size_t v___x_179_; lean_object* v___x_180_; 
v___x_178_ = ((size_t)0ULL);
v___x_179_ = lean_usize_of_nat(v___x_175_);
v___x_180_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(v_linterOverrides_156_, v___x_178_, v___x_179_, v___x_173_);
v___y_159_ = v___x_180_;
goto v___jp_158_;
}
}
else
{
size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((size_t)0ULL);
v___x_182_ = lean_usize_of_nat(v___x_175_);
v___x_183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(v_linterOverrides_156_, v___x_181_, v___x_182_, v___x_173_);
v___y_159_ = v___x_183_;
goto v___jp_158_;
}
}
v___jp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; size_t v_sz_162_; size_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_base_166_; uint8_t v___x_167_; uint8_t v___x_168_; 
v___x_160_ = ((lean_object*)(l_Lake_BuiltinLint_leanOptOverrides___closed__0));
v___x_161_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v___x_160_, v___y_159_);
lean_dec(v___y_159_);
v_sz_162_ = lean_array_size(v___x_161_);
v___x_163_ = ((size_t)0ULL);
v___x_164_ = l_unsafeCast___redArg(v___x_161_);
lean_dec_ref(v___x_161_);
v___x_165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_sz_162_, v___x_163_, v___x_164_);
v_base_166_ = l_unsafeCast___redArg(v___x_165_);
lean_dec_ref(v___x_165_);
v___x_167_ = 1;
v___x_168_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_157_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_LeanOptions_ofArray(v_base_166_);
lean_dec(v_base_166_);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = ((lean_object*)(l_Lake_BuiltinLint_leanOptOverrides___closed__5));
v___x_171_ = lean_array_push(v_base_166_, v___x_170_);
v___x_172_ = l_Lean_LeanOptions_ofArray(v___x_171_);
lean_dec_ref(v___x_171_);
return v___x_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides___boxed(lean_object* v_args_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lake_BuiltinLint_leanOptOverrides(v_args_184_);
lean_dec_ref(v_args_184_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(lean_object* v_init_186_, lean_object* v_t_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v_init_186_, v_t_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___boxed(lean_object* v_init_189_, lean_object* v_t_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(v_init_189_, v_t_190_);
lean_dec(v_t_190_);
return v_res_191_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_box(0);
v___x_194_ = l_unsafeCast___redArg(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__2(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_195_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
v___x_196_ = l_Lean_instInhabitedPosition_default;
v___x_197_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___x_196_);
lean_ctor_set(v___x_198_, 2, v___x_195_);
return v___x_198_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__2, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__2_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__2);
return v___x_199_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lake_BuiltinLint_instInhabitedExceptionRecord_default;
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx(lean_object* v_x_201_){
_start:
{
switch(lean_obj_tag(v_x_201_))
{
case 0:
{
lean_object* v___x_202_; 
v___x_202_ = lean_unsigned_to_nat(0u);
return v___x_202_;
}
case 1:
{
lean_object* v___x_203_; 
v___x_203_ = lean_unsigned_to_nat(1u);
return v___x_203_;
}
default: 
{
lean_object* v___x_204_; 
v___x_204_ = lean_unsigned_to_nat(2u);
return v___x_204_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___boxed(lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx(v_x_205_);
lean_dec_ref(v_x_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(lean_object* v_t_207_, lean_object* v_k_208_){
_start:
{
switch(lean_obj_tag(v_t_207_))
{
case 0:
{
uint8_t v_failed_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v_failed_209_ = lean_ctor_get_uint8(v_t_207_, 0);
lean_dec_ref_known(v_t_207_, 0);
v___x_210_ = lean_box(v_failed_209_);
v___x_211_ = lean_apply_1(v_k_208_, v___x_210_);
return v___x_211_;
}
case 1:
{
lean_object* v_records_212_; uint8_t v_unlocated_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_records_212_ = lean_ctor_get(v_t_207_, 0);
lean_inc_ref(v_records_212_);
v_unlocated_213_ = lean_ctor_get_uint8(v_t_207_, sizeof(void*)*1);
lean_dec_ref_known(v_t_207_, 1);
v___x_214_ = lean_box(v_unlocated_213_);
v___x_215_ = lean_apply_2(v_k_208_, v_records_212_, v___x_214_);
return v___x_215_;
}
default: 
{
lean_object* v_entries_216_; lean_object* v___x_217_; 
v_entries_216_ = lean_ctor_get(v_t_207_, 0);
lean_inc_ref(v_entries_216_);
lean_dec_ref_known(v_t_207_, 1);
v___x_217_ = lean_apply_1(v_k_208_, v_entries_216_);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(lean_object* v_motive_218_, lean_object* v_ctorIdx_219_, lean_object* v_t_220_, lean_object* v_h_221_, lean_object* v_k_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_220_, v_k_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___boxed(lean_object* v_motive_224_, lean_object* v_ctorIdx_225_, lean_object* v_t_226_, lean_object* v_h_227_, lean_object* v_k_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(v_motive_224_, v_ctorIdx_225_, v_t_226_, v_h_227_, v_k_228_);
lean_dec(v_ctorIdx_225_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim___redArg(lean_object* v_t_230_, lean_object* v_reported_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_230_, v_reported_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim(lean_object* v_motive_233_, lean_object* v_t_234_, lean_object* v_h_235_, lean_object* v_reported_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_234_, v_reported_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim___redArg(lean_object* v_t_238_, lean_object* v_recorded_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_238_, v_recorded_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim(lean_object* v_motive_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_recorded_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_242_, v_recorded_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim___redArg(lean_object* v_t_246_, lean_object* v_codeQualityChecks_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_246_, v_codeQualityChecks_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim(lean_object* v_motive_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_codeQualityChecks_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_250_, v_codeQualityChecks_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx(lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
lean_object* v___x_255_; 
v___x_255_ = lean_unsigned_to_nat(0u);
return v___x_255_;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_unsigned_to_nat(1u);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___boxed(lean_object* v_x_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx(v_x_257_);
lean_dec_ref(v_x_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(lean_object* v_t_259_, lean_object* v_k_260_){
_start:
{
if (lean_obj_tag(v_t_259_) == 0)
{
uint8_t v_failed_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_failed_261_ = lean_ctor_get_uint8(v_t_259_, 0);
lean_dec_ref_known(v_t_259_, 0);
v___x_262_ = lean_box(v_failed_261_);
v___x_263_ = lean_apply_1(v_k_260_, v___x_262_);
return v___x_263_;
}
else
{
lean_object* v_records_264_; uint8_t v_unlocated_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_records_264_ = lean_ctor_get(v_t_259_, 0);
lean_inc_ref(v_records_264_);
v_unlocated_265_ = lean_ctor_get_uint8(v_t_259_, sizeof(void*)*1);
lean_dec_ref_known(v_t_259_, 1);
v___x_266_ = lean_box(v_unlocated_265_);
v___x_267_ = lean_apply_2(v_k_260_, v_records_264_, v___x_266_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(lean_object* v_motive_268_, lean_object* v_ctorIdx_269_, lean_object* v_t_270_, lean_object* v_h_271_, lean_object* v_k_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_270_, v_k_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___boxed(lean_object* v_motive_274_, lean_object* v_ctorIdx_275_, lean_object* v_t_276_, lean_object* v_h_277_, lean_object* v_k_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(v_motive_274_, v_ctorIdx_275_, v_t_276_, v_h_277_, v_k_278_);
lean_dec(v_ctorIdx_275_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim___redArg(lean_object* v_t_280_, lean_object* v_reported_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_280_, v_reported_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim(lean_object* v_motive_283_, lean_object* v_t_284_, lean_object* v_h_285_, lean_object* v_reported_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_284_, v_reported_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim___redArg(lean_object* v_t_288_, lean_object* v_recorded_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_288_, v_recorded_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim(lean_object* v_motive_291_, lean_object* v_t_292_, lean_object* v_h_293_, lean_object* v_recorded_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_292_, v_recorded_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(lean_object* v_pkgRoot_296_, lean_object* v_as_297_, size_t v_i_298_, size_t v_stop_299_, lean_object* v_b_300_){
_start:
{
lean_object* v___y_302_; uint8_t v___x_306_; 
v___x_306_ = lean_usize_dec_eq(v_i_298_, v_stop_299_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___y_309_; lean_object* v_fst_311_; lean_object* v_snd_312_; uint8_t v___x_313_; 
v___x_307_ = lean_array_uget_borrowed(v_as_297_, v_i_298_);
v_fst_311_ = lean_ctor_get(v___x_307_, 0);
v_snd_312_ = lean_ctor_get(v___x_307_, 1);
v___x_313_ = l_Lean_Name_isPrefixOf(v_pkgRoot_296_, v_fst_311_);
if (v___x_313_ == 0)
{
v___y_309_ = v___x_313_;
goto v___jp_308_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_314_ = lean_array_get_size(v_snd_312_);
v___x_315_ = lean_unsigned_to_nat(0u);
v___x_316_ = lean_nat_dec_eq(v___x_314_, v___x_315_);
if (v___x_316_ == 0)
{
v___y_309_ = v___x_313_;
goto v___jp_308_;
}
else
{
v___y_302_ = v_b_300_;
goto v___jp_301_;
}
}
v___jp_308_:
{
if (v___y_309_ == 0)
{
v___y_302_ = v_b_300_;
goto v___jp_301_;
}
else
{
lean_object* v___x_310_; 
lean_inc(v___x_307_);
v___x_310_ = lean_array_push(v_b_300_, v___x_307_);
v___y_302_ = v___x_310_;
goto v___jp_301_;
}
}
}
else
{
return v_b_300_;
}
v___jp_301_:
{
size_t v___x_303_; size_t v___x_304_; 
v___x_303_ = ((size_t)1ULL);
v___x_304_ = lean_usize_add(v_i_298_, v___x_303_);
v_i_298_ = v___x_304_;
v_b_300_ = v___y_302_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0___boxed(lean_object* v_pkgRoot_317_, lean_object* v_as_318_, lean_object* v_i_319_, lean_object* v_stop_320_, lean_object* v_b_321_){
_start:
{
size_t v_i_boxed_322_; size_t v_stop_boxed_323_; lean_object* v_res_324_; 
v_i_boxed_322_ = lean_unbox_usize(v_i_319_);
lean_dec(v_i_319_);
v_stop_boxed_323_ = lean_unbox_usize(v_stop_320_);
lean_dec(v_stop_320_);
v_res_324_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_317_, v_as_318_, v_i_boxed_322_, v_stop_boxed_323_, v_b_321_);
lean_dec_ref(v_as_318_);
lean_dec(v_pkgRoot_317_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(lean_object* v_env_327_, lean_object* v_pkgRoot_328_){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0));
v___x_331_ = l_Lean_Linter_getAllLints(v_env_327_);
v___x_332_ = lean_array_get_size(v___x_331_);
v___x_333_ = lean_nat_dec_lt(v___x_329_, v___x_332_);
if (v___x_333_ == 0)
{
lean_dec_ref(v___x_331_);
return v___x_330_;
}
else
{
uint8_t v___x_334_; 
v___x_334_ = lean_nat_dec_le(v___x_332_, v___x_332_);
if (v___x_334_ == 0)
{
if (v___x_333_ == 0)
{
lean_dec_ref(v___x_331_);
return v___x_330_;
}
else
{
size_t v___x_335_; size_t v___x_336_; lean_object* v___x_337_; 
v___x_335_ = ((size_t)0ULL);
v___x_336_ = lean_usize_of_nat(v___x_332_);
v___x_337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_328_, v___x_331_, v___x_335_, v___x_336_, v___x_330_);
lean_dec_ref(v___x_331_);
return v___x_337_;
}
}
else
{
size_t v___x_338_; size_t v___x_339_; lean_object* v___x_340_; 
v___x_338_ = ((size_t)0ULL);
v___x_339_ = lean_usize_of_nat(v___x_332_);
v___x_340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_328_, v___x_331_, v___x_338_, v___x_339_, v___x_330_);
lean_dec_ref(v___x_331_);
return v___x_340_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___boxed(lean_object* v_env_341_, lean_object* v_pkgRoot_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(v_env_341_, v_pkgRoot_342_);
lean_dec(v_pkgRoot_342_);
lean_dec_ref(v_env_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(size_t v_sz_344_, size_t v_i_345_, lean_object* v_bs_346_){
_start:
{
uint8_t v___x_347_; 
v___x_347_ = lean_usize_dec_lt(v_i_345_, v_sz_344_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
v___x_348_ = l_unsafeCast___redArg(v_bs_346_);
lean_dec_ref(v_bs_346_);
return v___x_348_;
}
else
{
lean_object* v_v_349_; lean_object* v___x_350_; lean_object* v_entry_351_; lean_object* v___x_352_; lean_object* v_bs_x27_353_; size_t v___x_354_; size_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_v_349_ = lean_array_uget_borrowed(v_bs_346_, v_i_345_);
v___x_350_ = l_unsafeCast___redArg(v_v_349_);
v_entry_351_ = lean_ctor_get(v___x_350_, 1);
lean_inc_ref(v_entry_351_);
lean_dec(v___x_350_);
v___x_352_ = lean_unsigned_to_nat(0u);
v_bs_x27_353_ = lean_array_uset(v_bs_346_, v_i_345_, v___x_352_);
v___x_354_ = ((size_t)1ULL);
v___x_355_ = lean_usize_add(v_i_345_, v___x_354_);
v___x_356_ = l_unsafeCast___redArg(v_entry_351_);
lean_dec_ref(v_entry_351_);
v___x_357_ = lean_array_uset(v_bs_x27_353_, v_i_345_, v___x_356_);
v_i_345_ = v___x_355_;
v_bs_346_ = v___x_357_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0___boxed(lean_object* v_sz_359_, lean_object* v_i_360_, lean_object* v_bs_361_){
_start:
{
size_t v_sz_boxed_362_; size_t v_i_boxed_363_; lean_object* v_res_364_; 
v_sz_boxed_362_ = lean_unbox_usize(v_sz_359_);
lean_dec(v_sz_359_);
v_i_boxed_363_ = lean_unbox_usize(v_i_360_);
lean_dec(v_i_360_);
v_res_364_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(v_sz_boxed_362_, v_i_boxed_363_, v_bs_361_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(lean_object* v_linterOpts_365_, lean_object* v_as_366_, size_t v_i_367_, size_t v_stop_368_, lean_object* v_b_369_){
_start:
{
lean_object* v___y_371_; uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_eq(v_i_367_, v_stop_368_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v_linter_x3f_377_; 
v___x_376_ = lean_array_uget_borrowed(v_as_366_, v_i_367_);
v_linter_x3f_377_ = lean_ctor_get(v___x_376_, 0);
if (lean_obj_tag(v_linter_x3f_377_) == 0)
{
lean_object* v___x_378_; 
lean_inc(v___x_376_);
v___x_378_ = lean_array_push(v_b_369_, v___x_376_);
v___y_371_ = v___x_378_;
goto v___jp_370_;
}
else
{
lean_object* v_val_379_; uint8_t v___x_380_; 
v_val_379_ = lean_ctor_get(v_linter_x3f_377_, 0);
v___x_380_ = l_Lean_Linter_isLinterEnabledByOptions(v_val_379_, v_linterOpts_365_);
if (v___x_380_ == 0)
{
v___y_371_ = v_b_369_;
goto v___jp_370_;
}
else
{
lean_object* v___x_381_; 
lean_inc(v___x_376_);
v___x_381_ = lean_array_push(v_b_369_, v___x_376_);
v___y_371_ = v___x_381_;
goto v___jp_370_;
}
}
}
else
{
return v_b_369_;
}
v___jp_370_:
{
size_t v___x_372_; size_t v___x_373_; 
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_add(v_i_367_, v___x_372_);
v_i_367_ = v___x_373_;
v_b_369_ = v___y_371_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1___boxed(lean_object* v_linterOpts_382_, lean_object* v_as_383_, lean_object* v_i_384_, lean_object* v_stop_385_, lean_object* v_b_386_){
_start:
{
size_t v_i_boxed_387_; size_t v_stop_boxed_388_; lean_object* v_res_389_; 
v_i_boxed_387_ = lean_unbox_usize(v_i_384_);
lean_dec(v_i_384_);
v_stop_boxed_388_ = lean_unbox_usize(v_stop_385_);
lean_dec(v_stop_385_);
v_res_389_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_382_, v_as_383_, v_i_boxed_387_, v_stop_boxed_388_, v_b_386_);
lean_dec_ref(v_as_383_);
lean_dec_ref(v_linterOpts_382_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(lean_object* v_args_392_, lean_object* v_linterOpts_393_, lean_object* v_mod_394_, lean_object* v_as_395_, size_t v_sz_396_, size_t v_i_397_, lean_object* v_b_398_){
_start:
{
lean_object* v_a_400_; uint8_t v___x_404_; 
v___x_404_ = lean_usize_dec_lt(v_i_397_, v_sz_396_);
if (v___x_404_ == 0)
{
return v_b_398_;
}
else
{
lean_object* v_a_405_; lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_451_; 
v_a_405_ = lean_array_uget(v_as_395_, v_i_397_);
v_fst_406_ = lean_ctor_get(v_a_405_, 0);
v_snd_407_ = lean_ctor_get(v_a_405_, 1);
v_isSharedCheck_451_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_451_ == 0)
{
v___x_409_ = v_a_405_;
v_isShared_410_ = v_isSharedCheck_451_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v_a_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_451_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_fst_411_; lean_object* v_snd_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_450_; 
v_fst_411_ = lean_ctor_get(v_b_398_, 0);
v_snd_412_ = lean_ctor_get(v_b_398_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_b_398_);
if (v_isSharedCheck_450_ == 0)
{
v___x_414_ = v_b_398_;
v_isShared_415_ = v_isSharedCheck_450_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_snd_412_);
lean_inc(v_fst_411_);
lean_dec(v_b_398_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_450_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___y_417_; lean_object* v___y_418_; uint8_t v___y_433_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_447_ = l_Lean_Name_getRoot(v_mod_394_);
v___x_448_ = l_Lean_Name_isPrefixOf(v___x_447_, v_fst_406_);
lean_dec(v___x_447_);
if (v___x_448_ == 0)
{
v___y_433_ = v___x_448_;
goto v___jp_432_;
}
else
{
uint8_t v___x_449_; 
v___x_449_ = l_Lean_NameSet_contains(v_fst_411_, v_fst_406_);
if (v___x_449_ == 0)
{
v___y_433_ = v___x_448_;
goto v___jp_432_;
}
else
{
lean_del_object(v___x_414_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
goto v___jp_428_;
}
}
v___jp_416_:
{
size_t v_sz_419_; size_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v_sz_419_ = lean_array_size(v___y_418_);
v___x_420_ = ((size_t)0ULL);
v___x_421_ = l_unsafeCast___redArg(v___y_418_);
lean_dec_ref(v___y_418_);
v___x_422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(v_sz_419_, v___x_420_, v___x_421_);
v___x_423_ = l_unsafeCast___redArg(v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = l_Array_append___redArg(v_snd_412_, v___x_423_);
lean_dec(v___x_423_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 1, v___x_424_);
lean_ctor_set(v___x_414_, 0, v___y_417_);
v___x_426_ = v___x_414_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___y_417_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
v_a_400_ = v___x_426_;
goto v___jp_399_;
}
}
v___jp_428_:
{
lean_object* v___x_430_; 
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v_snd_412_);
lean_ctor_set(v___x_409_, 0, v_fst_411_);
v___x_430_ = v___x_409_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_fst_411_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_snd_412_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
v_a_400_ = v___x_430_;
goto v___jp_399_;
}
}
v___jp_432_:
{
if (v___y_433_ == 0)
{
lean_del_object(v___x_414_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
goto v___jp_428_;
}
else
{
uint8_t v_lintOnly_434_; lean_object* v___x_435_; 
lean_del_object(v___x_409_);
v_lintOnly_434_ = lean_ctor_get_uint8(v_args_392_, sizeof(void*)*4);
v___x_435_ = l_Lean_NameSet_insert(v_fst_411_, v_fst_406_);
if (v_lintOnly_434_ == 0)
{
v___y_417_ = v___x_435_;
v___y_418_ = v_snd_407_;
goto v___jp_416_;
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = lean_array_get_size(v_snd_407_);
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0));
v___x_439_ = lean_nat_dec_lt(v___x_436_, v___x_437_);
if (v___x_439_ == 0)
{
lean_dec(v_snd_407_);
v___y_417_ = v___x_435_;
v___y_418_ = v___x_438_;
goto v___jp_416_;
}
else
{
uint8_t v___x_440_; 
v___x_440_ = lean_nat_dec_le(v___x_437_, v___x_437_);
if (v___x_440_ == 0)
{
if (v___x_439_ == 0)
{
lean_dec(v_snd_407_);
v___y_417_ = v___x_435_;
v___y_418_ = v___x_438_;
goto v___jp_416_;
}
else
{
size_t v___x_441_; size_t v___x_442_; lean_object* v___x_443_; 
v___x_441_ = ((size_t)0ULL);
v___x_442_ = lean_usize_of_nat(v___x_437_);
v___x_443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_393_, v_snd_407_, v___x_441_, v___x_442_, v___x_438_);
lean_dec(v_snd_407_);
v___y_417_ = v___x_435_;
v___y_418_ = v___x_443_;
goto v___jp_416_;
}
}
else
{
size_t v___x_444_; size_t v___x_445_; lean_object* v___x_446_; 
v___x_444_ = ((size_t)0ULL);
v___x_445_ = lean_usize_of_nat(v___x_437_);
v___x_446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_393_, v_snd_407_, v___x_444_, v___x_445_, v___x_438_);
lean_dec(v_snd_407_);
v___y_417_ = v___x_435_;
v___y_418_ = v___x_446_;
goto v___jp_416_;
}
}
}
}
}
}
}
}
v___jp_399_:
{
size_t v___x_401_; size_t v___x_402_; 
v___x_401_ = ((size_t)1ULL);
v___x_402_ = lean_usize_add(v_i_397_, v___x_401_);
v_i_397_ = v___x_402_;
v_b_398_ = v_a_400_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___boxed(lean_object* v_args_452_, lean_object* v_linterOpts_453_, lean_object* v_mod_454_, lean_object* v_as_455_, lean_object* v_sz_456_, lean_object* v_i_457_, lean_object* v_b_458_){
_start:
{
size_t v_sz_boxed_459_; size_t v_i_boxed_460_; lean_object* v_res_461_; 
v_sz_boxed_459_ = lean_unbox_usize(v_sz_456_);
lean_dec(v_sz_456_);
v_i_boxed_460_ = lean_unbox_usize(v_i_457_);
lean_dec(v_i_457_);
v_res_461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(v_args_452_, v_linterOpts_453_, v_mod_454_, v_as_455_, v_sz_boxed_459_, v_i_boxed_460_, v_b_458_);
lean_dec_ref(v_as_455_);
lean_dec(v_mod_454_);
lean_dec_ref(v_linterOpts_453_);
lean_dec_ref(v_args_452_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(lean_object* v_args_464_, lean_object* v_linterOpts_465_, lean_object* v_env_466_, lean_object* v_mod_467_, lean_object* v_collectedModules_468_){
_start:
{
lean_object* v_acc_469_; lean_object* v___x_470_; lean_object* v___x_471_; size_t v_sz_472_; size_t v___x_473_; lean_object* v___x_474_; lean_object* v_fst_475_; lean_object* v_snd_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
v_acc_469_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0));
v___x_470_ = l_Lean_Linter_getAllCodeQualityEntries(v_env_466_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v_collectedModules_468_);
lean_ctor_set(v___x_471_, 1, v_acc_469_);
v_sz_472_ = lean_array_size(v___x_470_);
v___x_473_ = ((size_t)0ULL);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(v_args_464_, v_linterOpts_465_, v_mod_467_, v___x_470_, v_sz_472_, v___x_473_, v___x_471_);
lean_dec_ref(v___x_470_);
v_fst_475_ = lean_ctor_get(v___x_474_, 0);
v_snd_476_ = lean_ctor_get(v___x_474_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_474_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_snd_476_);
lean_inc(v_fst_475_);
lean_dec(v___x_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 1, v_fst_475_);
lean_ctor_set(v___x_478_, 0, v_snd_476_);
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_snd_476_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_fst_475_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___boxed(lean_object* v_args_484_, lean_object* v_linterOpts_485_, lean_object* v_env_486_, lean_object* v_mod_487_, lean_object* v_collectedModules_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(v_args_484_, v_linterOpts_485_, v_env_486_, v_mod_487_, v_collectedModules_488_);
lean_dec(v_mod_487_);
lean_dec_ref(v_env_486_);
lean_dec_ref(v_linterOpts_485_);
lean_dec_ref(v_args_484_);
return v_res_489_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(lean_object* v_modData_490_){
_start:
{
uint8_t v_isModule_492_; 
v_isModule_492_ = lean_ctor_get_uint8(v_modData_490_, sizeof(void*)*5);
return v_isModule_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule___boxed(lean_object* v_modData_493_, lean_object* v_a_494_){
_start:
{
uint8_t v_res_495_; lean_object* v_r_496_; 
v_res_495_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(v_modData_493_);
lean_dec_ref(v_modData_493_);
v_r_496_ = lean_box(v_res_495_);
return v_r_496_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(uint32_t v_c_499_){
_start:
{
uint32_t v___x_500_; uint8_t v___x_501_; 
v___x_500_ = 32;
v___x_501_ = lean_uint32_dec_eq(v_c_499_, v___x_500_);
if (v___x_501_ == 0)
{
uint32_t v___x_502_; uint8_t v___x_503_; 
v___x_502_ = 9;
v___x_503_ = lean_uint32_dec_eq(v_c_499_, v___x_502_);
return v___x_503_;
}
else
{
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar___boxed(lean_object* v_c_504_){
_start:
{
uint32_t v_c_boxed_505_; uint8_t v_res_506_; lean_object* v_r_507_; 
v_c_boxed_505_ = lean_unbox_uint32(v_c_504_);
lean_dec(v_c_504_);
v_res_506_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(v_c_boxed_505_);
v_r_507_ = lean_box(v_res_506_);
return v_r_507_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(lean_object* v_s_508_, lean_object* v_stopPos_509_, lean_object* v_i_510_){
_start:
{
uint8_t v___y_512_; lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = lean_nat_add(v_i_510_, v___x_515_);
v___x_517_ = lean_nat_dec_le(v___x_516_, v_stopPos_509_);
lean_dec(v___x_516_);
if (v___x_517_ == 0)
{
return v_i_510_;
}
else
{
if (v___x_517_ == 0)
{
v___y_512_ = v___x_517_;
goto v___jp_511_;
}
else
{
uint32_t v___x_518_; uint8_t v___x_519_; 
v___x_518_ = lean_string_utf8_get(v_s_508_, v_i_510_);
v___x_519_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(v___x_518_);
v___y_512_ = v___x_519_;
goto v___jp_511_;
}
}
v___jp_511_:
{
if (v___y_512_ == 0)
{
return v_i_510_;
}
else
{
lean_object* v___x_513_; 
v___x_513_ = lean_string_utf8_next(v_s_508_, v_i_510_);
lean_dec(v_i_510_);
v_i_510_ = v___x_513_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0___boxed(lean_object* v_s_520_, lean_object* v_stopPos_521_, lean_object* v_i_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(v_s_520_, v_stopPos_521_, v_i_522_);
lean_dec(v_stopPos_521_);
lean_dec_ref(v_s_520_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(lean_object* v_line_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v_e_527_; lean_object* v___x_528_; 
v___x_525_ = lean_unsigned_to_nat(0u);
v___x_526_ = lean_string_utf8_byte_size(v_line_524_);
v_e_527_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(v_line_524_, v___x_526_, v___x_525_);
v___x_528_ = lean_string_utf8_extract(v_line_524_, v___x_525_, v_e_527_);
lean_dec(v_e_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace___boxed(lean_object* v_line_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(v_line_529_);
lean_dec_ref(v_line_529_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg(){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0));
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___boxed(lean_object* v___dummy_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
return v_res_536_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0(void){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(lean_object* v_s_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___boxed(lean_object* v_s_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(v_s_540_);
lean_dec_ref(v_s_540_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
if (lean_obj_tag(v_x_543_) == 0)
{
return v_x_542_;
}
else
{
lean_object* v_key_544_; lean_object* v_value_545_; lean_object* v_tail_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_key_544_ = lean_ctor_get(v_x_543_, 0);
v_value_545_ = lean_ctor_get(v_x_543_, 1);
v_tail_546_ = lean_ctor_get(v_x_543_, 2);
lean_inc(v_value_545_);
lean_inc(v_key_544_);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v_key_544_);
lean_ctor_set(v___x_547_, 1, v_value_545_);
v___x_548_ = lean_array_push(v_x_542_, v___x_547_);
v_x_542_ = v___x_548_;
v_x_543_ = v_tail_546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19___boxed(lean_object* v_x_550_, lean_object* v_x_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(v_x_550_, v_x_551_);
lean_dec(v_x_551_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(lean_object* v_as_553_, size_t v_i_554_, size_t v_stop_555_, lean_object* v_b_556_){
_start:
{
uint8_t v___x_557_; 
v___x_557_ = lean_usize_dec_eq(v_i_554_, v_stop_555_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; size_t v___x_560_; size_t v___x_561_; 
v___x_558_ = lean_array_uget_borrowed(v_as_553_, v_i_554_);
v___x_559_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(v_b_556_, v___x_558_);
v___x_560_ = ((size_t)1ULL);
v___x_561_ = lean_usize_add(v_i_554_, v___x_560_);
v_i_554_ = v___x_561_;
v_b_556_ = v___x_559_;
goto _start;
}
else
{
return v_b_556_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20___boxed(lean_object* v_as_563_, lean_object* v_i_564_, lean_object* v_stop_565_, lean_object* v_b_566_){
_start:
{
size_t v_i_boxed_567_; size_t v_stop_boxed_568_; lean_object* v_res_569_; 
v_i_boxed_567_ = lean_unbox_usize(v_i_564_);
lean_dec(v_i_564_);
v_stop_boxed_568_ = lean_unbox_usize(v_stop_565_);
lean_dec(v_stop_565_);
v_res_569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(v_as_563_, v_i_boxed_567_, v_stop_boxed_568_, v_b_566_);
lean_dec_ref(v_as_563_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(lean_object* v_s_570_){
_start:
{
lean_object* v___x_572_; lean_object* v_putStr_573_; lean_object* v___x_574_; 
v___x_572_ = lean_get_stderr();
v_putStr_573_ = lean_ctor_get(v___x_572_, 4);
lean_inc_ref(v_putStr_573_);
lean_dec_ref(v___x_572_);
v___x_574_ = lean_apply_2(v_putStr_573_, v_s_570_, lean_box(0));
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29___boxed(lean_object* v_s_575_, lean_object* v_a_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v_s_575_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(lean_object* v_s_578_){
_start:
{
uint32_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = 10;
v___x_581_ = lean_string_push(v_s_578_, v___x_580_);
v___x_582_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17___boxed(lean_object* v_s_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v_s_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(lean_object* v_x_586_, lean_object* v_x_587_){
_start:
{
if (lean_obj_tag(v_x_587_) == 0)
{
return v_x_586_;
}
else
{
lean_object* v_key_588_; lean_object* v_value_589_; lean_object* v_tail_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_key_588_ = lean_ctor_get(v_x_587_, 0);
v_value_589_ = lean_ctor_get(v_x_587_, 1);
v_tail_590_ = lean_ctor_get(v_x_587_, 2);
lean_inc(v_value_589_);
lean_inc(v_key_588_);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v_key_588_);
lean_ctor_set(v___x_591_, 1, v_value_589_);
v___x_592_ = lean_array_push(v_x_586_, v___x_591_);
v_x_586_ = v___x_592_;
v_x_587_ = v_tail_590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15___boxed(lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(v_x_594_, v_x_595_);
lean_dec(v_x_595_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(lean_object* v_as_597_, size_t v_i_598_, size_t v_stop_599_, lean_object* v_b_600_){
_start:
{
uint8_t v___x_601_; 
v___x_601_ = lean_usize_dec_eq(v_i_598_, v_stop_599_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; size_t v___x_604_; size_t v___x_605_; 
v___x_602_ = lean_array_uget_borrowed(v_as_597_, v_i_598_);
v___x_603_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(v_b_600_, v___x_602_);
v___x_604_ = ((size_t)1ULL);
v___x_605_ = lean_usize_add(v_i_598_, v___x_604_);
v_i_598_ = v___x_605_;
v_b_600_ = v___x_603_;
goto _start;
}
else
{
return v_b_600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16___boxed(lean_object* v_as_607_, lean_object* v_i_608_, lean_object* v_stop_609_, lean_object* v_b_610_){
_start:
{
size_t v_i_boxed_611_; size_t v_stop_boxed_612_; lean_object* v_res_613_; 
v_i_boxed_611_ = lean_unbox_usize(v_i_608_);
lean_dec(v_i_608_);
v_stop_boxed_612_ = lean_unbox_usize(v_stop_609_);
lean_dec(v_stop_609_);
v_res_613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(v_as_607_, v_i_boxed_611_, v_stop_boxed_612_, v_b_610_);
lean_dec_ref(v_as_607_);
return v_res_613_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(lean_object* v_a_614_, lean_object* v_b_615_){
_start:
{
lean_object* v_fst_616_; lean_object* v_fst_617_; uint8_t v___x_618_; 
v_fst_616_ = lean_ctor_get(v_b_615_, 0);
v_fst_617_ = lean_ctor_get(v_a_614_, 0);
v___x_618_ = lean_nat_dec_lt(v_fst_616_, v_fst_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0___boxed(lean_object* v_a_619_, lean_object* v_b_620_){
_start:
{
uint8_t v_res_621_; lean_object* v_r_622_; 
v_res_621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v_a_619_, v_b_620_);
lean_dec_ref(v_b_620_);
lean_dec_ref(v_a_619_);
v_r_622_ = lean_box(v_res_621_);
return v_r_622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(lean_object* v_hi_623_, lean_object* v_pivot_624_, lean_object* v_as_625_, lean_object* v_i_626_, lean_object* v_k_627_){
_start:
{
uint8_t v___x_628_; 
v___x_628_ = lean_nat_dec_lt(v_k_627_, v_hi_623_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; lean_object* v___x_630_; 
lean_dec(v_k_627_);
v___x_629_ = lean_array_fswap(v_as_625_, v_i_626_, v_hi_623_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v_i_626_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
return v___x_630_;
}
else
{
lean_object* v_fst_631_; lean_object* v___x_632_; lean_object* v_fst_633_; uint8_t v___x_634_; 
v_fst_631_ = lean_ctor_get(v_pivot_624_, 0);
v___x_632_ = lean_array_fget_borrowed(v_as_625_, v_k_627_);
v_fst_633_ = lean_ctor_get(v___x_632_, 0);
v___x_634_ = lean_nat_dec_lt(v_fst_631_, v_fst_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_unsigned_to_nat(1u);
v___x_636_ = lean_nat_add(v_k_627_, v___x_635_);
lean_dec(v_k_627_);
v_k_627_ = v___x_636_;
goto _start;
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_638_ = lean_array_fswap(v_as_625_, v_i_626_, v_k_627_);
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = lean_nat_add(v_i_626_, v___x_639_);
lean_dec(v_i_626_);
v___x_641_ = lean_nat_add(v_k_627_, v___x_639_);
lean_dec(v_k_627_);
v_as_625_ = v___x_638_;
v_i_626_ = v___x_640_;
v_k_627_ = v___x_641_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg___boxed(lean_object* v_hi_643_, lean_object* v_pivot_644_, lean_object* v_as_645_, lean_object* v_i_646_, lean_object* v_k_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_643_, v_pivot_644_, v_as_645_, v_i_646_, v_k_647_);
lean_dec_ref(v_pivot_644_);
lean_dec(v_hi_643_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(lean_object* v_n_649_, lean_object* v_as_650_, lean_object* v_lo_651_, lean_object* v_hi_652_){
_start:
{
lean_object* v___y_654_; uint8_t v___x_664_; 
v___x_664_ = lean_nat_dec_lt(v_lo_651_, v_hi_652_);
if (v___x_664_ == 0)
{
lean_dec(v_lo_651_);
return v_as_650_;
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v_mid_667_; lean_object* v___y_669_; lean_object* v___y_675_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_665_ = lean_nat_add(v_lo_651_, v_hi_652_);
v___x_666_ = lean_unsigned_to_nat(1u);
v_mid_667_ = lean_nat_shiftr(v___x_665_, v___x_666_);
lean_dec(v___x_665_);
v___x_680_ = lean_array_fget_borrowed(v_as_650_, v_mid_667_);
v___x_681_ = lean_array_fget_borrowed(v_as_650_, v_lo_651_);
v___x_682_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
v___y_675_ = v_as_650_;
goto v___jp_674_;
}
else
{
lean_object* v___x_683_; 
v___x_683_ = lean_array_fswap(v_as_650_, v_lo_651_, v_mid_667_);
v___y_675_ = v___x_683_;
goto v___jp_674_;
}
v___jp_668_:
{
lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_670_ = lean_array_fget_borrowed(v___y_669_, v_mid_667_);
v___x_671_ = lean_array_fget_borrowed(v___y_669_, v_hi_652_);
v___x_672_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_dec(v_mid_667_);
v___y_654_ = v___y_669_;
goto v___jp_653_;
}
else
{
lean_object* v___x_673_; 
v___x_673_ = lean_array_fswap(v___y_669_, v_mid_667_, v_hi_652_);
lean_dec(v_mid_667_);
v___y_654_ = v___x_673_;
goto v___jp_653_;
}
}
v___jp_674_:
{
lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_676_ = lean_array_fget_borrowed(v___y_675_, v_hi_652_);
v___x_677_ = lean_array_fget_borrowed(v___y_675_, v_lo_651_);
v___x_678_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_676_, v___x_677_);
if (v___x_678_ == 0)
{
v___y_669_ = v___y_675_;
goto v___jp_668_;
}
else
{
lean_object* v___x_679_; 
v___x_679_ = lean_array_fswap(v___y_675_, v_lo_651_, v_hi_652_);
v___y_669_ = v___x_679_;
goto v___jp_668_;
}
}
}
v___jp_653_:
{
lean_object* v_pivot_655_; lean_object* v___x_656_; lean_object* v_fst_657_; lean_object* v_snd_658_; uint8_t v___x_659_; 
v_pivot_655_ = lean_array_fget(v___y_654_, v_hi_652_);
lean_inc_n(v_lo_651_, 2);
v___x_656_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_652_, v_pivot_655_, v___y_654_, v_lo_651_, v_lo_651_);
lean_dec(v_pivot_655_);
v_fst_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_fst_657_);
v_snd_658_ = lean_ctor_get(v___x_656_, 1);
lean_inc(v_snd_658_);
lean_dec_ref(v___x_656_);
v___x_659_ = lean_nat_dec_le(v_hi_652_, v_fst_657_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_660_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_649_, v_snd_658_, v_lo_651_, v_fst_657_);
v___x_661_ = lean_unsigned_to_nat(1u);
v___x_662_ = lean_nat_add(v_fst_657_, v___x_661_);
lean_dec(v_fst_657_);
v_as_650_ = v___x_660_;
v_lo_651_ = v___x_662_;
goto _start;
}
else
{
lean_dec(v_fst_657_);
lean_dec(v_lo_651_);
return v_snd_658_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___boxed(lean_object* v_n_684_, lean_object* v_as_685_, lean_object* v_lo_686_, lean_object* v_hi_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_684_, v_as_685_, v_lo_686_, v_hi_687_);
lean_dec(v_hi_687_);
lean_dec(v_n_684_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(lean_object* v_a_689_, lean_object* v___x_690_, lean_object* v___x_691_, lean_object* v_a_692_, lean_object* v_b_693_){
_start:
{
lean_object* v_it_695_; lean_object* v_startInclusive_696_; lean_object* v_endExclusive_697_; 
if (lean_obj_tag(v_a_692_) == 0)
{
lean_object* v_currPos_701_; lean_object* v_searcher_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_725_; 
v_currPos_701_ = lean_ctor_get(v_a_692_, 0);
v_searcher_702_ = lean_ctor_get(v_a_692_, 1);
v_isSharedCheck_725_ = !lean_is_exclusive(v_a_692_);
if (v_isSharedCheck_725_ == 0)
{
v___x_704_ = v_a_692_;
v_isShared_705_ = v_isSharedCheck_725_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_searcher_702_);
lean_inc(v_currPos_701_);
lean_dec(v_a_692_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_725_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
uint8_t v_decide_706_; 
v_decide_706_ = lean_nat_dec_eq(v_searcher_702_, v___x_691_);
if (v_decide_706_ == 0)
{
uint32_t v___x_707_; uint32_t v___x_708_; uint8_t v___x_709_; 
v___x_707_ = 10;
v___x_708_ = lean_string_utf8_get_fast(v_a_689_, v_searcher_702_);
v___x_709_ = lean_uint32_dec_eq(v___x_708_, v___x_707_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_710_ = lean_string_utf8_next_fast(v_a_689_, v_searcher_702_);
lean_dec(v_searcher_702_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_710_);
v___x_712_ = v___x_704_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_currPos_701_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v___x_710_);
v___x_712_ = v_reuseFailAlloc_714_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
v_a_692_ = v___x_712_;
goto _start;
}
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_slice_718_; lean_object* v_nextIt_720_; 
v___x_715_ = lean_string_utf8_next_fast(v_a_689_, v_searcher_702_);
v___x_716_ = lean_nat_sub(v___x_715_, v_searcher_702_);
v___x_717_ = lean_nat_add(v_searcher_702_, v___x_716_);
lean_dec(v___x_716_);
v_slice_718_ = l_String_Slice_subslice_x21(v___x_690_, v_currPos_701_, v_searcher_702_);
lean_inc(v___x_717_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_717_);
lean_ctor_set(v___x_704_, 0, v___x_717_);
v_nextIt_720_ = v___x_704_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_717_);
v_nextIt_720_ = v_reuseFailAlloc_723_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v_startInclusive_721_; lean_object* v_endExclusive_722_; 
v_startInclusive_721_ = lean_ctor_get(v_slice_718_, 0);
lean_inc(v_startInclusive_721_);
v_endExclusive_722_ = lean_ctor_get(v_slice_718_, 1);
lean_inc(v_endExclusive_722_);
lean_dec_ref(v_slice_718_);
v_it_695_ = v_nextIt_720_;
v_startInclusive_696_ = v_startInclusive_721_;
v_endExclusive_697_ = v_endExclusive_722_;
goto v___jp_694_;
}
}
}
else
{
lean_object* v___x_724_; 
lean_del_object(v___x_704_);
lean_dec(v_searcher_702_);
v___x_724_ = lean_box(1);
lean_inc(v___x_691_);
v_it_695_ = v___x_724_;
v_startInclusive_696_ = v_currPos_701_;
v_endExclusive_697_ = v___x_691_;
goto v___jp_694_;
}
}
}
else
{
lean_dec(v___x_691_);
lean_dec_ref(v_a_689_);
return v_b_693_;
}
v___jp_694_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
lean_inc_ref(v_a_689_);
v___x_698_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_698_, 0, v_a_689_);
lean_ctor_set(v___x_698_, 1, v_startInclusive_696_);
lean_ctor_set(v___x_698_, 2, v_endExclusive_697_);
v___x_699_ = lean_array_push(v_b_693_, v___x_698_);
v_a_692_ = v_it_695_;
v_b_693_ = v___x_699_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg___boxed(lean_object* v_a_726_, lean_object* v___x_727_, lean_object* v___x_728_, lean_object* v_a_729_, lean_object* v_b_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_726_, v___x_727_, v___x_728_, v_a_729_, v_b_730_);
lean_dec_ref(v___x_727_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(size_t v_sz_732_, size_t v_i_733_, lean_object* v_bs_734_){
_start:
{
uint8_t v___x_735_; 
v___x_735_ = lean_usize_dec_lt(v_i_733_, v_sz_732_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
v___x_736_ = l_unsafeCast___redArg(v_bs_734_);
lean_dec_ref(v_bs_734_);
return v___x_736_;
}
else
{
lean_object* v_v_737_; lean_object* v___x_738_; lean_object* v_bs_x27_739_; lean_object* v___x_740_; lean_object* v___x_741_; size_t v___x_742_; size_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v_v_737_ = lean_array_uget(v_bs_734_, v_i_733_);
v___x_738_ = lean_unsigned_to_nat(0u);
v_bs_x27_739_ = lean_array_uset(v_bs_734_, v_i_733_, v___x_738_);
v___x_740_ = l_unsafeCast___redArg(v_v_737_);
lean_dec(v_v_737_);
v___x_741_ = l_String_Slice_toString(v___x_740_);
lean_dec(v___x_740_);
v___x_742_ = ((size_t)1ULL);
v___x_743_ = lean_usize_add(v_i_733_, v___x_742_);
v___x_744_ = l_unsafeCast___redArg(v___x_741_);
lean_dec_ref(v___x_741_);
v___x_745_ = lean_array_uset(v_bs_x27_739_, v_i_733_, v___x_744_);
v_i_733_ = v___x_743_;
v_bs_734_ = v___x_745_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9___boxed(lean_object* v_sz_747_, lean_object* v_i_748_, lean_object* v_bs_749_){
_start:
{
size_t v_sz_boxed_750_; size_t v_i_boxed_751_; lean_object* v_res_752_; 
v_sz_boxed_750_ = lean_unbox_usize(v_sz_747_);
lean_dec(v_sz_747_);
v_i_boxed_751_ = lean_unbox_usize(v_i_748_);
lean_dec(v_i_748_);
v_res_752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(v_sz_boxed_750_, v_i_boxed_751_, v_bs_749_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(lean_object* v_x_753_, lean_object* v_x_754_){
_start:
{
if (lean_obj_tag(v_x_754_) == 0)
{
return v_x_753_;
}
else
{
lean_object* v_key_755_; lean_object* v_value_756_; lean_object* v_tail_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_780_; 
v_key_755_ = lean_ctor_get(v_x_754_, 0);
v_value_756_ = lean_ctor_get(v_x_754_, 1);
v_tail_757_ = lean_ctor_get(v_x_754_, 2);
v_isSharedCheck_780_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_780_ == 0)
{
v___x_759_ = v_x_754_;
v_isShared_760_ = v_isSharedCheck_780_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_tail_757_);
lean_inc(v_value_756_);
lean_inc(v_key_755_);
lean_dec(v_x_754_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_780_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_761_; uint64_t v___x_762_; uint64_t v___x_763_; uint64_t v___x_764_; uint64_t v_fold_765_; uint64_t v___x_766_; uint64_t v___x_767_; uint64_t v___x_768_; size_t v___x_769_; size_t v___x_770_; size_t v___x_771_; size_t v___x_772_; size_t v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_761_ = lean_array_get_size(v_x_753_);
v___x_762_ = lean_uint64_of_nat(v_key_755_);
v___x_763_ = 32ULL;
v___x_764_ = lean_uint64_shift_right(v___x_762_, v___x_763_);
v_fold_765_ = lean_uint64_xor(v___x_762_, v___x_764_);
v___x_766_ = 16ULL;
v___x_767_ = lean_uint64_shift_right(v_fold_765_, v___x_766_);
v___x_768_ = lean_uint64_xor(v_fold_765_, v___x_767_);
v___x_769_ = lean_uint64_to_usize(v___x_768_);
v___x_770_ = lean_usize_of_nat(v___x_761_);
v___x_771_ = ((size_t)1ULL);
v___x_772_ = lean_usize_sub(v___x_770_, v___x_771_);
v___x_773_ = lean_usize_land(v___x_769_, v___x_772_);
v___x_774_ = lean_array_uget_borrowed(v_x_753_, v___x_773_);
lean_inc(v___x_774_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 2, v___x_774_);
v___x_776_ = v___x_759_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_key_755_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_value_756_);
lean_ctor_set(v_reuseFailAlloc_779_, 2, v___x_774_);
v___x_776_ = v_reuseFailAlloc_779_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; 
v___x_777_ = lean_array_uset(v_x_753_, v___x_773_, v___x_776_);
v_x_753_ = v___x_777_;
v_x_754_ = v_tail_757_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(lean_object* v_i_781_, lean_object* v_source_782_, lean_object* v_target_783_){
_start:
{
lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_784_ = lean_array_get_size(v_source_782_);
v___x_785_ = lean_nat_dec_lt(v_i_781_, v___x_784_);
if (v___x_785_ == 0)
{
lean_dec_ref(v_source_782_);
lean_dec(v_i_781_);
return v_target_783_;
}
else
{
lean_object* v_es_786_; lean_object* v___x_787_; lean_object* v_source_788_; lean_object* v_target_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_es_786_ = lean_array_fget(v_source_782_, v_i_781_);
v___x_787_ = lean_box(0);
v_source_788_ = lean_array_fset(v_source_782_, v_i_781_, v___x_787_);
v_target_789_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(v_target_783_, v_es_786_);
v___x_790_ = lean_unsigned_to_nat(1u);
v___x_791_ = lean_nat_add(v_i_781_, v___x_790_);
lean_dec(v_i_781_);
v_i_781_ = v___x_791_;
v_source_782_ = v_source_788_;
v_target_783_ = v_target_789_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(lean_object* v_data_793_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v_nbuckets_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_794_ = lean_array_get_size(v_data_793_);
v___x_795_ = lean_unsigned_to_nat(2u);
v_nbuckets_796_ = lean_nat_mul(v___x_794_, v___x_795_);
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = lean_box(0);
v___x_799_ = lean_mk_array(v_nbuckets_796_, v___x_798_);
v___x_800_ = lean_array_propagate_mark(v_data_793_, v___x_799_);
v___x_801_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(v___x_797_, v_data_793_, v___x_800_);
return v___x_801_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(lean_object* v_a_802_, lean_object* v_x_803_){
_start:
{
if (lean_obj_tag(v_x_803_) == 0)
{
uint8_t v___x_804_; 
v___x_804_ = 0;
return v___x_804_;
}
else
{
lean_object* v_key_805_; lean_object* v_tail_806_; uint8_t v___x_807_; 
v_key_805_ = lean_ctor_get(v_x_803_, 0);
v_tail_806_ = lean_ctor_get(v_x_803_, 2);
v___x_807_ = lean_nat_dec_eq(v_key_805_, v_a_802_);
if (v___x_807_ == 0)
{
v_x_803_ = v_tail_806_;
goto _start;
}
else
{
return v___x_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg___boxed(lean_object* v_a_809_, lean_object* v_x_810_){
_start:
{
uint8_t v_res_811_; lean_object* v_r_812_; 
v_res_811_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_809_, v_x_810_);
lean_dec(v_x_810_);
lean_dec(v_a_809_);
v_r_812_ = lean_box(v_res_811_);
return v_r_812_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(lean_object* v_a_813_, lean_object* v_b_814_, lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_dec(v_b_814_);
lean_dec(v_a_813_);
return v_x_815_;
}
else
{
lean_object* v_key_816_; lean_object* v_value_817_; lean_object* v_tail_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_830_; 
v_key_816_ = lean_ctor_get(v_x_815_, 0);
v_value_817_ = lean_ctor_get(v_x_815_, 1);
v_tail_818_ = lean_ctor_get(v_x_815_, 2);
v_isSharedCheck_830_ = !lean_is_exclusive(v_x_815_);
if (v_isSharedCheck_830_ == 0)
{
v___x_820_ = v_x_815_;
v_isShared_821_ = v_isSharedCheck_830_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_tail_818_);
lean_inc(v_value_817_);
lean_inc(v_key_816_);
lean_dec(v_x_815_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_830_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
uint8_t v___x_822_; 
v___x_822_ = lean_nat_dec_eq(v_key_816_, v_a_813_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; lean_object* v___x_825_; 
v___x_823_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_813_, v_b_814_, v_tail_818_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 2, v___x_823_);
v___x_825_ = v___x_820_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_key_816_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v_value_817_);
lean_ctor_set(v_reuseFailAlloc_826_, 2, v___x_823_);
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
lean_dec(v_value_817_);
lean_dec(v_key_816_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v_b_814_);
lean_ctor_set(v___x_820_, 0, v_a_813_);
v___x_828_ = v___x_820_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_813_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v_b_814_);
lean_ctor_set(v_reuseFailAlloc_829_, 2, v_tail_818_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(lean_object* v_m_831_, lean_object* v_a_832_, lean_object* v_b_833_){
_start:
{
lean_object* v_size_834_; lean_object* v_buckets_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_878_; 
v_size_834_ = lean_ctor_get(v_m_831_, 0);
v_buckets_835_ = lean_ctor_get(v_m_831_, 1);
v_isSharedCheck_878_ = !lean_is_exclusive(v_m_831_);
if (v_isSharedCheck_878_ == 0)
{
v___x_837_ = v_m_831_;
v_isShared_838_ = v_isSharedCheck_878_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_buckets_835_);
lean_inc(v_size_834_);
lean_dec(v_m_831_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_878_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; uint64_t v___x_840_; uint64_t v___x_841_; uint64_t v___x_842_; uint64_t v_fold_843_; uint64_t v___x_844_; uint64_t v___x_845_; uint64_t v___x_846_; size_t v___x_847_; size_t v___x_848_; size_t v___x_849_; size_t v___x_850_; size_t v___x_851_; lean_object* v_bkt_852_; uint8_t v___x_853_; 
v___x_839_ = lean_array_get_size(v_buckets_835_);
v___x_840_ = lean_uint64_of_nat(v_a_832_);
v___x_841_ = 32ULL;
v___x_842_ = lean_uint64_shift_right(v___x_840_, v___x_841_);
v_fold_843_ = lean_uint64_xor(v___x_840_, v___x_842_);
v___x_844_ = 16ULL;
v___x_845_ = lean_uint64_shift_right(v_fold_843_, v___x_844_);
v___x_846_ = lean_uint64_xor(v_fold_843_, v___x_845_);
v___x_847_ = lean_uint64_to_usize(v___x_846_);
v___x_848_ = lean_usize_of_nat(v___x_839_);
v___x_849_ = ((size_t)1ULL);
v___x_850_ = lean_usize_sub(v___x_848_, v___x_849_);
v___x_851_ = lean_usize_land(v___x_847_, v___x_850_);
v_bkt_852_ = lean_array_uget_borrowed(v_buckets_835_, v___x_851_);
v___x_853_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_832_, v_bkt_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v_size_x27_855_; lean_object* v___x_856_; lean_object* v_buckets_x27_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_854_ = lean_unsigned_to_nat(1u);
v_size_x27_855_ = lean_nat_add(v_size_834_, v___x_854_);
lean_dec(v_size_834_);
lean_inc(v_bkt_852_);
v___x_856_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_856_, 0, v_a_832_);
lean_ctor_set(v___x_856_, 1, v_b_833_);
lean_ctor_set(v___x_856_, 2, v_bkt_852_);
v_buckets_x27_857_ = lean_array_uset(v_buckets_835_, v___x_851_, v___x_856_);
v___x_858_ = lean_unsigned_to_nat(4u);
v___x_859_ = lean_nat_mul(v_size_x27_855_, v___x_858_);
v___x_860_ = lean_unsigned_to_nat(3u);
v___x_861_ = lean_nat_div(v___x_859_, v___x_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_array_get_size(v_buckets_x27_857_);
v___x_863_ = lean_nat_dec_le(v___x_861_, v___x_862_);
lean_dec(v___x_861_);
if (v___x_863_ == 0)
{
lean_object* v_val_864_; lean_object* v___x_866_; 
v_val_864_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(v_buckets_x27_857_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v_val_864_);
lean_ctor_set(v___x_837_, 0, v_size_x27_855_);
v___x_866_ = v___x_837_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_size_x27_855_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_val_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
else
{
lean_object* v___x_869_; 
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v_buckets_x27_857_);
lean_ctor_set(v___x_837_, 0, v_size_x27_855_);
v___x_869_ = v___x_837_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_size_x27_855_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_buckets_x27_857_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
else
{
lean_object* v___x_871_; lean_object* v_buckets_x27_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_876_; 
lean_inc(v_bkt_852_);
v___x_871_ = lean_box(0);
v_buckets_x27_872_ = lean_array_uset(v_buckets_835_, v___x_851_, v___x_871_);
v___x_873_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_832_, v_b_833_, v_bkt_852_);
v___x_874_ = lean_array_uset(v_buckets_x27_872_, v___x_851_, v___x_873_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v___x_874_);
v___x_876_ = v___x_837_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_size_834_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v___x_874_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(lean_object* v_a_879_, lean_object* v_as_880_, size_t v_i_881_, size_t v_stop_882_){
_start:
{
uint8_t v___x_883_; 
v___x_883_ = lean_usize_dec_eq(v_i_881_, v_stop_882_);
if (v___x_883_ == 0)
{
lean_object* v___x_884_; uint8_t v___x_885_; 
v___x_884_ = lean_array_uget_borrowed(v_as_880_, v_i_881_);
v___x_885_ = lean_name_eq(v_a_879_, v___x_884_);
if (v___x_885_ == 0)
{
size_t v___x_886_; size_t v___x_887_; 
v___x_886_ = ((size_t)1ULL);
v___x_887_ = lean_usize_add(v_i_881_, v___x_886_);
v_i_881_ = v___x_887_;
goto _start;
}
else
{
return v___x_885_;
}
}
else
{
uint8_t v___x_889_; 
v___x_889_ = 0;
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9___boxed(lean_object* v_a_890_, lean_object* v_as_891_, lean_object* v_i_892_, lean_object* v_stop_893_){
_start:
{
size_t v_i_boxed_894_; size_t v_stop_boxed_895_; uint8_t v_res_896_; lean_object* v_r_897_; 
v_i_boxed_894_ = lean_unbox_usize(v_i_892_);
lean_dec(v_i_892_);
v_stop_boxed_895_ = lean_unbox_usize(v_stop_893_);
lean_dec(v_stop_893_);
v_res_896_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(v_a_890_, v_as_891_, v_i_boxed_894_, v_stop_boxed_895_);
lean_dec_ref(v_as_891_);
lean_dec(v_a_890_);
v_r_897_ = lean_box(v_res_896_);
return v_r_897_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(lean_object* v_as_898_, lean_object* v_a_899_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; uint8_t v___x_902_; 
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = lean_array_get_size(v_as_898_);
v___x_902_ = lean_nat_dec_lt(v___x_900_, v___x_901_);
if (v___x_902_ == 0)
{
return v___x_902_;
}
else
{
if (v___x_902_ == 0)
{
return v___x_902_;
}
else
{
size_t v___x_903_; size_t v___x_904_; uint8_t v___x_905_; 
v___x_903_ = ((size_t)0ULL);
v___x_904_ = lean_usize_of_nat(v___x_901_);
v___x_905_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(v_a_899_, v_as_898_, v___x_903_, v___x_904_);
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4___boxed(lean_object* v_as_906_, lean_object* v_a_907_){
_start:
{
uint8_t v_res_908_; lean_object* v_r_909_; 
v_res_908_ = l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(v_as_906_, v_a_907_);
lean_dec(v_a_907_);
lean_dec_ref(v_as_906_);
v_r_909_ = lean_box(v_res_908_);
return v_r_909_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(lean_object* v_a_910_, lean_object* v_fallback_911_, lean_object* v_x_912_){
_start:
{
if (lean_obj_tag(v_x_912_) == 0)
{
lean_inc(v_fallback_911_);
return v_fallback_911_;
}
else
{
lean_object* v_key_913_; lean_object* v_value_914_; lean_object* v_tail_915_; uint8_t v___x_916_; 
v_key_913_ = lean_ctor_get(v_x_912_, 0);
v_value_914_ = lean_ctor_get(v_x_912_, 1);
v_tail_915_ = lean_ctor_get(v_x_912_, 2);
v___x_916_ = lean_nat_dec_eq(v_key_913_, v_a_910_);
if (v___x_916_ == 0)
{
v_x_912_ = v_tail_915_;
goto _start;
}
else
{
lean_inc(v_value_914_);
return v_value_914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg___boxed(lean_object* v_a_918_, lean_object* v_fallback_919_, lean_object* v_x_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_918_, v_fallback_919_, v_x_920_);
lean_dec(v_x_920_);
lean_dec(v_fallback_919_);
lean_dec(v_a_918_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(lean_object* v_m_922_, lean_object* v_a_923_, lean_object* v_fallback_924_){
_start:
{
lean_object* v_buckets_925_; lean_object* v___x_926_; uint64_t v___x_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v_fold_930_; uint64_t v___x_931_; uint64_t v___x_932_; uint64_t v___x_933_; size_t v___x_934_; size_t v___x_935_; size_t v___x_936_; size_t v___x_937_; size_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v_buckets_925_ = lean_ctor_get(v_m_922_, 1);
v___x_926_ = lean_array_get_size(v_buckets_925_);
v___x_927_ = lean_uint64_of_nat(v_a_923_);
v___x_928_ = 32ULL;
v___x_929_ = lean_uint64_shift_right(v___x_927_, v___x_928_);
v_fold_930_ = lean_uint64_xor(v___x_927_, v___x_929_);
v___x_931_ = 16ULL;
v___x_932_ = lean_uint64_shift_right(v_fold_930_, v___x_931_);
v___x_933_ = lean_uint64_xor(v_fold_930_, v___x_932_);
v___x_934_ = lean_uint64_to_usize(v___x_933_);
v___x_935_ = lean_usize_of_nat(v___x_926_);
v___x_936_ = ((size_t)1ULL);
v___x_937_ = lean_usize_sub(v___x_935_, v___x_936_);
v___x_938_ = lean_usize_land(v___x_934_, v___x_937_);
v___x_939_ = lean_array_uget_borrowed(v_buckets_925_, v___x_938_);
v___x_940_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_923_, v_fallback_924_, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg___boxed(lean_object* v_m_941_, lean_object* v_a_942_, lean_object* v_fallback_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_m_941_, v_a_942_, v_fallback_943_);
lean_dec(v_fallback_943_);
lean_dec(v_a_942_);
lean_dec_ref(v_m_941_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(lean_object* v_as_947_, size_t v_sz_948_, size_t v_i_949_, lean_object* v_b_950_){
_start:
{
lean_object* v_a_953_; uint8_t v___x_957_; 
v___x_957_ = lean_usize_dec_lt(v_i_949_, v_sz_948_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v_b_950_);
return v___x_958_;
}
else
{
lean_object* v_a_959_; lean_object* v_fst_960_; lean_object* v_snd_961_; lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v_a_959_ = lean_array_uget_borrowed(v_as_947_, v_i_949_);
v_fst_960_ = lean_ctor_get(v_a_959_, 0);
v_snd_961_ = lean_ctor_get(v_a_959_, 1);
v___x_962_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_963_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_b_950_, v_fst_960_, v___x_962_);
v___x_964_ = l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(v___x_963_, v_snd_961_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_966_; 
lean_inc(v_snd_961_);
v___x_965_ = lean_array_push(v___x_963_, v_snd_961_);
lean_inc(v_fst_960_);
v___x_966_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(v_b_950_, v_fst_960_, v___x_965_);
v_a_953_ = v___x_966_;
goto v___jp_952_;
}
else
{
lean_dec(v___x_963_);
v_a_953_ = v_b_950_;
goto v___jp_952_;
}
}
v___jp_952_:
{
size_t v___x_954_; size_t v___x_955_; 
v___x_954_ = ((size_t)1ULL);
v___x_955_ = lean_usize_add(v_i_949_, v___x_954_);
v_i_949_ = v___x_955_;
v_b_950_ = v_a_953_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___boxed(lean_object* v_as_967_, lean_object* v_sz_968_, lean_object* v_i_969_, lean_object* v_b_970_, lean_object* v___y_971_){
_start:
{
size_t v_sz_boxed_972_; size_t v_i_boxed_973_; lean_object* v_res_974_; 
v_sz_boxed_972_ = lean_unbox_usize(v_sz_968_);
lean_dec(v_sz_968_);
v_i_boxed_973_ = lean_unbox_usize(v_i_969_);
lean_dec(v_i_969_);
v_res_974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(v_as_967_, v_sz_boxed_972_, v_i_boxed_973_, v_b_970_);
lean_dec_ref(v_as_967_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(lean_object* v_s_975_){
_start:
{
lean_object* v___x_977_; lean_object* v_putStr_978_; lean_object* v___x_979_; 
v___x_977_ = lean_get_stdout();
v_putStr_978_ = lean_ctor_get(v___x_977_, 4);
lean_inc_ref(v_putStr_978_);
lean_dec_ref(v___x_977_);
v___x_979_ = lean_apply_2(v_putStr_978_, v_s_975_, lean_box(0));
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23___boxed(lean_object* v_s_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v_s_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(lean_object* v_s_983_){
_start:
{
uint32_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_985_ = 10;
v___x_986_ = lean_string_push(v_s_983_, v___x_985_);
v___x_987_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13___boxed(lean_object* v_s_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v_s_988_);
return v_res_990_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(uint8_t v___x_991_, lean_object* v_a_992_, lean_object* v_b_993_){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_994_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_992_, v___x_991_);
v___x_995_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_b_993_, v___x_991_);
v___x_996_ = lean_string_dec_lt(v___x_994_, v___x_995_);
lean_dec_ref(v___x_995_);
lean_dec_ref(v___x_994_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0___boxed(lean_object* v___x_997_, lean_object* v_a_998_, lean_object* v_b_999_){
_start:
{
uint8_t v___x_11604__boxed_1000_; uint8_t v_res_1001_; lean_object* v_r_1002_; 
v___x_11604__boxed_1000_ = lean_unbox(v___x_997_);
v_res_1001_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_11604__boxed_1000_, v_a_998_, v_b_999_);
v_r_1002_ = lean_box(v_res_1001_);
return v_r_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(lean_object* v___x_1003_, lean_object* v___x_1004_, lean_object* v_hi_1005_, lean_object* v_pivot_1006_, lean_object* v_as_1007_, lean_object* v_i_1008_, lean_object* v_k_1009_){
_start:
{
uint8_t v___x_1010_; 
v___x_1010_ = lean_nat_dec_lt(v_k_1009_, v_hi_1005_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_dec(v_k_1009_);
lean_dec(v_pivot_1006_);
v___x_1011_ = lean_array_fswap(v_as_1007_, v_i_1008_, v_hi_1005_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v_i_1008_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
return v___x_1012_;
}
else
{
uint8_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1013_ = lean_nat_dec_lt(v___x_1003_, v___x_1004_);
v___x_1014_ = lean_array_fget_borrowed(v_as_1007_, v_k_1009_);
lean_inc(v___x_1014_);
v___x_1015_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1014_, v___x_1013_);
lean_inc(v_pivot_1006_);
v___x_1016_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pivot_1006_, v___x_1013_);
v___x_1017_ = lean_string_dec_lt(v___x_1015_, v___x_1016_);
lean_dec_ref(v___x_1016_);
lean_dec_ref(v___x_1015_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_unsigned_to_nat(1u);
v___x_1019_ = lean_nat_add(v_k_1009_, v___x_1018_);
lean_dec(v_k_1009_);
v_k_1009_ = v___x_1019_;
goto _start;
}
else
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1021_ = lean_array_fswap(v_as_1007_, v_i_1008_, v_k_1009_);
v___x_1022_ = lean_unsigned_to_nat(1u);
v___x_1023_ = lean_nat_add(v_i_1008_, v___x_1022_);
lean_dec(v_i_1008_);
v___x_1024_ = lean_nat_add(v_k_1009_, v___x_1022_);
lean_dec(v_k_1009_);
v_as_1007_ = v___x_1021_;
v_i_1008_ = v___x_1023_;
v_k_1009_ = v___x_1024_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg___boxed(lean_object* v___x_1026_, lean_object* v___x_1027_, lean_object* v_hi_1028_, lean_object* v_pivot_1029_, lean_object* v_as_1030_, lean_object* v_i_1031_, lean_object* v_k_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_1026_, v___x_1027_, v_hi_1028_, v_pivot_1029_, v_as_1030_, v_i_1031_, v_k_1032_);
lean_dec(v_hi_1028_);
lean_dec(v___x_1027_);
lean_dec(v___x_1026_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(lean_object* v___x_1034_, lean_object* v___x_1035_, lean_object* v_n_1036_, lean_object* v_as_1037_, lean_object* v_lo_1038_, lean_object* v_hi_1039_){
_start:
{
lean_object* v___y_1041_; uint8_t v___x_1051_; 
v___x_1051_ = lean_nat_dec_lt(v_lo_1038_, v_hi_1039_);
if (v___x_1051_ == 0)
{
lean_dec(v_lo_1038_);
return v_as_1037_;
}
else
{
uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v_mid_1055_; lean_object* v___y_1057_; lean_object* v___y_1063_; lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1052_ = lean_nat_dec_lt(v___x_1034_, v___x_1035_);
v___x_1053_ = lean_nat_add(v_lo_1038_, v_hi_1039_);
v___x_1054_ = lean_unsigned_to_nat(1u);
v_mid_1055_ = lean_nat_shiftr(v___x_1053_, v___x_1054_);
lean_dec(v___x_1053_);
v___x_1068_ = lean_array_fget_borrowed(v_as_1037_, v_mid_1055_);
v___x_1069_ = lean_array_fget_borrowed(v_as_1037_, v_lo_1038_);
lean_inc(v___x_1069_);
lean_inc(v___x_1068_);
v___x_1070_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1052_, v___x_1068_, v___x_1069_);
if (v___x_1070_ == 0)
{
v___y_1063_ = v_as_1037_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_array_fswap(v_as_1037_, v_lo_1038_, v_mid_1055_);
v___y_1063_ = v___x_1071_;
goto v___jp_1062_;
}
v___jp_1056_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v___x_1058_ = lean_array_fget_borrowed(v___y_1057_, v_mid_1055_);
v___x_1059_ = lean_array_fget_borrowed(v___y_1057_, v_hi_1039_);
lean_inc(v___x_1059_);
lean_inc(v___x_1058_);
v___x_1060_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1052_, v___x_1058_, v___x_1059_);
if (v___x_1060_ == 0)
{
lean_dec(v_mid_1055_);
v___y_1041_ = v___y_1057_;
goto v___jp_1040_;
}
else
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_array_fswap(v___y_1057_, v_mid_1055_, v_hi_1039_);
lean_dec(v_mid_1055_);
v___y_1041_ = v___x_1061_;
goto v___jp_1040_;
}
}
v___jp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1064_ = lean_array_fget_borrowed(v___y_1063_, v_hi_1039_);
v___x_1065_ = lean_array_fget_borrowed(v___y_1063_, v_lo_1038_);
lean_inc(v___x_1065_);
lean_inc(v___x_1064_);
v___x_1066_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1052_, v___x_1064_, v___x_1065_);
if (v___x_1066_ == 0)
{
v___y_1057_ = v___y_1063_;
goto v___jp_1056_;
}
else
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_array_fswap(v___y_1063_, v_lo_1038_, v_hi_1039_);
v___y_1057_ = v___x_1067_;
goto v___jp_1056_;
}
}
}
v___jp_1040_:
{
lean_object* v_pivot_1042_; lean_object* v___x_1043_; lean_object* v_fst_1044_; lean_object* v_snd_1045_; uint8_t v___x_1046_; 
v_pivot_1042_ = lean_array_fget(v___y_1041_, v_hi_1039_);
lean_inc_n(v_lo_1038_, 2);
v___x_1043_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_1034_, v___x_1035_, v_hi_1039_, v_pivot_1042_, v___y_1041_, v_lo_1038_, v_lo_1038_);
v_fst_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_fst_1044_);
v_snd_1045_ = lean_ctor_get(v___x_1043_, 1);
lean_inc(v_snd_1045_);
lean_dec_ref(v___x_1043_);
v___x_1046_ = lean_nat_dec_le(v_hi_1039_, v_fst_1044_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1047_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1034_, v___x_1035_, v_n_1036_, v_snd_1045_, v_lo_1038_, v_fst_1044_);
v___x_1048_ = lean_unsigned_to_nat(1u);
v___x_1049_ = lean_nat_add(v_fst_1044_, v___x_1048_);
lean_dec(v_fst_1044_);
v_as_1037_ = v___x_1047_;
v_lo_1038_ = v___x_1049_;
goto _start;
}
else
{
lean_dec(v_fst_1044_);
lean_dec(v_lo_1038_);
return v_snd_1045_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___boxed(lean_object* v___x_1072_, lean_object* v___x_1073_, lean_object* v_n_1074_, lean_object* v_as_1075_, lean_object* v_lo_1076_, lean_object* v_hi_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1072_, v___x_1073_, v_n_1074_, v_as_1075_, v_lo_1076_, v_hi_1077_);
lean_dec(v_hi_1077_);
lean_dec(v_n_1074_);
lean_dec(v___x_1073_);
lean_dec(v___x_1072_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(lean_object* v___x_1081_, lean_object* v___x_1082_, lean_object* v___x_1083_, size_t v_sz_1084_, size_t v_i_1085_, lean_object* v_bs_1086_){
_start:
{
uint8_t v___x_1087_; 
v___x_1087_ = lean_usize_dec_lt(v_i_1085_, v_sz_1084_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; 
lean_dec_ref(v___x_1081_);
v___x_1088_ = l_unsafeCast___redArg(v_bs_1086_);
lean_dec_ref(v_bs_1086_);
return v___x_1088_;
}
else
{
uint8_t v___x_1089_; lean_object* v_v_1090_; lean_object* v___x_1091_; lean_object* v_bs_x27_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; size_t v___x_1102_; size_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1089_ = lean_nat_dec_lt(v___x_1082_, v___x_1083_);
v_v_1090_ = lean_array_uget(v_bs_1086_, v_i_1085_);
v___x_1091_ = lean_unsigned_to_nat(0u);
v_bs_x27_1092_ = lean_array_uset(v_bs_1086_, v_i_1085_, v___x_1091_);
v___x_1093_ = l_unsafeCast___redArg(v_v_1090_);
lean_dec(v_v_1090_);
v___x_1094_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0));
lean_inc_ref(v___x_1081_);
v___x_1095_ = lean_string_append(v___x_1081_, v___x_1094_);
v___x_1096_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1093_, v___x_1089_);
v___x_1097_ = lean_string_append(v___x_1095_, v___x_1096_);
lean_dec_ref(v___x_1096_);
v___x_1098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1));
v___x_1099_ = lean_string_append(v___x_1097_, v___x_1098_);
v___x_1100_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0));
v___x_1101_ = lean_string_append(v___x_1099_, v___x_1100_);
v___x_1102_ = ((size_t)1ULL);
v___x_1103_ = lean_usize_add(v_i_1085_, v___x_1102_);
v___x_1104_ = l_unsafeCast___redArg(v___x_1101_);
lean_dec_ref(v___x_1101_);
v___x_1105_ = lean_array_uset(v_bs_x27_1092_, v_i_1085_, v___x_1104_);
v_i_1085_ = v___x_1103_;
v_bs_1086_ = v___x_1105_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___boxed(lean_object* v___x_1107_, lean_object* v___x_1108_, lean_object* v___x_1109_, lean_object* v_sz_1110_, lean_object* v_i_1111_, lean_object* v_bs_1112_){
_start:
{
size_t v_sz_boxed_1113_; size_t v_i_boxed_1114_; lean_object* v_res_1115_; 
v_sz_boxed_1113_ = lean_unbox_usize(v_sz_1110_);
lean_dec(v_sz_1110_);
v_i_boxed_1114_ = lean_unbox_usize(v_i_1111_);
lean_dec(v_i_1111_);
v_res_1115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(v___x_1107_, v___x_1108_, v___x_1109_, v_sz_boxed_1113_, v_i_boxed_1114_, v_bs_1112_);
lean_dec(v___x_1109_);
lean_dec(v___x_1108_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(lean_object* v_as_1116_, size_t v_sz_1117_, size_t v_i_1118_, lean_object* v_b_1119_){
_start:
{
lean_object* v_a_1122_; uint8_t v___x_1126_; 
v___x_1126_ = lean_usize_dec_lt(v_i_1118_, v_sz_1117_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1127_, 0, v_b_1119_);
return v___x_1127_;
}
else
{
lean_object* v_a_1128_; lean_object* v_fst_1129_; lean_object* v_snd_1130_; lean_object* v_fst_1131_; lean_object* v_snd_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1173_; 
v_a_1128_ = lean_array_uget_borrowed(v_as_1116_, v_i_1118_);
v_fst_1129_ = lean_ctor_get(v_a_1128_, 0);
v_snd_1130_ = lean_ctor_get(v_a_1128_, 1);
v_fst_1131_ = lean_ctor_get(v_b_1119_, 0);
v_snd_1132_ = lean_ctor_get(v_b_1119_, 1);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_b_1119_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1134_ = v_b_1119_;
v_isShared_1135_ = v_isSharedCheck_1173_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_snd_1132_);
lean_inc(v_fst_1131_);
lean_dec(v_b_1119_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1173_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1136_ = lean_unsigned_to_nat(1u);
v___x_1137_ = lean_nat_sub(v_fst_1129_, v___x_1136_);
v___x_1138_ = lean_array_get_size(v_fst_1131_);
v___x_1139_ = lean_nat_dec_lt(v___x_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1141_; 
lean_dec(v___x_1137_);
if (v_isShared_1135_ == 0)
{
v___x_1141_ = v___x_1134_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_fst_1131_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_snd_1132_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
v_a_1122_ = v___x_1141_;
goto v___jp_1121_;
}
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___y_1147_; lean_object* v___x_1162_; lean_object* v___y_1164_; lean_object* v___y_1165_; uint8_t v___x_1167_; 
v___x_1143_ = lean_unsigned_to_nat(0u);
v___x_1144_ = lean_array_fget_borrowed(v_fst_1131_, v___x_1137_);
v___x_1145_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(v___x_1144_);
v___x_1162_ = lean_array_get_size(v_snd_1130_);
v___x_1167_ = lean_nat_dec_eq(v___x_1162_, v___x_1143_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; lean_object* v___y_1170_; uint8_t v___x_1172_; 
v___x_1168_ = lean_nat_sub(v___x_1162_, v___x_1136_);
v___x_1172_ = lean_nat_dec_le(v___x_1143_, v___x_1168_);
if (v___x_1172_ == 0)
{
lean_inc(v___x_1168_);
v___y_1170_ = v___x_1168_;
goto v___jp_1169_;
}
else
{
v___y_1170_ = v___x_1143_;
goto v___jp_1169_;
}
v___jp_1169_:
{
uint8_t v___x_1171_; 
v___x_1171_ = lean_nat_dec_le(v___y_1170_, v___x_1168_);
if (v___x_1171_ == 0)
{
lean_dec(v___x_1168_);
lean_inc(v___y_1170_);
v___y_1164_ = v___y_1170_;
v___y_1165_ = v___y_1170_;
goto v___jp_1163_;
}
else
{
v___y_1164_ = v___y_1170_;
v___y_1165_ = v___x_1168_;
goto v___jp_1163_;
}
}
}
else
{
lean_inc(v_snd_1130_);
v___y_1147_ = v_snd_1130_;
goto v___jp_1146_;
}
v___jp_1146_:
{
size_t v_sz_1148_; size_t v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v_sz_1148_ = lean_array_size(v___y_1147_);
v___x_1149_ = ((size_t)0ULL);
v___x_1150_ = l_unsafeCast___redArg(v___y_1147_);
lean_dec_ref(v___y_1147_);
v___x_1151_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(v___x_1145_, v___x_1137_, v___x_1138_, v_sz_1148_, v___x_1149_, v___x_1150_);
v___x_1152_ = l_unsafeCast___redArg(v___x_1151_);
lean_dec_ref(v___x_1151_);
lean_inc(v___x_1137_);
v___x_1153_ = l_Array_extract___redArg(v_fst_1131_, v___x_1143_, v___x_1137_);
v___x_1154_ = l_Array_append___redArg(v___x_1153_, v___x_1152_);
v___x_1155_ = l_Array_extract___redArg(v_fst_1131_, v___x_1137_, v___x_1138_);
lean_dec(v_fst_1131_);
v___x_1156_ = l_Array_append___redArg(v___x_1154_, v___x_1155_);
lean_dec_ref(v___x_1155_);
v___x_1157_ = lean_array_get_size(v___x_1152_);
lean_dec(v___x_1152_);
v___x_1158_ = lean_nat_add(v_snd_1132_, v___x_1157_);
lean_dec(v_snd_1132_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 1, v___x_1158_);
lean_ctor_set(v___x_1134_, 0, v___x_1156_);
v___x_1160_ = v___x_1134_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1156_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
v_a_1122_ = v___x_1160_;
goto v___jp_1121_;
}
}
v___jp_1163_:
{
lean_object* v___x_1166_; 
lean_inc(v_snd_1130_);
v___x_1166_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1137_, v___x_1138_, v___x_1162_, v_snd_1130_, v___y_1164_, v___y_1165_);
lean_dec(v___y_1165_);
v___y_1147_ = v___x_1166_;
goto v___jp_1146_;
}
}
}
}
v___jp_1121_:
{
size_t v___x_1123_; size_t v___x_1124_; 
v___x_1123_ = ((size_t)1ULL);
v___x_1124_ = lean_usize_add(v_i_1118_, v___x_1123_);
v_i_1118_ = v___x_1124_;
v_b_1119_ = v_a_1122_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12___boxed(lean_object* v_as_1174_, lean_object* v_sz_1175_, lean_object* v_i_1176_, lean_object* v_b_1177_, lean_object* v___y_1178_){
_start:
{
size_t v_sz_boxed_1179_; size_t v_i_boxed_1180_; lean_object* v_res_1181_; 
v_sz_boxed_1179_ = lean_unbox_usize(v_sz_1175_);
lean_dec(v_sz_1175_);
v_i_boxed_1180_ = lean_unbox_usize(v_i_1176_);
lean_dec(v_i_1176_);
v_res_1181_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(v_as_1174_, v_sz_boxed_1179_, v_i_boxed_1180_, v_b_1177_);
lean_dec_ref(v_as_1174_);
return v_res_1181_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_unsigned_to_nat(16u);
v___x_1186_ = lean_mk_array(v___x_1185_, v___x_1184_);
return v___x_1186_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2);
v___x_1188_ = lean_unsigned_to_nat(0u);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set(v___x_1189_, 1, v___x_1187_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(lean_object* v_as_1198_, size_t v_sz_1199_, size_t v_i_1200_, lean_object* v_b_1201_){
_start:
{
lean_object* v_a_1204_; uint8_t v___x_1208_; 
v___x_1208_ = lean_usize_dec_lt(v_i_1200_, v_sz_1199_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1209_, 0, v_b_1201_);
return v___x_1209_;
}
else
{
lean_object* v_a_1210_; lean_object* v_snd_1211_; lean_object* v_fst_1212_; lean_object* v_snd_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1322_; 
v_a_1210_ = lean_array_uget_borrowed(v_as_1198_, v_i_1200_);
v_snd_1211_ = lean_ctor_get(v_a_1210_, 1);
lean_inc(v_snd_1211_);
v_fst_1212_ = lean_ctor_get(v_snd_1211_, 0);
v_snd_1213_ = lean_ctor_get(v_snd_1211_, 1);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_snd_1211_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1215_ = v_snd_1211_;
v_isShared_1216_ = v_isSharedCheck_1322_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_snd_1213_);
lean_inc(v_fst_1212_);
lean_dec(v_snd_1211_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1322_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1217_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___x_1231_; lean_object* v___x_1232_; size_t v_sz_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1217_ = lean_box(0);
v___x_1231_ = lean_unsigned_to_nat(0u);
v___x_1232_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3);
v_sz_1233_ = lean_array_size(v_snd_1213_);
v___x_1234_ = ((size_t)0ULL);
v___x_1235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(v_snd_1213_, v_sz_1233_, v___x_1234_, v___x_1232_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1237_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1237_ = l_IO_FS_readFile(v_fst_1212_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1239_; lean_object* v_size_1240_; lean_object* v_buckets_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; size_t v_sz_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1293_; lean_object* v___x_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
lean_dec(v_snd_1213_);
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc_n(v_a_1238_, 2);
lean_dec_ref_known(v___x_1237_, 1);
v___x_1239_ = lean_string_utf8_byte_size(v_a_1238_);
v_size_1240_ = lean_ctor_get(v_a_1236_, 0);
lean_inc(v_size_1240_);
v_buckets_1241_ = lean_ctor_get(v_a_1236_, 1);
lean_inc_ref(v_buckets_1241_);
lean_dec(v_a_1236_);
v___x_1242_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1242_, 0, v_a_1238_);
lean_ctor_set(v___x_1242_, 1, v___x_1231_);
lean_ctor_set(v___x_1242_, 2, v___x_1239_);
v___x_1243_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0);
v___x_1244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4));
v___x_1245_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_1238_, v___x_1242_, v___x_1239_, v___x_1243_, v___x_1244_);
lean_dec_ref_known(v___x_1242_, 3);
v_sz_1246_ = lean_array_size(v___x_1245_);
v___x_1247_ = l_unsafeCast___redArg(v___x_1245_);
lean_dec_ref(v___x_1245_);
v___x_1248_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(v_sz_1246_, v___x_1234_, v___x_1247_);
v___x_1249_ = l_unsafeCast___redArg(v___x_1248_);
lean_dec_ref(v___x_1248_);
v___x_1299_ = lean_mk_empty_array_with_capacity(v_size_1240_);
lean_dec(v_size_1240_);
v___x_1300_ = lean_array_get_size(v_buckets_1241_);
v___x_1301_ = lean_nat_dec_lt(v___x_1231_, v___x_1300_);
if (v___x_1301_ == 0)
{
lean_dec_ref(v_buckets_1241_);
v___y_1293_ = v___x_1299_;
goto v___jp_1292_;
}
else
{
size_t v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_usize_of_nat(v___x_1300_);
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(v_buckets_1241_, v___x_1234_, v___x_1302_, v___x_1299_);
lean_dec_ref(v_buckets_1241_);
v___y_1293_ = v___x_1303_;
goto v___jp_1292_;
}
v___jp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 1, v___x_1231_);
lean_ctor_set(v___x_1215_, 0, v___x_1249_);
v___x_1254_ = v___x_1215_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1249_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v___x_1231_);
v___x_1254_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
size_t v_sz_1255_; lean_object* v___x_1256_; 
v_sz_1255_ = lean_array_size(v___y_1252_);
v___x_1256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(v___y_1252_, v_sz_1255_, v___x_1234_, v___x_1254_);
lean_dec_ref(v___y_1252_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; lean_object* v_fst_1258_; lean_object* v_snd_1259_; uint8_t v___x_1260_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1256_, 1);
v_fst_1258_ = lean_ctor_get(v_a_1257_, 0);
lean_inc(v_fst_1258_);
v_snd_1259_ = lean_ctor_get(v_a_1257_, 1);
lean_inc(v_snd_1259_);
lean_dec(v_a_1257_);
v___x_1260_ = lean_nat_dec_lt(v___x_1231_, v_snd_1259_);
if (v___x_1260_ == 0)
{
lean_dec(v_snd_1259_);
lean_dec(v_fst_1258_);
lean_dec(v_fst_1212_);
v_a_1204_ = v___x_1217_;
goto v___jp_1203_;
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v___x_1261_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5));
lean_inc(v_snd_1259_);
v___x_1262_ = l_Nat_reprFast(v_snd_1259_);
v___x_1263_ = lean_string_append(v___x_1261_, v___x_1262_);
lean_dec_ref(v___x_1262_);
v___x_1264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6));
v___x_1265_ = lean_string_append(v___x_1263_, v___x_1264_);
v___x_1266_ = lean_nat_dec_eq(v_snd_1259_, v___y_1251_);
lean_dec(v_snd_1259_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; 
v___x_1267_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7));
v___y_1219_ = v___x_1265_;
v___y_1220_ = v_fst_1258_;
v___y_1221_ = v___x_1267_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1268_; 
v___x_1268_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___y_1219_ = v___x_1265_;
v___y_1220_ = v_fst_1258_;
v___y_1221_ = v___x_1268_;
goto v___jp_1218_;
}
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec(v_fst_1212_);
v_a_1269_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1256_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1256_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
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
v___jp_1278_:
{
lean_object* v___x_1284_; 
v___x_1284_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v___y_1282_, v___y_1281_, v___y_1279_, v___y_1283_);
lean_dec(v___y_1283_);
lean_dec(v___y_1282_);
v___y_1251_ = v___y_1280_;
v___y_1252_ = v___x_1284_;
goto v___jp_1250_;
}
v___jp_1285_:
{
uint8_t v___x_1291_; 
v___x_1291_ = lean_nat_dec_le(v___y_1290_, v___y_1286_);
if (v___x_1291_ == 0)
{
lean_dec(v___y_1286_);
lean_inc(v___y_1290_);
v___y_1279_ = v___y_1290_;
v___y_1280_ = v___y_1287_;
v___y_1281_ = v___y_1288_;
v___y_1282_ = v___y_1289_;
v___y_1283_ = v___y_1290_;
goto v___jp_1278_;
}
else
{
v___y_1279_ = v___y_1290_;
v___y_1280_ = v___y_1287_;
v___y_1281_ = v___y_1288_;
v___y_1282_ = v___y_1289_;
v___y_1283_ = v___y_1286_;
goto v___jp_1278_;
}
}
v___jp_1292_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1294_ = lean_unsigned_to_nat(1u);
v___x_1295_ = lean_array_get_size(v___y_1293_);
v___x_1296_ = lean_nat_dec_eq(v___x_1295_, v___x_1231_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = lean_nat_sub(v___x_1295_, v___x_1294_);
v___x_1298_ = lean_nat_dec_le(v___x_1231_, v___x_1297_);
if (v___x_1298_ == 0)
{
lean_inc(v___x_1297_);
v___y_1286_ = v___x_1297_;
v___y_1287_ = v___x_1294_;
v___y_1288_ = v___y_1293_;
v___y_1289_ = v___x_1295_;
v___y_1290_ = v___x_1297_;
goto v___jp_1285_;
}
else
{
v___y_1286_ = v___x_1297_;
v___y_1287_ = v___x_1294_;
v___y_1288_ = v___y_1293_;
v___y_1289_ = v___x_1295_;
v___y_1290_ = v___x_1231_;
goto v___jp_1285_;
}
}
else
{
v___y_1251_ = v___x_1294_;
v___y_1252_ = v___y_1293_;
goto v___jp_1250_;
}
}
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_dec_ref_known(v___x_1237_, 1);
lean_dec(v_a_1236_);
lean_del_object(v___x_1215_);
v___x_1304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8));
v___x_1305_ = lean_string_append(v___x_1304_, v_fst_1212_);
lean_dec(v_fst_1212_);
v___x_1306_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9));
v___x_1307_ = lean_string_append(v___x_1305_, v___x_1306_);
v___x_1308_ = lean_array_get_size(v_snd_1213_);
lean_dec(v_snd_1213_);
v___x_1309_ = l_Nat_reprFast(v___x_1308_);
v___x_1310_ = lean_string_append(v___x_1307_, v___x_1309_);
lean_dec_ref(v___x_1309_);
v___x_1311_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10));
v___x_1312_ = lean_string_append(v___x_1310_, v___x_1311_);
v___x_1313_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_1312_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_dec_ref_known(v___x_1313_, 1);
v_a_1204_ = v___x_1217_;
goto v___jp_1203_;
}
else
{
return v___x_1313_;
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_del_object(v___x_1215_);
lean_dec(v_snd_1213_);
lean_dec(v_fst_1212_);
v_a_1314_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1235_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1235_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
v___jp_1218_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1222_ = lean_string_append(v___y_1219_, v___y_1221_);
v___x_1223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0));
v___x_1224_ = lean_string_append(v___x_1222_, v___x_1223_);
v___x_1225_ = lean_string_append(v___x_1224_, v_fst_1212_);
v___x_1226_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_1225_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec_ref_known(v___x_1226_, 1);
v___x_1227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1));
v___x_1228_ = lean_array_to_list(v___y_1220_);
v___x_1229_ = l_String_intercalate(v___x_1227_, v___x_1228_);
v___x_1230_ = l_IO_FS_writeFile(v_fst_1212_, v___x_1229_);
lean_dec_ref(v___x_1229_);
lean_dec(v_fst_1212_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_dec_ref_known(v___x_1230_, 1);
v_a_1204_ = v___x_1217_;
goto v___jp_1203_;
}
else
{
return v___x_1230_;
}
}
else
{
lean_dec(v___y_1220_);
lean_dec(v_fst_1212_);
return v___x_1226_;
}
}
}
}
v___jp_1203_:
{
size_t v___x_1205_; size_t v___x_1206_; 
v___x_1205_ = ((size_t)1ULL);
v___x_1206_ = lean_usize_add(v_i_1200_, v___x_1205_);
v_i_1200_ = v___x_1206_;
v_b_1201_ = v_a_1204_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___boxed(lean_object* v_as_1323_, lean_object* v_sz_1324_, lean_object* v_i_1325_, lean_object* v_b_1326_, lean_object* v___y_1327_){
_start:
{
size_t v_sz_boxed_1328_; size_t v_i_boxed_1329_; lean_object* v_res_1330_; 
v_sz_boxed_1328_ = lean_unbox_usize(v_sz_1324_);
lean_dec(v_sz_1324_);
v_i_boxed_1329_ = lean_unbox_usize(v_i_1325_);
lean_dec(v_i_1325_);
v_res_1330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(v_as_1323_, v_sz_boxed_1328_, v_i_boxed_1329_, v_b_1326_);
lean_dec_ref(v_as_1323_);
return v_res_1330_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(lean_object* v_a_1331_, lean_object* v_x_1332_){
_start:
{
if (lean_obj_tag(v_x_1332_) == 0)
{
uint8_t v___x_1333_; 
v___x_1333_ = 0;
return v___x_1333_;
}
else
{
lean_object* v_key_1334_; lean_object* v_tail_1335_; uint8_t v___x_1336_; 
v_key_1334_ = lean_ctor_get(v_x_1332_, 0);
v_tail_1335_ = lean_ctor_get(v_x_1332_, 2);
v___x_1336_ = lean_string_dec_eq(v_key_1334_, v_a_1331_);
if (v___x_1336_ == 0)
{
v_x_1332_ = v_tail_1335_;
goto _start;
}
else
{
return v___x_1336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg___boxed(lean_object* v_a_1338_, lean_object* v_x_1339_){
_start:
{
uint8_t v_res_1340_; lean_object* v_r_1341_; 
v_res_1340_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1338_, v_x_1339_);
lean_dec(v_x_1339_);
lean_dec_ref(v_a_1338_);
v_r_1341_ = lean_box(v_res_1340_);
return v_r_1341_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(lean_object* v_a_1342_, lean_object* v_b_1343_, lean_object* v_x_1344_){
_start:
{
if (lean_obj_tag(v_x_1344_) == 0)
{
lean_dec(v_b_1343_);
lean_dec_ref(v_a_1342_);
return v_x_1344_;
}
else
{
lean_object* v_key_1345_; lean_object* v_value_1346_; lean_object* v_tail_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1359_; 
v_key_1345_ = lean_ctor_get(v_x_1344_, 0);
v_value_1346_ = lean_ctor_get(v_x_1344_, 1);
v_tail_1347_ = lean_ctor_get(v_x_1344_, 2);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_x_1344_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1349_ = v_x_1344_;
v_isShared_1350_ = v_isSharedCheck_1359_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_tail_1347_);
lean_inc(v_value_1346_);
lean_inc(v_key_1345_);
lean_dec(v_x_1344_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1359_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_string_dec_eq(v_key_1345_, v_a_1342_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1352_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1342_, v_b_1343_, v_tail_1347_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 2, v___x_1352_);
v___x_1354_ = v___x_1349_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_key_1345_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_value_1346_);
lean_ctor_set(v_reuseFailAlloc_1355_, 2, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
else
{
lean_object* v___x_1357_; 
lean_dec(v_value_1346_);
lean_dec(v_key_1345_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 1, v_b_1343_);
lean_ctor_set(v___x_1349_, 0, v_a_1342_);
v___x_1357_ = v___x_1349_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1342_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_b_1343_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_tail_1347_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(lean_object* v_x_1360_, lean_object* v_x_1361_){
_start:
{
if (lean_obj_tag(v_x_1361_) == 0)
{
return v_x_1360_;
}
else
{
lean_object* v_key_1362_; lean_object* v_value_1363_; lean_object* v_tail_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1387_; 
v_key_1362_ = lean_ctor_get(v_x_1361_, 0);
v_value_1363_ = lean_ctor_get(v_x_1361_, 1);
v_tail_1364_ = lean_ctor_get(v_x_1361_, 2);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_x_1361_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1366_ = v_x_1361_;
v_isShared_1367_ = v_isSharedCheck_1387_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_tail_1364_);
lean_inc(v_value_1363_);
lean_inc(v_key_1362_);
lean_dec(v_x_1361_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1387_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; uint64_t v___x_1369_; uint64_t v___x_1370_; uint64_t v___x_1371_; uint64_t v_fold_1372_; uint64_t v___x_1373_; uint64_t v___x_1374_; uint64_t v___x_1375_; size_t v___x_1376_; size_t v___x_1377_; size_t v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1368_ = lean_array_get_size(v_x_1360_);
v___x_1369_ = lean_string_hash(v_key_1362_);
v___x_1370_ = 32ULL;
v___x_1371_ = lean_uint64_shift_right(v___x_1369_, v___x_1370_);
v_fold_1372_ = lean_uint64_xor(v___x_1369_, v___x_1371_);
v___x_1373_ = 16ULL;
v___x_1374_ = lean_uint64_shift_right(v_fold_1372_, v___x_1373_);
v___x_1375_ = lean_uint64_xor(v_fold_1372_, v___x_1374_);
v___x_1376_ = lean_uint64_to_usize(v___x_1375_);
v___x_1377_ = lean_usize_of_nat(v___x_1368_);
v___x_1378_ = ((size_t)1ULL);
v___x_1379_ = lean_usize_sub(v___x_1377_, v___x_1378_);
v___x_1380_ = lean_usize_land(v___x_1376_, v___x_1379_);
v___x_1381_ = lean_array_uget_borrowed(v_x_1360_, v___x_1380_);
lean_inc(v___x_1381_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 2, v___x_1381_);
v___x_1383_ = v___x_1366_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_key_1362_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_value_1363_);
lean_ctor_set(v_reuseFailAlloc_1386_, 2, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; 
v___x_1384_ = lean_array_uset(v_x_1360_, v___x_1380_, v___x_1383_);
v_x_1360_ = v___x_1384_;
v_x_1361_ = v_tail_1364_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(lean_object* v_i_1388_, lean_object* v_source_1389_, lean_object* v_target_1390_){
_start:
{
lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = lean_array_get_size(v_source_1389_);
v___x_1392_ = lean_nat_dec_lt(v_i_1388_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_dec_ref(v_source_1389_);
lean_dec(v_i_1388_);
return v_target_1390_;
}
else
{
lean_object* v_es_1393_; lean_object* v___x_1394_; lean_object* v_source_1395_; lean_object* v_target_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v_es_1393_ = lean_array_fget(v_source_1389_, v_i_1388_);
v___x_1394_ = lean_box(0);
v_source_1395_ = lean_array_fset(v_source_1389_, v_i_1388_, v___x_1394_);
v_target_1396_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(v_target_1390_, v_es_1393_);
v___x_1397_ = lean_unsigned_to_nat(1u);
v___x_1398_ = lean_nat_add(v_i_1388_, v___x_1397_);
lean_dec(v_i_1388_);
v_i_1388_ = v___x_1398_;
v_source_1389_ = v_source_1395_;
v_target_1390_ = v_target_1396_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(lean_object* v_data_1400_){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v_nbuckets_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1401_ = lean_array_get_size(v_data_1400_);
v___x_1402_ = lean_unsigned_to_nat(2u);
v_nbuckets_1403_ = lean_nat_mul(v___x_1401_, v___x_1402_);
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = lean_box(0);
v___x_1406_ = lean_mk_array(v_nbuckets_1403_, v___x_1405_);
v___x_1407_ = lean_array_propagate_mark(v_data_1400_, v___x_1406_);
v___x_1408_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(v___x_1404_, v_data_1400_, v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(lean_object* v_m_1409_, lean_object* v_a_1410_, lean_object* v_b_1411_){
_start:
{
lean_object* v_size_1412_; lean_object* v_buckets_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1456_; 
v_size_1412_ = lean_ctor_get(v_m_1409_, 0);
v_buckets_1413_ = lean_ctor_get(v_m_1409_, 1);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_m_1409_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1415_ = v_m_1409_;
v_isShared_1416_ = v_isSharedCheck_1456_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_buckets_1413_);
lean_inc(v_size_1412_);
lean_dec(v_m_1409_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1456_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1417_; uint64_t v___x_1418_; uint64_t v___x_1419_; uint64_t v___x_1420_; uint64_t v_fold_1421_; uint64_t v___x_1422_; uint64_t v___x_1423_; uint64_t v___x_1424_; size_t v___x_1425_; size_t v___x_1426_; size_t v___x_1427_; size_t v___x_1428_; size_t v___x_1429_; lean_object* v_bkt_1430_; uint8_t v___x_1431_; 
v___x_1417_ = lean_array_get_size(v_buckets_1413_);
v___x_1418_ = lean_string_hash(v_a_1410_);
v___x_1419_ = 32ULL;
v___x_1420_ = lean_uint64_shift_right(v___x_1418_, v___x_1419_);
v_fold_1421_ = lean_uint64_xor(v___x_1418_, v___x_1420_);
v___x_1422_ = 16ULL;
v___x_1423_ = lean_uint64_shift_right(v_fold_1421_, v___x_1422_);
v___x_1424_ = lean_uint64_xor(v_fold_1421_, v___x_1423_);
v___x_1425_ = lean_uint64_to_usize(v___x_1424_);
v___x_1426_ = lean_usize_of_nat(v___x_1417_);
v___x_1427_ = ((size_t)1ULL);
v___x_1428_ = lean_usize_sub(v___x_1426_, v___x_1427_);
v___x_1429_ = lean_usize_land(v___x_1425_, v___x_1428_);
v_bkt_1430_ = lean_array_uget_borrowed(v_buckets_1413_, v___x_1429_);
v___x_1431_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1410_, v_bkt_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v_size_x27_1433_; lean_object* v___x_1434_; lean_object* v_buckets_x27_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1432_ = lean_unsigned_to_nat(1u);
v_size_x27_1433_ = lean_nat_add(v_size_1412_, v___x_1432_);
lean_dec(v_size_1412_);
lean_inc(v_bkt_1430_);
v___x_1434_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1434_, 0, v_a_1410_);
lean_ctor_set(v___x_1434_, 1, v_b_1411_);
lean_ctor_set(v___x_1434_, 2, v_bkt_1430_);
v_buckets_x27_1435_ = lean_array_uset(v_buckets_1413_, v___x_1429_, v___x_1434_);
v___x_1436_ = lean_unsigned_to_nat(4u);
v___x_1437_ = lean_nat_mul(v_size_x27_1433_, v___x_1436_);
v___x_1438_ = lean_unsigned_to_nat(3u);
v___x_1439_ = lean_nat_div(v___x_1437_, v___x_1438_);
lean_dec(v___x_1437_);
v___x_1440_ = lean_array_get_size(v_buckets_x27_1435_);
v___x_1441_ = lean_nat_dec_le(v___x_1439_, v___x_1440_);
lean_dec(v___x_1439_);
if (v___x_1441_ == 0)
{
lean_object* v_val_1442_; lean_object* v___x_1444_; 
v_val_1442_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(v_buckets_x27_1435_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v_val_1442_);
lean_ctor_set(v___x_1415_, 0, v_size_x27_1433_);
v___x_1444_ = v___x_1415_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_size_x27_1433_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_val_1442_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
else
{
lean_object* v___x_1447_; 
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v_buckets_x27_1435_);
lean_ctor_set(v___x_1415_, 0, v_size_x27_1433_);
v___x_1447_ = v___x_1415_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_size_x27_1433_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_buckets_x27_1435_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
else
{
lean_object* v___x_1449_; lean_object* v_buckets_x27_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_inc(v_bkt_1430_);
v___x_1449_ = lean_box(0);
v_buckets_x27_1450_ = lean_array_uset(v_buckets_1413_, v___x_1429_, v___x_1449_);
v___x_1451_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1410_, v_b_1411_, v_bkt_1430_);
v___x_1452_ = lean_array_uset(v_buckets_x27_1450_, v___x_1429_, v___x_1451_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v___x_1452_);
v___x_1454_ = v___x_1415_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_size_1412_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(lean_object* v_a_1457_, lean_object* v_fallback_1458_, lean_object* v_x_1459_){
_start:
{
if (lean_obj_tag(v_x_1459_) == 0)
{
lean_inc(v_fallback_1458_);
return v_fallback_1458_;
}
else
{
lean_object* v_key_1460_; lean_object* v_value_1461_; lean_object* v_tail_1462_; uint8_t v___x_1463_; 
v_key_1460_ = lean_ctor_get(v_x_1459_, 0);
v_value_1461_ = lean_ctor_get(v_x_1459_, 1);
v_tail_1462_ = lean_ctor_get(v_x_1459_, 2);
v___x_1463_ = lean_string_dec_eq(v_key_1460_, v_a_1457_);
if (v___x_1463_ == 0)
{
v_x_1459_ = v_tail_1462_;
goto _start;
}
else
{
lean_inc(v_value_1461_);
return v_value_1461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg___boxed(lean_object* v_a_1465_, lean_object* v_fallback_1466_, lean_object* v_x_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1465_, v_fallback_1466_, v_x_1467_);
lean_dec(v_x_1467_);
lean_dec(v_fallback_1466_);
lean_dec_ref(v_a_1465_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(lean_object* v_m_1469_, lean_object* v_a_1470_, lean_object* v_fallback_1471_){
_start:
{
lean_object* v_buckets_1472_; lean_object* v___x_1473_; uint64_t v___x_1474_; uint64_t v___x_1475_; uint64_t v___x_1476_; uint64_t v_fold_1477_; uint64_t v___x_1478_; uint64_t v___x_1479_; uint64_t v___x_1480_; size_t v___x_1481_; size_t v___x_1482_; size_t v___x_1483_; size_t v___x_1484_; size_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_buckets_1472_ = lean_ctor_get(v_m_1469_, 1);
v___x_1473_ = lean_array_get_size(v_buckets_1472_);
v___x_1474_ = lean_string_hash(v_a_1470_);
v___x_1475_ = 32ULL;
v___x_1476_ = lean_uint64_shift_right(v___x_1474_, v___x_1475_);
v_fold_1477_ = lean_uint64_xor(v___x_1474_, v___x_1476_);
v___x_1478_ = 16ULL;
v___x_1479_ = lean_uint64_shift_right(v_fold_1477_, v___x_1478_);
v___x_1480_ = lean_uint64_xor(v_fold_1477_, v___x_1479_);
v___x_1481_ = lean_uint64_to_usize(v___x_1480_);
v___x_1482_ = lean_usize_of_nat(v___x_1473_);
v___x_1483_ = ((size_t)1ULL);
v___x_1484_ = lean_usize_sub(v___x_1482_, v___x_1483_);
v___x_1485_ = lean_usize_land(v___x_1481_, v___x_1484_);
v___x_1486_ = lean_array_uget_borrowed(v_buckets_1472_, v___x_1485_);
v___x_1487_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1470_, v_fallback_1471_, v___x_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg___boxed(lean_object* v_m_1488_, lean_object* v_a_1489_, lean_object* v_fallback_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_m_1488_, v_a_1489_, v_fallback_1490_);
lean_dec(v_fallback_1490_);
lean_dec_ref(v_a_1489_);
lean_dec_ref(v_m_1488_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(lean_object* v_as_1494_, size_t v_sz_1495_, size_t v_i_1496_, lean_object* v_b_1497_){
_start:
{
uint8_t v___x_1499_; 
v___x_1499_ = lean_usize_dec_lt(v_i_1496_, v_sz_1495_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v_b_1497_);
return v___x_1500_;
}
else
{
lean_object* v_a_1501_; lean_object* v_file_1502_; lean_object* v_pos_1503_; lean_object* v_option_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v_fst_1508_; lean_object* v_snd_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1530_; 
v_a_1501_ = lean_array_uget_borrowed(v_as_1494_, v_i_1496_);
v_file_1502_ = lean_ctor_get(v_a_1501_, 0);
v_pos_1503_ = lean_ctor_get(v_a_1501_, 1);
lean_inc_ref(v_pos_1503_);
v_option_1504_ = lean_ctor_get(v_a_1501_, 2);
v___x_1505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0));
lean_inc_ref(v_file_1502_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v_file_1502_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_b_1497_, v_file_1502_, v___x_1506_);
lean_dec_ref_known(v___x_1506_, 2);
v_fst_1508_ = lean_ctor_get(v___x_1507_, 0);
v_snd_1509_ = lean_ctor_get(v___x_1507_, 1);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1511_ = v___x_1507_;
v_isShared_1512_ = v_isSharedCheck_1530_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_snd_1509_);
lean_inc(v_fst_1508_);
lean_dec(v___x_1507_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1530_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v_line_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1528_; 
v_line_1513_ = lean_ctor_get(v_pos_1503_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v_pos_1503_);
if (v_isSharedCheck_1528_ == 0)
{
lean_object* v_unused_1529_; 
v_unused_1529_ = lean_ctor_get(v_pos_1503_, 1);
lean_dec(v_unused_1529_);
v___x_1515_ = v_pos_1503_;
v_isShared_1516_ = v_isSharedCheck_1528_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_line_1513_);
lean_dec(v_pos_1503_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1528_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
lean_inc(v_option_1504_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 1, v_option_1504_);
lean_ctor_set(v___x_1511_, 0, v_line_1513_);
v___x_1518_ = v___x_1511_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_line_1513_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v_option_1504_);
v___x_1518_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = lean_array_push(v_snd_1509_, v___x_1518_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 1, v___x_1519_);
lean_ctor_set(v___x_1515_, 0, v_fst_1508_);
v___x_1521_ = v___x_1515_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_fst_1508_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; size_t v___x_1523_; size_t v___x_1524_; 
lean_inc_ref(v_file_1502_);
v___x_1522_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(v_b_1497_, v_file_1502_, v___x_1521_);
v___x_1523_ = ((size_t)1ULL);
v___x_1524_ = lean_usize_add(v_i_1496_, v___x_1523_);
v_i_1496_ = v___x_1524_;
v_b_1497_ = v___x_1522_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___boxed(lean_object* v_as_1531_, lean_object* v_sz_1532_, lean_object* v_i_1533_, lean_object* v_b_1534_, lean_object* v___y_1535_){
_start:
{
size_t v_sz_boxed_1536_; size_t v_i_boxed_1537_; lean_object* v_res_1538_; 
v_sz_boxed_1536_ = lean_unbox_usize(v_sz_1532_);
lean_dec(v_sz_1532_);
v_i_boxed_1537_ = lean_unbox_usize(v_i_1533_);
lean_dec(v_i_1533_);
v_res_1538_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(v_as_1531_, v_sz_boxed_1536_, v_i_boxed_1537_, v_b_1534_);
lean_dec_ref(v_as_1531_);
return v_res_1538_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0(void){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1539_ = lean_box(0);
v___x_1540_ = lean_unsigned_to_nat(16u);
v___x_1541_ = lean_mk_array(v___x_1540_, v___x_1539_);
return v___x_1541_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1(void){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v_byFile_1544_; 
v___x_1542_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0);
v___x_1543_ = lean_unsigned_to_nat(0u);
v_byFile_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byFile_1544_, 0, v___x_1543_);
lean_ctor_set(v_byFile_1544_, 1, v___x_1542_);
return v_byFile_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(lean_object* v_records_1545_){
_start:
{
lean_object* v___x_1547_; lean_object* v_byFile_1548_; size_t v_sz_1549_; size_t v___x_1550_; lean_object* v___x_1551_; 
v___x_1547_ = lean_unsigned_to_nat(0u);
v_byFile_1548_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1);
v_sz_1549_ = lean_array_size(v_records_1545_);
v___x_1550_ = ((size_t)0ULL);
v___x_1551_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(v_records_1545_, v_sz_1549_, v___x_1550_, v_byFile_1548_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___y_1554_; lean_object* v_size_1566_; lean_object* v_buckets_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; uint8_t v___x_1570_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
v_size_1566_ = lean_ctor_get(v_a_1552_, 0);
lean_inc(v_size_1566_);
v_buckets_1567_ = lean_ctor_get(v_a_1552_, 1);
lean_inc_ref(v_buckets_1567_);
lean_dec(v_a_1552_);
v___x_1568_ = lean_mk_empty_array_with_capacity(v_size_1566_);
lean_dec(v_size_1566_);
v___x_1569_ = lean_array_get_size(v_buckets_1567_);
v___x_1570_ = lean_nat_dec_lt(v___x_1547_, v___x_1569_);
if (v___x_1570_ == 0)
{
lean_dec_ref(v_buckets_1567_);
v___y_1554_ = v___x_1568_;
goto v___jp_1553_;
}
else
{
size_t v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = lean_usize_of_nat(v___x_1569_);
v___x_1572_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(v_buckets_1567_, v___x_1550_, v___x_1571_, v___x_1568_);
lean_dec_ref(v_buckets_1567_);
v___y_1554_ = v___x_1572_;
goto v___jp_1553_;
}
v___jp_1553_:
{
lean_object* v___x_1555_; size_t v_sz_1556_; lean_object* v___x_1557_; 
v___x_1555_ = lean_box(0);
v_sz_1556_ = lean_array_size(v___y_1554_);
v___x_1557_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(v___y_1554_, v_sz_1556_, v___x_1550_, v___x_1555_);
lean_dec_ref(v___y_1554_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1564_ == 0)
{
lean_object* v_unused_1565_; 
v_unused_1565_ = lean_ctor_get(v___x_1557_, 0);
lean_dec(v_unused_1565_);
v___x_1559_ = v___x_1557_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_dec(v___x_1557_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 0, v___x_1555_);
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1555_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
else
{
return v___x_1557_;
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
v_a_1573_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1551_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1551_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___boxed(lean_object* v_records_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(v_records_1581_);
lean_dec_ref(v_records_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(lean_object* v_00_u03b2_1584_, lean_object* v_m_1585_, lean_object* v_a_1586_, lean_object* v_fallback_1587_){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_m_1585_, v_a_1586_, v_fallback_1587_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___boxed(lean_object* v_00_u03b2_1589_, lean_object* v_m_1590_, lean_object* v_a_1591_, lean_object* v_fallback_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(v_00_u03b2_1589_, v_m_1590_, v_a_1591_, v_fallback_1592_);
lean_dec(v_fallback_1592_);
lean_dec_ref(v_a_1591_);
lean_dec_ref(v_m_1590_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1(lean_object* v_00_u03b2_1594_, lean_object* v_m_1595_, lean_object* v_a_1596_, lean_object* v_b_1597_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(v_m_1595_, v_a_1596_, v_b_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(lean_object* v_00_u03b2_1599_, lean_object* v_m_1600_, lean_object* v_a_1601_, lean_object* v_fallback_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_m_1600_, v_a_1601_, v_fallback_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___boxed(lean_object* v_00_u03b2_1604_, lean_object* v_m_1605_, lean_object* v_a_1606_, lean_object* v_fallback_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(v_00_u03b2_1604_, v_m_1605_, v_a_1606_, v_fallback_1607_);
lean_dec(v_fallback_1607_);
lean_dec(v_a_1606_);
lean_dec_ref(v_m_1605_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5(lean_object* v_00_u03b2_1609_, lean_object* v_m_1610_, lean_object* v_a_1611_, lean_object* v_b_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(v_m_1610_, v_a_1611_, v_b_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(lean_object* v_a_1614_, lean_object* v___x_1615_, lean_object* v___x_1616_, lean_object* v_inst_1617_, lean_object* v_R_1618_, lean_object* v_a_1619_, lean_object* v_b_1620_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_1614_, v___x_1615_, v___x_1616_, v_a_1619_, v_b_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___boxed(lean_object* v_a_1622_, lean_object* v___x_1623_, lean_object* v___x_1624_, lean_object* v_inst_1625_, lean_object* v_R_1626_, lean_object* v_a_1627_, lean_object* v_b_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(v_a_1622_, v___x_1623_, v___x_1624_, v_inst_1625_, v_R_1626_, v_a_1627_, v_b_1628_);
lean_dec_ref(v___x_1623_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(lean_object* v___x_1630_, lean_object* v___x_1631_, lean_object* v_n_1632_, lean_object* v_as_1633_, lean_object* v_lo_1634_, lean_object* v_hi_1635_, lean_object* v_w_1636_, lean_object* v_hlo_1637_, lean_object* v_hhi_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1630_, v___x_1631_, v_n_1632_, v_as_1633_, v_lo_1634_, v_hi_1635_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___boxed(lean_object* v___x_1640_, lean_object* v___x_1641_, lean_object* v_n_1642_, lean_object* v_as_1643_, lean_object* v_lo_1644_, lean_object* v_hi_1645_, lean_object* v_w_1646_, lean_object* v_hlo_1647_, lean_object* v_hhi_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(v___x_1640_, v___x_1641_, v_n_1642_, v_as_1643_, v_lo_1644_, v_hi_1645_, v_w_1646_, v_hlo_1647_, v_hhi_1648_);
lean_dec(v_hi_1645_);
lean_dec(v_n_1642_);
lean_dec(v___x_1641_);
lean_dec(v___x_1640_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(lean_object* v_n_1650_, lean_object* v_as_1651_, lean_object* v_lo_1652_, lean_object* v_hi_1653_, lean_object* v_w_1654_, lean_object* v_hlo_1655_, lean_object* v_hhi_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_1650_, v_as_1651_, v_lo_1652_, v_hi_1653_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___boxed(lean_object* v_n_1658_, lean_object* v_as_1659_, lean_object* v_lo_1660_, lean_object* v_hi_1661_, lean_object* v_w_1662_, lean_object* v_hlo_1663_, lean_object* v_hhi_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(v_n_1658_, v_as_1659_, v_lo_1660_, v_hi_1661_, v_w_1662_, v_hlo_1663_, v_hhi_1664_);
lean_dec(v_hi_1661_);
lean_dec(v_n_1658_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(lean_object* v_00_u03b2_1666_, lean_object* v_a_1667_, lean_object* v_fallback_1668_, lean_object* v_x_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1667_, v_fallback_1668_, v_x_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1671_, lean_object* v_a_1672_, lean_object* v_fallback_1673_, lean_object* v_x_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(v_00_u03b2_1671_, v_a_1672_, v_fallback_1673_, v_x_1674_);
lean_dec(v_x_1674_);
lean_dec(v_fallback_1673_);
lean_dec_ref(v_a_1672_);
return v_res_1675_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(lean_object* v_00_u03b2_1676_, lean_object* v_a_1677_, lean_object* v_x_1678_){
_start:
{
uint8_t v___x_1679_; 
v___x_1679_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1677_, v_x_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1680_, lean_object* v_a_1681_, lean_object* v_x_1682_){
_start:
{
uint8_t v_res_1683_; lean_object* v_r_1684_; 
v_res_1683_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(v_00_u03b2_1680_, v_a_1681_, v_x_1682_);
lean_dec(v_x_1682_);
lean_dec_ref(v_a_1681_);
v_r_1684_ = lean_box(v_res_1683_);
return v_r_1684_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3(lean_object* v_00_u03b2_1685_, lean_object* v_data_1686_){
_start:
{
lean_object* v___x_1687_; 
v___x_1687_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(v_data_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4(lean_object* v_00_u03b2_1688_, lean_object* v_a_1689_, lean_object* v_b_1690_, lean_object* v_x_1691_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1689_, v_b_1690_, v_x_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(lean_object* v_00_u03b2_1693_, lean_object* v_a_1694_, lean_object* v_fallback_1695_, lean_object* v_x_1696_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_1694_, v_fallback_1695_, v_x_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___boxed(lean_object* v_00_u03b2_1698_, lean_object* v_a_1699_, lean_object* v_fallback_1700_, lean_object* v_x_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(v_00_u03b2_1698_, v_a_1699_, v_fallback_1700_, v_x_1701_);
lean_dec(v_x_1701_);
lean_dec(v_fallback_1700_);
lean_dec(v_a_1699_);
return v_res_1702_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(lean_object* v_00_u03b2_1703_, lean_object* v_a_1704_, lean_object* v_x_1705_){
_start:
{
uint8_t v___x_1706_; 
v___x_1706_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_1704_, v_x_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___boxed(lean_object* v_00_u03b2_1707_, lean_object* v_a_1708_, lean_object* v_x_1709_){
_start:
{
uint8_t v_res_1710_; lean_object* v_r_1711_; 
v_res_1710_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(v_00_u03b2_1707_, v_a_1708_, v_x_1709_);
lean_dec(v_x_1709_);
lean_dec(v_a_1708_);
v_r_1711_ = lean_box(v_res_1710_);
return v_r_1711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12(lean_object* v_00_u03b2_1712_, lean_object* v_data_1713_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(v_data_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13(lean_object* v_00_u03b2_1715_, lean_object* v_a_1716_, lean_object* v_b_1717_, lean_object* v_x_1718_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_1716_, v_b_1717_, v_x_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(lean_object* v___x_1720_, lean_object* v___x_1721_, lean_object* v_n_1722_, lean_object* v_lo_1723_, lean_object* v_hi_1724_, lean_object* v_hhi_1725_, lean_object* v_pivot_1726_, lean_object* v_as_1727_, lean_object* v_i_1728_, lean_object* v_k_1729_, lean_object* v_ilo_1730_, lean_object* v_ik_1731_, lean_object* v_w_1732_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_1720_, v___x_1721_, v_hi_1724_, v_pivot_1726_, v_as_1727_, v_i_1728_, v_k_1729_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___boxed(lean_object* v___x_1734_, lean_object* v___x_1735_, lean_object* v_n_1736_, lean_object* v_lo_1737_, lean_object* v_hi_1738_, lean_object* v_hhi_1739_, lean_object* v_pivot_1740_, lean_object* v_as_1741_, lean_object* v_i_1742_, lean_object* v_k_1743_, lean_object* v_ilo_1744_, lean_object* v_ik_1745_, lean_object* v_w_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(v___x_1734_, v___x_1735_, v_n_1736_, v_lo_1737_, v_hi_1738_, v_hhi_1739_, v_pivot_1740_, v_as_1741_, v_i_1742_, v_k_1743_, v_ilo_1744_, v_ik_1745_, v_w_1746_);
lean_dec(v_hi_1738_);
lean_dec(v_lo_1737_);
lean_dec(v_n_1736_);
lean_dec(v___x_1735_);
lean_dec(v___x_1734_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(lean_object* v_n_1748_, lean_object* v_lo_1749_, lean_object* v_hi_1750_, lean_object* v_hhi_1751_, lean_object* v_pivot_1752_, lean_object* v_as_1753_, lean_object* v_i_1754_, lean_object* v_k_1755_, lean_object* v_ilo_1756_, lean_object* v_ik_1757_, lean_object* v_w_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_1750_, v_pivot_1752_, v_as_1753_, v_i_1754_, v_k_1755_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___boxed(lean_object* v_n_1760_, lean_object* v_lo_1761_, lean_object* v_hi_1762_, lean_object* v_hhi_1763_, lean_object* v_pivot_1764_, lean_object* v_as_1765_, lean_object* v_i_1766_, lean_object* v_k_1767_, lean_object* v_ilo_1768_, lean_object* v_ik_1769_, lean_object* v_w_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(v_n_1760_, v_lo_1761_, v_hi_1762_, v_hhi_1763_, v_pivot_1764_, v_as_1765_, v_i_1766_, v_k_1767_, v_ilo_1768_, v_ik_1769_, v_w_1770_);
lean_dec_ref(v_pivot_1764_);
lean_dec(v_hi_1762_);
lean_dec(v_lo_1761_);
lean_dec(v_n_1760_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1772_, lean_object* v_i_1773_, lean_object* v_source_1774_, lean_object* v_target_1775_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(v_i_1773_, v_source_1774_, v_target_1775_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15(lean_object* v_00_u03b2_1777_, lean_object* v_i_1778_, lean_object* v_source_1779_, lean_object* v_target_1780_){
_start:
{
lean_object* v___x_1781_; 
v___x_1781_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(v_i_1778_, v_source_1779_, v_target_1780_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26(lean_object* v_00_u03b2_1782_, lean_object* v_x_1783_, lean_object* v_x_1784_){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(v_x_1783_, v_x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33(lean_object* v_00_u03b2_1786_, lean_object* v_x_1787_, lean_object* v_x_1788_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(v_x_1787_, v_x_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(lean_object* v_declName_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v_env_1795_; lean_object* v___x_1796_; lean_object* v_env_1797_; lean_object* v___x_1798_; lean_object* v_toEnvExtension_1799_; lean_object* v_asyncMode_1800_; uint8_t v___x_1801_; lean_object* v___x_1802_; 
v___x_1793_ = l_Lean_instInhabitedDeclarationRanges_default;
v___x_1794_ = lean_st_ref_get(v___y_1791_);
v_env_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc_ref(v_env_1795_);
lean_dec(v___x_1794_);
v___x_1796_ = lean_st_ref_get(v___y_1791_);
v_env_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc_ref(v_env_1797_);
lean_dec(v___x_1796_);
v___x_1798_ = l_Lean_declRangeExt;
v_toEnvExtension_1799_ = lean_ctor_get(v___x_1798_, 0);
v_asyncMode_1800_ = lean_ctor_get(v_toEnvExtension_1799_, 2);
v___x_1801_ = 0;
lean_inc(v_declName_1790_);
v___x_1802_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1793_, v___x_1798_, v_env_1795_, v_declName_1790_, v_asyncMode_1800_, v___x_1801_);
if (lean_obj_tag(v___x_1802_) == 0)
{
uint8_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1803_ = 1;
v___x_1804_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1793_, v___x_1798_, v_env_1797_, v_declName_1790_, v_asyncMode_1800_, v___x_1803_);
v___x_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1804_);
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; 
lean_dec_ref(v_env_1797_);
lean_dec(v_declName_1790_);
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1802_);
return v___x_1806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg___boxed(lean_object* v_declName_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1807_, v___y_1808_);
lean_dec(v___y_1808_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(lean_object* v_declName_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v___x_1814_; lean_object* v_env_1815_; uint8_t v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1814_ = lean_st_ref_get(v___y_1812_);
v_env_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc_ref(v_env_1815_);
lean_dec(v___x_1814_);
v___x_1816_ = l_Lean_isRecCore(v_env_1815_, v_declName_1811_);
v___x_1817_ = lean_box(v___x_1816_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1819_, v___y_1820_);
lean_dec(v___y_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(lean_object* v_declName_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_ranges_1828_; lean_object* v___x_1834_; lean_object* v_env_1835_; lean_object* v___x_1836_; lean_object* v_a_1837_; uint8_t v___y_1843_; uint8_t v___x_1847_; 
v___x_1834_ = lean_st_ref_get(v___y_1825_);
v_env_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc_ref_n(v_env_1835_, 2);
lean_dec(v___x_1834_);
lean_inc_n(v_declName_1823_, 2);
v___x_1836_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1823_, v___y_1825_);
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref(v___x_1836_);
v___x_1847_ = l_Lean_isAuxRecursor(v_env_1835_, v_declName_1823_);
if (v___x_1847_ == 0)
{
uint8_t v___x_1848_; 
lean_inc(v_declName_1823_);
v___x_1848_ = l_Lean_isNoConfusion(v_env_1835_, v_declName_1823_);
v___y_1843_ = v___x_1848_;
goto v___jp_1842_;
}
else
{
lean_dec_ref(v_env_1835_);
v___y_1843_ = v___x_1847_;
goto v___jp_1842_;
}
v___jp_1827_:
{
if (lean_obj_tag(v_ranges_1828_) == 0)
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1829_ = l_Lean_builtinDeclRanges;
v___x_1830_ = lean_st_ref_get(v___x_1829_);
v___x_1831_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1830_, v_declName_1823_);
lean_dec(v_declName_1823_);
lean_dec(v___x_1830_);
v___x_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
return v___x_1832_;
}
else
{
lean_object* v___x_1833_; 
lean_dec(v_declName_1823_);
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v_ranges_1828_);
return v___x_1833_;
}
}
v___jp_1838_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v_a_1841_; 
v___x_1839_ = l_Lean_Name_getPrefix(v_declName_1823_);
v___x_1840_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v___x_1839_, v___y_1825_);
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref(v___x_1840_);
v_ranges_1828_ = v_a_1841_;
goto v___jp_1827_;
}
v___jp_1842_:
{
if (v___y_1843_ == 0)
{
uint8_t v___x_1844_; 
v___x_1844_ = lean_unbox(v_a_1837_);
lean_dec(v_a_1837_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; lean_object* v_a_1846_; 
lean_inc(v_declName_1823_);
v___x_1845_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1823_, v___y_1825_);
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc(v_a_1846_);
lean_dec_ref(v___x_1845_);
v_ranges_1828_ = v_a_1846_;
goto v___jp_1827_;
}
else
{
goto v___jp_1838_;
}
}
else
{
lean_dec(v_a_1837_);
goto v___jp_1838_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0___boxed(lean_object* v_declName_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_declName_1849_, v___y_1850_, v___y_1851_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(lean_object* v_failMod_1854_, lean_object* v_site_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
if (lean_obj_tag(v_site_1855_) == 0)
{
lean_object* v_name_1859_; lean_object* v___x_1860_; 
v_name_1859_ = lean_ctor_get(v_site_1855_, 0);
lean_inc(v_name_1859_);
lean_dec_ref_known(v_site_1855_, 1);
v___x_1860_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_name_1859_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1882_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1882_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1882_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
if (lean_obj_tag(v_a_1861_) == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1867_; 
v___x_1865_ = lean_box(0);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1865_);
v___x_1867_ = v___x_1863_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1865_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
else
{
lean_object* v_val_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1881_; 
v_val_1869_ = lean_ctor_get(v_a_1861_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_a_1861_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1871_ = v_a_1861_;
v_isShared_1872_ = v_isSharedCheck_1881_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_val_1869_);
lean_dec(v_a_1861_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1881_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v_range_1873_; lean_object* v_pos_1874_; lean_object* v___x_1876_; 
v_range_1873_ = lean_ctor_get(v_val_1869_, 0);
lean_inc_ref(v_range_1873_);
lean_dec(v_val_1869_);
v_pos_1874_ = lean_ctor_get(v_range_1873_, 0);
lean_inc_ref(v_pos_1874_);
lean_dec_ref(v_range_1873_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v_pos_1874_);
v___x_1876_ = v___x_1871_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_pos_1874_);
v___x_1876_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1878_; 
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1876_);
v___x_1878_ = v___x_1863_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
v_a_1883_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1860_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1860_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
else
{
lean_object* v_n_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1922_; 
v_n_1891_ = lean_ctor_get(v_site_1855_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_site_1855_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1893_ = v_site_1855_;
v_isShared_1894_ = v_isSharedCheck_1922_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_n_1891_);
lean_dec(v_site_1855_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1922_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v_env_1896_; lean_object* v___x_1897_; 
v___x_1895_ = lean_st_ref_get(v_a_1857_);
v_env_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc_ref(v_env_1896_);
lean_dec(v___x_1895_);
v___x_1897_ = l_Lean_getVersoModuleDoc_x3f(v_env_1896_, v_failMod_1854_);
lean_dec_ref(v_env_1896_);
if (lean_obj_tag(v___x_1897_) == 1)
{
lean_object* v_val_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1917_; 
v_val_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1917_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_val_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1917_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; uint8_t v___x_1903_; 
v___x_1902_ = lean_array_get_size(v_val_1898_);
v___x_1903_ = lean_nat_dec_lt(v_n_1891_, v___x_1902_);
if (v___x_1903_ == 0)
{
lean_object* v___x_1904_; lean_object* v___x_1906_; 
lean_del_object(v___x_1900_);
lean_dec(v_val_1898_);
lean_dec(v_n_1891_);
v___x_1904_ = lean_box(0);
if (v_isShared_1894_ == 0)
{
lean_ctor_set_tag(v___x_1893_, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1904_);
v___x_1906_ = v___x_1893_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v___x_1904_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
else
{
lean_object* v___x_1908_; lean_object* v_declarationRange_1909_; lean_object* v_pos_1910_; lean_object* v___x_1912_; 
v___x_1908_ = lean_array_fget(v_val_1898_, v_n_1891_);
lean_dec(v_n_1891_);
lean_dec(v_val_1898_);
v_declarationRange_1909_ = lean_ctor_get(v___x_1908_, 2);
lean_inc_ref(v_declarationRange_1909_);
lean_dec(v___x_1908_);
v_pos_1910_ = lean_ctor_get(v_declarationRange_1909_, 0);
lean_inc_ref(v_pos_1910_);
lean_dec_ref(v_declarationRange_1909_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v_pos_1910_);
v___x_1912_ = v___x_1900_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_pos_1910_);
v___x_1912_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1914_; 
if (v_isShared_1894_ == 0)
{
lean_ctor_set_tag(v___x_1893_, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1912_);
v___x_1914_ = v___x_1893_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
else
{
lean_object* v___x_1918_; lean_object* v___x_1920_; 
lean_dec(v___x_1897_);
lean_dec(v_n_1891_);
v___x_1918_ = lean_box(0);
if (v_isShared_1894_ == 0)
{
lean_ctor_set_tag(v___x_1893_, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1918_);
v___x_1920_ = v___x_1893_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1918_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f___boxed(lean_object* v_failMod_1923_, lean_object* v_site_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(v_failMod_1923_, v_site_1924_, v_a_1925_, v_a_1926_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
lean_dec(v_failMod_1923_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(lean_object* v_declName_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1929_, v___y_1931_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___boxed(lean_object* v_declName_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(v_declName_1934_, v___y_1935_, v___y_1936_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(lean_object* v_declName_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1939_, v___y_1941_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___boxed(lean_object* v_declName_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(v_declName_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(lean_object* v_x_1952_){
_start:
{
if (lean_obj_tag(v_x_1952_) == 0)
{
lean_object* v_name_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v_name_1953_ = lean_ctor_get(v_x_1952_, 0);
lean_inc(v_name_1953_);
lean_dec_ref_known(v_x_1952_, 1);
v___x_1954_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0));
v___x_1955_ = 1;
v___x_1956_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1953_, v___x_1955_);
v___x_1957_ = lean_string_append(v___x_1954_, v___x_1956_);
lean_dec_ref(v___x_1956_);
v___x_1958_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1));
v___x_1959_ = lean_string_append(v___x_1957_, v___x_1958_);
return v___x_1959_;
}
else
{
lean_object* v_n_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v_n_1960_ = lean_ctor_get(v_x_1952_, 0);
lean_inc(v_n_1960_);
lean_dec_ref_known(v_x_1952_, 1);
v___x_1961_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2));
v___x_1962_ = lean_unsigned_to_nat(1u);
v___x_1963_ = lean_nat_add(v_n_1960_, v___x_1962_);
lean_dec(v_n_1960_);
v___x_1964_ = l_Nat_reprFast(v___x_1963_);
v___x_1965_ = lean_string_append(v___x_1961_, v___x_1964_);
lean_dec_ref(v___x_1964_);
return v___x_1965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(lean_object* v_o_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v_env_1971_; lean_object* v___x_1972_; lean_object* v_toEnvExtension_1973_; lean_object* v_asyncMode_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v_merged_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1985_; 
v___x_1969_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1970_ = lean_st_ref_get(v___y_1967_);
v_env_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc_ref(v_env_1971_);
lean_dec(v___x_1970_);
v___x_1972_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1973_ = lean_ctor_get(v___x_1972_, 0);
v_asyncMode_1974_ = lean_ctor_get(v_toEnvExtension_1973_, 2);
v___x_1975_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
v___x_1976_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1969_, v___x_1972_, v_env_1971_, v_asyncMode_1974_, v___x_1975_);
v_merged_1977_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_1985_ == 0)
{
lean_object* v_unused_1986_; 
v_unused_1986_ = lean_ctor_get(v___x_1976_, 1);
lean_dec(v_unused_1986_);
v___x_1979_ = v___x_1976_;
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_merged_1977_);
lean_dec(v___x_1976_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 1, v_merged_1977_);
lean_ctor_set(v___x_1979_, 0, v_o_1966_);
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_o_1966_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v_merged_1977_);
v___x_1982_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
return v___x_1983_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg___boxed(lean_object* v_o_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_o_1987_, v___y_1988_);
lean_dec(v___y_1988_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(lean_object* v_o_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_o_1991_, v___y_1993_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___boxed(lean_object* v_o_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(v_o_1996_, v___y_1997_, v___y_1998_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
return v_res_2000_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(lean_object* v_opts_2001_, lean_object* v_opt_2002_){
_start:
{
lean_object* v_name_2003_; lean_object* v_defValue_2004_; lean_object* v_map_2005_; lean_object* v___x_2006_; 
v_name_2003_ = lean_ctor_get(v_opt_2002_, 0);
v_defValue_2004_ = lean_ctor_get(v_opt_2002_, 1);
v_map_2005_ = lean_ctor_get(v_opts_2001_, 0);
v___x_2006_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2005_, v_name_2003_);
if (lean_obj_tag(v___x_2006_) == 0)
{
uint8_t v___x_2007_; 
v___x_2007_ = lean_unbox(v_defValue_2004_);
return v___x_2007_;
}
else
{
lean_object* v_val_2008_; 
v_val_2008_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_val_2008_);
lean_dec_ref_known(v___x_2006_, 1);
if (lean_obj_tag(v_val_2008_) == 1)
{
uint8_t v_v_2009_; 
v_v_2009_ = lean_ctor_get_uint8(v_val_2008_, 0);
lean_dec_ref_known(v_val_2008_, 0);
return v_v_2009_;
}
else
{
uint8_t v___x_2010_; 
lean_dec(v_val_2008_);
v___x_2010_ = lean_unbox(v_defValue_2004_);
return v___x_2010_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2___boxed(lean_object* v_opts_2011_, lean_object* v_opt_2012_){
_start:
{
uint8_t v_res_2013_; lean_object* v_r_2014_; 
v_res_2013_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v_opts_2011_, v_opt_2012_);
lean_dec_ref(v_opt_2012_);
lean_dec_ref(v_opts_2011_);
v_r_2014_ = lean_box(v_res_2013_);
return v_r_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(lean_object* v_opts_2015_, lean_object* v_opt_2016_){
_start:
{
lean_object* v_name_2017_; lean_object* v_defValue_2018_; lean_object* v_map_2019_; lean_object* v___x_2020_; 
v_name_2017_ = lean_ctor_get(v_opt_2016_, 0);
v_defValue_2018_ = lean_ctor_get(v_opt_2016_, 1);
v_map_2019_ = lean_ctor_get(v_opts_2015_, 0);
v___x_2020_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2019_, v_name_2017_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_inc(v_defValue_2018_);
return v_defValue_2018_;
}
else
{
lean_object* v_val_2021_; 
v_val_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_val_2021_);
lean_dec_ref_known(v___x_2020_, 1);
if (lean_obj_tag(v_val_2021_) == 3)
{
lean_object* v_v_2022_; 
v_v_2022_ = lean_ctor_get(v_val_2021_, 0);
lean_inc(v_v_2022_);
lean_dec_ref_known(v_val_2021_, 1);
return v_v_2022_;
}
else
{
lean_dec(v_val_2021_);
lean_inc(v_defValue_2018_);
return v_defValue_2018_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___boxed(lean_object* v_opts_2023_, lean_object* v_opt_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v_opts_2023_, v_opt_2024_);
lean_dec_ref(v_opt_2024_);
lean_dec_ref(v_opts_2023_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(lean_object* v_c_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v_options_2030_; lean_object* v___x_2031_; lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2042_; 
v_options_2030_ = lean_ctor_get(v_c_2026_, 6);
lean_inc_ref(v_options_2030_);
lean_dec_ref(v_c_2026_);
v___x_2031_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_options_2030_, v___y_2028_);
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2034_ = v___x_2031_;
v_isShared_2035_ = v_isSharedCheck_2042_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2042_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2036_ = l_Lean_linter_doc_deferred;
v___x_2037_ = l_Lean_Linter_getLinterValue(v___x_2036_, v_a_2032_);
lean_dec(v_a_2032_);
v___x_2038_ = lean_box(v___x_2037_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 0, v___x_2038_);
v___x_2040_ = v___x_2034_;
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
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed(lean_object* v_c_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(v_c_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
return v_res_2047_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(lean_object* v_pkgRoot_2048_, lean_object* v_docCheckedModules_2049_, uint8_t v___y_2050_, lean_object* v_m_2051_){
_start:
{
uint8_t v___x_2052_; 
v___x_2052_ = l_Lean_Name_isPrefixOf(v_pkgRoot_2048_, v_m_2051_);
if (v___x_2052_ == 0)
{
return v___x_2052_;
}
else
{
uint8_t v___x_2053_; 
v___x_2053_ = l_Lean_NameSet_contains(v_docCheckedModules_2049_, v_m_2051_);
if (v___x_2053_ == 0)
{
return v___y_2050_;
}
else
{
uint8_t v___x_2054_; 
v___x_2054_ = 0;
return v___x_2054_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed(lean_object* v_pkgRoot_2055_, lean_object* v_docCheckedModules_2056_, lean_object* v___y_2057_, lean_object* v_m_2058_){
_start:
{
uint8_t v___y_7072__boxed_2059_; uint8_t v_res_2060_; lean_object* v_r_2061_; 
v___y_7072__boxed_2059_ = lean_unbox(v___y_2057_);
v_res_2060_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(v_pkgRoot_2055_, v_docCheckedModules_2056_, v___y_7072__boxed_2059_, v_m_2058_);
lean_dec(v_m_2058_);
lean_dec(v_docCheckedModules_2056_);
lean_dec(v_pkgRoot_2055_);
v_r_2061_ = lean_box(v_res_2060_);
return v_r_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(uint8_t v___x_2069_, lean_object* v_sp_2070_, lean_object* v_as_2071_, size_t v_sz_2072_, size_t v_i_2073_, lean_object* v_b_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v_a_2079_; uint8_t v_unlocated_2083_; 
v_unlocated_2083_ = lean_usize_dec_lt(v_i_2073_, v_sz_2072_);
if (v_unlocated_2083_ == 0)
{
lean_object* v___x_2084_; 
lean_dec(v_sp_2070_);
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v_b_2074_);
return v___x_2084_;
}
else
{
lean_object* v_a_2085_; lean_object* v_snd_2086_; lean_object* v_fst_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2209_; 
v_a_2085_ = lean_array_uget_borrowed(v_as_2071_, v_i_2073_);
v_snd_2086_ = lean_ctor_get(v_a_2085_, 1);
lean_inc(v_snd_2086_);
v_fst_2087_ = lean_ctor_get(v_snd_2086_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v_snd_2086_);
if (v_isSharedCheck_2209_ == 0)
{
lean_object* v_unused_2210_; 
v_unused_2210_ = lean_ctor_get(v_snd_2086_, 1);
lean_dec(v_unused_2210_);
v___x_2089_ = v_snd_2086_;
v_isShared_2090_ = v_isSharedCheck_2209_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_fst_2087_);
lean_dec(v_snd_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2209_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v_fst_2091_; lean_object* v_fst_2092_; lean_object* v_snd_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2208_; 
v_fst_2091_ = lean_ctor_get(v_a_2085_, 0);
v_fst_2092_ = lean_ctor_get(v_b_2074_, 0);
v_snd_2093_ = lean_ctor_get(v_b_2074_, 1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_b_2074_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2095_ = v_b_2074_;
v_isShared_2096_ = v_isSharedCheck_2208_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_snd_2093_);
lean_inc(v_fst_2092_);
lean_dec(v_b_2074_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2208_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v_site_2097_; lean_object* v___x_2098_; 
v_site_2097_ = lean_ctor_get(v_fst_2087_, 0);
lean_inc_ref_n(v_site_2097_, 2);
lean_dec(v_fst_2087_);
v___x_2098_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(v_fst_2091_, v_site_2097_, v___y_2075_, v___y_2076_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
if (lean_obj_tag(v_a_2099_) == 0)
{
lean_object* v___x_2100_; lean_object* v_name_2101_; lean_object* v_ref_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
lean_dec(v_snd_2093_);
v___x_2100_ = l_Lean_linter_doc_deferred;
v_name_2101_ = lean_ctor_get(v___x_2100_, 0);
v_ref_2102_ = lean_ctor_get(v___y_2075_, 2);
lean_inc(v_fst_2091_);
v___x_2103_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2091_, v___x_2069_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__0));
v___x_2105_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2097_);
v___x_2106_ = lean_string_append(v___x_2104_, v___x_2105_);
lean_dec_ref(v___x_2105_);
v___x_2107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__1));
v___x_2108_ = lean_string_append(v___x_2106_, v___x_2107_);
v___x_2109_ = lean_string_append(v___x_2108_, v___x_2103_);
lean_dec_ref(v___x_2103_);
v___x_2110_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2));
v___x_2111_ = lean_string_append(v___x_2109_, v___x_2110_);
lean_inc(v_name_2101_);
v___x_2112_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2101_, v___x_2069_);
v___x_2113_ = lean_string_append(v___x_2111_, v___x_2112_);
lean_dec_ref(v___x_2112_);
v___x_2114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_2115_ = lean_string_append(v___x_2113_, v___x_2114_);
v___x_2116_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2115_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v___x_2117_; lean_object* v___x_2119_; 
lean_dec_ref_known(v___x_2116_, 1);
lean_del_object(v___x_2089_);
v___x_2117_ = lean_box(v_unlocated_2083_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v___x_2117_);
v___x_2119_ = v___x_2095_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_fst_2092_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v___x_2117_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
v_a_2079_ = v___x_2119_;
goto v___jp_2078_;
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2134_; 
lean_del_object(v___x_2095_);
lean_dec(v_fst_2092_);
lean_dec(v_sp_2070_);
v_a_2121_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2123_ = v___x_2116_;
v_isShared_2124_ = v_isSharedCheck_2134_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2116_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2134_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2129_; 
v___x_2125_ = lean_io_error_to_string(v_a_2121_);
v___x_2126_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
v___x_2127_ = l_Lean_MessageData_ofFormat(v___x_2126_);
lean_inc(v_ref_2102_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 1, v___x_2127_);
lean_ctor_set(v___x_2089_, 0, v_ref_2102_);
v___x_2129_ = v___x_2089_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_ref_2102_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
lean_object* v___x_2131_; 
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 0, v___x_2129_);
v___x_2131_ = v___x_2123_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
}
else
{
lean_object* v_val_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2199_; 
lean_dec_ref(v_site_2097_);
v_val_2135_ = lean_ctor_get(v_a_2099_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v_a_2099_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2137_ = v_a_2099_;
v_isShared_2138_ = v_isSharedCheck_2199_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_val_2135_);
lean_dec(v_a_2099_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2199_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v_ref_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v_ref_2139_ = lean_ctor_get(v___y_2075_, 2);
v___x_2140_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4));
lean_inc(v_fst_2091_);
lean_inc(v_sp_2070_);
v___x_2141_ = l_Lean_SearchPath_findWithExt(v_sp_2070_, v___x_2140_, v_fst_2091_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
if (lean_obj_tag(v_a_2142_) == 0)
{
lean_object* v___x_2143_; lean_object* v_name_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
lean_dec(v_val_2135_);
lean_dec(v_snd_2093_);
v___x_2143_ = l_Lean_linter_doc_deferred;
v_name_2144_ = lean_ctor_get(v___x_2143_, 0);
v___x_2145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5));
lean_inc(v_fst_2091_);
v___x_2146_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2091_, v___x_2069_);
v___x_2147_ = lean_string_append(v___x_2145_, v___x_2146_);
lean_dec_ref(v___x_2146_);
v___x_2148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6));
v___x_2149_ = lean_string_append(v___x_2147_, v___x_2148_);
lean_inc(v_name_2144_);
v___x_2150_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2144_, v___x_2069_);
v___x_2151_ = lean_string_append(v___x_2149_, v___x_2150_);
lean_dec_ref(v___x_2150_);
v___x_2152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_2153_ = lean_string_append(v___x_2151_, v___x_2152_);
v___x_2154_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2153_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v___x_2155_; lean_object* v___x_2157_; 
lean_dec_ref_known(v___x_2154_, 1);
lean_del_object(v___x_2137_);
lean_del_object(v___x_2089_);
v___x_2155_ = lean_box(v_unlocated_2083_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v___x_2155_);
v___x_2157_ = v___x_2095_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_fst_2092_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
v_a_2079_ = v___x_2157_;
goto v___jp_2078_;
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2174_; 
lean_del_object(v___x_2095_);
lean_dec(v_fst_2092_);
lean_dec(v_sp_2070_);
v_a_2159_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2161_ = v___x_2154_;
v_isShared_2162_ = v_isSharedCheck_2174_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2154_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2174_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_io_error_to_string(v_a_2159_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set_tag(v___x_2137_, 3);
lean_ctor_set(v___x_2137_, 0, v___x_2163_);
v___x_2165_ = v___x_2137_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
lean_object* v___x_2166_; lean_object* v___x_2168_; 
v___x_2166_ = l_Lean_MessageData_ofFormat(v___x_2165_);
lean_inc(v_ref_2139_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 1, v___x_2166_);
lean_ctor_set(v___x_2089_, 0, v_ref_2139_);
v___x_2168_ = v___x_2089_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_ref_2139_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
lean_object* v___x_2170_; 
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2168_);
v___x_2170_ = v___x_2161_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
}
else
{
lean_object* v_val_2175_; lean_object* v___x_2176_; lean_object* v_name_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2181_; 
lean_del_object(v___x_2137_);
lean_del_object(v___x_2089_);
v_val_2175_ = lean_ctor_get(v_a_2142_, 0);
lean_inc(v_val_2175_);
lean_dec_ref_known(v_a_2142_, 1);
v___x_2176_ = l_Lean_linter_doc_deferred;
v_name_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_name_2177_);
v___x_2178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2178_, 0, v_val_2175_);
lean_ctor_set(v___x_2178_, 1, v_val_2135_);
lean_ctor_set(v___x_2178_, 2, v_name_2177_);
v___x_2179_ = lean_array_push(v_fst_2092_, v___x_2178_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2179_);
v___x_2181_ = v___x_2095_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v_snd_2093_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
v_a_2079_ = v___x_2181_;
goto v___jp_2078_;
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2198_; 
lean_dec(v_val_2135_);
lean_del_object(v___x_2095_);
lean_dec(v_snd_2093_);
lean_dec(v_fst_2092_);
lean_dec(v_sp_2070_);
v_a_2183_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2185_ = v___x_2141_;
v_isShared_2186_ = v_isSharedCheck_2198_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2141_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2198_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2187_; lean_object* v___x_2189_; 
v___x_2187_ = lean_io_error_to_string(v_a_2183_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set_tag(v___x_2137_, 3);
lean_ctor_set(v___x_2137_, 0, v___x_2187_);
v___x_2189_ = v___x_2137_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v___x_2187_);
v___x_2189_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2190_ = l_Lean_MessageData_ofFormat(v___x_2189_);
lean_inc(v_ref_2139_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 1, v___x_2190_);
lean_ctor_set(v___x_2089_, 0, v_ref_2139_);
v___x_2192_ = v___x_2089_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_ref_2139_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2194_; 
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 0, v___x_2192_);
v___x_2194_ = v___x_2185_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
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
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
lean_dec_ref(v_site_2097_);
lean_del_object(v___x_2095_);
lean_dec(v_snd_2093_);
lean_dec(v_fst_2092_);
lean_del_object(v___x_2089_);
lean_dec(v_sp_2070_);
v_a_2200_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2202_ = v___x_2098_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2098_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2200_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
}
}
v___jp_2078_:
{
size_t v___x_2080_; size_t v___x_2081_; 
v___x_2080_ = ((size_t)1ULL);
v___x_2081_ = lean_usize_add(v_i_2073_, v___x_2080_);
v_i_2073_ = v___x_2081_;
v_b_2074_ = v_a_2079_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___boxed(lean_object* v___x_2211_, lean_object* v_sp_2212_, lean_object* v_as_2213_, lean_object* v_sz_2214_, lean_object* v_i_2215_, lean_object* v_b_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
uint8_t v___x_7096__boxed_2220_; size_t v_sz_boxed_2221_; size_t v_i_boxed_2222_; lean_object* v_res_2223_; 
v___x_7096__boxed_2220_ = lean_unbox(v___x_2211_);
v_sz_boxed_2221_ = lean_unbox_usize(v_sz_2214_);
lean_dec(v_sz_2214_);
v_i_boxed_2222_ = lean_unbox_usize(v_i_2215_);
lean_dec(v_i_2215_);
v_res_2223_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(v___x_7096__boxed_2220_, v_sp_2212_, v_as_2213_, v_sz_boxed_2221_, v_i_boxed_2222_, v_b_2216_, v___y_2217_, v___y_2218_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec_ref(v_as_2213_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(lean_object* v_sp_2230_, uint8_t v___y_2231_, lean_object* v_as_2232_, size_t v_sz_2233_, size_t v_i_2234_, lean_object* v_b_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_a_2239_; uint8_t v___x_2243_; 
v___x_2243_ = lean_usize_dec_lt(v_i_2234_, v_sz_2233_);
if (v___x_2243_ == 0)
{
lean_object* v___x_2244_; 
lean_dec(v_sp_2230_);
v___x_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2244_, 0, v_b_2235_);
return v___x_2244_;
}
else
{
lean_object* v_a_2245_; lean_object* v_snd_2246_; lean_object* v_fst_2247_; lean_object* v_fst_2248_; lean_object* v_snd_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2342_; 
v_a_2245_ = lean_array_uget_borrowed(v_as_2232_, v_i_2234_);
v_snd_2246_ = lean_ctor_get(v_a_2245_, 1);
lean_inc(v_snd_2246_);
v_fst_2247_ = lean_ctor_get(v_snd_2246_, 0);
lean_inc(v_fst_2247_);
v_fst_2248_ = lean_ctor_get(v_a_2245_, 0);
v_snd_2249_ = lean_ctor_get(v_snd_2246_, 1);
v_isSharedCheck_2342_ = !lean_is_exclusive(v_snd_2246_);
if (v_isSharedCheck_2342_ == 0)
{
lean_object* v_unused_2343_; 
v_unused_2343_ = lean_ctor_get(v_snd_2246_, 0);
lean_dec(v_unused_2343_);
v___x_2251_ = v_snd_2246_;
v_isShared_2252_ = v_isSharedCheck_2342_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_snd_2249_);
lean_dec(v_snd_2246_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2342_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v_site_2253_; lean_object* v_sourceString_2254_; lean_object* v___x_2255_; lean_object* v___y_2257_; lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; 
v_site_2253_ = lean_ctor_get(v_fst_2247_, 0);
lean_inc_ref(v_site_2253_);
v_sourceString_2254_ = lean_ctor_get(v_fst_2247_, 2);
lean_inc_ref(v_sourceString_2254_);
lean_dec(v_fst_2247_);
v___x_2255_ = lean_box(0);
v___x_2334_ = lean_string_utf8_byte_size(v_sourceString_2254_);
v___x_2335_ = lean_unsigned_to_nat(0u);
v___x_2336_ = lean_nat_dec_eq(v___x_2334_, v___x_2335_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2337_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__4));
v___x_2338_ = lean_string_append(v___x_2337_, v_sourceString_2254_);
lean_dec_ref(v_sourceString_2254_);
v___x_2339_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__5));
v___x_2340_ = lean_string_append(v___x_2338_, v___x_2339_);
v___y_2257_ = v___x_2340_;
goto v___jp_2256_;
}
else
{
lean_object* v___x_2341_; 
lean_dec_ref(v_sourceString_2254_);
v___x_2341_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___y_2257_ = v___x_2341_;
goto v___jp_2256_;
}
v___jp_2256_:
{
lean_object* v_ref_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v_ref_2258_ = lean_ctor_get(v___y_2236_, 2);
v___x_2259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4));
lean_inc(v_fst_2248_);
lean_inc(v_sp_2230_);
v___x_2260_ = l_Lean_SearchPath_findWithExt(v_sp_2230_, v___x_2259_, v_fst_2248_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
lean_inc(v_a_2261_);
lean_dec_ref_known(v___x_2260_, 1);
if (lean_obj_tag(v_a_2261_) == 0)
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2262_ = l_Lean_MessageData_toString(v_snd_2249_);
v___x_2263_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__0));
lean_inc(v_fst_2248_);
v___x_2264_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2248_, v___y_2231_);
v___x_2265_ = lean_string_append(v___x_2263_, v___x_2264_);
lean_dec_ref(v___x_2264_);
v___x_2266_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__1));
v___x_2267_ = lean_string_append(v___x_2265_, v___x_2266_);
v___x_2268_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2253_);
v___x_2269_ = lean_string_append(v___x_2267_, v___x_2268_);
lean_dec_ref(v___x_2268_);
v___x_2270_ = lean_string_append(v___x_2269_, v___y_2257_);
lean_dec_ref(v___y_2257_);
v___x_2271_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2));
v___x_2272_ = lean_string_append(v___x_2270_, v___x_2271_);
v___x_2273_ = lean_string_append(v___x_2272_, v___x_2262_);
lean_dec_ref(v___x_2262_);
v___x_2274_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2273_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_dec_ref_known(v___x_2274_, 1);
lean_del_object(v___x_2251_);
v_a_2239_ = v___x_2255_;
goto v___jp_2238_;
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2288_; 
lean_dec(v_sp_2230_);
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2277_ = v___x_2274_;
v_isShared_2278_ = v_isSharedCheck_2288_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2274_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2288_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2283_; 
v___x_2279_ = lean_io_error_to_string(v_a_2275_);
v___x_2280_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
v___x_2281_ = l_Lean_MessageData_ofFormat(v___x_2280_);
lean_inc(v_ref_2258_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v___x_2281_);
lean_ctor_set(v___x_2251_, 0, v_ref_2258_);
v___x_2283_ = v___x_2251_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_ref_2258_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v___x_2281_);
v___x_2283_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2285_; 
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2283_);
v___x_2285_ = v___x_2277_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v___x_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
}
else
{
lean_object* v_val_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2319_; 
v_val_2289_ = lean_ctor_get(v_a_2261_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v_a_2261_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2291_ = v_a_2261_;
v_isShared_2292_ = v_isSharedCheck_2319_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_val_2289_);
lean_dec(v_a_2261_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2319_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2293_ = l_Lean_MessageData_toString(v_snd_2249_);
v___x_2294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__3));
v___x_2295_ = lean_string_append(v_val_2289_, v___x_2294_);
v___x_2296_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2253_);
v___x_2297_ = lean_string_append(v___x_2295_, v___x_2296_);
lean_dec_ref(v___x_2296_);
v___x_2298_ = lean_string_append(v___x_2297_, v___y_2257_);
lean_dec_ref(v___y_2257_);
v___x_2299_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___closed__2));
v___x_2300_ = lean_string_append(v___x_2298_, v___x_2299_);
v___x_2301_ = lean_string_append(v___x_2300_, v___x_2293_);
lean_dec_ref(v___x_2293_);
v___x_2302_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2301_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_dec_ref_known(v___x_2302_, 1);
lean_del_object(v___x_2291_);
lean_del_object(v___x_2251_);
v_a_2239_ = v___x_2255_;
goto v___jp_2238_;
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v_sp_2230_);
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2305_ = v___x_2302_;
v_isShared_2306_ = v_isSharedCheck_2318_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2302_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2318_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2307_ = lean_io_error_to_string(v_a_2303_);
if (v_isShared_2292_ == 0)
{
lean_ctor_set_tag(v___x_2291_, 3);
lean_ctor_set(v___x_2291_, 0, v___x_2307_);
v___x_2309_ = v___x_2291_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2310_ = l_Lean_MessageData_ofFormat(v___x_2309_);
lean_inc(v_ref_2258_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v___x_2310_);
lean_ctor_set(v___x_2251_, 0, v_ref_2258_);
v___x_2312_ = v___x_2251_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_ref_2258_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2314_; 
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 0, v___x_2312_);
v___x_2314_ = v___x_2305_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
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
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2333_; 
lean_dec_ref(v___y_2257_);
lean_dec_ref(v_site_2253_);
lean_dec(v_snd_2249_);
lean_dec(v_sp_2230_);
v_a_2320_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2322_ = v___x_2260_;
v_isShared_2323_ = v_isSharedCheck_2333_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2260_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2333_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2328_; 
v___x_2324_ = lean_io_error_to_string(v_a_2320_);
v___x_2325_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
v___x_2326_ = l_Lean_MessageData_ofFormat(v___x_2325_);
lean_inc(v_ref_2258_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v___x_2326_);
lean_ctor_set(v___x_2251_, 0, v_ref_2258_);
v___x_2328_ = v___x_2251_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_ref_2258_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2330_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 0, v___x_2328_);
v___x_2330_ = v___x_2322_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
}
}
}
v___jp_2238_:
{
size_t v___x_2240_; size_t v___x_2241_; 
v___x_2240_ = ((size_t)1ULL);
v___x_2241_ = lean_usize_add(v_i_2234_, v___x_2240_);
v_i_2234_ = v___x_2241_;
v_b_2235_ = v_a_2239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg___boxed(lean_object* v_sp_2344_, lean_object* v___y_2345_, lean_object* v_as_2346_, lean_object* v_sz_2347_, lean_object* v_i_2348_, lean_object* v_b_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_){
_start:
{
uint8_t v___y_7378__boxed_2352_; size_t v_sz_boxed_2353_; size_t v_i_boxed_2354_; lean_object* v_res_2355_; 
v___y_7378__boxed_2352_ = lean_unbox(v___y_2345_);
v_sz_boxed_2353_ = lean_unbox_usize(v_sz_2347_);
lean_dec(v_sz_2347_);
v_i_boxed_2354_ = lean_unbox_usize(v_i_2348_);
lean_dec(v_i_2348_);
v_res_2355_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(v_sp_2344_, v___y_7378__boxed_2352_, v_as_2346_, v_sz_boxed_2353_, v_i_boxed_2354_, v_b_2349_, v___y_2350_);
lean_dec_ref(v___y_2350_);
lean_dec_ref(v_as_2346_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(lean_object* v_pkgRoot_2356_, lean_object* v_as_2357_, size_t v_sz_2358_, size_t v_i_2359_, lean_object* v_b_2360_){
_start:
{
lean_object* v_a_2363_; uint8_t v___x_2367_; 
v___x_2367_ = lean_usize_dec_lt(v_i_2359_, v_sz_2358_);
if (v___x_2367_ == 0)
{
lean_object* v___x_2368_; 
v___x_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2368_, 0, v_b_2360_);
return v___x_2368_;
}
else
{
lean_object* v_a_2369_; uint8_t v___x_2370_; 
v_a_2369_ = lean_array_uget_borrowed(v_as_2357_, v_i_2359_);
v___x_2370_ = l_Lean_Name_isPrefixOf(v_pkgRoot_2356_, v_a_2369_);
if (v___x_2370_ == 0)
{
v_a_2363_ = v_b_2360_;
goto v___jp_2362_;
}
else
{
lean_object* v___x_2371_; 
lean_inc(v_a_2369_);
v___x_2371_ = l_Lean_NameSet_insert(v_b_2360_, v_a_2369_);
v_a_2363_ = v___x_2371_;
goto v___jp_2362_;
}
}
v___jp_2362_:
{
size_t v___x_2364_; size_t v___x_2365_; 
v___x_2364_ = ((size_t)1ULL);
v___x_2365_ = lean_usize_add(v_i_2359_, v___x_2364_);
v_i_2359_ = v___x_2365_;
v_b_2360_ = v_a_2363_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1___boxed(lean_object* v_pkgRoot_2372_, lean_object* v_as_2373_, lean_object* v_sz_2374_, lean_object* v_i_2375_, lean_object* v_b_2376_, lean_object* v___y_2377_){
_start:
{
size_t v_sz_boxed_2378_; size_t v_i_boxed_2379_; lean_object* v_res_2380_; 
v_sz_boxed_2378_ = lean_unbox_usize(v_sz_2374_);
lean_dec(v_sz_2374_);
v_i_boxed_2379_ = lean_unbox_usize(v_i_2375_);
lean_dec(v_i_2375_);
v_res_2380_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(v_pkgRoot_2372_, v_as_2373_, v_sz_boxed_2378_, v_i_boxed_2379_, v_b_2376_);
lean_dec_ref(v_as_2373_);
lean_dec(v_pkgRoot_2372_);
return v_res_2380_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5(void){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = l_Lean_Options_empty;
v___x_2388_ = l_Lean_Core_getMaxHeartbeats(v___x_2387_);
return v___x_2388_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2389_ = lean_unsigned_to_nat(1u);
v___x_2390_ = l_Lean_firstFrontendMacroScope;
v___x_2391_ = lean_nat_add(v___x_2390_, v___x_2389_);
return v___x_2391_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2398_ = lean_box(0);
v___x_2399_ = lean_unsigned_to_nat(1u);
v___x_2400_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
v___x_2401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2400_);
lean_ctor_set(v___x_2401_, 1, v___x_2399_);
lean_ctor_set(v___x_2401_, 2, v___x_2398_);
return v___x_2401_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11(void){
_start:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2402_ = lean_unsigned_to_nat(32u);
v___x_2403_ = lean_mk_empty_array_with_capacity(v___x_2402_);
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
return v___x_2404_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12(void){
_start:
{
size_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2405_ = ((size_t)5ULL);
v___x_2406_ = lean_unsigned_to_nat(0u);
v___x_2407_ = lean_unsigned_to_nat(32u);
v___x_2408_ = lean_mk_empty_array_with_capacity(v___x_2407_);
v___x_2409_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11);
v___x_2410_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
lean_ctor_set(v___x_2410_, 1, v___x_2408_);
lean_ctor_set(v___x_2410_, 2, v___x_2406_);
lean_ctor_set(v___x_2410_, 3, v___x_2406_);
lean_ctor_set_usize(v___x_2410_, 4, v___x_2405_);
return v___x_2410_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13(void){
_start:
{
lean_object* v___x_2411_; uint64_t v___x_2412_; lean_object* v___x_2413_; 
v___x_2411_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2412_ = 0ULL;
v___x_2413_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2413_, 0, v___x_2411_);
lean_ctor_set_uint64(v___x_2413_, sizeof(void*)*1, v___x_2412_);
return v___x_2413_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14(void){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2414_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15(void){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2415_);
return v___x_2416_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2419_ = l_Lean_NameSet_empty;
v___x_2420_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
lean_ctor_set(v___x_2421_, 1, v___x_2420_);
lean_ctor_set(v___x_2421_, 2, v___x_2419_);
return v___x_2421_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; uint8_t v_unlocated_2424_; lean_object* v___x_2425_; 
v___x_2422_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2423_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15);
v_unlocated_2424_ = 1;
v___x_2425_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2425_, 0, v___x_2423_);
lean_ctor_set(v___x_2425_, 1, v___x_2423_);
lean_ctor_set(v___x_2425_, 2, v___x_2422_);
lean_ctor_set_uint8(v___x_2425_, sizeof(void*)*3, v_unlocated_2424_);
return v___x_2425_;
}
}
static uint8_t _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v___x_2428_ = l_Lean_diagnostics;
v___x_2429_ = l_Lean_Options_empty;
v___x_2430_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v___x_2429_, v___x_2428_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(lean_object* v_args_2431_, lean_object* v_linterOpts_2432_, lean_object* v_sp_2433_, lean_object* v_env_2434_, lean_object* v_pkgRoot_2435_, lean_object* v_docCheckedModules_2436_){
_start:
{
lean_object* v___y_2439_; lean_object* v_a_2440_; lean_object* v___y_2465_; uint8_t v___y_2466_; lean_object* v_a_2469_; uint8_t v___y_2473_; lean_object* v_a_2474_; lean_object* v___y_2491_; uint8_t v_lintOnly_2494_; uint8_t v_mode_2495_; lean_object* v___f_2496_; lean_object* v___y_2498_; uint8_t v___y_2499_; uint8_t v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; uint8_t v___y_2504_; lean_object* v_fileName_2505_; lean_object* v_fileMap_2506_; lean_object* v_currNamespace_2507_; lean_object* v_openDecls_2508_; lean_object* v_initHeartbeats_2509_; lean_object* v_maxHeartbeats_2510_; lean_object* v_quotContext_2511_; lean_object* v_currMacroScope_2512_; lean_object* v_cancelTk_x3f_2513_; lean_object* v_inheritedTraceOptions_2514_; lean_object* v_currRecDepth_2515_; lean_object* v_ref_2516_; uint8_t v_suppressElabErrors_2517_; lean_object* v___y_2518_; lean_object* v___y_2548_; uint8_t v___y_2549_; uint8_t v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; uint8_t v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2572_; uint8_t v___y_2573_; uint8_t v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; uint8_t v___y_2580_; uint8_t v___y_2581_; uint8_t v___y_2602_; 
v_lintOnly_2494_ = lean_ctor_get_uint8(v_args_2431_, sizeof(void*)*4);
v_mode_2495_ = lean_ctor_get_uint8(v_args_2431_, sizeof(void*)*4 + 1);
v___f_2496_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3));
if (v_lintOnly_2494_ == 0)
{
lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2641_ = l_Lean_linter_doc_deferred;
v___x_2642_ = l_Lean_Linter_getLinterValue(v___x_2641_, v_linterOpts_2432_);
v___y_2602_ = v___x_2642_;
goto v___jp_2601_;
}
else
{
lean_object* v___x_2643_; lean_object* v_name_2644_; uint8_t v___x_2645_; 
v___x_2643_ = l_Lean_linter_doc_deferred;
v_name_2644_ = lean_ctor_get(v___x_2643_, 0);
v___x_2645_ = l_Lean_Linter_isLinterEnabledByOptions(v_name_2644_, v_linterOpts_2432_);
v___y_2602_ = v___x_2645_;
goto v___jp_2601_;
}
v___jp_2438_:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; size_t v_sz_2444_; size_t v___x_2445_; lean_object* v___x_2446_; 
v___x_2441_ = lean_st_ref_get(v___y_2439_);
lean_dec(v___y_2439_);
lean_dec(v___x_2441_);
v___x_2442_ = l_Lean_Environment_header(v_env_2434_);
lean_dec_ref(v_env_2434_);
v___x_2443_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2442_);
lean_dec_ref(v___x_2442_);
v_sz_2444_ = lean_array_size(v___x_2443_);
v___x_2445_ = ((size_t)0ULL);
v___x_2446_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(v_pkgRoot_2435_, v___x_2443_, v_sz_2444_, v___x_2445_, v_docCheckedModules_2436_);
lean_dec_ref(v___x_2443_);
lean_dec(v_pkgRoot_2435_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2455_; 
v_a_2447_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2449_ = v___x_2446_;
v_isShared_2450_ = v_isSharedCheck_2455_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2455_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; lean_object* v___x_2453_; 
v___x_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2451_, 0, v_a_2440_);
lean_ctor_set(v___x_2451_, 1, v_a_2447_);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 0, v___x_2451_);
v___x_2453_ = v___x_2449_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v___x_2451_);
v___x_2453_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
return v___x_2453_;
}
}
}
else
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2463_; 
lean_dec_ref(v_a_2440_);
v_a_2456_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2458_ = v___x_2446_;
v_isShared_2459_ = v_isSharedCheck_2463_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2446_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2463_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2461_; 
if (v_isShared_2459_ == 0)
{
v___x_2461_ = v___x_2458_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v_a_2456_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
v___jp_2464_:
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_2467_, 0, v___y_2466_);
v___y_2439_ = v___y_2465_;
v_a_2440_ = v___x_2467_;
goto v___jp_2438_;
}
v___jp_2468_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = lean_mk_io_user_error(v_a_2469_);
v___x_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2470_);
return v___x_2471_;
}
v___jp_2472_:
{
if (lean_obj_tag(v_a_2474_) == 0)
{
lean_object* v_msg_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_msg_2475_ = lean_ctor_get(v_a_2474_, 1);
lean_inc_ref(v_msg_2475_);
lean_dec_ref_known(v_a_2474_, 2);
v___x_2476_ = l_Lean_MessageData_toString(v_msg_2475_);
v___x_2477_ = lean_mk_io_user_error(v___x_2476_);
v___x_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
return v___x_2478_;
}
else
{
lean_object* v_id_2479_; lean_object* v___x_2480_; 
v_id_2479_ = lean_ctor_get(v_a_2474_, 0);
lean_inc(v_id_2479_);
lean_dec_ref_known(v_a_2474_, 2);
v___x_2480_ = l_Lean_InternalExceptionId_getName(v_id_2479_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v_a_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
lean_dec(v_id_2479_);
v_a_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2480_, 1);
v___x_2482_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_2483_ = l_Lean_Name_toString(v_a_2481_, v___y_2473_);
v___x_2484_ = lean_string_append(v___x_2482_, v___x_2483_);
lean_dec_ref(v___x_2483_);
v_a_2469_ = v___x_2484_;
goto v___jp_2468_;
}
else
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
lean_dec_ref_known(v___x_2480_, 1);
v___x_2485_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_2486_ = l_Nat_reprFast(v_id_2479_);
v___x_2487_ = lean_string_append(v___x_2485_, v___x_2486_);
lean_dec_ref(v___x_2486_);
v___x_2488_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_2489_ = lean_string_append(v___x_2487_, v___x_2488_);
v_a_2469_ = v___x_2489_;
goto v___jp_2468_;
}
}
}
v___jp_2490_:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___y_2491_);
lean_ctor_set(v___x_2492_, 1, v_docCheckedModules_2436_);
v___x_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
return v___x_2493_;
}
v___jp_2497_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2519_ = l_Lean_maxRecDepth;
v___x_2520_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v___y_2501_, v___x_2519_);
lean_inc_ref(v___y_2501_);
v___x_2521_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2521_, 0, v_fileName_2505_);
lean_ctor_set(v___x_2521_, 1, v_fileMap_2506_);
lean_ctor_set(v___x_2521_, 2, v___y_2501_);
lean_ctor_set(v___x_2521_, 3, v___x_2520_);
lean_ctor_set(v___x_2521_, 4, v_currNamespace_2507_);
lean_ctor_set(v___x_2521_, 5, v_openDecls_2508_);
lean_ctor_set(v___x_2521_, 6, v_initHeartbeats_2509_);
lean_ctor_set(v___x_2521_, 7, v_maxHeartbeats_2510_);
lean_ctor_set(v___x_2521_, 8, v_quotContext_2511_);
lean_ctor_set(v___x_2521_, 9, v_currMacroScope_2512_);
lean_ctor_set(v___x_2521_, 10, v_cancelTk_x3f_2513_);
lean_ctor_set(v___x_2521_, 11, v_inheritedTraceOptions_2514_);
v___x_2522_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
lean_ctor_set(v___x_2522_, 1, v_currRecDepth_2515_);
lean_ctor_set(v___x_2522_, 2, v_ref_2516_);
lean_ctor_set_uint8(v___x_2522_, sizeof(void*)*3, v___y_2504_);
lean_ctor_set_uint8(v___x_2522_, sizeof(void*)*3 + 1, v_suppressElabErrors_2517_);
v___x_2523_ = l_Lean_Doc_DeferredCheck_run(v___y_2503_, v___f_2496_, v___x_2522_, v___y_2518_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; uint8_t v___x_2525_; uint8_t v___x_2526_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
v___x_2525_ = 1;
v___x_2526_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_2495_, v___x_2525_);
if (v___x_2526_ == 0)
{
lean_object* v___x_2527_; size_t v_sz_2528_; size_t v___x_2529_; lean_object* v___x_2530_; 
lean_dec(v___y_2518_);
v___x_2527_ = lean_box(0);
v_sz_2528_ = lean_array_size(v_a_2524_);
v___x_2529_ = ((size_t)0ULL);
v___x_2530_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(v_sp_2433_, v___y_2500_, v_a_2524_, v_sz_2528_, v___x_2529_, v___x_2527_, v___x_2522_);
lean_dec_ref_known(v___x_2522_, 3);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v___x_2531_; uint8_t v___x_2532_; 
lean_dec_ref_known(v___x_2530_, 1);
v___x_2531_ = lean_array_get_size(v_a_2524_);
lean_dec(v_a_2524_);
v___x_2532_ = lean_nat_dec_eq(v___x_2531_, v___y_2498_);
lean_dec(v___y_2498_);
if (v___x_2532_ == 0)
{
v___y_2465_ = v___y_2502_;
v___y_2466_ = v___y_2500_;
goto v___jp_2464_;
}
else
{
v___y_2465_ = v___y_2502_;
v___y_2466_ = v___x_2526_;
goto v___jp_2464_;
}
}
else
{
lean_object* v_a_2533_; 
lean_dec(v_a_2524_);
lean_dec(v___y_2502_);
lean_dec(v___y_2498_);
lean_dec(v_docCheckedModules_2436_);
lean_dec(v_pkgRoot_2435_);
lean_dec_ref(v_env_2434_);
v_a_2533_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2530_, 1);
v___y_2473_ = v___y_2500_;
v_a_2474_ = v_a_2533_;
goto v___jp_2472_;
}
}
else
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; size_t v_sz_2537_; size_t v___x_2538_; lean_object* v___x_2539_; 
v___x_2534_ = lean_mk_empty_array_with_capacity(v___y_2498_);
lean_dec(v___y_2498_);
v___x_2535_ = lean_box(v___y_2499_);
v___x_2536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2534_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v_sz_2537_ = lean_array_size(v_a_2524_);
v___x_2538_ = ((size_t)0ULL);
v___x_2539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5(v___x_2526_, v_sp_2433_, v_a_2524_, v_sz_2537_, v___x_2538_, v___x_2536_, v___x_2522_, v___y_2518_);
lean_dec(v___y_2518_);
lean_dec_ref_known(v___x_2522_, 3);
lean_dec(v_a_2524_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v_fst_2541_; lean_object* v_snd_2542_; lean_object* v___x_2543_; uint8_t v___x_2544_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v_fst_2541_ = lean_ctor_get(v_a_2540_, 0);
lean_inc(v_fst_2541_);
v_snd_2542_ = lean_ctor_get(v_a_2540_, 1);
lean_inc(v_snd_2542_);
lean_dec(v_a_2540_);
v___x_2543_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2543_, 0, v_fst_2541_);
v___x_2544_ = lean_unbox(v_snd_2542_);
lean_dec(v_snd_2542_);
lean_ctor_set_uint8(v___x_2543_, sizeof(void*)*1, v___x_2544_);
v___y_2439_ = v___y_2502_;
v_a_2440_ = v___x_2543_;
goto v___jp_2438_;
}
else
{
lean_object* v_a_2545_; 
lean_dec(v___y_2502_);
lean_dec(v_docCheckedModules_2436_);
lean_dec(v_pkgRoot_2435_);
lean_dec_ref(v_env_2434_);
v_a_2545_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2545_);
lean_dec_ref_known(v___x_2539_, 1);
v___y_2473_ = v___y_2500_;
v_a_2474_ = v_a_2545_;
goto v___jp_2472_;
}
}
}
else
{
lean_object* v_a_2546_; 
lean_dec_ref_known(v___x_2522_, 3);
lean_dec(v___y_2518_);
lean_dec(v___y_2502_);
lean_dec(v___y_2498_);
lean_dec(v_docCheckedModules_2436_);
lean_dec(v_pkgRoot_2435_);
lean_dec_ref(v_env_2434_);
lean_dec(v_sp_2433_);
v_a_2546_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2546_);
lean_dec_ref_known(v___x_2523_, 1);
v___y_2473_ = v___y_2500_;
v_a_2474_ = v_a_2546_;
goto v___jp_2472_;
}
}
v___jp_2547_:
{
lean_object* v_toCold_2557_; lean_object* v_currRecDepth_2558_; lean_object* v_ref_2559_; uint8_t v_suppressElabErrors_2560_; lean_object* v_fileName_2561_; lean_object* v_fileMap_2562_; lean_object* v_currNamespace_2563_; lean_object* v_openDecls_2564_; lean_object* v_initHeartbeats_2565_; lean_object* v_maxHeartbeats_2566_; lean_object* v_quotContext_2567_; lean_object* v_currMacroScope_2568_; lean_object* v_cancelTk_x3f_2569_; lean_object* v_inheritedTraceOptions_2570_; 
v_toCold_2557_ = lean_ctor_get(v___y_2555_, 0);
lean_inc_ref(v_toCold_2557_);
v_currRecDepth_2558_ = lean_ctor_get(v___y_2555_, 1);
lean_inc(v_currRecDepth_2558_);
v_ref_2559_ = lean_ctor_get(v___y_2555_, 2);
lean_inc(v_ref_2559_);
v_suppressElabErrors_2560_ = lean_ctor_get_uint8(v___y_2555_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_2555_);
v_fileName_2561_ = lean_ctor_get(v_toCold_2557_, 0);
lean_inc_ref(v_fileName_2561_);
v_fileMap_2562_ = lean_ctor_get(v_toCold_2557_, 1);
lean_inc_ref(v_fileMap_2562_);
v_currNamespace_2563_ = lean_ctor_get(v_toCold_2557_, 4);
lean_inc(v_currNamespace_2563_);
v_openDecls_2564_ = lean_ctor_get(v_toCold_2557_, 5);
lean_inc(v_openDecls_2564_);
v_initHeartbeats_2565_ = lean_ctor_get(v_toCold_2557_, 6);
lean_inc(v_initHeartbeats_2565_);
v_maxHeartbeats_2566_ = lean_ctor_get(v_toCold_2557_, 7);
lean_inc(v_maxHeartbeats_2566_);
v_quotContext_2567_ = lean_ctor_get(v_toCold_2557_, 8);
lean_inc(v_quotContext_2567_);
v_currMacroScope_2568_ = lean_ctor_get(v_toCold_2557_, 9);
lean_inc(v_currMacroScope_2568_);
v_cancelTk_x3f_2569_ = lean_ctor_get(v_toCold_2557_, 10);
lean_inc(v_cancelTk_x3f_2569_);
v_inheritedTraceOptions_2570_ = lean_ctor_get(v_toCold_2557_, 11);
lean_inc_ref(v_inheritedTraceOptions_2570_);
lean_dec_ref(v_toCold_2557_);
v___y_2498_ = v___y_2548_;
v___y_2499_ = v___y_2549_;
v___y_2500_ = v___y_2550_;
v___y_2501_ = v___y_2551_;
v___y_2502_ = v___y_2552_;
v___y_2503_ = v___y_2553_;
v___y_2504_ = v___y_2554_;
v_fileName_2505_ = v_fileName_2561_;
v_fileMap_2506_ = v_fileMap_2562_;
v_currNamespace_2507_ = v_currNamespace_2563_;
v_openDecls_2508_ = v_openDecls_2564_;
v_initHeartbeats_2509_ = v_initHeartbeats_2565_;
v_maxHeartbeats_2510_ = v_maxHeartbeats_2566_;
v_quotContext_2511_ = v_quotContext_2567_;
v_currMacroScope_2512_ = v_currMacroScope_2568_;
v_cancelTk_x3f_2513_ = v_cancelTk_x3f_2569_;
v_inheritedTraceOptions_2514_ = v_inheritedTraceOptions_2570_;
v_currRecDepth_2515_ = v_currRecDepth_2558_;
v_ref_2516_ = v_ref_2559_;
v_suppressElabErrors_2517_ = v_suppressElabErrors_2560_;
v___y_2518_ = v___y_2556_;
goto v___jp_2497_;
}
v___jp_2571_:
{
if (v___y_2581_ == 0)
{
lean_object* v___x_2582_; lean_object* v_env_2583_; lean_object* v_nextMacroScope_2584_; lean_object* v_ngen_2585_; lean_object* v_auxDeclNGen_2586_; lean_object* v_traceState_2587_; lean_object* v_messages_2588_; lean_object* v_infoState_2589_; lean_object* v_snapshotTasks_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2599_; 
v___x_2582_ = lean_st_ref_take(v___y_2578_);
v_env_2583_ = lean_ctor_get(v___x_2582_, 0);
v_nextMacroScope_2584_ = lean_ctor_get(v___x_2582_, 1);
v_ngen_2585_ = lean_ctor_get(v___x_2582_, 2);
v_auxDeclNGen_2586_ = lean_ctor_get(v___x_2582_, 3);
v_traceState_2587_ = lean_ctor_get(v___x_2582_, 4);
v_messages_2588_ = lean_ctor_get(v___x_2582_, 6);
v_infoState_2589_ = lean_ctor_get(v___x_2582_, 7);
v_snapshotTasks_2590_ = lean_ctor_get(v___x_2582_, 8);
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2599_ == 0)
{
lean_object* v_unused_2600_; 
v_unused_2600_ = lean_ctor_get(v___x_2582_, 5);
lean_dec(v_unused_2600_);
v___x_2592_ = v___x_2582_;
v_isShared_2593_ = v_isSharedCheck_2599_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_snapshotTasks_2590_);
lean_inc(v_infoState_2589_);
lean_inc(v_messages_2588_);
lean_inc(v_traceState_2587_);
lean_inc(v_auxDeclNGen_2586_);
lean_inc(v_ngen_2585_);
lean_inc(v_nextMacroScope_2584_);
lean_inc(v_env_2583_);
lean_dec(v___x_2582_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2599_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2594_ = l_Lean_Kernel_enableDiag(v_env_2583_, v___y_2580_);
lean_inc_ref(v___y_2575_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 5, v___y_2575_);
lean_ctor_set(v___x_2592_, 0, v___x_2594_);
v___x_2596_ = v___x_2592_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2594_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_nextMacroScope_2584_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v_ngen_2585_);
lean_ctor_set(v_reuseFailAlloc_2598_, 3, v_auxDeclNGen_2586_);
lean_ctor_set(v_reuseFailAlloc_2598_, 4, v_traceState_2587_);
lean_ctor_set(v_reuseFailAlloc_2598_, 5, v___y_2575_);
lean_ctor_set(v_reuseFailAlloc_2598_, 6, v_messages_2588_);
lean_ctor_set(v_reuseFailAlloc_2598_, 7, v_infoState_2589_);
lean_ctor_set(v_reuseFailAlloc_2598_, 8, v_snapshotTasks_2590_);
v___x_2596_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
lean_object* v___x_2597_; 
v___x_2597_ = lean_st_ref_put(v___y_2578_, v___x_2596_);
lean_inc(v___y_2578_);
v___y_2548_ = v___y_2572_;
v___y_2549_ = v___y_2574_;
v___y_2550_ = v___y_2573_;
v___y_2551_ = v___y_2576_;
v___y_2552_ = v___y_2578_;
v___y_2553_ = v___y_2579_;
v___y_2554_ = v___y_2580_;
v___y_2555_ = v___y_2577_;
v___y_2556_ = v___y_2578_;
goto v___jp_2547_;
}
}
}
else
{
lean_inc(v___y_2578_);
v___y_2548_ = v___y_2572_;
v___y_2549_ = v___y_2574_;
v___y_2550_ = v___y_2573_;
v___y_2551_ = v___y_2576_;
v___y_2552_ = v___y_2578_;
v___y_2553_ = v___y_2579_;
v___y_2554_ = v___y_2580_;
v___y_2555_ = v___y_2577_;
v___y_2556_ = v___y_2578_;
goto v___jp_2547_;
}
}
v___jp_2601_:
{
if (v___y_2602_ == 0)
{
uint8_t v___x_2603_; uint8_t v___x_2604_; 
lean_dec(v_pkgRoot_2435_);
lean_dec_ref(v_env_2434_);
lean_dec(v_sp_2433_);
v___x_2603_ = 1;
v___x_2604_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_2495_, v___x_2603_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2605_; 
v___x_2605_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_2605_, 0, v___x_2604_);
v___y_2491_ = v___x_2605_;
goto v___jp_2490_;
}
else
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_2607_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*1, v___y_2602_);
v___y_2491_ = v___x_2607_;
goto v___jp_2490_;
}
}
else
{
lean_object* v___x_2608_; lean_object* v___f_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; uint8_t v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; lean_object* v___x_2638_; lean_object* v_env_2639_; uint8_t v___x_2640_; 
v___x_2608_ = lean_box(v___y_2602_);
lean_inc(v_docCheckedModules_2436_);
lean_inc(v_pkgRoot_2435_);
v___f_2609_ = lean_alloc_closure((void*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2609_, 0, v_pkgRoot_2435_);
lean_closure_set(v___f_2609_, 1, v_docCheckedModules_2436_);
lean_closure_set(v___f_2609_, 2, v___x_2608_);
v___x_2610_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_2611_ = l_Lean_instInhabitedFileMap_default;
v___x_2612_ = l_Lean_Options_empty;
v___x_2613_ = lean_unsigned_to_nat(1000u);
v___x_2614_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
v___x_2615_ = lean_box(0);
v___x_2616_ = lean_unsigned_to_nat(0u);
v___x_2617_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_2618_ = l_Lean_firstFrontendMacroScope;
v___x_2619_ = lean_box(0);
v___x_2620_ = lean_box(0);
v___x_2621_ = 0;
v___x_2622_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_2623_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9));
v___x_2624_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10);
v___x_2625_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_2626_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_2627_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_2628_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_2629_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19));
lean_inc_ref(v_env_2434_);
v___x_2630_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2630_, 0, v_env_2434_);
lean_ctor_set(v___x_2630_, 1, v___x_2622_);
lean_ctor_set(v___x_2630_, 2, v___x_2623_);
lean_ctor_set(v___x_2630_, 3, v___x_2624_);
lean_ctor_set(v___x_2630_, 4, v___x_2625_);
lean_ctor_set(v___x_2630_, 5, v___x_2626_);
lean_ctor_set(v___x_2630_, 6, v___x_2627_);
lean_ctor_set(v___x_2630_, 7, v___x_2628_);
lean_ctor_set(v___x_2630_, 8, v___x_2629_);
v___x_2631_ = lean_io_get_num_heartbeats();
v___x_2632_ = lean_st_mk_ref(v___x_2630_);
v___x_2633_ = l_Lean_inheritedTraceOptions;
v___x_2634_ = lean_st_ref_get(v___x_2633_);
lean_inc(v___x_2634_);
lean_inc(v___x_2631_);
v___x_2635_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2610_);
lean_ctor_set(v___x_2635_, 1, v___x_2611_);
lean_ctor_set(v___x_2635_, 2, v___x_2612_);
lean_ctor_set(v___x_2635_, 3, v___x_2613_);
lean_ctor_set(v___x_2635_, 4, v___x_2614_);
lean_ctor_set(v___x_2635_, 5, v___x_2615_);
lean_ctor_set(v___x_2635_, 6, v___x_2631_);
lean_ctor_set(v___x_2635_, 7, v___x_2617_);
lean_ctor_set(v___x_2635_, 8, v___x_2614_);
lean_ctor_set(v___x_2635_, 9, v___x_2618_);
lean_ctor_set(v___x_2635_, 10, v___x_2619_);
lean_ctor_set(v___x_2635_, 11, v___x_2634_);
v___x_2636_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
lean_ctor_set(v___x_2636_, 1, v___x_2616_);
lean_ctor_set(v___x_2636_, 2, v___x_2620_);
lean_ctor_set_uint8(v___x_2636_, sizeof(void*)*3, v___x_2621_);
lean_ctor_set_uint8(v___x_2636_, sizeof(void*)*3 + 1, v___x_2621_);
v___x_2637_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_2638_ = lean_st_ref_get(v___x_2632_);
v_env_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc_ref(v_env_2639_);
lean_dec(v___x_2638_);
v___x_2640_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2639_);
lean_dec_ref(v_env_2639_);
if (v___x_2637_ == 0)
{
if (v___x_2640_ == 0)
{
lean_dec_ref_known(v___x_2636_, 3);
lean_inc(v___x_2632_);
v___y_2498_ = v___x_2616_;
v___y_2499_ = v___x_2621_;
v___y_2500_ = v___y_2602_;
v___y_2501_ = v___x_2612_;
v___y_2502_ = v___x_2632_;
v___y_2503_ = v___f_2609_;
v___y_2504_ = v___x_2637_;
v_fileName_2505_ = v___x_2610_;
v_fileMap_2506_ = v___x_2611_;
v_currNamespace_2507_ = v___x_2614_;
v_openDecls_2508_ = v___x_2615_;
v_initHeartbeats_2509_ = v___x_2631_;
v_maxHeartbeats_2510_ = v___x_2617_;
v_quotContext_2511_ = v___x_2614_;
v_currMacroScope_2512_ = v___x_2618_;
v_cancelTk_x3f_2513_ = v___x_2619_;
v_inheritedTraceOptions_2514_ = v___x_2634_;
v_currRecDepth_2515_ = v___x_2616_;
v_ref_2516_ = v___x_2620_;
v_suppressElabErrors_2517_ = v___x_2621_;
v___y_2518_ = v___x_2632_;
goto v___jp_2497_;
}
else
{
lean_dec(v___x_2634_);
lean_dec(v___x_2631_);
v___y_2572_ = v___x_2616_;
v___y_2573_ = v___y_2602_;
v___y_2574_ = v___x_2621_;
v___y_2575_ = v___x_2626_;
v___y_2576_ = v___x_2612_;
v___y_2577_ = v___x_2636_;
v___y_2578_ = v___x_2632_;
v___y_2579_ = v___f_2609_;
v___y_2580_ = v___x_2637_;
v___y_2581_ = v___x_2637_;
goto v___jp_2571_;
}
}
else
{
lean_dec(v___x_2634_);
lean_dec(v___x_2631_);
v___y_2572_ = v___x_2616_;
v___y_2573_ = v___y_2602_;
v___y_2574_ = v___x_2621_;
v___y_2575_ = v___x_2626_;
v___y_2576_ = v___x_2612_;
v___y_2577_ = v___x_2636_;
v___y_2578_ = v___x_2632_;
v___y_2579_ = v___f_2609_;
v___y_2580_ = v___x_2637_;
v___y_2581_ = v___x_2640_;
goto v___jp_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___boxed(lean_object* v_args_2646_, lean_object* v_linterOpts_2647_, lean_object* v_sp_2648_, lean_object* v_env_2649_, lean_object* v_pkgRoot_2650_, lean_object* v_docCheckedModules_2651_, lean_object* v_a_2652_){
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(v_args_2646_, v_linterOpts_2647_, v_sp_2648_, v_env_2649_, v_pkgRoot_2650_, v_docCheckedModules_2651_);
lean_dec_ref(v_linterOpts_2647_);
lean_dec_ref(v_args_2646_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(lean_object* v_sp_2654_, uint8_t v___y_2655_, lean_object* v_as_2656_, size_t v_sz_2657_, size_t v_i_2658_, lean_object* v_b_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___redArg(v_sp_2654_, v___y_2655_, v_as_2656_, v_sz_2657_, v_i_2658_, v_b_2659_, v___y_2660_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___boxed(lean_object* v_sp_2664_, lean_object* v___y_2665_, lean_object* v_as_2666_, lean_object* v_sz_2667_, lean_object* v_i_2668_, lean_object* v_b_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
uint8_t v___y_8113__boxed_2673_; size_t v_sz_boxed_2674_; size_t v_i_boxed_2675_; lean_object* v_res_2676_; 
v___y_8113__boxed_2673_ = lean_unbox(v___y_2665_);
v_sz_boxed_2674_ = lean_unbox_usize(v_sz_2667_);
lean_dec(v_sz_2667_);
v_i_boxed_2675_ = lean_unbox_usize(v_i_2668_);
lean_dec(v_i_2668_);
v_res_2676_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(v_sp_2664_, v___y_8113__boxed_2673_, v_as_2666_, v_sz_boxed_2674_, v_i_boxed_2675_, v_b_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec_ref(v_as_2666_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(lean_object* v_linterOpts_2677_, lean_object* v_as_2678_, size_t v_i_2679_, size_t v_stop_2680_, lean_object* v_b_2681_){
_start:
{
lean_object* v___y_2683_; uint8_t v___x_2687_; 
v___x_2687_ = lean_usize_dec_eq(v_i_2679_, v_stop_2680_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; lean_object* v_linter_2689_; uint8_t v___x_2690_; 
v___x_2688_ = lean_array_uget_borrowed(v_as_2678_, v_i_2679_);
v_linter_2689_ = lean_ctor_get(v___x_2688_, 0);
v___x_2690_ = l_Lean_Linter_isLinterEnabledByOptions(v_linter_2689_, v_linterOpts_2677_);
if (v___x_2690_ == 0)
{
v___y_2683_ = v_b_2681_;
goto v___jp_2682_;
}
else
{
lean_object* v___x_2691_; 
lean_inc(v___x_2688_);
v___x_2691_ = lean_array_push(v_b_2681_, v___x_2688_);
v___y_2683_ = v___x_2691_;
goto v___jp_2682_;
}
}
else
{
return v_b_2681_;
}
v___jp_2682_:
{
size_t v___x_2684_; size_t v___x_2685_; 
v___x_2684_ = ((size_t)1ULL);
v___x_2685_ = lean_usize_add(v_i_2679_, v___x_2684_);
v_i_2679_ = v___x_2685_;
v_b_2681_ = v___y_2683_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___boxed(lean_object* v_linterOpts_2692_, lean_object* v_as_2693_, lean_object* v_i_2694_, lean_object* v_stop_2695_, lean_object* v_b_2696_){
_start:
{
size_t v_i_boxed_2697_; size_t v_stop_boxed_2698_; lean_object* v_res_2699_; 
v_i_boxed_2697_ = lean_unbox_usize(v_i_2694_);
lean_dec(v_i_2694_);
v_stop_boxed_2698_ = lean_unbox_usize(v_stop_2695_);
lean_dec(v_stop_2695_);
v_res_2699_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_linterOpts_2692_, v_as_2693_, v_i_boxed_2697_, v_stop_boxed_2698_, v_b_2696_);
lean_dec_ref(v_as_2693_);
lean_dec_ref(v_linterOpts_2692_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(lean_object* v_linterOpts_2702_, lean_object* v_as_2703_, size_t v_i_2704_, size_t v_stop_2705_, lean_object* v_b_2706_){
_start:
{
lean_object* v___y_2708_; uint8_t v___x_2712_; 
v___x_2712_ = lean_usize_dec_eq(v_i_2704_, v_stop_2705_);
if (v___x_2712_ == 0)
{
lean_object* v___x_2713_; lean_object* v_fst_2714_; lean_object* v_snd_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2739_; 
v___x_2713_ = lean_array_uget(v_as_2703_, v_i_2704_);
v_fst_2714_ = lean_ctor_get(v___x_2713_, 0);
v_snd_2715_ = lean_ctor_get(v___x_2713_, 1);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2717_ = v___x_2713_;
v_isShared_2718_ = v_isSharedCheck_2739_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_snd_2715_);
lean_inc(v_fst_2714_);
lean_dec(v___x_2713_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2739_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___y_2720_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; 
v___x_2728_ = lean_unsigned_to_nat(0u);
v___x_2729_ = lean_array_get_size(v_snd_2715_);
v___x_2730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0));
v___x_2731_ = lean_nat_dec_lt(v___x_2728_, v___x_2729_);
if (v___x_2731_ == 0)
{
lean_dec(v_snd_2715_);
v___y_2720_ = v___x_2730_;
goto v___jp_2719_;
}
else
{
uint8_t v___x_2732_; 
v___x_2732_ = lean_nat_dec_le(v___x_2729_, v___x_2729_);
if (v___x_2732_ == 0)
{
if (v___x_2731_ == 0)
{
lean_dec(v_snd_2715_);
v___y_2720_ = v___x_2730_;
goto v___jp_2719_;
}
else
{
size_t v___x_2733_; size_t v___x_2734_; lean_object* v___x_2735_; 
v___x_2733_ = ((size_t)0ULL);
v___x_2734_ = lean_usize_of_nat(v___x_2729_);
v___x_2735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_linterOpts_2702_, v_snd_2715_, v___x_2733_, v___x_2734_, v___x_2730_);
lean_dec(v_snd_2715_);
v___y_2720_ = v___x_2735_;
goto v___jp_2719_;
}
}
else
{
size_t v___x_2736_; size_t v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = ((size_t)0ULL);
v___x_2737_ = lean_usize_of_nat(v___x_2729_);
v___x_2738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_linterOpts_2702_, v_snd_2715_, v___x_2736_, v___x_2737_, v___x_2730_);
lean_dec(v_snd_2715_);
v___y_2720_ = v___x_2738_;
goto v___jp_2719_;
}
}
v___jp_2719_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2721_ = lean_array_get_size(v___y_2720_);
v___x_2722_ = lean_unsigned_to_nat(0u);
v___x_2723_ = lean_nat_dec_eq(v___x_2721_, v___x_2722_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2725_; 
if (v_isShared_2718_ == 0)
{
lean_ctor_set(v___x_2717_, 1, v___y_2720_);
v___x_2725_ = v___x_2717_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_fst_2714_);
lean_ctor_set(v_reuseFailAlloc_2727_, 1, v___y_2720_);
v___x_2725_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
lean_object* v___x_2726_; 
v___x_2726_ = lean_array_push(v_b_2706_, v___x_2725_);
v___y_2708_ = v___x_2726_;
goto v___jp_2707_;
}
}
else
{
lean_dec_ref(v___y_2720_);
lean_del_object(v___x_2717_);
lean_dec(v_fst_2714_);
v___y_2708_ = v_b_2706_;
goto v___jp_2707_;
}
}
}
}
else
{
return v_b_2706_;
}
v___jp_2707_:
{
size_t v___x_2709_; size_t v___x_2710_; 
v___x_2709_ = ((size_t)1ULL);
v___x_2710_ = lean_usize_add(v_i_2704_, v___x_2709_);
v_i_2704_ = v___x_2710_;
v_b_2706_ = v___y_2708_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___boxed(lean_object* v_linterOpts_2740_, lean_object* v_as_2741_, lean_object* v_i_2742_, lean_object* v_stop_2743_, lean_object* v_b_2744_){
_start:
{
size_t v_i_boxed_2745_; size_t v_stop_boxed_2746_; lean_object* v_res_2747_; 
v_i_boxed_2745_ = lean_unbox_usize(v_i_2742_);
lean_dec(v_i_2742_);
v_stop_boxed_2746_ = lean_unbox_usize(v_stop_2743_);
lean_dec(v_stop_2743_);
v_res_2747_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(v_linterOpts_2740_, v_as_2741_, v_i_boxed_2745_, v_stop_boxed_2746_, v_b_2744_);
lean_dec_ref(v_as_2741_);
lean_dec_ref(v_linterOpts_2740_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(lean_object* v_linterOpts_2748_, lean_object* v_as_2749_, lean_object* v_start_2750_, lean_object* v_stop_2751_){
_start:
{
lean_object* v___x_2752_; uint8_t v___x_2753_; 
v___x_2752_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0));
v___x_2753_ = lean_nat_dec_lt(v_start_2750_, v_stop_2751_);
if (v___x_2753_ == 0)
{
return v___x_2752_;
}
else
{
lean_object* v___x_2754_; uint8_t v___x_2755_; 
v___x_2754_ = lean_array_get_size(v_as_2749_);
v___x_2755_ = lean_nat_dec_le(v_stop_2751_, v___x_2754_);
if (v___x_2755_ == 0)
{
uint8_t v___x_2756_; 
v___x_2756_ = lean_nat_dec_lt(v_start_2750_, v___x_2754_);
if (v___x_2756_ == 0)
{
return v___x_2752_;
}
else
{
size_t v___x_2757_; size_t v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = lean_usize_of_nat(v_start_2750_);
v___x_2758_ = lean_usize_of_nat(v___x_2754_);
v___x_2759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(v_linterOpts_2748_, v_as_2749_, v___x_2757_, v___x_2758_, v___x_2752_);
return v___x_2759_;
}
}
else
{
size_t v___x_2760_; size_t v___x_2761_; lean_object* v___x_2762_; 
v___x_2760_ = lean_usize_of_nat(v_start_2750_);
v___x_2761_ = lean_usize_of_nat(v_stop_2751_);
v___x_2762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(v_linterOpts_2748_, v_as_2749_, v___x_2760_, v___x_2761_, v___x_2752_);
return v___x_2762_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9___boxed(lean_object* v_linterOpts_2763_, lean_object* v_as_2764_, lean_object* v_start_2765_, lean_object* v_stop_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(v_linterOpts_2763_, v_as_2764_, v_start_2765_, v_stop_2766_);
lean_dec(v_stop_2766_);
lean_dec(v_start_2765_);
lean_dec_ref(v_as_2764_);
lean_dec_ref(v_linterOpts_2763_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(lean_object* v_fst_2768_, lean_object* v_init_2769_, lean_object* v_x_2770_){
_start:
{
if (lean_obj_tag(v_x_2770_) == 0)
{
lean_object* v_k_2772_; lean_object* v_v_2773_; lean_object* v_l_2774_; lean_object* v_r_2775_; uint8_t v_anyUnlocated_2776_; lean_object* v___x_2777_; lean_object* v_a_2778_; lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2792_; 
v_k_2772_ = lean_ctor_get(v_x_2770_, 1);
lean_inc(v_k_2772_);
v_v_2773_ = lean_ctor_get(v_x_2770_, 2);
lean_inc(v_v_2773_);
v_l_2774_ = lean_ctor_get(v_x_2770_, 3);
lean_inc(v_l_2774_);
v_r_2775_ = lean_ctor_get(v_x_2770_, 4);
lean_inc(v_r_2775_);
lean_dec_ref_known(v_x_2770_, 5);
v_anyUnlocated_2776_ = 1;
lean_inc(v_fst_2768_);
v___x_2777_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_fst_2768_, v_init_2769_, v_l_2774_);
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2778_);
lean_dec_ref(v___x_2777_);
v_a_2779_ = lean_ctor_get(v_a_2778_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v_a_2778_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2781_ = v_a_2778_;
v_isShared_2782_ = v_isSharedCheck_2792_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v_a_2778_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2792_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
v___x_2783_ = l_Lean_Name_toString(v_k_2772_, v_anyUnlocated_2776_);
lean_inc(v_fst_2768_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set_tag(v___x_2781_, 0);
lean_ctor_set(v___x_2781_, 0, v_fst_2768_);
v___x_2785_ = v___x_2781_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_fst_2768_);
v___x_2785_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
double v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2786_ = lean_float_of_nat(v_v_2773_);
v___x_2787_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_2787_, 0, v___x_2786_);
v___x_2788_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2783_);
lean_ctor_set(v___x_2788_, 1, v___x_2785_);
lean_ctor_set(v___x_2788_, 2, v___x_2787_);
v___x_2789_ = lean_array_push(v_a_2779_, v___x_2788_);
v_init_2769_ = v___x_2789_;
v_x_2770_ = v_r_2775_;
goto _start;
}
}
}
else
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
lean_dec(v_fst_2768_);
v___x_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2793_, 0, v_init_2769_);
v___x_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
return v___x_2794_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3___boxed(lean_object* v_fst_2795_, lean_object* v_init_2796_, lean_object* v_x_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_fst_2795_, v_init_2796_, v_x_2797_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(lean_object* v_t_2800_, lean_object* v_k_2801_, lean_object* v_fallback_2802_){
_start:
{
if (lean_obj_tag(v_t_2800_) == 0)
{
lean_object* v_k_2803_; lean_object* v_v_2804_; lean_object* v_l_2805_; lean_object* v_r_2806_; uint8_t v___x_2807_; 
v_k_2803_ = lean_ctor_get(v_t_2800_, 1);
v_v_2804_ = lean_ctor_get(v_t_2800_, 2);
v_l_2805_ = lean_ctor_get(v_t_2800_, 3);
v_r_2806_ = lean_ctor_get(v_t_2800_, 4);
v___x_2807_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2801_, v_k_2803_);
switch(v___x_2807_)
{
case 0:
{
v_t_2800_ = v_l_2805_;
goto _start;
}
case 1:
{
lean_inc(v_v_2804_);
return v_v_2804_;
}
default: 
{
v_t_2800_ = v_r_2806_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2802_);
return v_fallback_2802_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg___boxed(lean_object* v_t_2810_, lean_object* v_k_2811_, lean_object* v_fallback_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(v_t_2810_, v_k_2811_, v_fallback_2812_);
lean_dec(v_fallback_2812_);
lean_dec(v_k_2811_);
lean_dec(v_t_2810_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(lean_object* v_as_2814_, size_t v_i_2815_, size_t v_stop_2816_, lean_object* v_b_2817_){
_start:
{
uint8_t v___x_2818_; 
v___x_2818_ = lean_usize_dec_eq(v_i_2815_, v_stop_2816_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; lean_object* v_linter_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; size_t v___x_2826_; size_t v___x_2827_; 
v___x_2819_ = lean_array_uget_borrowed(v_as_2814_, v_i_2815_);
v_linter_2820_ = lean_ctor_get(v___x_2819_, 0);
v___x_2821_ = lean_unsigned_to_nat(0u);
v___x_2822_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(v_b_2817_, v_linter_2820_, v___x_2821_);
v___x_2823_ = lean_unsigned_to_nat(1u);
v___x_2824_ = lean_nat_add(v___x_2822_, v___x_2823_);
lean_dec(v___x_2822_);
lean_inc(v_linter_2820_);
v___x_2825_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_linter_2820_, v___x_2824_, v_b_2817_);
v___x_2826_ = ((size_t)1ULL);
v___x_2827_ = lean_usize_add(v_i_2815_, v___x_2826_);
v_i_2815_ = v___x_2827_;
v_b_2817_ = v___x_2825_;
goto _start;
}
else
{
return v_b_2817_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4___boxed(lean_object* v_as_2829_, lean_object* v_i_2830_, lean_object* v_stop_2831_, lean_object* v_b_2832_){
_start:
{
size_t v_i_boxed_2833_; size_t v_stop_boxed_2834_; lean_object* v_res_2835_; 
v_i_boxed_2833_ = lean_unbox_usize(v_i_2830_);
lean_dec(v_i_2830_);
v_stop_boxed_2834_ = lean_unbox_usize(v_stop_2831_);
lean_dec(v_stop_2831_);
v_res_2835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_as_2829_, v_i_boxed_2833_, v_stop_boxed_2834_, v_b_2832_);
lean_dec_ref(v_as_2829_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(lean_object* v_as_2836_, size_t v_sz_2837_, size_t v_i_2838_, lean_object* v_b_2839_){
_start:
{
lean_object* v_a_2842_; uint8_t v___x_2846_; 
v___x_2846_ = lean_usize_dec_lt(v_i_2838_, v_sz_2837_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2847_; 
v___x_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2847_, 0, v_b_2839_);
return v___x_2847_;
}
else
{
lean_object* v_a_2848_; lean_object* v_fst_2849_; lean_object* v_snd_2850_; lean_object* v___y_2852_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
v_a_2848_ = lean_array_uget_borrowed(v_as_2836_, v_i_2838_);
v_fst_2849_ = lean_ctor_get(v_a_2848_, 0);
v_snd_2850_ = lean_ctor_get(v_a_2848_, 1);
v___x_2874_ = lean_box(1);
v___x_2875_ = lean_unsigned_to_nat(0u);
v___x_2876_ = lean_array_get_size(v_snd_2850_);
v___x_2877_ = lean_nat_dec_lt(v___x_2875_, v___x_2876_);
if (v___x_2877_ == 0)
{
v___y_2852_ = v___x_2874_;
goto v___jp_2851_;
}
else
{
uint8_t v___x_2878_; 
v___x_2878_ = lean_nat_dec_le(v___x_2876_, v___x_2876_);
if (v___x_2878_ == 0)
{
if (v___x_2877_ == 0)
{
v___y_2852_ = v___x_2874_;
goto v___jp_2851_;
}
else
{
size_t v___x_2879_; size_t v___x_2880_; lean_object* v___x_2881_; 
v___x_2879_ = ((size_t)0ULL);
v___x_2880_ = lean_usize_of_nat(v___x_2876_);
v___x_2881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_snd_2850_, v___x_2879_, v___x_2880_, v___x_2874_);
v___y_2852_ = v___x_2881_;
goto v___jp_2851_;
}
}
else
{
size_t v___x_2882_; size_t v___x_2883_; lean_object* v___x_2884_; 
v___x_2882_ = ((size_t)0ULL);
v___x_2883_ = lean_usize_of_nat(v___x_2876_);
v___x_2884_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_snd_2850_, v___x_2882_, v___x_2883_, v___x_2874_);
v___y_2852_ = v___x_2884_;
goto v___jp_2851_;
}
}
v___jp_2851_:
{
lean_object* v___x_2853_; 
lean_inc(v_fst_2849_);
v___x_2853_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_fst_2849_, v_b_2839_, v___y_2852_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; lean_object* v_a_2855_; 
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_a_2854_);
lean_dec_ref_known(v___x_2853_, 1);
v_a_2855_ = lean_ctor_get(v_a_2854_, 0);
lean_inc(v_a_2855_);
lean_dec(v_a_2854_);
v_a_2842_ = v_a_2855_;
goto v___jp_2841_;
}
else
{
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2865_; 
v_a_2856_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2858_ = v___x_2853_;
v_isShared_2859_ = v_isSharedCheck_2865_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2853_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2865_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
if (lean_obj_tag(v_a_2856_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; 
v_a_2860_ = lean_ctor_get(v_a_2856_, 0);
lean_inc(v_a_2860_);
lean_dec_ref_known(v_a_2856_, 1);
if (v_isShared_2859_ == 0)
{
lean_ctor_set_tag(v___x_2858_, 0);
lean_ctor_set(v___x_2858_, 0, v_a_2860_);
v___x_2862_ = v___x_2858_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2860_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
else
{
lean_object* v_a_2864_; 
lean_del_object(v___x_2858_);
v_a_2864_ = lean_ctor_get(v_a_2856_, 0);
lean_inc(v_a_2864_);
lean_dec_ref_known(v_a_2856_, 1);
v_a_2842_ = v_a_2864_;
goto v___jp_2841_;
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
v_a_2866_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2853_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2853_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
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
}
}
v___jp_2841_:
{
size_t v___x_2843_; size_t v___x_2844_; 
v___x_2843_ = ((size_t)1ULL);
v___x_2844_ = lean_usize_add(v_i_2838_, v___x_2843_);
v_i_2838_ = v___x_2844_;
v_b_2839_ = v_a_2842_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8___boxed(lean_object* v_as_2885_, lean_object* v_sz_2886_, lean_object* v_i_2887_, lean_object* v_b_2888_, lean_object* v___y_2889_){
_start:
{
size_t v_sz_boxed_2890_; size_t v_i_boxed_2891_; lean_object* v_res_2892_; 
v_sz_boxed_2890_ = lean_unbox_usize(v_sz_2886_);
lean_dec(v_sz_2886_);
v_i_boxed_2891_ = lean_unbox_usize(v_i_2887_);
lean_dec(v_i_2887_);
v_res_2892_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(v_as_2885_, v_sz_boxed_2890_, v_i_boxed_2891_, v_b_2888_);
lean_dec_ref(v_as_2885_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(lean_object* v_fst_2896_, lean_object* v_as_2897_, size_t v_sz_2898_, size_t v_i_2899_, lean_object* v_b_2900_){
_start:
{
lean_object* v_a_2903_; uint8_t v_anyUnlocated_2907_; 
v_anyUnlocated_2907_ = lean_usize_dec_lt(v_i_2899_, v_sz_2898_);
if (v_anyUnlocated_2907_ == 0)
{
lean_object* v___x_2908_; 
lean_dec(v_fst_2896_);
v___x_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2908_, 0, v_b_2900_);
return v___x_2908_;
}
else
{
lean_object* v_fst_2909_; lean_object* v_snd_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2947_; 
v_fst_2909_ = lean_ctor_get(v_b_2900_, 0);
v_snd_2910_ = lean_ctor_get(v_b_2900_, 1);
v_isSharedCheck_2947_ = !lean_is_exclusive(v_b_2900_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2912_ = v_b_2900_;
v_isShared_2913_ = v_isSharedCheck_2947_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_snd_2910_);
lean_inc(v_fst_2909_);
lean_dec(v_b_2900_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2947_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v_a_2914_; lean_object* v_position_x3f_2915_; 
v_a_2914_ = lean_array_uget_borrowed(v_as_2897_, v_i_2899_);
v_position_x3f_2915_ = lean_ctor_get(v_a_2914_, 2);
if (lean_obj_tag(v_position_x3f_2915_) == 0)
{
lean_object* v_linter_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; 
lean_dec(v_snd_2910_);
v_linter_2916_ = lean_ctor_get(v_a_2914_, 0);
v___x_2917_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0));
lean_inc(v_linter_2916_);
v___x_2918_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_linter_2916_, v_anyUnlocated_2907_);
v___x_2919_ = lean_string_append(v___x_2917_, v___x_2918_);
lean_dec_ref(v___x_2918_);
v___x_2920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1));
v___x_2921_ = lean_string_append(v___x_2919_, v___x_2920_);
lean_inc(v_fst_2896_);
v___x_2922_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2896_, v_anyUnlocated_2907_);
v___x_2923_ = lean_string_append(v___x_2921_, v___x_2922_);
lean_dec_ref(v___x_2922_);
v___x_2924_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2));
v___x_2925_ = lean_string_append(v___x_2923_, v___x_2924_);
v___x_2926_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2925_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2929_; 
lean_dec_ref_known(v___x_2926_, 1);
v___x_2927_ = lean_box(v_anyUnlocated_2907_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 1, v___x_2927_);
v___x_2929_ = v___x_2912_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_fst_2909_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
v_a_2903_ = v___x_2929_;
goto v___jp_2902_;
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
lean_del_object(v___x_2912_);
lean_dec(v_fst_2909_);
lean_dec(v_fst_2896_);
v_a_2931_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2926_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2926_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
else
{
lean_object* v_linter_2939_; lean_object* v_file_2940_; lean_object* v_val_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2945_; 
v_linter_2939_ = lean_ctor_get(v_a_2914_, 0);
v_file_2940_ = lean_ctor_get(v_a_2914_, 3);
v_val_2941_ = lean_ctor_get(v_position_x3f_2915_, 0);
lean_inc(v_linter_2939_);
lean_inc(v_val_2941_);
lean_inc_ref(v_file_2940_);
v___x_2942_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2942_, 0, v_file_2940_);
lean_ctor_set(v___x_2942_, 1, v_val_2941_);
lean_ctor_set(v___x_2942_, 2, v_linter_2939_);
v___x_2943_ = lean_array_push(v_fst_2909_, v___x_2942_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 0, v___x_2943_);
v___x_2945_ = v___x_2912_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v___x_2943_);
lean_ctor_set(v_reuseFailAlloc_2946_, 1, v_snd_2910_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
v_a_2903_ = v___x_2945_;
goto v___jp_2902_;
}
}
}
}
v___jp_2902_:
{
size_t v___x_2904_; size_t v___x_2905_; 
v___x_2904_ = ((size_t)1ULL);
v___x_2905_ = lean_usize_add(v_i_2899_, v___x_2904_);
v_i_2899_ = v___x_2905_;
v_b_2900_ = v_a_2903_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___boxed(lean_object* v_fst_2948_, lean_object* v_as_2949_, lean_object* v_sz_2950_, lean_object* v_i_2951_, lean_object* v_b_2952_, lean_object* v___y_2953_){
_start:
{
size_t v_sz_boxed_2954_; size_t v_i_boxed_2955_; lean_object* v_res_2956_; 
v_sz_boxed_2954_ = lean_unbox_usize(v_sz_2950_);
lean_dec(v_sz_2950_);
v_i_boxed_2955_ = lean_unbox_usize(v_i_2951_);
lean_dec(v_i_2951_);
v_res_2956_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2948_, v_as_2949_, v_sz_boxed_2954_, v_i_boxed_2955_, v_b_2952_);
lean_dec_ref(v_as_2949_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(lean_object* v_as_2957_, size_t v_sz_2958_, size_t v_i_2959_, lean_object* v_b_2960_){
_start:
{
uint8_t v___x_2962_; 
v___x_2962_ = lean_usize_dec_lt(v_i_2959_, v_sz_2958_);
if (v___x_2962_ == 0)
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v_b_2960_);
return v___x_2963_;
}
else
{
lean_object* v_a_2964_; lean_object* v_fst_2965_; lean_object* v_snd_2966_; lean_object* v_fst_2967_; lean_object* v_snd_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2991_; 
v_a_2964_ = lean_array_uget_borrowed(v_as_2957_, v_i_2959_);
v_fst_2965_ = lean_ctor_get(v_a_2964_, 0);
v_snd_2966_ = lean_ctor_get(v_a_2964_, 1);
v_fst_2967_ = lean_ctor_get(v_b_2960_, 0);
v_snd_2968_ = lean_ctor_get(v_b_2960_, 1);
v_isSharedCheck_2991_ = !lean_is_exclusive(v_b_2960_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2970_ = v_b_2960_;
v_isShared_2971_ = v_isSharedCheck_2991_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_snd_2968_);
lean_inc(v_fst_2967_);
lean_dec(v_b_2960_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2991_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_fst_2967_);
lean_ctor_set(v_reuseFailAlloc_2990_, 1, v_snd_2968_);
v___x_2973_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
size_t v_sz_2974_; size_t v___x_2975_; lean_object* v___x_2976_; 
v_sz_2974_ = lean_array_size(v_snd_2966_);
v___x_2975_ = ((size_t)0ULL);
lean_inc(v_fst_2965_);
v___x_2976_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2965_, v_snd_2966_, v_sz_2974_, v___x_2975_, v___x_2973_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v_fst_2978_; lean_object* v_snd_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2989_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2976_, 1);
v_fst_2978_ = lean_ctor_get(v_a_2977_, 0);
v_snd_2979_ = lean_ctor_get(v_a_2977_, 1);
v_isSharedCheck_2989_ = !lean_is_exclusive(v_a_2977_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2981_ = v_a_2977_;
v_isShared_2982_ = v_isSharedCheck_2989_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_snd_2979_);
lean_inc(v_fst_2978_);
lean_dec(v_a_2977_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2989_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2984_; 
if (v_isShared_2982_ == 0)
{
v___x_2984_ = v___x_2981_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_fst_2978_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v_snd_2979_);
v___x_2984_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
size_t v___x_2985_; size_t v___x_2986_; 
v___x_2985_ = ((size_t)1ULL);
v___x_2986_ = lean_usize_add(v_i_2959_, v___x_2985_);
v_i_2959_ = v___x_2986_;
v_b_2960_ = v___x_2984_;
goto _start;
}
}
}
else
{
return v___x_2976_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7___boxed(lean_object* v_as_2992_, lean_object* v_sz_2993_, lean_object* v_i_2994_, lean_object* v_b_2995_, lean_object* v___y_2996_){
_start:
{
size_t v_sz_boxed_2997_; size_t v_i_boxed_2998_; lean_object* v_res_2999_; 
v_sz_boxed_2997_ = lean_unbox_usize(v_sz_2993_);
lean_dec(v_sz_2993_);
v_i_boxed_2998_ = lean_unbox_usize(v_i_2994_);
lean_dec(v_i_2994_);
v_res_2999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(v_as_2992_, v_sz_boxed_2997_, v_i_boxed_2998_, v_b_2995_);
lean_dec_ref(v_as_2992_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(lean_object* v_as_3000_, size_t v_sz_3001_, size_t v_i_3002_, lean_object* v_b_3003_){
_start:
{
uint8_t v___x_3005_; 
v___x_3005_ = lean_usize_dec_lt(v_i_3002_, v_sz_3001_);
if (v___x_3005_ == 0)
{
lean_object* v___x_3006_; 
v___x_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3006_, 0, v_b_3003_);
return v___x_3006_;
}
else
{
lean_object* v_a_3007_; lean_object* v_message_3008_; lean_object* v___x_3009_; uint8_t v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; 
v_a_3007_ = lean_array_uget_borrowed(v_as_3000_, v_i_3002_);
v_message_3008_ = lean_ctor_get(v_a_3007_, 1);
v___x_3009_ = lean_box(0);
v___x_3010_ = 0;
lean_inc_ref(v_message_3008_);
v___x_3011_ = l_Lean_SerialMessage_toString(v_message_3008_, v___x_3010_);
v___x_3012_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_3011_);
if (lean_obj_tag(v___x_3012_) == 0)
{
size_t v___x_3013_; size_t v___x_3014_; 
lean_dec_ref_known(v___x_3012_, 1);
v___x_3013_ = ((size_t)1ULL);
v___x_3014_ = lean_usize_add(v_i_3002_, v___x_3013_);
v_i_3002_ = v___x_3014_;
v_b_3003_ = v___x_3009_;
goto _start;
}
else
{
return v___x_3012_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___boxed(lean_object* v_as_3016_, lean_object* v_sz_3017_, lean_object* v_i_3018_, lean_object* v_b_3019_, lean_object* v___y_3020_){
_start:
{
size_t v_sz_boxed_3021_; size_t v_i_boxed_3022_; lean_object* v_res_3023_; 
v_sz_boxed_3021_ = lean_unbox_usize(v_sz_3017_);
lean_dec(v_sz_3017_);
v_i_boxed_3022_ = lean_unbox_usize(v_i_3018_);
lean_dec(v_i_3018_);
v_res_3023_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(v_as_3016_, v_sz_boxed_3021_, v_i_boxed_3022_, v_b_3019_);
lean_dec_ref(v_as_3016_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(lean_object* v_as_3026_, size_t v_sz_3027_, size_t v_i_3028_, lean_object* v_b_3029_){
_start:
{
uint8_t v___x_3031_; 
v___x_3031_ = lean_usize_dec_lt(v_i_3028_, v_sz_3027_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3032_, 0, v_b_3029_);
return v___x_3032_;
}
else
{
lean_object* v_a_3033_; lean_object* v_fst_3034_; lean_object* v_snd_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_a_3033_ = lean_array_uget_borrowed(v_as_3026_, v_i_3028_);
v_fst_3034_ = lean_ctor_get(v_a_3033_, 0);
v_snd_3035_ = lean_ctor_get(v_a_3033_, 1);
v___x_3036_ = lean_box(0);
v___x_3037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0));
lean_inc(v_fst_3034_);
v___x_3038_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_3034_, v___x_3031_);
v___x_3039_ = lean_string_append(v___x_3037_, v___x_3038_);
lean_dec_ref(v___x_3038_);
v___x_3040_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1));
v___x_3041_ = lean_string_append(v___x_3039_, v___x_3040_);
v___x_3042_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_3041_);
if (lean_obj_tag(v___x_3042_) == 0)
{
size_t v_sz_3043_; size_t v___x_3044_; lean_object* v___x_3045_; 
lean_dec_ref_known(v___x_3042_, 1);
v_sz_3043_ = lean_array_size(v_snd_3035_);
v___x_3044_ = ((size_t)0ULL);
v___x_3045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(v_snd_3035_, v_sz_3043_, v___x_3044_, v___x_3036_);
if (lean_obj_tag(v___x_3045_) == 0)
{
size_t v___x_3046_; size_t v___x_3047_; 
lean_dec_ref_known(v___x_3045_, 1);
v___x_3046_ = ((size_t)1ULL);
v___x_3047_ = lean_usize_add(v_i_3028_, v___x_3046_);
v_i_3028_ = v___x_3047_;
v_b_3029_ = v___x_3036_;
goto _start;
}
else
{
return v___x_3045_;
}
}
else
{
return v___x_3042_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___boxed(lean_object* v_as_3049_, lean_object* v_sz_3050_, lean_object* v_i_3051_, lean_object* v_b_3052_, lean_object* v___y_3053_){
_start:
{
size_t v_sz_boxed_3054_; size_t v_i_boxed_3055_; lean_object* v_res_3056_; 
v_sz_boxed_3054_ = lean_unbox_usize(v_sz_3050_);
lean_dec(v_sz_3050_);
v_i_boxed_3055_ = lean_unbox_usize(v_i_3051_);
lean_dec(v_i_3051_);
v_res_3056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(v_as_3049_, v_sz_boxed_3054_, v_i_boxed_3055_, v_b_3052_);
lean_dec_ref(v_as_3049_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(lean_object* v_args_3061_, lean_object* v_linterOpts_3062_, lean_object* v_env_3063_, lean_object* v_mod_3064_){
_start:
{
uint8_t v_lintOnly_3066_; uint8_t v_mode_3067_; lean_object* v___y_3069_; uint8_t v___y_3070_; lean_object* v___y_3138_; lean_object* v___x_3144_; lean_object* v_textGroups_3145_; 
v_lintOnly_3066_ = lean_ctor_get_uint8(v_args_3061_, sizeof(void*)*4);
v_mode_3067_ = lean_ctor_get_uint8(v_args_3061_, sizeof(void*)*4 + 1);
v___x_3144_ = l_Lean_Name_getRoot(v_mod_3064_);
v_textGroups_3145_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(v_env_3063_, v___x_3144_);
lean_dec(v___x_3144_);
if (v_lintOnly_3066_ == 0)
{
v___y_3138_ = v_textGroups_3145_;
goto v___jp_3137_;
}
else
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3146_ = lean_unsigned_to_nat(0u);
v___x_3147_ = lean_array_get_size(v_textGroups_3145_);
v___x_3148_ = l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(v_linterOpts_3062_, v_textGroups_3145_, v___x_3146_, v___x_3147_);
lean_dec_ref(v_textGroups_3145_);
v___y_3138_ = v___x_3148_;
goto v___jp_3137_;
}
v___jp_3068_:
{
switch(v_mode_3067_)
{
case 0:
{
lean_object* v___x_3071_; size_t v_sz_3072_; size_t v___x_3073_; lean_object* v___x_3074_; 
v___x_3071_ = lean_box(0);
v_sz_3072_ = lean_array_size(v___y_3069_);
v___x_3073_ = ((size_t)0ULL);
v___x_3074_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(v___y_3069_, v_sz_3072_, v___x_3073_, v___x_3071_);
lean_dec_ref(v___y_3069_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3082_; 
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3074_);
if (v_isSharedCheck_3082_ == 0)
{
lean_object* v_unused_3083_; 
v_unused_3083_ = lean_ctor_get(v___x_3074_, 0);
lean_dec(v_unused_3083_);
v___x_3076_ = v___x_3074_;
v_isShared_3077_ = v_isSharedCheck_3082_;
goto v_resetjp_3075_;
}
else
{
lean_dec(v___x_3074_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3082_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_3078_, 0, v___y_3070_);
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 0, v___x_3078_);
v___x_3080_ = v___x_3076_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3078_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
v_a_3084_ = lean_ctor_get(v___x_3074_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3074_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3074_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3074_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
case 1:
{
lean_object* v___x_3092_; size_t v_sz_3093_; size_t v___x_3094_; lean_object* v___x_3095_; 
v___x_3092_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0));
v_sz_3093_ = lean_array_size(v___y_3069_);
v___x_3094_ = ((size_t)0ULL);
v___x_3095_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(v___y_3069_, v_sz_3093_, v___x_3094_, v___x_3092_);
lean_dec_ref(v___y_3069_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3107_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3098_ = v___x_3095_;
v_isShared_3099_ = v_isSharedCheck_3107_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3095_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3107_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v_fst_3100_; lean_object* v_snd_3101_; lean_object* v___x_3102_; uint8_t v___x_3103_; lean_object* v___x_3105_; 
v_fst_3100_ = lean_ctor_get(v_a_3096_, 0);
lean_inc(v_fst_3100_);
v_snd_3101_ = lean_ctor_get(v_a_3096_, 1);
lean_inc(v_snd_3101_);
lean_dec(v_a_3096_);
v___x_3102_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_3102_, 0, v_fst_3100_);
v___x_3103_ = lean_unbox(v_snd_3101_);
lean_dec(v_snd_3101_);
lean_ctor_set_uint8(v___x_3102_, sizeof(void*)*1, v___x_3103_);
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 0, v___x_3102_);
v___x_3105_ = v___x_3098_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3102_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
v_a_3108_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3095_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3095_);
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
default: 
{
lean_object* v_codeQualityEntries_3116_; size_t v_sz_3117_; size_t v___x_3118_; lean_object* v___x_3119_; 
v_codeQualityEntries_3116_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0));
v_sz_3117_ = lean_array_size(v___y_3069_);
v___x_3118_ = ((size_t)0ULL);
v___x_3119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(v___y_3069_, v_sz_3117_, v___x_3118_, v_codeQualityEntries_3116_);
lean_dec_ref(v___y_3069_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3122_ = v___x_3119_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3119_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3124_; lean_object* v___x_3126_; 
v___x_3124_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3124_, 0, v_a_3120_);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 0, v___x_3124_);
v___x_3126_ = v___x_3122_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3124_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
v_a_3129_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3119_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3119_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
}
}
v___jp_3137_:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; uint8_t v___x_3141_; 
v___x_3139_ = lean_array_get_size(v___y_3138_);
v___x_3140_ = lean_unsigned_to_nat(0u);
v___x_3141_ = lean_nat_dec_eq(v___x_3139_, v___x_3140_);
if (v___x_3141_ == 0)
{
uint8_t v___x_3142_; 
v___x_3142_ = 1;
v___y_3069_ = v___y_3138_;
v___y_3070_ = v___x_3142_;
goto v___jp_3068_;
}
else
{
uint8_t v___x_3143_; 
v___x_3143_ = 0;
v___y_3069_ = v___y_3138_;
v___y_3070_ = v___x_3143_;
goto v___jp_3068_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___boxed(lean_object* v_args_3149_, lean_object* v_linterOpts_3150_, lean_object* v_env_3151_, lean_object* v_mod_3152_, lean_object* v_a_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(v_args_3149_, v_linterOpts_3150_, v_env_3151_, v_mod_3152_);
lean_dec(v_mod_3152_);
lean_dec_ref(v_env_3151_);
lean_dec_ref(v_linterOpts_3150_);
lean_dec_ref(v_args_3149_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(lean_object* v_00_u03b4_3155_, lean_object* v_t_3156_, lean_object* v_k_3157_, lean_object* v_fallback_3158_){
_start:
{
lean_object* v___x_3159_; 
v___x_3159_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(v_t_3156_, v_k_3157_, v_fallback_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___boxed(lean_object* v_00_u03b4_3160_, lean_object* v_t_3161_, lean_object* v_k_3162_, lean_object* v_fallback_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(v_00_u03b4_3160_, v_t_3161_, v_k_3162_, v_fallback_3163_);
lean_dec(v_fallback_3163_);
lean_dec(v_k_3162_);
lean_dec(v_t_3161_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(uint8_t v___y_3165_, lean_object* v_____r_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_3170_, 0, v___y_3165_);
v___x_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0___boxed(lean_object* v___y_3172_, lean_object* v_____r_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_){
_start:
{
uint8_t v___y_15643__boxed_3177_; lean_object* v_res_3178_; 
v___y_15643__boxed_3177_ = lean_unbox(v___y_3172_);
v_res_3178_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_15643__boxed_3177_, v_____r_3173_, v___y_3174_, v___y_3175_);
lean_dec(v___y_3175_);
lean_dec_ref(v___y_3174_);
return v_res_3178_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3179_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_3180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3179_);
return v___x_3180_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1(void){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3181_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0);
v___x_3182_ = lean_unsigned_to_nat(0u);
v___x_3183_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3182_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
lean_ctor_set(v___x_3183_, 2, v___x_3182_);
lean_ctor_set(v___x_3183_, 3, v___x_3182_);
lean_ctor_set(v___x_3183_, 4, v___x_3181_);
lean_ctor_set(v___x_3183_, 5, v___x_3181_);
lean_ctor_set(v___x_3183_, 6, v___x_3181_);
lean_ctor_set(v___x_3183_, 7, v___x_3181_);
lean_ctor_set(v___x_3183_, 8, v___x_3181_);
lean_ctor_set(v___x_3183_, 9, v___x_3181_);
lean_ctor_set(v___x_3183_, 10, v___x_3181_);
return v___x_3183_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2(void){
_start:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3184_ = lean_unsigned_to_nat(32u);
v___x_3185_ = lean_mk_empty_array_with_capacity(v___x_3184_);
v___x_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
return v___x_3186_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3(void){
_start:
{
size_t v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3187_ = ((size_t)5ULL);
v___x_3188_ = lean_unsigned_to_nat(0u);
v___x_3189_ = lean_unsigned_to_nat(32u);
v___x_3190_ = lean_mk_empty_array_with_capacity(v___x_3189_);
v___x_3191_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2);
v___x_3192_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3192_, 0, v___x_3191_);
lean_ctor_set(v___x_3192_, 1, v___x_3190_);
lean_ctor_set(v___x_3192_, 2, v___x_3188_);
lean_ctor_set(v___x_3192_, 3, v___x_3188_);
lean_ctor_set_usize(v___x_3192_, 4, v___x_3187_);
return v___x_3192_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3193_ = lean_box(1);
v___x_3194_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3);
v___x_3195_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0);
v___x_3196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
lean_ctor_set(v___x_3196_, 1, v___x_3194_);
lean_ctor_set(v___x_3196_, 2, v___x_3193_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(lean_object* v_msgData_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v___x_3201_; lean_object* v_toCold_3202_; lean_object* v_env_3203_; lean_object* v_options_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3201_ = lean_st_ref_get(v___y_3199_);
v_toCold_3202_ = lean_ctor_get(v___y_3198_, 0);
v_env_3203_ = lean_ctor_get(v___x_3201_, 0);
lean_inc_ref(v_env_3203_);
lean_dec(v___x_3201_);
v_options_3204_ = lean_ctor_get(v_toCold_3202_, 2);
v___x_3205_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1);
v___x_3206_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4);
lean_inc_ref(v_options_3204_);
v___x_3207_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3207_, 0, v_env_3203_);
lean_ctor_set(v___x_3207_, 1, v___x_3205_);
lean_ctor_set(v___x_3207_, 2, v___x_3206_);
lean_ctor_set(v___x_3207_, 3, v_options_3204_);
v___x_3208_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
lean_ctor_set(v___x_3208_, 1, v_msgData_3197_);
v___x_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___boxed(lean_object* v_msgData_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(v_msgData_3210_, v___y_3211_, v___y_3212_);
lean_dec(v___y_3212_);
lean_dec_ref(v___y_3211_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(lean_object* v_msg_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_){
_start:
{
lean_object* v_ref_3219_; lean_object* v___x_3220_; lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3229_; 
v_ref_3219_ = lean_ctor_get(v___y_3216_, 2);
v___x_3220_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(v_msg_3215_, v___y_3216_, v___y_3217_);
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3223_ = v___x_3220_;
v_isShared_3224_ = v_isSharedCheck_3229_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3220_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3229_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3225_; lean_object* v___x_3227_; 
lean_inc(v_ref_3219_);
v___x_3225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3225_, 0, v_ref_3219_);
lean_ctor_set(v___x_3225_, 1, v_a_3221_);
if (v_isShared_3224_ == 0)
{
lean_ctor_set_tag(v___x_3223_, 1);
lean_ctor_set(v___x_3223_, 0, v___x_3225_);
v___x_3227_ = v___x_3223_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v___x_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg___boxed(lean_object* v_msg_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_3230_, v___y_3231_, v___y_3232_);
lean_dec(v___y_3232_);
lean_dec_ref(v___y_3231_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(lean_object* v_ref_3235_, lean_object* v_msg_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_){
_start:
{
lean_object* v_toCold_3240_; lean_object* v_currRecDepth_3241_; lean_object* v_ref_3242_; uint8_t v_diag_3243_; uint8_t v_suppressElabErrors_3244_; lean_object* v_ref_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v_toCold_3240_ = lean_ctor_get(v___y_3237_, 0);
v_currRecDepth_3241_ = lean_ctor_get(v___y_3237_, 1);
v_ref_3242_ = lean_ctor_get(v___y_3237_, 2);
v_diag_3243_ = lean_ctor_get_uint8(v___y_3237_, sizeof(void*)*3);
v_suppressElabErrors_3244_ = lean_ctor_get_uint8(v___y_3237_, sizeof(void*)*3 + 1);
v_ref_3245_ = l_Lean_replaceRef(v_ref_3235_, v_ref_3242_);
lean_inc(v_currRecDepth_3241_);
lean_inc_ref(v_toCold_3240_);
v___x_3246_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3246_, 0, v_toCold_3240_);
lean_ctor_set(v___x_3246_, 1, v_currRecDepth_3241_);
lean_ctor_set(v___x_3246_, 2, v_ref_3245_);
lean_ctor_set_uint8(v___x_3246_, sizeof(void*)*3, v_diag_3243_);
lean_ctor_set_uint8(v___x_3246_, sizeof(void*)*3 + 1, v_suppressElabErrors_3244_);
v___x_3247_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_3236_, v___x_3246_, v___y_3238_);
lean_dec_ref_known(v___x_3246_, 3);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg___boxed(lean_object* v_ref_3248_, lean_object* v_msg_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_3248_, v_msg_3249_, v___y_3250_, v___y_3251_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
lean_dec(v_ref_3248_);
return v_res_3253_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0));
v___x_3256_ = l_Lean_stringToMessageData(v___x_3255_);
return v___x_3256_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2));
v___x_3259_ = l_Lean_stringToMessageData(v___x_3258_);
return v___x_3259_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; 
v___x_3261_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4));
v___x_3262_ = l_Lean_stringToMessageData(v___x_3261_);
return v___x_3262_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3264_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6));
v___x_3265_ = l_Lean_stringToMessageData(v___x_3264_);
return v___x_3265_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9(void){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8));
v___x_3268_ = l_Lean_stringToMessageData(v___x_3267_);
return v___x_3268_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11(void){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3270_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10));
v___x_3271_ = l_Lean_stringToMessageData(v___x_3270_);
return v___x_3271_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13(void){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3273_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12));
v___x_3274_ = l_Lean_stringToMessageData(v___x_3273_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(lean_object* v_msg_3275_, lean_object* v_declHint_3276_, lean_object* v___y_3277_){
_start:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v_env_3281_; uint8_t v___x_3282_; 
v___x_3279_ = l_Lean_instInhabitedName;
v___x_3280_ = lean_st_ref_get(v___y_3277_);
v_env_3281_ = lean_ctor_get(v___x_3280_, 0);
lean_inc_ref(v_env_3281_);
lean_dec(v___x_3280_);
v___x_3282_ = l_Lean_Name_isAnonymous(v_declHint_3276_);
if (v___x_3282_ == 0)
{
uint8_t v_isExporting_3283_; 
v_isExporting_3283_ = lean_ctor_get_uint8(v_env_3281_, sizeof(void*)*8);
if (v_isExporting_3283_ == 0)
{
lean_object* v___x_3284_; 
lean_dec_ref(v_env_3281_);
lean_dec(v_declHint_3276_);
v___x_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3284_, 0, v_msg_3275_);
return v___x_3284_;
}
else
{
lean_object* v___x_3285_; uint8_t v___x_3286_; 
lean_inc_ref(v_env_3281_);
v___x_3285_ = l_Lean_Environment_setExporting(v_env_3281_, v___x_3282_);
lean_inc(v_declHint_3276_);
lean_inc_ref(v___x_3285_);
v___x_3286_ = l_Lean_Environment_contains(v___x_3285_, v_declHint_3276_, v_isExporting_3283_);
if (v___x_3286_ == 0)
{
lean_object* v___x_3287_; 
lean_dec_ref(v___x_3285_);
lean_dec_ref(v_env_3281_);
lean_dec(v_declHint_3276_);
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_msg_3275_);
return v___x_3287_;
}
else
{
lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v_c_3293_; lean_object* v___x_3294_; 
v___x_3288_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1);
v___x_3289_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4);
v___x_3290_ = l_Lean_Options_empty;
v___x_3291_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3285_);
lean_ctor_set(v___x_3291_, 1, v___x_3288_);
lean_ctor_set(v___x_3291_, 2, v___x_3289_);
lean_ctor_set(v___x_3291_, 3, v___x_3290_);
lean_inc(v_declHint_3276_);
v___x_3292_ = l_Lean_MessageData_ofConstName(v_declHint_3276_, v___x_3282_);
v_c_3293_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3293_, 0, v___x_3291_);
lean_ctor_set(v_c_3293_, 1, v___x_3292_);
v___x_3294_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3281_, v_declHint_3276_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
lean_dec_ref(v_env_3281_);
lean_dec(v_declHint_3276_);
v___x_3295_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1);
v___x_3296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
lean_ctor_set(v___x_3296_, 1, v_c_3293_);
v___x_3297_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3);
v___x_3298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3296_);
lean_ctor_set(v___x_3298_, 1, v___x_3297_);
v___x_3299_ = l_Lean_MessageData_note(v___x_3298_);
v___x_3300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3300_, 0, v_msg_3275_);
lean_ctor_set(v___x_3300_, 1, v___x_3299_);
v___x_3301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3300_);
return v___x_3301_;
}
else
{
lean_object* v_val_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3336_; 
v_val_3302_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3304_ = v___x_3294_;
v_isShared_3305_ = v_isSharedCheck_3336_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_val_3302_);
lean_dec(v___x_3294_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3336_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v_mod_3308_; uint8_t v___x_3309_; 
v___x_3306_ = l_Lean_Environment_header(v_env_3281_);
lean_dec_ref(v_env_3281_);
v___x_3307_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3306_);
lean_dec_ref(v___x_3306_);
v_mod_3308_ = lean_array_get(v___x_3279_, v___x_3307_, v_val_3302_);
lean_dec(v_val_3302_);
lean_dec_ref(v___x_3307_);
v___x_3309_ = l_Lean_isPrivateName(v_declHint_3276_);
lean_dec(v_declHint_3276_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3321_; 
v___x_3310_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5);
v___x_3311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
lean_ctor_set(v___x_3311_, 1, v_c_3293_);
v___x_3312_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7);
v___x_3313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3311_);
lean_ctor_set(v___x_3313_, 1, v___x_3312_);
v___x_3314_ = l_Lean_MessageData_ofName(v_mod_3308_);
v___x_3315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3313_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9);
v___x_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3315_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = l_Lean_MessageData_note(v___x_3317_);
v___x_3319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3319_, 0, v_msg_3275_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
if (v_isShared_3305_ == 0)
{
lean_ctor_set_tag(v___x_3304_, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3319_);
v___x_3321_ = v___x_3304_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v___x_3319_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
else
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3334_; 
v___x_3323_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1);
v___x_3324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
lean_ctor_set(v___x_3324_, 1, v_c_3293_);
v___x_3325_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11);
v___x_3326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3324_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
v___x_3327_ = l_Lean_MessageData_ofName(v_mod_3308_);
v___x_3328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3326_);
lean_ctor_set(v___x_3328_, 1, v___x_3327_);
v___x_3329_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13);
v___x_3330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3328_);
lean_ctor_set(v___x_3330_, 1, v___x_3329_);
v___x_3331_ = l_Lean_MessageData_note(v___x_3330_);
v___x_3332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3332_, 0, v_msg_3275_);
lean_ctor_set(v___x_3332_, 1, v___x_3331_);
if (v_isShared_3305_ == 0)
{
lean_ctor_set_tag(v___x_3304_, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3332_);
v___x_3334_ = v___x_3304_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v___x_3332_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3337_; 
lean_dec_ref(v_env_3281_);
lean_dec(v_declHint_3276_);
v___x_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3337_, 0, v_msg_3275_);
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___boxed(lean_object* v_msg_3338_, lean_object* v_declHint_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_3338_, v_declHint_3339_, v___y_3340_);
lean_dec(v___y_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(lean_object* v_msg_3343_, lean_object* v_declHint_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v___x_3348_; lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3358_; 
v___x_3348_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_3343_, v_declHint_3344_, v___y_3346_);
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3351_ = v___x_3348_;
v_isShared_3352_ = v_isSharedCheck_3358_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3348_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3358_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3356_; 
v___x_3353_ = l_Lean_unknownIdentifierMessageTag;
v___x_3354_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3353_);
lean_ctor_set(v___x_3354_, 1, v_a_3349_);
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 0, v___x_3354_);
v___x_3356_ = v___x_3351_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v___x_3354_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14___boxed(lean_object* v_msg_3359_, lean_object* v_declHint_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_){
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(v_msg_3359_, v_declHint_3360_, v___y_3361_, v___y_3362_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(lean_object* v_ref_3365_, lean_object* v_msg_3366_, lean_object* v_declHint_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v___x_3371_; lean_object* v_a_3372_; lean_object* v___x_3373_; 
v___x_3371_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(v_msg_3366_, v_declHint_3367_, v___y_3368_, v___y_3369_);
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref(v___x_3371_);
v___x_3373_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_3365_, v_a_3372_, v___y_3368_, v___y_3369_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg___boxed(lean_object* v_ref_3374_, lean_object* v_msg_3375_, lean_object* v_declHint_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_){
_start:
{
lean_object* v_res_3380_; 
v_res_3380_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_3374_, v_msg_3375_, v_declHint_3376_, v___y_3377_, v___y_3378_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v_ref_3374_);
return v_res_3380_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3382_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0));
v___x_3383_ = l_Lean_stringToMessageData(v___x_3382_);
return v___x_3383_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; 
v___x_3384_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1));
v___x_3385_ = l_Lean_stringToMessageData(v___x_3384_);
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(lean_object* v_ref_3386_, lean_object* v_constName_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v___x_3391_; uint8_t v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3391_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1);
v___x_3392_ = 0;
lean_inc(v_constName_3387_);
v___x_3393_ = l_Lean_MessageData_ofConstName(v_constName_3387_, v___x_3392_);
v___x_3394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3391_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2);
v___x_3396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3394_);
lean_ctor_set(v___x_3396_, 1, v___x_3395_);
v___x_3397_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_3386_, v___x_3396_, v_constName_3387_, v___y_3388_, v___y_3389_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___boxed(lean_object* v_ref_3398_, lean_object* v_constName_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_3398_, v_constName_3399_, v___y_3400_, v___y_3401_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v_ref_3398_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
lean_object* v_ref_3408_; lean_object* v___x_3409_; 
v_ref_3408_ = lean_ctor_get(v___y_3405_, 2);
v___x_3409_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_3408_, v_constName_3404_, v___y_3405_, v___y_3406_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_3410_, v___y_3411_, v___y_3412_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(lean_object* v_constName_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v___x_3419_; lean_object* v_env_3420_; uint8_t v___x_3421_; lean_object* v___x_3422_; 
v___x_3419_ = lean_st_ref_get(v___y_3417_);
v_env_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc_ref(v_env_3420_);
lean_dec(v___x_3419_);
v___x_3421_ = 0;
lean_inc(v_constName_3415_);
v___x_3422_ = l_Lean_Environment_find_x3f(v_env_3420_, v_constName_3415_, v___x_3421_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_3415_, v___y_3416_, v___y_3417_);
return v___x_3423_;
}
else
{
lean_object* v_val_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_dec(v_constName_3415_);
v_val_3424_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3422_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_val_3424_);
lean_dec(v___x_3422_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
lean_ctor_set_tag(v___x_3426_, 0);
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_val_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0___boxed(lean_object* v_constName_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_){
_start:
{
lean_object* v_res_3436_; 
v_res_3436_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(v_constName_3432_, v___y_3433_, v___y_3434_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(lean_object* v_declName_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3441_ = l_Lean_instInhabitedName;
lean_inc(v_declName_3437_);
v___x_3442_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(v_declName_3437_, v___y_3438_, v___y_3439_);
if (lean_obj_tag(v___x_3442_) == 0)
{
lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3468_; 
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3442_);
if (v_isSharedCheck_3468_ == 0)
{
lean_object* v_unused_3469_; 
v_unused_3469_ = lean_ctor_get(v___x_3442_, 0);
lean_dec(v_unused_3469_);
v___x_3444_ = v___x_3442_;
v_isShared_3445_ = v_isSharedCheck_3468_;
goto v_resetjp_3443_;
}
else
{
lean_dec(v___x_3442_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3468_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3446_; lean_object* v_env_3447_; lean_object* v___x_3448_; 
v___x_3446_ = lean_st_ref_get(v___y_3439_);
v_env_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc_ref(v_env_3447_);
lean_dec(v___x_3446_);
v___x_3448_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3447_, v_declName_3437_);
lean_dec(v_declName_3437_);
lean_dec_ref(v_env_3447_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v___x_3449_; lean_object* v___x_3451_; 
v___x_3449_ = lean_box(0);
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 0, v___x_3449_);
v___x_3451_ = v___x_3444_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3449_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
else
{
lean_object* v_val_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3467_; 
v_val_3453_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3455_ = v___x_3448_;
v_isShared_3456_ = v_isSharedCheck_3467_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_val_3453_);
lean_dec(v___x_3448_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3467_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3457_; lean_object* v_env_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3457_ = lean_st_ref_get(v___y_3439_);
v_env_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc_ref(v_env_3458_);
lean_dec(v___x_3457_);
v___x_3459_ = l_Lean_Environment_allImportedModuleNames(v_env_3458_);
lean_dec_ref(v_env_3458_);
v___x_3460_ = lean_array_get(v___x_3441_, v___x_3459_, v_val_3453_);
lean_dec(v_val_3453_);
lean_dec_ref(v___x_3459_);
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 0, v___x_3460_);
v___x_3462_ = v___x_3455_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3464_; 
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 0, v___x_3462_);
v___x_3464_ = v___x_3444_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3462_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec(v_declName_3437_);
v_a_3470_ = lean_ctor_get(v___x_3442_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3442_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3442_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3442_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0___boxed(lean_object* v_declName_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_declName_3478_, v___y_3479_, v___y_3480_);
lean_dec(v___y_3480_);
lean_dec_ref(v___y_3479_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(lean_object* v_fst_3484_, lean_object* v_sp_3485_, lean_object* v___x_3486_, lean_object* v_as_3487_, size_t v_sz_3488_, size_t v_i_3489_, lean_object* v_b_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v_a_3495_; uint8_t v___x_3499_; 
v___x_3499_ = lean_usize_dec_lt(v_i_3489_, v_sz_3488_);
if (v___x_3499_ == 0)
{
lean_object* v___x_3500_; 
lean_dec(v___x_3486_);
lean_dec(v_sp_3485_);
lean_dec_ref(v_fst_3484_);
v___x_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_b_3490_);
return v___x_3500_;
}
else
{
lean_object* v_a_3501_; lean_object* v_fst_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3630_; 
v_a_3501_ = lean_array_uget(v_as_3487_, v_i_3489_);
v_fst_3502_ = lean_ctor_get(v_a_3501_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v_a_3501_);
if (v_isSharedCheck_3630_ == 0)
{
lean_object* v_unused_3631_; 
v_unused_3631_ = lean_ctor_get(v_a_3501_, 1);
lean_dec(v_unused_3631_);
v___x_3504_ = v_a_3501_;
v_isShared_3505_ = v_isSharedCheck_3630_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_fst_3502_);
lean_dec(v_a_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3630_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v_fst_3506_; lean_object* v_snd_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3629_; 
v_fst_3506_ = lean_ctor_get(v_b_3490_, 0);
v_snd_3507_ = lean_ctor_get(v_b_3490_, 1);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_b_3490_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3509_ = v_b_3490_;
v_isShared_3510_ = v_isSharedCheck_3629_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_snd_3507_);
lean_inc(v_fst_3506_);
lean_dec(v_b_3490_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3629_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3511_; 
lean_inc(v_fst_3502_);
v___x_3511_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_fst_3502_, v___y_3491_, v___y_3492_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v_a_3512_; 
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_a_3512_);
lean_dec_ref_known(v___x_3511_, 1);
if (lean_obj_tag(v_a_3512_) == 0)
{
lean_object* v_optName_3513_; lean_object* v_ref_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
lean_dec(v_snd_3507_);
v_optName_3513_ = lean_ctor_get(v_fst_3484_, 1);
v_ref_3514_ = lean_ctor_get(v___y_3491_, 2);
v___x_3515_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_3502_, v___x_3499_);
v___x_3516_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0));
v___x_3517_ = lean_string_append(v___x_3516_, v___x_3515_);
lean_dec_ref(v___x_3515_);
v___x_3518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__2));
v___x_3519_ = lean_string_append(v___x_3517_, v___x_3518_);
lean_inc(v_optName_3513_);
v___x_3520_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_optName_3513_, v___x_3499_);
v___x_3521_ = lean_string_append(v___x_3519_, v___x_3520_);
lean_dec_ref(v___x_3520_);
v___x_3522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_3523_ = lean_string_append(v___x_3521_, v___x_3522_);
v___x_3524_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v___x_3525_; lean_object* v___x_3527_; 
lean_dec_ref_known(v___x_3524_, 1);
lean_del_object(v___x_3504_);
v___x_3525_ = lean_box(v___x_3499_);
if (v_isShared_3510_ == 0)
{
lean_ctor_set(v___x_3509_, 1, v___x_3525_);
v___x_3527_ = v___x_3509_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_fst_3506_);
lean_ctor_set(v_reuseFailAlloc_3528_, 1, v___x_3525_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
v_a_3495_ = v___x_3527_;
goto v___jp_3494_;
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3542_; 
lean_del_object(v___x_3509_);
lean_dec(v_fst_3506_);
lean_dec(v___x_3486_);
lean_dec(v_sp_3485_);
lean_dec_ref(v_fst_3484_);
v_a_3529_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3531_ = v___x_3524_;
v_isShared_3532_ = v_isSharedCheck_3542_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3524_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3542_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3537_; 
v___x_3533_ = lean_io_error_to_string(v_a_3529_);
v___x_3534_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
v___x_3535_ = l_Lean_MessageData_ofFormat(v___x_3534_);
lean_inc(v_ref_3514_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 1, v___x_3535_);
lean_ctor_set(v___x_3504_, 0, v_ref_3514_);
v___x_3537_ = v___x_3504_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_ref_3514_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v___x_3539_; 
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 0, v___x_3537_);
v___x_3539_ = v___x_3531_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3537_);
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
}
else
{
lean_object* v_val_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3620_; 
v_val_3543_ = lean_ctor_get(v_a_3512_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v_a_3512_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3545_ = v_a_3512_;
v_isShared_3546_ = v_isSharedCheck_3620_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_val_3543_);
lean_dec(v_a_3512_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3620_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3547_; 
v___x_3547_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_fst_3502_, v___y_3491_, v___y_3492_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; lean_object* v___y_3550_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v___x_3547_, 1);
if (lean_obj_tag(v_a_3548_) == 0)
{
lean_inc(v___x_3486_);
v___y_3550_ = v___x_3486_;
goto v___jp_3549_;
}
else
{
lean_object* v_val_3611_; 
v_val_3611_ = lean_ctor_get(v_a_3548_, 0);
lean_inc(v_val_3611_);
lean_dec_ref_known(v_a_3548_, 1);
v___y_3550_ = v_val_3611_;
goto v___jp_3549_;
}
v___jp_3549_:
{
lean_object* v_ref_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v_ref_3551_ = lean_ctor_get(v___y_3491_, 2);
v___x_3552_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__4));
lean_inc(v___y_3550_);
lean_inc(v_sp_3485_);
v___x_3553_ = l_Lean_SearchPath_findWithExt(v_sp_3485_, v___x_3552_, v___y_3550_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_a_3554_);
lean_dec_ref_known(v___x_3553_, 1);
if (lean_obj_tag(v_a_3554_) == 0)
{
lean_object* v_optName_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
lean_dec(v_val_3543_);
lean_dec(v_snd_3507_);
v_optName_3555_ = lean_ctor_get(v_fst_3484_, 1);
v___x_3556_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__5));
v___x_3557_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_3550_, v___x_3499_);
v___x_3558_ = lean_string_append(v___x_3556_, v___x_3557_);
lean_dec_ref(v___x_3557_);
v___x_3559_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__6));
v___x_3560_ = lean_string_append(v___x_3558_, v___x_3559_);
lean_inc(v_optName_3555_);
v___x_3561_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_optName_3555_, v___x_3499_);
v___x_3562_ = lean_string_append(v___x_3560_, v___x_3561_);
lean_dec_ref(v___x_3561_);
v___x_3563_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__5___closed__3));
v___x_3564_ = lean_string_append(v___x_3562_, v___x_3563_);
v___x_3565_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_3564_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v___x_3566_; lean_object* v___x_3568_; 
lean_dec_ref_known(v___x_3565_, 1);
lean_del_object(v___x_3545_);
lean_del_object(v___x_3504_);
v___x_3566_ = lean_box(v___x_3499_);
if (v_isShared_3510_ == 0)
{
lean_ctor_set(v___x_3509_, 1, v___x_3566_);
v___x_3568_ = v___x_3509_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_fst_3506_);
lean_ctor_set(v_reuseFailAlloc_3569_, 1, v___x_3566_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
v_a_3495_ = v___x_3568_;
goto v___jp_3494_;
}
}
else
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3585_; 
lean_del_object(v___x_3509_);
lean_dec(v_fst_3506_);
lean_dec(v___x_3486_);
lean_dec(v_sp_3485_);
lean_dec_ref(v_fst_3484_);
v_a_3570_ = lean_ctor_get(v___x_3565_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3572_ = v___x_3565_;
v_isShared_3573_ = v_isSharedCheck_3585_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3565_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3585_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; lean_object* v___x_3576_; 
v___x_3574_ = lean_io_error_to_string(v_a_3570_);
if (v_isShared_3546_ == 0)
{
lean_ctor_set_tag(v___x_3545_, 3);
lean_ctor_set(v___x_3545_, 0, v___x_3574_);
v___x_3576_ = v___x_3545_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3574_);
v___x_3576_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
lean_object* v___x_3577_; lean_object* v___x_3579_; 
v___x_3577_ = l_Lean_MessageData_ofFormat(v___x_3576_);
lean_inc(v_ref_3551_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 1, v___x_3577_);
lean_ctor_set(v___x_3504_, 0, v_ref_3551_);
v___x_3579_ = v___x_3504_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_ref_3551_);
lean_ctor_set(v_reuseFailAlloc_3583_, 1, v___x_3577_);
v___x_3579_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
lean_object* v___x_3581_; 
if (v_isShared_3573_ == 0)
{
lean_ctor_set(v___x_3572_, 0, v___x_3579_);
v___x_3581_ = v___x_3572_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v___x_3579_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
}
}
}
}
else
{
lean_object* v_range_3586_; lean_object* v_val_3587_; lean_object* v_pos_3588_; lean_object* v_optName_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3593_; 
lean_dec(v___y_3550_);
lean_del_object(v___x_3545_);
lean_del_object(v___x_3504_);
v_range_3586_ = lean_ctor_get(v_val_3543_, 0);
lean_inc_ref(v_range_3586_);
lean_dec(v_val_3543_);
v_val_3587_ = lean_ctor_get(v_a_3554_, 0);
lean_inc(v_val_3587_);
lean_dec_ref_known(v_a_3554_, 1);
v_pos_3588_ = lean_ctor_get(v_range_3586_, 0);
lean_inc_ref(v_pos_3588_);
lean_dec_ref(v_range_3586_);
v_optName_3589_ = lean_ctor_get(v_fst_3484_, 1);
lean_inc(v_optName_3589_);
v___x_3590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3590_, 0, v_val_3587_);
lean_ctor_set(v___x_3590_, 1, v_pos_3588_);
lean_ctor_set(v___x_3590_, 2, v_optName_3589_);
v___x_3591_ = lean_array_push(v_fst_3506_, v___x_3590_);
if (v_isShared_3510_ == 0)
{
lean_ctor_set(v___x_3509_, 0, v___x_3591_);
v___x_3593_ = v___x_3509_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3591_);
lean_ctor_set(v_reuseFailAlloc_3594_, 1, v_snd_3507_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
v_a_3495_ = v___x_3593_;
goto v___jp_3494_;
}
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3610_; 
lean_dec(v___y_3550_);
lean_dec(v_val_3543_);
lean_del_object(v___x_3509_);
lean_dec(v_snd_3507_);
lean_dec(v_fst_3506_);
lean_dec(v___x_3486_);
lean_dec(v_sp_3485_);
lean_dec_ref(v_fst_3484_);
v_a_3595_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3597_ = v___x_3553_;
v_isShared_3598_ = v_isSharedCheck_3610_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3553_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3610_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3599_; lean_object* v___x_3601_; 
v___x_3599_ = lean_io_error_to_string(v_a_3595_);
if (v_isShared_3546_ == 0)
{
lean_ctor_set_tag(v___x_3545_, 3);
lean_ctor_set(v___x_3545_, 0, v___x_3599_);
v___x_3601_ = v___x_3545_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
lean_object* v___x_3602_; lean_object* v___x_3604_; 
v___x_3602_ = l_Lean_MessageData_ofFormat(v___x_3601_);
lean_inc(v_ref_3551_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 1, v___x_3602_);
lean_ctor_set(v___x_3504_, 0, v_ref_3551_);
v___x_3604_ = v___x_3504_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_ref_3551_);
lean_ctor_set(v_reuseFailAlloc_3608_, 1, v___x_3602_);
v___x_3604_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
lean_object* v___x_3606_; 
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v___x_3604_);
v___x_3606_ = v___x_3597_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3604_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
lean_del_object(v___x_3545_);
lean_dec(v_val_3543_);
lean_del_object(v___x_3509_);
lean_dec(v_snd_3507_);
lean_dec(v_fst_3506_);
lean_del_object(v___x_3504_);
lean_dec(v___x_3486_);
lean_dec(v_sp_3485_);
lean_dec_ref(v_fst_3484_);
v_a_3612_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3547_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3547_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
}
}
else
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3628_; 
lean_del_object(v___x_3509_);
lean_dec(v_snd_3507_);
lean_dec(v_fst_3506_);
lean_del_object(v___x_3504_);
lean_dec(v_fst_3502_);
lean_dec(v___x_3486_);
lean_dec(v_sp_3485_);
lean_dec_ref(v_fst_3484_);
v_a_3621_ = lean_ctor_get(v___x_3511_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3623_ = v___x_3511_;
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3511_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3626_; 
if (v_isShared_3624_ == 0)
{
v___x_3626_ = v___x_3623_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3621_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
}
}
v___jp_3494_:
{
size_t v___x_3496_; size_t v___x_3497_; 
v___x_3496_ = ((size_t)1ULL);
v___x_3497_ = lean_usize_add(v_i_3489_, v___x_3496_);
v_i_3489_ = v___x_3497_;
v_b_3490_ = v_a_3495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___boxed(lean_object* v_fst_3632_, lean_object* v_sp_3633_, lean_object* v___x_3634_, lean_object* v_as_3635_, lean_object* v_sz_3636_, lean_object* v_i_3637_, lean_object* v_b_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_){
_start:
{
size_t v_sz_boxed_3642_; size_t v_i_boxed_3643_; lean_object* v_res_3644_; 
v_sz_boxed_3642_ = lean_unbox_usize(v_sz_3636_);
lean_dec(v_sz_3636_);
v_i_boxed_3643_ = lean_unbox_usize(v_i_3637_);
lean_dec(v_i_3637_);
v_res_3644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(v_fst_3632_, v_sp_3633_, v___x_3634_, v_as_3635_, v_sz_boxed_3642_, v_i_boxed_3643_, v_b_3638_, v___y_3639_, v___y_3640_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec_ref(v_as_3635_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(lean_object* v_x_3645_, lean_object* v_x_3646_){
_start:
{
if (lean_obj_tag(v_x_3646_) == 0)
{
return v_x_3645_;
}
else
{
lean_object* v_key_3647_; lean_object* v_value_3648_; lean_object* v_tail_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
v_key_3647_ = lean_ctor_get(v_x_3646_, 0);
v_value_3648_ = lean_ctor_get(v_x_3646_, 1);
v_tail_3649_ = lean_ctor_get(v_x_3646_, 2);
lean_inc(v_value_3648_);
lean_inc(v_key_3647_);
v___x_3650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3650_, 0, v_key_3647_);
lean_ctor_set(v___x_3650_, 1, v_value_3648_);
v___x_3651_ = lean_array_push(v_x_3645_, v___x_3650_);
v_x_3645_ = v___x_3651_;
v_x_3646_ = v_tail_3649_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2___boxed(lean_object* v_x_3653_, lean_object* v_x_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(v_x_3653_, v_x_3654_);
lean_dec(v_x_3654_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(lean_object* v_as_3656_, size_t v_i_3657_, size_t v_stop_3658_, lean_object* v_b_3659_){
_start:
{
uint8_t v___x_3660_; 
v___x_3660_ = lean_usize_dec_eq(v_i_3657_, v_stop_3658_);
if (v___x_3660_ == 0)
{
lean_object* v___x_3661_; lean_object* v___x_3662_; size_t v___x_3663_; size_t v___x_3664_; 
v___x_3661_ = lean_array_uget_borrowed(v_as_3656_, v_i_3657_);
v___x_3662_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(v_b_3659_, v___x_3661_);
v___x_3663_ = ((size_t)1ULL);
v___x_3664_ = lean_usize_add(v_i_3657_, v___x_3663_);
v_i_3657_ = v___x_3664_;
v_b_3659_ = v___x_3662_;
goto _start;
}
else
{
return v_b_3659_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3___boxed(lean_object* v_as_3666_, lean_object* v_i_3667_, lean_object* v_stop_3668_, lean_object* v_b_3669_){
_start:
{
size_t v_i_boxed_3670_; size_t v_stop_boxed_3671_; lean_object* v_res_3672_; 
v_i_boxed_3670_ = lean_unbox_usize(v_i_3667_);
lean_dec(v_i_3667_);
v_stop_boxed_3671_ = lean_unbox_usize(v_stop_3668_);
lean_dec(v_stop_3668_);
v_res_3672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_as_3666_, v_i_boxed_3670_, v_stop_boxed_3671_, v_b_3669_);
lean_dec_ref(v_as_3666_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(lean_object* v_sp_3673_, lean_object* v___x_3674_, lean_object* v_as_3675_, size_t v_sz_3676_, size_t v_i_3677_, lean_object* v_b_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
uint8_t v___x_3682_; 
v___x_3682_ = lean_usize_dec_lt(v_i_3677_, v_sz_3676_);
if (v___x_3682_ == 0)
{
lean_object* v___x_3683_; 
lean_dec(v___x_3674_);
lean_dec(v_sp_3673_);
v___x_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3683_, 0, v_b_3678_);
return v___x_3683_;
}
else
{
lean_object* v_a_3684_; lean_object* v_fst_3685_; lean_object* v_snd_3686_; lean_object* v_fst_3687_; lean_object* v_snd_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3722_; 
v_a_3684_ = lean_array_uget_borrowed(v_as_3675_, v_i_3677_);
v_fst_3685_ = lean_ctor_get(v_a_3684_, 0);
v_snd_3686_ = lean_ctor_get(v_a_3684_, 1);
v_fst_3687_ = lean_ctor_get(v_b_3678_, 0);
v_snd_3688_ = lean_ctor_get(v_b_3678_, 1);
v_isSharedCheck_3722_ = !lean_is_exclusive(v_b_3678_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3690_ = v_b_3678_;
v_isShared_3691_ = v_isSharedCheck_3722_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_snd_3688_);
lean_inc(v_fst_3687_);
lean_dec(v_b_3678_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3722_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___y_3693_; lean_object* v_size_3713_; lean_object* v_buckets_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; uint8_t v___x_3718_; 
v_size_3713_ = lean_ctor_get(v_snd_3686_, 0);
v_buckets_3714_ = lean_ctor_get(v_snd_3686_, 1);
v___x_3715_ = lean_mk_empty_array_with_capacity(v_size_3713_);
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = lean_array_get_size(v_buckets_3714_);
v___x_3718_ = lean_nat_dec_lt(v___x_3716_, v___x_3717_);
if (v___x_3718_ == 0)
{
v___y_3693_ = v___x_3715_;
goto v___jp_3692_;
}
else
{
size_t v___x_3719_; size_t v___x_3720_; lean_object* v___x_3721_; 
v___x_3719_ = ((size_t)0ULL);
v___x_3720_ = lean_usize_of_nat(v___x_3717_);
v___x_3721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_buckets_3714_, v___x_3719_, v___x_3720_, v___x_3715_);
v___y_3693_ = v___x_3721_;
goto v___jp_3692_;
}
v___jp_3692_:
{
lean_object* v___x_3695_; 
if (v_isShared_3691_ == 0)
{
v___x_3695_ = v___x_3690_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_fst_3687_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v_snd_3688_);
v___x_3695_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
size_t v_sz_3696_; size_t v___x_3697_; lean_object* v___x_3698_; 
v_sz_3696_ = lean_array_size(v___y_3693_);
v___x_3697_ = ((size_t)0ULL);
lean_inc(v___x_3674_);
lean_inc(v_sp_3673_);
lean_inc(v_fst_3685_);
v___x_3698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(v_fst_3685_, v_sp_3673_, v___x_3674_, v___y_3693_, v_sz_3696_, v___x_3697_, v___x_3695_, v___y_3679_, v___y_3680_);
lean_dec_ref(v___y_3693_);
if (lean_obj_tag(v___x_3698_) == 0)
{
lean_object* v_a_3699_; lean_object* v_fst_3700_; lean_object* v_snd_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3711_; 
v_a_3699_ = lean_ctor_get(v___x_3698_, 0);
lean_inc(v_a_3699_);
lean_dec_ref_known(v___x_3698_, 1);
v_fst_3700_ = lean_ctor_get(v_a_3699_, 0);
v_snd_3701_ = lean_ctor_get(v_a_3699_, 1);
v_isSharedCheck_3711_ = !lean_is_exclusive(v_a_3699_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3703_ = v_a_3699_;
v_isShared_3704_ = v_isSharedCheck_3711_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_snd_3701_);
lean_inc(v_fst_3700_);
lean_dec(v_a_3699_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3711_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_fst_3700_);
lean_ctor_set(v_reuseFailAlloc_3710_, 1, v_snd_3701_);
v___x_3706_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
size_t v___x_3707_; size_t v___x_3708_; 
v___x_3707_ = ((size_t)1ULL);
v___x_3708_ = lean_usize_add(v_i_3677_, v___x_3707_);
v_i_3677_ = v___x_3708_;
v_b_3678_ = v___x_3706_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3674_);
lean_dec(v_sp_3673_);
return v___x_3698_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4___boxed(lean_object* v_sp_3723_, lean_object* v___x_3724_, lean_object* v_as_3725_, lean_object* v_sz_3726_, lean_object* v_i_3727_, lean_object* v_b_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_){
_start:
{
size_t v_sz_boxed_3732_; size_t v_i_boxed_3733_; lean_object* v_res_3734_; 
v_sz_boxed_3732_ = lean_unbox_usize(v_sz_3726_);
lean_dec(v_sz_3726_);
v_i_boxed_3733_ = lean_unbox_usize(v_i_3727_);
lean_dec(v_i_3727_);
v_res_3734_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(v_sp_3723_, v___x_3724_, v_as_3725_, v_sz_boxed_3732_, v_i_boxed_3733_, v_b_3728_, v___y_3729_, v___y_3730_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec_ref(v_as_3725_);
return v_res_3734_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(uint8_t v___y_3735_, lean_object* v_as_3736_, size_t v_i_3737_, size_t v_stop_3738_){
_start:
{
uint8_t v___x_3739_; 
v___x_3739_ = lean_usize_dec_eq(v_i_3737_, v_stop_3738_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; lean_object* v_snd_3741_; lean_object* v_size_3742_; uint8_t v___x_3743_; lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3740_ = lean_array_uget_borrowed(v_as_3736_, v_i_3737_);
v_snd_3741_ = lean_ctor_get(v___x_3740_, 1);
v_size_3742_ = lean_ctor_get(v_snd_3741_, 0);
v___x_3743_ = 1;
v___x_3744_ = lean_unsigned_to_nat(0u);
v___x_3745_ = lean_nat_dec_eq(v_size_3742_, v___x_3744_);
if (v___x_3745_ == 0)
{
return v___x_3743_;
}
else
{
if (v___y_3735_ == 0)
{
size_t v___x_3746_; size_t v___x_3747_; 
v___x_3746_ = ((size_t)1ULL);
v___x_3747_ = lean_usize_add(v_i_3737_, v___x_3746_);
v_i_3737_ = v___x_3747_;
goto _start;
}
else
{
return v___x_3743_;
}
}
}
else
{
uint8_t v___x_3749_; 
v___x_3749_ = 0;
return v___x_3749_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10___boxed(lean_object* v___y_3750_, lean_object* v_as_3751_, lean_object* v_i_3752_, lean_object* v_stop_3753_){
_start:
{
uint8_t v___y_16614__boxed_3754_; size_t v_i_boxed_3755_; size_t v_stop_boxed_3756_; uint8_t v_res_3757_; lean_object* v_r_3758_; 
v___y_16614__boxed_3754_ = lean_unbox(v___y_3750_);
v_i_boxed_3755_ = lean_unbox_usize(v_i_3752_);
lean_dec(v_i_3752_);
v_stop_boxed_3756_ = lean_unbox_usize(v_stop_3753_);
lean_dec(v_stop_3753_);
v_res_3757_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(v___y_16614__boxed_3754_, v_as_3751_, v_i_boxed_3755_, v_stop_boxed_3756_);
lean_dec_ref(v_as_3751_);
v_r_3758_ = lean_box(v_res_3757_);
return v_r_3758_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(lean_object* v_k_3759_, lean_object* v_v_3760_, lean_object* v_t_3761_){
_start:
{
lean_object* v___y_3763_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3771_; lean_object* v___y_3772_; 
if (lean_obj_tag(v_t_3761_) == 0)
{
lean_object* v_size_3776_; lean_object* v_k_3777_; lean_object* v_v_3778_; lean_object* v_l_3779_; lean_object* v_r_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_4040_; 
v_size_3776_ = lean_ctor_get(v_t_3761_, 0);
v_k_3777_ = lean_ctor_get(v_t_3761_, 1);
v_v_3778_ = lean_ctor_get(v_t_3761_, 2);
v_l_3779_ = lean_ctor_get(v_t_3761_, 3);
v_r_3780_ = lean_ctor_get(v_t_3761_, 4);
v_isSharedCheck_4040_ = !lean_is_exclusive(v_t_3761_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_3782_ = v_t_3761_;
v_isShared_3783_ = v_isSharedCheck_4040_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_r_3780_);
lean_inc(v_l_3779_);
lean_inc(v_v_3778_);
lean_inc(v_k_3777_);
lean_inc(v_size_3776_);
lean_dec(v_t_3761_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_4040_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v___y_3801_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; lean_object* v___y_3827_; uint8_t v___y_3834_; lean_object* v_fst_4034_; lean_object* v_snd_4035_; lean_object* v_fst_4036_; lean_object* v_snd_4037_; uint8_t v___x_4038_; 
v_fst_4034_ = lean_ctor_get(v_k_3759_, 0);
v_snd_4035_ = lean_ctor_get(v_k_3759_, 1);
v_fst_4036_ = lean_ctor_get(v_k_3777_, 0);
v_snd_4037_ = lean_ctor_get(v_k_3777_, 1);
v___x_4038_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_fst_4034_, v_fst_4036_);
if (v___x_4038_ == 1)
{
uint8_t v___x_4039_; 
v___x_4039_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_snd_4035_, v_snd_4037_);
v___y_3834_ = v___x_4039_;
goto v___jp_3833_;
}
else
{
v___y_3834_ = v___x_4038_;
goto v___jp_3833_;
}
v___jp_3784_:
{
lean_object* v___x_3792_; lean_object* v___x_3794_; 
v___x_3792_ = lean_nat_add(v___y_3790_, v___y_3791_);
lean_dec(v___y_3791_);
lean_dec(v___y_3790_);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 3, v___y_3786_);
lean_ctor_set(v___x_3782_, 0, v___x_3792_);
v___x_3794_ = v___x_3782_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3792_);
lean_ctor_set(v_reuseFailAlloc_3796_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_3796_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_3796_, 3, v___y_3786_);
lean_ctor_set(v_reuseFailAlloc_3796_, 4, v_r_3780_);
v___x_3794_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
lean_object* v___x_3795_; 
v___x_3795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3795_, 0, v___y_3788_);
lean_ctor_set(v___x_3795_, 1, v___y_3785_);
lean_ctor_set(v___x_3795_, 2, v___y_3787_);
lean_ctor_set(v___x_3795_, 3, v___y_3789_);
lean_ctor_set(v___x_3795_, 4, v___x_3794_);
return v___x_3795_;
}
}
v___jp_3797_:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3810_ = lean_nat_add(v___y_3801_, v___y_3809_);
lean_dec(v___y_3809_);
lean_dec(v___y_3801_);
v___x_3811_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
lean_ctor_set(v___x_3811_, 1, v___y_3806_);
lean_ctor_set(v___x_3811_, 2, v___y_3808_);
lean_ctor_set(v___x_3811_, 3, v___y_3805_);
lean_ctor_set(v___x_3811_, 4, v___y_3807_);
v___x_3812_ = lean_nat_add(v___y_3802_, v___y_3803_);
lean_dec(v___y_3803_);
if (lean_obj_tag(v___y_3798_) == 0)
{
lean_object* v_size_3813_; 
v_size_3813_ = lean_ctor_get(v___y_3798_, 0);
lean_inc(v_size_3813_);
v___y_3785_ = v___y_3799_;
v___y_3786_ = v___y_3798_;
v___y_3787_ = v___y_3800_;
v___y_3788_ = v___y_3804_;
v___y_3789_ = v___x_3811_;
v___y_3790_ = v___x_3812_;
v___y_3791_ = v_size_3813_;
goto v___jp_3784_;
}
else
{
lean_object* v___x_3814_; 
v___x_3814_ = lean_unsigned_to_nat(0u);
v___y_3785_ = v___y_3799_;
v___y_3786_ = v___y_3798_;
v___y_3787_ = v___y_3800_;
v___y_3788_ = v___y_3804_;
v___y_3789_ = v___x_3811_;
v___y_3790_ = v___x_3812_;
v___y_3791_ = v___x_3814_;
goto v___jp_3784_;
}
}
v___jp_3815_:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
v___x_3828_ = lean_nat_add(v___y_3821_, v___y_3827_);
lean_dec(v___y_3827_);
lean_dec(v___y_3821_);
v___x_3829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3828_);
lean_ctor_set(v___x_3829_, 1, v_k_3777_);
lean_ctor_set(v___x_3829_, 2, v_v_3778_);
lean_ctor_set(v___x_3829_, 3, v_l_3779_);
lean_ctor_set(v___x_3829_, 4, v___y_3816_);
v___x_3830_ = lean_nat_add(v___y_3820_, v___y_3819_);
lean_dec(v___y_3819_);
if (lean_obj_tag(v___y_3817_) == 0)
{
lean_object* v_size_3831_; 
v_size_3831_ = lean_ctor_get(v___y_3817_, 0);
lean_inc(v_size_3831_);
v___y_3763_ = v___y_3817_;
v___y_3764_ = v___y_3818_;
v___y_3765_ = v___y_3822_;
v___y_3766_ = v___x_3830_;
v___y_3767_ = v___x_3829_;
v___y_3768_ = v___y_3823_;
v___y_3769_ = v___y_3824_;
v___y_3770_ = v___y_3825_;
v___y_3771_ = v___y_3826_;
v___y_3772_ = v_size_3831_;
goto v___jp_3762_;
}
else
{
lean_object* v___x_3832_; 
v___x_3832_ = lean_unsigned_to_nat(0u);
v___y_3763_ = v___y_3817_;
v___y_3764_ = v___y_3818_;
v___y_3765_ = v___y_3822_;
v___y_3766_ = v___x_3830_;
v___y_3767_ = v___x_3829_;
v___y_3768_ = v___y_3823_;
v___y_3769_ = v___y_3824_;
v___y_3770_ = v___y_3825_;
v___y_3771_ = v___y_3826_;
v___y_3772_ = v___x_3832_;
goto v___jp_3762_;
}
}
v___jp_3833_:
{
switch(v___y_3834_)
{
case 0:
{
lean_object* v_impl_3835_; lean_object* v___x_3836_; 
lean_dec(v_size_3776_);
v_impl_3835_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_3759_, v_v_3760_, v_l_3779_);
v___x_3836_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3780_) == 0)
{
lean_object* v_size_3837_; lean_object* v_size_3838_; lean_object* v_k_3839_; lean_object* v_v_3840_; lean_object* v_l_3841_; lean_object* v_r_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; uint8_t v___x_3845_; 
v_size_3837_ = lean_ctor_get(v_r_3780_, 0);
v_size_3838_ = lean_ctor_get(v_impl_3835_, 0);
lean_inc(v_size_3838_);
v_k_3839_ = lean_ctor_get(v_impl_3835_, 1);
lean_inc(v_k_3839_);
v_v_3840_ = lean_ctor_get(v_impl_3835_, 2);
lean_inc(v_v_3840_);
v_l_3841_ = lean_ctor_get(v_impl_3835_, 3);
lean_inc(v_l_3841_);
v_r_3842_ = lean_ctor_get(v_impl_3835_, 4);
lean_inc(v_r_3842_);
v___x_3843_ = lean_unsigned_to_nat(3u);
v___x_3844_ = lean_nat_mul(v___x_3843_, v_size_3837_);
v___x_3845_ = lean_nat_dec_lt(v___x_3844_, v_size_3838_);
lean_dec(v___x_3844_);
if (v___x_3845_ == 0)
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_dec(v_r_3842_);
lean_dec(v_l_3841_);
lean_dec(v_v_3840_);
lean_dec(v_k_3839_);
lean_del_object(v___x_3782_);
v___x_3846_ = lean_nat_add(v___x_3836_, v_size_3838_);
lean_dec(v_size_3838_);
v___x_3847_ = lean_nat_add(v___x_3846_, v_size_3837_);
lean_dec(v___x_3846_);
v___x_3848_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3847_);
lean_ctor_set(v___x_3848_, 1, v_k_3777_);
lean_ctor_set(v___x_3848_, 2, v_v_3778_);
lean_ctor_set(v___x_3848_, 3, v_impl_3835_);
lean_ctor_set(v___x_3848_, 4, v_r_3780_);
return v___x_3848_;
}
else
{
lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3885_; 
v_isSharedCheck_3885_ = !lean_is_exclusive(v_impl_3835_);
if (v_isSharedCheck_3885_ == 0)
{
lean_object* v_unused_3886_; lean_object* v_unused_3887_; lean_object* v_unused_3888_; lean_object* v_unused_3889_; lean_object* v_unused_3890_; 
v_unused_3886_ = lean_ctor_get(v_impl_3835_, 4);
lean_dec(v_unused_3886_);
v_unused_3887_ = lean_ctor_get(v_impl_3835_, 3);
lean_dec(v_unused_3887_);
v_unused_3888_ = lean_ctor_get(v_impl_3835_, 2);
lean_dec(v_unused_3888_);
v_unused_3889_ = lean_ctor_get(v_impl_3835_, 1);
lean_dec(v_unused_3889_);
v_unused_3890_ = lean_ctor_get(v_impl_3835_, 0);
lean_dec(v_unused_3890_);
v___x_3850_ = v_impl_3835_;
v_isShared_3851_ = v_isSharedCheck_3885_;
goto v_resetjp_3849_;
}
else
{
lean_dec(v_impl_3835_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3885_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v_size_3852_; lean_object* v_size_3853_; lean_object* v_k_3854_; lean_object* v_v_3855_; lean_object* v_l_3856_; lean_object* v_r_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; uint8_t v___x_3860_; 
v_size_3852_ = lean_ctor_get(v_l_3841_, 0);
v_size_3853_ = lean_ctor_get(v_r_3842_, 0);
v_k_3854_ = lean_ctor_get(v_r_3842_, 1);
v_v_3855_ = lean_ctor_get(v_r_3842_, 2);
v_l_3856_ = lean_ctor_get(v_r_3842_, 3);
v_r_3857_ = lean_ctor_get(v_r_3842_, 4);
v___x_3858_ = lean_unsigned_to_nat(2u);
v___x_3859_ = lean_nat_mul(v___x_3858_, v_size_3852_);
v___x_3860_ = lean_nat_dec_lt(v_size_3853_, v___x_3859_);
lean_dec(v___x_3859_);
if (v___x_3860_ == 0)
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
lean_inc(v_r_3857_);
lean_inc(v_l_3856_);
lean_inc(v_v_3855_);
lean_inc(v_k_3854_);
lean_del_object(v___x_3850_);
lean_dec(v_r_3842_);
v___x_3861_ = lean_nat_add(v___x_3836_, v_size_3838_);
lean_dec(v_size_3838_);
v___x_3862_ = lean_nat_add(v___x_3861_, v_size_3837_);
lean_dec(v___x_3861_);
v___x_3863_ = lean_nat_add(v___x_3836_, v_size_3852_);
if (lean_obj_tag(v_l_3856_) == 0)
{
lean_object* v_size_3864_; 
v_size_3864_ = lean_ctor_get(v_l_3856_, 0);
lean_inc(v_size_3864_);
lean_inc(v_size_3837_);
v___y_3798_ = v_r_3857_;
v___y_3799_ = v_k_3854_;
v___y_3800_ = v_v_3855_;
v___y_3801_ = v___x_3863_;
v___y_3802_ = v___x_3836_;
v___y_3803_ = v_size_3837_;
v___y_3804_ = v___x_3862_;
v___y_3805_ = v_l_3841_;
v___y_3806_ = v_k_3839_;
v___y_3807_ = v_l_3856_;
v___y_3808_ = v_v_3840_;
v___y_3809_ = v_size_3864_;
goto v___jp_3797_;
}
else
{
lean_object* v___x_3865_; 
v___x_3865_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_3837_);
v___y_3798_ = v_r_3857_;
v___y_3799_ = v_k_3854_;
v___y_3800_ = v_v_3855_;
v___y_3801_ = v___x_3863_;
v___y_3802_ = v___x_3836_;
v___y_3803_ = v_size_3837_;
v___y_3804_ = v___x_3862_;
v___y_3805_ = v_l_3841_;
v___y_3806_ = v_k_3839_;
v___y_3807_ = v_l_3856_;
v___y_3808_ = v_v_3840_;
v___y_3809_ = v___x_3865_;
goto v___jp_3797_;
}
}
else
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3871_; 
lean_del_object(v___x_3782_);
v___x_3866_ = lean_nat_add(v___x_3836_, v_size_3838_);
lean_dec(v_size_3838_);
v___x_3867_ = lean_nat_add(v___x_3866_, v_size_3837_);
lean_dec(v___x_3866_);
v___x_3868_ = lean_nat_add(v___x_3836_, v_size_3837_);
v___x_3869_ = lean_nat_add(v___x_3868_, v_size_3853_);
lean_dec(v___x_3868_);
lean_inc_ref(v_r_3780_);
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 4, v_r_3780_);
lean_ctor_set(v___x_3850_, 3, v_r_3842_);
lean_ctor_set(v___x_3850_, 2, v_v_3778_);
lean_ctor_set(v___x_3850_, 1, v_k_3777_);
lean_ctor_set(v___x_3850_, 0, v___x_3869_);
v___x_3871_ = v___x_3850_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_3884_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_3884_, 3, v_r_3842_);
lean_ctor_set(v_reuseFailAlloc_3884_, 4, v_r_3780_);
v___x_3871_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3878_; 
v_isSharedCheck_3878_ = !lean_is_exclusive(v_r_3780_);
if (v_isSharedCheck_3878_ == 0)
{
lean_object* v_unused_3879_; lean_object* v_unused_3880_; lean_object* v_unused_3881_; lean_object* v_unused_3882_; lean_object* v_unused_3883_; 
v_unused_3879_ = lean_ctor_get(v_r_3780_, 4);
lean_dec(v_unused_3879_);
v_unused_3880_ = lean_ctor_get(v_r_3780_, 3);
lean_dec(v_unused_3880_);
v_unused_3881_ = lean_ctor_get(v_r_3780_, 2);
lean_dec(v_unused_3881_);
v_unused_3882_ = lean_ctor_get(v_r_3780_, 1);
lean_dec(v_unused_3882_);
v_unused_3883_ = lean_ctor_get(v_r_3780_, 0);
lean_dec(v_unused_3883_);
v___x_3873_ = v_r_3780_;
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
else
{
lean_dec(v_r_3780_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3876_; 
if (v_isShared_3874_ == 0)
{
lean_ctor_set(v___x_3873_, 4, v___x_3871_);
lean_ctor_set(v___x_3873_, 3, v_l_3841_);
lean_ctor_set(v___x_3873_, 2, v_v_3840_);
lean_ctor_set(v___x_3873_, 1, v_k_3839_);
lean_ctor_set(v___x_3873_, 0, v___x_3867_);
v___x_3876_ = v___x_3873_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v___x_3867_);
lean_ctor_set(v_reuseFailAlloc_3877_, 1, v_k_3839_);
lean_ctor_set(v_reuseFailAlloc_3877_, 2, v_v_3840_);
lean_ctor_set(v_reuseFailAlloc_3877_, 3, v_l_3841_);
lean_ctor_set(v_reuseFailAlloc_3877_, 4, v___x_3871_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3891_; 
lean_del_object(v___x_3782_);
v_l_3891_ = lean_ctor_get(v_impl_3835_, 3);
lean_inc(v_l_3891_);
if (lean_obj_tag(v_l_3891_) == 0)
{
lean_object* v_r_3892_; lean_object* v_k_3893_; lean_object* v_v_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3903_; 
v_r_3892_ = lean_ctor_get(v_impl_3835_, 4);
v_k_3893_ = lean_ctor_get(v_impl_3835_, 1);
v_v_3894_ = lean_ctor_get(v_impl_3835_, 2);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_impl_3835_);
if (v_isSharedCheck_3903_ == 0)
{
lean_object* v_unused_3904_; lean_object* v_unused_3905_; 
v_unused_3904_ = lean_ctor_get(v_impl_3835_, 3);
lean_dec(v_unused_3904_);
v_unused_3905_ = lean_ctor_get(v_impl_3835_, 0);
lean_dec(v_unused_3905_);
v___x_3896_ = v_impl_3835_;
v_isShared_3897_ = v_isSharedCheck_3903_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_r_3892_);
lean_inc(v_v_3894_);
lean_inc(v_k_3893_);
lean_dec(v_impl_3835_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3903_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3900_; 
v___x_3898_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3892_);
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 3, v_r_3892_);
lean_ctor_set(v___x_3896_, 2, v_v_3778_);
lean_ctor_set(v___x_3896_, 1, v_k_3777_);
lean_ctor_set(v___x_3896_, 0, v___x_3836_);
v___x_3900_ = v___x_3896_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3836_);
lean_ctor_set(v_reuseFailAlloc_3902_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_3902_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_3902_, 3, v_r_3892_);
lean_ctor_set(v_reuseFailAlloc_3902_, 4, v_r_3892_);
v___x_3900_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
lean_object* v___x_3901_; 
v___x_3901_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3898_);
lean_ctor_set(v___x_3901_, 1, v_k_3893_);
lean_ctor_set(v___x_3901_, 2, v_v_3894_);
lean_ctor_set(v___x_3901_, 3, v_l_3891_);
lean_ctor_set(v___x_3901_, 4, v___x_3900_);
return v___x_3901_;
}
}
}
else
{
lean_object* v_r_3906_; 
v_r_3906_ = lean_ctor_get(v_impl_3835_, 4);
lean_inc(v_r_3906_);
if (lean_obj_tag(v_r_3906_) == 0)
{
lean_object* v_k_3907_; lean_object* v_v_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3929_; 
v_k_3907_ = lean_ctor_get(v_impl_3835_, 1);
v_v_3908_ = lean_ctor_get(v_impl_3835_, 2);
v_isSharedCheck_3929_ = !lean_is_exclusive(v_impl_3835_);
if (v_isSharedCheck_3929_ == 0)
{
lean_object* v_unused_3930_; lean_object* v_unused_3931_; lean_object* v_unused_3932_; 
v_unused_3930_ = lean_ctor_get(v_impl_3835_, 4);
lean_dec(v_unused_3930_);
v_unused_3931_ = lean_ctor_get(v_impl_3835_, 3);
lean_dec(v_unused_3931_);
v_unused_3932_ = lean_ctor_get(v_impl_3835_, 0);
lean_dec(v_unused_3932_);
v___x_3910_ = v_impl_3835_;
v_isShared_3911_ = v_isSharedCheck_3929_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_v_3908_);
lean_inc(v_k_3907_);
lean_dec(v_impl_3835_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3929_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v_k_3912_; lean_object* v_v_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3925_; 
v_k_3912_ = lean_ctor_get(v_r_3906_, 1);
v_v_3913_ = lean_ctor_get(v_r_3906_, 2);
v_isSharedCheck_3925_ = !lean_is_exclusive(v_r_3906_);
if (v_isSharedCheck_3925_ == 0)
{
lean_object* v_unused_3926_; lean_object* v_unused_3927_; lean_object* v_unused_3928_; 
v_unused_3926_ = lean_ctor_get(v_r_3906_, 4);
lean_dec(v_unused_3926_);
v_unused_3927_ = lean_ctor_get(v_r_3906_, 3);
lean_dec(v_unused_3927_);
v_unused_3928_ = lean_ctor_get(v_r_3906_, 0);
lean_dec(v_unused_3928_);
v___x_3915_ = v_r_3906_;
v_isShared_3916_ = v_isSharedCheck_3925_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_v_3913_);
lean_inc(v_k_3912_);
lean_dec(v_r_3906_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3925_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3917_ = lean_unsigned_to_nat(3u);
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 4, v_l_3891_);
lean_ctor_set(v___x_3915_, 3, v_l_3891_);
lean_ctor_set(v___x_3915_, 2, v_v_3908_);
lean_ctor_set(v___x_3915_, 1, v_k_3907_);
lean_ctor_set(v___x_3915_, 0, v___x_3836_);
v___x_3919_ = v___x_3915_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v___x_3836_);
lean_ctor_set(v_reuseFailAlloc_3924_, 1, v_k_3907_);
lean_ctor_set(v_reuseFailAlloc_3924_, 2, v_v_3908_);
lean_ctor_set(v_reuseFailAlloc_3924_, 3, v_l_3891_);
lean_ctor_set(v_reuseFailAlloc_3924_, 4, v_l_3891_);
v___x_3919_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
lean_object* v___x_3921_; 
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 4, v_l_3891_);
lean_ctor_set(v___x_3910_, 2, v_v_3778_);
lean_ctor_set(v___x_3910_, 1, v_k_3777_);
lean_ctor_set(v___x_3910_, 0, v___x_3836_);
v___x_3921_ = v___x_3910_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v___x_3836_);
lean_ctor_set(v_reuseFailAlloc_3923_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_3923_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_3923_, 3, v_l_3891_);
lean_ctor_set(v_reuseFailAlloc_3923_, 4, v_l_3891_);
v___x_3921_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
lean_object* v___x_3922_; 
v___x_3922_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3917_);
lean_ctor_set(v___x_3922_, 1, v_k_3912_);
lean_ctor_set(v___x_3922_, 2, v_v_3913_);
lean_ctor_set(v___x_3922_, 3, v___x_3919_);
lean_ctor_set(v___x_3922_, 4, v___x_3921_);
return v___x_3922_;
}
}
}
}
}
else
{
lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3933_ = lean_unsigned_to_nat(2u);
v___x_3934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
lean_ctor_set(v___x_3934_, 1, v_k_3777_);
lean_ctor_set(v___x_3934_, 2, v_v_3778_);
lean_ctor_set(v___x_3934_, 3, v_impl_3835_);
lean_ctor_set(v___x_3934_, 4, v_r_3906_);
return v___x_3934_;
}
}
}
}
case 1:
{
lean_object* v___x_3935_; 
lean_del_object(v___x_3782_);
lean_dec(v_v_3778_);
lean_dec(v_k_3777_);
v___x_3935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3935_, 0, v_size_3776_);
lean_ctor_set(v___x_3935_, 1, v_k_3759_);
lean_ctor_set(v___x_3935_, 2, v_v_3760_);
lean_ctor_set(v___x_3935_, 3, v_l_3779_);
lean_ctor_set(v___x_3935_, 4, v_r_3780_);
return v___x_3935_;
}
default: 
{
lean_object* v_impl_3936_; lean_object* v___x_3937_; 
lean_del_object(v___x_3782_);
lean_dec(v_size_3776_);
v_impl_3936_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_3759_, v_v_3760_, v_r_3780_);
v___x_3937_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3779_) == 0)
{
lean_object* v_size_3938_; lean_object* v_size_3939_; lean_object* v_k_3940_; lean_object* v_v_3941_; lean_object* v_l_3942_; lean_object* v_r_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; uint8_t v___x_3946_; 
v_size_3938_ = lean_ctor_get(v_l_3779_, 0);
v_size_3939_ = lean_ctor_get(v_impl_3936_, 0);
lean_inc(v_size_3939_);
v_k_3940_ = lean_ctor_get(v_impl_3936_, 1);
lean_inc(v_k_3940_);
v_v_3941_ = lean_ctor_get(v_impl_3936_, 2);
lean_inc(v_v_3941_);
v_l_3942_ = lean_ctor_get(v_impl_3936_, 3);
lean_inc(v_l_3942_);
v_r_3943_ = lean_ctor_get(v_impl_3936_, 4);
lean_inc(v_r_3943_);
v___x_3944_ = lean_unsigned_to_nat(3u);
v___x_3945_ = lean_nat_mul(v___x_3944_, v_size_3938_);
v___x_3946_ = lean_nat_dec_lt(v___x_3945_, v_size_3939_);
lean_dec(v___x_3945_);
if (v___x_3946_ == 0)
{
lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
lean_dec(v_r_3943_);
lean_dec(v_l_3942_);
lean_dec(v_v_3941_);
lean_dec(v_k_3940_);
v___x_3947_ = lean_nat_add(v___x_3937_, v_size_3938_);
v___x_3948_ = lean_nat_add(v___x_3947_, v_size_3939_);
lean_dec(v_size_3939_);
lean_dec(v___x_3947_);
v___x_3949_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
lean_ctor_set(v___x_3949_, 1, v_k_3777_);
lean_ctor_set(v___x_3949_, 2, v_v_3778_);
lean_ctor_set(v___x_3949_, 3, v_l_3779_);
lean_ctor_set(v___x_3949_, 4, v_impl_3936_);
return v___x_3949_;
}
else
{
lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3984_; 
v_isSharedCheck_3984_ = !lean_is_exclusive(v_impl_3936_);
if (v_isSharedCheck_3984_ == 0)
{
lean_object* v_unused_3985_; lean_object* v_unused_3986_; lean_object* v_unused_3987_; lean_object* v_unused_3988_; lean_object* v_unused_3989_; 
v_unused_3985_ = lean_ctor_get(v_impl_3936_, 4);
lean_dec(v_unused_3985_);
v_unused_3986_ = lean_ctor_get(v_impl_3936_, 3);
lean_dec(v_unused_3986_);
v_unused_3987_ = lean_ctor_get(v_impl_3936_, 2);
lean_dec(v_unused_3987_);
v_unused_3988_ = lean_ctor_get(v_impl_3936_, 1);
lean_dec(v_unused_3988_);
v_unused_3989_ = lean_ctor_get(v_impl_3936_, 0);
lean_dec(v_unused_3989_);
v___x_3951_ = v_impl_3936_;
v_isShared_3952_ = v_isSharedCheck_3984_;
goto v_resetjp_3950_;
}
else
{
lean_dec(v_impl_3936_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3984_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v_size_3953_; lean_object* v_k_3954_; lean_object* v_v_3955_; lean_object* v_l_3956_; lean_object* v_r_3957_; lean_object* v_size_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; uint8_t v___x_3961_; 
v_size_3953_ = lean_ctor_get(v_l_3942_, 0);
v_k_3954_ = lean_ctor_get(v_l_3942_, 1);
v_v_3955_ = lean_ctor_get(v_l_3942_, 2);
v_l_3956_ = lean_ctor_get(v_l_3942_, 3);
v_r_3957_ = lean_ctor_get(v_l_3942_, 4);
v_size_3958_ = lean_ctor_get(v_r_3943_, 0);
v___x_3959_ = lean_unsigned_to_nat(2u);
v___x_3960_ = lean_nat_mul(v___x_3959_, v_size_3958_);
v___x_3961_ = lean_nat_dec_lt(v_size_3953_, v___x_3960_);
lean_dec(v___x_3960_);
if (v___x_3961_ == 0)
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
lean_inc(v_size_3958_);
lean_inc(v_r_3957_);
lean_inc(v_l_3956_);
lean_inc(v_v_3955_);
lean_inc(v_k_3954_);
lean_del_object(v___x_3951_);
lean_dec(v_l_3942_);
v___x_3962_ = lean_nat_add(v___x_3937_, v_size_3938_);
v___x_3963_ = lean_nat_add(v___x_3962_, v_size_3939_);
lean_dec(v_size_3939_);
if (lean_obj_tag(v_l_3956_) == 0)
{
lean_object* v_size_3964_; 
v_size_3964_ = lean_ctor_get(v_l_3956_, 0);
lean_inc(v_size_3964_);
v___y_3816_ = v_l_3956_;
v___y_3817_ = v_r_3957_;
v___y_3818_ = v_v_3955_;
v___y_3819_ = v_size_3958_;
v___y_3820_ = v___x_3937_;
v___y_3821_ = v___x_3962_;
v___y_3822_ = v_v_3941_;
v___y_3823_ = v___x_3963_;
v___y_3824_ = v_r_3943_;
v___y_3825_ = v_k_3954_;
v___y_3826_ = v_k_3940_;
v___y_3827_ = v_size_3964_;
goto v___jp_3815_;
}
else
{
lean_object* v___x_3965_; 
v___x_3965_ = lean_unsigned_to_nat(0u);
v___y_3816_ = v_l_3956_;
v___y_3817_ = v_r_3957_;
v___y_3818_ = v_v_3955_;
v___y_3819_ = v_size_3958_;
v___y_3820_ = v___x_3937_;
v___y_3821_ = v___x_3962_;
v___y_3822_ = v_v_3941_;
v___y_3823_ = v___x_3963_;
v___y_3824_ = v_r_3943_;
v___y_3825_ = v_k_3954_;
v___y_3826_ = v_k_3940_;
v___y_3827_ = v___x_3965_;
goto v___jp_3815_;
}
}
else
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3970_; 
v___x_3966_ = lean_nat_add(v___x_3937_, v_size_3938_);
v___x_3967_ = lean_nat_add(v___x_3966_, v_size_3939_);
lean_dec(v_size_3939_);
v___x_3968_ = lean_nat_add(v___x_3966_, v_size_3953_);
lean_dec(v___x_3966_);
lean_inc_ref(v_l_3779_);
if (v_isShared_3952_ == 0)
{
lean_ctor_set(v___x_3951_, 4, v_l_3942_);
lean_ctor_set(v___x_3951_, 3, v_l_3779_);
lean_ctor_set(v___x_3951_, 2, v_v_3778_);
lean_ctor_set(v___x_3951_, 1, v_k_3777_);
lean_ctor_set(v___x_3951_, 0, v___x_3968_);
v___x_3970_ = v___x_3951_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3968_);
lean_ctor_set(v_reuseFailAlloc_3983_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_3983_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_3983_, 3, v_l_3779_);
lean_ctor_set(v_reuseFailAlloc_3983_, 4, v_l_3942_);
v___x_3970_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_isSharedCheck_3977_ = !lean_is_exclusive(v_l_3779_);
if (v_isSharedCheck_3977_ == 0)
{
lean_object* v_unused_3978_; lean_object* v_unused_3979_; lean_object* v_unused_3980_; lean_object* v_unused_3981_; lean_object* v_unused_3982_; 
v_unused_3978_ = lean_ctor_get(v_l_3779_, 4);
lean_dec(v_unused_3978_);
v_unused_3979_ = lean_ctor_get(v_l_3779_, 3);
lean_dec(v_unused_3979_);
v_unused_3980_ = lean_ctor_get(v_l_3779_, 2);
lean_dec(v_unused_3980_);
v_unused_3981_ = lean_ctor_get(v_l_3779_, 1);
lean_dec(v_unused_3981_);
v_unused_3982_ = lean_ctor_get(v_l_3779_, 0);
lean_dec(v_unused_3982_);
v___x_3972_ = v_l_3779_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_dec(v_l_3779_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
lean_ctor_set(v___x_3972_, 4, v_r_3943_);
lean_ctor_set(v___x_3972_, 3, v___x_3970_);
lean_ctor_set(v___x_3972_, 2, v_v_3941_);
lean_ctor_set(v___x_3972_, 1, v_k_3940_);
lean_ctor_set(v___x_3972_, 0, v___x_3967_);
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v_k_3940_);
lean_ctor_set(v_reuseFailAlloc_3976_, 2, v_v_3941_);
lean_ctor_set(v_reuseFailAlloc_3976_, 3, v___x_3970_);
lean_ctor_set(v_reuseFailAlloc_3976_, 4, v_r_3943_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3990_; 
v_l_3990_ = lean_ctor_get(v_impl_3936_, 3);
lean_inc(v_l_3990_);
if (lean_obj_tag(v_l_3990_) == 0)
{
lean_object* v_r_3991_; lean_object* v_k_3992_; lean_object* v_v_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4014_; 
v_r_3991_ = lean_ctor_get(v_impl_3936_, 4);
v_k_3992_ = lean_ctor_get(v_impl_3936_, 1);
v_v_3993_ = lean_ctor_get(v_impl_3936_, 2);
v_isSharedCheck_4014_ = !lean_is_exclusive(v_impl_3936_);
if (v_isSharedCheck_4014_ == 0)
{
lean_object* v_unused_4015_; lean_object* v_unused_4016_; 
v_unused_4015_ = lean_ctor_get(v_impl_3936_, 3);
lean_dec(v_unused_4015_);
v_unused_4016_ = lean_ctor_get(v_impl_3936_, 0);
lean_dec(v_unused_4016_);
v___x_3995_ = v_impl_3936_;
v_isShared_3996_ = v_isSharedCheck_4014_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_r_3991_);
lean_inc(v_v_3993_);
lean_inc(v_k_3992_);
lean_dec(v_impl_3936_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4014_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v_k_3997_; lean_object* v_v_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4010_; 
v_k_3997_ = lean_ctor_get(v_l_3990_, 1);
v_v_3998_ = lean_ctor_get(v_l_3990_, 2);
v_isSharedCheck_4010_ = !lean_is_exclusive(v_l_3990_);
if (v_isSharedCheck_4010_ == 0)
{
lean_object* v_unused_4011_; lean_object* v_unused_4012_; lean_object* v_unused_4013_; 
v_unused_4011_ = lean_ctor_get(v_l_3990_, 4);
lean_dec(v_unused_4011_);
v_unused_4012_ = lean_ctor_get(v_l_3990_, 3);
lean_dec(v_unused_4012_);
v_unused_4013_ = lean_ctor_get(v_l_3990_, 0);
lean_dec(v_unused_4013_);
v___x_4000_ = v_l_3990_;
v_isShared_4001_ = v_isSharedCheck_4010_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_v_3998_);
lean_inc(v_k_3997_);
lean_dec(v_l_3990_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4010_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4002_; lean_object* v___x_4004_; 
v___x_4002_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3991_, 2);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 4, v_r_3991_);
lean_ctor_set(v___x_4000_, 3, v_r_3991_);
lean_ctor_set(v___x_4000_, 2, v_v_3778_);
lean_ctor_set(v___x_4000_, 1, v_k_3777_);
lean_ctor_set(v___x_4000_, 0, v___x_3937_);
v___x_4004_ = v___x_4000_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v___x_3937_);
lean_ctor_set(v_reuseFailAlloc_4009_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_4009_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_4009_, 3, v_r_3991_);
lean_ctor_set(v_reuseFailAlloc_4009_, 4, v_r_3991_);
v___x_4004_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
lean_object* v___x_4006_; 
lean_inc(v_r_3991_);
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 3, v_r_3991_);
lean_ctor_set(v___x_3995_, 0, v___x_3937_);
v___x_4006_ = v___x_3995_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_3937_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v_k_3992_);
lean_ctor_set(v_reuseFailAlloc_4008_, 2, v_v_3993_);
lean_ctor_set(v_reuseFailAlloc_4008_, 3, v_r_3991_);
lean_ctor_set(v_reuseFailAlloc_4008_, 4, v_r_3991_);
v___x_4006_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
lean_object* v___x_4007_; 
v___x_4007_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4002_);
lean_ctor_set(v___x_4007_, 1, v_k_3997_);
lean_ctor_set(v___x_4007_, 2, v_v_3998_);
lean_ctor_set(v___x_4007_, 3, v___x_4004_);
lean_ctor_set(v___x_4007_, 4, v___x_4006_);
return v___x_4007_;
}
}
}
}
}
else
{
lean_object* v_r_4017_; 
v_r_4017_ = lean_ctor_get(v_impl_3936_, 4);
lean_inc(v_r_4017_);
if (lean_obj_tag(v_r_4017_) == 0)
{
lean_object* v_k_4018_; lean_object* v_v_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4028_; 
v_k_4018_ = lean_ctor_get(v_impl_3936_, 1);
v_v_4019_ = lean_ctor_get(v_impl_3936_, 2);
v_isSharedCheck_4028_ = !lean_is_exclusive(v_impl_3936_);
if (v_isSharedCheck_4028_ == 0)
{
lean_object* v_unused_4029_; lean_object* v_unused_4030_; lean_object* v_unused_4031_; 
v_unused_4029_ = lean_ctor_get(v_impl_3936_, 4);
lean_dec(v_unused_4029_);
v_unused_4030_ = lean_ctor_get(v_impl_3936_, 3);
lean_dec(v_unused_4030_);
v_unused_4031_ = lean_ctor_get(v_impl_3936_, 0);
lean_dec(v_unused_4031_);
v___x_4021_ = v_impl_3936_;
v_isShared_4022_ = v_isSharedCheck_4028_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_v_4019_);
lean_inc(v_k_4018_);
lean_dec(v_impl_3936_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4028_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4023_; lean_object* v___x_4025_; 
v___x_4023_ = lean_unsigned_to_nat(3u);
if (v_isShared_4022_ == 0)
{
lean_ctor_set(v___x_4021_, 4, v_l_3990_);
lean_ctor_set(v___x_4021_, 2, v_v_3778_);
lean_ctor_set(v___x_4021_, 1, v_k_3777_);
lean_ctor_set(v___x_4021_, 0, v___x_3937_);
v___x_4025_ = v___x_4021_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v___x_3937_);
lean_ctor_set(v_reuseFailAlloc_4027_, 1, v_k_3777_);
lean_ctor_set(v_reuseFailAlloc_4027_, 2, v_v_3778_);
lean_ctor_set(v_reuseFailAlloc_4027_, 3, v_l_3990_);
lean_ctor_set(v_reuseFailAlloc_4027_, 4, v_l_3990_);
v___x_4025_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
lean_object* v___x_4026_; 
v___x_4026_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4023_);
lean_ctor_set(v___x_4026_, 1, v_k_4018_);
lean_ctor_set(v___x_4026_, 2, v_v_4019_);
lean_ctor_set(v___x_4026_, 3, v___x_4025_);
lean_ctor_set(v___x_4026_, 4, v_r_4017_);
return v___x_4026_;
}
}
}
else
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4032_ = lean_unsigned_to_nat(2u);
v___x_4033_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
lean_ctor_set(v___x_4033_, 1, v_k_3777_);
lean_ctor_set(v___x_4033_, 2, v_v_3778_);
lean_ctor_set(v___x_4033_, 3, v_r_4017_);
lean_ctor_set(v___x_4033_, 4, v_impl_3936_);
return v___x_4033_;
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
lean_object* v___x_4041_; lean_object* v___x_4042_; 
v___x_4041_ = lean_unsigned_to_nat(1u);
v___x_4042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4041_);
lean_ctor_set(v___x_4042_, 1, v_k_3759_);
lean_ctor_set(v___x_4042_, 2, v_v_3760_);
lean_ctor_set(v___x_4042_, 3, v_t_3761_);
lean_ctor_set(v___x_4042_, 4, v_t_3761_);
return v___x_4042_;
}
v___jp_3762_:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3773_ = lean_nat_add(v___y_3766_, v___y_3772_);
lean_dec(v___y_3772_);
lean_dec(v___y_3766_);
v___x_3774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3773_);
lean_ctor_set(v___x_3774_, 1, v___y_3771_);
lean_ctor_set(v___x_3774_, 2, v___y_3765_);
lean_ctor_set(v___x_3774_, 3, v___y_3763_);
lean_ctor_set(v___x_3774_, 4, v___y_3769_);
v___x_3775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3775_, 0, v___y_3768_);
lean_ctor_set(v___x_3775_, 1, v___y_3770_);
lean_ctor_set(v___x_3775_, 2, v___y_3764_);
lean_ctor_set(v___x_3775_, 3, v___y_3767_);
lean_ctor_set(v___x_3775_, 4, v___x_3774_);
return v___x_3775_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(lean_object* v_t_4043_, lean_object* v_k_4044_, lean_object* v_fallback_4045_){
_start:
{
if (lean_obj_tag(v_t_4043_) == 0)
{
lean_object* v_k_4046_; lean_object* v_v_4047_; lean_object* v_l_4048_; lean_object* v_r_4049_; uint8_t v___y_4051_; lean_object* v_fst_4054_; lean_object* v_snd_4055_; lean_object* v_fst_4056_; lean_object* v_snd_4057_; uint8_t v___x_4058_; 
v_k_4046_ = lean_ctor_get(v_t_4043_, 1);
v_v_4047_ = lean_ctor_get(v_t_4043_, 2);
v_l_4048_ = lean_ctor_get(v_t_4043_, 3);
v_r_4049_ = lean_ctor_get(v_t_4043_, 4);
v_fst_4054_ = lean_ctor_get(v_k_4044_, 0);
v_snd_4055_ = lean_ctor_get(v_k_4044_, 1);
v_fst_4056_ = lean_ctor_get(v_k_4046_, 0);
v_snd_4057_ = lean_ctor_get(v_k_4046_, 1);
v___x_4058_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_fst_4054_, v_fst_4056_);
if (v___x_4058_ == 1)
{
uint8_t v___x_4059_; 
v___x_4059_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_snd_4055_, v_snd_4057_);
v___y_4051_ = v___x_4059_;
goto v___jp_4050_;
}
else
{
v___y_4051_ = v___x_4058_;
goto v___jp_4050_;
}
v___jp_4050_:
{
switch(v___y_4051_)
{
case 0:
{
v_t_4043_ = v_l_4048_;
goto _start;
}
case 1:
{
lean_inc(v_v_4047_);
return v_v_4047_;
}
default: 
{
v_t_4043_ = v_r_4049_;
goto _start;
}
}
}
}
else
{
lean_inc(v_fallback_4045_);
return v_fallback_4045_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg___boxed(lean_object* v_t_4060_, lean_object* v_k_4061_, lean_object* v_fallback_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_t_4060_, v_k_4061_, v_fallback_4062_);
lean_dec(v_fallback_4062_);
lean_dec_ref(v_k_4061_);
lean_dec(v_t_4060_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(lean_object* v___x_4064_, lean_object* v_as_4065_, size_t v_sz_4066_, size_t v_i_4067_, lean_object* v_b_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
uint8_t v___x_4072_; 
v___x_4072_ = lean_usize_dec_lt(v_i_4067_, v_sz_4066_);
if (v___x_4072_ == 0)
{
lean_object* v___x_4073_; 
lean_dec(v___x_4064_);
v___x_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4073_, 0, v_b_4068_);
return v___x_4073_;
}
else
{
lean_object* v_a_4074_; lean_object* v_fst_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4103_; 
v_a_4074_ = lean_array_uget(v_as_4065_, v_i_4067_);
v_fst_4075_ = lean_ctor_get(v_a_4074_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v_a_4074_);
if (v_isSharedCheck_4103_ == 0)
{
lean_object* v_unused_4104_; 
v_unused_4104_ = lean_ctor_get(v_a_4074_, 1);
lean_dec(v_unused_4104_);
v___x_4077_ = v_a_4074_;
v_isShared_4078_ = v_isSharedCheck_4103_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_fst_4075_);
lean_dec(v_a_4074_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4103_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; 
v___x_4079_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_4075_);
v___x_4080_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_fst_4075_, v___y_4069_, v___y_4070_);
if (lean_obj_tag(v___x_4080_) == 0)
{
lean_object* v_a_4081_; lean_object* v___y_4083_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
lean_inc(v_a_4081_);
lean_dec_ref_known(v___x_4080_, 1);
if (lean_obj_tag(v_a_4081_) == 0)
{
lean_inc(v___x_4064_);
v___y_4083_ = v___x_4064_;
goto v___jp_4082_;
}
else
{
lean_object* v_val_4094_; 
v_val_4094_ = lean_ctor_get(v_a_4081_, 0);
lean_inc(v_val_4094_);
lean_dec_ref_known(v_a_4081_, 1);
v___y_4083_ = v_val_4094_;
goto v___jp_4082_;
}
v___jp_4082_:
{
lean_object* v___x_4085_; 
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 1, v_fst_4075_);
lean_ctor_set(v___x_4077_, 0, v___y_4083_);
v___x_4085_ = v___x_4077_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v___y_4083_);
lean_ctor_set(v_reuseFailAlloc_4093_, 1, v_fst_4075_);
v___x_4085_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; size_t v___x_4090_; size_t v___x_4091_; 
v___x_4086_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_b_4068_, v___x_4085_, v___x_4079_);
v___x_4087_ = lean_unsigned_to_nat(1u);
v___x_4088_ = lean_nat_add(v___x_4086_, v___x_4087_);
lean_dec(v___x_4086_);
v___x_4089_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v___x_4085_, v___x_4088_, v_b_4068_);
v___x_4090_ = ((size_t)1ULL);
v___x_4091_ = lean_usize_add(v_i_4067_, v___x_4090_);
v_i_4067_ = v___x_4091_;
v_b_4068_ = v___x_4089_;
goto _start;
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
lean_del_object(v___x_4077_);
lean_dec(v_fst_4075_);
lean_dec(v_b_4068_);
lean_dec(v___x_4064_);
v_a_4095_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4080_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4080_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7___boxed(lean_object* v___x_4105_, lean_object* v_as_4106_, lean_object* v_sz_4107_, lean_object* v_i_4108_, lean_object* v_b_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_){
_start:
{
size_t v_sz_boxed_4113_; size_t v_i_boxed_4114_; lean_object* v_res_4115_; 
v_sz_boxed_4113_ = lean_unbox_usize(v_sz_4107_);
lean_dec(v_sz_4107_);
v_i_boxed_4114_ = lean_unbox_usize(v_i_4108_);
lean_dec(v_i_4108_);
v_res_4115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(v___x_4105_, v_as_4106_, v_sz_boxed_4113_, v_i_boxed_4114_, v_b_4109_, v___y_4110_, v___y_4111_);
lean_dec(v___y_4111_);
lean_dec_ref(v___y_4110_);
lean_dec_ref(v_as_4106_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(lean_object* v_fst_4116_, lean_object* v_init_4117_, lean_object* v_x_4118_){
_start:
{
if (lean_obj_tag(v_x_4118_) == 0)
{
lean_object* v_k_4120_; lean_object* v_v_4121_; lean_object* v_l_4122_; lean_object* v_r_4123_; uint8_t v___x_4124_; lean_object* v___x_4125_; lean_object* v_a_4126_; lean_object* v_a_4127_; lean_object* v_fst_4128_; lean_object* v_snd_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4143_; 
v_k_4120_ = lean_ctor_get(v_x_4118_, 1);
lean_inc(v_k_4120_);
v_v_4121_ = lean_ctor_get(v_x_4118_, 2);
lean_inc(v_v_4121_);
v_l_4122_ = lean_ctor_get(v_x_4118_, 3);
lean_inc(v_l_4122_);
v_r_4123_ = lean_ctor_get(v_x_4118_, 4);
lean_inc(v_r_4123_);
lean_dec_ref_known(v_x_4118_, 5);
v___x_4124_ = 1;
lean_inc_ref(v_fst_4116_);
v___x_4125_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4116_, v_init_4117_, v_l_4122_);
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_a_4126_);
lean_dec_ref(v___x_4125_);
v_a_4127_ = lean_ctor_get(v_a_4126_, 0);
lean_inc(v_a_4127_);
lean_dec(v_a_4126_);
v_fst_4128_ = lean_ctor_get(v_k_4120_, 0);
v_snd_4129_ = lean_ctor_get(v_k_4120_, 1);
v_isSharedCheck_4143_ = !lean_is_exclusive(v_k_4120_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4131_ = v_k_4120_;
v_isShared_4132_ = v_isSharedCheck_4143_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_snd_4129_);
lean_inc(v_fst_4128_);
lean_dec(v_k_4120_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4143_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v_optName_4133_; lean_object* v___x_4134_; lean_object* v___x_4136_; 
v_optName_4133_ = lean_ctor_get(v_fst_4116_, 1);
lean_inc(v_optName_4133_);
v___x_4134_ = l_Lean_Name_toString(v_optName_4133_, v___x_4124_);
if (v_isShared_4132_ == 0)
{
lean_ctor_set_tag(v___x_4131_, 1);
v___x_4136_ = v___x_4131_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_fst_4128_);
lean_ctor_set(v_reuseFailAlloc_4142_, 1, v_snd_4129_);
v___x_4136_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
double v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
v___x_4137_ = lean_float_of_nat(v_v_4121_);
v___x_4138_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_4138_, 0, v___x_4137_);
v___x_4139_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4134_);
lean_ctor_set(v___x_4139_, 1, v___x_4136_);
lean_ctor_set(v___x_4139_, 2, v___x_4138_);
v___x_4140_ = lean_array_push(v_a_4127_, v___x_4139_);
v_init_4117_ = v___x_4140_;
v_x_4118_ = v_r_4123_;
goto _start;
}
}
}
else
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
lean_dec_ref(v_fst_4116_);
v___x_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4144_, 0, v_init_4117_);
v___x_4145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4145_, 0, v___x_4144_);
return v___x_4145_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg___boxed(lean_object* v_fst_4146_, lean_object* v_init_4147_, lean_object* v_x_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4146_, v_init_4147_, v_x_4148_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(lean_object* v___x_4151_, lean_object* v_as_4152_, size_t v_sz_4153_, size_t v_i_4154_, lean_object* v_b_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_a_4160_; uint8_t v___x_4164_; 
v___x_4164_ = lean_usize_dec_lt(v_i_4154_, v_sz_4153_);
if (v___x_4164_ == 0)
{
lean_object* v___x_4165_; 
lean_dec(v___x_4151_);
v___x_4165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4165_, 0, v_b_4155_);
return v___x_4165_;
}
else
{
lean_object* v_a_4166_; lean_object* v_snd_4167_; lean_object* v_fst_4168_; lean_object* v_size_4169_; lean_object* v_buckets_4170_; lean_object* v___x_4171_; lean_object* v___y_4173_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; uint8_t v___x_4210_; 
v_a_4166_ = lean_array_uget_borrowed(v_as_4152_, v_i_4154_);
v_snd_4167_ = lean_ctor_get(v_a_4166_, 1);
v_fst_4168_ = lean_ctor_get(v_a_4166_, 0);
v_size_4169_ = lean_ctor_get(v_snd_4167_, 0);
v_buckets_4170_ = lean_ctor_get(v_snd_4167_, 1);
v___x_4171_ = lean_box(1);
v___x_4207_ = lean_mk_empty_array_with_capacity(v_size_4169_);
v___x_4208_ = lean_unsigned_to_nat(0u);
v___x_4209_ = lean_array_get_size(v_buckets_4170_);
v___x_4210_ = lean_nat_dec_lt(v___x_4208_, v___x_4209_);
if (v___x_4210_ == 0)
{
v___y_4173_ = v___x_4207_;
goto v___jp_4172_;
}
else
{
size_t v___x_4211_; size_t v___x_4212_; lean_object* v___x_4213_; 
v___x_4211_ = ((size_t)0ULL);
v___x_4212_ = lean_usize_of_nat(v___x_4209_);
v___x_4213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_buckets_4170_, v___x_4211_, v___x_4212_, v___x_4207_);
v___y_4173_ = v___x_4213_;
goto v___jp_4172_;
}
v___jp_4172_:
{
size_t v_sz_4174_; size_t v___x_4175_; lean_object* v___x_4176_; 
v_sz_4174_ = lean_array_size(v___y_4173_);
v___x_4175_ = ((size_t)0ULL);
lean_inc(v___x_4151_);
v___x_4176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(v___x_4151_, v___y_4173_, v_sz_4174_, v___x_4175_, v___x_4171_, v___y_4156_, v___y_4157_);
lean_dec_ref(v___y_4173_);
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4178_; 
v_a_4177_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_a_4177_);
lean_dec_ref_known(v___x_4176_, 1);
lean_inc(v_fst_4168_);
v___x_4178_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4168_, v_b_4155_, v_a_4177_);
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_a_4179_; lean_object* v_a_4180_; 
v_a_4179_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_a_4179_);
lean_dec_ref_known(v___x_4178_, 1);
v_a_4180_ = lean_ctor_get(v_a_4179_, 0);
lean_inc(v_a_4180_);
lean_dec(v_a_4179_);
v_a_4160_ = v_a_4180_;
goto v___jp_4159_;
}
else
{
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4190_; 
v_a_4181_ = lean_ctor_get(v___x_4178_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___x_4178_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4183_ = v___x_4178_;
v_isShared_4184_ = v_isSharedCheck_4190_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v___x_4178_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4190_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
if (lean_obj_tag(v_a_4181_) == 0)
{
lean_object* v_a_4185_; lean_object* v___x_4187_; 
lean_dec(v___x_4151_);
v_a_4185_ = lean_ctor_get(v_a_4181_, 0);
lean_inc(v_a_4185_);
lean_dec_ref_known(v_a_4181_, 1);
if (v_isShared_4184_ == 0)
{
lean_ctor_set_tag(v___x_4183_, 0);
lean_ctor_set(v___x_4183_, 0, v_a_4185_);
v___x_4187_ = v___x_4183_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4185_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
else
{
lean_object* v_a_4189_; 
lean_del_object(v___x_4183_);
v_a_4189_ = lean_ctor_get(v_a_4181_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v_a_4181_, 1);
v_a_4160_ = v_a_4189_;
goto v___jp_4159_;
}
}
}
else
{
lean_object* v_a_4191_; lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4198_; 
lean_dec(v___x_4151_);
v_a_4191_ = lean_ctor_get(v___x_4178_, 0);
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4178_);
if (v_isSharedCheck_4198_ == 0)
{
v___x_4193_ = v___x_4178_;
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
else
{
lean_inc(v_a_4191_);
lean_dec(v___x_4178_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
lean_object* v___x_4196_; 
if (v_isShared_4194_ == 0)
{
v___x_4196_ = v___x_4193_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v_a_4191_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
}
}
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
lean_dec_ref(v_b_4155_);
lean_dec(v___x_4151_);
v_a_4199_ = lean_ctor_get(v___x_4176_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4176_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4176_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
v___jp_4159_:
{
size_t v___x_4161_; size_t v___x_4162_; 
v___x_4161_ = ((size_t)1ULL);
v___x_4162_ = lean_usize_add(v_i_4154_, v___x_4161_);
v_i_4154_ = v___x_4162_;
v_b_4155_ = v_a_4160_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9___boxed(lean_object* v___x_4214_, lean_object* v_as_4215_, lean_object* v_sz_4216_, lean_object* v_i_4217_, lean_object* v_b_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
size_t v_sz_boxed_4222_; size_t v_i_boxed_4223_; lean_object* v_res_4224_; 
v_sz_boxed_4222_ = lean_unbox_usize(v_sz_4216_);
lean_dec(v_sz_4216_);
v_i_boxed_4223_ = lean_unbox_usize(v_i_4217_);
lean_dec(v_i_4217_);
v_res_4224_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(v___x_4214_, v_as_4215_, v_sz_boxed_4222_, v_i_boxed_4223_, v_b_4218_, v___y_4219_, v___y_4220_);
lean_dec(v___y_4220_);
lean_dec_ref(v___y_4219_);
lean_dec_ref(v_as_4215_);
return v_res_4224_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5(void){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4231_ = l_Lean_maxRecDepth;
v___x_4232_ = l_Lean_Options_empty;
v___x_4233_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v___x_4232_, v___x_4231_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(lean_object* v_args_4234_, lean_object* v_linterOpts_4235_, lean_object* v_sp_4236_, lean_object* v_env_4237_, lean_object* v_mod_4238_){
_start:
{
lean_object* v_a_4241_; lean_object* v_msg_4245_; lean_object* v_a_4250_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; uint8_t v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; uint8_t v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v_a_4289_; lean_object* v___y_4293_; lean_object* v___y_4296_; uint8_t v___y_4297_; uint8_t v___y_4298_; lean_object* v___y_4299_; lean_object* v___y_4300_; lean_object* v___y_4301_; lean_object* v___y_4302_; uint8_t v___y_4303_; lean_object* v___y_4373_; uint8_t v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; uint8_t v___y_4378_; lean_object* v___y_4388_; uint8_t v___y_4389_; lean_object* v___y_4390_; lean_object* v___y_4391_; lean_object* v___y_4392_; lean_object* v___x_4417_; lean_object* v___x_4418_; uint8_t v___x_4419_; lean_object* v___y_4421_; lean_object* v___x_4439_; uint8_t v___y_4441_; lean_object* v_env_4461_; uint8_t v___x_4462_; 
v___x_4264_ = l_Lean_Name_getRoot(v_mod_4238_);
v___x_4265_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_4266_ = l_Lean_instInhabitedFileMap_default;
v___x_4267_ = l_Lean_Options_empty;
v___x_4268_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
v___x_4269_ = lean_box(0);
v___x_4270_ = lean_unsigned_to_nat(0u);
v___x_4271_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_4272_ = l_Lean_firstFrontendMacroScope;
v___x_4273_ = lean_box(0);
v___x_4274_ = lean_box(0);
v___x_4275_ = 0;
v___x_4276_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_4277_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9));
v___x_4278_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10);
v___x_4279_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_4280_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_4281_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_4282_ = 1;
v___x_4283_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_4284_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19));
v___x_4285_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4285_, 0, v_env_4237_);
lean_ctor_set(v___x_4285_, 1, v___x_4276_);
lean_ctor_set(v___x_4285_, 2, v___x_4277_);
lean_ctor_set(v___x_4285_, 3, v___x_4278_);
lean_ctor_set(v___x_4285_, 4, v___x_4279_);
lean_ctor_set(v___x_4285_, 5, v___x_4280_);
lean_ctor_set(v___x_4285_, 6, v___x_4281_);
lean_ctor_set(v___x_4285_, 7, v___x_4283_);
lean_ctor_set(v___x_4285_, 8, v___x_4284_);
v___x_4286_ = lean_io_get_num_heartbeats();
v___x_4287_ = lean_st_mk_ref(v___x_4285_);
v___x_4417_ = l_Lean_inheritedTraceOptions;
v___x_4418_ = lean_st_ref_get(v___x_4417_);
v___x_4419_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_4439_ = lean_st_ref_get(v___x_4287_);
v_env_4461_ = lean_ctor_get(v___x_4439_, 0);
lean_inc_ref(v_env_4461_);
lean_dec(v___x_4439_);
v___x_4462_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4461_);
lean_dec_ref(v_env_4461_);
if (v___x_4419_ == 0)
{
if (v___x_4462_ == 0)
{
lean_inc(v___x_4287_);
v___y_4421_ = v___x_4287_;
goto v___jp_4420_;
}
else
{
v___y_4441_ = v___x_4419_;
goto v___jp_4440_;
}
}
else
{
v___y_4441_ = v___x_4462_;
goto v___jp_4440_;
}
v___jp_4240_:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4242_ = lean_mk_io_user_error(v_a_4241_);
v___x_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
return v___x_4243_;
}
v___jp_4244_:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4246_ = l_Lean_MessageData_toString(v_msg_4245_);
v___x_4247_ = lean_mk_io_user_error(v___x_4246_);
v___x_4248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
return v___x_4248_;
}
v___jp_4249_:
{
if (lean_obj_tag(v_a_4250_) == 0)
{
lean_object* v_msg_4251_; 
v_msg_4251_ = lean_ctor_get(v_a_4250_, 1);
lean_inc_ref(v_msg_4251_);
lean_dec_ref_known(v_a_4250_, 2);
v_msg_4245_ = v_msg_4251_;
goto v___jp_4244_;
}
else
{
lean_object* v_id_4252_; lean_object* v___x_4253_; 
v_id_4252_ = lean_ctor_get(v_a_4250_, 0);
lean_inc(v_id_4252_);
lean_dec_ref_known(v_a_4250_, 2);
v___x_4253_ = l_Lean_InternalExceptionId_getName(v_id_4252_);
if (lean_obj_tag(v___x_4253_) == 0)
{
lean_object* v_a_4254_; lean_object* v___x_4255_; uint8_t v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; 
lean_dec(v_id_4252_);
v_a_4254_ = lean_ctor_get(v___x_4253_, 0);
lean_inc(v_a_4254_);
lean_dec_ref_known(v___x_4253_, 1);
v___x_4255_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_4256_ = 1;
v___x_4257_ = l_Lean_Name_toString(v_a_4254_, v___x_4256_);
v___x_4258_ = lean_string_append(v___x_4255_, v___x_4257_);
lean_dec_ref(v___x_4257_);
v_a_4241_ = v___x_4258_;
goto v___jp_4240_;
}
else
{
lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; 
lean_dec_ref_known(v___x_4253_, 1);
v___x_4259_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_4260_ = l_Nat_reprFast(v_id_4252_);
v___x_4261_ = lean_string_append(v___x_4259_, v___x_4260_);
lean_dec_ref(v___x_4260_);
v___x_4262_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_4263_ = lean_string_append(v___x_4261_, v___x_4262_);
v_a_4241_ = v___x_4263_;
goto v___jp_4240_;
}
}
}
v___jp_4288_:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; 
v___x_4290_ = lean_st_ref_get(v___x_4287_);
lean_dec(v___x_4287_);
lean_dec(v___x_4290_);
v___x_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4291_, 0, v_a_4289_);
return v___x_4291_;
}
v___jp_4292_:
{
lean_object* v_a_4294_; 
v_a_4294_ = lean_ctor_get(v___y_4293_, 0);
lean_inc(v_a_4294_);
lean_dec_ref(v___y_4293_);
v_a_4289_ = v_a_4294_;
goto v___jp_4288_;
}
v___jp_4295_:
{
switch(v___y_4297_)
{
case 0:
{
lean_dec(v_sp_4236_);
if (v___y_4303_ == 0)
{
lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
lean_dec_ref(v___y_4301_);
lean_dec_ref(v___y_4300_);
lean_dec_ref(v___y_4299_);
v___x_4304_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0));
v___x_4305_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4238_, v___x_4282_);
v___x_4306_ = lean_string_append(v___x_4304_, v___x_4305_);
lean_dec_ref(v___x_4305_);
v___x_4307_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1));
v___x_4308_ = lean_string_append(v___x_4306_, v___x_4307_);
v___x_4309_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_4308_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_object* v_a_4310_; lean_object* v___x_4311_; 
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref_known(v___x_4309_, 1);
v___x_4311_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_4303_, v_a_4310_, v___y_4302_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4302_);
v___y_4293_ = v___x_4311_;
goto v___jp_4292_;
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4321_; 
lean_dec_ref(v___y_4302_);
lean_dec(v___y_4296_);
lean_dec(v___x_4287_);
v_a_4312_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4314_ = v___x_4309_;
v_isShared_4315_ = v_isSharedCheck_4321_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4309_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4321_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4316_; lean_object* v___x_4318_; 
v___x_4316_ = lean_io_error_to_string(v_a_4312_);
if (v_isShared_4315_ == 0)
{
lean_ctor_set_tag(v___x_4314_, 3);
lean_ctor_set(v___x_4314_, 0, v___x_4316_);
v___x_4318_ = v___x_4314_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v___x_4316_);
v___x_4318_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_Lean_MessageData_ofFormat(v___x_4318_);
v_msg_4245_ = v___x_4319_;
goto v___jp_4244_;
}
}
}
}
else
{
lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; 
v___x_4322_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2));
v___x_4323_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4238_, v___y_4303_);
v___x_4324_ = lean_string_append(v___x_4322_, v___x_4323_);
lean_dec_ref(v___x_4323_);
v___x_4325_ = lean_array_get_size(v___y_4299_);
lean_dec_ref(v___y_4299_);
v___x_4326_ = l_Lean_Linter_EnvLinter_formatLinterResults(v___y_4301_, v___y_4300_, v___x_4282_, v___x_4324_, v___x_4325_, v___x_4282_, v___y_4302_, v___y_4296_);
lean_dec_ref(v___y_4300_);
lean_dec_ref(v___y_4301_);
if (lean_obj_tag(v___x_4326_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; 
v_a_4327_ = lean_ctor_get(v___x_4326_, 0);
lean_inc(v_a_4327_);
lean_dec_ref_known(v___x_4326_, 1);
v___x_4328_ = l_Lean_MessageData_toString(v_a_4327_);
v___x_4329_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_4328_);
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4331_; 
v_a_4330_ = lean_ctor_get(v___x_4329_, 0);
lean_inc(v_a_4330_);
lean_dec_ref_known(v___x_4329_, 1);
v___x_4331_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_4303_, v_a_4330_, v___y_4302_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4302_);
v___y_4293_ = v___x_4331_;
goto v___jp_4292_;
}
else
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4341_; 
lean_dec_ref(v___y_4302_);
lean_dec(v___y_4296_);
lean_dec(v___x_4287_);
v_a_4332_ = lean_ctor_get(v___x_4329_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4329_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4334_ = v___x_4329_;
v_isShared_4335_ = v_isSharedCheck_4341_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4329_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4341_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v___x_4336_; lean_object* v___x_4338_; 
v___x_4336_ = lean_io_error_to_string(v_a_4332_);
if (v_isShared_4335_ == 0)
{
lean_ctor_set_tag(v___x_4334_, 3);
lean_ctor_set(v___x_4334_, 0, v___x_4336_);
v___x_4338_ = v___x_4334_;
goto v_reusejp_4337_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v___x_4336_);
v___x_4338_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4337_;
}
v_reusejp_4337_:
{
lean_object* v___x_4339_; 
v___x_4339_ = l_Lean_MessageData_ofFormat(v___x_4338_);
v_msg_4245_ = v___x_4339_;
goto v___jp_4244_;
}
}
}
}
else
{
lean_object* v_a_4342_; 
lean_dec_ref(v___y_4302_);
lean_dec(v___y_4296_);
lean_dec(v___x_4287_);
v_a_4342_ = lean_ctor_get(v___x_4326_, 0);
lean_inc(v_a_4342_);
lean_dec_ref_known(v___x_4326_, 1);
v_a_4250_ = v_a_4342_;
goto v___jp_4249_;
}
}
}
case 1:
{
lean_object* v___x_4343_; lean_object* v_env_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; size_t v_sz_4348_; size_t v___x_4349_; lean_object* v___x_4350_; 
lean_dec_ref(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec(v_mod_4238_);
v___x_4343_ = lean_st_ref_get(v___y_4296_);
v_env_4344_ = lean_ctor_get(v___x_4343_, 0);
lean_inc_ref(v_env_4344_);
lean_dec(v___x_4343_);
v___x_4345_ = l_Lean_Environment_mainModule(v_env_4344_);
lean_dec_ref(v_env_4344_);
v___x_4346_ = lean_box(v___y_4298_);
v___x_4347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4347_, 0, v___x_4284_);
lean_ctor_set(v___x_4347_, 1, v___x_4346_);
v_sz_4348_ = lean_array_size(v___y_4301_);
v___x_4349_ = ((size_t)0ULL);
v___x_4350_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(v_sp_4236_, v___x_4345_, v___y_4301_, v_sz_4348_, v___x_4349_, v___x_4347_, v___y_4302_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4302_);
lean_dec_ref(v___y_4301_);
if (lean_obj_tag(v___x_4350_) == 0)
{
lean_object* v_a_4351_; lean_object* v_fst_4352_; lean_object* v_snd_4353_; lean_object* v___x_4354_; uint8_t v___x_4355_; 
v_a_4351_ = lean_ctor_get(v___x_4350_, 0);
lean_inc(v_a_4351_);
lean_dec_ref_known(v___x_4350_, 1);
v_fst_4352_ = lean_ctor_get(v_a_4351_, 0);
lean_inc(v_fst_4352_);
v_snd_4353_ = lean_ctor_get(v_a_4351_, 1);
lean_inc(v_snd_4353_);
lean_dec(v_a_4351_);
v___x_4354_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_4354_, 0, v_fst_4352_);
v___x_4355_ = lean_unbox(v_snd_4353_);
lean_dec(v_snd_4353_);
lean_ctor_set_uint8(v___x_4354_, sizeof(void*)*1, v___x_4355_);
v_a_4289_ = v___x_4354_;
goto v___jp_4288_;
}
else
{
lean_object* v_a_4356_; 
lean_dec(v___x_4287_);
v_a_4356_ = lean_ctor_get(v___x_4350_, 0);
lean_inc(v_a_4356_);
lean_dec_ref_known(v___x_4350_, 1);
v_a_4250_ = v_a_4356_;
goto v___jp_4249_;
}
}
default: 
{
lean_object* v___x_4357_; lean_object* v_env_4358_; lean_object* v___x_4359_; size_t v_sz_4360_; size_t v___x_4361_; lean_object* v___x_4362_; 
lean_dec_ref(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec(v_mod_4238_);
lean_dec(v_sp_4236_);
v___x_4357_ = lean_st_ref_get(v___y_4296_);
v_env_4358_ = lean_ctor_get(v___x_4357_, 0);
lean_inc_ref(v_env_4358_);
lean_dec(v___x_4357_);
v___x_4359_ = l_Lean_Environment_mainModule(v_env_4358_);
lean_dec_ref(v_env_4358_);
v_sz_4360_ = lean_array_size(v___y_4301_);
v___x_4361_ = ((size_t)0ULL);
v___x_4362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(v___x_4359_, v___y_4301_, v_sz_4360_, v___x_4361_, v___x_4284_, v___y_4302_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4302_);
lean_dec_ref(v___y_4301_);
if (lean_obj_tag(v___x_4362_) == 0)
{
lean_object* v_a_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4370_; 
v_a_4363_ = lean_ctor_get(v___x_4362_, 0);
v_isSharedCheck_4370_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4370_ == 0)
{
v___x_4365_ = v___x_4362_;
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_a_4363_);
lean_dec(v___x_4362_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4368_; 
if (v_isShared_4366_ == 0)
{
lean_ctor_set_tag(v___x_4365_, 2);
v___x_4368_ = v___x_4365_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4369_; 
v_reuseFailAlloc_4369_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4369_, 0, v_a_4363_);
v___x_4368_ = v_reuseFailAlloc_4369_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
v_a_4289_ = v___x_4368_;
goto v___jp_4288_;
}
}
}
else
{
lean_object* v_a_4371_; 
lean_dec(v___x_4287_);
v_a_4371_ = lean_ctor_get(v___x_4362_, 0);
lean_inc(v_a_4371_);
lean_dec_ref_known(v___x_4362_, 1);
v_a_4250_ = v_a_4371_;
goto v___jp_4249_;
}
}
}
}
v___jp_4372_:
{
lean_object* v___x_4379_; 
lean_inc_ref(v___y_4376_);
v___x_4379_ = l_Lean_Linter_EnvLinter_lintCore(v___y_4376_, v___y_4375_, v___y_4377_, v___y_4373_);
if (lean_obj_tag(v___x_4379_) == 0)
{
lean_object* v_a_4380_; lean_object* v___x_4381_; uint8_t v___x_4382_; 
v_a_4380_ = lean_ctor_get(v___x_4379_, 0);
lean_inc(v_a_4380_);
lean_dec_ref_known(v___x_4379_, 1);
v___x_4381_ = lean_array_get_size(v_a_4380_);
v___x_4382_ = lean_nat_dec_lt(v___x_4270_, v___x_4381_);
if (v___x_4382_ == 0)
{
v___y_4296_ = v___y_4373_;
v___y_4297_ = v___y_4374_;
v___y_4298_ = v___y_4378_;
v___y_4299_ = v___y_4375_;
v___y_4300_ = v___y_4376_;
v___y_4301_ = v_a_4380_;
v___y_4302_ = v___y_4377_;
v___y_4303_ = v___x_4382_;
goto v___jp_4295_;
}
else
{
if (v___x_4382_ == 0)
{
v___y_4296_ = v___y_4373_;
v___y_4297_ = v___y_4374_;
v___y_4298_ = v___y_4378_;
v___y_4299_ = v___y_4375_;
v___y_4300_ = v___y_4376_;
v___y_4301_ = v_a_4380_;
v___y_4302_ = v___y_4377_;
v___y_4303_ = v___x_4382_;
goto v___jp_4295_;
}
else
{
size_t v___x_4383_; size_t v___x_4384_; uint8_t v___x_4385_; 
v___x_4383_ = ((size_t)0ULL);
v___x_4384_ = lean_usize_of_nat(v___x_4381_);
v___x_4385_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(v___y_4378_, v_a_4380_, v___x_4383_, v___x_4384_);
v___y_4296_ = v___y_4373_;
v___y_4297_ = v___y_4374_;
v___y_4298_ = v___y_4378_;
v___y_4299_ = v___y_4375_;
v___y_4300_ = v___y_4376_;
v___y_4301_ = v_a_4380_;
v___y_4302_ = v___y_4377_;
v___y_4303_ = v___x_4385_;
goto v___jp_4295_;
}
}
}
else
{
lean_object* v_a_4386_; 
lean_dec_ref(v___y_4377_);
lean_dec_ref(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4373_);
lean_dec(v___x_4287_);
lean_dec(v_mod_4238_);
lean_dec(v_sp_4236_);
v_a_4386_ = lean_ctor_get(v___x_4379_, 0);
lean_inc(v_a_4386_);
lean_dec_ref_known(v___x_4379_, 1);
v_a_4250_ = v_a_4386_;
goto v___jp_4249_;
}
}
v___jp_4387_:
{
lean_object* v___x_4393_; 
v___x_4393_ = l_Lean_Linter_EnvLinter_getEnvLinters(v___y_4392_, v___y_4391_, v___y_4388_);
lean_dec(v___y_4392_);
if (lean_obj_tag(v___x_4393_) == 0)
{
lean_object* v_a_4394_; lean_object* v___x_4395_; uint8_t v___x_4396_; 
v_a_4394_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_a_4394_);
lean_dec_ref_known(v___x_4393_, 1);
v___x_4395_ = lean_array_get_size(v_a_4394_);
v___x_4396_ = lean_nat_dec_eq(v___x_4395_, v___x_4270_);
if (v___x_4396_ == 0)
{
v___y_4373_ = v___y_4388_;
v___y_4374_ = v___y_4389_;
v___y_4375_ = v_a_4394_;
v___y_4376_ = v___y_4390_;
v___y_4377_ = v___y_4391_;
v___y_4378_ = v___x_4396_;
goto v___jp_4372_;
}
else
{
uint8_t v___x_4397_; uint8_t v___x_4398_; 
v___x_4397_ = 0;
v___x_4398_ = l_Lake_BuiltinLint_instBEqMode_beq(v___y_4389_, v___x_4397_);
if (v___x_4398_ == 0)
{
v___y_4373_ = v___y_4388_;
v___y_4374_ = v___y_4389_;
v___y_4375_ = v_a_4394_;
v___y_4376_ = v___y_4390_;
v___y_4377_ = v___y_4391_;
v___y_4378_ = v___x_4398_;
goto v___jp_4372_;
}
else
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
lean_dec(v_a_4394_);
lean_dec_ref(v___y_4391_);
lean_dec_ref(v___y_4390_);
lean_dec(v___y_4388_);
lean_dec(v_sp_4236_);
v___x_4399_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3));
v___x_4400_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4238_, v___x_4398_);
v___x_4401_ = lean_string_append(v___x_4399_, v___x_4400_);
lean_dec_ref(v___x_4400_);
v___x_4402_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1));
v___x_4403_ = lean_string_append(v___x_4401_, v___x_4402_);
v___x_4404_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_4403_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v___x_4405_; 
lean_dec_ref_known(v___x_4404_, 1);
v___x_4405_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4));
v_a_4289_ = v___x_4405_;
goto v___jp_4288_;
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4415_; 
lean_dec(v___x_4287_);
v_a_4406_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4408_ = v___x_4404_;
v_isShared_4409_ = v_isSharedCheck_4415_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4404_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4415_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4410_; lean_object* v___x_4412_; 
v___x_4410_ = lean_io_error_to_string(v_a_4406_);
if (v_isShared_4409_ == 0)
{
lean_ctor_set_tag(v___x_4408_, 3);
lean_ctor_set(v___x_4408_, 0, v___x_4410_);
v___x_4412_ = v___x_4408_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v___x_4410_);
v___x_4412_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
lean_object* v___x_4413_; 
v___x_4413_ = l_Lean_MessageData_ofFormat(v___x_4412_);
v_msg_4245_ = v___x_4413_;
goto v___jp_4244_;
}
}
}
}
}
}
else
{
lean_object* v_a_4416_; 
lean_dec_ref(v___y_4391_);
lean_dec_ref(v___y_4390_);
lean_dec(v___y_4388_);
lean_dec(v___x_4287_);
lean_dec(v_mod_4238_);
lean_dec(v_sp_4236_);
v_a_4416_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_a_4416_);
lean_dec_ref_known(v___x_4393_, 1);
v_a_4250_ = v_a_4416_;
goto v___jp_4249_;
}
}
v___jp_4420_:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v___x_4422_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5);
v___x_4423_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4265_);
lean_ctor_set(v___x_4423_, 1, v___x_4266_);
lean_ctor_set(v___x_4423_, 2, v___x_4267_);
lean_ctor_set(v___x_4423_, 3, v___x_4422_);
lean_ctor_set(v___x_4423_, 4, v___x_4268_);
lean_ctor_set(v___x_4423_, 5, v___x_4269_);
lean_ctor_set(v___x_4423_, 6, v___x_4286_);
lean_ctor_set(v___x_4423_, 7, v___x_4271_);
lean_ctor_set(v___x_4423_, 8, v___x_4268_);
lean_ctor_set(v___x_4423_, 9, v___x_4272_);
lean_ctor_set(v___x_4423_, 10, v___x_4273_);
lean_ctor_set(v___x_4423_, 11, v___x_4418_);
v___x_4424_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4424_, 0, v___x_4423_);
lean_ctor_set(v___x_4424_, 1, v___x_4270_);
lean_ctor_set(v___x_4424_, 2, v___x_4274_);
lean_ctor_set_uint8(v___x_4424_, sizeof(void*)*3, v___x_4419_);
lean_ctor_set_uint8(v___x_4424_, sizeof(void*)*3 + 1, v___x_4275_);
v___x_4425_ = l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(v___x_4264_, v___y_4421_);
lean_dec(v___x_4264_);
if (lean_obj_tag(v___x_4425_) == 0)
{
uint8_t v_lintOnly_4426_; 
v_lintOnly_4426_ = lean_ctor_get_uint8(v_args_4234_, sizeof(void*)*4);
if (v_lintOnly_4426_ == 0)
{
lean_object* v_a_4427_; uint8_t v_mode_4428_; 
lean_dec_ref(v_linterOpts_4235_);
v_a_4427_ = lean_ctor_get(v___x_4425_, 0);
lean_inc(v_a_4427_);
lean_dec_ref_known(v___x_4425_, 1);
v_mode_4428_ = lean_ctor_get_uint8(v_args_4234_, sizeof(void*)*4 + 1);
v___y_4388_ = v___y_4421_;
v___y_4389_ = v_mode_4428_;
v___y_4390_ = v_a_4427_;
v___y_4391_ = v___x_4424_;
v___y_4392_ = v___x_4273_;
goto v___jp_4387_;
}
else
{
lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4437_; 
v_a_4429_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4431_ = v___x_4425_;
v_isShared_4432_ = v_isSharedCheck_4437_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v___x_4425_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4437_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
uint8_t v_mode_4433_; lean_object* v___x_4435_; 
v_mode_4433_ = lean_ctor_get_uint8(v_args_4234_, sizeof(void*)*4 + 1);
if (v_isShared_4432_ == 0)
{
lean_ctor_set_tag(v___x_4431_, 1);
lean_ctor_set(v___x_4431_, 0, v_linterOpts_4235_);
v___x_4435_ = v___x_4431_;
goto v_reusejp_4434_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v_linterOpts_4235_);
v___x_4435_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4434_;
}
v_reusejp_4434_:
{
v___y_4388_ = v___y_4421_;
v___y_4389_ = v_mode_4433_;
v___y_4390_ = v_a_4429_;
v___y_4391_ = v___x_4424_;
v___y_4392_ = v___x_4435_;
goto v___jp_4387_;
}
}
}
}
else
{
lean_object* v_a_4438_; 
lean_dec_ref_known(v___x_4424_, 3);
lean_dec(v___y_4421_);
lean_dec(v___x_4287_);
lean_dec(v_mod_4238_);
lean_dec(v_sp_4236_);
lean_dec_ref(v_linterOpts_4235_);
v_a_4438_ = lean_ctor_get(v___x_4425_, 0);
lean_inc(v_a_4438_);
lean_dec_ref_known(v___x_4425_, 1);
v_a_4250_ = v_a_4438_;
goto v___jp_4249_;
}
}
v___jp_4440_:
{
if (v___y_4441_ == 0)
{
lean_object* v___x_4442_; lean_object* v_env_4443_; lean_object* v_nextMacroScope_4444_; lean_object* v_ngen_4445_; lean_object* v_auxDeclNGen_4446_; lean_object* v_traceState_4447_; lean_object* v_messages_4448_; lean_object* v_infoState_4449_; lean_object* v_snapshotTasks_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4459_; 
v___x_4442_ = lean_st_ref_take(v___x_4287_);
v_env_4443_ = lean_ctor_get(v___x_4442_, 0);
v_nextMacroScope_4444_ = lean_ctor_get(v___x_4442_, 1);
v_ngen_4445_ = lean_ctor_get(v___x_4442_, 2);
v_auxDeclNGen_4446_ = lean_ctor_get(v___x_4442_, 3);
v_traceState_4447_ = lean_ctor_get(v___x_4442_, 4);
v_messages_4448_ = lean_ctor_get(v___x_4442_, 6);
v_infoState_4449_ = lean_ctor_get(v___x_4442_, 7);
v_snapshotTasks_4450_ = lean_ctor_get(v___x_4442_, 8);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4459_ == 0)
{
lean_object* v_unused_4460_; 
v_unused_4460_ = lean_ctor_get(v___x_4442_, 5);
lean_dec(v_unused_4460_);
v___x_4452_ = v___x_4442_;
v_isShared_4453_ = v_isSharedCheck_4459_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_snapshotTasks_4450_);
lean_inc(v_infoState_4449_);
lean_inc(v_messages_4448_);
lean_inc(v_traceState_4447_);
lean_inc(v_auxDeclNGen_4446_);
lean_inc(v_ngen_4445_);
lean_inc(v_nextMacroScope_4444_);
lean_inc(v_env_4443_);
lean_dec(v___x_4442_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4459_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4454_; lean_object* v___x_4456_; 
v___x_4454_ = l_Lean_Kernel_enableDiag(v_env_4443_, v___x_4419_);
if (v_isShared_4453_ == 0)
{
lean_ctor_set(v___x_4452_, 5, v___x_4280_);
lean_ctor_set(v___x_4452_, 0, v___x_4454_);
v___x_4456_ = v___x_4452_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v___x_4454_);
lean_ctor_set(v_reuseFailAlloc_4458_, 1, v_nextMacroScope_4444_);
lean_ctor_set(v_reuseFailAlloc_4458_, 2, v_ngen_4445_);
lean_ctor_set(v_reuseFailAlloc_4458_, 3, v_auxDeclNGen_4446_);
lean_ctor_set(v_reuseFailAlloc_4458_, 4, v_traceState_4447_);
lean_ctor_set(v_reuseFailAlloc_4458_, 5, v___x_4280_);
lean_ctor_set(v_reuseFailAlloc_4458_, 6, v_messages_4448_);
lean_ctor_set(v_reuseFailAlloc_4458_, 7, v_infoState_4449_);
lean_ctor_set(v_reuseFailAlloc_4458_, 8, v_snapshotTasks_4450_);
v___x_4456_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
lean_object* v___x_4457_; 
v___x_4457_ = lean_st_ref_put(v___x_4287_, v___x_4456_);
lean_inc(v___x_4287_);
v___y_4421_ = v___x_4287_;
goto v___jp_4420_;
}
}
}
else
{
lean_inc(v___x_4287_);
v___y_4421_ = v___x_4287_;
goto v___jp_4420_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___boxed(lean_object* v_args_4463_, lean_object* v_linterOpts_4464_, lean_object* v_sp_4465_, lean_object* v_env_4466_, lean_object* v_mod_4467_, lean_object* v_a_4468_){
_start:
{
lean_object* v_res_4469_; 
v_res_4469_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(v_args_4463_, v_linterOpts_4464_, v_sp_4465_, v_env_4466_, v_mod_4467_);
lean_dec_ref(v_args_4463_);
return v_res_4469_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(lean_object* v_00_u03b4_4470_, lean_object* v_t_4471_, lean_object* v_k_4472_, lean_object* v_fallback_4473_){
_start:
{
lean_object* v___x_4474_; 
v___x_4474_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_t_4471_, v_k_4472_, v_fallback_4473_);
return v___x_4474_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___boxed(lean_object* v_00_u03b4_4475_, lean_object* v_t_4476_, lean_object* v_k_4477_, lean_object* v_fallback_4478_){
_start:
{
lean_object* v_res_4479_; 
v_res_4479_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(v_00_u03b4_4475_, v_t_4476_, v_k_4477_, v_fallback_4478_);
lean_dec(v_fallback_4478_);
lean_dec_ref(v_k_4477_);
lean_dec(v_t_4476_);
return v_res_4479_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6(lean_object* v_00_u03b2_4480_, lean_object* v_k_4481_, lean_object* v_v_4482_, lean_object* v_t_4483_, lean_object* v_hl_4484_){
_start:
{
lean_object* v___x_4485_; 
v___x_4485_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_4481_, v_v_4482_, v_t_4483_);
return v___x_4485_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(lean_object* v_fst_4486_, lean_object* v_init_4487_, lean_object* v_x_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_){
_start:
{
lean_object* v___x_4492_; 
v___x_4492_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4486_, v_init_4487_, v_x_4488_);
return v___x_4492_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___boxed(lean_object* v_fst_4493_, lean_object* v_init_4494_, lean_object* v_x_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(v_fst_4493_, v_init_4494_, v_x_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4500_, lean_object* v_constName_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_){
_start:
{
lean_object* v___x_4505_; 
v___x_4505_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_4501_, v___y_4502_, v___y_4503_);
return v___x_4505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4506_, lean_object* v_constName_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(v_00_u03b1_4506_, v_constName_4507_, v___y_4508_, v___y_4509_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(lean_object* v_00_u03b1_4512_, lean_object* v_ref_4513_, lean_object* v_constName_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_){
_start:
{
lean_object* v___x_4518_; 
v___x_4518_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_4513_, v_constName_4514_, v___y_4515_, v___y_4516_);
return v___x_4518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___boxed(lean_object* v_00_u03b1_4519_, lean_object* v_ref_4520_, lean_object* v_constName_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(v_00_u03b1_4519_, v_ref_4520_, v_constName_4521_, v___y_4522_, v___y_4523_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec(v_ref_4520_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(lean_object* v_00_u03b1_4526_, lean_object* v_ref_4527_, lean_object* v_msg_4528_, lean_object* v_declHint_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
lean_object* v___x_4533_; 
v___x_4533_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_4527_, v_msg_4528_, v_declHint_4529_, v___y_4530_, v___y_4531_);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___boxed(lean_object* v_00_u03b1_4534_, lean_object* v_ref_4535_, lean_object* v_msg_4536_, lean_object* v_declHint_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(v_00_u03b1_4534_, v_ref_4535_, v_msg_4536_, v_declHint_4537_, v___y_4538_, v___y_4539_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
lean_dec(v_ref_4535_);
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(lean_object* v_msg_4542_, lean_object* v_declHint_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_){
_start:
{
lean_object* v___x_4547_; 
v___x_4547_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_4542_, v_declHint_4543_, v___y_4545_);
return v___x_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___boxed(lean_object* v_msg_4548_, lean_object* v_declHint_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
lean_object* v_res_4553_; 
v_res_4553_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(v_msg_4548_, v_declHint_4549_, v___y_4550_, v___y_4551_);
lean_dec(v___y_4551_);
lean_dec_ref(v___y_4550_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(lean_object* v_00_u03b1_4554_, lean_object* v_ref_4555_, lean_object* v_msg_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_){
_start:
{
lean_object* v___x_4560_; 
v___x_4560_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_4555_, v_msg_4556_, v___y_4557_, v___y_4558_);
return v___x_4560_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___boxed(lean_object* v_00_u03b1_4561_, lean_object* v_ref_4562_, lean_object* v_msg_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(v_00_u03b1_4561_, v_ref_4562_, v_msg_4563_, v___y_4564_, v___y_4565_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
lean_dec(v_ref_4562_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(lean_object* v_00_u03b1_4568_, lean_object* v_msg_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_){
_start:
{
lean_object* v___x_4573_; 
v___x_4573_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_4569_, v___y_4570_, v___y_4571_);
return v___x_4573_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___boxed(lean_object* v_00_u03b1_4574_, lean_object* v_msg_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(v_00_u03b1_4574_, v_msg_4575_, v___y_4576_, v___y_4577_);
lean_dec(v___y_4577_);
lean_dec_ref(v___y_4576_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(lean_object* v_s_4580_){
_start:
{
lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; uint32_t v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4582_ = l_Std_Format_defWidth;
v___x_4583_ = lean_unsigned_to_nat(0u);
v___x_4584_ = l_Std_Format_pretty(v_s_4580_, v___x_4582_, v___x_4583_, v___x_4583_);
v___x_4585_ = 10;
v___x_4586_ = lean_string_push(v___x_4584_, v___x_4585_);
v___x_4587_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v___x_4586_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0___boxed(lean_object* v_s_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(v_s_4588_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(lean_object* v_as_4591_, size_t v_sz_4592_, size_t v_i_4593_, lean_object* v_b_4594_, lean_object* v___y_4595_){
_start:
{
uint8_t v___x_4597_; 
v___x_4597_ = lean_usize_dec_lt(v_i_4593_, v_sz_4592_);
if (v___x_4597_ == 0)
{
lean_object* v___x_4598_; 
v___x_4598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4598_, 0, v_b_4594_);
return v___x_4598_;
}
else
{
lean_object* v___x_4599_; lean_object* v_a_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v_ref_4603_; lean_object* v___x_4604_; 
v___x_4599_ = lean_box(0);
v_a_4600_ = lean_array_uget_borrowed(v_as_4591_, v_i_4593_);
v___x_4601_ = lean_box(0);
lean_inc(v_a_4600_);
v___x_4602_ = l_Lean_MessageData_format(v_a_4600_, v___x_4601_);
v_ref_4603_ = lean_ctor_get(v___y_4595_, 2);
v___x_4604_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(v___x_4602_);
if (lean_obj_tag(v___x_4604_) == 0)
{
size_t v___x_4605_; size_t v___x_4606_; 
lean_dec_ref_known(v___x_4604_, 1);
v___x_4605_ = ((size_t)1ULL);
v___x_4606_ = lean_usize_add(v_i_4593_, v___x_4605_);
v_i_4593_ = v___x_4606_;
v_b_4594_ = v___x_4599_;
goto _start;
}
else
{
lean_object* v_a_4608_; lean_object* v___x_4610_; uint8_t v_isShared_4611_; uint8_t v_isSharedCheck_4619_; 
v_a_4608_ = lean_ctor_get(v___x_4604_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4610_ = v___x_4604_;
v_isShared_4611_ = v_isSharedCheck_4619_;
goto v_resetjp_4609_;
}
else
{
lean_inc(v_a_4608_);
lean_dec(v___x_4604_);
v___x_4610_ = lean_box(0);
v_isShared_4611_ = v_isSharedCheck_4619_;
goto v_resetjp_4609_;
}
v_resetjp_4609_:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4617_; 
v___x_4612_ = lean_io_error_to_string(v_a_4608_);
v___x_4613_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4612_);
v___x_4614_ = l_Lean_MessageData_ofFormat(v___x_4613_);
lean_inc(v_ref_4603_);
v___x_4615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4615_, 0, v_ref_4603_);
lean_ctor_set(v___x_4615_, 1, v___x_4614_);
if (v_isShared_4611_ == 0)
{
lean_ctor_set(v___x_4610_, 0, v___x_4615_);
v___x_4617_ = v___x_4610_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v___x_4615_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg___boxed(lean_object* v_as_4620_, lean_object* v_sz_4621_, lean_object* v_i_4622_, lean_object* v_b_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
size_t v_sz_boxed_4626_; size_t v_i_boxed_4627_; lean_object* v_res_4628_; 
v_sz_boxed_4626_ = lean_unbox_usize(v_sz_4621_);
lean_dec(v_sz_4621_);
v_i_boxed_4627_ = lean_unbox_usize(v_i_4622_);
lean_dec(v_i_4622_);
v_res_4628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_as_4620_, v_sz_boxed_4626_, v_i_boxed_4627_, v_b_4623_, v___y_4624_);
lean_dec_ref(v___y_4624_);
lean_dec_ref(v_as_4620_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(lean_object* v_errors_4629_, lean_object* v_entries_4630_, lean_object* v_____r_4631_, uint8_t v_anyFailed_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_){
_start:
{
lean_object* v___x_4636_; size_t v_sz_4637_; size_t v___x_4638_; lean_object* v___x_4639_; 
v___x_4636_ = lean_box(0);
v_sz_4637_ = lean_array_size(v_errors_4629_);
v___x_4638_ = ((size_t)0ULL);
v___x_4639_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_errors_4629_, v_sz_4637_, v___x_4638_, v___x_4636_, v___y_4633_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4648_; 
v_isSharedCheck_4648_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4648_ == 0)
{
lean_object* v_unused_4649_; 
v_unused_4649_ = lean_ctor_get(v___x_4639_, 0);
lean_dec(v_unused_4649_);
v___x_4641_ = v___x_4639_;
v_isShared_4642_ = v_isSharedCheck_4648_;
goto v_resetjp_4640_;
}
else
{
lean_dec(v___x_4639_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4648_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4646_; 
v___x_4643_ = lean_box(v_anyFailed_4632_);
v___x_4644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4644_, 0, v_entries_4630_);
lean_ctor_set(v___x_4644_, 1, v___x_4643_);
if (v_isShared_4642_ == 0)
{
lean_ctor_set(v___x_4641_, 0, v___x_4644_);
v___x_4646_ = v___x_4641_;
goto v_reusejp_4645_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v___x_4644_);
v___x_4646_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4645_;
}
v_reusejp_4645_:
{
return v___x_4646_;
}
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
lean_dec_ref(v_entries_4630_);
v_a_4650_ = lean_ctor_get(v___x_4639_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4639_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4639_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v___x_4655_; 
if (v_isShared_4653_ == 0)
{
v___x_4655_ = v___x_4652_;
goto v_reusejp_4654_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4650_);
v___x_4655_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4654_;
}
v_reusejp_4654_:
{
return v___x_4655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0___boxed(lean_object* v_errors_4658_, lean_object* v_entries_4659_, lean_object* v_____r_4660_, lean_object* v_anyFailed_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_){
_start:
{
uint8_t v_anyFailed_boxed_4665_; lean_object* v_res_4666_; 
v_anyFailed_boxed_4665_ = lean_unbox(v_anyFailed_4661_);
v_res_4666_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4658_, v_entries_4659_, v_____r_4660_, v_anyFailed_boxed_4665_, v___y_4662_, v___y_4663_);
lean_dec(v___y_4663_);
lean_dec_ref(v___y_4662_);
lean_dec_ref(v_errors_4658_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(lean_object* v_sp_4667_, lean_object* v_env_4668_, lean_object* v_mod_4669_){
_start:
{
lean_object* v_a_4672_; lean_object* v_a_4676_; uint8_t v_anyFailed_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; uint8_t v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___y_4719_; lean_object* v___x_4734_; lean_object* v___x_4735_; uint8_t v___x_4736_; lean_object* v___y_4738_; lean_object* v___x_4757_; uint8_t v___y_4759_; lean_object* v_env_4779_; uint8_t v___x_4780_; 
v_anyFailed_4693_ = 0;
v___x_4694_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_4695_ = l_Lean_instInhabitedFileMap_default;
v___x_4696_ = l_Lean_Options_empty;
v___x_4697_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
v___x_4698_ = lean_box(0);
v___x_4699_ = lean_unsigned_to_nat(0u);
v___x_4700_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_4701_ = l_Lean_firstFrontendMacroScope;
v___x_4702_ = lean_box(0);
v___x_4703_ = lean_box(0);
v___x_4704_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_4705_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9));
v___x_4706_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10);
v___x_4707_ = lean_unsigned_to_nat(32u);
v___x_4708_ = lean_mk_empty_array_with_capacity(v___x_4707_);
lean_dec_ref(v___x_4708_);
v___x_4709_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_4710_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_4711_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_4712_ = 1;
v___x_4713_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_4714_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19));
v___x_4715_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4715_, 0, v_env_4668_);
lean_ctor_set(v___x_4715_, 1, v___x_4704_);
lean_ctor_set(v___x_4715_, 2, v___x_4705_);
lean_ctor_set(v___x_4715_, 3, v___x_4706_);
lean_ctor_set(v___x_4715_, 4, v___x_4709_);
lean_ctor_set(v___x_4715_, 5, v___x_4710_);
lean_ctor_set(v___x_4715_, 6, v___x_4711_);
lean_ctor_set(v___x_4715_, 7, v___x_4713_);
lean_ctor_set(v___x_4715_, 8, v___x_4714_);
v___x_4716_ = lean_io_get_num_heartbeats();
v___x_4717_ = lean_st_mk_ref(v___x_4715_);
v___x_4734_ = l_Lean_inheritedTraceOptions;
v___x_4735_ = lean_st_ref_get(v___x_4734_);
v___x_4736_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_4757_ = lean_st_ref_get(v___x_4717_);
v_env_4779_ = lean_ctor_get(v___x_4757_, 0);
lean_inc_ref(v_env_4779_);
lean_dec(v___x_4757_);
v___x_4780_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4779_);
lean_dec_ref(v_env_4779_);
if (v___x_4736_ == 0)
{
if (v___x_4780_ == 0)
{
lean_inc(v___x_4717_);
v___y_4738_ = v___x_4717_;
goto v___jp_4737_;
}
else
{
v___y_4759_ = v___x_4736_;
goto v___jp_4758_;
}
}
else
{
v___y_4759_ = v___x_4780_;
goto v___jp_4758_;
}
v___jp_4671_:
{
lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4673_ = lean_mk_io_user_error(v_a_4672_);
v___x_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4674_, 0, v___x_4673_);
return v___x_4674_;
}
v___jp_4675_:
{
if (lean_obj_tag(v_a_4676_) == 0)
{
lean_object* v_msg_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; 
v_msg_4677_ = lean_ctor_get(v_a_4676_, 1);
lean_inc_ref(v_msg_4677_);
lean_dec_ref_known(v_a_4676_, 2);
v___x_4678_ = l_Lean_MessageData_toString(v_msg_4677_);
v___x_4679_ = lean_mk_io_user_error(v___x_4678_);
v___x_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4679_);
return v___x_4680_;
}
else
{
lean_object* v_id_4681_; lean_object* v___x_4682_; 
v_id_4681_ = lean_ctor_get(v_a_4676_, 0);
lean_inc(v_id_4681_);
lean_dec_ref_known(v_a_4676_, 2);
v___x_4682_ = l_Lean_InternalExceptionId_getName(v_id_4681_);
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4684_; uint8_t v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
lean_dec(v_id_4681_);
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
lean_inc(v_a_4683_);
lean_dec_ref_known(v___x_4682_, 1);
v___x_4684_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_4685_ = 1;
v___x_4686_ = l_Lean_Name_toString(v_a_4683_, v___x_4685_);
v___x_4687_ = lean_string_append(v___x_4684_, v___x_4686_);
lean_dec_ref(v___x_4686_);
v_a_4672_ = v___x_4687_;
goto v___jp_4671_;
}
else
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; 
lean_dec_ref_known(v___x_4682_, 1);
v___x_4688_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_4689_ = l_Nat_reprFast(v_id_4681_);
v___x_4690_ = lean_string_append(v___x_4688_, v___x_4689_);
lean_dec_ref(v___x_4689_);
v___x_4691_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_4692_ = lean_string_append(v___x_4690_, v___x_4691_);
v_a_4672_ = v___x_4692_;
goto v___jp_4671_;
}
}
}
v___jp_4718_:
{
if (lean_obj_tag(v___y_4719_) == 0)
{
lean_object* v_a_4720_; lean_object* v___x_4722_; uint8_t v_isShared_4723_; uint8_t v_isSharedCheck_4732_; 
v_a_4720_ = lean_ctor_get(v___y_4719_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___y_4719_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4722_ = v___y_4719_;
v_isShared_4723_ = v_isSharedCheck_4732_;
goto v_resetjp_4721_;
}
else
{
lean_inc(v_a_4720_);
lean_dec(v___y_4719_);
v___x_4722_ = lean_box(0);
v_isShared_4723_ = v_isSharedCheck_4732_;
goto v_resetjp_4721_;
}
v_resetjp_4721_:
{
lean_object* v___x_4724_; lean_object* v_fst_4725_; lean_object* v_snd_4726_; lean_object* v___x_4727_; uint8_t v___x_4728_; lean_object* v___x_4730_; 
v___x_4724_ = lean_st_ref_get(v___x_4717_);
lean_dec(v___x_4717_);
lean_dec(v___x_4724_);
v_fst_4725_ = lean_ctor_get(v_a_4720_, 0);
lean_inc(v_fst_4725_);
v_snd_4726_ = lean_ctor_get(v_a_4720_, 1);
lean_inc(v_snd_4726_);
lean_dec(v_a_4720_);
v___x_4727_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4727_, 0, v_fst_4725_);
v___x_4728_ = lean_unbox(v_snd_4726_);
lean_dec(v_snd_4726_);
lean_ctor_set_uint8(v___x_4727_, sizeof(void*)*1, v___x_4728_);
if (v_isShared_4723_ == 0)
{
lean_ctor_set(v___x_4722_, 0, v___x_4727_);
v___x_4730_ = v___x_4722_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v___x_4727_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
else
{
lean_object* v_a_4733_; 
lean_dec(v___x_4717_);
v_a_4733_ = lean_ctor_get(v___y_4719_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v___y_4719_, 1);
v_a_4676_ = v_a_4733_;
goto v___jp_4675_;
}
}
v___jp_4737_:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4739_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5);
v___x_4740_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4694_);
lean_ctor_set(v___x_4740_, 1, v___x_4695_);
lean_ctor_set(v___x_4740_, 2, v___x_4696_);
lean_ctor_set(v___x_4740_, 3, v___x_4739_);
lean_ctor_set(v___x_4740_, 4, v___x_4697_);
lean_ctor_set(v___x_4740_, 5, v___x_4698_);
lean_ctor_set(v___x_4740_, 6, v___x_4716_);
lean_ctor_set(v___x_4740_, 7, v___x_4700_);
lean_ctor_set(v___x_4740_, 8, v___x_4697_);
lean_ctor_set(v___x_4740_, 9, v___x_4701_);
lean_ctor_set(v___x_4740_, 10, v___x_4702_);
lean_ctor_set(v___x_4740_, 11, v___x_4735_);
v___x_4741_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4741_, 0, v___x_4740_);
lean_ctor_set(v___x_4741_, 1, v___x_4699_);
lean_ctor_set(v___x_4741_, 2, v___x_4703_);
lean_ctor_set_uint8(v___x_4741_, sizeof(void*)*3, v___x_4736_);
lean_ctor_set_uint8(v___x_4741_, sizeof(void*)*3 + 1, v_anyFailed_4693_);
v___x_4742_ = l_Lean_Linter_CodeQuality_getPackageChecks(v___x_4741_, v___y_4738_);
if (lean_obj_tag(v___x_4742_) == 0)
{
lean_object* v_a_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v_a_4743_ = lean_ctor_get(v___x_4742_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4742_, 1);
v___x_4744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4744_, 0, v_sp_4667_);
lean_ctor_set(v___x_4744_, 1, v_mod_4669_);
v___x_4745_ = l_Lean_Linter_CodeQuality_runPackageChecks(v_a_4743_, v___x_4744_, v___x_4741_, v___y_4738_);
lean_dec(v_a_4743_);
if (lean_obj_tag(v___x_4745_) == 0)
{
lean_object* v_a_4746_; lean_object* v_entries_4747_; lean_object* v_errors_4748_; lean_object* v___x_4749_; uint8_t v___x_4750_; 
v_a_4746_ = lean_ctor_get(v___x_4745_, 0);
lean_inc(v_a_4746_);
lean_dec_ref_known(v___x_4745_, 1);
v_entries_4747_ = lean_ctor_get(v_a_4746_, 0);
lean_inc_ref(v_entries_4747_);
v_errors_4748_ = lean_ctor_get(v_a_4746_, 1);
lean_inc_ref(v_errors_4748_);
lean_dec(v_a_4746_);
v___x_4749_ = lean_array_get_size(v_errors_4748_);
v___x_4750_ = lean_nat_dec_eq(v___x_4749_, v___x_4699_);
if (v___x_4750_ == 0)
{
lean_object* v___x_4751_; lean_object* v___x_4752_; 
v___x_4751_ = lean_box(0);
v___x_4752_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4748_, v_entries_4747_, v___x_4751_, v___x_4712_, v___x_4741_, v___y_4738_);
lean_dec(v___y_4738_);
lean_dec_ref_known(v___x_4741_, 3);
lean_dec_ref(v_errors_4748_);
v___y_4719_ = v___x_4752_;
goto v___jp_4718_;
}
else
{
lean_object* v___x_4753_; lean_object* v___x_4754_; 
v___x_4753_ = lean_box(0);
v___x_4754_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4748_, v_entries_4747_, v___x_4753_, v_anyFailed_4693_, v___x_4741_, v___y_4738_);
lean_dec(v___y_4738_);
lean_dec_ref_known(v___x_4741_, 3);
lean_dec_ref(v_errors_4748_);
v___y_4719_ = v___x_4754_;
goto v___jp_4718_;
}
}
else
{
lean_object* v_a_4755_; 
lean_dec_ref_known(v___x_4741_, 3);
lean_dec(v___y_4738_);
lean_dec(v___x_4717_);
v_a_4755_ = lean_ctor_get(v___x_4745_, 0);
lean_inc(v_a_4755_);
lean_dec_ref_known(v___x_4745_, 1);
v_a_4676_ = v_a_4755_;
goto v___jp_4675_;
}
}
else
{
lean_object* v_a_4756_; 
lean_dec_ref_known(v___x_4741_, 3);
lean_dec(v___y_4738_);
lean_dec(v___x_4717_);
lean_dec(v_mod_4669_);
lean_dec(v_sp_4667_);
v_a_4756_ = lean_ctor_get(v___x_4742_, 0);
lean_inc(v_a_4756_);
lean_dec_ref_known(v___x_4742_, 1);
v_a_4676_ = v_a_4756_;
goto v___jp_4675_;
}
}
v___jp_4758_:
{
if (v___y_4759_ == 0)
{
lean_object* v___x_4760_; lean_object* v_env_4761_; lean_object* v_nextMacroScope_4762_; lean_object* v_ngen_4763_; lean_object* v_auxDeclNGen_4764_; lean_object* v_traceState_4765_; lean_object* v_messages_4766_; lean_object* v_infoState_4767_; lean_object* v_snapshotTasks_4768_; lean_object* v___x_4770_; uint8_t v_isShared_4771_; uint8_t v_isSharedCheck_4777_; 
v___x_4760_ = lean_st_ref_take(v___x_4717_);
v_env_4761_ = lean_ctor_get(v___x_4760_, 0);
v_nextMacroScope_4762_ = lean_ctor_get(v___x_4760_, 1);
v_ngen_4763_ = lean_ctor_get(v___x_4760_, 2);
v_auxDeclNGen_4764_ = lean_ctor_get(v___x_4760_, 3);
v_traceState_4765_ = lean_ctor_get(v___x_4760_, 4);
v_messages_4766_ = lean_ctor_get(v___x_4760_, 6);
v_infoState_4767_ = lean_ctor_get(v___x_4760_, 7);
v_snapshotTasks_4768_ = lean_ctor_get(v___x_4760_, 8);
v_isSharedCheck_4777_ = !lean_is_exclusive(v___x_4760_);
if (v_isSharedCheck_4777_ == 0)
{
lean_object* v_unused_4778_; 
v_unused_4778_ = lean_ctor_get(v___x_4760_, 5);
lean_dec(v_unused_4778_);
v___x_4770_ = v___x_4760_;
v_isShared_4771_ = v_isSharedCheck_4777_;
goto v_resetjp_4769_;
}
else
{
lean_inc(v_snapshotTasks_4768_);
lean_inc(v_infoState_4767_);
lean_inc(v_messages_4766_);
lean_inc(v_traceState_4765_);
lean_inc(v_auxDeclNGen_4764_);
lean_inc(v_ngen_4763_);
lean_inc(v_nextMacroScope_4762_);
lean_inc(v_env_4761_);
lean_dec(v___x_4760_);
v___x_4770_ = lean_box(0);
v_isShared_4771_ = v_isSharedCheck_4777_;
goto v_resetjp_4769_;
}
v_resetjp_4769_:
{
lean_object* v___x_4772_; lean_object* v___x_4774_; 
v___x_4772_ = l_Lean_Kernel_enableDiag(v_env_4761_, v___x_4736_);
if (v_isShared_4771_ == 0)
{
lean_ctor_set(v___x_4770_, 5, v___x_4710_);
lean_ctor_set(v___x_4770_, 0, v___x_4772_);
v___x_4774_ = v___x_4770_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v___x_4772_);
lean_ctor_set(v_reuseFailAlloc_4776_, 1, v_nextMacroScope_4762_);
lean_ctor_set(v_reuseFailAlloc_4776_, 2, v_ngen_4763_);
lean_ctor_set(v_reuseFailAlloc_4776_, 3, v_auxDeclNGen_4764_);
lean_ctor_set(v_reuseFailAlloc_4776_, 4, v_traceState_4765_);
lean_ctor_set(v_reuseFailAlloc_4776_, 5, v___x_4710_);
lean_ctor_set(v_reuseFailAlloc_4776_, 6, v_messages_4766_);
lean_ctor_set(v_reuseFailAlloc_4776_, 7, v_infoState_4767_);
lean_ctor_set(v_reuseFailAlloc_4776_, 8, v_snapshotTasks_4768_);
v___x_4774_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
lean_object* v___x_4775_; 
v___x_4775_ = lean_st_ref_put(v___x_4717_, v___x_4774_);
lean_inc(v___x_4717_);
v___y_4738_ = v___x_4717_;
goto v___jp_4737_;
}
}
}
else
{
lean_inc(v___x_4717_);
v___y_4738_ = v___x_4717_;
goto v___jp_4737_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___boxed(lean_object* v_sp_4781_, lean_object* v_env_4782_, lean_object* v_mod_4783_, lean_object* v_a_4784_){
_start:
{
lean_object* v_res_4785_; 
v_res_4785_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(v_sp_4781_, v_env_4782_, v_mod_4783_);
return v_res_4785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(lean_object* v_as_4786_, size_t v_sz_4787_, size_t v_i_4788_, lean_object* v_b_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_){
_start:
{
lean_object* v___x_4793_; 
v___x_4793_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_as_4786_, v_sz_4787_, v_i_4788_, v_b_4789_, v___y_4790_);
return v___x_4793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___boxed(lean_object* v_as_4794_, lean_object* v_sz_4795_, lean_object* v_i_4796_, lean_object* v_b_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_){
_start:
{
size_t v_sz_boxed_4801_; size_t v_i_boxed_4802_; lean_object* v_res_4803_; 
v_sz_boxed_4801_ = lean_unbox_usize(v_sz_4795_);
lean_dec(v_sz_4795_);
v_i_boxed_4802_ = lean_unbox_usize(v_i_4796_);
lean_dec(v_i_4796_);
v_res_4803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(v_as_4794_, v_sz_boxed_4801_, v_i_boxed_4802_, v_b_4797_, v___y_4798_, v___y_4799_);
lean_dec(v___y_4799_);
lean_dec_ref(v___y_4798_);
lean_dec_ref(v_as_4794_);
return v_res_4803_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1(){
_start:
{
lean_object* v___x_4805_; 
v___x_4805_ = lean_enable_initializer_execution();
return v___x_4805_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object* v_a_4806_){
_start:
{
lean_object* v_res_4807_; 
v_res_4807_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
return v_res_4807_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(lean_object* v_region_4808_){
_start:
{
lean_object* v___x_4810_; 
v___x_4810_ = lean_compacted_region_free(v_region_4808_);
return v___x_4810_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4___boxed(lean_object* v_region_4811_, lean_object* v_a_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(v_region_4811_);
return v_res_4813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(lean_object* v_o_4817_, lean_object* v_k_4818_, uint8_t v_v_4819_){
_start:
{
lean_object* v_map_4820_; uint8_t v_hasTrace_4821_; lean_object* v___x_4823_; uint8_t v_isShared_4824_; uint8_t v_isSharedCheck_4835_; 
v_map_4820_ = lean_ctor_get(v_o_4817_, 0);
v_hasTrace_4821_ = lean_ctor_get_uint8(v_o_4817_, sizeof(void*)*1);
v_isSharedCheck_4835_ = !lean_is_exclusive(v_o_4817_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4823_ = v_o_4817_;
v_isShared_4824_ = v_isSharedCheck_4835_;
goto v_resetjp_4822_;
}
else
{
lean_inc(v_map_4820_);
lean_dec(v_o_4817_);
v___x_4823_ = lean_box(0);
v_isShared_4824_ = v_isSharedCheck_4835_;
goto v_resetjp_4822_;
}
v_resetjp_4822_:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___x_4825_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4825_, 0, v_v_4819_);
lean_inc(v_k_4818_);
v___x_4826_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_4818_, v___x_4825_, v_map_4820_);
if (v_hasTrace_4821_ == 0)
{
lean_object* v___x_4827_; uint8_t v___x_4828_; lean_object* v___x_4830_; 
v___x_4827_ = ((lean_object*)(l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1));
v___x_4828_ = l_Lean_Name_isPrefixOf(v___x_4827_, v_k_4818_);
lean_dec(v_k_4818_);
if (v_isShared_4824_ == 0)
{
lean_ctor_set(v___x_4823_, 0, v___x_4826_);
v___x_4830_ = v___x_4823_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v___x_4826_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
lean_ctor_set_uint8(v___x_4830_, sizeof(void*)*1, v___x_4828_);
return v___x_4830_;
}
}
else
{
lean_object* v___x_4833_; 
lean_dec(v_k_4818_);
if (v_isShared_4824_ == 0)
{
lean_ctor_set(v___x_4823_, 0, v___x_4826_);
v___x_4833_ = v___x_4823_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v___x_4826_);
lean_ctor_set_uint8(v_reuseFailAlloc_4834_, sizeof(void*)*1, v_hasTrace_4821_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object* v_o_4836_, lean_object* v_k_4837_, lean_object* v_v_4838_){
_start:
{
uint8_t v_v_boxed_4839_; lean_object* v_res_4840_; 
v_v_boxed_4839_ = lean_unbox(v_v_4838_);
v_res_4840_ = l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(v_o_4836_, v_k_4837_, v_v_boxed_4839_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4(lean_object* v_s_4841_){
_start:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; uint32_t v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; 
v___x_4843_ = lean_unsigned_to_nat(80u);
v___x_4844_ = l_Lean_Json_pretty(v_s_4841_, v___x_4843_);
v___x_4845_ = 10;
v___x_4846_ = lean_string_push(v___x_4844_, v___x_4845_);
v___x_4847_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_4846_);
return v___x_4847_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object* v_s_4848_, lean_object* v_a_4849_){
_start:
{
lean_object* v_res_4850_; 
v_res_4850_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__4(v_s_4848_);
return v_res_4850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object* v_as_4851_, size_t v_sz_4852_, size_t v_i_4853_, lean_object* v_b_4854_){
_start:
{
uint8_t v___x_4856_; 
v___x_4856_ = lean_usize_dec_lt(v_i_4853_, v_sz_4852_);
if (v___x_4856_ == 0)
{
lean_object* v___x_4857_; 
v___x_4857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4857_, 0, v_b_4854_);
return v___x_4857_;
}
else
{
lean_object* v___x_4858_; lean_object* v_a_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4858_ = lean_box(0);
v_a_4859_ = lean_array_uget_borrowed(v_as_4851_, v_i_4853_);
lean_inc(v_a_4859_);
v___x_4860_ = l_Lean_Linter_CodeQuality_instToJsonEntry_toJson(v_a_4859_);
v___x_4861_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__4(v___x_4860_);
if (lean_obj_tag(v___x_4861_) == 0)
{
size_t v___x_4862_; size_t v___x_4863_; 
lean_dec_ref_known(v___x_4861_, 1);
v___x_4862_ = ((size_t)1ULL);
v___x_4863_ = lean_usize_add(v_i_4853_, v___x_4862_);
v_i_4853_ = v___x_4863_;
v_b_4854_ = v___x_4858_;
goto _start;
}
else
{
return v___x_4861_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object* v_as_4865_, lean_object* v_sz_4866_, lean_object* v_i_4867_, lean_object* v_b_4868_, lean_object* v___y_4869_){
_start:
{
size_t v_sz_boxed_4870_; size_t v_i_boxed_4871_; lean_object* v_res_4872_; 
v_sz_boxed_4870_ = lean_unbox_usize(v_sz_4866_);
lean_dec(v_sz_4866_);
v_i_boxed_4871_ = lean_unbox_usize(v_i_4867_);
lean_dec(v_i_4867_);
v_res_4872_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v_as_4865_, v_sz_boxed_4870_, v_i_boxed_4871_, v_b_4868_);
lean_dec_ref(v_as_4865_);
return v_res_4872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(lean_object* v___x_4873_, size_t v_sz_4874_, size_t v_i_4875_, lean_object* v_bs_4876_){
_start:
{
uint8_t v_anyUnlocated_4877_; 
v_anyUnlocated_4877_ = lean_usize_dec_lt(v_i_4875_, v_sz_4874_);
if (v_anyUnlocated_4877_ == 0)
{
lean_object* v___x_4878_; 
v___x_4878_ = l_unsafeCast___redArg(v_bs_4876_);
lean_dec_ref(v_bs_4876_);
return v___x_4878_;
}
else
{
lean_object* v___x_4879_; uint8_t v_anyFailed_4880_; lean_object* v_v_4881_; lean_object* v_bs_x27_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; size_t v___x_4885_; size_t v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___x_4879_ = lean_unsigned_to_nat(0u);
v_anyFailed_4880_ = lean_nat_dec_eq(v___x_4873_, v___x_4879_);
v_v_4881_ = lean_array_uget(v_bs_4876_, v_i_4875_);
v_bs_x27_4882_ = lean_array_uset(v_bs_4876_, v_i_4875_, v___x_4879_);
v___x_4883_ = l_unsafeCast___redArg(v_v_4881_);
lean_dec(v_v_4881_);
v___x_4884_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_4884_, 0, v___x_4883_);
lean_ctor_set_uint8(v___x_4884_, sizeof(void*)*1, v_anyFailed_4880_);
lean_ctor_set_uint8(v___x_4884_, sizeof(void*)*1 + 1, v_anyUnlocated_4877_);
lean_ctor_set_uint8(v___x_4884_, sizeof(void*)*1 + 2, v_anyFailed_4880_);
v___x_4885_ = ((size_t)1ULL);
v___x_4886_ = lean_usize_add(v_i_4875_, v___x_4885_);
v___x_4887_ = l_unsafeCast___redArg(v___x_4884_);
lean_dec_ref_known(v___x_4884_, 1);
v___x_4888_ = lean_array_uset(v_bs_x27_4882_, v_i_4875_, v___x_4887_);
v_i_4875_ = v___x_4886_;
v_bs_4876_ = v___x_4888_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object* v___x_4890_, lean_object* v_sz_4891_, lean_object* v_i_4892_, lean_object* v_bs_4893_){
_start:
{
size_t v_sz_boxed_4894_; size_t v_i_boxed_4895_; lean_object* v_res_4896_; 
v_sz_boxed_4894_ = lean_unbox_usize(v_sz_4891_);
lean_dec(v_sz_4891_);
v_i_boxed_4895_ = lean_unbox_usize(v_i_4892_);
lean_dec(v_i_4892_);
v_res_4896_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(v___x_4890_, v_sz_boxed_4894_, v_i_boxed_4895_, v_bs_4893_);
lean_dec(v___x_4890_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(lean_object* v_as_4897_, size_t v_i_4898_, size_t v_stop_4899_, lean_object* v_b_4900_){
_start:
{
uint8_t v___x_4901_; 
v___x_4901_ = lean_usize_dec_eq(v_i_4898_, v_stop_4899_);
if (v___x_4901_ == 0)
{
lean_object* v___x_4902_; lean_object* v_fst_4903_; lean_object* v_snd_4904_; uint8_t v___x_4905_; lean_object* v___x_4906_; size_t v___x_4907_; size_t v___x_4908_; 
v___x_4902_ = lean_array_uget_borrowed(v_as_4897_, v_i_4898_);
v_fst_4903_ = lean_ctor_get(v___x_4902_, 0);
v_snd_4904_ = lean_ctor_get(v___x_4902_, 1);
v___x_4905_ = lean_unbox(v_snd_4904_);
lean_inc(v_fst_4903_);
v___x_4906_ = l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(v_b_4900_, v_fst_4903_, v___x_4905_);
v___x_4907_ = ((size_t)1ULL);
v___x_4908_ = lean_usize_add(v_i_4898_, v___x_4907_);
v_i_4898_ = v___x_4908_;
v_b_4900_ = v___x_4906_;
goto _start;
}
else
{
return v_b_4900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object* v_as_4910_, lean_object* v_i_4911_, lean_object* v_stop_4912_, lean_object* v_b_4913_){
_start:
{
size_t v_i_boxed_4914_; size_t v_stop_boxed_4915_; lean_object* v_res_4916_; 
v_i_boxed_4914_ = lean_unbox_usize(v_i_4911_);
lean_dec(v_i_4911_);
v_stop_boxed_4915_ = lean_unbox_usize(v_stop_4912_);
lean_dec(v_stop_4912_);
v_res_4916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_as_4910_, v_i_boxed_4914_, v_stop_boxed_4915_, v_b_4913_);
lean_dec_ref(v_as_4910_);
return v_res_4916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(lean_object* v___x_4926_, lean_object* v_checkImports_4927_, lean_object* v_args_4928_, lean_object* v___x_4929_, lean_object* v_as_4930_, size_t v_sz_4931_, size_t v_i_4932_, lean_object* v_b_4933_){
_start:
{
lean_object* v_a_4936_; lean_object* v___x_4940_; uint8_t v_anyFailed_4941_; uint8_t v_anyUnlocated_4942_; lean_object* v___x_4943_; lean_object* v_envLinterModule_4944_; uint8_t v___x_4945_; 
v___x_4940_ = lean_unsigned_to_nat(0u);
v_anyFailed_4941_ = lean_nat_dec_eq(v___x_4926_, v___x_4940_);
v_anyUnlocated_4942_ = 1;
v___x_4943_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3));
v_envLinterModule_4944_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_envLinterModule_4944_, 0, v___x_4943_);
lean_ctor_set_uint8(v_envLinterModule_4944_, sizeof(void*)*1, v_anyFailed_4941_);
lean_ctor_set_uint8(v_envLinterModule_4944_, sizeof(void*)*1 + 1, v_anyUnlocated_4942_);
lean_ctor_set_uint8(v_envLinterModule_4944_, sizeof(void*)*1 + 2, v_anyFailed_4941_);
v___x_4945_ = lean_usize_dec_lt(v_i_4932_, v_sz_4931_);
if (v___x_4945_ == 0)
{
lean_object* v___x_4946_; 
lean_dec_ref_known(v_envLinterModule_4944_, 1);
lean_dec(v___x_4929_);
v___x_4946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4946_, 0, v_b_4933_);
return v___x_4946_;
}
else
{
lean_object* v_snd_4947_; lean_object* v_snd_4948_; lean_object* v_snd_4949_; lean_object* v_snd_4950_; lean_object* v_fst_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_5264_; 
v_snd_4947_ = lean_ctor_get(v_b_4933_, 1);
lean_inc(v_snd_4947_);
v_snd_4948_ = lean_ctor_get(v_snd_4947_, 1);
lean_inc(v_snd_4948_);
v_snd_4949_ = lean_ctor_get(v_snd_4948_, 1);
lean_inc(v_snd_4949_);
v_snd_4950_ = lean_ctor_get(v_snd_4949_, 1);
lean_inc(v_snd_4950_);
v_fst_4951_ = lean_ctor_get(v_b_4933_, 0);
v_isSharedCheck_5264_ = !lean_is_exclusive(v_b_4933_);
if (v_isSharedCheck_5264_ == 0)
{
lean_object* v_unused_5265_; 
v_unused_5265_ = lean_ctor_get(v_b_4933_, 1);
lean_dec(v_unused_5265_);
v___x_4953_ = v_b_4933_;
v_isShared_4954_ = v_isSharedCheck_5264_;
goto v_resetjp_4952_;
}
else
{
lean_inc(v_fst_4951_);
lean_dec(v_b_4933_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_5264_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v_fst_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_5262_; 
v_fst_4955_ = lean_ctor_get(v_snd_4947_, 0);
v_isSharedCheck_5262_ = !lean_is_exclusive(v_snd_4947_);
if (v_isSharedCheck_5262_ == 0)
{
lean_object* v_unused_5263_; 
v_unused_5263_ = lean_ctor_get(v_snd_4947_, 1);
lean_dec(v_unused_5263_);
v___x_4957_ = v_snd_4947_;
v_isShared_4958_ = v_isSharedCheck_5262_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_fst_4955_);
lean_dec(v_snd_4947_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_5262_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v_fst_4959_; lean_object* v___x_4961_; uint8_t v_isShared_4962_; uint8_t v_isSharedCheck_5260_; 
v_fst_4959_ = lean_ctor_get(v_snd_4948_, 0);
v_isSharedCheck_5260_ = !lean_is_exclusive(v_snd_4948_);
if (v_isSharedCheck_5260_ == 0)
{
lean_object* v_unused_5261_; 
v_unused_5261_ = lean_ctor_get(v_snd_4948_, 1);
lean_dec(v_unused_5261_);
v___x_4961_ = v_snd_4948_;
v_isShared_4962_ = v_isSharedCheck_5260_;
goto v_resetjp_4960_;
}
else
{
lean_inc(v_fst_4959_);
lean_dec(v_snd_4948_);
v___x_4961_ = lean_box(0);
v_isShared_4962_ = v_isSharedCheck_5260_;
goto v_resetjp_4960_;
}
v_resetjp_4960_:
{
lean_object* v_fst_4963_; lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_5258_; 
v_fst_4963_ = lean_ctor_get(v_snd_4949_, 0);
v_isSharedCheck_5258_ = !lean_is_exclusive(v_snd_4949_);
if (v_isSharedCheck_5258_ == 0)
{
lean_object* v_unused_5259_; 
v_unused_5259_ = lean_ctor_get(v_snd_4949_, 1);
lean_dec(v_unused_5259_);
v___x_4965_ = v_snd_4949_;
v_isShared_4966_ = v_isSharedCheck_5258_;
goto v_resetjp_4964_;
}
else
{
lean_inc(v_fst_4963_);
lean_dec(v_snd_4949_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_5258_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
lean_object* v_fst_4967_; lean_object* v_snd_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_5257_; 
v_fst_4967_ = lean_ctor_get(v_snd_4950_, 0);
v_snd_4968_ = lean_ctor_get(v_snd_4950_, 1);
v_isSharedCheck_5257_ = !lean_is_exclusive(v_snd_4950_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_4970_ = v_snd_4950_;
v_isShared_4971_ = v_isSharedCheck_5257_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_snd_4968_);
lean_inc(v_fst_4967_);
lean_dec(v_snd_4950_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_5257_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4972_; lean_object* v_a_4973_; lean_object* v___y_4975_; lean_object* v___y_4976_; uint8_t v_anyFailed_4977_; uint8_t v_anyUnlocated_4978_; lean_object* v_records_4979_; lean_object* v_codeQualityEntries_4980_; lean_object* v___y_5127_; lean_object* v___y_5128_; uint8_t v_anyFailed_5129_; uint8_t v_anyUnlocated_5130_; lean_object* v_records_5131_; lean_object* v_codeQualityEntries_5132_; lean_object* v___y_5150_; lean_object* v___y_5151_; lean_object* v___x_5190_; lean_object* v___x_5191_; 
v___x_4972_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v_a_4973_ = lean_array_uget_borrowed(v_as_4930_, v_i_4932_);
v___x_5190_ = lean_enable_initializer_execution();
lean_inc(v_a_4973_);
v___x_5191_ = l_Lean_findOLean(v_a_4973_);
if (lean_obj_tag(v___x_5191_) == 0)
{
lean_object* v_a_5192_; lean_object* v___x_5193_; 
v_a_5192_ = lean_ctor_get(v___x_5191_, 0);
lean_inc(v_a_5192_);
lean_dec_ref_known(v___x_5191_, 1);
v___x_5193_ = l_Lean_readModuleData(v_a_5192_);
lean_dec(v_a_5192_);
if (lean_obj_tag(v___x_5193_) == 0)
{
lean_object* v_a_5194_; lean_object* v_fst_5195_; lean_object* v_snd_5196_; uint8_t v___x_5197_; uint8_t v___y_5199_; 
v_a_5194_ = lean_ctor_get(v___x_5193_, 0);
lean_inc(v_a_5194_);
lean_dec_ref_known(v___x_5193_, 1);
v_fst_5195_ = lean_ctor_get(v_a_5194_, 0);
lean_inc(v_fst_5195_);
v_snd_5196_ = lean_ctor_get(v_a_5194_, 1);
lean_inc(v_snd_5196_);
lean_dec(v_a_5194_);
v___x_5197_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(v_fst_5195_);
lean_dec(v_fst_5195_);
if (v___x_5197_ == 0)
{
uint8_t v___x_5239_; 
v___x_5239_ = 2;
v___y_5199_ = v___x_5239_;
goto v___jp_5198_;
}
else
{
uint8_t v___x_5240_; 
v___x_5240_ = 1;
v___y_5199_ = v___x_5240_;
goto v___jp_5198_;
}
v___jp_5198_:
{
lean_object* v___x_5200_; 
v___x_5200_ = lean_compacted_region_free(v_snd_5196_);
if (lean_obj_tag(v___x_5200_) == 0)
{
lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; uint32_t v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; 
lean_dec_ref_known(v___x_5200_, 1);
lean_inc(v_a_4973_);
v___x_5201_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_5201_, 0, v_a_4973_);
lean_ctor_set_uint8(v___x_5201_, sizeof(void*)*1, v_anyFailed_4941_);
lean_ctor_set_uint8(v___x_5201_, sizeof(void*)*1 + 1, v_anyUnlocated_4942_);
lean_ctor_set_uint8(v___x_5201_, sizeof(void*)*1 + 2, v_anyFailed_4941_);
v___x_5202_ = lean_unsigned_to_nat(2u);
v___x_5203_ = lean_mk_empty_array_with_capacity(v___x_5202_);
v___x_5204_ = lean_array_push(v___x_5203_, v___x_5201_);
v___x_5205_ = lean_array_push(v___x_5204_, v_envLinterModule_4944_);
v___x_5206_ = l_Array_append___redArg(v___x_5205_, v_checkImports_4927_);
v___x_5207_ = l_Lean_Options_empty;
v___x_5208_ = 1024;
v___x_5209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4));
v___x_5210_ = lean_box(1);
v___x_5211_ = l_Lean_importModules(v___x_5206_, v___x_5207_, v___x_5208_, v___x_5209_, v_anyFailed_4941_, v_anyUnlocated_4942_, v___y_5199_, v___x_5210_);
if (lean_obj_tag(v___x_5211_) == 0)
{
lean_object* v_a_5212_; lean_object* v_linterOverrides_5213_; lean_object* v___x_5214_; uint8_t v___x_5215_; 
v_a_5212_ = lean_ctor_get(v___x_5211_, 0);
lean_inc(v_a_5212_);
lean_dec_ref_known(v___x_5211_, 1);
v_linterOverrides_5213_ = lean_ctor_get(v_args_4928_, 0);
v___x_5214_ = lean_array_get_size(v_linterOverrides_5213_);
v___x_5215_ = lean_nat_dec_lt(v___x_4940_, v___x_5214_);
if (v___x_5215_ == 0)
{
v___y_5150_ = v_a_5212_;
v___y_5151_ = v___x_5207_;
goto v___jp_5149_;
}
else
{
uint8_t v___x_5216_; 
v___x_5216_ = lean_nat_dec_le(v___x_5214_, v___x_5214_);
if (v___x_5216_ == 0)
{
if (v___x_5215_ == 0)
{
v___y_5150_ = v_a_5212_;
v___y_5151_ = v___x_5207_;
goto v___jp_5149_;
}
else
{
size_t v___x_5217_; size_t v___x_5218_; lean_object* v___x_5219_; 
v___x_5217_ = ((size_t)0ULL);
v___x_5218_ = lean_usize_of_nat(v___x_5214_);
v___x_5219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_linterOverrides_5213_, v___x_5217_, v___x_5218_, v___x_5207_);
v___y_5150_ = v_a_5212_;
v___y_5151_ = v___x_5219_;
goto v___jp_5149_;
}
}
else
{
size_t v___x_5220_; size_t v___x_5221_; lean_object* v___x_5222_; 
v___x_5220_ = ((size_t)0ULL);
v___x_5221_ = lean_usize_of_nat(v___x_5214_);
v___x_5222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_linterOverrides_5213_, v___x_5220_, v___x_5221_, v___x_5207_);
v___y_5150_ = v_a_5212_;
v___y_5151_ = v___x_5222_;
goto v___jp_5149_;
}
}
}
else
{
lean_object* v_a_5223_; lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5230_; 
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_dec(v_fst_4963_);
lean_del_object(v___x_4961_);
lean_dec(v_fst_4959_);
lean_del_object(v___x_4957_);
lean_dec(v_fst_4955_);
lean_del_object(v___x_4953_);
lean_dec(v_fst_4951_);
lean_dec(v___x_4929_);
v_a_5223_ = lean_ctor_get(v___x_5211_, 0);
v_isSharedCheck_5230_ = !lean_is_exclusive(v___x_5211_);
if (v_isSharedCheck_5230_ == 0)
{
v___x_5225_ = v___x_5211_;
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
else
{
lean_inc(v_a_5223_);
lean_dec(v___x_5211_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5228_; 
if (v_isShared_5226_ == 0)
{
v___x_5228_ = v___x_5225_;
goto v_reusejp_5227_;
}
else
{
lean_object* v_reuseFailAlloc_5229_; 
v_reuseFailAlloc_5229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5229_, 0, v_a_5223_);
v___x_5228_ = v_reuseFailAlloc_5229_;
goto v_reusejp_5227_;
}
v_reusejp_5227_:
{
return v___x_5228_;
}
}
}
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_dec(v_fst_4963_);
lean_del_object(v___x_4961_);
lean_dec(v_fst_4959_);
lean_del_object(v___x_4957_);
lean_dec(v_fst_4955_);
lean_del_object(v___x_4953_);
lean_dec(v_fst_4951_);
lean_dec_ref_known(v_envLinterModule_4944_, 1);
lean_dec(v___x_4929_);
v_a_5231_ = lean_ctor_get(v___x_5200_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5200_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5200_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5200_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
}
else
{
lean_object* v_a_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5248_; 
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_dec(v_fst_4963_);
lean_del_object(v___x_4961_);
lean_dec(v_fst_4959_);
lean_del_object(v___x_4957_);
lean_dec(v_fst_4955_);
lean_del_object(v___x_4953_);
lean_dec(v_fst_4951_);
lean_dec_ref_known(v_envLinterModule_4944_, 1);
lean_dec(v___x_4929_);
v_a_5241_ = lean_ctor_get(v___x_5193_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5193_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5243_ = v___x_5193_;
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_a_5241_);
lean_dec(v___x_5193_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v___x_5246_; 
if (v_isShared_5244_ == 0)
{
v___x_5246_ = v___x_5243_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_a_5241_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
return v___x_5246_;
}
}
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5256_; 
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_dec(v_fst_4963_);
lean_del_object(v___x_4961_);
lean_dec(v_fst_4959_);
lean_del_object(v___x_4957_);
lean_dec(v_fst_4955_);
lean_del_object(v___x_4953_);
lean_dec(v_fst_4951_);
lean_dec_ref_known(v_envLinterModule_4944_, 1);
lean_dec(v___x_4929_);
v_a_5249_ = lean_ctor_get(v___x_5191_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v___x_5191_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5251_ = v___x_5191_;
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v___x_5191_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_a_5249_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
v___jp_4974_:
{
uint8_t v_mode_4981_; uint8_t v___x_4982_; uint8_t v___x_4983_; 
v_mode_4981_ = lean_ctor_get_uint8(v_args_4928_, sizeof(void*)*4 + 1);
v___x_4982_ = 2;
v___x_4983_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_4981_, v___x_4982_);
if (v___x_4983_ == 0)
{
lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4984_ = l_Lean_Name_getRoot(v_a_4973_);
lean_inc(v___x_4929_);
v___x_4985_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(v_args_4928_, v___y_4976_, v___x_4929_, v___y_4975_, v___x_4984_, v_fst_4967_);
lean_dec_ref(v___y_4976_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_object* v_a_4986_; lean_object* v_outcome_4987_; 
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
lean_inc(v_a_4986_);
lean_dec_ref_known(v___x_4985_, 1);
v_outcome_4987_ = lean_ctor_get(v_a_4986_, 0);
if (lean_obj_tag(v_outcome_4987_) == 0)
{
uint8_t v_failed_4988_; 
v_failed_4988_ = lean_ctor_get_uint8(v_outcome_4987_, 0);
if (v_failed_4988_ == 0)
{
lean_object* v_checkedModules_4989_; lean_object* v___x_4991_; 
v_checkedModules_4989_ = lean_ctor_get(v_a_4986_, 1);
lean_inc(v_checkedModules_4989_);
lean_dec(v_a_4986_);
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 0, v_checkedModules_4989_);
v___x_4991_ = v___x_4970_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_checkedModules_4989_);
lean_ctor_set(v_reuseFailAlloc_5006_, 1, v_snd_4968_);
v___x_4991_ = v_reuseFailAlloc_5006_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
lean_object* v___x_4993_; 
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 1, v___x_4991_);
lean_ctor_set(v___x_4965_, 0, v_codeQualityEntries_4980_);
v___x_4993_ = v___x_4965_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v_codeQualityEntries_4980_);
lean_ctor_set(v_reuseFailAlloc_5005_, 1, v___x_4991_);
v___x_4993_ = v_reuseFailAlloc_5005_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
lean_object* v___x_4995_; 
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 1, v___x_4993_);
lean_ctor_set(v___x_4961_, 0, v_records_4979_);
v___x_4995_ = v___x_4961_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_5004_; 
v_reuseFailAlloc_5004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5004_, 0, v_records_4979_);
lean_ctor_set(v_reuseFailAlloc_5004_, 1, v___x_4993_);
v___x_4995_ = v_reuseFailAlloc_5004_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
lean_object* v___x_4996_; lean_object* v___x_4998_; 
v___x_4996_ = lean_box(v_anyUnlocated_4978_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_4995_);
lean_ctor_set(v___x_4957_, 0, v___x_4996_);
v___x_4998_ = v___x_4957_;
goto v_reusejp_4997_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v___x_4996_);
lean_ctor_set(v_reuseFailAlloc_5003_, 1, v___x_4995_);
v___x_4998_ = v_reuseFailAlloc_5003_;
goto v_reusejp_4997_;
}
v_reusejp_4997_:
{
lean_object* v___x_4999_; lean_object* v___x_5001_; 
v___x_4999_ = lean_box(v_anyFailed_4977_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 1, v___x_4998_);
lean_ctor_set(v___x_4953_, 0, v___x_4999_);
v___x_5001_ = v___x_4953_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v___x_4999_);
lean_ctor_set(v_reuseFailAlloc_5002_, 1, v___x_4998_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
v_a_4936_ = v___x_5001_;
goto v___jp_4935_;
}
}
}
}
}
}
else
{
lean_object* v_checkedModules_5007_; lean_object* v___x_5009_; 
v_checkedModules_5007_ = lean_ctor_get(v_a_4986_, 1);
lean_inc(v_checkedModules_5007_);
lean_dec(v_a_4986_);
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 0, v_checkedModules_5007_);
v___x_5009_ = v___x_4970_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v_checkedModules_5007_);
lean_ctor_set(v_reuseFailAlloc_5024_, 1, v_snd_4968_);
v___x_5009_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
lean_object* v___x_5011_; 
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 1, v___x_5009_);
lean_ctor_set(v___x_4965_, 0, v_codeQualityEntries_4980_);
v___x_5011_ = v___x_4965_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5023_; 
v_reuseFailAlloc_5023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v_codeQualityEntries_4980_);
lean_ctor_set(v_reuseFailAlloc_5023_, 1, v___x_5009_);
v___x_5011_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
lean_object* v___x_5013_; 
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 1, v___x_5011_);
lean_ctor_set(v___x_4961_, 0, v_records_4979_);
v___x_5013_ = v___x_4961_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v_records_4979_);
lean_ctor_set(v_reuseFailAlloc_5022_, 1, v___x_5011_);
v___x_5013_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
lean_object* v___x_5014_; lean_object* v___x_5016_; 
v___x_5014_ = lean_box(v_anyUnlocated_4978_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_5013_);
lean_ctor_set(v___x_4957_, 0, v___x_5014_);
v___x_5016_ = v___x_4957_;
goto v_reusejp_5015_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v___x_5014_);
lean_ctor_set(v_reuseFailAlloc_5021_, 1, v___x_5013_);
v___x_5016_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5015_;
}
v_reusejp_5015_:
{
lean_object* v___x_5017_; lean_object* v___x_5019_; 
v___x_5017_ = lean_box(v_anyUnlocated_4942_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 1, v___x_5016_);
lean_ctor_set(v___x_4953_, 0, v___x_5017_);
v___x_5019_ = v___x_4953_;
goto v_reusejp_5018_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v___x_5017_);
lean_ctor_set(v_reuseFailAlloc_5020_, 1, v___x_5016_);
v___x_5019_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
v_a_4936_ = v___x_5019_;
goto v___jp_4935_;
}
}
}
}
}
}
}
else
{
lean_object* v_checkedModules_5025_; lean_object* v_records_5026_; uint8_t v_unlocated_5027_; lean_object* v___x_5028_; 
lean_inc_ref(v_outcome_4987_);
v_checkedModules_5025_ = lean_ctor_get(v_a_4986_, 1);
lean_inc(v_checkedModules_5025_);
lean_dec(v_a_4986_);
v_records_5026_ = lean_ctor_get(v_outcome_4987_, 0);
lean_inc_ref(v_records_5026_);
v_unlocated_5027_ = lean_ctor_get_uint8(v_outcome_4987_, sizeof(void*)*1);
lean_dec_ref_known(v_outcome_4987_, 1);
v___x_5028_ = l_Array_append___redArg(v_records_4979_, v_records_5026_);
lean_dec_ref(v_records_5026_);
if (v_unlocated_5027_ == 0)
{
lean_object* v___x_5030_; 
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 0, v_checkedModules_5025_);
v___x_5030_ = v___x_4970_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5045_; 
v_reuseFailAlloc_5045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5045_, 0, v_checkedModules_5025_);
lean_ctor_set(v_reuseFailAlloc_5045_, 1, v_snd_4968_);
v___x_5030_ = v_reuseFailAlloc_5045_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
lean_object* v___x_5032_; 
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 1, v___x_5030_);
lean_ctor_set(v___x_4965_, 0, v_codeQualityEntries_4980_);
v___x_5032_ = v___x_4965_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v_codeQualityEntries_4980_);
lean_ctor_set(v_reuseFailAlloc_5044_, 1, v___x_5030_);
v___x_5032_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
lean_object* v___x_5034_; 
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 1, v___x_5032_);
lean_ctor_set(v___x_4961_, 0, v___x_5028_);
v___x_5034_ = v___x_4961_;
goto v_reusejp_5033_;
}
else
{
lean_object* v_reuseFailAlloc_5043_; 
v_reuseFailAlloc_5043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5043_, 0, v___x_5028_);
lean_ctor_set(v_reuseFailAlloc_5043_, 1, v___x_5032_);
v___x_5034_ = v_reuseFailAlloc_5043_;
goto v_reusejp_5033_;
}
v_reusejp_5033_:
{
lean_object* v___x_5035_; lean_object* v___x_5037_; 
v___x_5035_ = lean_box(v_anyUnlocated_4978_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_5034_);
lean_ctor_set(v___x_4957_, 0, v___x_5035_);
v___x_5037_ = v___x_4957_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5042_, 1, v___x_5034_);
v___x_5037_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
lean_object* v___x_5038_; lean_object* v___x_5040_; 
v___x_5038_ = lean_box(v_anyFailed_4977_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 1, v___x_5037_);
lean_ctor_set(v___x_4953_, 0, v___x_5038_);
v___x_5040_ = v___x_4953_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v___x_5038_);
lean_ctor_set(v_reuseFailAlloc_5041_, 1, v___x_5037_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
v_a_4936_ = v___x_5040_;
goto v___jp_4935_;
}
}
}
}
}
}
else
{
lean_object* v___x_5047_; 
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 0, v_checkedModules_5025_);
v___x_5047_ = v___x_4970_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v_checkedModules_5025_);
lean_ctor_set(v_reuseFailAlloc_5062_, 1, v_snd_4968_);
v___x_5047_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
lean_object* v___x_5049_; 
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 1, v___x_5047_);
lean_ctor_set(v___x_4965_, 0, v_codeQualityEntries_4980_);
v___x_5049_ = v___x_4965_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5061_; 
v_reuseFailAlloc_5061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5061_, 0, v_codeQualityEntries_4980_);
lean_ctor_set(v_reuseFailAlloc_5061_, 1, v___x_5047_);
v___x_5049_ = v_reuseFailAlloc_5061_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
lean_object* v___x_5051_; 
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 1, v___x_5049_);
lean_ctor_set(v___x_4961_, 0, v___x_5028_);
v___x_5051_ = v___x_4961_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5060_; 
v_reuseFailAlloc_5060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5060_, 0, v___x_5028_);
lean_ctor_set(v_reuseFailAlloc_5060_, 1, v___x_5049_);
v___x_5051_ = v_reuseFailAlloc_5060_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
lean_object* v___x_5052_; lean_object* v___x_5054_; 
v___x_5052_ = lean_box(v_anyUnlocated_4942_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_5051_);
lean_ctor_set(v___x_4957_, 0, v___x_5052_);
v___x_5054_ = v___x_4957_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5059_; 
v_reuseFailAlloc_5059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5059_, 0, v___x_5052_);
lean_ctor_set(v_reuseFailAlloc_5059_, 1, v___x_5051_);
v___x_5054_ = v_reuseFailAlloc_5059_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
lean_object* v___x_5055_; lean_object* v___x_5057_; 
v___x_5055_ = lean_box(v_anyFailed_4977_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 1, v___x_5054_);
lean_ctor_set(v___x_4953_, 0, v___x_5055_);
v___x_5057_ = v___x_4953_;
goto v_reusejp_5056_;
}
else
{
lean_object* v_reuseFailAlloc_5058_; 
v_reuseFailAlloc_5058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5058_, 0, v___x_5055_);
lean_ctor_set(v_reuseFailAlloc_5058_, 1, v___x_5054_);
v___x_5057_ = v_reuseFailAlloc_5058_;
goto v_reusejp_5056_;
}
v_reusejp_5056_:
{
v_a_4936_ = v___x_5057_;
goto v___jp_4935_;
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
lean_object* v_a_5063_; lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5070_; 
lean_dec_ref(v_codeQualityEntries_4980_);
lean_dec_ref(v_records_4979_);
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_del_object(v___x_4965_);
lean_del_object(v___x_4961_);
lean_del_object(v___x_4957_);
lean_del_object(v___x_4953_);
lean_dec(v___x_4929_);
v_a_5063_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5065_ = v___x_4985_;
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
else
{
lean_inc(v_a_5063_);
lean_dec(v___x_4985_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
lean_object* v___x_5068_; 
if (v_isShared_5066_ == 0)
{
v___x_5068_ = v___x_5065_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_a_5063_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
return v___x_5068_;
}
}
}
}
else
{
lean_object* v___x_5071_; lean_object* v_fst_5072_; lean_object* v_snd_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5125_; 
lean_del_object(v___x_4953_);
v___x_5071_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(v_args_4928_, v___y_4976_, v___y_4975_, v_a_4973_, v_snd_4968_);
lean_dec_ref(v___y_4976_);
v_fst_5072_ = lean_ctor_get(v___x_5071_, 0);
v_snd_5073_ = lean_ctor_get(v___x_5071_, 1);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5071_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5075_ = v___x_5071_;
v_isShared_5076_ = v_isSharedCheck_5125_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_snd_5073_);
lean_inc(v_fst_5072_);
lean_dec(v___x_5071_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5125_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5077_; lean_object* v___x_5078_; 
v___x_5077_ = l_Array_append___redArg(v_codeQualityEntries_4980_, v_fst_5072_);
lean_dec(v_fst_5072_);
lean_inc(v_a_4973_);
lean_inc(v___x_4929_);
v___x_5078_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(v___x_4929_, v___y_4975_, v_a_4973_);
if (lean_obj_tag(v___x_5078_) == 0)
{
lean_object* v_a_5079_; lean_object* v_entries_5080_; uint8_t v_failed_5081_; lean_object* v___x_5082_; 
v_a_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc(v_a_5079_);
lean_dec_ref_known(v___x_5078_, 1);
v_entries_5080_ = lean_ctor_get(v_a_5079_, 0);
lean_inc_ref(v_entries_5080_);
v_failed_5081_ = lean_ctor_get_uint8(v_a_5079_, sizeof(void*)*1);
lean_dec(v_a_5079_);
v___x_5082_ = l_Array_append___redArg(v___x_5077_, v_entries_5080_);
lean_dec_ref(v_entries_5080_);
if (v_failed_5081_ == 0)
{
lean_object* v___x_5084_; 
if (v_isShared_5076_ == 0)
{
lean_ctor_set(v___x_5075_, 0, v_fst_4967_);
v___x_5084_ = v___x_5075_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5099_; 
v_reuseFailAlloc_5099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5099_, 0, v_fst_4967_);
lean_ctor_set(v_reuseFailAlloc_5099_, 1, v_snd_5073_);
v___x_5084_ = v_reuseFailAlloc_5099_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
lean_object* v___x_5086_; 
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 1, v___x_5084_);
lean_ctor_set(v___x_4970_, 0, v___x_5082_);
v___x_5086_ = v___x_4970_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5098_; 
v_reuseFailAlloc_5098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5098_, 0, v___x_5082_);
lean_ctor_set(v_reuseFailAlloc_5098_, 1, v___x_5084_);
v___x_5086_ = v_reuseFailAlloc_5098_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
lean_object* v___x_5088_; 
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 1, v___x_5086_);
lean_ctor_set(v___x_4965_, 0, v_records_4979_);
v___x_5088_ = v___x_4965_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_records_4979_);
lean_ctor_set(v_reuseFailAlloc_5097_, 1, v___x_5086_);
v___x_5088_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
lean_object* v___x_5089_; lean_object* v___x_5091_; 
v___x_5089_ = lean_box(v_anyUnlocated_4978_);
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 1, v___x_5088_);
lean_ctor_set(v___x_4961_, 0, v___x_5089_);
v___x_5091_ = v___x_4961_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5096_; 
v_reuseFailAlloc_5096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5096_, 0, v___x_5089_);
lean_ctor_set(v_reuseFailAlloc_5096_, 1, v___x_5088_);
v___x_5091_ = v_reuseFailAlloc_5096_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
lean_object* v___x_5092_; lean_object* v___x_5094_; 
v___x_5092_ = lean_box(v_anyFailed_4977_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_5091_);
lean_ctor_set(v___x_4957_, 0, v___x_5092_);
v___x_5094_ = v___x_4957_;
goto v_reusejp_5093_;
}
else
{
lean_object* v_reuseFailAlloc_5095_; 
v_reuseFailAlloc_5095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5095_, 0, v___x_5092_);
lean_ctor_set(v_reuseFailAlloc_5095_, 1, v___x_5091_);
v___x_5094_ = v_reuseFailAlloc_5095_;
goto v_reusejp_5093_;
}
v_reusejp_5093_:
{
v_a_4936_ = v___x_5094_;
goto v___jp_4935_;
}
}
}
}
}
}
else
{
lean_object* v___x_5101_; 
if (v_isShared_5076_ == 0)
{
lean_ctor_set(v___x_5075_, 0, v_fst_4967_);
v___x_5101_ = v___x_5075_;
goto v_reusejp_5100_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v_fst_4967_);
lean_ctor_set(v_reuseFailAlloc_5116_, 1, v_snd_5073_);
v___x_5101_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5100_;
}
v_reusejp_5100_:
{
lean_object* v___x_5103_; 
if (v_isShared_4971_ == 0)
{
lean_ctor_set(v___x_4970_, 1, v___x_5101_);
lean_ctor_set(v___x_4970_, 0, v___x_5082_);
v___x_5103_ = v___x_4970_;
goto v_reusejp_5102_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v___x_5082_);
lean_ctor_set(v_reuseFailAlloc_5115_, 1, v___x_5101_);
v___x_5103_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5102_;
}
v_reusejp_5102_:
{
lean_object* v___x_5105_; 
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 1, v___x_5103_);
lean_ctor_set(v___x_4965_, 0, v_records_4979_);
v___x_5105_ = v___x_4965_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v_records_4979_);
lean_ctor_set(v_reuseFailAlloc_5114_, 1, v___x_5103_);
v___x_5105_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
lean_object* v___x_5106_; lean_object* v___x_5108_; 
v___x_5106_ = lean_box(v_anyUnlocated_4978_);
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 1, v___x_5105_);
lean_ctor_set(v___x_4961_, 0, v___x_5106_);
v___x_5108_ = v___x_4961_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5113_; 
v_reuseFailAlloc_5113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5113_, 0, v___x_5106_);
lean_ctor_set(v_reuseFailAlloc_5113_, 1, v___x_5105_);
v___x_5108_ = v_reuseFailAlloc_5113_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
lean_object* v___x_5109_; lean_object* v___x_5111_; 
v___x_5109_ = lean_box(v_anyUnlocated_4942_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_5108_);
lean_ctor_set(v___x_4957_, 0, v___x_5109_);
v___x_5111_ = v___x_4957_;
goto v_reusejp_5110_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v___x_5109_);
lean_ctor_set(v_reuseFailAlloc_5112_, 1, v___x_5108_);
v___x_5111_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5110_;
}
v_reusejp_5110_:
{
v_a_4936_ = v___x_5111_;
goto v___jp_4935_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5117_; lean_object* v___x_5119_; uint8_t v_isShared_5120_; uint8_t v_isSharedCheck_5124_; 
lean_dec_ref(v___x_5077_);
lean_del_object(v___x_5075_);
lean_dec(v_snd_5073_);
lean_dec_ref(v_records_4979_);
lean_del_object(v___x_4970_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_del_object(v___x_4961_);
lean_del_object(v___x_4957_);
lean_dec(v___x_4929_);
v_a_5117_ = lean_ctor_get(v___x_5078_, 0);
v_isSharedCheck_5124_ = !lean_is_exclusive(v___x_5078_);
if (v_isSharedCheck_5124_ == 0)
{
v___x_5119_ = v___x_5078_;
v_isShared_5120_ = v_isSharedCheck_5124_;
goto v_resetjp_5118_;
}
else
{
lean_inc(v_a_5117_);
lean_dec(v___x_5078_);
v___x_5119_ = lean_box(0);
v_isShared_5120_ = v_isSharedCheck_5124_;
goto v_resetjp_5118_;
}
v_resetjp_5118_:
{
lean_object* v___x_5122_; 
if (v_isShared_5120_ == 0)
{
v___x_5122_ = v___x_5119_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v_a_5117_);
v___x_5122_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
return v___x_5122_;
}
}
}
}
}
}
v___jp_5126_:
{
lean_object* v___x_5133_; 
lean_inc(v_a_4973_);
lean_inc_ref(v___y_5127_);
lean_inc(v___x_4929_);
lean_inc_ref(v___y_5128_);
v___x_5133_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(v_args_4928_, v___y_5128_, v___x_4929_, v___y_5127_, v_a_4973_);
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; 
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
lean_dec_ref_known(v___x_5133_, 1);
switch(lean_obj_tag(v_a_5134_))
{
case 0:
{
uint8_t v_failed_5135_; 
v_failed_5135_ = lean_ctor_get_uint8(v_a_5134_, 0);
lean_dec_ref_known(v_a_5134_, 0);
if (v_failed_5135_ == 0)
{
v___y_4975_ = v___y_5127_;
v___y_4976_ = v___y_5128_;
v_anyFailed_4977_ = v_anyFailed_5129_;
v_anyUnlocated_4978_ = v_anyUnlocated_5130_;
v_records_4979_ = v_records_5131_;
v_codeQualityEntries_4980_ = v_codeQualityEntries_5132_;
goto v___jp_4974_;
}
else
{
v___y_4975_ = v___y_5127_;
v___y_4976_ = v___y_5128_;
v_anyFailed_4977_ = v_anyUnlocated_4942_;
v_anyUnlocated_4978_ = v_anyUnlocated_5130_;
v_records_4979_ = v_records_5131_;
v_codeQualityEntries_4980_ = v_codeQualityEntries_5132_;
goto v___jp_4974_;
}
}
case 1:
{
lean_object* v_records_5136_; uint8_t v_unlocated_5137_; lean_object* v___x_5138_; 
v_records_5136_ = lean_ctor_get(v_a_5134_, 0);
lean_inc_ref(v_records_5136_);
v_unlocated_5137_ = lean_ctor_get_uint8(v_a_5134_, sizeof(void*)*1);
lean_dec_ref_known(v_a_5134_, 1);
v___x_5138_ = l_Array_append___redArg(v_records_5131_, v_records_5136_);
lean_dec_ref(v_records_5136_);
if (v_unlocated_5137_ == 0)
{
v___y_4975_ = v___y_5127_;
v___y_4976_ = v___y_5128_;
v_anyFailed_4977_ = v_anyFailed_5129_;
v_anyUnlocated_4978_ = v_anyUnlocated_5130_;
v_records_4979_ = v___x_5138_;
v_codeQualityEntries_4980_ = v_codeQualityEntries_5132_;
goto v___jp_4974_;
}
else
{
v___y_4975_ = v___y_5127_;
v___y_4976_ = v___y_5128_;
v_anyFailed_4977_ = v_anyFailed_5129_;
v_anyUnlocated_4978_ = v_anyUnlocated_4942_;
v_records_4979_ = v___x_5138_;
v_codeQualityEntries_4980_ = v_codeQualityEntries_5132_;
goto v___jp_4974_;
}
}
default: 
{
lean_object* v_entries_5139_; lean_object* v___x_5140_; 
v_entries_5139_ = lean_ctor_get(v_a_5134_, 0);
lean_inc_ref(v_entries_5139_);
lean_dec_ref_known(v_a_5134_, 1);
v___x_5140_ = l_Array_append___redArg(v_codeQualityEntries_5132_, v_entries_5139_);
lean_dec_ref(v_entries_5139_);
v___y_4975_ = v___y_5127_;
v___y_4976_ = v___y_5128_;
v_anyFailed_4977_ = v_anyFailed_5129_;
v_anyUnlocated_4978_ = v_anyUnlocated_5130_;
v_records_4979_ = v_records_5131_;
v_codeQualityEntries_4980_ = v___x_5140_;
goto v___jp_4974_;
}
}
}
else
{
lean_object* v_a_5141_; lean_object* v___x_5143_; uint8_t v_isShared_5144_; uint8_t v_isSharedCheck_5148_; 
lean_dec_ref(v_codeQualityEntries_5132_);
lean_dec_ref(v_records_5131_);
lean_dec_ref(v___y_5128_);
lean_dec_ref(v___y_5127_);
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_del_object(v___x_4961_);
lean_del_object(v___x_4957_);
lean_del_object(v___x_4953_);
lean_dec(v___x_4929_);
v_a_5141_ = lean_ctor_get(v___x_5133_, 0);
v_isSharedCheck_5148_ = !lean_is_exclusive(v___x_5133_);
if (v_isSharedCheck_5148_ == 0)
{
v___x_5143_ = v___x_5133_;
v_isShared_5144_ = v_isSharedCheck_5148_;
goto v_resetjp_5142_;
}
else
{
lean_inc(v_a_5141_);
lean_dec(v___x_5133_);
v___x_5143_ = lean_box(0);
v_isShared_5144_ = v_isSharedCheck_5148_;
goto v_resetjp_5142_;
}
v_resetjp_5142_:
{
lean_object* v___x_5146_; 
if (v_isShared_5144_ == 0)
{
v___x_5146_ = v___x_5143_;
goto v_reusejp_5145_;
}
else
{
lean_object* v_reuseFailAlloc_5147_; 
v_reuseFailAlloc_5147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5147_, 0, v_a_5141_);
v___x_5146_ = v_reuseFailAlloc_5147_;
goto v_reusejp_5145_;
}
v_reusejp_5145_:
{
return v___x_5146_;
}
}
}
}
v___jp_5149_:
{
lean_object* v___x_5152_; lean_object* v_toEnvExtension_5153_; lean_object* v_asyncMode_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v_merged_5157_; lean_object* v___x_5159_; uint8_t v_isShared_5160_; uint8_t v_isSharedCheck_5188_; 
v___x_5152_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_5153_ = lean_ctor_get(v___x_5152_, 0);
v_asyncMode_5154_ = lean_ctor_get(v_toEnvExtension_5153_, 2);
v___x_5155_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
lean_inc_ref(v___y_5150_);
v___x_5156_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4972_, v___x_5152_, v___y_5150_, v_asyncMode_5154_, v___x_5155_);
v_merged_5157_ = lean_ctor_get(v___x_5156_, 0);
v_isSharedCheck_5188_ = !lean_is_exclusive(v___x_5156_);
if (v_isSharedCheck_5188_ == 0)
{
lean_object* v_unused_5189_; 
v_unused_5189_ = lean_ctor_get(v___x_5156_, 1);
lean_dec(v_unused_5189_);
v___x_5159_ = v___x_5156_;
v_isShared_5160_ = v_isSharedCheck_5188_;
goto v_resetjp_5158_;
}
else
{
lean_inc(v_merged_5157_);
lean_dec(v___x_5156_);
v___x_5159_ = lean_box(0);
v_isShared_5160_ = v_isSharedCheck_5188_;
goto v_resetjp_5158_;
}
v_resetjp_5158_:
{
lean_object* v___x_5162_; 
if (v_isShared_5160_ == 0)
{
lean_ctor_set(v___x_5159_, 1, v_merged_5157_);
lean_ctor_set(v___x_5159_, 0, v___y_5151_);
v___x_5162_ = v___x_5159_;
goto v_reusejp_5161_;
}
else
{
lean_object* v_reuseFailAlloc_5187_; 
v_reuseFailAlloc_5187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5187_, 0, v___y_5151_);
lean_ctor_set(v_reuseFailAlloc_5187_, 1, v_merged_5157_);
v___x_5162_ = v_reuseFailAlloc_5187_;
goto v_reusejp_5161_;
}
v_reusejp_5161_:
{
lean_object* v___x_5163_; 
v___x_5163_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(v_args_4928_, v___x_5162_, v___y_5150_, v_a_4973_);
if (lean_obj_tag(v___x_5163_) == 0)
{
lean_object* v_a_5164_; 
v_a_5164_ = lean_ctor_get(v___x_5163_, 0);
lean_inc(v_a_5164_);
lean_dec_ref_known(v___x_5163_, 1);
switch(lean_obj_tag(v_a_5164_))
{
case 0:
{
uint8_t v___x_5165_; 
v___x_5165_ = lean_unbox(v_fst_4951_);
lean_dec(v_fst_4951_);
if (v___x_5165_ == 0)
{
uint8_t v_failed_5166_; uint8_t v___x_5167_; 
v_failed_5166_ = lean_ctor_get_uint8(v_a_5164_, 0);
lean_dec_ref_known(v_a_5164_, 0);
v___x_5167_ = lean_unbox(v_fst_4955_);
lean_dec(v_fst_4955_);
v___y_5127_ = v___y_5150_;
v___y_5128_ = v___x_5162_;
v_anyFailed_5129_ = v_failed_5166_;
v_anyUnlocated_5130_ = v___x_5167_;
v_records_5131_ = v_fst_4959_;
v_codeQualityEntries_5132_ = v_fst_4963_;
goto v___jp_5126_;
}
else
{
uint8_t v___x_5168_; 
lean_dec_ref_known(v_a_5164_, 0);
v___x_5168_ = lean_unbox(v_fst_4955_);
lean_dec(v_fst_4955_);
v___y_5127_ = v___y_5150_;
v___y_5128_ = v___x_5162_;
v_anyFailed_5129_ = v_anyUnlocated_4942_;
v_anyUnlocated_5130_ = v___x_5168_;
v_records_5131_ = v_fst_4959_;
v_codeQualityEntries_5132_ = v_fst_4963_;
goto v___jp_5126_;
}
}
case 1:
{
lean_object* v_records_5169_; uint8_t v_unlocated_5170_; lean_object* v___x_5171_; 
v_records_5169_ = lean_ctor_get(v_a_5164_, 0);
lean_inc_ref(v_records_5169_);
v_unlocated_5170_ = lean_ctor_get_uint8(v_a_5164_, sizeof(void*)*1);
lean_dec_ref_known(v_a_5164_, 1);
v___x_5171_ = l_Array_append___redArg(v_fst_4959_, v_records_5169_);
lean_dec_ref(v_records_5169_);
if (v_unlocated_5170_ == 0)
{
uint8_t v___x_5172_; uint8_t v___x_5173_; 
v___x_5172_ = lean_unbox(v_fst_4951_);
lean_dec(v_fst_4951_);
v___x_5173_ = lean_unbox(v_fst_4955_);
lean_dec(v_fst_4955_);
v___y_5127_ = v___y_5150_;
v___y_5128_ = v___x_5162_;
v_anyFailed_5129_ = v___x_5172_;
v_anyUnlocated_5130_ = v___x_5173_;
v_records_5131_ = v___x_5171_;
v_codeQualityEntries_5132_ = v_fst_4963_;
goto v___jp_5126_;
}
else
{
uint8_t v___x_5174_; 
lean_dec(v_fst_4955_);
v___x_5174_ = lean_unbox(v_fst_4951_);
lean_dec(v_fst_4951_);
v___y_5127_ = v___y_5150_;
v___y_5128_ = v___x_5162_;
v_anyFailed_5129_ = v___x_5174_;
v_anyUnlocated_5130_ = v_anyUnlocated_4942_;
v_records_5131_ = v___x_5171_;
v_codeQualityEntries_5132_ = v_fst_4963_;
goto v___jp_5126_;
}
}
default: 
{
lean_object* v_entries_5175_; lean_object* v___x_5176_; uint8_t v___x_5177_; uint8_t v___x_5178_; 
v_entries_5175_ = lean_ctor_get(v_a_5164_, 0);
lean_inc_ref(v_entries_5175_);
lean_dec_ref_known(v_a_5164_, 1);
v___x_5176_ = l_Array_append___redArg(v_fst_4963_, v_entries_5175_);
lean_dec_ref(v_entries_5175_);
v___x_5177_ = lean_unbox(v_fst_4951_);
lean_dec(v_fst_4951_);
v___x_5178_ = lean_unbox(v_fst_4955_);
lean_dec(v_fst_4955_);
v___y_5127_ = v___y_5150_;
v___y_5128_ = v___x_5162_;
v_anyFailed_5129_ = v___x_5177_;
v_anyUnlocated_5130_ = v___x_5178_;
v_records_5131_ = v_fst_4959_;
v_codeQualityEntries_5132_ = v___x_5176_;
goto v___jp_5126_;
}
}
}
else
{
lean_object* v_a_5179_; lean_object* v___x_5181_; uint8_t v_isShared_5182_; uint8_t v_isSharedCheck_5186_; 
lean_dec_ref(v___x_5162_);
lean_dec_ref(v___y_5150_);
lean_del_object(v___x_4970_);
lean_dec(v_snd_4968_);
lean_dec(v_fst_4967_);
lean_del_object(v___x_4965_);
lean_dec(v_fst_4963_);
lean_del_object(v___x_4961_);
lean_dec(v_fst_4959_);
lean_del_object(v___x_4957_);
lean_dec(v_fst_4955_);
lean_del_object(v___x_4953_);
lean_dec(v_fst_4951_);
lean_dec(v___x_4929_);
v_a_5179_ = lean_ctor_get(v___x_5163_, 0);
v_isSharedCheck_5186_ = !lean_is_exclusive(v___x_5163_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_5181_ = v___x_5163_;
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
else
{
lean_inc(v_a_5179_);
lean_dec(v___x_5163_);
v___x_5181_ = lean_box(0);
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
v_resetjp_5180_:
{
lean_object* v___x_5184_; 
if (v_isShared_5182_ == 0)
{
v___x_5184_ = v___x_5181_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_a_5179_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
return v___x_5184_;
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
v___jp_4935_:
{
size_t v___x_4937_; size_t v___x_4938_; 
v___x_4937_ = ((size_t)1ULL);
v___x_4938_ = lean_usize_add(v_i_4932_, v___x_4937_);
v_i_4932_ = v___x_4938_;
v_b_4933_ = v_a_4936_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object* v___x_5266_, lean_object* v_checkImports_5267_, lean_object* v_args_5268_, lean_object* v___x_5269_, lean_object* v_as_5270_, lean_object* v_sz_5271_, lean_object* v_i_5272_, lean_object* v_b_5273_, lean_object* v___y_5274_){
_start:
{
size_t v_sz_boxed_5275_; size_t v_i_boxed_5276_; lean_object* v_res_5277_; 
v_sz_boxed_5275_ = lean_unbox_usize(v_sz_5271_);
lean_dec(v_sz_5271_);
v_i_boxed_5276_ = lean_unbox_usize(v_i_5272_);
lean_dec(v_i_5272_);
v_res_5277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(v___x_5266_, v_checkImports_5267_, v_args_5268_, v___x_5269_, v_as_5270_, v_sz_boxed_5275_, v_i_boxed_5276_, v_b_5273_);
lean_dec_ref(v_as_5270_);
lean_dec_ref(v_args_5268_);
lean_dec_ref(v_checkImports_5267_);
lean_dec(v___x_5266_);
return v_res_5277_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__0(void){
_start:
{
lean_object* v___x_5278_; lean_object* v___x_5279_; 
v___x_5278_ = l_Lean_NameSet_empty;
v___x_5279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5279_, 0, v___x_5278_);
lean_ctor_set(v___x_5279_, 1, v___x_5278_);
return v___x_5279_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__1(void){
_start:
{
lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; 
v___x_5280_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__0, &l_Lake_BuiltinLint_run___closed__0_once, _init_l_Lake_BuiltinLint_run___closed__0);
v___x_5281_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_5282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5282_, 0, v___x_5281_);
lean_ctor_set(v___x_5282_, 1, v___x_5280_);
return v___x_5282_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__2(void){
_start:
{
lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
v___x_5283_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__1, &l_Lake_BuiltinLint_run___closed__1_once, _init_l_Lake_BuiltinLint_run___closed__1);
v___x_5284_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_5285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5285_, 0, v___x_5284_);
lean_ctor_set(v___x_5285_, 1, v___x_5283_);
return v___x_5285_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__1(void){
_start:
{
uint32_t v___x_5287_; lean_object* v___x_5288_; 
v___x_5287_ = 0;
v___x_5288_ = lean_box_uint32(v___x_5287_);
return v___x_5288_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__2(void){
_start:
{
uint32_t v___x_5289_; lean_object* v___x_5290_; 
v___x_5289_ = 1;
v___x_5290_ = lean_box_uint32(v___x_5289_);
return v___x_5290_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object* v_args_5291_){
_start:
{
lean_object* v_mods_5293_; uint8_t v_mode_5294_; lean_object* v_checks_5295_; lean_object* v_srcSearchPath_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; uint8_t v_anyFailed_5299_; 
v_mods_5293_ = lean_ctor_get(v_args_5291_, 1);
lean_inc_ref(v_mods_5293_);
v_mode_5294_ = lean_ctor_get_uint8(v_args_5291_, sizeof(void*)*4 + 1);
v_checks_5295_ = lean_ctor_get(v_args_5291_, 2);
v_srcSearchPath_5296_ = lean_ctor_get(v_args_5291_, 3);
v___x_5297_ = lean_array_get_size(v_mods_5293_);
v___x_5298_ = lean_unsigned_to_nat(0u);
v_anyFailed_5299_ = lean_nat_dec_eq(v___x_5297_, v___x_5298_);
if (v_anyFailed_5299_ == 0)
{
size_t v_sz_5300_; size_t v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v_checkImports_5304_; lean_object* v___x_5305_; 
v_sz_5300_ = lean_array_size(v_checks_5295_);
v___x_5301_ = ((size_t)0ULL);
v___x_5302_ = l_unsafeCast___redArg(v_checks_5295_);
v___x_5303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(v___x_5297_, v_sz_5300_, v___x_5301_, v___x_5302_);
v_checkImports_5304_ = l_unsafeCast___redArg(v___x_5303_);
lean_dec_ref(v___x_5303_);
v___x_5305_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_5305_) == 0)
{
lean_object* v_a_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; size_t v_sz_5313_; lean_object* v___x_5314_; 
v_a_5306_ = lean_ctor_get(v___x_5305_, 0);
lean_inc(v_a_5306_);
lean_dec_ref_known(v___x_5305_, 1);
lean_inc(v_srcSearchPath_5296_);
v___x_5307_ = l_List_appendTR___redArg(v_srcSearchPath_5296_, v_a_5306_);
v___x_5308_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__2, &l_Lake_BuiltinLint_run___closed__2_once, _init_l_Lake_BuiltinLint_run___closed__2);
v___x_5309_ = lean_box(v_anyFailed_5299_);
v___x_5310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5310_, 0, v___x_5309_);
lean_ctor_set(v___x_5310_, 1, v___x_5308_);
v___x_5311_ = lean_box(v_anyFailed_5299_);
v___x_5312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5312_, 0, v___x_5311_);
lean_ctor_set(v___x_5312_, 1, v___x_5310_);
v_sz_5313_ = lean_array_size(v_mods_5293_);
v___x_5314_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(v___x_5297_, v_checkImports_5304_, v_args_5291_, v___x_5307_, v_mods_5293_, v_sz_5313_, v___x_5301_, v___x_5312_);
lean_dec_ref(v_mods_5293_);
lean_dec_ref(v_args_5291_);
lean_dec(v_checkImports_5304_);
if (lean_obj_tag(v___x_5314_) == 0)
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5386_; 
v_a_5315_ = lean_ctor_get(v___x_5314_, 0);
v_isSharedCheck_5386_ = !lean_is_exclusive(v___x_5314_);
if (v_isSharedCheck_5386_ == 0)
{
v___x_5317_ = v___x_5314_;
v_isShared_5318_ = v_isSharedCheck_5386_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_a_5315_);
lean_dec(v___x_5314_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5386_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
switch(v_mode_5294_)
{
case 0:
{
lean_object* v_fst_5319_; uint8_t v___x_5320_; 
v_fst_5319_ = lean_ctor_get(v_a_5315_, 0);
lean_inc(v_fst_5319_);
lean_dec(v_a_5315_);
v___x_5320_ = lean_unbox(v_fst_5319_);
lean_dec(v_fst_5319_);
if (v___x_5320_ == 0)
{
lean_object* v___x_5321_; lean_object* v___x_5323_; 
v___x_5321_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5318_ == 0)
{
lean_ctor_set(v___x_5317_, 0, v___x_5321_);
v___x_5323_ = v___x_5317_;
goto v_reusejp_5322_;
}
else
{
lean_object* v_reuseFailAlloc_5324_; 
v_reuseFailAlloc_5324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5324_, 0, v___x_5321_);
v___x_5323_ = v_reuseFailAlloc_5324_;
goto v_reusejp_5322_;
}
v_reusejp_5322_:
{
return v___x_5323_;
}
}
else
{
lean_object* v___x_5325_; lean_object* v___x_5327_; 
v___x_5325_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5318_ == 0)
{
lean_ctor_set(v___x_5317_, 0, v___x_5325_);
v___x_5327_ = v___x_5317_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v___x_5325_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
case 1:
{
lean_object* v_snd_5329_; lean_object* v_snd_5330_; lean_object* v_fst_5331_; lean_object* v_fst_5332_; lean_object* v___x_5333_; 
v_snd_5329_ = lean_ctor_get(v_a_5315_, 1);
lean_inc(v_snd_5329_);
lean_del_object(v___x_5317_);
lean_dec(v_a_5315_);
v_snd_5330_ = lean_ctor_get(v_snd_5329_, 1);
lean_inc(v_snd_5330_);
v_fst_5331_ = lean_ctor_get(v_snd_5329_, 0);
lean_inc(v_fst_5331_);
lean_dec(v_snd_5329_);
v_fst_5332_ = lean_ctor_get(v_snd_5330_, 0);
lean_inc(v_fst_5332_);
lean_dec(v_snd_5330_);
v___x_5333_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(v_fst_5332_);
lean_dec(v_fst_5332_);
if (lean_obj_tag(v___x_5333_) == 0)
{
lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5346_; 
v_isSharedCheck_5346_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5346_ == 0)
{
lean_object* v_unused_5347_; 
v_unused_5347_ = lean_ctor_get(v___x_5333_, 0);
lean_dec(v_unused_5347_);
v___x_5335_ = v___x_5333_;
v_isShared_5336_ = v_isSharedCheck_5346_;
goto v_resetjp_5334_;
}
else
{
lean_dec(v___x_5333_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5346_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
uint8_t v___x_5337_; 
v___x_5337_ = lean_unbox(v_fst_5331_);
lean_dec(v_fst_5331_);
if (v___x_5337_ == 0)
{
lean_object* v___x_5338_; lean_object* v___x_5340_; 
v___x_5338_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 0, v___x_5338_);
v___x_5340_ = v___x_5335_;
goto v_reusejp_5339_;
}
else
{
lean_object* v_reuseFailAlloc_5341_; 
v_reuseFailAlloc_5341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5341_, 0, v___x_5338_);
v___x_5340_ = v_reuseFailAlloc_5341_;
goto v_reusejp_5339_;
}
v_reusejp_5339_:
{
return v___x_5340_;
}
}
else
{
lean_object* v___x_5342_; lean_object* v___x_5344_; 
v___x_5342_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 0, v___x_5342_);
v___x_5344_ = v___x_5335_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v___x_5342_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
}
}
else
{
lean_object* v_a_5348_; lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5355_; 
lean_dec(v_fst_5331_);
v_a_5348_ = lean_ctor_get(v___x_5333_, 0);
v_isSharedCheck_5355_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5355_ == 0)
{
v___x_5350_ = v___x_5333_;
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
else
{
lean_inc(v_a_5348_);
lean_dec(v___x_5333_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5353_; 
if (v_isShared_5351_ == 0)
{
v___x_5353_ = v___x_5350_;
goto v_reusejp_5352_;
}
else
{
lean_object* v_reuseFailAlloc_5354_; 
v_reuseFailAlloc_5354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5354_, 0, v_a_5348_);
v___x_5353_ = v_reuseFailAlloc_5354_;
goto v_reusejp_5352_;
}
v_reusejp_5352_:
{
return v___x_5353_;
}
}
}
}
default: 
{
lean_object* v_snd_5356_; lean_object* v_snd_5357_; lean_object* v_snd_5358_; lean_object* v_fst_5359_; lean_object* v_fst_5360_; lean_object* v___x_5361_; size_t v_sz_5362_; lean_object* v___x_5363_; 
v_snd_5356_ = lean_ctor_get(v_a_5315_, 1);
lean_del_object(v___x_5317_);
v_snd_5357_ = lean_ctor_get(v_snd_5356_, 1);
v_snd_5358_ = lean_ctor_get(v_snd_5357_, 1);
lean_inc(v_snd_5358_);
v_fst_5359_ = lean_ctor_get(v_a_5315_, 0);
lean_inc(v_fst_5359_);
lean_dec(v_a_5315_);
v_fst_5360_ = lean_ctor_get(v_snd_5358_, 0);
lean_inc(v_fst_5360_);
lean_dec(v_snd_5358_);
v___x_5361_ = lean_box(0);
v_sz_5362_ = lean_array_size(v_fst_5360_);
v___x_5363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v_fst_5360_, v_sz_5362_, v___x_5301_, v___x_5361_);
lean_dec(v_fst_5360_);
if (lean_obj_tag(v___x_5363_) == 0)
{
lean_object* v___x_5365_; uint8_t v_isShared_5366_; uint8_t v_isSharedCheck_5376_; 
v_isSharedCheck_5376_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5376_ == 0)
{
lean_object* v_unused_5377_; 
v_unused_5377_ = lean_ctor_get(v___x_5363_, 0);
lean_dec(v_unused_5377_);
v___x_5365_ = v___x_5363_;
v_isShared_5366_ = v_isSharedCheck_5376_;
goto v_resetjp_5364_;
}
else
{
lean_dec(v___x_5363_);
v___x_5365_ = lean_box(0);
v_isShared_5366_ = v_isSharedCheck_5376_;
goto v_resetjp_5364_;
}
v_resetjp_5364_:
{
uint8_t v___x_5367_; 
v___x_5367_ = lean_unbox(v_fst_5359_);
lean_dec(v_fst_5359_);
if (v___x_5367_ == 0)
{
lean_object* v___x_5368_; lean_object* v___x_5370_; 
v___x_5368_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5366_ == 0)
{
lean_ctor_set(v___x_5365_, 0, v___x_5368_);
v___x_5370_ = v___x_5365_;
goto v_reusejp_5369_;
}
else
{
lean_object* v_reuseFailAlloc_5371_; 
v_reuseFailAlloc_5371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5371_, 0, v___x_5368_);
v___x_5370_ = v_reuseFailAlloc_5371_;
goto v_reusejp_5369_;
}
v_reusejp_5369_:
{
return v___x_5370_;
}
}
else
{
lean_object* v___x_5372_; lean_object* v___x_5374_; 
v___x_5372_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5366_ == 0)
{
lean_ctor_set(v___x_5365_, 0, v___x_5372_);
v___x_5374_ = v___x_5365_;
goto v_reusejp_5373_;
}
else
{
lean_object* v_reuseFailAlloc_5375_; 
v_reuseFailAlloc_5375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5375_, 0, v___x_5372_);
v___x_5374_ = v_reuseFailAlloc_5375_;
goto v_reusejp_5373_;
}
v_reusejp_5373_:
{
return v___x_5374_;
}
}
}
}
else
{
lean_object* v_a_5378_; lean_object* v___x_5380_; uint8_t v_isShared_5381_; uint8_t v_isSharedCheck_5385_; 
lean_dec(v_fst_5359_);
v_a_5378_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5385_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5385_ == 0)
{
v___x_5380_ = v___x_5363_;
v_isShared_5381_ = v_isSharedCheck_5385_;
goto v_resetjp_5379_;
}
else
{
lean_inc(v_a_5378_);
lean_dec(v___x_5363_);
v___x_5380_ = lean_box(0);
v_isShared_5381_ = v_isSharedCheck_5385_;
goto v_resetjp_5379_;
}
v_resetjp_5379_:
{
lean_object* v___x_5383_; 
if (v_isShared_5381_ == 0)
{
v___x_5383_ = v___x_5380_;
goto v_reusejp_5382_;
}
else
{
lean_object* v_reuseFailAlloc_5384_; 
v_reuseFailAlloc_5384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5384_, 0, v_a_5378_);
v___x_5383_ = v_reuseFailAlloc_5384_;
goto v_reusejp_5382_;
}
v_reusejp_5382_:
{
return v___x_5383_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5394_; 
v_a_5387_ = lean_ctor_get(v___x_5314_, 0);
v_isSharedCheck_5394_ = !lean_is_exclusive(v___x_5314_);
if (v_isSharedCheck_5394_ == 0)
{
v___x_5389_ = v___x_5314_;
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_a_5387_);
lean_dec(v___x_5314_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v___x_5392_; 
if (v_isShared_5390_ == 0)
{
v___x_5392_ = v___x_5389_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v_a_5387_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
return v___x_5392_;
}
}
}
}
else
{
lean_object* v_a_5395_; lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5402_; 
lean_dec(v_checkImports_5304_);
lean_dec_ref(v_mods_5293_);
lean_dec_ref(v_args_5291_);
v_a_5395_ = lean_ctor_get(v___x_5305_, 0);
v_isSharedCheck_5402_ = !lean_is_exclusive(v___x_5305_);
if (v_isSharedCheck_5402_ == 0)
{
v___x_5397_ = v___x_5305_;
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
else
{
lean_inc(v_a_5395_);
lean_dec(v___x_5305_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
lean_object* v___x_5400_; 
if (v_isShared_5398_ == 0)
{
v___x_5400_ = v___x_5397_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v_a_5395_);
v___x_5400_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
return v___x_5400_;
}
}
}
}
else
{
lean_object* v___x_5403_; lean_object* v___x_5404_; 
lean_dec_ref(v_mods_5293_);
lean_dec_ref(v_args_5291_);
v___x_5403_ = ((lean_object*)(l_Lake_BuiltinLint_run___closed__3));
v___x_5404_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_5403_);
if (lean_obj_tag(v___x_5404_) == 0)
{
lean_object* v___x_5406_; uint8_t v_isShared_5407_; uint8_t v_isSharedCheck_5412_; 
v_isSharedCheck_5412_ = !lean_is_exclusive(v___x_5404_);
if (v_isSharedCheck_5412_ == 0)
{
lean_object* v_unused_5413_; 
v_unused_5413_ = lean_ctor_get(v___x_5404_, 0);
lean_dec(v_unused_5413_);
v___x_5406_ = v___x_5404_;
v_isShared_5407_ = v_isSharedCheck_5412_;
goto v_resetjp_5405_;
}
else
{
lean_dec(v___x_5404_);
v___x_5406_ = lean_box(0);
v_isShared_5407_ = v_isSharedCheck_5412_;
goto v_resetjp_5405_;
}
v_resetjp_5405_:
{
lean_object* v___x_5408_; lean_object* v___x_5410_; 
v___x_5408_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5407_ == 0)
{
lean_ctor_set(v___x_5406_, 0, v___x_5408_);
v___x_5410_ = v___x_5406_;
goto v_reusejp_5409_;
}
else
{
lean_object* v_reuseFailAlloc_5411_; 
v_reuseFailAlloc_5411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5411_, 0, v___x_5408_);
v___x_5410_ = v_reuseFailAlloc_5411_;
goto v_reusejp_5409_;
}
v_reusejp_5409_:
{
return v___x_5410_;
}
}
}
else
{
lean_object* v_a_5414_; lean_object* v___x_5416_; uint8_t v_isShared_5417_; uint8_t v_isSharedCheck_5421_; 
v_a_5414_ = lean_ctor_get(v___x_5404_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v___x_5404_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5416_ = v___x_5404_;
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
else
{
lean_inc(v_a_5414_);
lean_dec(v___x_5404_);
v___x_5416_ = lean_box(0);
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
v_resetjp_5415_:
{
lean_object* v___x_5419_; 
if (v_isShared_5417_ == 0)
{
v___x_5419_ = v___x_5416_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v_a_5414_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
return v___x_5419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object* v_args_5422_, lean_object* v_a_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Lake_BuiltinLint_run(v_args_5422_);
return v_res_5424_;
}
}
lean_object* runtime_initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_CodeQuality(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_CodeQuality(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_BuiltinLint_instInhabitedExceptionRecord_default = _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default();
lean_mark_persistent(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default);
l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord = _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord();
lean_mark_persistent(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord);
l_Lake_BuiltinLint_run___boxed__const__1 = _init_l_Lake_BuiltinLint_run___boxed__const__1();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__1);
l_Lake_BuiltinLint_run___boxed__const__2 = _init_l_Lake_BuiltinLint_run___boxed__const__2();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin);
lean_object* initialize_Lean_Linter_CodeQuality(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_CodeQuality(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_BuiltinLint(builtin);
}
#ifdef __cplusplus
}
#endif

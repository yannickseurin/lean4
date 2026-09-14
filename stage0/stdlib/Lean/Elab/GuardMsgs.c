// Lean compiler output
// Module: Lean.Elab.GuardMsgs
// Imports: public import Lean.Elab.Notation public import Lean.Server.CodeActions.Attr
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Lean_Message_isTrace(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_take___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_split___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Message_isTrace___boxed(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_FileWorker_EditableDocument_versionedIdentifier(lean_object*);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_CodeAction_insertBuiltin(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Diff_Action_linePrefix(uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object*);
lean_object* l_Lean_MessageLog_toList(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_intercalate(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "guard_msgs"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "diff"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(149, 116, 183, 228, 179, 151, 45, 148)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(183, 103, 150, 225, 110, 223, 115, 232)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "When true, show a diff between expected and actual messages if they don't match. "};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__3_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__0_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(172, 38, 186, 54, 247, 153, 194, 0)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__1_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(202, 100, 105, 248, 32, 123, 59, 131)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_guard__msgs_diff;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@ "};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "..."};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "info:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "warning:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "error:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "trace:"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10_value;
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__11 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "guardMsgsFilterAction"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 4, 244, 232, 164, 150, 223, 103)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "check"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 15, 254, 184, 37, 99, 251, 84)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "drop"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__5_value),LEAN_SCALAR_PTR_LITERAL(134, 195, 191, 35, 155, 125, 225, 61)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pass"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__7_value),LEAN_SCALAR_PTR_LITERAL(130, 109, 187, 122, 38, 7, 169, 2)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "guardMsgsFilterSeverity"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 215, 239, 32, 31, 172, 250, 25)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 247, 236, 102, 6, 79, 161, 127)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(177, 63, 183, 36, 16, 73, 158, 237)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 92, 21, 183, 34, 222, 2, 74)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(127, 232, 111, 183, 142, 221, 154, 104)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(125, 222, 92, 133, 213, 211, 83, 105)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11_value;
static const lean_closure_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Message_isTrace___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "guardMsgsSpecElt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 108, 205, 157, 13, 129, 29, 60)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "guardMsgsFilter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(20, 187, 182, 29, 56, 60, 165, 253)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "guardMsgsWhitespace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(8, 106, 1, 198, 8, 55, 77, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "guardMsgsOrdering"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 53, 236, 42, 85, 133, 64, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "guardMsgsPositions"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(41, 241, 109, 166, 211, 83, 245, 15)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "guardMsgsSubstring"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(23, 68, 193, 70, 193, 109, 117, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(97, 134, 219, 90, 90, 45, 96, 32)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(234, 149, 90, 50, 108, 230, 18, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "guardMsgsPositionsArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(72, 235, 102, 225, 139, 166, 36, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "guardMsgsOrderingArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(126, 165, 201, 178, 250, 91, 17, 12)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(255, 187, 8, 190, 181, 123, 198, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sorted"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__22_value),LEAN_SCALAR_PTR_LITERAL(242, 25, 158, 210, 170, 109, 109, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "guardMsgsWhitespaceArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__24_value),LEAN_SCALAR_PTR_LITERAL(133, 245, 235, 68, 150, 72, 242, 178)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "normalized"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(204, 250, 226, 34, 169, 84, 107, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(205, 87, 76, 243, 164, 59, 221, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__3_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "guardMsgsSpec"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__6_value),LEAN_SCALAR_PTR_LITERAL(172, 228, 141, 39, 164, 16, 16, 29)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7_value;
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "GuardMsgs"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "GuardMsgFailure"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 139, 31, 76, 158, 95, 94, 217)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__3_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(83, 21, 237, 121, 74, 154, 128, 4)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__5_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__5_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_instTypeNameGuardMsgFailure;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\t\n"};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__5;
static const lean_ctor_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⏎\n"};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " \n"};
static const lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 3, .m_data = "⏎⏎\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "\t⏎\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⏎\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_removeTrailingWhitespaceMarker(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1;
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___boxed(lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14_spec__18(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0 = (const lean_object*)&l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0;
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0 = (const lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1 = (const lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__0_value),((lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__1_value)}};
static const lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2 = (const lean_object*)&l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "guardMsgsCmd"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(80, 121, 62, 112, 73, 11, 102, 99)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 65, .m_data = "❌️ Docstring on `#guard_msgs` does not match generated message:\n\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "---\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_0),((lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_1),((lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__6_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabGuardMsgs"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 139, 31, 76, 158, 95, 94, 217)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 103, 231, 132, 249, 141, 167, 146)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(137) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(168) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__0_value),((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(137) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(137) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__3_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__4_value),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/--\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n-/\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/-- "};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -/\n"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Update #guard_msgs with generated message"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "quickfix"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*10 + 0, .m_other = 10, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4_value;
static const lean_array_object l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355_ = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355____boxed(lean_object*);
static const lean_string_object l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PANIC"};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0_value;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__4;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__5;
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "guardPanicCmd"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 189, 140, 114, 132, 102, 231, 43)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected a PANIC but none was found"};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabGuardPanic"};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__0_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__1_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__2_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 139, 31, 76, 158, 95, 94, 217)}};
static const lean_ctor_object l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 172, 183, 87, 120, 30, 187, 134)}};
static const lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__2_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__4_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__6_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_();
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(lean_object* v_line_59_, lean_object* v_pos_60_){
_start:
{
lean_object* v_line_61_; lean_object* v_column_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_line_61_ = lean_ctor_get(v_pos_60_, 0);
lean_inc(v_line_61_);
v_column_62_ = lean_ctor_get(v_pos_60_, 1);
lean_inc(v_column_62_);
lean_dec_ref(v_pos_60_);
v___x_63_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__0));
v___x_64_ = lean_nat_sub(v_line_61_, v_line_59_);
lean_dec(v_line_61_);
v___x_65_ = l_Nat_reprFast(v___x_64_);
v___x_66_ = lean_string_append(v___x_63_, v___x_65_);
lean_dec_ref(v___x_65_);
v___x_67_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___closed__1));
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
v___x_69_ = l_Nat_reprFast(v_column_62_);
v___x_70_ = lean_string_append(v___x_68_, v___x_69_);
lean_dec_ref(v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0___boxed(lean_object* v_line_71_, lean_object* v_pos_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(v_line_71_, v_pos_72_);
lean_dec(v_line_71_);
return v_res_73_;
}
}
static lean_object* _init_l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_84_ = lean_string_utf8_byte_size(v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(lean_object* v_msg_87_, lean_object* v_reportPos_x3f_88_){
_start:
{
lean_object* v___y_91_; lean_object* v___y_95_; uint32_t v___y_96_; lean_object* v_str_100_; lean_object* v_pos_112_; lean_object* v_endPos_113_; uint8_t v_severity_114_; lean_object* v_caption_115_; lean_object* v_data_116_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v_str_131_; lean_object* v_str_143_; lean_object* v___y_154_; lean_object* v_str_158_; lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v_pos_112_ = lean_ctor_get(v_msg_87_, 1);
lean_inc_ref(v_pos_112_);
v_endPos_113_ = lean_ctor_get(v_msg_87_, 2);
lean_inc(v_endPos_113_);
v_severity_114_ = lean_ctor_get_uint8(v_msg_87_, sizeof(void*)*5 + 1);
v_caption_115_ = lean_ctor_get(v_msg_87_, 3);
v_data_116_ = lean_ctor_get(v_msg_87_, 4);
lean_inc(v_data_116_);
v___x_165_ = l_Lean_MessageData_toString(v_data_116_);
v___x_166_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_167_ = lean_string_dec_eq(v_caption_115_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__11));
lean_inc_ref(v_caption_115_);
v___x_169_ = lean_string_append(v_caption_115_, v___x_168_);
v___x_170_ = lean_string_append(v___x_169_, v___x_165_);
lean_dec_ref(v___x_165_);
v_str_158_ = v___x_170_;
goto v___jp_157_;
}
else
{
v_str_158_ = v___x_165_;
goto v___jp_157_;
}
v___jp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_93_ = lean_string_append(v___y_91_, v___x_92_);
return v___x_93_;
}
v___jp_94_:
{
uint32_t v___x_97_; uint8_t v___x_98_; 
v___x_97_ = 10;
v___x_98_ = lean_uint32_dec_eq(v___y_96_, v___x_97_);
if (v___x_98_ == 0)
{
v___y_91_ = v___y_95_;
goto v___jp_90_;
}
else
{
return v___y_95_;
}
}
v___jp_99_:
{
lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_101_ = lean_string_utf8_byte_size(v_str_100_);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_nat_dec_eq(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc_ref(v_str_100_);
v___x_104_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_104_, 0, v_str_100_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
lean_ctor_set(v___x_104_, 2, v___x_101_);
v___x_105_ = l_String_Slice_Pos_prev_x3f(v___x_104_, v___x_101_);
if (lean_obj_tag(v___x_105_) == 0)
{
uint32_t v___x_106_; 
lean_dec_ref_known(v___x_104_, 3);
v___x_106_ = 65;
v___y_95_ = v_str_100_;
v___y_96_ = v___x_106_;
goto v___jp_94_;
}
else
{
lean_object* v_val_107_; lean_object* v___x_108_; 
v_val_107_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_105_, 1);
v___x_108_ = l_String_Slice_Pos_get_x3f(v___x_104_, v_val_107_);
lean_dec(v_val_107_);
lean_dec_ref_known(v___x_104_, 3);
if (lean_obj_tag(v___x_108_) == 0)
{
uint32_t v___x_109_; 
v___x_109_ = 65;
v___y_95_ = v_str_100_;
v___y_96_ = v___x_109_;
goto v___jp_94_;
}
else
{
lean_object* v_val_110_; uint32_t v___x_111_; 
v_val_110_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_110_);
lean_dec_ref_known(v___x_108_, 1);
v___x_111_ = lean_unbox_uint32(v_val_110_);
lean_dec(v_val_110_);
v___y_95_ = v_str_100_;
v___y_96_ = v___x_111_;
goto v___jp_94_;
}
}
}
else
{
v___y_91_ = v_str_100_;
goto v___jp_90_;
}
}
v___jp_117_:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_121_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__1));
v___x_122_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(v___y_119_, v_pos_112_);
v___x_123_ = lean_string_append(v___x_121_, v___x_122_);
lean_dec_ref(v___x_122_);
v___x_124_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__2));
v___x_125_ = lean_string_append(v___x_123_, v___x_124_);
v___x_126_ = lean_string_append(v___x_125_, v___y_120_);
lean_dec_ref(v___y_120_);
v___x_127_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_128_ = lean_string_append(v___x_126_, v___x_127_);
v___x_129_ = lean_string_append(v___x_128_, v___y_118_);
lean_dec_ref(v___y_118_);
v_str_100_ = v___x_129_;
goto v___jp_99_;
}
v___jp_130_:
{
if (lean_obj_tag(v_reportPos_x3f_88_) == 1)
{
if (lean_obj_tag(v_endPos_113_) == 0)
{
lean_object* v_val_132_; lean_object* v___x_133_; 
v_val_132_ = lean_ctor_get(v_reportPos_x3f_88_, 0);
v___x_133_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__3));
v___y_118_ = v_str_131_;
v___y_119_ = v_val_132_;
v___y_120_ = v___x_133_;
goto v___jp_117_;
}
else
{
lean_object* v_val_134_; lean_object* v_val_135_; lean_object* v_line_136_; lean_object* v_column_137_; lean_object* v_line_138_; uint8_t v___x_139_; 
v_val_134_ = lean_ctor_get(v_endPos_113_, 0);
lean_inc(v_val_134_);
lean_dec_ref_known(v_endPos_113_, 1);
v_val_135_ = lean_ctor_get(v_reportPos_x3f_88_, 0);
v_line_136_ = lean_ctor_get(v_val_134_, 0);
v_column_137_ = lean_ctor_get(v_val_134_, 1);
v_line_138_ = lean_ctor_get(v_pos_112_, 0);
v___x_139_ = lean_nat_dec_eq(v_line_136_, v_line_138_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; 
v___x_140_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___lam__0(v_val_135_, v_val_134_);
v___y_118_ = v_str_131_;
v___y_119_ = v_val_135_;
v___y_120_ = v___x_140_;
goto v___jp_117_;
}
else
{
lean_object* v___x_141_; 
lean_inc(v_column_137_);
lean_dec(v_val_134_);
v___x_141_ = l_Nat_reprFast(v_column_137_);
v___y_118_ = v_str_131_;
v___y_119_ = v_val_135_;
v___y_120_ = v___x_141_;
goto v___jp_117_;
}
}
}
else
{
lean_dec(v_endPos_113_);
lean_dec_ref(v_pos_112_);
v_str_100_ = v_str_131_;
goto v___jp_99_;
}
}
v___jp_142_:
{
uint8_t v___x_144_; 
v___x_144_ = l_Lean_Message_isTrace(v_msg_87_);
lean_dec_ref(v_msg_87_);
if (v___x_144_ == 0)
{
switch(v_severity_114_)
{
case 0:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__4));
v___x_146_ = lean_string_append(v___x_145_, v_str_143_);
lean_dec_ref(v_str_143_);
v_str_131_ = v___x_146_;
goto v___jp_130_;
}
case 1:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__5));
v___x_148_ = lean_string_append(v___x_147_, v_str_143_);
lean_dec_ref(v_str_143_);
v_str_131_ = v___x_148_;
goto v___jp_130_;
}
default: 
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__6));
v___x_150_ = lean_string_append(v___x_149_, v_str_143_);
lean_dec_ref(v_str_143_);
v_str_131_ = v___x_150_;
goto v___jp_130_;
}
}
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__7));
v___x_152_ = lean_string_append(v___x_151_, v_str_143_);
lean_dec_ref(v_str_143_);
v_str_131_ = v___x_152_;
goto v___jp_130_;
}
}
v___jp_153_:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_156_ = lean_string_append(v___x_155_, v___y_154_);
lean_dec_ref(v___y_154_);
v_str_143_ = v___x_156_;
goto v___jp_142_;
}
v___jp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_160_ = lean_string_utf8_byte_size(v_str_158_);
v___x_161_ = lean_obj_once(&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9, &l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9_once, _init_l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9);
v___x_162_ = lean_nat_dec_le(v___x_161_, v___x_160_);
if (v___x_162_ == 0)
{
v___y_154_ = v_str_158_;
goto v___jp_153_;
}
else
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_string_memcmp(v_str_158_, v___x_159_, v___x_163_, v___x_163_, v___x_161_);
if (v___x_164_ == 0)
{
v___y_154_ = v_str_158_;
goto v___jp_153_;
}
else
{
v_str_143_ = v_str_158_;
goto v___jp_142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___boxed(lean_object* v_msg_171_, lean_object* v_reportPos_x3f_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(v_msg_171_, v_reportPos_x3f_172_);
lean_dec(v_reportPos_x3f_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx(uint8_t v_x_175_){
_start:
{
switch(v_x_175_)
{
case 0:
{
lean_object* v___x_176_; 
v___x_176_ = lean_unsigned_to_nat(0u);
return v___x_176_;
}
case 1:
{
lean_object* v___x_177_; 
v___x_177_ = lean_unsigned_to_nat(1u);
return v___x_177_;
}
default: 
{
lean_object* v___x_178_; 
v___x_178_ = lean_unsigned_to_nat(2u);
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx___boxed(lean_object* v_x_179_){
_start:
{
uint8_t v_x_boxed_180_; lean_object* v_res_181_; 
v_x_boxed_180_ = lean_unbox(v_x_179_);
v_res_181_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorIdx(v_x_boxed_180_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg(lean_object* v_k_182_){
_start:
{
lean_inc(v_k_182_);
return v_k_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg___boxed(lean_object* v_k_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___redArg(v_k_183_);
lean_dec(v_k_183_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim(lean_object* v_motive_185_, lean_object* v_ctorIdx_186_, uint8_t v_t_187_, lean_object* v_h_188_, lean_object* v_k_189_){
_start:
{
lean_inc(v_k_189_);
return v_k_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim___boxed(lean_object* v_motive_190_, lean_object* v_ctorIdx_191_, lean_object* v_t_192_, lean_object* v_h_193_, lean_object* v_k_194_){
_start:
{
uint8_t v_t_boxed_195_; lean_object* v_res_196_; 
v_t_boxed_195_ = lean_unbox(v_t_192_);
v_res_196_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_ctorElim(v_motive_190_, v_ctorIdx_191_, v_t_boxed_195_, v_h_193_, v_k_194_);
lean_dec(v_k_194_);
lean_dec(v_ctorIdx_191_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg(lean_object* v_check_197_){
_start:
{
lean_inc(v_check_197_);
return v_check_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg___boxed(lean_object* v_check_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___redArg(v_check_198_);
lean_dec(v_check_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim(lean_object* v_motive_200_, uint8_t v_t_201_, lean_object* v_h_202_, lean_object* v_check_203_){
_start:
{
lean_inc(v_check_203_);
return v_check_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim___boxed(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_check_207_){
_start:
{
uint8_t v_t_boxed_208_; lean_object* v_res_209_; 
v_t_boxed_208_ = lean_unbox(v_t_205_);
v_res_209_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_check_elim(v_motive_204_, v_t_boxed_208_, v_h_206_, v_check_207_);
lean_dec(v_check_207_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg(lean_object* v_drop_210_){
_start:
{
lean_inc(v_drop_210_);
return v_drop_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg___boxed(lean_object* v_drop_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___redArg(v_drop_211_);
lean_dec(v_drop_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim(lean_object* v_motive_213_, uint8_t v_t_214_, lean_object* v_h_215_, lean_object* v_drop_216_){
_start:
{
lean_inc(v_drop_216_);
return v_drop_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim___boxed(lean_object* v_motive_217_, lean_object* v_t_218_, lean_object* v_h_219_, lean_object* v_drop_220_){
_start:
{
uint8_t v_t_boxed_221_; lean_object* v_res_222_; 
v_t_boxed_221_ = lean_unbox(v_t_218_);
v_res_222_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_drop_elim(v_motive_217_, v_t_boxed_221_, v_h_219_, v_drop_220_);
lean_dec(v_drop_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg(lean_object* v_pass_223_){
_start:
{
lean_inc(v_pass_223_);
return v_pass_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg___boxed(lean_object* v_pass_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___redArg(v_pass_224_);
lean_dec(v_pass_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim(lean_object* v_motive_226_, uint8_t v_t_227_, lean_object* v_h_228_, lean_object* v_pass_229_){
_start:
{
lean_inc(v_pass_229_);
return v_pass_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim___boxed(lean_object* v_motive_230_, lean_object* v_t_231_, lean_object* v_h_232_, lean_object* v_pass_233_){
_start:
{
uint8_t v_t_boxed_234_; lean_object* v_res_235_; 
v_t_boxed_234_ = lean_unbox(v_t_231_);
v_res_235_ = l_Lean_Elab_Tactic_GuardMsgs_FilterSpec_pass_elim(v_motive_230_, v_t_boxed_234_, v_h_232_, v_pass_233_);
lean_dec(v_pass_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx(uint8_t v_x_236_){
_start:
{
switch(v_x_236_)
{
case 0:
{
lean_object* v___x_237_; 
v___x_237_ = lean_unsigned_to_nat(0u);
return v___x_237_;
}
case 1:
{
lean_object* v___x_238_; 
v___x_238_ = lean_unsigned_to_nat(1u);
return v___x_238_;
}
default: 
{
lean_object* v___x_239_; 
v___x_239_ = lean_unsigned_to_nat(2u);
return v___x_239_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx___boxed(lean_object* v_x_240_){
_start:
{
uint8_t v_x_boxed_241_; lean_object* v_res_242_; 
v_x_boxed_241_ = lean_unbox(v_x_240_);
v_res_242_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorIdx(v_x_boxed_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg(lean_object* v_k_243_){
_start:
{
lean_inc(v_k_243_);
return v_k_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg___boxed(lean_object* v_k_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___redArg(v_k_244_);
lean_dec(v_k_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim(lean_object* v_motive_246_, lean_object* v_ctorIdx_247_, uint8_t v_t_248_, lean_object* v_h_249_, lean_object* v_k_250_){
_start:
{
lean_inc(v_k_250_);
return v_k_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim___boxed(lean_object* v_motive_251_, lean_object* v_ctorIdx_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_k_255_){
_start:
{
uint8_t v_t_boxed_256_; lean_object* v_res_257_; 
v_t_boxed_256_ = lean_unbox(v_t_253_);
v_res_257_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_ctorElim(v_motive_251_, v_ctorIdx_252_, v_t_boxed_256_, v_h_254_, v_k_255_);
lean_dec(v_k_255_);
lean_dec(v_ctorIdx_252_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg(lean_object* v_exact_258_){
_start:
{
lean_inc(v_exact_258_);
return v_exact_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg___boxed(lean_object* v_exact_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___redArg(v_exact_259_);
lean_dec(v_exact_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim(lean_object* v_motive_261_, uint8_t v_t_262_, lean_object* v_h_263_, lean_object* v_exact_264_){
_start:
{
lean_inc(v_exact_264_);
return v_exact_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim___boxed(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_exact_268_){
_start:
{
uint8_t v_t_boxed_269_; lean_object* v_res_270_; 
v_t_boxed_269_ = lean_unbox(v_t_266_);
v_res_270_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_exact_elim(v_motive_265_, v_t_boxed_269_, v_h_267_, v_exact_268_);
lean_dec(v_exact_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg(lean_object* v_normalized_271_){
_start:
{
lean_inc(v_normalized_271_);
return v_normalized_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg___boxed(lean_object* v_normalized_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___redArg(v_normalized_272_);
lean_dec(v_normalized_272_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim(lean_object* v_motive_274_, uint8_t v_t_275_, lean_object* v_h_276_, lean_object* v_normalized_277_){
_start:
{
lean_inc(v_normalized_277_);
return v_normalized_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim___boxed(lean_object* v_motive_278_, lean_object* v_t_279_, lean_object* v_h_280_, lean_object* v_normalized_281_){
_start:
{
uint8_t v_t_boxed_282_; lean_object* v_res_283_; 
v_t_boxed_282_ = lean_unbox(v_t_279_);
v_res_283_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_normalized_elim(v_motive_278_, v_t_boxed_282_, v_h_280_, v_normalized_281_);
lean_dec(v_normalized_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg(lean_object* v_lax_284_){
_start:
{
lean_inc(v_lax_284_);
return v_lax_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg___boxed(lean_object* v_lax_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___redArg(v_lax_285_);
lean_dec(v_lax_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim(lean_object* v_motive_287_, uint8_t v_t_288_, lean_object* v_h_289_, lean_object* v_lax_290_){
_start:
{
lean_inc(v_lax_290_);
return v_lax_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim___boxed(lean_object* v_motive_291_, lean_object* v_t_292_, lean_object* v_h_293_, lean_object* v_lax_294_){
_start:
{
uint8_t v_t_boxed_295_; lean_object* v_res_296_; 
v_t_boxed_295_ = lean_unbox(v_t_292_);
v_res_296_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_lax_elim(v_motive_291_, v_t_boxed_295_, v_h_293_, v_lax_294_);
lean_dec(v_lax_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx(uint8_t v_x_297_){
_start:
{
if (v_x_297_ == 0)
{
lean_object* v___x_298_; 
v___x_298_ = lean_unsigned_to_nat(0u);
return v___x_298_;
}
else
{
lean_object* v___x_299_; 
v___x_299_ = lean_unsigned_to_nat(1u);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx___boxed(lean_object* v_x_300_){
_start:
{
uint8_t v_x_boxed_301_; lean_object* v_res_302_; 
v_x_boxed_301_ = lean_unbox(v_x_300_);
v_res_302_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorIdx(v_x_boxed_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg(lean_object* v_k_303_){
_start:
{
lean_inc(v_k_303_);
return v_k_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg___boxed(lean_object* v_k_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___redArg(v_k_304_);
lean_dec(v_k_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim(lean_object* v_motive_306_, lean_object* v_ctorIdx_307_, uint8_t v_t_308_, lean_object* v_h_309_, lean_object* v_k_310_){
_start:
{
lean_inc(v_k_310_);
return v_k_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim___boxed(lean_object* v_motive_311_, lean_object* v_ctorIdx_312_, lean_object* v_t_313_, lean_object* v_h_314_, lean_object* v_k_315_){
_start:
{
uint8_t v_t_boxed_316_; lean_object* v_res_317_; 
v_t_boxed_316_ = lean_unbox(v_t_313_);
v_res_317_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_ctorElim(v_motive_311_, v_ctorIdx_312_, v_t_boxed_316_, v_h_314_, v_k_315_);
lean_dec(v_k_315_);
lean_dec(v_ctorIdx_312_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg(lean_object* v_exact_318_){
_start:
{
lean_inc(v_exact_318_);
return v_exact_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg___boxed(lean_object* v_exact_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___redArg(v_exact_319_);
lean_dec(v_exact_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim(lean_object* v_motive_321_, uint8_t v_t_322_, lean_object* v_h_323_, lean_object* v_exact_324_){
_start:
{
lean_inc(v_exact_324_);
return v_exact_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim___boxed(lean_object* v_motive_325_, lean_object* v_t_326_, lean_object* v_h_327_, lean_object* v_exact_328_){
_start:
{
uint8_t v_t_boxed_329_; lean_object* v_res_330_; 
v_t_boxed_329_ = lean_unbox(v_t_326_);
v_res_330_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_exact_elim(v_motive_325_, v_t_boxed_329_, v_h_327_, v_exact_328_);
lean_dec(v_exact_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg(lean_object* v_sorted_331_){
_start:
{
lean_inc(v_sorted_331_);
return v_sorted_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg___boxed(lean_object* v_sorted_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___redArg(v_sorted_332_);
lean_dec(v_sorted_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim(lean_object* v_motive_334_, uint8_t v_t_335_, lean_object* v_h_336_, lean_object* v_sorted_337_){
_start:
{
lean_inc(v_sorted_337_);
return v_sorted_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim___boxed(lean_object* v_motive_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_sorted_341_){
_start:
{
uint8_t v_t_boxed_342_; lean_object* v_res_343_; 
v_t_boxed_342_ = lean_unbox(v_t_339_);
v_res_343_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_sorted_elim(v_motive_338_, v_t_boxed_342_, v_h_340_, v_sorted_341_);
lean_dec(v_sorted_341_);
return v_res_343_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_box(0);
v___x_345_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg(){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___closed__0);
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg___boxed(lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0(lean_object* v_00_u03b1_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___boxed(lean_object* v_00_u03b1_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0(v_00_u03b1_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(lean_object* v_action_x3f_379_, lean_object* v_a_380_, lean_object* v_a_381_){
_start:
{
if (lean_obj_tag(v_action_x3f_379_) == 1)
{
lean_object* v_val_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_414_; 
v_val_383_ = lean_ctor_get(v_action_x3f_379_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v_action_x3f_379_);
if (v_isSharedCheck_414_ == 0)
{
v___x_385_ = v_action_x3f_379_;
v_isShared_386_ = v_isSharedCheck_414_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_val_383_);
lean_dec(v_action_x3f_379_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_414_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__1));
lean_inc(v_val_383_);
v___x_388_ = l_Lean_Syntax_isOfKind(v_val_383_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; 
lean_del_object(v___x_385_);
lean_dec(v_val_383_);
v___x_389_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_389_;
}
else
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = l_Lean_Syntax_getArg(v_val_383_, v___x_390_);
lean_dec(v_val_383_);
v___x_392_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__4));
lean_inc(v___x_391_);
v___x_393_ = l_Lean_Syntax_isOfKind(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__6));
lean_inc(v___x_391_);
v___x_395_ = l_Lean_Syntax_isOfKind(v___x_391_, v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___closed__8));
v___x_397_ = l_Lean_Syntax_isOfKind(v___x_391_, v___x_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; 
lean_del_object(v___x_385_);
v___x_398_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_398_;
}
else
{
uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_399_ = 2;
v___x_400_ = lean_box(v___x_399_);
if (v_isShared_386_ == 0)
{
lean_ctor_set_tag(v___x_385_, 0);
lean_ctor_set(v___x_385_, 0, v___x_400_);
v___x_402_ = v___x_385_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
else
{
uint8_t v___x_404_; lean_object* v___x_405_; lean_object* v___x_407_; 
lean_dec(v___x_391_);
v___x_404_ = 1;
v___x_405_ = lean_box(v___x_404_);
if (v_isShared_386_ == 0)
{
lean_ctor_set_tag(v___x_385_, 0);
lean_ctor_set(v___x_385_, 0, v___x_405_);
v___x_407_ = v___x_385_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
else
{
uint8_t v___x_409_; lean_object* v___x_410_; lean_object* v___x_412_; 
lean_dec(v___x_391_);
v___x_409_ = 0;
v___x_410_ = lean_box(v___x_409_);
if (v_isShared_386_ == 0)
{
lean_ctor_set_tag(v___x_385_, 0);
lean_ctor_set(v___x_385_, 0, v___x_410_);
v___x_412_ = v___x_385_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
}
else
{
uint8_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec(v_action_x3f_379_);
v___x_415_ = 0;
v___x_416_ = lean_box(v___x_415_);
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction___boxed(lean_object* v_action_x3f_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(v_action_x3f_418_, v_a_419_, v_a_420_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
return v_res_422_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0(uint8_t v___x_423_, lean_object* v_x_424_){
_start:
{
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0___boxed(lean_object* v___x_425_, lean_object* v_x_426_){
_start:
{
uint8_t v___x_777__boxed_427_; uint8_t v_res_428_; lean_object* v_r_429_; 
v___x_777__boxed_427_ = lean_unbox(v___x_425_);
v_res_428_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0(v___x_777__boxed_427_, v_x_426_);
lean_dec_ref(v_x_426_);
v_r_429_ = lean_box(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1(uint8_t v___x_430_, uint8_t v___x_431_, lean_object* v_msg_432_){
_start:
{
uint8_t v___y_434_; uint8_t v___x_438_; 
v___x_438_ = l_Lean_Message_isTrace(v_msg_432_);
if (v___x_438_ == 0)
{
v___y_434_ = v___x_431_;
goto v___jp_433_;
}
else
{
v___y_434_ = v___x_430_;
goto v___jp_433_;
}
v___jp_433_:
{
if (v___y_434_ == 0)
{
return v___x_430_;
}
else
{
uint8_t v_severity_435_; uint8_t v___x_436_; uint8_t v___x_437_; 
v_severity_435_ = lean_ctor_get_uint8(v_msg_432_, sizeof(void*)*5 + 1);
v___x_436_ = 2;
v___x_437_ = l_Lean_instBEqMessageSeverity_beq(v_severity_435_, v___x_436_);
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1___boxed(lean_object* v___x_439_, lean_object* v___x_440_, lean_object* v_msg_441_){
_start:
{
uint8_t v___x_783__boxed_442_; uint8_t v___x_784__boxed_443_; uint8_t v_res_444_; lean_object* v_r_445_; 
v___x_783__boxed_442_ = lean_unbox(v___x_439_);
v___x_784__boxed_443_ = lean_unbox(v___x_440_);
v_res_444_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1(v___x_783__boxed_442_, v___x_784__boxed_443_, v_msg_441_);
lean_dec_ref(v_msg_441_);
v_r_445_ = lean_box(v_res_444_);
return v_r_445_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2(uint8_t v___x_446_, uint8_t v___x_447_, lean_object* v_msg_448_){
_start:
{
uint8_t v___y_450_; uint8_t v___x_454_; 
v___x_454_ = l_Lean_Message_isTrace(v_msg_448_);
if (v___x_454_ == 0)
{
v___y_450_ = v___x_447_;
goto v___jp_449_;
}
else
{
v___y_450_ = v___x_446_;
goto v___jp_449_;
}
v___jp_449_:
{
if (v___y_450_ == 0)
{
return v___x_446_;
}
else
{
uint8_t v_severity_451_; uint8_t v___x_452_; uint8_t v___x_453_; 
v_severity_451_ = lean_ctor_get_uint8(v_msg_448_, sizeof(void*)*5 + 1);
v___x_452_ = 1;
v___x_453_ = l_Lean_instBEqMessageSeverity_beq(v_severity_451_, v___x_452_);
return v___x_453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2___boxed(lean_object* v___x_455_, lean_object* v___x_456_, lean_object* v_msg_457_){
_start:
{
uint8_t v___x_799__boxed_458_; uint8_t v___x_800__boxed_459_; uint8_t v_res_460_; lean_object* v_r_461_; 
v___x_799__boxed_458_ = lean_unbox(v___x_455_);
v___x_800__boxed_459_ = lean_unbox(v___x_456_);
v_res_460_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2(v___x_799__boxed_458_, v___x_800__boxed_459_, v_msg_457_);
lean_dec_ref(v_msg_457_);
v_r_461_ = lean_box(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3(uint8_t v___x_462_, uint8_t v___x_463_, lean_object* v_msg_464_){
_start:
{
uint8_t v___y_466_; uint8_t v___x_470_; 
v___x_470_ = l_Lean_Message_isTrace(v_msg_464_);
if (v___x_470_ == 0)
{
v___y_466_ = v___x_463_;
goto v___jp_465_;
}
else
{
v___y_466_ = v___x_462_;
goto v___jp_465_;
}
v___jp_465_:
{
if (v___y_466_ == 0)
{
return v___x_462_;
}
else
{
uint8_t v_severity_467_; uint8_t v___x_468_; uint8_t v___x_469_; 
v_severity_467_ = lean_ctor_get_uint8(v_msg_464_, sizeof(void*)*5 + 1);
v___x_468_ = 0;
v___x_469_ = l_Lean_instBEqMessageSeverity_beq(v_severity_467_, v___x_468_);
return v___x_469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3___boxed(lean_object* v___x_471_, lean_object* v___x_472_, lean_object* v_msg_473_){
_start:
{
uint8_t v___x_815__boxed_474_; uint8_t v___x_816__boxed_475_; uint8_t v_res_476_; lean_object* v_r_477_; 
v___x_815__boxed_474_ = lean_unbox(v___x_471_);
v___x_816__boxed_475_ = lean_unbox(v___x_472_);
v_res_476_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3(v___x_815__boxed_474_, v___x_816__boxed_475_, v_msg_473_);
lean_dec_ref(v_msg_473_);
v_r_477_ = lean_box(v_res_476_);
return v_r_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(lean_object* v_x_503_){
_start:
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__1));
lean_inc(v_x_503_);
v___x_506_ = l_Lean_Syntax_isOfKind(v_x_503_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec(v_x_503_);
v___x_507_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = l_Lean_Syntax_getArg(v_x_503_, v___x_508_);
lean_dec(v_x_503_);
v___x_510_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__3));
lean_inc(v___x_509_);
v___x_511_ = l_Lean_Syntax_isOfKind(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__5));
lean_inc(v___x_509_);
v___x_513_ = l_Lean_Syntax_isOfKind(v___x_509_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__7));
lean_inc(v___x_509_);
v___x_515_ = l_Lean_Syntax_isOfKind(v___x_509_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__9));
lean_inc(v___x_509_);
v___x_517_ = l_Lean_Syntax_isOfKind(v___x_509_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__11));
v___x_519_ = l_Lean_Syntax_isOfKind(v___x_509_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; 
v___x_520_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_520_;
}
else
{
lean_object* v___x_521_; lean_object* v___f_522_; lean_object* v___x_523_; 
v___x_521_ = lean_box(v___x_519_);
v___f_522_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_522_, 0, v___x_521_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v___f_522_);
return v___x_523_;
}
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___f_526_; lean_object* v___x_527_; 
lean_dec(v___x_509_);
v___x_524_ = lean_box(v___x_515_);
v___x_525_ = lean_box(v___x_517_);
v___f_526_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_526_, 0, v___x_524_);
lean_closure_set(v___f_526_, 1, v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___f_526_);
return v___x_527_;
}
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___f_530_; lean_object* v___x_531_; 
lean_dec(v___x_509_);
v___x_528_ = lean_box(v___x_513_);
v___x_529_ = lean_box(v___x_515_);
v___f_530_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_530_, 0, v___x_528_);
lean_closure_set(v___f_530_, 1, v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___f_530_);
return v___x_531_;
}
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___f_534_; lean_object* v___x_535_; 
lean_dec(v___x_509_);
v___x_532_ = lean_box(v___x_511_);
v___x_533_ = lean_box(v___x_513_);
v___f_534_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_534_, 0, v___x_532_);
lean_closure_set(v___f_534_, 1, v___x_533_);
v___x_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_535_, 0, v___f_534_);
return v___x_535_;
}
}
else
{
lean_object* v___f_536_; lean_object* v___x_537_; 
lean_dec(v___x_509_);
v___f_536_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__12));
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___f_536_);
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___boxed(lean_object* v_x_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(v_x_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity(lean_object* v_x_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(v_x_541_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___boxed(lean_object* v_x_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity(v_x_546_, v_a_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
return v_res_550_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0(lean_object* v_x_551_){
_start:
{
uint8_t v___x_552_; 
v___x_552_ = 0;
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0___boxed(lean_object* v_x_553_){
_start:
{
uint8_t v_res_554_; lean_object* v_r_555_; 
v_res_554_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__0(v_x_553_);
lean_dec_ref(v_x_553_);
v_r_555_ = lean_box(v_res_554_);
return v_r_555_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1(lean_object* v_snd_556_, lean_object* v___y_557_){
_start:
{
if (lean_obj_tag(v_snd_556_) == 0)
{
uint8_t v___x_558_; 
lean_dec_ref(v___y_557_);
v___x_558_ = 0;
return v___x_558_;
}
else
{
lean_object* v_val_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v_val_559_ = lean_ctor_get(v_snd_556_, 0);
lean_inc(v_val_559_);
lean_dec_ref_known(v_snd_556_, 1);
v___x_560_ = lean_apply_1(v_val_559_, v___y_557_);
v___x_561_ = lean_unbox(v___x_560_);
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1___boxed(lean_object* v_snd_562_, lean_object* v___y_563_){
_start:
{
uint8_t v_res_564_; lean_object* v_r_565_; 
v_res_564_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1(v_snd_562_, v___y_563_);
v_r_565_ = lean_box(v_res_564_);
return v_r_565_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0(lean_object* v_a_566_, lean_object* v_snd_567_, uint8_t v_a_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_570_; uint8_t v___x_571_; 
lean_inc_ref(v___y_569_);
v___x_570_ = lean_apply_1(v_a_566_, v___y_569_);
v___x_571_ = lean_unbox(v___x_570_);
if (v___x_571_ == 0)
{
if (lean_obj_tag(v_snd_567_) == 0)
{
uint8_t v___x_572_; 
lean_dec_ref(v___y_569_);
v___x_572_ = 2;
return v___x_572_;
}
else
{
lean_object* v_val_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v_val_573_ = lean_ctor_get(v_snd_567_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v_snd_567_, 1);
v___x_574_ = lean_apply_1(v_val_573_, v___y_569_);
v___x_575_ = lean_unbox(v___x_574_);
return v___x_575_;
}
}
else
{
lean_dec_ref(v___y_569_);
lean_dec(v_snd_567_);
return v_a_568_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0___boxed(lean_object* v_a_576_, lean_object* v_snd_577_, lean_object* v_a_578_, lean_object* v___y_579_){
_start:
{
uint8_t v_a_6460__boxed_580_; uint8_t v_res_581_; lean_object* v_r_582_; 
v_a_6460__boxed_580_ = lean_unbox(v_a_578_);
v_res_581_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0(v_a_576_, v_snd_577_, v_a_6460__boxed_580_, v___y_579_);
v_r_582_ = lean_box(v_res_581_);
return v_r_582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(lean_object* v_as_643_, size_t v_sz_644_, size_t v_i_645_, lean_object* v_b_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_a_651_; uint8_t v___x_655_; 
v___x_655_ = lean_usize_dec_lt(v_i_645_, v_sz_644_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v_b_646_);
return v___x_656_;
}
else
{
lean_object* v_snd_657_; lean_object* v_snd_658_; lean_object* v_snd_659_; lean_object* v_fst_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_967_; 
v_snd_657_ = lean_ctor_get(v_b_646_, 1);
lean_inc(v_snd_657_);
v_snd_658_ = lean_ctor_get(v_snd_657_, 1);
lean_inc(v_snd_658_);
v_snd_659_ = lean_ctor_get(v_snd_658_, 1);
lean_inc(v_snd_659_);
v_fst_660_ = lean_ctor_get(v_b_646_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v_b_646_);
if (v_isSharedCheck_967_ == 0)
{
lean_object* v_unused_968_; 
v_unused_968_ = lean_ctor_get(v_b_646_, 1);
lean_dec(v_unused_968_);
v___x_662_ = v_b_646_;
v_isShared_663_ = v_isSharedCheck_967_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_fst_660_);
lean_dec(v_b_646_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_967_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v_fst_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_965_; 
v_fst_664_ = lean_ctor_get(v_snd_657_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v_snd_657_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; 
v_unused_966_ = lean_ctor_get(v_snd_657_, 1);
lean_dec(v_unused_966_);
v___x_666_ = v_snd_657_;
v_isShared_667_ = v_isSharedCheck_965_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_fst_664_);
lean_dec(v_snd_657_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_965_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v_fst_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_963_; 
v_fst_668_ = lean_ctor_get(v_snd_658_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v_snd_658_);
if (v_isSharedCheck_963_ == 0)
{
lean_object* v_unused_964_; 
v_unused_964_ = lean_ctor_get(v_snd_658_, 1);
lean_dec(v_unused_964_);
v___x_670_ = v_snd_658_;
v_isShared_671_ = v_isSharedCheck_963_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_fst_668_);
lean_dec(v_snd_658_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_963_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_fst_672_; lean_object* v_snd_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_962_; 
v_fst_672_ = lean_ctor_get(v_snd_659_, 0);
v_snd_673_ = lean_ctor_get(v_snd_659_, 1);
v_isSharedCheck_962_ = !lean_is_exclusive(v_snd_659_);
if (v_isSharedCheck_962_ == 0)
{
v___x_675_ = v_snd_659_;
v_isShared_676_ = v_isSharedCheck_962_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_snd_673_);
lean_inc(v_fst_672_);
lean_dec(v_snd_659_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_962_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_a_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_a_677_ = lean_array_uget_borrowed(v_as_643_, v_i_645_);
v___x_678_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1));
lean_inc(v_a_677_);
v___x_679_ = l_Lean_Syntax_isOfKind(v_a_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v___x_682_; 
lean_dec_ref_known(v___x_680_, 1);
if (v_isShared_676_ == 0)
{
v___x_682_ = v___x_675_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_fst_672_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_snd_673_);
v___x_682_ = v_reuseFailAlloc_692_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_684_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_682_);
v___x_684_ = v___x_670_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_fst_668_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v___x_682_);
v___x_684_ = v_reuseFailAlloc_691_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_686_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 1, v___x_684_);
v___x_686_ = v___x_666_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_fst_664_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v___x_684_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_688_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v___x_686_);
v___x_688_ = v___x_662_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_fst_660_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_a_651_ = v___x_688_;
goto v___jp_650_;
}
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_del_object(v___x_675_);
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_del_object(v___x_670_);
lean_dec(v_fst_668_);
lean_del_object(v___x_666_);
lean_dec(v_fst_664_);
lean_del_object(v___x_662_);
lean_dec(v_fst_660_);
v_a_693_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_680_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_680_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v_action_x3f_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___x_743_; uint8_t v___x_744_; 
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = l_Lean_Syntax_getArg(v_a_677_, v___x_701_);
v___x_743_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__3));
lean_inc(v___x_702_);
v___x_744_ = l_Lean_Syntax_isOfKind(v___x_702_, v___x_743_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; uint8_t v___x_746_; 
lean_del_object(v___x_675_);
lean_del_object(v___x_670_);
lean_del_object(v___x_666_);
lean_del_object(v___x_662_);
v___x_745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__5));
lean_inc(v___x_702_);
v___x_746_ = l_Lean_Syntax_isOfKind(v___x_702_, v___x_745_);
if (v___x_746_ == 0)
{
lean_object* v___x_747_; uint8_t v_reportPositions_748_; 
v___x_747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__7));
lean_inc(v___x_702_);
v_reportPositions_748_ = l_Lean_Syntax_isOfKind(v___x_702_, v___x_747_);
if (v_reportPositions_748_ == 0)
{
lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_749_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__9));
lean_inc(v___x_702_);
v___x_750_ = l_Lean_Syntax_isOfKind(v___x_702_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__11));
lean_inc(v___x_702_);
v___x_752_ = l_Lean_Syntax_isOfKind(v___x_702_, v___x_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; 
lean_dec(v___x_702_);
v___x_753_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_dec_ref_known(v___x_753_, 1);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v_fst_672_);
lean_ctor_set(v___x_754_, 1, v_snd_673_);
v___x_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_755_, 0, v_fst_668_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v_fst_664_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v_fst_660_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
v_a_651_ = v___x_757_;
goto v___jp_650_;
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_758_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_753_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_753_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
else
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_766_ = lean_unsigned_to_nat(2u);
v___x_767_ = l_Lean_Syntax_getArg(v___x_702_, v___x_766_);
lean_dec(v___x_702_);
v___x_768_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13));
lean_inc(v___x_767_);
v___x_769_ = l_Lean_Syntax_isOfKind(v___x_767_, v___x_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15));
v___x_771_ = l_Lean_Syntax_isOfKind(v___x_767_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
lean_dec_ref_known(v___x_772_, 1);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v_fst_672_);
lean_ctor_set(v___x_773_, 1, v_snd_673_);
v___x_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_774_, 0, v_fst_668_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v_fst_664_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v_fst_660_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v_a_651_ = v___x_776_;
goto v___jp_650_;
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_777_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_772_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_772_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
else
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec(v_fst_672_);
v___x_785_ = lean_box(v_reportPositions_748_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v_snd_673_);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v_fst_668_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v_fst_664_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v_fst_660_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v_a_651_ = v___x_789_;
goto v___jp_650_;
}
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec(v___x_767_);
lean_dec(v_fst_672_);
v___x_790_ = lean_box(v___x_679_);
v___x_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
lean_ctor_set(v___x_791_, 1, v_snd_673_);
v___x_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_792_, 0, v_fst_668_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_793_, 0, v_fst_664_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___x_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_794_, 0, v_fst_660_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v_a_651_ = v___x_794_;
goto v___jp_650_;
}
}
}
else
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_795_ = lean_unsigned_to_nat(2u);
v___x_796_ = l_Lean_Syntax_getArg(v___x_702_, v___x_795_);
lean_dec(v___x_702_);
v___x_797_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__17));
lean_inc(v___x_796_);
v___x_798_ = l_Lean_Syntax_isOfKind(v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
lean_dec(v___x_796_);
v___x_799_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec_ref_known(v___x_799_, 1);
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v_fst_672_);
lean_ctor_set(v___x_800_, 1, v_snd_673_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v_fst_668_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v_fst_664_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v_fst_660_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v_a_651_ = v___x_803_;
goto v___jp_650_;
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_804_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_799_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_799_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_812_ = l_Lean_Syntax_getArg(v___x_796_, v___x_701_);
lean_dec(v___x_796_);
v___x_813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__13));
lean_inc(v___x_812_);
v___x_814_ = l_Lean_Syntax_isOfKind(v___x_812_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__15));
v___x_816_ = l_Lean_Syntax_isOfKind(v___x_812_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
lean_dec_ref_known(v___x_817_, 1);
v___x_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_818_, 0, v_fst_672_);
lean_ctor_set(v___x_818_, 1, v_snd_673_);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v_fst_668_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v_fst_664_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v_fst_660_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v_a_651_ = v___x_821_;
goto v___jp_650_;
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_822_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_817_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_817_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
lean_dec(v_fst_668_);
v___x_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_830_, 0, v_fst_672_);
lean_ctor_set(v___x_830_, 1, v_snd_673_);
v___x_831_ = lean_box(v_reportPositions_748_);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
lean_ctor_set(v___x_832_, 1, v___x_830_);
v___x_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_833_, 0, v_fst_664_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v_fst_660_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v_a_651_ = v___x_834_;
goto v___jp_650_;
}
}
else
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec(v___x_812_);
lean_dec(v_fst_668_);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v_fst_672_);
lean_ctor_set(v___x_835_, 1, v_snd_673_);
v___x_836_ = lean_box(v___x_679_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___x_835_);
v___x_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_838_, 0, v_fst_664_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v_fst_660_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v_a_651_ = v___x_839_;
goto v___jp_650_;
}
}
}
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_840_ = lean_unsigned_to_nat(2u);
v___x_841_ = l_Lean_Syntax_getArg(v___x_702_, v___x_840_);
lean_dec(v___x_702_);
v___x_842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__19));
lean_inc(v___x_841_);
v___x_843_ = l_Lean_Syntax_isOfKind(v___x_841_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; 
lean_dec(v___x_841_);
v___x_844_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec_ref_known(v___x_844_, 1);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v_fst_672_);
lean_ctor_set(v___x_845_, 1, v_snd_673_);
v___x_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_846_, 0, v_fst_668_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v_fst_664_);
lean_ctor_set(v___x_847_, 1, v___x_846_);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v_fst_660_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v_a_651_ = v___x_848_;
goto v___jp_650_;
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_849_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_844_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_844_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
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
else
{
lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_857_ = l_Lean_Syntax_getArg(v___x_841_, v___x_701_);
lean_dec(v___x_841_);
v___x_858_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21));
lean_inc(v___x_857_);
v___x_859_ = l_Lean_Syntax_isOfKind(v___x_857_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__23));
v___x_861_ = l_Lean_Syntax_isOfKind(v___x_857_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec_ref_known(v___x_862_, 1);
v___x_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_863_, 0, v_fst_672_);
lean_ctor_set(v___x_863_, 1, v_snd_673_);
v___x_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_864_, 0, v_fst_668_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v_fst_664_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_fst_660_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v_a_651_ = v___x_866_;
goto v___jp_650_;
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_867_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_862_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_862_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
else
{
uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec(v_fst_664_);
v___x_875_ = 1;
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v_fst_672_);
lean_ctor_set(v___x_876_, 1, v_snd_673_);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v_fst_668_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = lean_box(v___x_875_);
v___x_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
lean_ctor_set(v___x_879_, 1, v___x_877_);
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v_fst_660_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v_a_651_ = v___x_880_;
goto v___jp_650_;
}
}
else
{
uint8_t v_ordering_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
lean_dec(v___x_857_);
lean_dec(v_fst_664_);
v_ordering_881_ = 0;
v___x_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_882_, 0, v_fst_672_);
lean_ctor_set(v___x_882_, 1, v_snd_673_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v_fst_668_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = lean_box(v_ordering_881_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v___x_883_);
v___x_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_886_, 0, v_fst_660_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v_a_651_ = v___x_886_;
goto v___jp_650_;
}
}
}
}
else
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_887_ = lean_unsigned_to_nat(2u);
v___x_888_ = l_Lean_Syntax_getArg(v___x_702_, v___x_887_);
lean_dec(v___x_702_);
v___x_889_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__25));
lean_inc(v___x_888_);
v___x_890_ = l_Lean_Syntax_isOfKind(v___x_888_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
lean_dec(v___x_888_);
v___x_891_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec_ref_known(v___x_891_, 1);
v___x_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_892_, 0, v_fst_672_);
lean_ctor_set(v___x_892_, 1, v_snd_673_);
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v_fst_668_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_894_, 0, v_fst_664_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_895_, 0, v_fst_660_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v_a_651_ = v___x_895_;
goto v___jp_650_;
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_896_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_891_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_891_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v___x_904_ = l_Lean_Syntax_getArg(v___x_888_, v___x_701_);
lean_dec(v___x_888_);
v___x_905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__21));
lean_inc(v___x_904_);
v___x_906_ = l_Lean_Syntax_isOfKind(v___x_904_, v___x_905_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; uint8_t v___x_908_; 
v___x_907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__27));
lean_inc(v___x_904_);
v___x_908_ = l_Lean_Syntax_isOfKind(v___x_904_, v___x_907_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; uint8_t v___x_910_; 
v___x_909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__29));
v___x_910_ = l_Lean_Syntax_isOfKind(v___x_904_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
lean_dec_ref_known(v___x_911_, 1);
v___x_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_912_, 0, v_fst_672_);
lean_ctor_set(v___x_912_, 1, v_snd_673_);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v_fst_668_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v_fst_664_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_915_, 0, v_fst_660_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v_a_651_ = v___x_915_;
goto v___jp_650_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_916_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_911_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_911_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
uint8_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec(v_fst_660_);
v___x_924_ = 2;
v___x_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_925_, 0, v_fst_672_);
lean_ctor_set(v___x_925_, 1, v_snd_673_);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v_fst_668_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v_fst_664_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_box(v___x_924_);
v___x_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
lean_ctor_set(v___x_929_, 1, v___x_927_);
v_a_651_ = v___x_929_;
goto v___jp_650_;
}
}
else
{
uint8_t v_whitespace_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
lean_dec(v___x_904_);
lean_dec(v_fst_660_);
v_whitespace_930_ = 1;
v___x_931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_931_, 0, v_fst_672_);
lean_ctor_set(v___x_931_, 1, v_snd_673_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_fst_668_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v_fst_664_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_box(v_whitespace_930_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
v_a_651_ = v___x_935_;
goto v___jp_650_;
}
}
else
{
uint8_t v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
lean_dec(v___x_904_);
lean_dec(v_fst_660_);
v___x_936_ = 0;
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v_fst_672_);
lean_ctor_set(v___x_937_, 1, v_snd_673_);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v_fst_668_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v_fst_664_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_box(v___x_936_);
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set(v___x_941_, 1, v___x_939_);
v_a_651_ = v___x_941_;
goto v___jp_650_;
}
}
}
}
else
{
lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_942_ = l_Lean_Syntax_getArg(v___x_702_, v___x_701_);
v___x_943_ = l_Lean_Syntax_isNone(v___x_942_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_944_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_942_);
v___x_945_ = l_Lean_Syntax_matchesNull(v___x_942_, v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; 
lean_dec(v___x_942_);
lean_dec(v___x_702_);
lean_del_object(v___x_675_);
lean_del_object(v___x_670_);
lean_del_object(v___x_666_);
lean_del_object(v___x_662_);
v___x_946_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec_ref_known(v___x_946_, 1);
v___x_947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_947_, 0, v_fst_672_);
lean_ctor_set(v___x_947_, 1, v_snd_673_);
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v_fst_668_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_949_, 0, v_fst_664_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_950_, 0, v_fst_660_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v_a_651_ = v___x_950_;
goto v___jp_650_;
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_dec(v_fst_668_);
lean_dec(v_fst_664_);
lean_dec(v_fst_660_);
v_a_951_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_946_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_946_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = l_Lean_Syntax_getArg(v___x_942_, v___x_701_);
lean_dec(v___x_942_);
v___x_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
v_action_x3f_704_ = v___x_960_;
v___y_705_ = v___y_647_;
v___y_706_ = v___y_648_;
goto v___jp_703_;
}
}
else
{
lean_object* v___x_961_; 
lean_dec(v___x_942_);
v___x_961_ = lean_box(0);
v_action_x3f_704_ = v___x_961_;
v___y_705_ = v___y_647_;
v___y_706_ = v___y_648_;
goto v___jp_703_;
}
}
v___jp_703_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_unsigned_to_nat(1u);
v___x_708_ = l_Lean_Syntax_getArg(v___x_702_, v___x_707_);
lean_dec(v___x_702_);
v___x_709_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction(v_action_x3f_704_, v___y_705_, v___y_706_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_711_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v___x_711_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg(v___x_708_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___f_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref_known(v___x_711_, 1);
v___f_713_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_713_, 0, v_a_712_);
lean_closure_set(v___f_713_, 1, v_snd_673_);
lean_closure_set(v___f_713_, 2, v_a_710_);
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v___f_713_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_714_);
v___x_716_ = v___x_675_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_fst_672_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v___x_714_);
v___x_716_ = v_reuseFailAlloc_726_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_718_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_716_);
v___x_718_ = v___x_670_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_fst_668_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_716_);
v___x_718_ = v_reuseFailAlloc_725_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_720_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 1, v___x_718_);
v___x_720_ = v___x_666_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_fst_664_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_718_);
v___x_720_ = v_reuseFailAlloc_724_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v___x_720_);
v___x_722_ = v___x_662_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_fst_660_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
v_a_651_ = v___x_722_;
goto v___jp_650_;
}
}
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v_a_710_);
lean_del_object(v___x_675_);
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_del_object(v___x_670_);
lean_dec(v_fst_668_);
lean_del_object(v___x_666_);
lean_dec(v_fst_664_);
lean_del_object(v___x_662_);
lean_dec(v_fst_660_);
v_a_727_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_711_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_711_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v___x_708_);
lean_del_object(v___x_675_);
lean_dec(v_snd_673_);
lean_dec(v_fst_672_);
lean_del_object(v___x_670_);
lean_dec(v_fst_668_);
lean_del_object(v___x_666_);
lean_dec(v_fst_664_);
lean_del_object(v___x_662_);
lean_dec(v_fst_660_);
v_a_735_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_709_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_709_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
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
}
}
}
}
}
v___jp_650_:
{
size_t v___x_652_; size_t v___x_653_; 
v___x_652_ = ((size_t)1ULL);
v___x_653_ = lean_usize_add(v_i_645_, v___x_652_);
v_i_645_ = v___x_653_;
v_b_646_ = v_a_651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___boxed(lean_object* v_as_969_, lean_object* v_sz_970_, lean_object* v_i_971_, lean_object* v_b_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
size_t v_sz_boxed_976_; size_t v_i_boxed_977_; lean_object* v_res_978_; 
v_sz_boxed_976_ = lean_unbox_usize(v_sz_970_);
lean_dec(v_sz_970_);
v_i_boxed_977_ = lean_unbox_usize(v_i_971_);
lean_dec(v_i_971_);
v_res_978_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(v_as_969_, v_sz_boxed_976_, v_i_boxed_977_, v_b_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec_ref(v_as_969_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(size_t v_sz_979_, size_t v_i_980_, lean_object* v_bs_981_){
_start:
{
uint8_t v___x_982_; 
v___x_982_ = lean_usize_dec_lt(v_i_980_, v_sz_979_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = l_unsafeCast___redArg(v_bs_981_);
lean_dec_ref(v_bs_981_);
v___x_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
return v___x_984_;
}
else
{
lean_object* v_v_985_; lean_object* v_elts_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v_v_985_ = lean_array_uget_borrowed(v_bs_981_, v_i_980_);
v_elts_986_ = l_unsafeCast___redArg(v_v_985_);
v___x_987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0___closed__1));
lean_inc(v_elts_986_);
v___x_988_ = l_Lean_Syntax_isOfKind(v_elts_986_, v___x_987_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
lean_dec(v_elts_986_);
lean_dec_ref(v_bs_981_);
v___x_989_ = lean_box(0);
return v___x_989_;
}
else
{
lean_object* v___x_990_; lean_object* v_bs_x27_991_; size_t v___x_992_; size_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_990_ = lean_unsigned_to_nat(0u);
v_bs_x27_991_ = lean_array_uset(v_bs_981_, v_i_980_, v___x_990_);
v___x_992_ = ((size_t)1ULL);
v___x_993_ = lean_usize_add(v_i_980_, v___x_992_);
v___x_994_ = l_unsafeCast___redArg(v_elts_986_);
lean_dec(v_elts_986_);
v___x_995_ = lean_array_uset(v_bs_x27_991_, v_i_980_, v___x_994_);
v_i_980_ = v___x_993_;
v_bs_981_ = v___x_995_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1___boxed(lean_object* v_sz_997_, lean_object* v_i_998_, lean_object* v_bs_999_){
_start:
{
size_t v_sz_boxed_1000_; size_t v_i_boxed_1001_; lean_object* v_res_1002_; 
v_sz_boxed_1000_ = lean_unbox_usize(v_sz_997_);
lean_dec(v_sz_997_);
v_i_boxed_1001_ = lean_unbox_usize(v_i_998_);
lean_dec(v_i_998_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(v_sz_boxed_1000_, v_i_boxed_1001_, v_bs_999_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(uint8_t v___x_1003_, lean_object* v_as_1004_, size_t v_i_1005_, size_t v_stop_1006_, lean_object* v_b_1007_){
_start:
{
lean_object* v___y_1009_; uint8_t v___x_1013_; 
v___x_1013_ = lean_usize_dec_eq(v_i_1005_, v_stop_1006_);
if (v___x_1013_ == 0)
{
lean_object* v_fst_1014_; uint8_t v___x_1015_; 
v_fst_1014_ = lean_ctor_get(v_b_1007_, 0);
v___x_1015_ = lean_unbox(v_fst_1014_);
if (v___x_1015_ == 0)
{
lean_object* v_snd_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1024_; 
v_snd_1016_ = lean_ctor_get(v_b_1007_, 1);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_b_1007_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; 
v_unused_1025_ = lean_ctor_get(v_b_1007_, 0);
lean_dec(v_unused_1025_);
v___x_1018_ = v_b_1007_;
v_isShared_1019_ = v_isSharedCheck_1024_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_snd_1016_);
lean_dec(v_b_1007_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1024_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1020_ = lean_box(v___x_1003_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1020_);
v___x_1022_ = v___x_1018_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_snd_1016_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
v___y_1009_ = v___x_1022_;
goto v___jp_1008_;
}
}
}
else
{
lean_object* v_snd_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1036_; 
v_snd_1026_ = lean_ctor_get(v_b_1007_, 1);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_b_1007_);
if (v_isSharedCheck_1036_ == 0)
{
lean_object* v_unused_1037_; 
v_unused_1037_ = lean_ctor_get(v_b_1007_, 0);
lean_dec(v_unused_1037_);
v___x_1028_ = v_b_1007_;
v_isShared_1029_ = v_isSharedCheck_1036_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_snd_1026_);
lean_dec(v_b_1007_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1036_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1030_ = lean_array_uget_borrowed(v_as_1004_, v_i_1005_);
lean_inc(v___x_1030_);
v___x_1031_ = lean_array_push(v_snd_1026_, v___x_1030_);
v___x_1032_ = lean_box(v___x_1013_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 1, v___x_1031_);
lean_ctor_set(v___x_1028_, 0, v___x_1032_);
v___x_1034_ = v___x_1028_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1035_, 1, v___x_1031_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
v___y_1009_ = v___x_1034_;
goto v___jp_1008_;
}
}
}
}
else
{
return v_b_1007_;
}
v___jp_1008_:
{
size_t v___x_1010_; size_t v___x_1011_; 
v___x_1010_ = ((size_t)1ULL);
v___x_1011_ = lean_usize_add(v_i_1005_, v___x_1010_);
v_i_1005_ = v___x_1011_;
v_b_1007_ = v___y_1009_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2___boxed(lean_object* v___x_1038_, lean_object* v_as_1039_, lean_object* v_i_1040_, lean_object* v_stop_1041_, lean_object* v_b_1042_){
_start:
{
uint8_t v___x_7339__boxed_1043_; size_t v_i_boxed_1044_; size_t v_stop_boxed_1045_; lean_object* v_res_1046_; 
v___x_7339__boxed_1043_ = lean_unbox(v___x_1038_);
v_i_boxed_1044_ = lean_unbox_usize(v_i_1040_);
lean_dec(v_i_1040_);
v_stop_boxed_1045_ = lean_unbox_usize(v_stop_1041_);
lean_dec(v_stop_1041_);
v_res_1046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(v___x_7339__boxed_1043_, v_as_1039_, v_i_boxed_1044_, v_stop_boxed_1045_, v_b_1042_);
lean_dec_ref(v_as_1039_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(lean_object* v_spec_x3f_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_elts_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1119_; lean_object* v_cfg_1135_; 
v_cfg_1135_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__5));
if (lean_obj_tag(v_spec_x3f_1075_) == 1)
{
lean_object* v_val_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; 
v_val_1136_ = lean_ctor_get(v_spec_x3f_1075_, 0);
lean_inc_n(v_val_1136_, 2);
lean_dec_ref_known(v_spec_x3f_1075_, 1);
v___x_1137_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__7));
v___x_1138_ = l_Lean_Syntax_isOfKind(v_val_1136_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_dec(v_val_1136_);
v___x_1139_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v___x_1148_ = lean_unsigned_to_nat(1u);
v___x_1149_ = l_Lean_Syntax_getArg(v_val_1136_, v___x_1148_);
lean_dec(v_val_1136_);
v___x_1150_ = l_Lean_Syntax_getArgs(v___x_1149_);
lean_dec(v___x_1149_);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__8));
v___x_1153_ = lean_array_get_size(v___x_1150_);
v___x_1154_ = lean_nat_dec_lt(v___x_1151_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_dec_ref(v___x_1150_);
v___y_1119_ = v___x_1152_;
goto v___jp_1118_;
}
else
{
lean_object* v___x_1155_; lean_object* v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; lean_object* v___x_1159_; lean_object* v_snd_1160_; 
v___x_1155_ = lean_box(v___x_1154_);
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v___x_1152_);
v___x_1157_ = ((size_t)0ULL);
v___x_1158_ = lean_usize_of_nat(v___x_1153_);
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__2(v___x_1138_, v___x_1150_, v___x_1157_, v___x_1158_, v___x_1156_);
lean_dec_ref(v___x_1150_);
v_snd_1160_ = lean_ctor_get(v___x_1159_, 1);
lean_inc(v_snd_1160_);
lean_dec_ref(v___x_1159_);
v___y_1119_ = v_snd_1160_;
goto v___jp_1118_;
}
}
}
else
{
lean_object* v___x_1161_; 
lean_dec(v_spec_x3f_1075_);
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_cfg_1135_);
return v___x_1161_;
}
v___jp_1079_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; size_t v_sz_1085_; size_t v___x_1086_; lean_object* v___x_1087_; 
v___x_1083_ = l_Array_reverse___redArg(v_elts_1080_);
v___x_1084_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___closed__4));
v_sz_1085_ = lean_array_size(v___x_1083_);
v___x_1086_ = ((size_t)0ULL);
v___x_1087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__0(v___x_1083_, v_sz_1085_, v___x_1086_, v___x_1084_, v___y_1081_, v___y_1082_);
lean_dec_ref(v___x_1083_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1109_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1109_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1109_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v_snd_1092_; lean_object* v_snd_1093_; lean_object* v_snd_1094_; lean_object* v_fst_1095_; lean_object* v_fst_1096_; lean_object* v_fst_1097_; lean_object* v_fst_1098_; lean_object* v_snd_1099_; lean_object* v___y_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; uint8_t v___x_1103_; uint8_t v___x_1104_; uint8_t v___x_1105_; lean_object* v___x_1107_; 
v_snd_1092_ = lean_ctor_get(v_a_1088_, 1);
lean_inc(v_snd_1092_);
v_snd_1093_ = lean_ctor_get(v_snd_1092_, 1);
lean_inc(v_snd_1093_);
v_snd_1094_ = lean_ctor_get(v_snd_1093_, 1);
lean_inc(v_snd_1094_);
v_fst_1095_ = lean_ctor_get(v_a_1088_, 0);
lean_inc(v_fst_1095_);
lean_dec(v_a_1088_);
v_fst_1096_ = lean_ctor_get(v_snd_1092_, 0);
lean_inc(v_fst_1096_);
lean_dec(v_snd_1092_);
v_fst_1097_ = lean_ctor_get(v_snd_1093_, 0);
lean_inc(v_fst_1097_);
lean_dec(v_snd_1093_);
v_fst_1098_ = lean_ctor_get(v_snd_1094_, 0);
lean_inc(v_fst_1098_);
v_snd_1099_ = lean_ctor_get(v_snd_1094_, 1);
lean_inc(v_snd_1099_);
lean_dec(v_snd_1094_);
v___y_1100_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___lam__1___boxed), 2, 1);
lean_closure_set(v___y_1100_, 0, v_snd_1099_);
v___x_1101_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1101_, 0, v___y_1100_);
v___x_1102_ = lean_unbox(v_fst_1095_);
lean_dec(v_fst_1095_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1, v___x_1102_);
v___x_1103_ = lean_unbox(v_fst_1096_);
lean_dec(v_fst_1096_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1 + 1, v___x_1103_);
v___x_1104_ = lean_unbox(v_fst_1097_);
lean_dec(v_fst_1097_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1 + 2, v___x_1104_);
v___x_1105_ = lean_unbox(v_fst_1098_);
lean_dec(v_fst_1098_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1 + 3, v___x_1105_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1101_);
v___x_1107_ = v___x_1090_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1101_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
v_a_1110_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1087_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1087_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
v___jp_1118_:
{
size_t v_sz_1120_; size_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v_sz_1120_ = lean_array_size(v___y_1119_);
v___x_1121_ = ((size_t)0ULL);
v___x_1122_ = l_unsafeCast___redArg(v___y_1119_);
lean_dec_ref(v___y_1119_);
v___x_1123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec_spec__1(v_sz_1120_, v___x_1121_, v___x_1122_);
v___x_1124_ = l_unsafeCast___redArg(v___x_1123_);
lean_dec(v___x_1123_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v___x_1125_; lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
v___x_1125_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1125_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1125_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
else
{
lean_object* v_val_1134_; 
v_val_1134_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_val_1134_);
lean_dec_ref_known(v___x_1124_, 1);
v_elts_1080_ = v_val_1134_;
v___y_1081_ = v_a_1076_;
v___y_1082_ = v_a_1077_;
goto v___jp_1079_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec___boxed(lean_object* v_spec_x3f_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(v_spec_x3f_1162_, v_a_1163_, v_a_1164_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
return v_res_1166_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__5_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__4_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_));
v___x_1178_ = l_unsafeCast___redArg(v___x_1177_);
return v___x_1178_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__5_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_, &l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__5_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8__once, _init_l_Lean_Elab_Tactic_GuardMsgs_instImpl___closed__5_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_instTypeNameGuardMsgFailure(void){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_;
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(lean_object* v_s_1181_, lean_object* v_replacement_1182_, lean_object* v_a_1183_, lean_object* v_b_1184_){
_start:
{
lean_object* v_it_1186_; lean_object* v_startPos_1187_; lean_object* v_endPos_1188_; lean_object* v_it_1197_; 
switch(lean_obj_tag(v_a_1183_))
{
case 0:
{
lean_object* v_pos_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1215_; 
v_pos_1203_ = lean_ctor_get(v_a_1183_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v_a_1183_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1205_ = v_a_1183_;
v_isShared_1206_ = v_isSharedCheck_1215_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_pos_1203_);
lean_dec(v_a_1183_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1215_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v_startInclusive_1207_; lean_object* v_endExclusive_1208_; lean_object* v___x_1209_; uint8_t v_decide_1210_; 
v_startInclusive_1207_ = lean_ctor_get(v_s_1181_, 1);
v_endExclusive_1208_ = lean_ctor_get(v_s_1181_, 2);
v___x_1209_ = lean_nat_sub(v_endExclusive_1208_, v_startInclusive_1207_);
v_decide_1210_ = lean_nat_dec_eq(v_pos_1203_, v___x_1209_);
lean_dec(v___x_1209_);
if (v_decide_1210_ == 0)
{
lean_object* v___x_1212_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set_tag(v___x_1205_, 1);
v___x_1212_ = v___x_1205_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_pos_1203_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
v_it_1197_ = v___x_1212_;
goto v___jp_1196_;
}
}
else
{
lean_object* v___x_1214_; 
lean_del_object(v___x_1205_);
lean_dec(v_pos_1203_);
v___x_1214_ = lean_box(3);
v_it_1197_ = v___x_1214_;
goto v___jp_1196_;
}
}
}
case 1:
{
lean_object* v_pos_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1228_; 
v_pos_1216_ = lean_ctor_get(v_a_1183_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_a_1183_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1218_ = v_a_1183_;
v_isShared_1219_ = v_isSharedCheck_1228_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_pos_1216_);
lean_dec(v_a_1183_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1228_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v_str_1220_; lean_object* v_startInclusive_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v_str_1220_ = lean_ctor_get(v_s_1181_, 0);
v_startInclusive_1221_ = lean_ctor_get(v_s_1181_, 1);
v___x_1222_ = lean_nat_add(v_startInclusive_1221_, v_pos_1216_);
v___x_1223_ = lean_string_utf8_next_fast(v_str_1220_, v___x_1222_);
lean_dec(v___x_1222_);
v___x_1224_ = lean_nat_sub(v___x_1223_, v_startInclusive_1221_);
lean_inc(v___x_1224_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set_tag(v___x_1218_, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1224_);
v___x_1226_ = v___x_1218_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
v_it_1186_ = v___x_1226_;
v_startPos_1187_ = v_pos_1216_;
v_endPos_1188_ = v___x_1224_;
goto v___jp_1185_;
}
}
}
case 2:
{
lean_object* v_needle_1229_; lean_object* v_table_1230_; lean_object* v_stackPos_1231_; lean_object* v_needlePos_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1293_; 
v_needle_1229_ = lean_ctor_get(v_a_1183_, 0);
v_table_1230_ = lean_ctor_get(v_a_1183_, 1);
v_stackPos_1231_ = lean_ctor_get(v_a_1183_, 2);
v_needlePos_1232_ = lean_ctor_get(v_a_1183_, 3);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_a_1183_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1234_ = v_a_1183_;
v_isShared_1235_ = v_isSharedCheck_1293_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_needlePos_1232_);
lean_inc(v_stackPos_1231_);
lean_inc(v_table_1230_);
lean_inc(v_needle_1229_);
lean_dec(v_a_1183_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1293_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v_str_1236_; lean_object* v_startInclusive_1237_; lean_object* v_endExclusive_1238_; lean_object* v_str_1239_; lean_object* v_startInclusive_1240_; lean_object* v_endExclusive_1241_; lean_object* v_basePos_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; 
v_str_1236_ = lean_ctor_get(v_needle_1229_, 0);
v_startInclusive_1237_ = lean_ctor_get(v_needle_1229_, 1);
v_endExclusive_1238_ = lean_ctor_get(v_needle_1229_, 2);
v_str_1239_ = lean_ctor_get(v_s_1181_, 0);
v_startInclusive_1240_ = lean_ctor_get(v_s_1181_, 1);
v_endExclusive_1241_ = lean_ctor_get(v_s_1181_, 2);
v_basePos_1242_ = lean_nat_sub(v_stackPos_1231_, v_needlePos_1232_);
v___x_1243_ = lean_nat_sub(v_endExclusive_1238_, v_startInclusive_1237_);
v___x_1244_ = lean_nat_add(v_basePos_1242_, v___x_1243_);
v___x_1245_ = lean_nat_sub(v_endExclusive_1241_, v_startInclusive_1240_);
v___x_1246_ = lean_nat_dec_le(v___x_1244_, v___x_1245_);
lean_dec(v___x_1244_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
lean_dec(v___x_1243_);
lean_del_object(v___x_1234_);
lean_dec(v_needlePos_1232_);
lean_dec(v_stackPos_1231_);
lean_dec_ref(v_table_1230_);
lean_dec_ref(v_needle_1229_);
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = lean_nat_add(v_basePos_1242_, v___x_1247_);
v___x_1249_ = lean_nat_dec_le(v___x_1248_, v___x_1245_);
lean_dec(v___x_1248_);
if (v___x_1249_ == 0)
{
lean_dec(v___x_1245_);
lean_dec(v_basePos_1242_);
lean_dec_ref(v_s_1181_);
return v_b_1184_;
}
else
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = l_String_Slice_pos_x21(v_s_1181_, v_basePos_1242_);
lean_dec(v_basePos_1242_);
v___x_1251_ = lean_box(3);
v_it_1186_ = v___x_1251_;
v_startPos_1187_ = v___x_1250_;
v_endPos_1188_ = v___x_1245_;
goto v___jp_1185_;
}
}
else
{
lean_object* v___x_1252_; uint8_t v_stackByte_1253_; lean_object* v___x_1254_; uint8_t v_patByte_1255_; uint8_t v___x_1256_; 
lean_dec(v___x_1245_);
v___x_1252_ = lean_nat_add(v_startInclusive_1240_, v_stackPos_1231_);
v_stackByte_1253_ = lean_string_get_byte_fast(v_str_1239_, v___x_1252_);
v___x_1254_ = lean_nat_add(v_startInclusive_1237_, v_needlePos_1232_);
v_patByte_1255_ = lean_string_get_byte_fast(v_str_1236_, v___x_1254_);
v___x_1256_ = lean_uint8_dec_eq(v_stackByte_1253_, v_patByte_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; uint8_t v_decide_1258_; 
lean_dec(v___x_1243_);
v___x_1257_ = lean_unsigned_to_nat(0u);
v_decide_1258_ = lean_nat_dec_eq(v_needlePos_1232_, v___x_1257_);
if (v_decide_1258_ == 0)
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v_newNeedlePos_1261_; uint8_t v___x_1262_; 
v___x_1259_ = lean_unsigned_to_nat(1u);
v___x_1260_ = lean_nat_sub(v_needlePos_1232_, v___x_1259_);
lean_dec(v_needlePos_1232_);
v_newNeedlePos_1261_ = lean_array_fget_borrowed(v_table_1230_, v___x_1260_);
lean_dec(v___x_1260_);
v___x_1262_ = lean_nat_dec_eq(v_newNeedlePos_1261_, v___x_1257_);
if (v___x_1262_ == 0)
{
lean_object* v_oldBasePos_1263_; lean_object* v___x_1264_; lean_object* v_newBasePos_1265_; lean_object* v___x_1267_; 
lean_inc(v_newNeedlePos_1261_);
v_oldBasePos_1263_ = l_String_Slice_pos_x21(v_s_1181_, v_basePos_1242_);
lean_dec(v_basePos_1242_);
v___x_1264_ = lean_nat_sub(v_stackPos_1231_, v_newNeedlePos_1261_);
v_newBasePos_1265_ = l_String_Slice_pos_x21(v_s_1181_, v___x_1264_);
lean_dec(v___x_1264_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 3, v_newNeedlePos_1261_);
v___x_1267_ = v___x_1234_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_needle_1229_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_table_1230_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_stackPos_1231_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_newNeedlePos_1261_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
v_it_1186_ = v___x_1267_;
v_startPos_1187_ = v_oldBasePos_1263_;
v_endPos_1188_ = v_newBasePos_1265_;
goto v___jp_1185_;
}
}
else
{
lean_object* v_basePos_1269_; lean_object* v_nextStackPos_1270_; lean_object* v___x_1272_; 
v_basePos_1269_ = l_String_Slice_pos_x21(v_s_1181_, v_basePos_1242_);
lean_dec(v_basePos_1242_);
v_nextStackPos_1270_ = l_String_Slice_posGE___redArg(v_s_1181_, v_stackPos_1231_);
lean_inc(v_nextStackPos_1270_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 3, v___x_1257_);
lean_ctor_set(v___x_1234_, 2, v_nextStackPos_1270_);
v___x_1272_ = v___x_1234_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_needle_1229_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_table_1230_);
lean_ctor_set(v_reuseFailAlloc_1273_, 2, v_nextStackPos_1270_);
lean_ctor_set(v_reuseFailAlloc_1273_, 3, v___x_1257_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
v_it_1186_ = v___x_1272_;
v_startPos_1187_ = v_basePos_1269_;
v_endPos_1188_ = v_nextStackPos_1270_;
goto v___jp_1185_;
}
}
}
else
{
lean_object* v_basePos_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v_nextStackPos_1277_; lean_object* v___x_1279_; 
lean_dec(v_basePos_1242_);
lean_dec(v_needlePos_1232_);
v_basePos_1274_ = l_String_Slice_pos_x21(v_s_1181_, v_stackPos_1231_);
v___x_1275_ = lean_unsigned_to_nat(1u);
v___x_1276_ = lean_nat_add(v_stackPos_1231_, v___x_1275_);
lean_dec(v_stackPos_1231_);
v_nextStackPos_1277_ = l_String_Slice_posGE___redArg(v_s_1181_, v___x_1276_);
lean_inc(v_nextStackPos_1277_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 3, v___x_1257_);
lean_ctor_set(v___x_1234_, 2, v_nextStackPos_1277_);
v___x_1279_ = v___x_1234_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_needle_1229_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_table_1230_);
lean_ctor_set(v_reuseFailAlloc_1280_, 2, v_nextStackPos_1277_);
lean_ctor_set(v_reuseFailAlloc_1280_, 3, v___x_1257_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
v_it_1186_ = v___x_1279_;
v_startPos_1187_ = v_basePos_1274_;
v_endPos_1188_ = v_nextStackPos_1277_;
goto v___jp_1185_;
}
}
}
else
{
lean_object* v___x_1281_; lean_object* v_nextStackPos_1282_; lean_object* v_nextNeedlePos_1283_; uint8_t v_decide_1284_; 
lean_dec(v_basePos_1242_);
v___x_1281_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1282_ = lean_nat_add(v_stackPos_1231_, v___x_1281_);
lean_dec(v_stackPos_1231_);
v_nextNeedlePos_1283_ = lean_nat_add(v_needlePos_1232_, v___x_1281_);
lean_dec(v_needlePos_1232_);
v_decide_1284_ = lean_nat_dec_eq(v_nextNeedlePos_1283_, v___x_1243_);
lean_dec(v___x_1243_);
if (v_decide_1284_ == 0)
{
lean_object* v___x_1286_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 3, v_nextNeedlePos_1283_);
lean_ctor_set(v___x_1234_, 2, v_nextStackPos_1282_);
v___x_1286_ = v___x_1234_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_needle_1229_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v_table_1230_);
lean_ctor_set(v_reuseFailAlloc_1288_, 2, v_nextStackPos_1282_);
lean_ctor_set(v_reuseFailAlloc_1288_, 3, v_nextNeedlePos_1283_);
v___x_1286_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
v_a_1183_ = v___x_1286_;
goto _start;
}
}
else
{
lean_object* v___x_1289_; lean_object* v___x_1291_; 
lean_dec(v_nextNeedlePos_1283_);
v___x_1289_ = lean_unsigned_to_nat(0u);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 3, v___x_1289_);
lean_ctor_set(v___x_1234_, 2, v_nextStackPos_1282_);
v___x_1291_ = v___x_1234_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_needle_1229_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v_table_1230_);
lean_ctor_set(v_reuseFailAlloc_1292_, 2, v_nextStackPos_1282_);
lean_ctor_set(v_reuseFailAlloc_1292_, 3, v___x_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
v_it_1197_ = v___x_1291_;
goto v___jp_1196_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_1181_);
return v_b_1184_;
}
}
v___jp_1185_:
{
lean_object* v___x_1189_; lean_object* v_str_1190_; lean_object* v_startInclusive_1191_; lean_object* v_endExclusive_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_inc_ref(v_s_1181_);
v___x_1189_ = l_String_Slice_slice_x21(v_s_1181_, v_startPos_1187_, v_endPos_1188_);
lean_dec(v_endPos_1188_);
lean_dec(v_startPos_1187_);
v_str_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc_ref(v_str_1190_);
v_startInclusive_1191_ = lean_ctor_get(v___x_1189_, 1);
lean_inc(v_startInclusive_1191_);
v_endExclusive_1192_ = lean_ctor_get(v___x_1189_, 2);
lean_inc(v_endExclusive_1192_);
lean_dec_ref(v___x_1189_);
v___x_1193_ = lean_string_utf8_extract_fast(v_str_1190_, v_startInclusive_1191_, v_endExclusive_1192_);
lean_dec(v_endExclusive_1192_);
lean_dec(v_startInclusive_1191_);
lean_dec_ref(v_str_1190_);
v___x_1194_ = lean_string_append(v_b_1184_, v___x_1193_);
lean_dec_ref(v___x_1193_);
v_a_1183_ = v_it_1186_;
v_b_1184_ = v___x_1194_;
goto _start;
}
v___jp_1196_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = lean_string_utf8_byte_size(v_replacement_1182_);
v___x_1200_ = lean_string_utf8_extract_fast(v_replacement_1182_, v___x_1198_, v___x_1199_);
v___x_1201_ = lean_string_append(v_b_1184_, v___x_1200_);
lean_dec_ref(v___x_1200_);
v_a_1183_ = v_it_1197_;
v_b_1184_ = v___x_1201_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg___boxed(lean_object* v_s_1294_, lean_object* v_replacement_1295_, lean_object* v_a_1296_, lean_object* v_b_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1294_, v_replacement_1295_, v_a_1296_, v_b_1297_);
lean_dec_ref(v_replacement_1295_);
return v_res_1298_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1300_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0));
v___x_1301_ = lean_string_utf8_byte_size(v___x_1300_);
return v___x_1301_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1);
v___x_1304_ = lean_nat_dec_eq(v___x_1303_, v___x_1302_);
return v___x_1304_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1305_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__1);
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__0));
v___x_1308_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1306_);
lean_ctor_set(v___x_1308_, 2, v___x_1305_);
return v___x_1308_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3);
v___x_1310_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1309_);
return v___x_1310_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__4, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__4_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__4);
v___x_1313_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__3);
v___x_1314_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1312_);
lean_ctor_set(v___x_1314_, 2, v___x_1311_);
lean_ctor_set(v___x_1314_, 3, v___x_1311_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(lean_object* v_s_1317_, lean_object* v_replacement_1318_){
_start:
{
lean_object* v___x_1319_; uint8_t v___x_1320_; 
v___x_1319_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_1320_ = lean_uint8_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__2);
if (v___x_1320_ == 0)
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__5, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__5_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__5);
v___x_1322_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1317_, v_replacement_1318_, v___x_1321_, v___x_1319_);
return v___x_1322_;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6));
v___x_1324_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1317_, v_replacement_1318_, v___x_1323_, v___x_1319_);
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___boxed(lean_object* v_s_1325_, lean_object* v_replacement_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(v_s_1325_, v_replacement_1326_);
lean_dec_ref(v_replacement_1326_);
return v_res_1327_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0));
v___x_1330_ = lean_string_utf8_byte_size(v___x_1329_);
return v___x_1330_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1331_ = lean_unsigned_to_nat(0u);
v___x_1332_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1);
v___x_1333_ = lean_nat_dec_eq(v___x_1332_, v___x_1331_);
return v___x_1333_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1334_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__1);
v___x_1335_ = lean_unsigned_to_nat(0u);
v___x_1336_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__0));
v___x_1337_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v___x_1335_);
lean_ctor_set(v___x_1337_, 2, v___x_1334_);
return v___x_1337_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3);
v___x_1339_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1338_);
return v___x_1339_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__4, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__4_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__4);
v___x_1342_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__3);
v___x_1343_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
lean_ctor_set(v___x_1343_, 1, v___x_1341_);
lean_ctor_set(v___x_1343_, 2, v___x_1340_);
lean_ctor_set(v___x_1343_, 3, v___x_1340_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(lean_object* v_s_1344_, lean_object* v_replacement_1345_){
_start:
{
lean_object* v___x_1346_; uint8_t v___x_1347_; 
v___x_1346_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_1347_ = lean_uint8_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__2);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__5, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__5_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___closed__5);
v___x_1349_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1344_, v_replacement_1345_, v___x_1348_, v___x_1346_);
return v___x_1349_;
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6));
v___x_1351_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1344_, v_replacement_1345_, v___x_1350_, v___x_1346_);
return v___x_1351_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg___boxed(lean_object* v_s_1352_, lean_object* v_replacement_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v_s_1352_, v_replacement_1353_);
lean_dec_ref(v_replacement_1353_);
return v_res_1354_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0));
v___x_1357_ = lean_string_utf8_byte_size(v___x_1356_);
return v___x_1357_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; uint8_t v___x_1360_; 
v___x_1358_ = lean_unsigned_to_nat(0u);
v___x_1359_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1);
v___x_1360_ = lean_nat_dec_eq(v___x_1359_, v___x_1358_);
return v___x_1360_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1361_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__1);
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__0));
v___x_1364_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1363_);
lean_ctor_set(v___x_1364_, 1, v___x_1362_);
lean_ctor_set(v___x_1364_, 2, v___x_1361_);
return v___x_1364_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3);
v___x_1366_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1365_);
return v___x_1366_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1367_ = lean_unsigned_to_nat(0u);
v___x_1368_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__4, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__4_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__4);
v___x_1369_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__3);
v___x_1370_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
lean_ctor_set(v___x_1370_, 1, v___x_1368_);
lean_ctor_set(v___x_1370_, 2, v___x_1367_);
lean_ctor_set(v___x_1370_, 3, v___x_1367_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(lean_object* v_s_1371_, lean_object* v_replacement_1372_){
_start:
{
lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_1374_ = lean_uint8_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__2);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__5, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__5_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___closed__5);
v___x_1376_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1371_, v_replacement_1372_, v___x_1375_, v___x_1373_);
return v___x_1376_;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6));
v___x_1378_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1371_, v_replacement_1372_, v___x_1377_, v___x_1373_);
return v___x_1378_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg___boxed(lean_object* v_s_1379_, lean_object* v_replacement_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(v_s_1379_, v_replacement_1380_);
lean_dec_ref(v_replacement_1380_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace(lean_object* v_s_1385_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1386_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__0));
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_string_utf8_byte_size(v_s_1385_);
v___x_1389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1389_, 0, v_s_1385_);
lean_ctor_set(v___x_1389_, 1, v___x_1387_);
lean_ctor_set(v___x_1389_, 2, v___x_1388_);
v___x_1390_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v___x_1389_, v___x_1386_);
v___x_1391_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__1));
v___x_1392_ = lean_string_utf8_byte_size(v___x_1390_);
v___x_1393_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1390_);
lean_ctor_set(v___x_1393_, 1, v___x_1387_);
lean_ctor_set(v___x_1393_, 2, v___x_1392_);
v___x_1394_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(v___x_1393_, v___x_1391_);
v___x_1395_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace___closed__2));
v___x_1396_ = lean_string_utf8_byte_size(v___x_1394_);
v___x_1397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1394_);
lean_ctor_set(v___x_1397_, 1, v___x_1387_);
lean_ctor_set(v___x_1397_, 2, v___x_1396_);
v___x_1398_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(v___x_1397_, v___x_1395_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0(lean_object* v_s_1399_, lean_object* v_pattern_1400_, lean_object* v_replacement_1401_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v_s_1399_, v_replacement_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___boxed(lean_object* v_s_1403_, lean_object* v_pattern_1404_, lean_object* v_replacement_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0(v_s_1403_, v_pattern_1404_, v_replacement_1405_);
lean_dec_ref(v_replacement_1405_);
lean_dec_ref(v_pattern_1404_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1(lean_object* v_s_1407_, lean_object* v_pattern_1408_, lean_object* v_replacement_1409_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg(v_s_1407_, v_replacement_1409_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___boxed(lean_object* v_s_1411_, lean_object* v_pattern_1412_, lean_object* v_replacement_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1(v_s_1411_, v_pattern_1412_, v_replacement_1413_);
lean_dec_ref(v_replacement_1413_);
lean_dec_ref(v_pattern_1412_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2(lean_object* v_s_1415_, lean_object* v_pattern_1416_, lean_object* v_replacement_1417_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___redArg(v_s_1415_, v_replacement_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2___boxed(lean_object* v_s_1419_, lean_object* v_pattern_1420_, lean_object* v_replacement_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__2(v_s_1419_, v_pattern_1420_, v_replacement_1421_);
lean_dec_ref(v_replacement_1421_);
lean_dec_ref(v_pattern_1420_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0(lean_object* v_s_1423_, lean_object* v_replacement_1424_, lean_object* v_inst_1425_, lean_object* v_R_1426_, lean_object* v_a_1427_, lean_object* v_b_1428_, lean_object* v_c_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1423_, v_replacement_1424_, v_a_1427_, v_b_1428_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___boxed(lean_object* v_s_1431_, lean_object* v_replacement_1432_, lean_object* v_inst_1433_, lean_object* v_R_1434_, lean_object* v_a_1435_, lean_object* v_b_1436_, lean_object* v_c_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0(v_s_1431_, v_replacement_1432_, v_inst_1433_, v_R_1434_, v_a_1435_, v_b_1436_, v_c_1437_);
lean_dec_ref(v_replacement_1432_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_removeTrailingWhitespaceMarker(lean_object* v_s_1439_){
_start:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1440_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_1441_ = lean_unsigned_to_nat(0u);
v___x_1442_ = lean_string_utf8_byte_size(v_s_1439_);
v___x_1443_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1443_, 0, v_s_1439_);
lean_ctor_set(v___x_1443_, 1, v___x_1441_);
lean_ctor_set(v___x_1443_, 2, v___x_1442_);
v___x_1444_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0___redArg(v___x_1443_, v___x_1440_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg(){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___closed__0));
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg___boxed(lean_object* v___dummy_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg();
return v_res_1450_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___redArg();
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1(lean_object* v_s_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___boxed(lean_object* v_s_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1(v_s_1454_);
lean_dec_ref(v_s_1454_);
return v_res_1455_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; uint8_t v___x_1458_; 
v___x_1456_ = lean_unsigned_to_nat(0u);
v___x_1457_ = lean_obj_once(&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9, &l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9_once, _init_l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9);
v___x_1458_ = lean_nat_dec_eq(v___x_1457_, v___x_1456_);
return v___x_1458_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1459_ = lean_obj_once(&l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9, &l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9_once, _init_l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__9);
v___x_1460_ = lean_unsigned_to_nat(0u);
v___x_1461_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_1462_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
lean_ctor_set(v___x_1462_, 1, v___x_1460_);
lean_ctor_set(v___x_1462_, 2, v___x_1459_);
return v___x_1462_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1463_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1);
v___x_1464_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1463_);
return v___x_1464_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__2);
v___x_1467_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__1);
v___x_1468_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
lean_ctor_set(v___x_1468_, 1, v___x_1466_);
lean_ctor_set(v___x_1468_, 2, v___x_1465_);
lean_ctor_set(v___x_1468_, 3, v___x_1465_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(lean_object* v_s_1469_, lean_object* v_replacement_1470_){
_start:
{
lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1471_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_1472_ = lean_uint8_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__0);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = lean_obj_once(&l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___closed__3);
v___x_1474_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1469_, v_replacement_1470_, v___x_1473_, v___x_1471_);
return v___x_1474_;
}
else
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1475_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6));
v___x_1476_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__0_spec__0___redArg(v_s_1469_, v_replacement_1470_, v___x_1475_, v___x_1471_);
return v___x_1476_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg___boxed(lean_object* v_s_1477_, lean_object* v_replacement_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(v_s_1477_, v_replacement_1478_);
lean_dec_ref(v_replacement_1478_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(lean_object* v_s_1480_, lean_object* v___x_1481_, lean_object* v___x_1482_, lean_object* v_a_1483_, lean_object* v_b_1484_){
_start:
{
lean_object* v_it_1486_; lean_object* v_startInclusive_1487_; lean_object* v_endExclusive_1488_; 
if (lean_obj_tag(v_a_1483_) == 0)
{
lean_object* v_currPos_1496_; lean_object* v_searcher_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1525_; 
v_currPos_1496_ = lean_ctor_get(v_a_1483_, 0);
v_searcher_1497_ = lean_ctor_get(v_a_1483_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_a_1483_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1499_ = v_a_1483_;
v_isShared_1500_ = v_isSharedCheck_1525_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_searcher_1497_);
lean_inc(v_currPos_1496_);
lean_dec(v_a_1483_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1525_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
uint8_t v_decide_1511_; 
v_decide_1511_ = lean_nat_dec_eq(v_searcher_1497_, v___x_1482_);
if (v_decide_1511_ == 0)
{
uint32_t v___x_1512_; uint32_t v___x_1513_; uint8_t v___x_1514_; 
v___x_1512_ = lean_string_utf8_get_fast(v_s_1480_, v_searcher_1497_);
v___x_1513_ = 32;
v___x_1514_ = lean_uint32_dec_eq(v___x_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
uint32_t v___x_1515_; uint8_t v___x_1516_; 
v___x_1515_ = 9;
v___x_1516_ = lean_uint32_dec_eq(v___x_1512_, v___x_1515_);
if (v___x_1516_ == 0)
{
uint32_t v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = 13;
v___x_1518_ = lean_uint32_dec_eq(v___x_1512_, v___x_1517_);
if (v___x_1518_ == 0)
{
uint32_t v___x_1519_; uint8_t v___x_1520_; 
v___x_1519_ = 10;
v___x_1520_ = lean_uint32_dec_eq(v___x_1512_, v___x_1519_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_del_object(v___x_1499_);
v___x_1521_ = lean_string_utf8_next_fast(v_s_1480_, v_searcher_1497_);
lean_dec(v_searcher_1497_);
v___x_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1522_, 0, v_currPos_1496_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v_a_1483_ = v___x_1522_;
goto _start;
}
else
{
goto v___jp_1501_;
}
}
else
{
goto v___jp_1501_;
}
}
else
{
goto v___jp_1501_;
}
}
else
{
goto v___jp_1501_;
}
}
else
{
lean_object* v___x_1524_; 
lean_del_object(v___x_1499_);
lean_dec(v_searcher_1497_);
v___x_1524_ = lean_box(1);
lean_inc(v___x_1482_);
v_it_1486_ = v___x_1524_;
v_startInclusive_1487_ = v_currPos_1496_;
v_endExclusive_1488_ = v___x_1482_;
goto v___jp_1485_;
}
v___jp_1501_:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v_slice_1505_; lean_object* v_nextIt_1507_; 
v___x_1502_ = lean_string_utf8_next_fast(v_s_1480_, v_searcher_1497_);
v___x_1503_ = lean_nat_sub(v___x_1502_, v_searcher_1497_);
v___x_1504_ = lean_nat_add(v_searcher_1497_, v___x_1503_);
lean_dec(v___x_1503_);
v_slice_1505_ = l_String_Slice_subslice_x21(v___x_1481_, v_currPos_1496_, v_searcher_1497_);
lean_inc(v___x_1504_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 1, v___x_1504_);
lean_ctor_set(v___x_1499_, 0, v___x_1504_);
v_nextIt_1507_ = v___x_1499_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1504_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v___x_1504_);
v_nextIt_1507_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
lean_object* v_startInclusive_1508_; lean_object* v_endExclusive_1509_; 
v_startInclusive_1508_ = lean_ctor_get(v_slice_1505_, 0);
lean_inc(v_startInclusive_1508_);
v_endExclusive_1509_ = lean_ctor_get(v_slice_1505_, 1);
lean_inc(v_endExclusive_1509_);
lean_dec_ref(v_slice_1505_);
v_it_1486_ = v_nextIt_1507_;
v_startInclusive_1487_ = v_startInclusive_1508_;
v_endExclusive_1488_ = v_endExclusive_1509_;
goto v___jp_1485_;
}
}
}
}
else
{
lean_dec(v___x_1482_);
lean_dec_ref(v_s_1480_);
return v_b_1484_;
}
v___jp_1485_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1489_ = lean_nat_sub(v_endExclusive_1488_, v_startInclusive_1487_);
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = lean_nat_dec_eq(v___x_1489_, v___x_1490_);
lean_dec(v___x_1489_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_inc_ref(v_s_1480_);
v___x_1492_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1492_, 0, v_s_1480_);
lean_ctor_set(v___x_1492_, 1, v_startInclusive_1487_);
lean_ctor_set(v___x_1492_, 2, v_endExclusive_1488_);
v___x_1493_ = lean_array_push(v_b_1484_, v___x_1492_);
v_a_1483_ = v_it_1486_;
v_b_1484_ = v___x_1493_;
goto _start;
}
else
{
lean_dec(v_endExclusive_1488_);
lean_dec(v_startInclusive_1487_);
v_a_1483_ = v_it_1486_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg___boxed(lean_object* v_s_1526_, lean_object* v___x_1527_, lean_object* v___x_1528_, lean_object* v_a_1529_, lean_object* v_b_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(v_s_1526_, v___x_1527_, v___x_1528_, v_a_1529_, v_b_1530_);
lean_dec_ref(v___x_1527_);
return v_res_1531_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_1533_ = lean_string_utf8_byte_size(v___x_1532_);
return v___x_1533_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1534_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0, &l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0_once, _init_l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__0);
v___x_1535_ = lean_unsigned_to_nat(0u);
v___x_1536_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_1537_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1536_);
lean_ctor_set(v___x_1537_, 1, v___x_1535_);
lean_ctor_set(v___x_1537_, 2, v___x_1534_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(uint8_t v_mode_1540_, lean_object* v_s_1541_){
_start:
{
switch(v_mode_1540_)
{
case 0:
{
return v_s_1541_;
}
case 1:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1542_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_1543_ = lean_unsigned_to_nat(0u);
v___x_1544_ = lean_string_utf8_byte_size(v_s_1541_);
v___x_1545_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1545_, 0, v_s_1541_);
lean_ctor_set(v___x_1545_, 1, v___x_1543_);
lean_ctor_set(v___x_1545_, 2, v___x_1544_);
v___x_1546_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(v___x_1545_, v___x_1542_);
return v___x_1546_;
}
default: 
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1547_ = lean_unsigned_to_nat(0u);
v___x_1548_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1, &l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1_once, _init_l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__1);
v___x_1549_ = lean_string_utf8_byte_size(v_s_1541_);
lean_inc_ref(v_s_1541_);
v___x_1550_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1550_, 0, v_s_1541_);
lean_ctor_set(v___x_1550_, 1, v___x_1547_);
lean_ctor_set(v___x_1550_, 2, v___x_1549_);
v___x_1551_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__1___closed__0);
v___x_1552_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___closed__2));
v___x_1553_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(v_s_1541_, v___x_1550_, v___x_1549_, v___x_1551_, v___x_1552_);
lean_dec_ref_known(v___x_1550_, 3);
v___x_1554_ = lean_array_to_list(v___x_1553_);
v___x_1555_ = l_String_Slice_intercalate(v___x_1548_, v___x_1554_);
lean_dec(v___x_1554_);
return v___x_1555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply___boxed(lean_object* v_mode_1556_, lean_object* v_s_1557_){
_start:
{
uint8_t v_mode_boxed_1558_; lean_object* v_res_1559_; 
v_mode_boxed_1558_ = lean_unbox(v_mode_1556_);
v_res_1559_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v_mode_boxed_1558_, v_s_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0(lean_object* v_s_1560_, lean_object* v_pattern_1561_, lean_object* v_replacement_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___redArg(v_s_1560_, v_replacement_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0___boxed(lean_object* v_s_1564_, lean_object* v_pattern_1565_, lean_object* v_replacement_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__0(v_s_1564_, v_pattern_1565_, v_replacement_1566_);
lean_dec_ref(v_replacement_1566_);
lean_dec_ref(v_pattern_1565_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2(lean_object* v_s_1568_, lean_object* v___x_1569_, lean_object* v___x_1570_, lean_object* v_inst_1571_, lean_object* v_R_1572_, lean_object* v_a_1573_, lean_object* v_b_1574_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___redArg(v_s_1568_, v___x_1569_, v___x_1570_, v_a_1573_, v_b_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2___boxed(lean_object* v_s_1576_, lean_object* v___x_1577_, lean_object* v___x_1578_, lean_object* v_inst_1579_, lean_object* v_R_1580_, lean_object* v_a_1581_, lean_object* v_b_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply_spec__2(v_s_1576_, v___x_1577_, v___x_1578_, v_inst_1579_, v_R_1580_, v_a_1581_, v_b_1582_);
lean_dec_ref(v___x_1577_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(lean_object* v_hi_1584_, lean_object* v_pivot_1585_, lean_object* v_as_1586_, lean_object* v_i_1587_, lean_object* v_k_1588_){
_start:
{
uint8_t v___x_1589_; 
v___x_1589_ = lean_nat_dec_lt(v_k_1588_, v_hi_1584_);
if (v___x_1589_ == 0)
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
lean_dec(v_k_1588_);
v___x_1590_ = lean_array_fswap(v_as_1586_, v_i_1587_, v_hi_1584_);
v___x_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1591_, 0, v_i_1587_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
return v___x_1591_;
}
else
{
lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1592_ = lean_array_fget_borrowed(v_as_1586_, v_k_1588_);
v___x_1593_ = lean_string_dec_lt(v___x_1592_, v_pivot_1585_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = lean_unsigned_to_nat(1u);
v___x_1595_ = lean_nat_add(v_k_1588_, v___x_1594_);
lean_dec(v_k_1588_);
v_k_1588_ = v___x_1595_;
goto _start;
}
else
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1597_ = lean_array_fswap(v_as_1586_, v_i_1587_, v_k_1588_);
v___x_1598_ = lean_unsigned_to_nat(1u);
v___x_1599_ = lean_nat_add(v_i_1587_, v___x_1598_);
lean_dec(v_i_1587_);
v___x_1600_ = lean_nat_add(v_k_1588_, v___x_1598_);
lean_dec(v_k_1588_);
v_as_1586_ = v___x_1597_;
v_i_1587_ = v___x_1599_;
v_k_1588_ = v___x_1600_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg___boxed(lean_object* v_hi_1602_, lean_object* v_pivot_1603_, lean_object* v_as_1604_, lean_object* v_i_1605_, lean_object* v_k_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(v_hi_1602_, v_pivot_1603_, v_as_1604_, v_i_1605_, v_k_1606_);
lean_dec_ref(v_pivot_1603_);
lean_dec(v_hi_1602_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(lean_object* v_n_1608_, lean_object* v_as_1609_, lean_object* v_lo_1610_, lean_object* v_hi_1611_){
_start:
{
lean_object* v___y_1613_; uint8_t v___x_1623_; 
v___x_1623_ = lean_nat_dec_lt(v_lo_1610_, v_hi_1611_);
if (v___x_1623_ == 0)
{
lean_dec(v_lo_1610_);
return v_as_1609_;
}
else
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v_mid_1626_; lean_object* v___y_1628_; lean_object* v___y_1634_; lean_object* v___x_1639_; lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1624_ = lean_nat_add(v_lo_1610_, v_hi_1611_);
v___x_1625_ = lean_unsigned_to_nat(1u);
v_mid_1626_ = lean_nat_shiftr(v___x_1624_, v___x_1625_);
lean_dec(v___x_1624_);
v___x_1639_ = lean_array_fget_borrowed(v_as_1609_, v_mid_1626_);
v___x_1640_ = lean_array_fget_borrowed(v_as_1609_, v_lo_1610_);
v___x_1641_ = lean_string_dec_lt(v___x_1639_, v___x_1640_);
if (v___x_1641_ == 0)
{
v___y_1634_ = v_as_1609_;
goto v___jp_1633_;
}
else
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_array_fswap(v_as_1609_, v_lo_1610_, v_mid_1626_);
v___y_1634_ = v___x_1642_;
goto v___jp_1633_;
}
v___jp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1629_ = lean_array_fget_borrowed(v___y_1628_, v_mid_1626_);
v___x_1630_ = lean_array_fget_borrowed(v___y_1628_, v_hi_1611_);
v___x_1631_ = lean_string_dec_lt(v___x_1629_, v___x_1630_);
if (v___x_1631_ == 0)
{
lean_dec(v_mid_1626_);
v___y_1613_ = v___y_1628_;
goto v___jp_1612_;
}
else
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_array_fswap(v___y_1628_, v_mid_1626_, v_hi_1611_);
lean_dec(v_mid_1626_);
v___y_1613_ = v___x_1632_;
goto v___jp_1612_;
}
}
v___jp_1633_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1635_ = lean_array_fget_borrowed(v___y_1634_, v_hi_1611_);
v___x_1636_ = lean_array_fget_borrowed(v___y_1634_, v_lo_1610_);
v___x_1637_ = lean_string_dec_lt(v___x_1635_, v___x_1636_);
if (v___x_1637_ == 0)
{
v___y_1628_ = v___y_1634_;
goto v___jp_1627_;
}
else
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_array_fswap(v___y_1634_, v_lo_1610_, v_hi_1611_);
v___y_1628_ = v___x_1638_;
goto v___jp_1627_;
}
}
}
v___jp_1612_:
{
lean_object* v_pivot_1614_; lean_object* v___x_1615_; lean_object* v_fst_1616_; lean_object* v_snd_1617_; uint8_t v___x_1618_; 
v_pivot_1614_ = lean_array_fget(v___y_1613_, v_hi_1611_);
lean_inc_n(v_lo_1610_, 2);
v___x_1615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(v_hi_1611_, v_pivot_1614_, v___y_1613_, v_lo_1610_, v_lo_1610_);
lean_dec(v_pivot_1614_);
v_fst_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_fst_1616_);
v_snd_1617_ = lean_ctor_get(v___x_1615_, 1);
lean_inc(v_snd_1617_);
lean_dec_ref(v___x_1615_);
v___x_1618_ = lean_nat_dec_le(v_hi_1611_, v_fst_1616_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1619_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v_n_1608_, v_snd_1617_, v_lo_1610_, v_fst_1616_);
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = lean_nat_add(v_fst_1616_, v___x_1620_);
lean_dec(v_fst_1616_);
v_as_1609_ = v___x_1619_;
v_lo_1610_ = v___x_1621_;
goto _start;
}
else
{
lean_dec(v_fst_1616_);
lean_dec(v_lo_1610_);
return v_snd_1617_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg___boxed(lean_object* v_n_1643_, lean_object* v_as_1644_, lean_object* v_lo_1645_, lean_object* v_hi_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v_n_1643_, v_as_1644_, v_lo_1645_, v_hi_1646_);
lean_dec(v_hi_1646_);
lean_dec(v_n_1643_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(uint8_t v_mode_1648_, lean_object* v_msgs_1649_){
_start:
{
if (v_mode_1648_ == 0)
{
return v_msgs_1649_;
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1650_ = lean_array_mk(v_msgs_1649_);
v___x_1651_ = lean_array_get_size(v___x_1650_);
v___x_1657_ = lean_unsigned_to_nat(0u);
v___x_1658_ = lean_nat_dec_eq(v___x_1651_, v___x_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___y_1662_; uint8_t v___x_1664_; 
v___x_1659_ = lean_unsigned_to_nat(1u);
v___x_1660_ = lean_nat_sub(v___x_1651_, v___x_1659_);
v___x_1664_ = lean_nat_dec_le(v___x_1657_, v___x_1660_);
if (v___x_1664_ == 0)
{
lean_inc(v___x_1660_);
v___y_1662_ = v___x_1660_;
goto v___jp_1661_;
}
else
{
v___y_1662_ = v___x_1657_;
goto v___jp_1661_;
}
v___jp_1661_:
{
uint8_t v___x_1663_; 
v___x_1663_ = lean_nat_dec_le(v___y_1662_, v___x_1660_);
if (v___x_1663_ == 0)
{
lean_dec(v___x_1660_);
lean_inc(v___y_1662_);
v___y_1653_ = v___y_1662_;
v___y_1654_ = v___y_1662_;
goto v___jp_1652_;
}
else
{
v___y_1653_ = v___y_1662_;
v___y_1654_ = v___x_1660_;
goto v___jp_1652_;
}
}
}
else
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_array_to_list(v___x_1650_);
return v___x_1665_;
}
v___jp_1652_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v___x_1651_, v___x_1650_, v___y_1653_, v___y_1654_);
lean_dec(v___y_1654_);
v___x_1656_ = lean_array_to_list(v___x_1655_);
return v___x_1656_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply___boxed(lean_object* v_mode_1666_, lean_object* v_msgs_1667_){
_start:
{
uint8_t v_mode_boxed_1668_; lean_object* v_res_1669_; 
v_mode_boxed_1668_ = lean_unbox(v_mode_1666_);
v_res_1669_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(v_mode_boxed_1668_, v_msgs_1667_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0(lean_object* v_n_1670_, lean_object* v_as_1671_, lean_object* v_lo_1672_, lean_object* v_hi_1673_, lean_object* v_w_1674_, lean_object* v_hlo_1675_, lean_object* v_hhi_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___redArg(v_n_1670_, v_as_1671_, v_lo_1672_, v_hi_1673_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0___boxed(lean_object* v_n_1678_, lean_object* v_as_1679_, lean_object* v_lo_1680_, lean_object* v_hi_1681_, lean_object* v_w_1682_, lean_object* v_hlo_1683_, lean_object* v_hhi_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0(v_n_1678_, v_as_1679_, v_lo_1680_, v_hi_1681_, v_w_1682_, v_hlo_1683_, v_hhi_1684_);
lean_dec(v_hi_1681_);
lean_dec(v_n_1678_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0(lean_object* v_n_1686_, lean_object* v_lo_1687_, lean_object* v_hi_1688_, lean_object* v_hhi_1689_, lean_object* v_pivot_1690_, lean_object* v_as_1691_, lean_object* v_i_1692_, lean_object* v_k_1693_, lean_object* v_ilo_1694_, lean_object* v_ik_1695_, lean_object* v_w_1696_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___redArg(v_hi_1688_, v_pivot_1690_, v_as_1691_, v_i_1692_, v_k_1693_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0___boxed(lean_object* v_n_1698_, lean_object* v_lo_1699_, lean_object* v_hi_1700_, lean_object* v_hhi_1701_, lean_object* v_pivot_1702_, lean_object* v_as_1703_, lean_object* v_i_1704_, lean_object* v_k_1705_, lean_object* v_ilo_1706_, lean_object* v_ik_1707_, lean_object* v_w_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply_spec__0_spec__0(v_n_1698_, v_lo_1699_, v_hi_1700_, v_hhi_1701_, v_pivot_1702_, v_as_1703_, v_i_1704_, v_k_1705_, v_ilo_1706_, v_ik_1707_, v_w_1708_);
lean_dec_ref(v_pivot_1702_);
lean_dec(v_hi_1700_);
lean_dec(v_lo_1699_);
lean_dec(v_n_1698_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(lean_object* v_as_1710_, size_t v_i_1711_, size_t v_stop_1712_, lean_object* v_b_1713_){
_start:
{
uint8_t v___x_1714_; 
v___x_1714_ = lean_usize_dec_eq(v_i_1711_, v_stop_1712_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v_diagnostics_1716_; lean_object* v_msgLog_1717_; lean_object* v___x_1718_; size_t v___x_1719_; size_t v___x_1720_; 
v___x_1715_ = lean_array_uget_borrowed(v_as_1710_, v_i_1711_);
v_diagnostics_1716_ = lean_ctor_get(v___x_1715_, 1);
v_msgLog_1717_ = lean_ctor_get(v_diagnostics_1716_, 0);
lean_inc_ref(v_msgLog_1717_);
v___x_1718_ = l_Lean_MessageLog_append(v_b_1713_, v_msgLog_1717_);
v___x_1719_ = ((size_t)1ULL);
v___x_1720_ = lean_usize_add(v_i_1711_, v___x_1719_);
v_i_1711_ = v___x_1720_;
v_b_1713_ = v___x_1718_;
goto _start;
}
else
{
return v_b_1713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0___boxed(lean_object* v_as_1722_, lean_object* v_i_1723_, lean_object* v_stop_1724_, lean_object* v_b_1725_){
_start:
{
size_t v_i_boxed_1726_; size_t v_stop_boxed_1727_; lean_object* v_res_1728_; 
v_i_boxed_1726_ = lean_unbox_usize(v_i_1723_);
lean_dec(v_i_1723_);
v_stop_boxed_1727_ = lean_unbox_usize(v_stop_1724_);
lean_dec(v_stop_1724_);
v_res_1728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(v_as_1722_, v_i_boxed_1726_, v_stop_boxed_1727_, v_b_1725_);
lean_dec_ref(v_as_1722_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(lean_object* v_as_1729_, size_t v_i_1730_, size_t v_stop_1731_, lean_object* v_b_1732_){
_start:
{
lean_object* v___y_1734_; uint8_t v___x_1738_; 
v___x_1738_ = lean_usize_dec_eq(v_i_1730_, v_stop_1731_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1739_ = lean_array_uget_borrowed(v_as_1729_, v_i_1730_);
v___x_1740_ = l_Lean_MessageLog_empty;
lean_inc(v___x_1739_);
v___x_1741_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_1739_);
v___x_1742_ = l_Lean_Language_SnapshotTree_getAll(v___x_1741_);
v___x_1743_ = lean_unsigned_to_nat(0u);
v___x_1744_ = lean_array_get_size(v___x_1742_);
v___x_1745_ = lean_nat_dec_lt(v___x_1743_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; 
lean_dec_ref(v___x_1742_);
v___x_1746_ = l_Lean_MessageLog_append(v_b_1732_, v___x_1740_);
v___y_1734_ = v___x_1746_;
goto v___jp_1733_;
}
else
{
uint8_t v___x_1747_; 
v___x_1747_ = lean_nat_dec_le(v___x_1744_, v___x_1744_);
if (v___x_1747_ == 0)
{
if (v___x_1745_ == 0)
{
lean_object* v___x_1748_; 
lean_dec_ref(v___x_1742_);
v___x_1748_ = l_Lean_MessageLog_append(v_b_1732_, v___x_1740_);
v___y_1734_ = v___x_1748_;
goto v___jp_1733_;
}
else
{
size_t v___x_1749_; size_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1749_ = ((size_t)0ULL);
v___x_1750_ = lean_usize_of_nat(v___x_1744_);
v___x_1751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(v___x_1742_, v___x_1749_, v___x_1750_, v___x_1740_);
lean_dec_ref(v___x_1742_);
v___x_1752_ = l_Lean_MessageLog_append(v_b_1732_, v___x_1751_);
v___y_1734_ = v___x_1752_;
goto v___jp_1733_;
}
}
else
{
size_t v___x_1753_; size_t v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1753_ = ((size_t)0ULL);
v___x_1754_ = lean_usize_of_nat(v___x_1744_);
v___x_1755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__0(v___x_1742_, v___x_1753_, v___x_1754_, v___x_1740_);
lean_dec_ref(v___x_1742_);
v___x_1756_ = l_Lean_MessageLog_append(v_b_1732_, v___x_1755_);
v___y_1734_ = v___x_1756_;
goto v___jp_1733_;
}
}
}
else
{
return v_b_1732_;
}
v___jp_1733_:
{
size_t v___x_1735_; size_t v___x_1736_; 
v___x_1735_ = ((size_t)1ULL);
v___x_1736_ = lean_usize_add(v_i_1730_, v___x_1735_);
v_i_1730_ = v___x_1736_;
v_b_1732_ = v___y_1734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1___boxed(lean_object* v_as_1757_, lean_object* v_i_1758_, lean_object* v_stop_1759_, lean_object* v_b_1760_){
_start:
{
size_t v_i_boxed_1761_; size_t v_stop_boxed_1762_; lean_object* v_res_1763_; 
v_i_boxed_1761_ = lean_unbox_usize(v_i_1758_);
lean_dec(v_i_1758_);
v_stop_boxed_1762_ = lean_unbox_usize(v_stop_1759_);
lean_dec(v_stop_1759_);
v_res_1763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(v_as_1757_, v_i_boxed_1761_, v_stop_boxed_1762_, v_b_1760_);
lean_dec_ref(v_as_1757_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(lean_object* v_cmd_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v_fileName_1770_; lean_object* v_fileMap_1771_; lean_object* v_currRecDepth_1772_; lean_object* v_cmdPos_1773_; lean_object* v_macroStack_1774_; lean_object* v_quotContext_x3f_1775_; lean_object* v_currMacroScope_1776_; lean_object* v_ref_1777_; lean_object* v_cancelTk_x3f_1778_; uint8_t v_suppressElabErrors_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v_fileName_1770_ = lean_ctor_get(v_a_1767_, 0);
v_fileMap_1771_ = lean_ctor_get(v_a_1767_, 1);
v_currRecDepth_1772_ = lean_ctor_get(v_a_1767_, 2);
v_cmdPos_1773_ = lean_ctor_get(v_a_1767_, 3);
v_macroStack_1774_ = lean_ctor_get(v_a_1767_, 4);
v_quotContext_x3f_1775_ = lean_ctor_get(v_a_1767_, 5);
v_currMacroScope_1776_ = lean_ctor_get(v_a_1767_, 6);
v_ref_1777_ = lean_ctor_get(v_a_1767_, 7);
v_cancelTk_x3f_1778_ = lean_ctor_get(v_a_1767_, 9);
v_suppressElabErrors_1779_ = lean_ctor_get_uint8(v_a_1767_, sizeof(void*)*10);
v___x_1780_ = lean_unsigned_to_nat(0u);
v___x_1781_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___closed__0));
v___x_1782_ = lean_box(0);
lean_inc(v_cancelTk_x3f_1778_);
lean_inc(v_ref_1777_);
lean_inc(v_currMacroScope_1776_);
lean_inc(v_quotContext_x3f_1775_);
lean_inc(v_macroStack_1774_);
lean_inc(v_cmdPos_1773_);
lean_inc(v_currRecDepth_1772_);
lean_inc_ref(v_fileMap_1771_);
lean_inc_ref(v_fileName_1770_);
v___x_1783_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1783_, 0, v_fileName_1770_);
lean_ctor_set(v___x_1783_, 1, v_fileMap_1771_);
lean_ctor_set(v___x_1783_, 2, v_currRecDepth_1772_);
lean_ctor_set(v___x_1783_, 3, v_cmdPos_1773_);
lean_ctor_set(v___x_1783_, 4, v_macroStack_1774_);
lean_ctor_set(v___x_1783_, 5, v_quotContext_x3f_1775_);
lean_ctor_set(v___x_1783_, 6, v_currMacroScope_1776_);
lean_ctor_set(v___x_1783_, 7, v_ref_1777_);
lean_ctor_set(v___x_1783_, 8, v___x_1782_);
lean_ctor_set(v___x_1783_, 9, v_cancelTk_x3f_1778_);
lean_ctor_set_uint8(v___x_1783_, sizeof(void*)*10, v_suppressElabErrors_1779_);
v___x_1784_ = l_Lean_Elab_Command_elabCommandTopLevel(v_cmd_1766_, v___x_1781_, v___x_1783_, v_a_1768_);
lean_dec_ref_known(v___x_1783_, 10);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1830_; 
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1830_ == 0)
{
lean_object* v_unused_1831_; 
v_unused_1831_ = lean_ctor_get(v___x_1784_, 0);
lean_dec(v_unused_1831_);
v___x_1786_ = v___x_1784_;
v_isShared_1787_ = v_isSharedCheck_1830_;
goto v_resetjp_1785_;
}
else
{
lean_dec(v___x_1784_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1830_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v_messages_1790_; lean_object* v___y_1792_; lean_object* v_snapshotTasks_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; uint8_t v___x_1822_; 
v___x_1788_ = lean_st_ref_get(v_a_1768_);
v___x_1789_ = lean_st_ref_get(v_a_1768_);
v_messages_1790_ = lean_ctor_get(v___x_1788_, 1);
lean_inc_ref(v_messages_1790_);
lean_dec(v___x_1788_);
v_snapshotTasks_1819_ = lean_ctor_get(v___x_1789_, 10);
lean_inc_ref(v_snapshotTasks_1819_);
lean_dec(v___x_1789_);
v___x_1820_ = l_Lean_MessageLog_empty;
v___x_1821_ = lean_array_get_size(v_snapshotTasks_1819_);
v___x_1822_ = lean_nat_dec_lt(v___x_1780_, v___x_1821_);
if (v___x_1822_ == 0)
{
lean_dec_ref(v_snapshotTasks_1819_);
v___y_1792_ = v___x_1820_;
goto v___jp_1791_;
}
else
{
uint8_t v___x_1823_; 
v___x_1823_ = lean_nat_dec_le(v___x_1821_, v___x_1821_);
if (v___x_1823_ == 0)
{
if (v___x_1822_ == 0)
{
lean_dec_ref(v_snapshotTasks_1819_);
v___y_1792_ = v___x_1820_;
goto v___jp_1791_;
}
else
{
size_t v___x_1824_; size_t v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = ((size_t)0ULL);
v___x_1825_ = lean_usize_of_nat(v___x_1821_);
v___x_1826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(v_snapshotTasks_1819_, v___x_1824_, v___x_1825_, v___x_1820_);
lean_dec_ref(v_snapshotTasks_1819_);
v___y_1792_ = v___x_1826_;
goto v___jp_1791_;
}
}
else
{
size_t v___x_1827_; size_t v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = ((size_t)0ULL);
v___x_1828_ = lean_usize_of_nat(v___x_1821_);
v___x_1829_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages_spec__1(v_snapshotTasks_1819_, v___x_1827_, v___x_1828_, v___x_1820_);
lean_dec_ref(v_snapshotTasks_1819_);
v___y_1792_ = v___x_1829_;
goto v___jp_1791_;
}
}
v___jp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v_env_1795_; lean_object* v_messages_1796_; lean_object* v_scopes_1797_; lean_object* v_usedQuotCtxts_1798_; lean_object* v_nextMacroScope_1799_; lean_object* v_maxRecDepth_1800_; lean_object* v_ngen_1801_; lean_object* v_auxDeclNGen_1802_; lean_object* v_infoState_1803_; lean_object* v_traceState_1804_; lean_object* v_prevLinterStates_1805_; lean_object* v_codeQualityEntryTasks_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1817_; 
v___x_1793_ = l_Lean_MessageLog_append(v_messages_1790_, v___y_1792_);
v___x_1794_ = lean_st_ref_take(v_a_1768_);
v_env_1795_ = lean_ctor_get(v___x_1794_, 0);
v_messages_1796_ = lean_ctor_get(v___x_1794_, 1);
v_scopes_1797_ = lean_ctor_get(v___x_1794_, 2);
v_usedQuotCtxts_1798_ = lean_ctor_get(v___x_1794_, 3);
v_nextMacroScope_1799_ = lean_ctor_get(v___x_1794_, 4);
v_maxRecDepth_1800_ = lean_ctor_get(v___x_1794_, 5);
v_ngen_1801_ = lean_ctor_get(v___x_1794_, 6);
v_auxDeclNGen_1802_ = lean_ctor_get(v___x_1794_, 7);
v_infoState_1803_ = lean_ctor_get(v___x_1794_, 8);
v_traceState_1804_ = lean_ctor_get(v___x_1794_, 9);
v_prevLinterStates_1805_ = lean_ctor_get(v___x_1794_, 11);
v_codeQualityEntryTasks_1806_ = lean_ctor_get(v___x_1794_, 12);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1817_ == 0)
{
lean_object* v_unused_1818_; 
v_unused_1818_ = lean_ctor_get(v___x_1794_, 10);
lean_dec(v_unused_1818_);
v___x_1808_ = v___x_1794_;
v_isShared_1809_ = v_isSharedCheck_1817_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1806_);
lean_inc(v_prevLinterStates_1805_);
lean_inc(v_traceState_1804_);
lean_inc(v_infoState_1803_);
lean_inc(v_auxDeclNGen_1802_);
lean_inc(v_ngen_1801_);
lean_inc(v_maxRecDepth_1800_);
lean_inc(v_nextMacroScope_1799_);
lean_inc(v_usedQuotCtxts_1798_);
lean_inc(v_scopes_1797_);
lean_inc(v_messages_1796_);
lean_inc(v_env_1795_);
lean_dec(v___x_1794_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1817_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 10, v___x_1781_);
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_env_1795_);
lean_ctor_set(v_reuseFailAlloc_1816_, 1, v_messages_1796_);
lean_ctor_set(v_reuseFailAlloc_1816_, 2, v_scopes_1797_);
lean_ctor_set(v_reuseFailAlloc_1816_, 3, v_usedQuotCtxts_1798_);
lean_ctor_set(v_reuseFailAlloc_1816_, 4, v_nextMacroScope_1799_);
lean_ctor_set(v_reuseFailAlloc_1816_, 5, v_maxRecDepth_1800_);
lean_ctor_set(v_reuseFailAlloc_1816_, 6, v_ngen_1801_);
lean_ctor_set(v_reuseFailAlloc_1816_, 7, v_auxDeclNGen_1802_);
lean_ctor_set(v_reuseFailAlloc_1816_, 8, v_infoState_1803_);
lean_ctor_set(v_reuseFailAlloc_1816_, 9, v_traceState_1804_);
lean_ctor_set(v_reuseFailAlloc_1816_, 10, v___x_1781_);
lean_ctor_set(v_reuseFailAlloc_1816_, 11, v_prevLinterStates_1805_);
lean_ctor_set(v_reuseFailAlloc_1816_, 12, v_codeQualityEntryTasks_1806_);
v___x_1811_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = lean_st_ref_put(v_a_1768_, v___x_1811_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v___x_1793_);
v___x_1814_ = v___x_1786_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1793_);
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
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
v_a_1832_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1784_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1784_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages___boxed(lean_object* v_cmd_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(v_cmd_1840_, v_a_1841_, v_a_1842_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
return v_res_1844_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(lean_object* v_opts_1845_, lean_object* v_opt_1846_){
_start:
{
lean_object* v_name_1847_; lean_object* v_defValue_1848_; lean_object* v_map_1849_; lean_object* v___x_1850_; 
v_name_1847_ = lean_ctor_get(v_opt_1846_, 0);
v_defValue_1848_ = lean_ctor_get(v_opt_1846_, 1);
v_map_1849_ = lean_ctor_get(v_opts_1845_, 0);
v___x_1850_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1849_, v_name_1847_);
if (lean_obj_tag(v___x_1850_) == 0)
{
uint8_t v___x_1851_; 
v___x_1851_ = lean_unbox(v_defValue_1848_);
return v___x_1851_;
}
else
{
lean_object* v_val_1852_; 
v_val_1852_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_val_1852_);
lean_dec_ref_known(v___x_1850_, 1);
if (lean_obj_tag(v_val_1852_) == 1)
{
uint8_t v_v_1853_; 
v_v_1853_ = lean_ctor_get_uint8(v_val_1852_, 0);
lean_dec_ref_known(v_val_1852_, 0);
return v_v_1853_;
}
else
{
uint8_t v___x_1854_; 
lean_dec(v_val_1852_);
v___x_1854_ = lean_unbox(v_defValue_1848_);
return v___x_1854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4___boxed(lean_object* v_opts_1855_, lean_object* v_opt_1856_){
_start:
{
uint8_t v_res_1857_; lean_object* v_r_1858_; 
v_res_1857_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_1855_, v_opt_1856_);
lean_dec_ref(v_opt_1856_);
lean_dec_ref(v_opts_1855_);
v_r_1858_ = lean_box(v_res_1857_);
return v_r_1858_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg(){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___closed__0));
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg___boxed(lean_object* v___dummy_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg();
return v_res_1864_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___redArg();
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5(lean_object* v_s_1866_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___boxed(lean_object* v_s_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5(v_s_1868_);
lean_dec_ref(v_s_1868_);
return v_res_1869_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0(void){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1870_ = lean_box(1);
v___x_1871_ = l_Lean_MessageData_ofFormat(v___x_1870_);
return v___x_1871_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3(void){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1875_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__2));
v___x_1876_ = l_Lean_MessageData_ofFormat(v___x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46(lean_object* v_x_1877_, lean_object* v_x_1878_){
_start:
{
if (lean_obj_tag(v_x_1878_) == 0)
{
return v_x_1877_;
}
else
{
lean_object* v_head_1879_; lean_object* v_tail_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1902_; 
v_head_1879_ = lean_ctor_get(v_x_1878_, 0);
v_tail_1880_ = lean_ctor_get(v_x_1878_, 1);
v_isSharedCheck_1902_ = !lean_is_exclusive(v_x_1878_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1882_ = v_x_1878_;
v_isShared_1883_ = v_isSharedCheck_1902_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_tail_1880_);
lean_inc(v_head_1879_);
lean_dec(v_x_1878_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1902_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v_before_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1900_; 
v_before_1884_ = lean_ctor_get(v_head_1879_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_head_1879_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; 
v_unused_1901_ = lean_ctor_get(v_head_1879_, 1);
lean_dec(v_unused_1901_);
v___x_1886_ = v_head_1879_;
v_isShared_1887_ = v_isSharedCheck_1900_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_before_1884_);
lean_dec(v_head_1879_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1900_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1888_; lean_object* v___x_1890_; 
v___x_1888_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0);
if (v_isShared_1887_ == 0)
{
lean_ctor_set_tag(v___x_1886_, 7);
lean_ctor_set(v___x_1886_, 1, v___x_1888_);
lean_ctor_set(v___x_1886_, 0, v_x_1877_);
v___x_1890_ = v___x_1886_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_x_1877_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1891_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__3);
if (v_isShared_1883_ == 0)
{
lean_ctor_set_tag(v___x_1882_, 7);
lean_ctor_set(v___x_1882_, 1, v___x_1891_);
lean_ctor_set(v___x_1882_, 0, v___x_1890_);
v___x_1893_ = v___x_1882_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = l_Lean_MessageData_ofSyntax(v_before_1884_);
v___x_1895_ = l_Lean_indentD(v___x_1894_);
v___x_1896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1893_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v_x_1877_ = v___x_1896_;
v_x_1878_ = v_tail_1880_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2(void){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1906_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__1));
v___x_1907_ = l_Lean_MessageData_ofFormat(v___x_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(lean_object* v_msgData_1908_, lean_object* v_macroStack_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v_scopes_1914_; lean_object* v___x_1915_; lean_object* v_opts_1916_; lean_object* v___x_1917_; uint8_t v___x_1918_; 
v___x_1912_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1913_ = lean_st_ref_get(v___y_1910_);
v_scopes_1914_ = lean_ctor_get(v___x_1913_, 2);
lean_inc(v_scopes_1914_);
lean_dec(v___x_1913_);
v___x_1915_ = l_List_head_x21___redArg(v___x_1912_, v_scopes_1914_);
lean_dec(v_scopes_1914_);
v_opts_1916_ = lean_ctor_get(v___x_1915_, 1);
lean_inc_ref(v_opts_1916_);
lean_dec(v___x_1915_);
v___x_1917_ = l_Lean_Elab_pp_macroStack;
v___x_1918_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_1916_, v___x_1917_);
lean_dec_ref(v_opts_1916_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; 
lean_dec(v_macroStack_1909_);
v___x_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1919_, 0, v_msgData_1908_);
return v___x_1919_;
}
else
{
if (lean_obj_tag(v_macroStack_1909_) == 0)
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1920_, 0, v_msgData_1908_);
return v___x_1920_;
}
else
{
lean_object* v_head_1921_; lean_object* v_after_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1937_; 
v_head_1921_ = lean_ctor_get(v_macroStack_1909_, 0);
lean_inc(v_head_1921_);
v_after_1922_ = lean_ctor_get(v_head_1921_, 1);
v_isSharedCheck_1937_ = !lean_is_exclusive(v_head_1921_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v_head_1921_, 0);
lean_dec(v_unused_1938_);
v___x_1924_ = v_head_1921_;
v_isShared_1925_ = v_isSharedCheck_1937_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_after_1922_);
lean_dec(v_head_1921_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1937_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1926_; lean_object* v___x_1928_; 
v___x_1926_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46___closed__0);
if (v_isShared_1925_ == 0)
{
lean_ctor_set_tag(v___x_1924_, 7);
lean_ctor_set(v___x_1924_, 1, v___x_1926_);
lean_ctor_set(v___x_1924_, 0, v_msgData_1908_);
v___x_1928_ = v___x_1924_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_msgData_1908_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v___x_1926_);
v___x_1928_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v_msgData_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1929_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___closed__2);
v___x_1930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1928_);
lean_ctor_set(v___x_1930_, 1, v___x_1929_);
v___x_1931_ = l_Lean_MessageData_ofSyntax(v_after_1922_);
v___x_1932_ = l_Lean_indentD(v___x_1931_);
v_msgData_1933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1933_, 0, v___x_1930_);
lean_ctor_set(v_msgData_1933_, 1, v___x_1932_);
v___x_1934_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40_spec__46(v_msgData_1933_, v_macroStack_1909_);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
return v___x_1935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg___boxed(lean_object* v_msgData_1939_, lean_object* v_macroStack_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(v_msgData_1939_, v_macroStack_1940_, v___y_1941_);
lean_dec(v___y_1941_);
return v_res_1943_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1944_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__0);
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
return v___x_1946_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1947_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_1948_ = lean_unsigned_to_nat(0u);
v___x_1949_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
lean_ctor_set(v___x_1949_, 1, v___x_1948_);
lean_ctor_set(v___x_1949_, 2, v___x_1948_);
lean_ctor_set(v___x_1949_, 3, v___x_1948_);
lean_ctor_set(v___x_1949_, 4, v___x_1947_);
lean_ctor_set(v___x_1949_, 5, v___x_1947_);
lean_ctor_set(v___x_1949_, 6, v___x_1947_);
lean_ctor_set(v___x_1949_, 7, v___x_1947_);
lean_ctor_set(v___x_1949_, 8, v___x_1947_);
lean_ctor_set(v___x_1949_, 9, v___x_1947_);
lean_ctor_set(v___x_1949_, 10, v___x_1947_);
return v___x_1949_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1950_ = lean_unsigned_to_nat(32u);
v___x_1951_ = lean_mk_empty_array_with_capacity(v___x_1950_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
return v___x_1952_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1953_ = ((size_t)5ULL);
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = lean_unsigned_to_nat(32u);
v___x_1956_ = lean_mk_empty_array_with_capacity(v___x_1955_);
v___x_1957_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__3);
v___x_1958_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
lean_ctor_set(v___x_1958_, 1, v___x_1956_);
lean_ctor_set(v___x_1958_, 2, v___x_1954_);
lean_ctor_set(v___x_1958_, 3, v___x_1954_);
lean_ctor_set_usize(v___x_1958_, 4, v___x_1953_);
return v___x_1958_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1959_ = lean_box(1);
v___x_1960_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__4);
v___x_1961_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_1962_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
lean_ctor_set(v___x_1962_, 1, v___x_1960_);
lean_ctor_set(v___x_1962_, 2, v___x_1959_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(lean_object* v_msgData_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v___x_1966_; lean_object* v_env_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v_scopes_1970_; lean_object* v___x_1971_; lean_object* v_opts_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1966_ = lean_st_ref_get(v___y_1964_);
v_env_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc_ref(v_env_1967_);
lean_dec(v___x_1966_);
v___x_1968_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1969_ = lean_st_ref_get(v___y_1964_);
v_scopes_1970_ = lean_ctor_get(v___x_1969_, 2);
lean_inc(v_scopes_1970_);
lean_dec(v___x_1969_);
v___x_1971_ = l_List_head_x21___redArg(v___x_1968_, v_scopes_1970_);
lean_dec(v_scopes_1970_);
v_opts_1972_ = lean_ctor_get(v___x_1971_, 1);
lean_inc_ref(v_opts_1972_);
lean_dec(v___x_1971_);
v___x_1973_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__2);
v___x_1974_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___closed__5);
v___x_1975_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1975_, 0, v_env_1967_);
lean_ctor_set(v___x_1975_, 1, v___x_1973_);
lean_ctor_set(v___x_1975_, 2, v___x_1974_);
lean_ctor_set(v___x_1975_, 3, v_opts_1972_);
v___x_1976_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
lean_ctor_set(v___x_1976_, 1, v_msgData_1963_);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg___boxed(lean_object* v_msgData_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v_msgData_1978_, v___y_1979_);
lean_dec(v___y_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(lean_object* v_msg_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = l_Lean_Elab_Command_getRef___redArg(v___y_1983_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v_macroStack_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v_a_1991_; lean_object* v___x_1992_; lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2001_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_a_1987_);
lean_dec_ref_known(v___x_1986_, 1);
v_macroStack_1988_ = lean_ctor_get(v___y_1983_, 4);
v___x_1989_ = l_Lean_Elab_getBetterRef(v_a_1987_, v_macroStack_1988_);
lean_dec(v_a_1987_);
v___x_1990_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v_msg_1982_, v___y_1984_);
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_a_1991_);
lean_dec_ref(v___x_1990_);
lean_inc(v_macroStack_1988_);
v___x_1992_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(v_a_1991_, v_macroStack_1988_, v___y_1984_);
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1995_ = v___x_1992_;
v_isShared_1996_ = v_isSharedCheck_2001_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1992_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2001_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1999_; 
v___x_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1989_);
lean_ctor_set(v___x_1997_, 1, v_a_1993_);
if (v_isShared_1996_ == 0)
{
lean_ctor_set_tag(v___x_1995_, 1);
lean_ctor_set(v___x_1995_, 0, v___x_1997_);
v___x_1999_ = v___x_1995_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec_ref(v_msg_1982_);
v_a_2002_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1986_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1986_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg___boxed(lean_object* v_msg_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(v_msg_2010_, v___y_2011_, v___y_2012_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(lean_object* v_ref_2015_, lean_object* v_msg_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lean_Elab_Command_getRef___redArg(v___y_2017_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v_fileName_2022_; lean_object* v_fileMap_2023_; lean_object* v_currRecDepth_2024_; lean_object* v_cmdPos_2025_; lean_object* v_macroStack_2026_; lean_object* v_quotContext_x3f_2027_; lean_object* v_currMacroScope_2028_; lean_object* v_snap_x3f_2029_; lean_object* v_cancelTk_x3f_2030_; uint8_t v_suppressElabErrors_2031_; lean_object* v_ref_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2021_);
lean_dec_ref_known(v___x_2020_, 1);
v_fileName_2022_ = lean_ctor_get(v___y_2017_, 0);
v_fileMap_2023_ = lean_ctor_get(v___y_2017_, 1);
v_currRecDepth_2024_ = lean_ctor_get(v___y_2017_, 2);
v_cmdPos_2025_ = lean_ctor_get(v___y_2017_, 3);
v_macroStack_2026_ = lean_ctor_get(v___y_2017_, 4);
v_quotContext_x3f_2027_ = lean_ctor_get(v___y_2017_, 5);
v_currMacroScope_2028_ = lean_ctor_get(v___y_2017_, 6);
v_snap_x3f_2029_ = lean_ctor_get(v___y_2017_, 8);
v_cancelTk_x3f_2030_ = lean_ctor_get(v___y_2017_, 9);
v_suppressElabErrors_2031_ = lean_ctor_get_uint8(v___y_2017_, sizeof(void*)*10);
v_ref_2032_ = l_Lean_replaceRef(v_ref_2015_, v_a_2021_);
lean_dec(v_a_2021_);
lean_inc(v_cancelTk_x3f_2030_);
lean_inc(v_snap_x3f_2029_);
lean_inc(v_currMacroScope_2028_);
lean_inc(v_quotContext_x3f_2027_);
lean_inc(v_macroStack_2026_);
lean_inc(v_cmdPos_2025_);
lean_inc(v_currRecDepth_2024_);
lean_inc_ref(v_fileMap_2023_);
lean_inc_ref(v_fileName_2022_);
v___x_2033_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2033_, 0, v_fileName_2022_);
lean_ctor_set(v___x_2033_, 1, v_fileMap_2023_);
lean_ctor_set(v___x_2033_, 2, v_currRecDepth_2024_);
lean_ctor_set(v___x_2033_, 3, v_cmdPos_2025_);
lean_ctor_set(v___x_2033_, 4, v_macroStack_2026_);
lean_ctor_set(v___x_2033_, 5, v_quotContext_x3f_2027_);
lean_ctor_set(v___x_2033_, 6, v_currMacroScope_2028_);
lean_ctor_set(v___x_2033_, 7, v_ref_2032_);
lean_ctor_set(v___x_2033_, 8, v_snap_x3f_2029_);
lean_ctor_set(v___x_2033_, 9, v_cancelTk_x3f_2030_);
lean_ctor_set_uint8(v___x_2033_, sizeof(void*)*10, v_suppressElabErrors_2031_);
v___x_2034_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(v_msg_2016_, v___x_2033_, v___y_2018_);
lean_dec_ref_known(v___x_2033_, 10);
return v___x_2034_;
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
lean_dec_ref(v_msg_2016_);
v_a_2035_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2020_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2020_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg___boxed(lean_object* v_ref_2043_, lean_object* v_msg_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_ref_2043_, v_msg_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v_ref_2043_);
return v_res_2048_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1(void){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__0));
v___x_2051_ = l_Lean_stringToMessageData(v___x_2050_);
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(lean_object* v_stx_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v_val_2066_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_unsigned_to_nat(1u);
v___x_2074_ = l_Lean_Syntax_getArg(v_stx_2055_, v___x_2073_);
switch(lean_obj_tag(v___x_2074_))
{
case 2:
{
lean_object* v_val_2075_; 
lean_dec(v_stx_2055_);
v_val_2075_ = lean_ctor_get(v___x_2074_, 1);
lean_inc_ref(v_val_2075_);
lean_dec_ref_known(v___x_2074_, 2);
v_val_2066_ = v_val_2075_;
goto v___jp_2065_;
}
case 1:
{
lean_object* v_kind_2076_; 
v_kind_2076_ = lean_ctor_get(v___x_2074_, 1);
lean_inc(v_kind_2076_);
if (lean_obj_tag(v_kind_2076_) == 1)
{
lean_object* v_pre_2077_; 
v_pre_2077_ = lean_ctor_get(v_kind_2076_, 0);
lean_inc(v_pre_2077_);
if (lean_obj_tag(v_pre_2077_) == 1)
{
lean_object* v_pre_2078_; 
v_pre_2078_ = lean_ctor_get(v_pre_2077_, 0);
lean_inc(v_pre_2078_);
if (lean_obj_tag(v_pre_2078_) == 1)
{
lean_object* v_pre_2079_; 
v_pre_2079_ = lean_ctor_get(v_pre_2078_, 0);
lean_inc(v_pre_2079_);
if (lean_obj_tag(v_pre_2079_) == 1)
{
lean_object* v_pre_2080_; 
v_pre_2080_ = lean_ctor_get(v_pre_2079_, 0);
if (lean_obj_tag(v_pre_2080_) == 0)
{
lean_object* v_str_2081_; lean_object* v_str_2082_; lean_object* v_str_2083_; lean_object* v_str_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v_str_2081_ = lean_ctor_get(v_kind_2076_, 1);
lean_inc_ref(v_str_2081_);
lean_dec_ref_known(v_kind_2076_, 2);
v_str_2082_ = lean_ctor_get(v_pre_2077_, 1);
lean_inc_ref(v_str_2082_);
lean_dec_ref_known(v_pre_2077_, 2);
v_str_2083_ = lean_ctor_get(v_pre_2078_, 1);
lean_inc_ref(v_str_2083_);
lean_dec_ref_known(v_pre_2078_, 2);
v_str_2084_ = lean_ctor_get(v_pre_2079_, 1);
lean_inc_ref(v_str_2084_);
lean_dec_ref_known(v_pre_2079_, 2);
v___x_2085_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_initFn___closed__5_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_));
v___x_2086_ = lean_string_dec_eq(v_str_2084_, v___x_2085_);
lean_dec_ref(v_str_2084_);
if (v___x_2086_ == 0)
{
lean_dec_ref(v_str_2083_);
lean_dec_ref(v_str_2082_);
lean_dec_ref(v_str_2081_);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
else
{
lean_object* v___x_2087_; uint8_t v___x_2088_; 
v___x_2087_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__2));
v___x_2088_ = lean_string_dec_eq(v_str_2083_, v___x_2087_);
lean_dec_ref(v_str_2083_);
if (v___x_2088_ == 0)
{
lean_dec_ref(v_str_2082_);
lean_dec_ref(v_str_2081_);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
else
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__3));
v___x_2090_ = lean_string_dec_eq(v_str_2082_, v___x_2089_);
lean_dec_ref(v_str_2082_);
if (v___x_2090_ == 0)
{
lean_dec_ref(v_str_2081_);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
else
{
lean_object* v___x_2091_; uint8_t v___x_2092_; 
v___x_2091_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__4));
v___x_2092_ = lean_string_dec_eq(v_str_2081_, v___x_2091_);
lean_dec_ref(v_str_2081_);
if (v___x_2092_ == 0)
{
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
else
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2093_ = lean_unsigned_to_nat(0u);
v___x_2094_ = l_Lean_Syntax_getArg(v___x_2074_, v___x_2093_);
lean_dec_ref_known(v___x_2074_, 3);
if (lean_obj_tag(v___x_2094_) == 2)
{
lean_object* v_val_2095_; 
lean_dec(v_stx_2055_);
v_val_2095_ = lean_ctor_get(v___x_2094_, 1);
lean_inc_ref(v_val_2095_);
lean_dec_ref_known(v___x_2094_, 2);
v_val_2066_ = v_val_2095_;
goto v___jp_2065_;
}
else
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
lean_dec(v___x_2094_);
v___x_2096_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1);
lean_inc(v_stx_2055_);
v___x_2097_ = l_Lean_MessageData_ofSyntax(v_stx_2055_);
v___x_2098_ = l_Lean_indentD(v___x_2097_);
v___x_2099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2096_);
lean_ctor_set(v___x_2099_, 1, v___x_2098_);
v___x_2100_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_stx_2055_, v___x_2099_, v___y_2056_, v___y_2057_);
lean_dec(v_stx_2055_);
return v___x_2100_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2079_, 2);
lean_dec_ref_known(v_pre_2078_, 2);
lean_dec_ref_known(v_pre_2077_, 2);
lean_dec_ref_known(v_kind_2076_, 2);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
}
else
{
lean_dec_ref_known(v_pre_2078_, 2);
lean_dec(v_pre_2079_);
lean_dec_ref_known(v_pre_2077_, 2);
lean_dec_ref_known(v_kind_2076_, 2);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
}
else
{
lean_dec_ref_known(v_pre_2077_, 2);
lean_dec(v_pre_2078_);
lean_dec_ref_known(v_kind_2076_, 2);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
}
else
{
lean_dec(v_pre_2077_);
lean_dec_ref_known(v_kind_2076_, 2);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
}
else
{
lean_dec(v_kind_2076_);
lean_dec_ref_known(v___x_2074_, 3);
goto v___jp_2059_;
}
}
default: 
{
lean_dec(v___x_2074_);
goto v___jp_2059_;
}
}
v___jp_2059_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2060_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___closed__1);
lean_inc(v_stx_2055_);
v___x_2061_ = l_Lean_MessageData_ofSyntax(v_stx_2055_);
v___x_2062_ = l_Lean_indentD(v___x_2061_);
v___x_2063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2060_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_stx_2055_, v___x_2063_, v___y_2056_, v___y_2057_);
lean_dec(v_stx_2055_);
return v___x_2064_;
}
v___jp_2065_:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2067_ = lean_unsigned_to_nat(0u);
v___x_2068_ = lean_string_utf8_byte_size(v_val_2066_);
v___x_2069_ = lean_unsigned_to_nat(2u);
v___x_2070_ = lean_nat_sub(v___x_2068_, v___x_2069_);
v___x_2071_ = lean_string_utf8_extract(v_val_2066_, v___x_2067_, v___x_2070_);
lean_dec(v___x_2070_);
lean_dec_ref(v_val_2066_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
return v___x_2072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10___boxed(lean_object* v_stx_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(v_stx_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(lean_object* v_as_2106_, size_t v_sz_2107_, size_t v_i_2108_, lean_object* v_b_2109_){
_start:
{
lean_object* v_a_2111_; uint8_t v___x_2115_; 
v___x_2115_ = lean_usize_dec_lt(v_i_2108_, v_sz_2107_);
if (v___x_2115_ == 0)
{
return v_b_2109_;
}
else
{
lean_object* v_a_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v_out_2119_; uint8_t v___x_2120_; 
v_a_2116_ = lean_array_uget_borrowed(v_as_2106_, v_i_2108_);
v_fst_2117_ = lean_ctor_get(v_a_2116_, 0);
v_snd_2118_ = lean_ctor_get(v_a_2116_, 1);
v_out_2119_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_2120_ = lean_string_dec_eq(v_snd_2118_, v_out_2119_);
if (v___x_2120_ == 0)
{
uint8_t v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2121_ = lean_unbox(v_fst_2117_);
v___x_2122_ = l_Lean_Diff_Action_linePrefix(v___x_2121_);
v___x_2123_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__8));
v___x_2124_ = lean_string_append(v___x_2122_, v___x_2123_);
v___x_2125_ = lean_string_append(v___x_2124_, v_snd_2118_);
v___x_2126_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_2127_ = lean_string_append(v___x_2125_, v___x_2126_);
v___x_2128_ = lean_string_append(v_b_2109_, v___x_2127_);
lean_dec_ref(v___x_2127_);
v_a_2111_ = v___x_2128_;
goto v___jp_2110_;
}
else
{
uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2129_ = lean_unbox(v_fst_2117_);
v___x_2130_ = l_Lean_Diff_Action_linePrefix(v___x_2129_);
v___x_2131_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__0));
v___x_2132_ = lean_string_append(v___x_2130_, v___x_2131_);
v___x_2133_ = lean_string_append(v_b_2109_, v___x_2132_);
lean_dec_ref(v___x_2132_);
v_a_2111_ = v___x_2133_;
goto v___jp_2110_;
}
}
v___jp_2110_:
{
size_t v___x_2112_; size_t v___x_2113_; 
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_add(v_i_2108_, v___x_2112_);
v_i_2108_ = v___x_2113_;
v_b_2109_ = v_a_2111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19___boxed(lean_object* v_as_2134_, lean_object* v_sz_2135_, lean_object* v_i_2136_, lean_object* v_b_2137_){
_start:
{
size_t v_sz_boxed_2138_; size_t v_i_boxed_2139_; lean_object* v_res_2140_; 
v_sz_boxed_2138_ = lean_unbox_usize(v_sz_2135_);
lean_dec(v_sz_2135_);
v_i_boxed_2139_ = lean_unbox_usize(v_i_2136_);
lean_dec(v_i_2136_);
v_res_2140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(v_as_2134_, v_sz_boxed_2138_, v_i_boxed_2139_, v_b_2137_);
lean_dec_ref(v_as_2134_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(lean_object* v_lines_2141_){
_start:
{
lean_object* v_out_2142_; size_t v_sz_2143_; size_t v___x_2144_; lean_object* v___x_2145_; 
v_out_2142_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v_sz_2143_ = lean_array_size(v_lines_2141_);
v___x_2144_ = ((size_t)0ULL);
v___x_2145_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8_spec__19(v_lines_2141_, v_sz_2143_, v___x_2144_, v_out_2142_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8___boxed(lean_object* v_lines_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(v_lines_2146_);
lean_dec_ref(v_lines_2146_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(lean_object* v_filterFn_2148_, lean_object* v_as_x27_2149_, lean_object* v_b_2150_){
_start:
{
if (lean_obj_tag(v_as_x27_2149_) == 0)
{
lean_object* v___x_2152_; 
lean_dec_ref(v_filterFn_2148_);
v___x_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2152_, 0, v_b_2150_);
return v___x_2152_;
}
else
{
lean_object* v_head_2153_; uint8_t v_isSilent_2154_; 
v_head_2153_ = lean_ctor_get(v_as_x27_2149_, 0);
v_isSilent_2154_ = lean_ctor_get_uint8(v_head_2153_, sizeof(void*)*5 + 2);
if (v_isSilent_2154_ == 0)
{
lean_object* v_tail_2155_; lean_object* v_fst_2156_; lean_object* v_snd_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2177_; 
v_tail_2155_ = lean_ctor_get(v_as_x27_2149_, 1);
v_fst_2156_ = lean_ctor_get(v_b_2150_, 0);
v_snd_2157_ = lean_ctor_get(v_b_2150_, 1);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_b_2150_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2159_ = v_b_2150_;
v_isShared_2160_ = v_isSharedCheck_2177_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_snd_2157_);
lean_inc(v_fst_2156_);
lean_dec(v_b_2150_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2177_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2161_; uint8_t v___x_2162_; 
lean_inc_ref(v_filterFn_2148_);
lean_inc(v_head_2153_);
v___x_2161_ = lean_apply_1(v_filterFn_2148_, v_head_2153_);
v___x_2162_ = lean_unbox(v___x_2161_);
switch(v___x_2162_)
{
case 0:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
lean_inc(v_head_2153_);
v___x_2163_ = l_Lean_MessageLog_add(v_head_2153_, v_fst_2156_);
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 0, v___x_2163_);
v___x_2165_ = v___x_2159_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2163_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_snd_2157_);
v___x_2165_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
v_as_x27_2149_ = v_tail_2155_;
v_b_2150_ = v___x_2165_;
goto _start;
}
}
case 1:
{
lean_object* v___x_2169_; 
if (v_isShared_2160_ == 0)
{
v___x_2169_ = v___x_2159_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_fst_2156_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v_snd_2157_);
v___x_2169_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
v_as_x27_2149_ = v_tail_2155_;
v_b_2150_ = v___x_2169_;
goto _start;
}
}
default: 
{
lean_object* v___x_2172_; lean_object* v___x_2174_; 
lean_inc(v_head_2153_);
v___x_2172_ = l_Lean_MessageLog_add(v_head_2153_, v_snd_2157_);
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 1, v___x_2172_);
v___x_2174_ = v___x_2159_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_fst_2156_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v___x_2172_);
v___x_2174_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
v_as_x27_2149_ = v_tail_2155_;
v_b_2150_ = v___x_2174_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_tail_2178_; lean_object* v_fst_2179_; lean_object* v_snd_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2188_; 
v_tail_2178_ = lean_ctor_get(v_as_x27_2149_, 1);
v_fst_2179_ = lean_ctor_get(v_b_2150_, 0);
v_snd_2180_ = lean_ctor_get(v_b_2150_, 1);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_b_2150_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2182_ = v_b_2150_;
v_isShared_2183_ = v_isSharedCheck_2188_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_snd_2180_);
lean_inc(v_fst_2179_);
lean_dec(v_b_2150_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2188_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_fst_2179_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v_snd_2180_);
v___x_2185_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
v_as_x27_2149_ = v_tail_2178_;
v_b_2150_ = v___x_2185_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg___boxed(lean_object* v_filterFn_2189_, lean_object* v_as_x27_2190_, lean_object* v_b_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(v_filterFn_2189_, v_as_x27_2190_, v_b_2191_);
lean_dec(v_as_x27_2190_);
return v_res_2193_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(lean_object* v_s_2194_, lean_object* v_a_2195_, uint8_t v_b_2196_){
_start:
{
uint8_t v___x_2197_; 
v___x_2197_ = 0;
switch(lean_obj_tag(v_a_2195_))
{
case 0:
{
lean_object* v_pos_2198_; lean_object* v_startInclusive_2199_; lean_object* v_endExclusive_2200_; lean_object* v___x_2201_; uint8_t v_decide_2202_; 
v_pos_2198_ = lean_ctor_get(v_a_2195_, 0);
lean_inc(v_pos_2198_);
lean_dec_ref_known(v_a_2195_, 1);
v_startInclusive_2199_ = lean_ctor_get(v_s_2194_, 1);
v_endExclusive_2200_ = lean_ctor_get(v_s_2194_, 2);
v___x_2201_ = lean_nat_sub(v_endExclusive_2200_, v_startInclusive_2199_);
v_decide_2202_ = lean_nat_dec_eq(v_pos_2198_, v___x_2201_);
lean_dec(v___x_2201_);
lean_dec(v_pos_2198_);
if (v_decide_2202_ == 0)
{
uint8_t v___x_2203_; 
v___x_2203_ = 1;
return v___x_2203_;
}
else
{
return v_decide_2202_;
}
}
case 1:
{
lean_object* v_pos_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2217_; 
v_pos_2204_ = lean_ctor_get(v_a_2195_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v_a_2195_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2206_ = v_a_2195_;
v_isShared_2207_ = v_isSharedCheck_2217_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_pos_2204_);
lean_dec(v_a_2195_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2217_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v_str_2208_; lean_object* v_startInclusive_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2214_; 
v_str_2208_ = lean_ctor_get(v_s_2194_, 0);
v_startInclusive_2209_ = lean_ctor_get(v_s_2194_, 1);
v___x_2210_ = lean_nat_add(v_startInclusive_2209_, v_pos_2204_);
lean_dec(v_pos_2204_);
v___x_2211_ = lean_string_utf8_next_fast(v_str_2208_, v___x_2210_);
lean_dec(v___x_2210_);
v___x_2212_ = lean_nat_sub(v___x_2211_, v_startInclusive_2209_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set_tag(v___x_2206_, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2212_);
v___x_2214_ = v___x_2206_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2212_);
v___x_2214_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
v_a_2195_ = v___x_2214_;
v_b_2196_ = v___x_2197_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_2218_; lean_object* v_table_2219_; lean_object* v_stackPos_2220_; lean_object* v_needlePos_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2276_; 
v_needle_2218_ = lean_ctor_get(v_a_2195_, 0);
v_table_2219_ = lean_ctor_get(v_a_2195_, 1);
v_stackPos_2220_ = lean_ctor_get(v_a_2195_, 2);
v_needlePos_2221_ = lean_ctor_get(v_a_2195_, 3);
v_isSharedCheck_2276_ = !lean_is_exclusive(v_a_2195_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2223_ = v_a_2195_;
v_isShared_2224_ = v_isSharedCheck_2276_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_needlePos_2221_);
lean_inc(v_stackPos_2220_);
lean_inc(v_table_2219_);
lean_inc(v_needle_2218_);
lean_dec(v_a_2195_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2276_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v_str_2225_; lean_object* v_startInclusive_2226_; lean_object* v_endExclusive_2227_; lean_object* v_str_2228_; lean_object* v_startInclusive_2229_; lean_object* v_endExclusive_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; uint8_t v___x_2235_; 
v_str_2225_ = lean_ctor_get(v_needle_2218_, 0);
v_startInclusive_2226_ = lean_ctor_get(v_needle_2218_, 1);
v_endExclusive_2227_ = lean_ctor_get(v_needle_2218_, 2);
v_str_2228_ = lean_ctor_get(v_s_2194_, 0);
v_startInclusive_2229_ = lean_ctor_get(v_s_2194_, 1);
v_endExclusive_2230_ = lean_ctor_get(v_s_2194_, 2);
v___x_2231_ = lean_nat_sub(v_stackPos_2220_, v_needlePos_2221_);
v___x_2232_ = lean_nat_sub(v_endExclusive_2227_, v_startInclusive_2226_);
v___x_2233_ = lean_nat_add(v___x_2231_, v___x_2232_);
v___x_2234_ = lean_nat_sub(v_endExclusive_2230_, v_startInclusive_2229_);
v___x_2235_ = lean_nat_dec_le(v___x_2233_, v___x_2234_);
lean_dec(v___x_2233_);
if (v___x_2235_ == 0)
{
lean_object* v___x_2236_; lean_object* v___x_2237_; uint8_t v___x_2238_; 
lean_dec(v___x_2232_);
lean_del_object(v___x_2223_);
lean_dec(v_needlePos_2221_);
lean_dec(v_stackPos_2220_);
lean_dec_ref(v_table_2219_);
lean_dec_ref(v_needle_2218_);
v___x_2236_ = lean_unsigned_to_nat(1u);
v___x_2237_ = lean_nat_add(v___x_2231_, v___x_2236_);
lean_dec(v___x_2231_);
v___x_2238_ = lean_nat_dec_le(v___x_2237_, v___x_2234_);
lean_dec(v___x_2234_);
lean_dec(v___x_2237_);
if (v___x_2238_ == 0)
{
return v_b_2196_;
}
else
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_box(3);
v_a_2195_ = v___x_2239_;
v_b_2196_ = v___x_2197_;
goto _start;
}
}
else
{
lean_object* v___x_2241_; uint8_t v_stackByte_2242_; lean_object* v___x_2243_; uint8_t v_patByte_2244_; uint8_t v___x_2245_; 
lean_dec(v___x_2234_);
lean_dec(v___x_2231_);
v___x_2241_ = lean_nat_add(v_startInclusive_2229_, v_stackPos_2220_);
v_stackByte_2242_ = lean_string_get_byte_fast(v_str_2228_, v___x_2241_);
v___x_2243_ = lean_nat_add(v_startInclusive_2226_, v_needlePos_2221_);
v_patByte_2244_ = lean_string_get_byte_fast(v_str_2225_, v___x_2243_);
v___x_2245_ = lean_uint8_dec_eq(v_stackByte_2242_, v_patByte_2244_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; uint8_t v_decide_2247_; 
lean_dec(v___x_2232_);
v___x_2246_ = lean_unsigned_to_nat(0u);
v_decide_2247_ = lean_nat_dec_eq(v_needlePos_2221_, v___x_2246_);
if (v_decide_2247_ == 0)
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v_newNeedlePos_2250_; uint8_t v___x_2251_; 
v___x_2248_ = lean_unsigned_to_nat(1u);
v___x_2249_ = lean_nat_sub(v_needlePos_2221_, v___x_2248_);
lean_dec(v_needlePos_2221_);
v_newNeedlePos_2250_ = lean_array_fget_borrowed(v_table_2219_, v___x_2249_);
lean_dec(v___x_2249_);
v___x_2251_ = lean_nat_dec_eq(v_newNeedlePos_2250_, v___x_2246_);
if (v___x_2251_ == 0)
{
lean_object* v___x_2253_; 
lean_inc(v_newNeedlePos_2250_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 3, v_newNeedlePos_2250_);
v___x_2253_ = v___x_2223_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_needle_2218_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_table_2219_);
lean_ctor_set(v_reuseFailAlloc_2255_, 2, v_stackPos_2220_);
lean_ctor_set(v_reuseFailAlloc_2255_, 3, v_newNeedlePos_2250_);
v___x_2253_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
v_a_2195_ = v___x_2253_;
v_b_2196_ = v___x_2197_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_2256_; lean_object* v___x_2258_; 
v_nextStackPos_2256_ = l_String_Slice_posGE___redArg(v_s_2194_, v_stackPos_2220_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 3, v___x_2246_);
lean_ctor_set(v___x_2223_, 2, v_nextStackPos_2256_);
v___x_2258_ = v___x_2223_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_needle_2218_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v_table_2219_);
lean_ctor_set(v_reuseFailAlloc_2260_, 2, v_nextStackPos_2256_);
lean_ctor_set(v_reuseFailAlloc_2260_, 3, v___x_2246_);
v___x_2258_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
v_a_2195_ = v___x_2258_;
v_b_2196_ = v___x_2197_;
goto _start;
}
}
}
else
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v_nextStackPos_2263_; lean_object* v___x_2265_; 
lean_dec(v_needlePos_2221_);
v___x_2261_ = lean_unsigned_to_nat(1u);
v___x_2262_ = lean_nat_add(v_stackPos_2220_, v___x_2261_);
lean_dec(v_stackPos_2220_);
v_nextStackPos_2263_ = l_String_Slice_posGE___redArg(v_s_2194_, v___x_2262_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 3, v___x_2246_);
lean_ctor_set(v___x_2223_, 2, v_nextStackPos_2263_);
v___x_2265_ = v___x_2223_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_needle_2218_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v_table_2219_);
lean_ctor_set(v_reuseFailAlloc_2267_, 2, v_nextStackPos_2263_);
lean_ctor_set(v_reuseFailAlloc_2267_, 3, v___x_2246_);
v___x_2265_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
v_a_2195_ = v___x_2265_;
v_b_2196_ = v___x_2197_;
goto _start;
}
}
}
else
{
lean_object* v___x_2268_; lean_object* v_nextNeedlePos_2269_; uint8_t v_decide_2270_; 
v___x_2268_ = lean_unsigned_to_nat(1u);
v_nextNeedlePos_2269_ = lean_nat_add(v_needlePos_2221_, v___x_2268_);
lean_dec(v_needlePos_2221_);
v_decide_2270_ = lean_nat_dec_eq(v_nextNeedlePos_2269_, v___x_2232_);
lean_dec(v___x_2232_);
if (v_decide_2270_ == 0)
{
lean_object* v_nextStackPos_2271_; lean_object* v___x_2273_; 
v_nextStackPos_2271_ = lean_nat_add(v_stackPos_2220_, v___x_2268_);
lean_dec(v_stackPos_2220_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 3, v_nextNeedlePos_2269_);
lean_ctor_set(v___x_2223_, 2, v_nextStackPos_2271_);
v___x_2273_ = v___x_2223_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_needle_2218_);
lean_ctor_set(v_reuseFailAlloc_2275_, 1, v_table_2219_);
lean_ctor_set(v_reuseFailAlloc_2275_, 2, v_nextStackPos_2271_);
lean_ctor_set(v_reuseFailAlloc_2275_, 3, v_nextNeedlePos_2269_);
v___x_2273_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
v_a_2195_ = v___x_2273_;
goto _start;
}
}
else
{
lean_dec(v_nextNeedlePos_2269_);
lean_del_object(v___x_2223_);
lean_dec(v_stackPos_2220_);
lean_dec_ref(v_table_2219_);
lean_dec_ref(v_needle_2218_);
return v_decide_2270_;
}
}
}
}
}
default: 
{
return v_b_2196_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg___boxed(lean_object* v_s_2277_, lean_object* v_a_2278_, lean_object* v_b_2279_){
_start:
{
uint8_t v_b_boxed_2280_; uint8_t v_res_2281_; lean_object* v_r_2282_; 
v_b_boxed_2280_ = lean_unbox(v_b_2279_);
v_res_2281_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_2277_, v_a_2278_, v_b_boxed_2280_);
lean_dec_ref(v_s_2277_);
v_r_2282_ = lean_box(v_res_2281_);
return v_r_2282_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(lean_object* v___x_2283_, lean_object* v_s_2284_){
_start:
{
lean_object* v___y_2286_; lean_object* v___x_2289_; lean_object* v___x_2290_; uint8_t v___x_2291_; 
v___x_2289_ = lean_unsigned_to_nat(0u);
v___x_2290_ = lean_string_utf8_byte_size(v___x_2283_);
v___x_2291_ = lean_nat_dec_eq(v___x_2290_, v___x_2289_);
if (v___x_2291_ == 0)
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2283_);
lean_ctor_set(v___x_2292_, 1, v___x_2289_);
lean_ctor_set(v___x_2292_, 2, v___x_2290_);
v___x_2293_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_2292_);
v___x_2294_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
lean_ctor_set(v___x_2294_, 2, v___x_2289_);
lean_ctor_set(v___x_2294_, 3, v___x_2289_);
v___y_2286_ = v___x_2294_;
goto v___jp_2285_;
}
else
{
lean_object* v___x_2295_; 
lean_dec_ref(v___x_2283_);
v___x_2295_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6));
v___y_2286_ = v___x_2295_;
goto v___jp_2285_;
}
v___jp_2285_:
{
uint8_t v___x_2287_; uint8_t v___x_2288_; 
v___x_2287_ = 0;
v___x_2288_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_2284_, v___y_2286_, v___x_2287_);
return v___x_2288_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9___boxed(lean_object* v___x_2296_, lean_object* v_s_2297_){
_start:
{
uint8_t v_res_2298_; lean_object* v_r_2299_; 
v_res_2298_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(v___x_2296_, v_s_2297_);
lean_dec_ref(v_s_2297_);
v_r_2299_ = lean_box(v_res_2298_);
return v_r_2299_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0(uint8_t v_suppressElabErrors_2300_, uint8_t v___y_2301_, lean_object* v_x_2302_){
_start:
{
if (lean_obj_tag(v_x_2302_) == 1)
{
lean_object* v_pre_2303_; 
v_pre_2303_ = lean_ctor_get(v_x_2302_, 0);
if (lean_obj_tag(v_pre_2303_) == 0)
{
lean_object* v_str_2304_; lean_object* v___x_2305_; uint8_t v___x_2306_; 
v_str_2304_ = lean_ctor_get(v_x_2302_, 1);
v___x_2305_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterSeverity___redArg___closed__2));
v___x_2306_ = lean_string_dec_eq(v_str_2304_, v___x_2305_);
if (v___x_2306_ == 0)
{
return v___x_2306_;
}
else
{
return v_suppressElabErrors_2300_;
}
}
else
{
return v___y_2301_;
}
}
else
{
return v___y_2301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0___boxed(lean_object* v_suppressElabErrors_2307_, lean_object* v___y_2308_, lean_object* v_x_2309_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2310_; uint8_t v___y_26168__boxed_2311_; uint8_t v_res_2312_; lean_object* v_r_2313_; 
v_suppressElabErrors_boxed_2310_ = lean_unbox(v_suppressElabErrors_2307_);
v___y_26168__boxed_2311_ = lean_unbox(v___y_2308_);
v_res_2312_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0(v_suppressElabErrors_boxed_2310_, v___y_26168__boxed_2311_, v_x_2309_);
lean_dec(v_x_2309_);
v_r_2313_ = lean_box(v_res_2312_);
return v_r_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(lean_object* v_ref_2314_, lean_object* v_msgData_2315_, uint8_t v_severity_2316_, uint8_t v_isSilent_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_){
_start:
{
lean_object* v___y_2322_; uint8_t v___y_2323_; lean_object* v___y_2324_; lean_object* v___y_2325_; lean_object* v___y_2326_; uint8_t v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; uint8_t v___y_2387_; uint8_t v___y_2388_; lean_object* v___y_2389_; uint8_t v___y_2390_; lean_object* v___y_2391_; uint8_t v___y_2415_; uint8_t v___y_2416_; lean_object* v___y_2417_; uint8_t v___y_2418_; lean_object* v___y_2419_; uint8_t v___y_2423_; uint8_t v___y_2424_; uint8_t v___y_2425_; uint8_t v___x_2440_; uint8_t v___y_2442_; uint8_t v___y_2443_; uint8_t v___y_2444_; uint8_t v___y_2446_; uint8_t v___x_2458_; 
v___x_2440_ = 2;
v___x_2458_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2316_, v___x_2440_);
if (v___x_2458_ == 0)
{
v___y_2446_ = v___x_2458_;
goto v___jp_2445_;
}
else
{
uint8_t v___x_2459_; 
lean_inc_ref(v_msgData_2315_);
v___x_2459_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2315_);
v___y_2446_ = v___x_2459_;
goto v___jp_2445_;
}
v___jp_2321_:
{
lean_object* v___x_2330_; 
v___x_2330_ = l_Lean_Elab_Command_getScope___redArg(v___y_2329_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v_currNamespace_2332_; lean_object* v___x_2333_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v_currNamespace_2332_ = lean_ctor_get(v_a_2331_, 2);
lean_inc(v_currNamespace_2332_);
lean_dec(v_a_2331_);
v___x_2333_ = l_Lean_Elab_Command_getScope___redArg(v___y_2329_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2369_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2336_ = v___x_2333_;
v_isShared_2337_ = v_isSharedCheck_2369_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2333_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2369_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v_openDecls_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v_env_2343_; lean_object* v_messages_2344_; lean_object* v_scopes_2345_; lean_object* v_usedQuotCtxts_2346_; lean_object* v_nextMacroScope_2347_; lean_object* v_maxRecDepth_2348_; lean_object* v_ngen_2349_; lean_object* v_auxDeclNGen_2350_; lean_object* v_infoState_2351_; lean_object* v_traceState_2352_; lean_object* v_snapshotTasks_2353_; lean_object* v_prevLinterStates_2354_; lean_object* v_codeQualityEntryTasks_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2368_; 
v_openDecls_2338_ = lean_ctor_get(v_a_2334_, 3);
lean_inc(v_openDecls_2338_);
lean_dec(v_a_2334_);
v___x_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2339_, 0, v_currNamespace_2332_);
lean_ctor_set(v___x_2339_, 1, v_openDecls_2338_);
v___x_2340_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
lean_ctor_set(v___x_2340_, 1, v___y_2326_);
lean_inc_ref(v___y_2328_);
lean_inc_ref(v___y_2325_);
v___x_2341_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2341_, 0, v___y_2325_);
lean_ctor_set(v___x_2341_, 1, v___y_2324_);
lean_ctor_set(v___x_2341_, 2, v___y_2322_);
lean_ctor_set(v___x_2341_, 3, v___y_2328_);
lean_ctor_set(v___x_2341_, 4, v___x_2340_);
lean_ctor_set_uint8(v___x_2341_, sizeof(void*)*5, v___y_2323_);
lean_ctor_set_uint8(v___x_2341_, sizeof(void*)*5 + 1, v___y_2327_);
lean_ctor_set_uint8(v___x_2341_, sizeof(void*)*5 + 2, v_isSilent_2317_);
v___x_2342_ = lean_st_ref_take(v___y_2329_);
v_env_2343_ = lean_ctor_get(v___x_2342_, 0);
v_messages_2344_ = lean_ctor_get(v___x_2342_, 1);
v_scopes_2345_ = lean_ctor_get(v___x_2342_, 2);
v_usedQuotCtxts_2346_ = lean_ctor_get(v___x_2342_, 3);
v_nextMacroScope_2347_ = lean_ctor_get(v___x_2342_, 4);
v_maxRecDepth_2348_ = lean_ctor_get(v___x_2342_, 5);
v_ngen_2349_ = lean_ctor_get(v___x_2342_, 6);
v_auxDeclNGen_2350_ = lean_ctor_get(v___x_2342_, 7);
v_infoState_2351_ = lean_ctor_get(v___x_2342_, 8);
v_traceState_2352_ = lean_ctor_get(v___x_2342_, 9);
v_snapshotTasks_2353_ = lean_ctor_get(v___x_2342_, 10);
v_prevLinterStates_2354_ = lean_ctor_get(v___x_2342_, 11);
v_codeQualityEntryTasks_2355_ = lean_ctor_get(v___x_2342_, 12);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2357_ = v___x_2342_;
v_isShared_2358_ = v_isSharedCheck_2368_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2355_);
lean_inc(v_prevLinterStates_2354_);
lean_inc(v_snapshotTasks_2353_);
lean_inc(v_traceState_2352_);
lean_inc(v_infoState_2351_);
lean_inc(v_auxDeclNGen_2350_);
lean_inc(v_ngen_2349_);
lean_inc(v_maxRecDepth_2348_);
lean_inc(v_nextMacroScope_2347_);
lean_inc(v_usedQuotCtxts_2346_);
lean_inc(v_scopes_2345_);
lean_inc(v_messages_2344_);
lean_inc(v_env_2343_);
lean_dec(v___x_2342_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2368_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2359_ = lean_box(0);
v___x_2360_ = l_Lean_MessageLog_add(v___x_2341_, v_messages_2344_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v___x_2360_);
v___x_2362_ = v___x_2357_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_env_2343_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2367_, 2, v_scopes_2345_);
lean_ctor_set(v_reuseFailAlloc_2367_, 3, v_usedQuotCtxts_2346_);
lean_ctor_set(v_reuseFailAlloc_2367_, 4, v_nextMacroScope_2347_);
lean_ctor_set(v_reuseFailAlloc_2367_, 5, v_maxRecDepth_2348_);
lean_ctor_set(v_reuseFailAlloc_2367_, 6, v_ngen_2349_);
lean_ctor_set(v_reuseFailAlloc_2367_, 7, v_auxDeclNGen_2350_);
lean_ctor_set(v_reuseFailAlloc_2367_, 8, v_infoState_2351_);
lean_ctor_set(v_reuseFailAlloc_2367_, 9, v_traceState_2352_);
lean_ctor_set(v_reuseFailAlloc_2367_, 10, v_snapshotTasks_2353_);
lean_ctor_set(v_reuseFailAlloc_2367_, 11, v_prevLinterStates_2354_);
lean_ctor_set(v_reuseFailAlloc_2367_, 12, v_codeQualityEntryTasks_2355_);
v___x_2362_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2363_; lean_object* v___x_2365_; 
v___x_2363_ = lean_st_ref_put(v___y_2329_, v___x_2362_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 0, v___x_2359_);
v___x_2365_ = v___x_2336_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2359_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_dec(v_currNamespace_2332_);
lean_dec_ref(v___y_2326_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2322_);
v_a_2370_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2333_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2333_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec_ref(v___y_2326_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2322_);
v_a_2378_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2330_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2330_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
v___jp_2386_:
{
lean_object* v_fileName_2392_; lean_object* v_fileMap_2393_; uint8_t v_suppressElabErrors_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2413_; 
v_fileName_2392_ = lean_ctor_get(v___y_2318_, 0);
v_fileMap_2393_ = lean_ctor_get(v___y_2318_, 1);
v_suppressElabErrors_2394_ = lean_ctor_get_uint8(v___y_2318_, sizeof(void*)*10);
v___x_2395_ = lean_box(v_suppressElabErrors_2394_);
v___x_2396_ = lean_box(v___y_2387_);
v___f_2397_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2397_, 0, v___x_2395_);
lean_closure_set(v___f_2397_, 1, v___x_2396_);
v___x_2398_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2315_);
v___x_2399_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v___x_2398_, v___y_2319_);
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2402_ = v___x_2399_;
v_isShared_2403_ = v_isSharedCheck_2413_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2399_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2413_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
lean_inc_ref_n(v_fileMap_2393_, 2);
v___x_2404_ = l_Lean_FileMap_toPosition(v_fileMap_2393_, v___y_2389_);
lean_dec(v___y_2389_);
v___x_2405_ = l_Lean_FileMap_toPosition(v_fileMap_2393_, v___y_2391_);
lean_dec(v___y_2391_);
v___x_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
v___x_2407_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
if (v_suppressElabErrors_2394_ == 0)
{
lean_del_object(v___x_2402_);
lean_dec_ref(v___f_2397_);
v___y_2322_ = v___x_2406_;
v___y_2323_ = v___y_2388_;
v___y_2324_ = v___x_2404_;
v___y_2325_ = v_fileName_2392_;
v___y_2326_ = v_a_2400_;
v___y_2327_ = v___y_2390_;
v___y_2328_ = v___x_2407_;
v___y_2329_ = v___y_2319_;
goto v___jp_2321_;
}
else
{
uint8_t v___x_2408_; 
lean_inc(v_a_2400_);
v___x_2408_ = l_Lean_MessageData_hasTag(v___f_2397_, v_a_2400_);
if (v___x_2408_ == 0)
{
lean_object* v___x_2409_; lean_object* v___x_2411_; 
lean_dec_ref_known(v___x_2406_, 1);
lean_dec_ref(v___x_2404_);
lean_dec(v_a_2400_);
v___x_2409_ = lean_box(0);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v___x_2409_);
v___x_2411_ = v___x_2402_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
else
{
lean_del_object(v___x_2402_);
v___y_2322_ = v___x_2406_;
v___y_2323_ = v___y_2388_;
v___y_2324_ = v___x_2404_;
v___y_2325_ = v_fileName_2392_;
v___y_2326_ = v_a_2400_;
v___y_2327_ = v___y_2390_;
v___y_2328_ = v___x_2407_;
v___y_2329_ = v___y_2319_;
goto v___jp_2321_;
}
}
}
}
v___jp_2414_:
{
lean_object* v___x_2420_; 
v___x_2420_ = l_Lean_Syntax_getTailPos_x3f(v___y_2417_, v___y_2416_);
lean_dec(v___y_2417_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_inc(v___y_2419_);
v___y_2387_ = v___y_2415_;
v___y_2388_ = v___y_2416_;
v___y_2389_ = v___y_2419_;
v___y_2390_ = v___y_2418_;
v___y_2391_ = v___y_2419_;
goto v___jp_2386_;
}
else
{
lean_object* v_val_2421_; 
v_val_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_val_2421_);
lean_dec_ref_known(v___x_2420_, 1);
v___y_2387_ = v___y_2415_;
v___y_2388_ = v___y_2416_;
v___y_2389_ = v___y_2419_;
v___y_2390_ = v___y_2418_;
v___y_2391_ = v_val_2421_;
goto v___jp_2386_;
}
}
v___jp_2422_:
{
lean_object* v___x_2426_; 
v___x_2426_ = l_Lean_Elab_Command_getRef___redArg(v___y_2318_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v_ref_2428_; lean_object* v___x_2429_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2426_, 1);
v_ref_2428_ = l_Lean_replaceRef(v_ref_2314_, v_a_2427_);
lean_dec(v_a_2427_);
v___x_2429_ = l_Lean_Syntax_getPos_x3f(v_ref_2428_, v___y_2424_);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_unsigned_to_nat(0u);
v___y_2415_ = v___y_2423_;
v___y_2416_ = v___y_2424_;
v___y_2417_ = v_ref_2428_;
v___y_2418_ = v___y_2425_;
v___y_2419_ = v___x_2430_;
goto v___jp_2414_;
}
else
{
lean_object* v_val_2431_; 
v_val_2431_ = lean_ctor_get(v___x_2429_, 0);
lean_inc(v_val_2431_);
lean_dec_ref_known(v___x_2429_, 1);
v___y_2415_ = v___y_2423_;
v___y_2416_ = v___y_2424_;
v___y_2417_ = v_ref_2428_;
v___y_2418_ = v___y_2425_;
v___y_2419_ = v_val_2431_;
goto v___jp_2414_;
}
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
lean_dec_ref(v_msgData_2315_);
v_a_2432_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2426_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2426_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
v___jp_2441_:
{
if (v___y_2444_ == 0)
{
v___y_2423_ = v___y_2442_;
v___y_2424_ = v___y_2443_;
v___y_2425_ = v_severity_2316_;
goto v___jp_2422_;
}
else
{
v___y_2423_ = v___y_2442_;
v___y_2424_ = v___y_2443_;
v___y_2425_ = v___x_2440_;
goto v___jp_2422_;
}
}
v___jp_2445_:
{
if (v___y_2446_ == 0)
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v_scopes_2449_; lean_object* v___x_2450_; lean_object* v_opts_2451_; uint8_t v___x_2452_; uint8_t v___x_2453_; 
v___x_2447_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2448_ = lean_st_ref_get(v___y_2319_);
v_scopes_2449_ = lean_ctor_get(v___x_2448_, 2);
lean_inc(v_scopes_2449_);
lean_dec(v___x_2448_);
v___x_2450_ = l_List_head_x21___redArg(v___x_2447_, v_scopes_2449_);
lean_dec(v_scopes_2449_);
v_opts_2451_ = lean_ctor_get(v___x_2450_, 1);
lean_inc_ref(v_opts_2451_);
lean_dec(v___x_2450_);
v___x_2452_ = 1;
v___x_2453_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2316_, v___x_2452_);
if (v___x_2453_ == 0)
{
lean_dec_ref(v_opts_2451_);
v___y_2442_ = v___y_2446_;
v___y_2443_ = v___y_2446_;
v___y_2444_ = v___x_2453_;
goto v___jp_2441_;
}
else
{
lean_object* v___x_2454_; uint8_t v___x_2455_; 
v___x_2454_ = l_Lean_warningAsError;
v___x_2455_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_2451_, v___x_2454_);
lean_dec_ref(v_opts_2451_);
v___y_2442_ = v___y_2446_;
v___y_2443_ = v___y_2446_;
v___y_2444_ = v___x_2455_;
goto v___jp_2441_;
}
}
else
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_dec_ref(v_msgData_2315_);
v___x_2456_ = lean_box(0);
v___x_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
return v___x_2457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2___boxed(lean_object* v_ref_2460_, lean_object* v_msgData_2461_, lean_object* v_severity_2462_, lean_object* v_isSilent_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
uint8_t v_severity_boxed_2467_; uint8_t v_isSilent_boxed_2468_; lean_object* v_res_2469_; 
v_severity_boxed_2467_ = lean_unbox(v_severity_2462_);
v_isSilent_boxed_2468_ = lean_unbox(v_isSilent_2463_);
v_res_2469_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(v_ref_2460_, v_msgData_2461_, v_severity_boxed_2467_, v_isSilent_boxed_2468_, v___y_2464_, v___y_2465_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
lean_dec(v_ref_2460_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(lean_object* v_ref_2470_, lean_object* v_msgData_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_){
_start:
{
uint8_t v___x_2475_; uint8_t v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = 2;
v___x_2476_ = 0;
v___x_2477_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(v_ref_2470_, v_msgData_2471_, v___x_2475_, v___x_2476_, v___y_2472_, v___y_2473_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2___boxed(lean_object* v_ref_2478_, lean_object* v_msgData_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(v_ref_2478_, v_msgData_2479_, v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v_ref_2478_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(lean_object* v___x_2484_, lean_object* v___x_2485_, lean_object* v___x_2486_, lean_object* v_a_2487_, lean_object* v_b_2488_){
_start:
{
lean_object* v_it_2490_; lean_object* v_startInclusive_2491_; lean_object* v_endExclusive_2492_; 
if (lean_obj_tag(v_a_2487_) == 0)
{
lean_object* v_currPos_2497_; lean_object* v_searcher_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2527_; 
v_currPos_2497_ = lean_ctor_get(v_a_2487_, 0);
v_searcher_2498_ = lean_ctor_get(v_a_2487_, 1);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_a_2487_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2500_ = v_a_2487_;
v_isShared_2501_ = v_isSharedCheck_2527_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_searcher_2498_);
lean_inc(v_currPos_2497_);
lean_dec(v_a_2487_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2527_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v_str_2502_; lean_object* v_startInclusive_2503_; lean_object* v_endExclusive_2504_; lean_object* v___x_2505_; uint8_t v_decide_2506_; 
v_str_2502_ = lean_ctor_get(v___x_2485_, 0);
v_startInclusive_2503_ = lean_ctor_get(v___x_2485_, 1);
v_endExclusive_2504_ = lean_ctor_get(v___x_2485_, 2);
v___x_2505_ = lean_nat_sub(v_endExclusive_2504_, v_startInclusive_2503_);
v_decide_2506_ = lean_nat_dec_eq(v_searcher_2498_, v___x_2505_);
lean_dec(v___x_2505_);
if (v_decide_2506_ == 0)
{
uint32_t v___x_2507_; lean_object* v___x_2508_; uint32_t v___x_2509_; uint8_t v___x_2510_; 
v___x_2507_ = 10;
v___x_2508_ = lean_nat_add(v_startInclusive_2503_, v_searcher_2498_);
v___x_2509_ = lean_string_utf8_get_fast(v_str_2502_, v___x_2508_);
v___x_2510_ = lean_uint32_dec_eq(v___x_2509_, v___x_2507_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2514_; 
lean_dec(v_searcher_2498_);
v___x_2511_ = lean_string_utf8_next_fast(v_str_2502_, v___x_2508_);
lean_dec(v___x_2508_);
v___x_2512_ = lean_nat_sub(v___x_2511_, v_startInclusive_2503_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 1, v___x_2512_);
v___x_2514_ = v___x_2500_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_currPos_2497_);
lean_ctor_set(v_reuseFailAlloc_2516_, 1, v___x_2512_);
v___x_2514_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
v_a_2487_ = v___x_2514_;
goto _start;
}
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v_slice_2520_; lean_object* v_nextIt_2522_; 
v___x_2517_ = lean_string_utf8_next_fast(v_str_2502_, v___x_2508_);
v___x_2518_ = lean_nat_sub(v___x_2517_, v___x_2508_);
lean_dec(v___x_2508_);
v___x_2519_ = lean_nat_add(v_searcher_2498_, v___x_2518_);
lean_dec(v___x_2518_);
v_slice_2520_ = l_String_Slice_subslice_x21(v___x_2485_, v_currPos_2497_, v_searcher_2498_);
lean_inc(v___x_2519_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 1, v___x_2519_);
lean_ctor_set(v___x_2500_, 0, v___x_2519_);
v_nextIt_2522_ = v___x_2500_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v___x_2519_);
lean_ctor_set(v_reuseFailAlloc_2525_, 1, v___x_2519_);
v_nextIt_2522_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
lean_object* v_startInclusive_2523_; lean_object* v_endExclusive_2524_; 
v_startInclusive_2523_ = lean_ctor_get(v_slice_2520_, 0);
lean_inc(v_startInclusive_2523_);
v_endExclusive_2524_ = lean_ctor_get(v_slice_2520_, 1);
lean_inc(v_endExclusive_2524_);
lean_dec_ref(v_slice_2520_);
v_it_2490_ = v_nextIt_2522_;
v_startInclusive_2491_ = v_startInclusive_2523_;
v_endExclusive_2492_ = v_endExclusive_2524_;
goto v___jp_2489_;
}
}
}
else
{
lean_object* v___x_2526_; 
lean_del_object(v___x_2500_);
lean_dec(v_searcher_2498_);
v___x_2526_ = lean_box(1);
lean_inc(v___x_2486_);
v_it_2490_ = v___x_2526_;
v_startInclusive_2491_ = v_currPos_2497_;
v_endExclusive_2492_ = v___x_2486_;
goto v___jp_2489_;
}
}
}
else
{
lean_dec(v___x_2486_);
lean_dec_ref(v___x_2484_);
return v_b_2488_;
}
v___jp_2489_:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_inc_ref(v___x_2484_);
v___x_2493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2484_);
lean_ctor_set(v___x_2493_, 1, v_startInclusive_2491_);
lean_ctor_set(v___x_2493_, 2, v_endExclusive_2492_);
v___x_2494_ = l_String_Slice_toString(v___x_2493_);
lean_dec_ref_known(v___x_2493_, 3);
v___x_2495_ = lean_array_push(v_b_2488_, v___x_2494_);
v_a_2487_ = v_it_2490_;
v_b_2488_ = v___x_2495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg___boxed(lean_object* v___x_2528_, lean_object* v___x_2529_, lean_object* v___x_2530_, lean_object* v_a_2531_, lean_object* v_b_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_2528_, v___x_2529_, v___x_2530_, v_a_2531_, v_b_2532_);
lean_dec_ref(v___x_2529_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(lean_object* v___x_2534_, lean_object* v___x_2535_, lean_object* v___x_2536_, lean_object* v_a_2537_, lean_object* v_b_2538_){
_start:
{
lean_object* v_it_2540_; lean_object* v_startInclusive_2541_; lean_object* v_endExclusive_2542_; 
if (lean_obj_tag(v_a_2537_) == 0)
{
lean_object* v_currPos_2547_; lean_object* v_searcher_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2577_; 
v_currPos_2547_ = lean_ctor_get(v_a_2537_, 0);
v_searcher_2548_ = lean_ctor_get(v_a_2537_, 1);
v_isSharedCheck_2577_ = !lean_is_exclusive(v_a_2537_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2550_ = v_a_2537_;
v_isShared_2551_ = v_isSharedCheck_2577_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_searcher_2548_);
lean_inc(v_currPos_2547_);
lean_dec(v_a_2537_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2577_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v_str_2552_; lean_object* v_startInclusive_2553_; lean_object* v_endExclusive_2554_; lean_object* v___x_2555_; uint8_t v_decide_2556_; 
v_str_2552_ = lean_ctor_get(v___x_2535_, 0);
v_startInclusive_2553_ = lean_ctor_get(v___x_2535_, 1);
v_endExclusive_2554_ = lean_ctor_get(v___x_2535_, 2);
v___x_2555_ = lean_nat_sub(v_endExclusive_2554_, v_startInclusive_2553_);
v_decide_2556_ = lean_nat_dec_eq(v_searcher_2548_, v___x_2555_);
lean_dec(v___x_2555_);
if (v_decide_2556_ == 0)
{
lean_object* v___x_2557_; uint32_t v___x_2558_; uint32_t v___x_2559_; uint8_t v___x_2560_; 
v___x_2557_ = lean_nat_add(v_startInclusive_2553_, v_searcher_2548_);
v___x_2558_ = lean_string_utf8_get_fast(v_str_2552_, v___x_2557_);
v___x_2559_ = 10;
v___x_2560_ = lean_uint32_dec_eq(v___x_2558_, v___x_2559_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2564_; 
lean_dec(v_searcher_2548_);
v___x_2561_ = lean_string_utf8_next_fast(v_str_2552_, v___x_2557_);
lean_dec(v___x_2557_);
v___x_2562_ = lean_nat_sub(v___x_2561_, v_startInclusive_2553_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 1, v___x_2562_);
v___x_2564_ = v___x_2550_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_currPos_2547_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v___x_2562_);
v___x_2564_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
lean_object* v___x_2565_; 
v___x_2565_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_2534_, v___x_2535_, v___x_2536_, v___x_2564_, v_b_2538_);
return v___x_2565_;
}
}
else
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v_slice_2570_; lean_object* v_nextIt_2572_; 
v___x_2567_ = lean_string_utf8_next_fast(v_str_2552_, v___x_2557_);
v___x_2568_ = lean_nat_sub(v___x_2567_, v___x_2557_);
lean_dec(v___x_2557_);
v___x_2569_ = lean_nat_add(v_searcher_2548_, v___x_2568_);
lean_dec(v___x_2568_);
v_slice_2570_ = l_String_Slice_subslice_x21(v___x_2535_, v_currPos_2547_, v_searcher_2548_);
lean_inc(v___x_2569_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 1, v___x_2569_);
lean_ctor_set(v___x_2550_, 0, v___x_2569_);
v_nextIt_2572_ = v___x_2550_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2569_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v___x_2569_);
v_nextIt_2572_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
lean_object* v_startInclusive_2573_; lean_object* v_endExclusive_2574_; 
v_startInclusive_2573_ = lean_ctor_get(v_slice_2570_, 0);
lean_inc(v_startInclusive_2573_);
v_endExclusive_2574_ = lean_ctor_get(v_slice_2570_, 1);
lean_inc(v_endExclusive_2574_);
lean_dec_ref(v_slice_2570_);
v_it_2540_ = v_nextIt_2572_;
v_startInclusive_2541_ = v_startInclusive_2573_;
v_endExclusive_2542_ = v_endExclusive_2574_;
goto v___jp_2539_;
}
}
}
else
{
lean_object* v___x_2576_; 
lean_del_object(v___x_2550_);
lean_dec(v_searcher_2548_);
v___x_2576_ = lean_box(1);
lean_inc(v___x_2536_);
v_it_2540_ = v___x_2576_;
v_startInclusive_2541_ = v_currPos_2547_;
v_endExclusive_2542_ = v___x_2536_;
goto v___jp_2539_;
}
}
}
else
{
lean_dec(v___x_2536_);
lean_dec_ref(v___x_2534_);
return v_b_2538_;
}
v___jp_2539_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
lean_inc_ref(v___x_2534_);
v___x_2543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2534_);
lean_ctor_set(v___x_2543_, 1, v_startInclusive_2541_);
lean_ctor_set(v___x_2543_, 2, v_endExclusive_2542_);
v___x_2544_ = l_String_Slice_toString(v___x_2543_);
lean_dec_ref_known(v___x_2543_, 3);
v___x_2545_ = lean_array_push(v_b_2538_, v___x_2544_);
v___x_2546_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_2534_, v___x_2535_, v___x_2536_, v_it_2540_, v___x_2545_);
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg___boxed(lean_object* v___x_2578_, lean_object* v___x_2579_, lean_object* v___x_2580_, lean_object* v_a_2581_, lean_object* v_b_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___x_2578_, v___x_2579_, v___x_2580_, v_a_2581_, v_b_2582_);
lean_dec_ref(v___x_2579_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(lean_object* v_t_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v___x_2587_; lean_object* v_infoState_2588_; uint8_t v_enabled_2589_; 
v___x_2587_ = lean_st_ref_get(v___y_2585_);
v_infoState_2588_ = lean_ctor_get(v___x_2587_, 8);
lean_inc_ref(v_infoState_2588_);
lean_dec(v___x_2587_);
v_enabled_2589_ = lean_ctor_get_uint8(v_infoState_2588_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2588_);
if (v_enabled_2589_ == 0)
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
lean_dec_ref(v_t_2584_);
v___x_2590_ = lean_box(0);
v___x_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2590_);
return v___x_2591_;
}
else
{
lean_object* v___x_2592_; lean_object* v_infoState_2593_; lean_object* v_env_2594_; lean_object* v_messages_2595_; lean_object* v_scopes_2596_; lean_object* v_usedQuotCtxts_2597_; lean_object* v_nextMacroScope_2598_; lean_object* v_maxRecDepth_2599_; lean_object* v_ngen_2600_; lean_object* v_auxDeclNGen_2601_; lean_object* v_traceState_2602_; lean_object* v_snapshotTasks_2603_; lean_object* v_prevLinterStates_2604_; lean_object* v_codeQualityEntryTasks_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2627_; 
v___x_2592_ = lean_st_ref_take(v___y_2585_);
v_infoState_2593_ = lean_ctor_get(v___x_2592_, 8);
v_env_2594_ = lean_ctor_get(v___x_2592_, 0);
v_messages_2595_ = lean_ctor_get(v___x_2592_, 1);
v_scopes_2596_ = lean_ctor_get(v___x_2592_, 2);
v_usedQuotCtxts_2597_ = lean_ctor_get(v___x_2592_, 3);
v_nextMacroScope_2598_ = lean_ctor_get(v___x_2592_, 4);
v_maxRecDepth_2599_ = lean_ctor_get(v___x_2592_, 5);
v_ngen_2600_ = lean_ctor_get(v___x_2592_, 6);
v_auxDeclNGen_2601_ = lean_ctor_get(v___x_2592_, 7);
v_traceState_2602_ = lean_ctor_get(v___x_2592_, 9);
v_snapshotTasks_2603_ = lean_ctor_get(v___x_2592_, 10);
v_prevLinterStates_2604_ = lean_ctor_get(v___x_2592_, 11);
v_codeQualityEntryTasks_2605_ = lean_ctor_get(v___x_2592_, 12);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2592_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2607_ = v___x_2592_;
v_isShared_2608_ = v_isSharedCheck_2627_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2605_);
lean_inc(v_prevLinterStates_2604_);
lean_inc(v_snapshotTasks_2603_);
lean_inc(v_traceState_2602_);
lean_inc(v_infoState_2593_);
lean_inc(v_auxDeclNGen_2601_);
lean_inc(v_ngen_2600_);
lean_inc(v_maxRecDepth_2599_);
lean_inc(v_nextMacroScope_2598_);
lean_inc(v_usedQuotCtxts_2597_);
lean_inc(v_scopes_2596_);
lean_inc(v_messages_2595_);
lean_inc(v_env_2594_);
lean_dec(v___x_2592_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2627_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
uint8_t v_enabled_2609_; lean_object* v_assignment_2610_; lean_object* v_lazyAssignment_2611_; lean_object* v_trees_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2626_; 
v_enabled_2609_ = lean_ctor_get_uint8(v_infoState_2593_, sizeof(void*)*3);
v_assignment_2610_ = lean_ctor_get(v_infoState_2593_, 0);
v_lazyAssignment_2611_ = lean_ctor_get(v_infoState_2593_, 1);
v_trees_2612_ = lean_ctor_get(v_infoState_2593_, 2);
v_isSharedCheck_2626_ = !lean_is_exclusive(v_infoState_2593_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2614_ = v_infoState_2593_;
v_isShared_2615_ = v_isSharedCheck_2626_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_trees_2612_);
lean_inc(v_lazyAssignment_2611_);
lean_inc(v_assignment_2610_);
lean_dec(v_infoState_2593_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2626_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2619_; 
v___x_2616_ = lean_box(0);
v___x_2617_ = l_Lean_PersistentArray_push___redArg(v_trees_2612_, v_t_2584_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 2, v___x_2617_);
v___x_2619_ = v___x_2614_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_assignment_2610_);
lean_ctor_set(v_reuseFailAlloc_2625_, 1, v_lazyAssignment_2611_);
lean_ctor_set(v_reuseFailAlloc_2625_, 2, v___x_2617_);
lean_ctor_set_uint8(v_reuseFailAlloc_2625_, sizeof(void*)*3, v_enabled_2609_);
v___x_2619_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2621_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 8, v___x_2619_);
v___x_2621_ = v___x_2607_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_env_2594_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v_messages_2595_);
lean_ctor_set(v_reuseFailAlloc_2624_, 2, v_scopes_2596_);
lean_ctor_set(v_reuseFailAlloc_2624_, 3, v_usedQuotCtxts_2597_);
lean_ctor_set(v_reuseFailAlloc_2624_, 4, v_nextMacroScope_2598_);
lean_ctor_set(v_reuseFailAlloc_2624_, 5, v_maxRecDepth_2599_);
lean_ctor_set(v_reuseFailAlloc_2624_, 6, v_ngen_2600_);
lean_ctor_set(v_reuseFailAlloc_2624_, 7, v_auxDeclNGen_2601_);
lean_ctor_set(v_reuseFailAlloc_2624_, 8, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2624_, 9, v_traceState_2602_);
lean_ctor_set(v_reuseFailAlloc_2624_, 10, v_snapshotTasks_2603_);
lean_ctor_set(v_reuseFailAlloc_2624_, 11, v_prevLinterStates_2604_);
lean_ctor_set(v_reuseFailAlloc_2624_, 12, v_codeQualityEntryTasks_2605_);
v___x_2621_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = lean_st_ref_put(v___y_2585_, v___x_2621_);
v___x_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2616_);
return v___x_2623_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg___boxed(lean_object* v_t_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(v_t_2628_, v___y_2629_);
lean_dec(v___y_2629_);
return v_res_2631_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2632_ = lean_unsigned_to_nat(32u);
v___x_2633_ = lean_mk_empty_array_with_capacity(v___x_2632_);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
return v___x_2634_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1(void){
_start:
{
size_t v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2635_ = ((size_t)5ULL);
v___x_2636_ = lean_unsigned_to_nat(0u);
v___x_2637_ = lean_unsigned_to_nat(32u);
v___x_2638_ = lean_mk_empty_array_with_capacity(v___x_2637_);
v___x_2639_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__0);
v___x_2640_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
lean_ctor_set(v___x_2640_, 1, v___x_2638_);
lean_ctor_set(v___x_2640_, 2, v___x_2636_);
lean_ctor_set(v___x_2640_, 3, v___x_2636_);
lean_ctor_set_usize(v___x_2640_, 4, v___x_2635_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(lean_object* v_t_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_){
_start:
{
lean_object* v___x_2645_; lean_object* v_infoState_2646_; uint8_t v_enabled_2647_; 
v___x_2645_ = lean_st_ref_get(v___y_2643_);
v_infoState_2646_ = lean_ctor_get(v___x_2645_, 8);
lean_inc_ref(v_infoState_2646_);
lean_dec(v___x_2645_);
v_enabled_2647_ = lean_ctor_get_uint8(v_infoState_2646_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2646_);
if (v_enabled_2647_ == 0)
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
lean_dec_ref(v_t_2641_);
v___x_2648_ = lean_box(0);
v___x_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2648_);
return v___x_2649_;
}
else
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2650_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___closed__1);
v___x_2651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2651_, 0, v_t_2641_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
v___x_2652_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(v___x_2651_, v___y_2643_);
return v___x_2652_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3___boxed(lean_object* v_t_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(v_t_2653_, v___y_2654_, v___y_2655_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(lean_object* v___x_2658_, lean_object* v_edited_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_){
_start:
{
lean_object* v_fst_2662_; lean_object* v_snd_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2687_; 
v_fst_2662_ = lean_ctor_get(v_a_2661_, 0);
v_snd_2663_ = lean_ctor_get(v_a_2661_, 1);
v_isSharedCheck_2687_ = !lean_is_exclusive(v_a_2661_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2665_ = v_a_2661_;
v_isShared_2666_ = v_isSharedCheck_2687_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_snd_2663_);
lean_inc(v_fst_2662_);
lean_dec(v_a_2661_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2687_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
uint8_t v___x_2667_; 
v___x_2667_ = lean_nat_dec_lt(v_snd_2663_, v___x_2658_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2669_; 
if (v_isShared_2666_ == 0)
{
v___x_2669_ = v___x_2665_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_fst_2662_);
lean_ctor_set(v_reuseFailAlloc_2670_, 1, v_snd_2663_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
else
{
lean_object* v___x_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; 
v___x_2671_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_2672_ = lean_array_get_borrowed(v___x_2671_, v_edited_2659_, v_snd_2663_);
v___x_2673_ = lean_string_dec_eq(v___x_2672_, v_a_2660_);
if (v___x_2673_ == 0)
{
uint8_t v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2674_ = 0;
v___x_2675_ = lean_box(v___x_2674_);
lean_inc(v___x_2672_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 1, v___x_2672_);
lean_ctor_set(v___x_2665_, 0, v___x_2675_);
v___x_2677_ = v___x_2665_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2675_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v___x_2672_);
v___x_2677_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2678_ = lean_array_push(v_fst_2662_, v___x_2677_);
v___x_2679_ = lean_unsigned_to_nat(1u);
v___x_2680_ = lean_nat_add(v_snd_2663_, v___x_2679_);
lean_dec(v_snd_2663_);
v___x_2681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2678_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
v_a_2661_ = v___x_2681_;
goto _start;
}
}
else
{
lean_object* v___x_2685_; 
if (v_isShared_2666_ == 0)
{
v___x_2685_ = v___x_2665_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_fst_2662_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v_snd_2663_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg___boxed(lean_object* v___x_2688_, lean_object* v_edited_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_2688_, v_edited_2689_, v_a_2690_, v_a_2691_);
lean_dec_ref(v_a_2690_);
lean_dec_ref(v_edited_2689_);
lean_dec(v___x_2688_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(lean_object* v___x_2693_, lean_object* v_original_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_){
_start:
{
lean_object* v_fst_2697_; lean_object* v_snd_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2722_; 
v_fst_2697_ = lean_ctor_get(v_a_2696_, 0);
v_snd_2698_ = lean_ctor_get(v_a_2696_, 1);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_a_2696_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2700_ = v_a_2696_;
v_isShared_2701_ = v_isSharedCheck_2722_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_snd_2698_);
lean_inc(v_fst_2697_);
lean_dec(v_a_2696_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2722_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
uint8_t v___x_2702_; 
v___x_2702_ = lean_nat_dec_lt(v_snd_2698_, v___x_2693_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2704_; 
if (v_isShared_2701_ == 0)
{
v___x_2704_ = v___x_2700_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_fst_2697_);
lean_ctor_set(v_reuseFailAlloc_2705_, 1, v_snd_2698_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
else
{
lean_object* v___x_2706_; lean_object* v___x_2707_; uint8_t v___x_2708_; 
v___x_2706_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___x_2707_ = lean_array_get_borrowed(v___x_2706_, v_original_2694_, v_snd_2698_);
v___x_2708_ = lean_string_dec_eq(v___x_2707_, v_a_2695_);
if (v___x_2708_ == 0)
{
uint8_t v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
v___x_2709_ = 1;
v___x_2710_ = lean_box(v___x_2709_);
lean_inc(v___x_2707_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 1, v___x_2707_);
lean_ctor_set(v___x_2700_, 0, v___x_2710_);
v___x_2712_ = v___x_2700_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2710_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v___x_2707_);
v___x_2712_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2713_ = lean_array_push(v_fst_2697_, v___x_2712_);
v___x_2714_ = lean_unsigned_to_nat(1u);
v___x_2715_ = lean_nat_add(v_snd_2698_, v___x_2714_);
lean_dec(v_snd_2698_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2713_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v_a_2696_ = v___x_2716_;
goto _start;
}
}
else
{
lean_object* v___x_2720_; 
if (v_isShared_2701_ == 0)
{
v___x_2720_ = v___x_2700_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_fst_2697_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v_snd_2698_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg___boxed(lean_object* v___x_2723_, lean_object* v_original_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_2723_, v_original_2724_, v_a_2725_, v_a_2726_);
lean_dec_ref(v_a_2725_);
lean_dec_ref(v_original_2724_);
lean_dec(v___x_2723_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(lean_object* v___x_2728_, lean_object* v_original_2729_, lean_object* v___x_2730_, lean_object* v_edited_2731_, lean_object* v_as_2732_, size_t v_sz_2733_, size_t v_i_2734_, lean_object* v_b_2735_){
_start:
{
uint8_t v___x_2736_; 
v___x_2736_ = lean_usize_dec_lt(v_i_2734_, v_sz_2733_);
if (v___x_2736_ == 0)
{
return v_b_2735_;
}
else
{
lean_object* v_snd_2737_; lean_object* v_fst_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2785_; 
v_snd_2737_ = lean_ctor_get(v_b_2735_, 1);
v_fst_2738_ = lean_ctor_get(v_b_2735_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v_b_2735_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2740_ = v_b_2735_;
v_isShared_2741_ = v_isSharedCheck_2785_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_snd_2737_);
lean_inc(v_fst_2738_);
lean_dec(v_b_2735_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2785_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v_fst_2742_; lean_object* v_snd_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2784_; 
v_fst_2742_ = lean_ctor_get(v_snd_2737_, 0);
v_snd_2743_ = lean_ctor_get(v_snd_2737_, 1);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_snd_2737_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2745_ = v_snd_2737_;
v_isShared_2746_ = v_isSharedCheck_2784_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_snd_2743_);
lean_inc(v_fst_2742_);
lean_dec(v_snd_2737_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2784_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v_a_2747_; lean_object* v___x_2749_; 
v_a_2747_ = lean_array_uget_borrowed(v_as_2732_, v_i_2734_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 1, v_fst_2742_);
lean_ctor_set(v___x_2745_, 0, v_fst_2738_);
v___x_2749_ = v___x_2745_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_fst_2738_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v_fst_2742_);
v___x_2749_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2750_; lean_object* v_fst_2751_; lean_object* v_snd_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2782_; 
v___x_2750_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_2728_, v_original_2729_, v_a_2747_, v___x_2749_);
v_fst_2751_ = lean_ctor_get(v___x_2750_, 0);
v_snd_2752_ = lean_ctor_get(v___x_2750_, 1);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2754_ = v___x_2750_;
v_isShared_2755_ = v_isSharedCheck_2782_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_snd_2752_);
lean_inc(v_fst_2751_);
lean_dec(v___x_2750_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2782_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 1, v_snd_2743_);
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_fst_2751_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_snd_2743_);
v___x_2757_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
lean_object* v___x_2758_; lean_object* v_fst_2759_; lean_object* v_snd_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2780_; 
v___x_2758_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_2730_, v_edited_2731_, v_a_2747_, v___x_2757_);
v_fst_2759_ = lean_ctor_get(v___x_2758_, 0);
v_snd_2760_ = lean_ctor_get(v___x_2758_, 1);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2762_ = v___x_2758_;
v_isShared_2763_ = v_isSharedCheck_2780_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_snd_2760_);
lean_inc(v_fst_2759_);
lean_dec(v___x_2758_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2780_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
uint8_t v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2767_; 
v___x_2764_ = 2;
v___x_2765_ = lean_box(v___x_2764_);
lean_inc(v_a_2747_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 1, v_a_2747_);
lean_ctor_set(v___x_2762_, 0, v___x_2765_);
v___x_2767_ = v___x_2762_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2765_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_a_2747_);
v___x_2767_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2773_; 
v___x_2768_ = lean_array_push(v_fst_2759_, v___x_2767_);
v___x_2769_ = lean_unsigned_to_nat(1u);
v___x_2770_ = lean_nat_add(v_snd_2752_, v___x_2769_);
lean_dec(v_snd_2752_);
v___x_2771_ = lean_nat_add(v_snd_2760_, v___x_2769_);
lean_dec(v_snd_2760_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 1, v___x_2771_);
lean_ctor_set(v___x_2740_, 0, v___x_2770_);
v___x_2773_ = v___x_2740_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2778_, 1, v___x_2771_);
v___x_2773_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
lean_object* v___x_2774_; size_t v___x_2775_; size_t v___x_2776_; 
v___x_2774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2768_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
v___x_2775_ = ((size_t)1ULL);
v___x_2776_ = lean_usize_add(v_i_2734_, v___x_2775_);
v_i_2734_ = v___x_2776_;
v_b_2735_ = v___x_2774_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24___boxed(lean_object* v___x_2786_, lean_object* v_original_2787_, lean_object* v___x_2788_, lean_object* v_edited_2789_, lean_object* v_as_2790_, lean_object* v_sz_2791_, lean_object* v_i_2792_, lean_object* v_b_2793_){
_start:
{
size_t v_sz_boxed_2794_; size_t v_i_boxed_2795_; lean_object* v_res_2796_; 
v_sz_boxed_2794_ = lean_unbox_usize(v_sz_2791_);
lean_dec(v_sz_2791_);
v_i_boxed_2795_ = lean_unbox_usize(v_i_2792_);
lean_dec(v_i_2792_);
v_res_2796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(v___x_2786_, v_original_2787_, v___x_2788_, v_edited_2789_, v_as_2790_, v_sz_boxed_2794_, v_i_boxed_2795_, v_b_2793_);
lean_dec_ref(v_as_2790_);
lean_dec_ref(v_edited_2789_);
lean_dec(v___x_2788_);
lean_dec_ref(v_original_2787_);
lean_dec(v___x_2786_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(lean_object* v___x_2797_, lean_object* v_edited_2798_, lean_object* v___x_2799_, lean_object* v_original_2800_, lean_object* v_as_2801_, size_t v_sz_2802_, size_t v_i_2803_, lean_object* v_b_2804_){
_start:
{
uint8_t v___x_2805_; 
v___x_2805_ = lean_usize_dec_lt(v_i_2803_, v_sz_2802_);
if (v___x_2805_ == 0)
{
return v_b_2804_;
}
else
{
lean_object* v_snd_2806_; lean_object* v_fst_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2854_; 
v_snd_2806_ = lean_ctor_get(v_b_2804_, 1);
v_fst_2807_ = lean_ctor_get(v_b_2804_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v_b_2804_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2809_ = v_b_2804_;
v_isShared_2810_ = v_isSharedCheck_2854_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_snd_2806_);
lean_inc(v_fst_2807_);
lean_dec(v_b_2804_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2854_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v_fst_2811_; lean_object* v_snd_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2853_; 
v_fst_2811_ = lean_ctor_get(v_snd_2806_, 0);
v_snd_2812_ = lean_ctor_get(v_snd_2806_, 1);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_snd_2806_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2814_ = v_snd_2806_;
v_isShared_2815_ = v_isSharedCheck_2853_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_snd_2812_);
lean_inc(v_fst_2811_);
lean_dec(v_snd_2806_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2853_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v_a_2816_; lean_object* v___x_2818_; 
v_a_2816_ = lean_array_uget_borrowed(v_as_2801_, v_i_2803_);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 1, v_fst_2811_);
lean_ctor_set(v___x_2814_, 0, v_fst_2807_);
v___x_2818_ = v___x_2814_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_fst_2807_);
lean_ctor_set(v_reuseFailAlloc_2852_, 1, v_fst_2811_);
v___x_2818_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2819_; lean_object* v_fst_2820_; lean_object* v_snd_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2851_; 
v___x_2819_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_2799_, v_original_2800_, v_a_2816_, v___x_2818_);
v_fst_2820_ = lean_ctor_get(v___x_2819_, 0);
v_snd_2821_ = lean_ctor_get(v___x_2819_, 1);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2823_ = v___x_2819_;
v_isShared_2824_ = v_isSharedCheck_2851_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_snd_2821_);
lean_inc(v_fst_2820_);
lean_dec(v___x_2819_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2851_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 1, v_snd_2812_);
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_fst_2820_);
lean_ctor_set(v_reuseFailAlloc_2850_, 1, v_snd_2812_);
v___x_2826_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2827_; lean_object* v_fst_2828_; lean_object* v_snd_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2849_; 
v___x_2827_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_2797_, v_edited_2798_, v_a_2816_, v___x_2826_);
v_fst_2828_ = lean_ctor_get(v___x_2827_, 0);
v_snd_2829_ = lean_ctor_get(v___x_2827_, 1);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2831_ = v___x_2827_;
v_isShared_2832_ = v_isSharedCheck_2849_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_snd_2829_);
lean_inc(v_fst_2828_);
lean_dec(v___x_2827_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2849_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
uint8_t v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2836_; 
v___x_2833_ = 2;
v___x_2834_ = lean_box(v___x_2833_);
lean_inc(v_a_2816_);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 1, v_a_2816_);
lean_ctor_set(v___x_2831_, 0, v___x_2834_);
v___x_2836_ = v___x_2831_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v___x_2834_);
lean_ctor_set(v_reuseFailAlloc_2848_, 1, v_a_2816_);
v___x_2836_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2837_ = lean_array_push(v_fst_2828_, v___x_2836_);
v___x_2838_ = lean_unsigned_to_nat(1u);
v___x_2839_ = lean_nat_add(v_snd_2821_, v___x_2838_);
lean_dec(v_snd_2821_);
v___x_2840_ = lean_nat_add(v_snd_2829_, v___x_2838_);
lean_dec(v_snd_2829_);
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 1, v___x_2840_);
lean_ctor_set(v___x_2809_, 0, v___x_2839_);
v___x_2842_ = v___x_2809_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2847_, 1, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2843_; size_t v___x_2844_; size_t v___x_2845_; lean_object* v___x_2846_; 
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2837_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = ((size_t)1ULL);
v___x_2845_ = lean_usize_add(v_i_2803_, v___x_2844_);
v___x_2846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13_spec__24(v___x_2799_, v_original_2800_, v___x_2797_, v_edited_2798_, v_as_2801_, v_sz_2802_, v___x_2845_, v___x_2843_);
return v___x_2846_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13___boxed(lean_object* v___x_2855_, lean_object* v_edited_2856_, lean_object* v___x_2857_, lean_object* v_original_2858_, lean_object* v_as_2859_, lean_object* v_sz_2860_, lean_object* v_i_2861_, lean_object* v_b_2862_){
_start:
{
size_t v_sz_boxed_2863_; size_t v_i_boxed_2864_; lean_object* v_res_2865_; 
v_sz_boxed_2863_ = lean_unbox_usize(v_sz_2860_);
lean_dec(v_sz_2860_);
v_i_boxed_2864_ = lean_unbox_usize(v_i_2861_);
lean_dec(v_i_2861_);
v_res_2865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(v___x_2855_, v_edited_2856_, v___x_2857_, v_original_2858_, v_as_2859_, v_sz_boxed_2863_, v_i_boxed_2864_, v_b_2862_);
lean_dec_ref(v_as_2859_);
lean_dec_ref(v_original_2858_);
lean_dec(v___x_2857_);
lean_dec_ref(v_edited_2856_);
lean_dec(v___x_2855_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(lean_object* v___x_2866_, lean_object* v_original_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v_fst_2869_; lean_object* v_snd_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2889_; 
v_fst_2869_ = lean_ctor_get(v_a_2868_, 0);
v_snd_2870_ = lean_ctor_get(v_a_2868_, 1);
v_isSharedCheck_2889_ = !lean_is_exclusive(v_a_2868_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2872_ = v_a_2868_;
v_isShared_2873_ = v_isSharedCheck_2889_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_snd_2870_);
lean_inc(v_fst_2869_);
lean_dec(v_a_2868_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2889_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
uint8_t v___x_2874_; 
v___x_2874_ = lean_nat_dec_lt(v_snd_2870_, v___x_2866_);
if (v___x_2874_ == 0)
{
lean_object* v___x_2876_; 
if (v_isShared_2873_ == 0)
{
v___x_2876_ = v___x_2872_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_fst_2869_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_snd_2870_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
else
{
uint8_t v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2882_; 
v___x_2878_ = 1;
v___x_2879_ = lean_array_fget_borrowed(v_original_2867_, v_snd_2870_);
v___x_2880_ = lean_box(v___x_2878_);
lean_inc(v___x_2879_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set(v___x_2872_, 1, v___x_2879_);
lean_ctor_set(v___x_2872_, 0, v___x_2880_);
v___x_2882_ = v___x_2872_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v___x_2879_);
v___x_2882_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2883_ = lean_array_push(v_fst_2869_, v___x_2882_);
v___x_2884_ = lean_unsigned_to_nat(1u);
v___x_2885_ = lean_nat_add(v_snd_2870_, v___x_2884_);
lean_dec(v_snd_2870_);
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2883_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v_a_2868_ = v___x_2886_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg___boxed(lean_object* v___x_2890_, lean_object* v_original_2891_, lean_object* v_a_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(v___x_2890_, v_original_2891_, v_a_2892_);
lean_dec_ref(v_original_2891_);
lean_dec(v___x_2890_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(size_t v_sz_2894_, size_t v_i_2895_, lean_object* v_bs_2896_){
_start:
{
uint8_t v___x_2897_; 
v___x_2897_ = lean_usize_dec_lt(v_i_2895_, v_sz_2894_);
if (v___x_2897_ == 0)
{
lean_object* v___x_2898_; 
v___x_2898_ = l_unsafeCast___redArg(v_bs_2896_);
lean_dec_ref(v_bs_2896_);
return v___x_2898_;
}
else
{
lean_object* v_v_2899_; lean_object* v___x_2900_; lean_object* v_bs_x27_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; size_t v___x_2906_; size_t v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v_v_2899_ = lean_array_uget(v_bs_2896_, v_i_2895_);
v___x_2900_ = lean_unsigned_to_nat(0u);
v_bs_x27_2901_ = lean_array_uset(v_bs_2896_, v_i_2895_, v___x_2900_);
v___x_2902_ = l_unsafeCast___redArg(v_v_2899_);
lean_dec(v_v_2899_);
v___x_2903_ = 0;
v___x_2904_ = lean_box(v___x_2903_);
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
lean_ctor_set(v___x_2905_, 1, v___x_2902_);
v___x_2906_ = ((size_t)1ULL);
v___x_2907_ = lean_usize_add(v_i_2895_, v___x_2906_);
v___x_2908_ = l_unsafeCast___redArg(v___x_2905_);
lean_dec_ref_known(v___x_2905_, 2);
v___x_2909_ = lean_array_uset(v_bs_x27_2901_, v_i_2895_, v___x_2908_);
v_i_2895_ = v___x_2907_;
v_bs_2896_ = v___x_2909_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17___boxed(lean_object* v_sz_2911_, lean_object* v_i_2912_, lean_object* v_bs_2913_){
_start:
{
size_t v_sz_boxed_2914_; size_t v_i_boxed_2915_; lean_object* v_res_2916_; 
v_sz_boxed_2914_ = lean_unbox_usize(v_sz_2911_);
lean_dec(v_sz_2911_);
v_i_boxed_2915_ = lean_unbox_usize(v_i_2912_);
lean_dec(v_i_2912_);
v_res_2916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(v_sz_boxed_2914_, v_i_boxed_2915_, v_bs_2913_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(lean_object* v___x_2917_, lean_object* v_edited_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_fst_2920_; lean_object* v_snd_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2940_; 
v_fst_2920_ = lean_ctor_get(v_a_2919_, 0);
v_snd_2921_ = lean_ctor_get(v_a_2919_, 1);
v_isSharedCheck_2940_ = !lean_is_exclusive(v_a_2919_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2923_ = v_a_2919_;
v_isShared_2924_ = v_isSharedCheck_2940_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_snd_2921_);
lean_inc(v_fst_2920_);
lean_dec(v_a_2919_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2940_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
uint8_t v___x_2925_; 
v___x_2925_ = lean_nat_dec_lt(v_snd_2921_, v___x_2917_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2927_; 
if (v_isShared_2924_ == 0)
{
v___x_2927_ = v___x_2923_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_fst_2920_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_snd_2921_);
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
uint8_t v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2933_; 
v___x_2929_ = 0;
v___x_2930_ = lean_array_fget_borrowed(v_edited_2918_, v_snd_2921_);
v___x_2931_ = lean_box(v___x_2929_);
lean_inc(v___x_2930_);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2930_);
lean_ctor_set(v___x_2923_, 0, v___x_2931_);
v___x_2933_ = v___x_2923_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v___x_2931_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2930_);
v___x_2933_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2934_ = lean_array_push(v_fst_2920_, v___x_2933_);
v___x_2935_ = lean_unsigned_to_nat(1u);
v___x_2936_ = lean_nat_add(v_snd_2921_, v___x_2935_);
lean_dec(v_snd_2921_);
v___x_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2934_);
lean_ctor_set(v___x_2937_, 1, v___x_2936_);
v_a_2919_ = v___x_2937_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg___boxed(lean_object* v___x_2941_, lean_object* v_edited_2942_, lean_object* v_a_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(v___x_2941_, v_edited_2942_, v_a_2943_);
lean_dec_ref(v_edited_2942_);
lean_dec(v___x_2941_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(lean_object* v_x_2945_, lean_object* v_x_2946_){
_start:
{
if (lean_obj_tag(v_x_2946_) == 0)
{
lean_inc(v_x_2945_);
return v_x_2945_;
}
else
{
lean_object* v_key_2947_; lean_object* v_value_2948_; lean_object* v_tail_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_key_2947_ = lean_ctor_get(v_x_2946_, 0);
v_value_2948_ = lean_ctor_get(v_x_2946_, 1);
v_tail_2949_ = lean_ctor_get(v_x_2946_, 2);
v___x_2950_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(v_x_2945_, v_tail_2949_);
lean_inc(v_value_2948_);
lean_inc(v_key_2947_);
v___x_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2951_, 0, v_key_2947_);
lean_ctor_set(v___x_2951_, 1, v_value_2948_);
v___x_2952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
lean_ctor_set(v___x_2952_, 1, v___x_2950_);
return v___x_2952_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17___boxed(lean_object* v_x_2953_, lean_object* v_x_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(v_x_2953_, v_x_2954_);
lean_dec(v_x_2954_);
lean_dec(v_x_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(lean_object* v_as_2956_, size_t v_i_2957_, size_t v_stop_2958_, lean_object* v_b_2959_){
_start:
{
uint8_t v___x_2960_; 
v___x_2960_ = lean_usize_dec_eq(v_i_2957_, v_stop_2958_);
if (v___x_2960_ == 0)
{
size_t v___x_2961_; size_t v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2961_ = ((size_t)1ULL);
v___x_2962_ = lean_usize_sub(v_i_2957_, v___x_2961_);
v___x_2963_ = lean_array_uget_borrowed(v_as_2956_, v___x_2962_);
v___x_2964_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__17(v_b_2959_, v___x_2963_);
lean_dec(v_b_2959_);
v_i_2957_ = v___x_2962_;
v_b_2959_ = v___x_2964_;
goto _start;
}
else
{
return v_b_2959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18___boxed(lean_object* v_as_2966_, lean_object* v_i_2967_, lean_object* v_stop_2968_, lean_object* v_b_2969_){
_start:
{
size_t v_i_boxed_2970_; size_t v_stop_boxed_2971_; lean_object* v_res_2972_; 
v_i_boxed_2970_ = lean_unbox_usize(v_i_2967_);
lean_dec(v_i_2967_);
v_stop_boxed_2971_ = lean_unbox_usize(v_stop_2968_);
lean_dec(v_stop_2968_);
v_res_2972_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(v_as_2966_, v_i_boxed_2970_, v_stop_boxed_2971_, v_b_2969_);
lean_dec_ref(v_as_2966_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14_spec__18(lean_object* v_left_2973_, lean_object* v_right_2974_, lean_object* v_pref_2975_){
_start:
{
lean_object* v_start_2976_; lean_object* v_stop_2977_; lean_object* v_start_2978_; lean_object* v_stop_2979_; lean_object* v_i_2980_; uint8_t v___y_2982_; lean_object* v___x_2996_; uint8_t v___x_2997_; 
v_start_2976_ = lean_ctor_get(v_left_2973_, 1);
v_stop_2977_ = lean_ctor_get(v_left_2973_, 2);
v_start_2978_ = lean_ctor_get(v_right_2974_, 1);
v_stop_2979_ = lean_ctor_get(v_right_2974_, 2);
v_i_2980_ = lean_array_get_size(v_pref_2975_);
v___x_2996_ = lean_nat_sub(v_stop_2977_, v_start_2976_);
v___x_2997_ = lean_nat_dec_lt(v_i_2980_, v___x_2996_);
lean_dec(v___x_2996_);
if (v___x_2997_ == 0)
{
v___y_2982_ = v___x_2997_;
goto v___jp_2981_;
}
else
{
lean_object* v___x_2998_; uint8_t v___x_2999_; 
v___x_2998_ = lean_nat_sub(v_stop_2979_, v_start_2978_);
v___x_2999_ = lean_nat_dec_lt(v_i_2980_, v___x_2998_);
lean_dec(v___x_2998_);
v___y_2982_ = v___x_2999_;
goto v___jp_2981_;
}
v___jp_2981_:
{
if (v___y_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2983_ = l_Subarray_drop___redArg(v_left_2973_, v_i_2980_);
v___x_2984_ = l_Subarray_drop___redArg(v_right_2974_, v_i_2980_);
v___x_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2983_);
lean_ctor_set(v___x_2985_, 1, v___x_2984_);
v___x_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2986_, 0, v_pref_2975_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
return v___x_2986_;
}
else
{
lean_object* v___x_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2987_ = l_Subarray_get___redArg(v_left_2973_, v_i_2980_);
v___x_2988_ = l_Subarray_get___redArg(v_right_2974_, v_i_2980_);
v___x_2989_ = lean_string_dec_eq(v___x_2987_, v___x_2988_);
lean_dec(v___x_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
lean_dec(v___x_2987_);
v___x_2990_ = l_Subarray_drop___redArg(v_left_2973_, v_i_2980_);
v___x_2991_ = l_Subarray_drop___redArg(v_right_2974_, v_i_2980_);
v___x_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2990_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
v___x_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2993_, 0, v_pref_2975_);
lean_ctor_set(v___x_2993_, 1, v___x_2992_);
return v___x_2993_;
}
else
{
lean_object* v___x_2994_; 
v___x_2994_ = lean_array_push(v_pref_2975_, v___x_2987_);
v_pref_2975_ = v___x_2994_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14(lean_object* v_left_3002_, lean_object* v_right_3003_){
_start:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3004_ = ((lean_object*)(l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0));
v___x_3005_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14_spec__18(v_left_3002_, v_right_3003_, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(lean_object* v_a_3006_, lean_object* v_b_3007_, lean_object* v_x_3008_){
_start:
{
if (lean_obj_tag(v_x_3008_) == 0)
{
lean_dec(v_b_3007_);
lean_dec_ref(v_a_3006_);
return v_x_3008_;
}
else
{
lean_object* v_key_3009_; lean_object* v_value_3010_; lean_object* v_tail_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3023_; 
v_key_3009_ = lean_ctor_get(v_x_3008_, 0);
v_value_3010_ = lean_ctor_get(v_x_3008_, 1);
v_tail_3011_ = lean_ctor_get(v_x_3008_, 2);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_x_3008_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3013_ = v_x_3008_;
v_isShared_3014_ = v_isSharedCheck_3023_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_tail_3011_);
lean_inc(v_value_3010_);
lean_inc(v_key_3009_);
lean_dec(v_x_3008_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3023_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
uint8_t v___x_3015_; 
v___x_3015_ = lean_string_dec_eq(v_key_3009_, v_a_3006_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v___x_3018_; 
v___x_3016_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(v_a_3006_, v_b_3007_, v_tail_3011_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 2, v___x_3016_);
v___x_3018_ = v___x_3013_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_key_3009_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v_value_3010_);
lean_ctor_set(v_reuseFailAlloc_3019_, 2, v___x_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
else
{
lean_object* v___x_3021_; 
lean_dec(v_value_3010_);
lean_dec(v_key_3009_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 1, v_b_3007_);
lean_ctor_set(v___x_3013_, 0, v_a_3006_);
v___x_3021_ = v___x_3013_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3006_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v_b_3007_);
lean_ctor_set(v_reuseFailAlloc_3022_, 2, v_tail_3011_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(lean_object* v_x_3024_, lean_object* v_x_3025_){
_start:
{
if (lean_obj_tag(v_x_3025_) == 0)
{
return v_x_3024_;
}
else
{
lean_object* v_key_3026_; lean_object* v_value_3027_; lean_object* v_tail_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3051_; 
v_key_3026_ = lean_ctor_get(v_x_3025_, 0);
v_value_3027_ = lean_ctor_get(v_x_3025_, 1);
v_tail_3028_ = lean_ctor_get(v_x_3025_, 2);
v_isSharedCheck_3051_ = !lean_is_exclusive(v_x_3025_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3030_ = v_x_3025_;
v_isShared_3031_ = v_isSharedCheck_3051_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_tail_3028_);
lean_inc(v_value_3027_);
lean_inc(v_key_3026_);
lean_dec(v_x_3025_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3051_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3032_; uint64_t v___x_3033_; uint64_t v___x_3034_; uint64_t v___x_3035_; uint64_t v_fold_3036_; uint64_t v___x_3037_; uint64_t v___x_3038_; uint64_t v___x_3039_; size_t v___x_3040_; size_t v___x_3041_; size_t v___x_3042_; size_t v___x_3043_; size_t v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3047_; 
v___x_3032_ = lean_array_get_size(v_x_3024_);
v___x_3033_ = lean_string_hash(v_key_3026_);
v___x_3034_ = 32ULL;
v___x_3035_ = lean_uint64_shift_right(v___x_3033_, v___x_3034_);
v_fold_3036_ = lean_uint64_xor(v___x_3033_, v___x_3035_);
v___x_3037_ = 16ULL;
v___x_3038_ = lean_uint64_shift_right(v_fold_3036_, v___x_3037_);
v___x_3039_ = lean_uint64_xor(v_fold_3036_, v___x_3038_);
v___x_3040_ = lean_uint64_to_usize(v___x_3039_);
v___x_3041_ = lean_usize_of_nat(v___x_3032_);
v___x_3042_ = ((size_t)1ULL);
v___x_3043_ = lean_usize_sub(v___x_3041_, v___x_3042_);
v___x_3044_ = lean_usize_land(v___x_3040_, v___x_3043_);
v___x_3045_ = lean_array_uget_borrowed(v_x_3024_, v___x_3044_);
lean_inc(v___x_3045_);
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 2, v___x_3045_);
v___x_3047_ = v___x_3030_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_key_3026_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v_value_3027_);
lean_ctor_set(v_reuseFailAlloc_3050_, 2, v___x_3045_);
v___x_3047_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; 
v___x_3048_ = lean_array_uset(v_x_3024_, v___x_3044_, v___x_3047_);
v_x_3024_ = v___x_3048_;
v_x_3025_ = v_tail_3028_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(lean_object* v_i_3052_, lean_object* v_source_3053_, lean_object* v_target_3054_){
_start:
{
lean_object* v___x_3055_; uint8_t v___x_3056_; 
v___x_3055_ = lean_array_get_size(v_source_3053_);
v___x_3056_ = lean_nat_dec_lt(v_i_3052_, v___x_3055_);
if (v___x_3056_ == 0)
{
lean_dec_ref(v_source_3053_);
lean_dec(v_i_3052_);
return v_target_3054_;
}
else
{
lean_object* v_es_3057_; lean_object* v___x_3058_; lean_object* v_source_3059_; lean_object* v_target_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; 
v_es_3057_ = lean_array_fget(v_source_3053_, v_i_3052_);
v___x_3058_ = lean_box(0);
v_source_3059_ = lean_array_fset(v_source_3053_, v_i_3052_, v___x_3058_);
v_target_3060_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(v_target_3054_, v_es_3057_);
v___x_3061_ = lean_unsigned_to_nat(1u);
v___x_3062_ = lean_nat_add(v_i_3052_, v___x_3061_);
lean_dec(v_i_3052_);
v_i_3052_ = v___x_3062_;
v_source_3053_ = v_source_3059_;
v_target_3054_ = v_target_3060_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(lean_object* v_data_3064_){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v_nbuckets_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3065_ = lean_array_get_size(v_data_3064_);
v___x_3066_ = lean_unsigned_to_nat(2u);
v_nbuckets_3067_ = lean_nat_mul(v___x_3065_, v___x_3066_);
v___x_3068_ = lean_unsigned_to_nat(0u);
v___x_3069_ = lean_box(0);
v___x_3070_ = lean_mk_array(v_nbuckets_3067_, v___x_3069_);
v___x_3071_ = lean_array_propagate_mark(v_data_3064_, v___x_3070_);
v___x_3072_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(v___x_3068_, v_data_3064_, v___x_3071_);
return v___x_3072_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(lean_object* v_a_3073_, lean_object* v_x_3074_){
_start:
{
if (lean_obj_tag(v_x_3074_) == 0)
{
uint8_t v___x_3075_; 
v___x_3075_ = 0;
return v___x_3075_;
}
else
{
lean_object* v_key_3076_; lean_object* v_tail_3077_; uint8_t v___x_3078_; 
v_key_3076_ = lean_ctor_get(v_x_3074_, 0);
v_tail_3077_ = lean_ctor_get(v_x_3074_, 2);
v___x_3078_ = lean_string_dec_eq(v_key_3076_, v_a_3073_);
if (v___x_3078_ == 0)
{
v_x_3074_ = v_tail_3077_;
goto _start;
}
else
{
return v___x_3078_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg___boxed(lean_object* v_a_3080_, lean_object* v_x_3081_){
_start:
{
uint8_t v_res_3082_; lean_object* v_r_3083_; 
v_res_3082_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(v_a_3080_, v_x_3081_);
lean_dec(v_x_3081_);
lean_dec_ref(v_a_3080_);
v_r_3083_ = lean_box(v_res_3082_);
return v_r_3083_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(lean_object* v_m_3084_, lean_object* v_a_3085_, lean_object* v_b_3086_){
_start:
{
lean_object* v_size_3087_; lean_object* v_buckets_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3131_; 
v_size_3087_ = lean_ctor_get(v_m_3084_, 0);
v_buckets_3088_ = lean_ctor_get(v_m_3084_, 1);
v_isSharedCheck_3131_ = !lean_is_exclusive(v_m_3084_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3090_ = v_m_3084_;
v_isShared_3091_ = v_isSharedCheck_3131_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_buckets_3088_);
lean_inc(v_size_3087_);
lean_dec(v_m_3084_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3131_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3092_; uint64_t v___x_3093_; uint64_t v___x_3094_; uint64_t v___x_3095_; uint64_t v_fold_3096_; uint64_t v___x_3097_; uint64_t v___x_3098_; uint64_t v___x_3099_; size_t v___x_3100_; size_t v___x_3101_; size_t v___x_3102_; size_t v___x_3103_; size_t v___x_3104_; lean_object* v_bkt_3105_; uint8_t v___x_3106_; 
v___x_3092_ = lean_array_get_size(v_buckets_3088_);
v___x_3093_ = lean_string_hash(v_a_3085_);
v___x_3094_ = 32ULL;
v___x_3095_ = lean_uint64_shift_right(v___x_3093_, v___x_3094_);
v_fold_3096_ = lean_uint64_xor(v___x_3093_, v___x_3095_);
v___x_3097_ = 16ULL;
v___x_3098_ = lean_uint64_shift_right(v_fold_3096_, v___x_3097_);
v___x_3099_ = lean_uint64_xor(v_fold_3096_, v___x_3098_);
v___x_3100_ = lean_uint64_to_usize(v___x_3099_);
v___x_3101_ = lean_usize_of_nat(v___x_3092_);
v___x_3102_ = ((size_t)1ULL);
v___x_3103_ = lean_usize_sub(v___x_3101_, v___x_3102_);
v___x_3104_ = lean_usize_land(v___x_3100_, v___x_3103_);
v_bkt_3105_ = lean_array_uget_borrowed(v_buckets_3088_, v___x_3104_);
v___x_3106_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(v_a_3085_, v_bkt_3105_);
if (v___x_3106_ == 0)
{
lean_object* v___x_3107_; lean_object* v_size_x27_3108_; lean_object* v___x_3109_; lean_object* v_buckets_x27_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; uint8_t v___x_3116_; 
v___x_3107_ = lean_unsigned_to_nat(1u);
v_size_x27_3108_ = lean_nat_add(v_size_3087_, v___x_3107_);
lean_dec(v_size_3087_);
lean_inc(v_bkt_3105_);
v___x_3109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3109_, 0, v_a_3085_);
lean_ctor_set(v___x_3109_, 1, v_b_3086_);
lean_ctor_set(v___x_3109_, 2, v_bkt_3105_);
v_buckets_x27_3110_ = lean_array_uset(v_buckets_3088_, v___x_3104_, v___x_3109_);
v___x_3111_ = lean_unsigned_to_nat(4u);
v___x_3112_ = lean_nat_mul(v_size_x27_3108_, v___x_3111_);
v___x_3113_ = lean_unsigned_to_nat(3u);
v___x_3114_ = lean_nat_div(v___x_3112_, v___x_3113_);
lean_dec(v___x_3112_);
v___x_3115_ = lean_array_get_size(v_buckets_x27_3110_);
v___x_3116_ = lean_nat_dec_le(v___x_3114_, v___x_3115_);
lean_dec(v___x_3114_);
if (v___x_3116_ == 0)
{
lean_object* v_val_3117_; lean_object* v___x_3119_; 
v_val_3117_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(v_buckets_x27_3110_);
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 1, v_val_3117_);
lean_ctor_set(v___x_3090_, 0, v_size_x27_3108_);
v___x_3119_ = v___x_3090_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_size_x27_3108_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v_val_3117_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
else
{
lean_object* v___x_3122_; 
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 1, v_buckets_x27_3110_);
lean_ctor_set(v___x_3090_, 0, v_size_x27_3108_);
v___x_3122_ = v___x_3090_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_size_x27_3108_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_buckets_x27_3110_);
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
lean_object* v___x_3124_; lean_object* v_buckets_x27_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
lean_inc(v_bkt_3105_);
v___x_3124_ = lean_box(0);
v_buckets_x27_3125_ = lean_array_uset(v_buckets_3088_, v___x_3104_, v___x_3124_);
v___x_3126_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(v_a_3085_, v_b_3086_, v_bkt_3105_);
v___x_3127_ = lean_array_uset(v_buckets_x27_3125_, v___x_3104_, v___x_3126_);
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 1, v___x_3127_);
v___x_3129_ = v___x_3090_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_size_3087_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(lean_object* v_a_3132_, lean_object* v_x_3133_){
_start:
{
if (lean_obj_tag(v_x_3133_) == 0)
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_box(0);
return v___x_3134_;
}
else
{
lean_object* v_key_3135_; lean_object* v_value_3136_; lean_object* v_tail_3137_; uint8_t v___x_3138_; 
v_key_3135_ = lean_ctor_get(v_x_3133_, 0);
v_value_3136_ = lean_ctor_get(v_x_3133_, 1);
v_tail_3137_ = lean_ctor_get(v_x_3133_, 2);
v___x_3138_ = lean_string_dec_eq(v_key_3135_, v_a_3132_);
if (v___x_3138_ == 0)
{
v_x_3133_ = v_tail_3137_;
goto _start;
}
else
{
lean_object* v___x_3140_; 
lean_inc(v_value_3136_);
v___x_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3140_, 0, v_value_3136_);
return v___x_3140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg___boxed(lean_object* v_a_3141_, lean_object* v_x_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(v_a_3141_, v_x_3142_);
lean_dec(v_x_3142_);
lean_dec_ref(v_a_3141_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(lean_object* v_m_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v_buckets_3146_; lean_object* v___x_3147_; uint64_t v___x_3148_; uint64_t v___x_3149_; uint64_t v___x_3150_; uint64_t v_fold_3151_; uint64_t v___x_3152_; uint64_t v___x_3153_; uint64_t v___x_3154_; size_t v___x_3155_; size_t v___x_3156_; size_t v___x_3157_; size_t v___x_3158_; size_t v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v_buckets_3146_ = lean_ctor_get(v_m_3144_, 1);
v___x_3147_ = lean_array_get_size(v_buckets_3146_);
v___x_3148_ = lean_string_hash(v_a_3145_);
v___x_3149_ = 32ULL;
v___x_3150_ = lean_uint64_shift_right(v___x_3148_, v___x_3149_);
v_fold_3151_ = lean_uint64_xor(v___x_3148_, v___x_3150_);
v___x_3152_ = 16ULL;
v___x_3153_ = lean_uint64_shift_right(v_fold_3151_, v___x_3152_);
v___x_3154_ = lean_uint64_xor(v_fold_3151_, v___x_3153_);
v___x_3155_ = lean_uint64_to_usize(v___x_3154_);
v___x_3156_ = lean_usize_of_nat(v___x_3147_);
v___x_3157_ = ((size_t)1ULL);
v___x_3158_ = lean_usize_sub(v___x_3156_, v___x_3157_);
v___x_3159_ = lean_usize_land(v___x_3155_, v___x_3158_);
v___x_3160_ = lean_array_uget_borrowed(v_buckets_3146_, v___x_3159_);
v___x_3161_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(v_a_3145_, v___x_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg___boxed(lean_object* v_m_3162_, lean_object* v_a_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_m_3162_, v_a_3163_);
lean_dec_ref(v_a_3163_);
lean_dec_ref(v_m_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(lean_object* v_histogram_3165_, lean_object* v_index_3166_, lean_object* v_val_3167_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_histogram_3165_, v_val_3167_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3169_ = lean_unsigned_to_nat(1u);
v___x_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3170_, 0, v_index_3166_);
v___x_3171_ = lean_unsigned_to_nat(0u);
v___x_3172_ = lean_box(0);
v___x_3173_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3169_);
lean_ctor_set(v___x_3173_, 1, v___x_3170_);
lean_ctor_set(v___x_3173_, 2, v___x_3171_);
lean_ctor_set(v___x_3173_, 3, v___x_3172_);
v___x_3174_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3165_, v_val_3167_, v___x_3173_);
return v___x_3174_;
}
else
{
lean_object* v_val_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3196_; 
v_val_3175_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3177_ = v___x_3168_;
v_isShared_3178_ = v_isSharedCheck_3196_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_val_3175_);
lean_dec(v___x_3168_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3196_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v_leftCount_3179_; lean_object* v_rightCount_3180_; lean_object* v_rightIndex_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3194_; 
v_leftCount_3179_ = lean_ctor_get(v_val_3175_, 0);
v_rightCount_3180_ = lean_ctor_get(v_val_3175_, 2);
v_rightIndex_3181_ = lean_ctor_get(v_val_3175_, 3);
v_isSharedCheck_3194_ = !lean_is_exclusive(v_val_3175_);
if (v_isSharedCheck_3194_ == 0)
{
lean_object* v_unused_3195_; 
v_unused_3195_ = lean_ctor_get(v_val_3175_, 1);
lean_dec(v_unused_3195_);
v___x_3183_ = v_val_3175_;
v_isShared_3184_ = v_isSharedCheck_3194_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_rightIndex_3181_);
lean_inc(v_rightCount_3180_);
lean_inc(v_leftCount_3179_);
lean_dec(v_val_3175_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3194_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3188_; 
v___x_3185_ = lean_unsigned_to_nat(1u);
v___x_3186_ = lean_nat_add(v_leftCount_3179_, v___x_3185_);
lean_dec(v_leftCount_3179_);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 0, v_index_3166_);
v___x_3188_ = v___x_3177_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_index_3166_);
v___x_3188_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3190_; 
if (v_isShared_3184_ == 0)
{
lean_ctor_set(v___x_3183_, 1, v___x_3188_);
lean_ctor_set(v___x_3183_, 0, v___x_3186_);
v___x_3190_ = v___x_3183_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___x_3186_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3192_, 2, v_rightCount_3180_);
lean_ctor_set(v_reuseFailAlloc_3192_, 3, v_rightIndex_3181_);
v___x_3190_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3165_, v_val_3167_, v___x_3190_);
return v___x_3191_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(lean_object* v_upperBound_3197_, lean_object* v_fst_3198_, lean_object* v___x_3199_, lean_object* v_fst_3200_, lean_object* v_a_3201_, lean_object* v_b_3202_){
_start:
{
uint8_t v___x_3203_; 
v___x_3203_ = lean_nat_dec_lt(v_a_3201_, v_upperBound_3197_);
if (v___x_3203_ == 0)
{
lean_dec(v_a_3201_);
return v_b_3202_;
}
else
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3204_ = l_Subarray_get___redArg(v_fst_3200_, v_a_3201_);
lean_inc(v_a_3201_);
v___x_3205_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(v_b_3202_, v_a_3201_, v___x_3204_);
v___x_3206_ = lean_unsigned_to_nat(1u);
v___x_3207_ = lean_nat_add(v_a_3201_, v___x_3206_);
lean_dec(v_a_3201_);
v_a_3201_ = v___x_3207_;
v_b_3202_ = v___x_3205_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg___boxed(lean_object* v_upperBound_3209_, lean_object* v_fst_3210_, lean_object* v___x_3211_, lean_object* v_fst_3212_, lean_object* v_a_3213_, lean_object* v_b_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(v_upperBound_3209_, v_fst_3210_, v___x_3211_, v_fst_3212_, v_a_3213_, v_b_3214_);
lean_dec_ref(v_fst_3212_);
lean_dec(v___x_3211_);
lean_dec_ref(v_fst_3210_);
lean_dec(v_upperBound_3209_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(lean_object* v_as_x27_3216_, lean_object* v_b_3217_){
_start:
{
if (lean_obj_tag(v_as_x27_3216_) == 0)
{
return v_b_3217_;
}
else
{
lean_object* v_head_3218_; lean_object* v_snd_3219_; lean_object* v_leftIndex_3220_; 
v_head_3218_ = lean_ctor_get(v_as_x27_3216_, 0);
v_snd_3219_ = lean_ctor_get(v_head_3218_, 1);
v_leftIndex_3220_ = lean_ctor_get(v_snd_3219_, 1);
if (lean_obj_tag(v_leftIndex_3220_) == 1)
{
lean_object* v_rightIndex_3221_; 
v_rightIndex_3221_ = lean_ctor_get(v_snd_3219_, 3);
if (lean_obj_tag(v_rightIndex_3221_) == 1)
{
if (lean_obj_tag(v_b_3217_) == 0)
{
lean_object* v_tail_3222_; lean_object* v_fst_3223_; lean_object* v_leftCount_3224_; lean_object* v_rightCount_3225_; lean_object* v_val_3226_; lean_object* v_val_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_tail_3222_ = lean_ctor_get(v_as_x27_3216_, 1);
v_fst_3223_ = lean_ctor_get(v_head_3218_, 0);
v_leftCount_3224_ = lean_ctor_get(v_snd_3219_, 0);
v_rightCount_3225_ = lean_ctor_get(v_snd_3219_, 2);
v_val_3226_ = lean_ctor_get(v_leftIndex_3220_, 0);
v_val_3227_ = lean_ctor_get(v_rightIndex_3221_, 0);
v___x_3228_ = lean_nat_add(v_leftCount_3224_, v_rightCount_3225_);
lean_inc(v_val_3227_);
lean_inc(v_val_3226_);
v___x_3229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3229_, 0, v_val_3226_);
lean_ctor_set(v___x_3229_, 1, v_val_3227_);
lean_inc(v_fst_3223_);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v_fst_3223_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3228_);
lean_ctor_set(v___x_3231_, 1, v___x_3230_);
v___x_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3231_);
v_as_x27_3216_ = v_tail_3222_;
v_b_3217_ = v___x_3232_;
goto _start;
}
else
{
lean_object* v_val_3234_; lean_object* v_tail_3235_; lean_object* v_fst_3236_; lean_object* v_leftCount_3237_; lean_object* v_rightCount_3238_; lean_object* v_val_3239_; lean_object* v_val_3240_; lean_object* v_fst_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3262_; 
v_val_3234_ = lean_ctor_get(v_b_3217_, 0);
lean_inc(v_val_3234_);
v_tail_3235_ = lean_ctor_get(v_as_x27_3216_, 1);
v_fst_3236_ = lean_ctor_get(v_head_3218_, 0);
v_leftCount_3237_ = lean_ctor_get(v_snd_3219_, 0);
v_rightCount_3238_ = lean_ctor_get(v_snd_3219_, 2);
v_val_3239_ = lean_ctor_get(v_leftIndex_3220_, 0);
v_val_3240_ = lean_ctor_get(v_rightIndex_3221_, 0);
v_fst_3241_ = lean_ctor_get(v_val_3234_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_val_3234_);
if (v_isSharedCheck_3262_ == 0)
{
lean_object* v_unused_3263_; 
v_unused_3263_ = lean_ctor_get(v_val_3234_, 1);
lean_dec(v_unused_3263_);
v___x_3243_ = v_val_3234_;
v_isShared_3244_ = v_isSharedCheck_3262_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_fst_3241_);
lean_dec(v_val_3234_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3262_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3245_; uint8_t v___x_3246_; 
v___x_3245_ = lean_nat_add(v_leftCount_3237_, v_rightCount_3238_);
v___x_3246_ = lean_nat_dec_lt(v___x_3245_, v_fst_3241_);
lean_dec(v_fst_3241_);
if (v___x_3246_ == 0)
{
lean_dec(v___x_3245_);
lean_del_object(v___x_3243_);
v_as_x27_3216_ = v_tail_3235_;
goto _start;
}
else
{
lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3260_; 
v_isSharedCheck_3260_ = !lean_is_exclusive(v_b_3217_);
if (v_isSharedCheck_3260_ == 0)
{
lean_object* v_unused_3261_; 
v_unused_3261_ = lean_ctor_get(v_b_3217_, 0);
lean_dec(v_unused_3261_);
v___x_3249_ = v_b_3217_;
v_isShared_3250_ = v_isSharedCheck_3260_;
goto v_resetjp_3248_;
}
else
{
lean_dec(v_b_3217_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3260_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
lean_inc(v_val_3240_);
lean_inc(v_val_3239_);
if (v_isShared_3244_ == 0)
{
lean_ctor_set(v___x_3243_, 1, v_val_3240_);
lean_ctor_set(v___x_3243_, 0, v_val_3239_);
v___x_3252_ = v___x_3243_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_val_3239_);
lean_ctor_set(v_reuseFailAlloc_3259_, 1, v_val_3240_);
v___x_3252_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3256_; 
lean_inc(v_fst_3236_);
v___x_3253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3253_, 0, v_fst_3236_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3245_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v___x_3254_);
v___x_3256_ = v___x_3249_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
v_as_x27_3216_ = v_tail_3235_;
v_b_3217_ = v___x_3256_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_tail_3264_; 
v_tail_3264_ = lean_ctor_get(v_as_x27_3216_, 1);
v_as_x27_3216_ = v_tail_3264_;
goto _start;
}
}
else
{
lean_object* v_tail_3266_; 
v_tail_3266_ = lean_ctor_get(v_as_x27_3216_, 1);
v_as_x27_3216_ = v_tail_3266_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg___boxed(lean_object* v_as_x27_3268_, lean_object* v_b_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(v_as_x27_3268_, v_b_3269_);
lean_dec(v_as_x27_3268_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(lean_object* v_histogram_3271_, lean_object* v_index_3272_, lean_object* v_val_3273_){
_start:
{
lean_object* v___x_3274_; 
v___x_3274_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_histogram_3271_, v_val_3273_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3275_ = lean_unsigned_to_nat(0u);
v___x_3276_ = lean_box(0);
v___x_3277_ = lean_unsigned_to_nat(1u);
v___x_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3278_, 0, v_index_3272_);
v___x_3279_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3275_);
lean_ctor_set(v___x_3279_, 1, v___x_3276_);
lean_ctor_set(v___x_3279_, 2, v___x_3277_);
lean_ctor_set(v___x_3279_, 3, v___x_3278_);
v___x_3280_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3271_, v_val_3273_, v___x_3279_);
return v___x_3280_;
}
else
{
lean_object* v_val_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3302_; 
v_val_3281_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3283_ = v___x_3274_;
v_isShared_3284_ = v_isSharedCheck_3302_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_val_3281_);
lean_dec(v___x_3274_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3302_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v_leftCount_3285_; lean_object* v_leftIndex_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3299_; 
v_leftCount_3285_ = lean_ctor_get(v_val_3281_, 0);
v_leftIndex_3286_ = lean_ctor_get(v_val_3281_, 1);
v_isSharedCheck_3299_ = !lean_is_exclusive(v_val_3281_);
if (v_isSharedCheck_3299_ == 0)
{
lean_object* v_unused_3300_; lean_object* v_unused_3301_; 
v_unused_3300_ = lean_ctor_get(v_val_3281_, 3);
lean_dec(v_unused_3300_);
v_unused_3301_ = lean_ctor_get(v_val_3281_, 2);
lean_dec(v_unused_3301_);
v___x_3288_ = v_val_3281_;
v_isShared_3289_ = v_isSharedCheck_3299_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_leftIndex_3286_);
lean_inc(v_leftCount_3285_);
lean_dec(v_val_3281_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3299_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3293_; 
v___x_3290_ = lean_unsigned_to_nat(1u);
v___x_3291_ = lean_nat_add(v_leftCount_3285_, v___x_3290_);
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 0, v_index_3272_);
v___x_3293_ = v___x_3283_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v_index_3272_);
v___x_3293_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
lean_object* v___x_3295_; 
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 3, v___x_3293_);
lean_ctor_set(v___x_3288_, 2, v___x_3291_);
v___x_3295_ = v___x_3288_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_leftCount_3285_);
lean_ctor_set(v_reuseFailAlloc_3297_, 1, v_leftIndex_3286_);
lean_ctor_set(v_reuseFailAlloc_3297_, 2, v___x_3291_);
lean_ctor_set(v_reuseFailAlloc_3297_, 3, v___x_3293_);
v___x_3295_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
lean_object* v___x_3296_; 
v___x_3296_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_histogram_3271_, v_val_3273_, v___x_3295_);
return v___x_3296_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(lean_object* v_upperBound_3303_, lean_object* v___x_3304_, lean_object* v_fst_3305_, lean_object* v___x_3306_, lean_object* v_a_3307_, lean_object* v_b_3308_){
_start:
{
uint8_t v___x_3309_; 
v___x_3309_ = lean_nat_dec_lt(v_a_3307_, v_upperBound_3303_);
if (v___x_3309_ == 0)
{
lean_dec(v_a_3307_);
return v_b_3308_;
}
else
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3310_ = l_Subarray_get___redArg(v_fst_3305_, v_a_3307_);
lean_inc(v_a_3307_);
v___x_3311_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(v_b_3308_, v_a_3307_, v___x_3310_);
v___x_3312_ = lean_unsigned_to_nat(1u);
v___x_3313_ = lean_nat_add(v_a_3307_, v___x_3312_);
lean_dec(v_a_3307_);
v_a_3307_ = v___x_3313_;
v_b_3308_ = v___x_3311_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg___boxed(lean_object* v_upperBound_3315_, lean_object* v___x_3316_, lean_object* v_fst_3317_, lean_object* v___x_3318_, lean_object* v_a_3319_, lean_object* v_b_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(v_upperBound_3315_, v___x_3316_, v_fst_3317_, v___x_3318_, v_a_3319_, v_b_3320_);
lean_dec(v___x_3318_);
lean_dec_ref(v_fst_3317_);
lean_dec(v___x_3316_);
lean_dec(v_upperBound_3315_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(lean_object* v_a_3322_, lean_object* v_b_3323_){
_start:
{
lean_object* v_array_3324_; lean_object* v_start_3325_; lean_object* v_stop_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3339_; 
v_array_3324_ = lean_ctor_get(v_a_3322_, 0);
v_start_3325_ = lean_ctor_get(v_a_3322_, 1);
v_stop_3326_ = lean_ctor_get(v_a_3322_, 2);
v_isSharedCheck_3339_ = !lean_is_exclusive(v_a_3322_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3328_ = v_a_3322_;
v_isShared_3329_ = v_isSharedCheck_3339_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_stop_3326_);
lean_inc(v_start_3325_);
lean_inc(v_array_3324_);
lean_dec(v_a_3322_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3339_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
uint8_t v___x_3330_; 
v___x_3330_ = lean_nat_dec_lt(v_start_3325_, v_stop_3326_);
if (v___x_3330_ == 0)
{
lean_del_object(v___x_3328_);
lean_dec(v_stop_3326_);
lean_dec(v_start_3325_);
lean_dec_ref(v_array_3324_);
return v_b_3323_;
}
else
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3334_; 
v___x_3331_ = lean_unsigned_to_nat(1u);
v___x_3332_ = lean_nat_add(v_start_3325_, v___x_3331_);
lean_inc_ref(v_array_3324_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set(v___x_3328_, 1, v___x_3332_);
v___x_3334_ = v___x_3328_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_array_3324_);
lean_ctor_set(v_reuseFailAlloc_3338_, 1, v___x_3332_);
lean_ctor_set(v_reuseFailAlloc_3338_, 2, v_stop_3326_);
v___x_3334_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3335_ = lean_array_fget(v_array_3324_, v_start_3325_);
lean_dec(v_start_3325_);
lean_dec_ref(v_array_3324_);
v___x_3336_ = lean_array_push(v_b_3323_, v___x_3335_);
v_a_3322_ = v___x_3334_;
v_b_3323_ = v___x_3336_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20(lean_object* v_left_3340_, lean_object* v_right_3341_, lean_object* v_i_3342_){
_start:
{
lean_object* v_start_3343_; lean_object* v_stop_3344_; lean_object* v_start_3345_; lean_object* v_stop_3346_; lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; uint8_t v___y_3351_; 
v_start_3343_ = lean_ctor_get(v_left_3340_, 1);
v_stop_3344_ = lean_ctor_get(v_left_3340_, 2);
v_start_3345_ = lean_ctor_get(v_right_3341_, 1);
v_stop_3346_ = lean_ctor_get(v_right_3341_, 2);
v___x_3347_ = lean_nat_sub(v_stop_3344_, v_start_3343_);
v___x_3348_ = lean_nat_dec_lt(v_i_3342_, v___x_3347_);
v___x_3349_ = lean_nat_sub(v_stop_3346_, v_start_3345_);
if (v___x_3348_ == 0)
{
v___y_3351_ = v___x_3348_;
goto v___jp_3350_;
}
else
{
uint8_t v___x_3378_; 
v___x_3378_ = lean_nat_dec_lt(v_i_3342_, v___x_3349_);
v___y_3351_ = v___x_3378_;
goto v___jp_3350_;
}
v___jp_3350_:
{
if (v___y_3351_ == 0)
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3352_ = lean_nat_sub(v___x_3347_, v_i_3342_);
lean_dec(v___x_3347_);
lean_inc_ref(v_left_3340_);
v___x_3353_ = l_Subarray_take___redArg(v_left_3340_, v___x_3352_);
v___x_3354_ = lean_nat_sub(v___x_3349_, v_i_3342_);
lean_dec(v_i_3342_);
lean_dec(v___x_3349_);
v___x_3355_ = l_Subarray_take___redArg(v_right_3341_, v___x_3354_);
lean_dec(v___x_3354_);
v___x_3356_ = l_Subarray_drop___redArg(v_left_3340_, v___x_3352_);
lean_dec(v___x_3352_);
v___x_3357_ = ((lean_object*)(l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0));
v___x_3358_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(v___x_3356_, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3355_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3353_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
return v___x_3360_;
}
else
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3361_ = lean_nat_sub(v___x_3347_, v_i_3342_);
lean_dec(v___x_3347_);
v___x_3362_ = lean_unsigned_to_nat(1u);
v___x_3363_ = lean_nat_sub(v___x_3361_, v___x_3362_);
v___x_3364_ = l_Subarray_get___redArg(v_left_3340_, v___x_3363_);
lean_dec(v___x_3363_);
v___x_3365_ = lean_nat_sub(v___x_3349_, v_i_3342_);
lean_dec(v___x_3349_);
v___x_3366_ = lean_nat_sub(v___x_3365_, v___x_3362_);
v___x_3367_ = l_Subarray_get___redArg(v_right_3341_, v___x_3366_);
lean_dec(v___x_3366_);
v___x_3368_ = lean_string_dec_eq(v___x_3364_, v___x_3367_);
lean_dec(v___x_3367_);
lean_dec(v___x_3364_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
lean_dec(v_i_3342_);
lean_inc_ref(v_left_3340_);
v___x_3369_ = l_Subarray_take___redArg(v_left_3340_, v___x_3361_);
v___x_3370_ = l_Subarray_take___redArg(v_right_3341_, v___x_3365_);
lean_dec(v___x_3365_);
v___x_3371_ = l_Subarray_drop___redArg(v_left_3340_, v___x_3361_);
lean_dec(v___x_3361_);
v___x_3372_ = ((lean_object*)(l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14___closed__0));
v___x_3373_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(v___x_3371_, v___x_3372_);
v___x_3374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3370_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3369_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
return v___x_3375_;
}
else
{
lean_object* v___x_3376_; 
lean_dec(v___x_3365_);
lean_dec(v___x_3361_);
v___x_3376_ = lean_nat_add(v_i_3342_, v___x_3362_);
lean_dec(v_i_3342_);
v_i_3342_ = v___x_3376_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15(lean_object* v_left_3379_, lean_object* v_right_3380_){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = lean_unsigned_to_nat(0u);
v___x_3382_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20(v_left_3379_, v_right_3380_, v___x_3381_);
return v___x_3382_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0(void){
_start:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v___x_3383_ = lean_box(0);
v___x_3384_ = lean_unsigned_to_nat(16u);
v___x_3385_ = lean_mk_array(v___x_3384_, v___x_3383_);
return v___x_3385_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1(void){
_start:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v_hist_3388_; 
v___x_3386_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__0);
v___x_3387_ = lean_unsigned_to_nat(0u);
v_hist_3388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_3388_, 0, v___x_3387_);
lean_ctor_set(v_hist_3388_, 1, v___x_3386_);
return v_hist_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(lean_object* v_left_3389_, lean_object* v_right_3390_){
_start:
{
lean_object* v___x_3391_; lean_object* v_snd_3392_; lean_object* v_fst_3393_; lean_object* v_fst_3394_; lean_object* v_snd_3395_; lean_object* v___x_3396_; lean_object* v_snd_3397_; lean_object* v_fst_3398_; lean_object* v_fst_3399_; lean_object* v_snd_3400_; lean_object* v_start_3401_; lean_object* v_stop_3402_; lean_object* v___x_3403_; lean_object* v_hist_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v_start_3407_; lean_object* v_stop_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v_buckets_3411_; lean_object* v___x_3412_; lean_object* v___y_3414_; lean_object* v___x_3440_; lean_object* v___x_3441_; uint8_t v___x_3442_; 
v___x_3391_ = l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__14(v_left_3389_, v_right_3390_);
v_snd_3392_ = lean_ctor_get(v___x_3391_, 1);
lean_inc(v_snd_3392_);
v_fst_3393_ = lean_ctor_get(v___x_3391_, 0);
lean_inc(v_fst_3393_);
lean_dec_ref(v___x_3391_);
v_fst_3394_ = lean_ctor_get(v_snd_3392_, 0);
lean_inc(v_fst_3394_);
v_snd_3395_ = lean_ctor_get(v_snd_3392_, 1);
lean_inc(v_snd_3395_);
lean_dec(v_snd_3392_);
v___x_3396_ = l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15(v_fst_3394_, v_snd_3395_);
v_snd_3397_ = lean_ctor_get(v___x_3396_, 1);
lean_inc(v_snd_3397_);
v_fst_3398_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_fst_3398_);
lean_dec_ref(v___x_3396_);
v_fst_3399_ = lean_ctor_get(v_snd_3397_, 0);
lean_inc(v_fst_3399_);
v_snd_3400_ = lean_ctor_get(v_snd_3397_, 1);
lean_inc(v_snd_3400_);
lean_dec(v_snd_3397_);
v_start_3401_ = lean_ctor_get(v_fst_3398_, 1);
v_stop_3402_ = lean_ctor_get(v_fst_3398_, 2);
v___x_3403_ = lean_unsigned_to_nat(0u);
v_hist_3404_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12___closed__1);
v___x_3405_ = lean_nat_sub(v_stop_3402_, v_start_3401_);
v___x_3406_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(v___x_3405_, v_fst_3399_, v___x_3405_, v_fst_3398_, v___x_3403_, v_hist_3404_);
v_start_3407_ = lean_ctor_get(v_fst_3399_, 1);
v_stop_3408_ = lean_ctor_get(v_fst_3399_, 2);
v___x_3409_ = lean_nat_sub(v_stop_3408_, v_start_3407_);
v___x_3410_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(v___x_3409_, v___x_3409_, v_fst_3399_, v___x_3405_, v___x_3403_, v___x_3406_);
lean_dec(v___x_3405_);
lean_dec(v___x_3409_);
v_buckets_3411_ = lean_ctor_get(v___x_3410_, 1);
lean_inc_ref(v_buckets_3411_);
lean_dec_ref(v___x_3410_);
v___x_3412_ = lean_box(0);
v___x_3440_ = lean_box(0);
v___x_3441_ = lean_array_get_size(v_buckets_3411_);
v___x_3442_ = lean_nat_dec_lt(v___x_3403_, v___x_3441_);
if (v___x_3442_ == 0)
{
lean_dec_ref(v_buckets_3411_);
v___y_3414_ = v___x_3440_;
goto v___jp_3413_;
}
else
{
size_t v___x_3443_; size_t v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = lean_usize_of_nat(v___x_3441_);
v___x_3444_ = ((size_t)0ULL);
v___x_3445_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__18(v_buckets_3411_, v___x_3443_, v___x_3444_, v___x_3440_);
lean_dec_ref(v_buckets_3411_);
v___y_3414_ = v___x_3445_;
goto v___jp_3413_;
}
v___jp_3413_:
{
lean_object* v___x_3415_; 
v___x_3415_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(v___y_3414_, v___x_3412_);
lean_dec(v___y_3414_);
if (lean_obj_tag(v___x_3415_) == 1)
{
lean_object* v_val_3416_; lean_object* v_snd_3417_; lean_object* v_snd_3418_; lean_object* v_fst_3419_; lean_object* v_fst_3420_; lean_object* v_snd_3421_; lean_object* v___x_3422_; lean_object* v_fst_3423_; lean_object* v_snd_3424_; lean_object* v___x_3425_; lean_object* v_fst_3426_; lean_object* v_snd_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v_val_3416_ = lean_ctor_get(v___x_3415_, 0);
lean_inc(v_val_3416_);
lean_dec_ref_known(v___x_3415_, 1);
v_snd_3417_ = lean_ctor_get(v_val_3416_, 1);
lean_inc(v_snd_3417_);
lean_dec(v_val_3416_);
v_snd_3418_ = lean_ctor_get(v_snd_3417_, 1);
lean_inc(v_snd_3418_);
v_fst_3419_ = lean_ctor_get(v_snd_3417_, 0);
lean_inc(v_fst_3419_);
lean_dec(v_snd_3417_);
v_fst_3420_ = lean_ctor_get(v_snd_3418_, 0);
lean_inc(v_fst_3420_);
v_snd_3421_ = lean_ctor_get(v_snd_3418_, 1);
lean_inc(v_snd_3421_);
lean_dec(v_snd_3418_);
v___x_3422_ = l_Subarray_split___redArg(v_fst_3398_, v_fst_3420_);
lean_dec(v_fst_3420_);
v_fst_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_fst_3423_);
v_snd_3424_ = lean_ctor_get(v___x_3422_, 1);
lean_inc(v_snd_3424_);
lean_dec_ref(v___x_3422_);
v___x_3425_ = l_Subarray_split___redArg(v_fst_3399_, v_snd_3421_);
lean_dec(v_snd_3421_);
v_fst_3426_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_fst_3426_);
v_snd_3427_ = lean_ctor_get(v___x_3425_, 1);
lean_inc(v_snd_3427_);
lean_dec_ref(v___x_3425_);
v___x_3428_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(v_fst_3423_, v_fst_3426_);
v___x_3429_ = l_Array_append___redArg(v_fst_3393_, v___x_3428_);
lean_dec_ref(v___x_3428_);
v___x_3430_ = lean_unsigned_to_nat(1u);
v___x_3431_ = lean_mk_empty_array_with_capacity(v___x_3430_);
v___x_3432_ = lean_array_push(v___x_3431_, v_fst_3419_);
v___x_3433_ = l_Array_append___redArg(v___x_3429_, v___x_3432_);
lean_dec_ref(v___x_3432_);
v___x_3434_ = l_Subarray_drop___redArg(v_snd_3424_, v___x_3430_);
v___x_3435_ = l_Subarray_drop___redArg(v_snd_3427_, v___x_3430_);
v___x_3436_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(v___x_3434_, v___x_3435_);
v___x_3437_ = l_Array_append___redArg(v___x_3433_, v___x_3436_);
lean_dec_ref(v___x_3436_);
v___x_3438_ = l_Array_append___redArg(v___x_3437_, v_snd_3400_);
lean_dec(v_snd_3400_);
return v___x_3438_;
}
else
{
lean_object* v___x_3439_; 
lean_dec(v___x_3415_);
lean_dec(v_fst_3399_);
lean_dec(v_fst_3398_);
v___x_3439_ = l_Array_append___redArg(v_fst_3393_, v_snd_3400_);
lean_dec(v_snd_3400_);
return v___x_3439_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(size_t v_sz_3446_, size_t v_i_3447_, lean_object* v_bs_3448_){
_start:
{
uint8_t v___x_3449_; 
v___x_3449_ = lean_usize_dec_lt(v_i_3447_, v_sz_3446_);
if (v___x_3449_ == 0)
{
lean_object* v___x_3450_; 
v___x_3450_ = l_unsafeCast___redArg(v_bs_3448_);
lean_dec_ref(v_bs_3448_);
return v___x_3450_;
}
else
{
lean_object* v_v_3451_; lean_object* v___x_3452_; lean_object* v_bs_x27_3453_; lean_object* v___x_3454_; uint8_t v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; size_t v___x_3458_; size_t v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v_v_3451_ = lean_array_uget(v_bs_3448_, v_i_3447_);
v___x_3452_ = lean_unsigned_to_nat(0u);
v_bs_x27_3453_ = lean_array_uset(v_bs_3448_, v_i_3447_, v___x_3452_);
v___x_3454_ = l_unsafeCast___redArg(v_v_3451_);
lean_dec(v_v_3451_);
v___x_3455_ = 1;
v___x_3456_ = lean_box(v___x_3455_);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
lean_ctor_set(v___x_3457_, 1, v___x_3454_);
v___x_3458_ = ((size_t)1ULL);
v___x_3459_ = lean_usize_add(v_i_3447_, v___x_3458_);
v___x_3460_ = l_unsafeCast___redArg(v___x_3457_);
lean_dec_ref_known(v___x_3457_, 2);
v___x_3461_ = lean_array_uset(v_bs_x27_3453_, v_i_3447_, v___x_3460_);
v_i_3447_ = v___x_3459_;
v_bs_3448_ = v___x_3461_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16___boxed(lean_object* v_sz_3463_, lean_object* v_i_3464_, lean_object* v_bs_3465_){
_start:
{
size_t v_sz_boxed_3466_; size_t v_i_boxed_3467_; lean_object* v_res_3468_; 
v_sz_boxed_3466_ = lean_unbox_usize(v_sz_3463_);
lean_dec(v_sz_3463_);
v_i_boxed_3467_ = lean_unbox_usize(v_i_3464_);
lean_dec(v_i_3464_);
v_res_3468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(v_sz_boxed_3466_, v_i_boxed_3467_, v_bs_3465_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7(lean_object* v_original_3476_, lean_object* v_edited_3477_){
_start:
{
lean_object* v_i_3478_; lean_object* v___x_3479_; uint8_t v___x_3480_; 
v_i_3478_ = lean_unsigned_to_nat(0u);
v___x_3479_ = lean_array_get_size(v_original_3476_);
v___x_3480_ = lean_nat_dec_lt(v_i_3478_, v___x_3479_);
if (v___x_3480_ == 0)
{
size_t v_sz_3481_; size_t v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
lean_dec_ref(v_original_3476_);
v_sz_3481_ = lean_array_size(v_edited_3477_);
v___x_3482_ = ((size_t)0ULL);
v___x_3483_ = l_unsafeCast___redArg(v_edited_3477_);
lean_dec_ref(v_edited_3477_);
v___x_3484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__17(v_sz_3481_, v___x_3482_, v___x_3483_);
v___x_3485_ = l_unsafeCast___redArg(v___x_3484_);
lean_dec_ref(v___x_3484_);
return v___x_3485_;
}
else
{
lean_object* v___x_3486_; uint8_t v___x_3487_; 
v___x_3486_ = lean_array_get_size(v_edited_3477_);
v___x_3487_ = lean_nat_dec_lt(v_i_3478_, v___x_3486_);
if (v___x_3487_ == 0)
{
size_t v_sz_3488_; size_t v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
lean_dec_ref(v_edited_3477_);
v_sz_3488_ = lean_array_size(v_original_3476_);
v___x_3489_ = ((size_t)0ULL);
v___x_3490_ = l_unsafeCast___redArg(v_original_3476_);
lean_dec_ref(v_original_3476_);
v___x_3491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__16(v_sz_3488_, v___x_3489_, v___x_3490_);
v___x_3492_ = l_unsafeCast___redArg(v___x_3491_);
lean_dec_ref(v___x_3491_);
return v___x_3492_;
}
else
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v_ds_3495_; lean_object* v___x_3496_; size_t v_sz_3497_; size_t v___x_3498_; lean_object* v___x_3499_; lean_object* v_snd_3500_; lean_object* v_fst_3501_; lean_object* v_fst_3502_; lean_object* v_snd_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3522_; 
lean_inc_ref(v_original_3476_);
v___x_3493_ = l_Array_toSubarray___redArg(v_original_3476_, v_i_3478_, v___x_3479_);
lean_inc_ref(v_edited_3477_);
v___x_3494_ = l_Array_toSubarray___redArg(v_edited_3477_, v_i_3478_, v___x_3486_);
v_ds_3495_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12(v___x_3493_, v___x_3494_);
v___x_3496_ = ((lean_object*)(l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7___closed__2));
v_sz_3497_ = lean_array_size(v_ds_3495_);
v___x_3498_ = ((size_t)0ULL);
v___x_3499_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__13(v___x_3486_, v_edited_3477_, v___x_3479_, v_original_3476_, v_ds_3495_, v_sz_3497_, v___x_3498_, v___x_3496_);
lean_dec_ref(v_ds_3495_);
v_snd_3500_ = lean_ctor_get(v___x_3499_, 1);
lean_inc(v_snd_3500_);
v_fst_3501_ = lean_ctor_get(v___x_3499_, 0);
lean_inc(v_fst_3501_);
lean_dec_ref(v___x_3499_);
v_fst_3502_ = lean_ctor_get(v_snd_3500_, 0);
v_snd_3503_ = lean_ctor_get(v_snd_3500_, 1);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_snd_3500_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3505_ = v_snd_3500_;
v_isShared_3506_ = v_isSharedCheck_3522_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_snd_3503_);
lean_inc(v_fst_3502_);
lean_dec(v_snd_3500_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3522_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 1, v_fst_3502_);
lean_ctor_set(v___x_3505_, 0, v_fst_3501_);
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_fst_3501_);
lean_ctor_set(v_reuseFailAlloc_3521_, 1, v_fst_3502_);
v___x_3508_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; lean_object* v_fst_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3519_; 
v___x_3509_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(v___x_3479_, v_original_3476_, v___x_3508_);
lean_dec_ref(v_original_3476_);
v_fst_3510_ = lean_ctor_get(v___x_3509_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3519_ == 0)
{
lean_object* v_unused_3520_; 
v_unused_3520_ = lean_ctor_get(v___x_3509_, 1);
lean_dec(v_unused_3520_);
v___x_3512_ = v___x_3509_;
v_isShared_3513_ = v_isSharedCheck_3519_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_fst_3510_);
lean_dec(v___x_3509_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3519_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 1, v_snd_3503_);
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_fst_3510_);
lean_ctor_set(v_reuseFailAlloc_3518_, 1, v_snd_3503_);
v___x_3515_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
lean_object* v___x_3516_; lean_object* v_fst_3517_; 
v___x_3516_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(v___x_3486_, v_edited_3477_, v___x_3515_);
lean_dec_ref(v_edited_3477_);
v_fst_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_fst_3517_);
lean_dec_ref(v___x_3516_);
return v_fst_3517_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(lean_object* v___y_3523_, lean_object* v_x_3524_, lean_object* v_x_3525_){
_start:
{
if (lean_obj_tag(v_x_3524_) == 0)
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3527_ = l_List_reverse___redArg(v_x_3525_);
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
else
{
lean_object* v_head_3529_; lean_object* v_tail_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3539_; 
v_head_3529_ = lean_ctor_get(v_x_3524_, 0);
v_tail_3530_ = lean_ctor_get(v_x_3524_, 1);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_x_3524_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3532_ = v_x_3524_;
v_isShared_3533_ = v_isSharedCheck_3539_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_tail_3530_);
lean_inc(v_head_3529_);
lean_dec(v_x_3524_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3539_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3534_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString(v_head_3529_, v___y_3523_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 1, v_x_3525_);
lean_ctor_set(v___x_3532_, 0, v___x_3534_);
v___x_3536_ = v___x_3532_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3534_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v_x_3525_);
v___x_3536_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
v_x_3524_ = v_tail_3530_;
v_x_3525_ = v___x_3536_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg___boxed(lean_object* v___y_3540_, lean_object* v_x_3541_, lean_object* v_x_3542_, lean_object* v___y_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(v___y_3540_, v_x_3541_, v_x_3542_);
lean_dec(v___y_3540_);
return v_res_3544_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__2));
v___x_3551_ = l_Lean_stringToMessageData(v___x_3550_);
return v___x_3551_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = l_Lean_MessageLog_empty;
v___x_3554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3553_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
return v___x_3554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs(lean_object* v_x_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_){
_start:
{
lean_object* v___x_3565_; uint8_t v___x_3566_; 
v___x_3565_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1));
lean_inc(v_x_3561_);
v___x_3566_ = l_Lean_Syntax_isOfKind(v_x_3561_, v___x_3565_);
if (v___x_3566_ == 0)
{
lean_object* v___x_3567_; 
lean_dec(v_x_3561_);
v___x_3567_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_3567_;
}
else
{
lean_object* v___x_3568_; lean_object* v___y_3570_; lean_object* v___y_3571_; lean_object* v___y_3572_; lean_object* v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; uint8_t v___y_3609_; uint8_t v___y_3674_; uint8_t v___y_3675_; lean_object* v___y_3676_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; uint8_t v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3715_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v_dc_x3f_3798_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v___x_3817_; lean_object* v___x_3818_; uint8_t v___x_3819_; 
v___x_3568_ = l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_;
v___x_3817_ = lean_unsigned_to_nat(0u);
v___x_3818_ = l_Lean_Syntax_getArg(v_x_3561_, v___x_3817_);
v___x_3819_ = l_Lean_Syntax_isNone(v___x_3818_);
if (v___x_3819_ == 0)
{
lean_object* v___x_3820_; uint8_t v___x_3821_; 
v___x_3820_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_3818_);
v___x_3821_ = l_Lean_Syntax_matchesNull(v___x_3818_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3822_; 
lean_dec(v___x_3818_);
lean_dec(v_x_3561_);
v___x_3822_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_3822_;
}
else
{
lean_object* v_dc_x3f_3823_; 
v_dc_x3f_3823_ = l_Lean_Syntax_getArg(v___x_3818_, v___x_3817_);
lean_dec(v___x_3818_);
if (v___x_3819_ == 0)
{
lean_object* v___x_3826_; uint8_t v___x_3827_; 
v___x_3826_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__7));
lean_inc(v_dc_x3f_3823_);
v___x_3827_ = l_Lean_Syntax_isOfKind(v_dc_x3f_3823_, v___x_3826_);
if (v___x_3827_ == 0)
{
lean_object* v___x_3828_; 
lean_dec(v_dc_x3f_3823_);
lean_dec(v_x_3561_);
v___x_3828_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_3828_;
}
else
{
goto v___jp_3824_;
}
}
else
{
goto v___jp_3824_;
}
v___jp_3824_:
{
lean_object* v___x_3825_; 
v___x_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3825_, 0, v_dc_x3f_3823_);
v_dc_x3f_3798_ = v___x_3825_;
v___y_3799_ = v_a_3562_;
v___y_3800_ = v_a_3563_;
goto v___jp_3797_;
}
}
}
else
{
lean_object* v___x_3829_; 
lean_dec(v___x_3818_);
v___x_3829_ = lean_box(0);
v_dc_x3f_3798_ = v___x_3829_;
v___y_3799_ = v_a_3562_;
v___y_3800_ = v_a_3563_;
goto v___jp_3797_;
}
v___jp_3569_:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___x_3575_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3, &l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3_once, _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__3);
v___x_3576_ = l_Lean_stringToMessageData(v___y_3574_);
v___x_3577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3575_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = l_Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2(v___y_3573_, v___x_3577_, v___y_3570_, v___y_3572_);
lean_dec(v___y_3573_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3598_; 
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3598_ == 0)
{
lean_object* v_unused_3599_; 
v_unused_3599_ = lean_ctor_get(v___x_3578_, 0);
lean_dec(v_unused_3599_);
v___x_3580_ = v___x_3578_;
v_isShared_3581_ = v_isSharedCheck_3598_;
goto v_resetjp_3579_;
}
else
{
lean_dec(v___x_3578_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3598_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3582_; 
v___x_3582_ = l_Lean_Elab_Command_getRef___redArg(v___y_3570_);
if (lean_obj_tag(v___x_3582_) == 0)
{
lean_object* v_a_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3587_; 
v_a_3583_ = lean_ctor_get(v___x_3582_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3582_, 1);
v___x_3584_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v___x_3568_, v___y_3571_);
lean_dec_ref(v___y_3571_);
v___x_3585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3585_, 0, v_a_3583_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
if (v_isShared_3581_ == 0)
{
lean_ctor_set_tag(v___x_3580_, 10);
lean_ctor_set(v___x_3580_, 0, v___x_3585_);
v___x_3587_ = v___x_3580_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v___x_3585_);
v___x_3587_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3588_; 
v___x_3588_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3(v___x_3587_, v___y_3570_, v___y_3572_);
return v___x_3588_;
}
}
else
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_del_object(v___x_3580_);
lean_dec_ref(v___y_3571_);
v_a_3590_ = lean_ctor_get(v___x_3582_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3582_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3582_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_3571_);
return v___x_3578_;
}
}
v___jp_3600_:
{
if (v___y_3609_ == 0)
{
lean_object* v___x_3610_; lean_object* v_env_3611_; lean_object* v_scopes_3612_; lean_object* v_usedQuotCtxts_3613_; lean_object* v_nextMacroScope_3614_; lean_object* v_maxRecDepth_3615_; lean_object* v_ngen_3616_; lean_object* v_auxDeclNGen_3617_; lean_object* v_infoState_3618_; lean_object* v_traceState_3619_; lean_object* v_snapshotTasks_3620_; lean_object* v_prevLinterStates_3621_; lean_object* v_codeQualityEntryTasks_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3647_; 
lean_dec(v___y_3604_);
v___x_3610_ = lean_st_ref_take(v___y_3605_);
v_env_3611_ = lean_ctor_get(v___x_3610_, 0);
v_scopes_3612_ = lean_ctor_get(v___x_3610_, 2);
v_usedQuotCtxts_3613_ = lean_ctor_get(v___x_3610_, 3);
v_nextMacroScope_3614_ = lean_ctor_get(v___x_3610_, 4);
v_maxRecDepth_3615_ = lean_ctor_get(v___x_3610_, 5);
v_ngen_3616_ = lean_ctor_get(v___x_3610_, 6);
v_auxDeclNGen_3617_ = lean_ctor_get(v___x_3610_, 7);
v_infoState_3618_ = lean_ctor_get(v___x_3610_, 8);
v_traceState_3619_ = lean_ctor_get(v___x_3610_, 9);
v_snapshotTasks_3620_ = lean_ctor_get(v___x_3610_, 10);
v_prevLinterStates_3621_ = lean_ctor_get(v___x_3610_, 11);
v_codeQualityEntryTasks_3622_ = lean_ctor_get(v___x_3610_, 12);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3647_ == 0)
{
lean_object* v_unused_3648_; 
v_unused_3648_ = lean_ctor_get(v___x_3610_, 1);
lean_dec(v_unused_3648_);
v___x_3624_ = v___x_3610_;
v_isShared_3625_ = v_isSharedCheck_3647_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3622_);
lean_inc(v_prevLinterStates_3621_);
lean_inc(v_snapshotTasks_3620_);
lean_inc(v_traceState_3619_);
lean_inc(v_infoState_3618_);
lean_inc(v_auxDeclNGen_3617_);
lean_inc(v_ngen_3616_);
lean_inc(v_maxRecDepth_3615_);
lean_inc(v_nextMacroScope_3614_);
lean_inc(v_usedQuotCtxts_3613_);
lean_inc(v_scopes_3612_);
lean_inc(v_env_3611_);
lean_dec(v___x_3610_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3647_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 1, v___y_3602_);
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_env_3611_);
lean_ctor_set(v_reuseFailAlloc_3646_, 1, v___y_3602_);
lean_ctor_set(v_reuseFailAlloc_3646_, 2, v_scopes_3612_);
lean_ctor_set(v_reuseFailAlloc_3646_, 3, v_usedQuotCtxts_3613_);
lean_ctor_set(v_reuseFailAlloc_3646_, 4, v_nextMacroScope_3614_);
lean_ctor_set(v_reuseFailAlloc_3646_, 5, v_maxRecDepth_3615_);
lean_ctor_set(v_reuseFailAlloc_3646_, 6, v_ngen_3616_);
lean_ctor_set(v_reuseFailAlloc_3646_, 7, v_auxDeclNGen_3617_);
lean_ctor_set(v_reuseFailAlloc_3646_, 8, v_infoState_3618_);
lean_ctor_set(v_reuseFailAlloc_3646_, 9, v_traceState_3619_);
lean_ctor_set(v_reuseFailAlloc_3646_, 10, v_snapshotTasks_3620_);
lean_ctor_set(v_reuseFailAlloc_3646_, 11, v_prevLinterStates_3621_);
lean_ctor_set(v_reuseFailAlloc_3646_, 12, v_codeQualityEntryTasks_3622_);
v___x_3627_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v_scopes_3631_; lean_object* v___x_3632_; lean_object* v_opts_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3628_ = lean_st_ref_put(v___y_3605_, v___x_3627_);
v___x_3629_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3630_ = lean_st_ref_get(v___y_3605_);
v_scopes_3631_ = lean_ctor_get(v___x_3630_, 2);
lean_inc(v_scopes_3631_);
lean_dec(v___x_3630_);
v___x_3632_ = l_List_head_x21___redArg(v___x_3629_, v_scopes_3631_);
lean_dec(v_scopes_3631_);
v_opts_3633_ = lean_ctor_get(v___x_3632_, 1);
lean_inc_ref(v_opts_3633_);
lean_dec(v___x_3632_);
v___x_3634_ = l_Lean_guard__msgs_diff;
v___x_3635_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__4(v_opts_3633_, v___x_3634_);
lean_dec_ref(v_opts_3633_);
if (v___x_3635_ == 0)
{
lean_dec(v___y_3608_);
lean_dec_ref(v___y_3606_);
lean_inc_ref(v___y_3603_);
v___y_3570_ = v___y_3601_;
v___y_3571_ = v___y_3603_;
v___y_3572_ = v___y_3605_;
v___y_3573_ = v___y_3607_;
v___y_3574_ = v___y_3603_;
goto v___jp_3569_;
}
else
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3636_ = lean_string_utf8_byte_size(v___y_3606_);
lean_inc(v___y_3608_);
lean_inc_ref(v___y_3606_);
v___x_3637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3637_, 0, v___y_3606_);
lean_ctor_set(v___x_3637_, 1, v___y_3608_);
lean_ctor_set(v___x_3637_, 2, v___x_3636_);
v___x_3638_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__5___closed__0);
v___x_3639_ = lean_mk_empty_array_with_capacity(v___y_3608_);
lean_inc_ref(v___x_3639_);
v___x_3640_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___y_3606_, v___x_3637_, v___x_3636_, v___x_3638_, v___x_3639_);
lean_dec_ref_known(v___x_3637_, 3);
v___x_3641_ = lean_string_utf8_byte_size(v___y_3603_);
lean_inc_ref_n(v___y_3603_, 2);
v___x_3642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3642_, 0, v___y_3603_);
lean_ctor_set(v___x_3642_, 1, v___y_3608_);
lean_ctor_set(v___x_3642_, 2, v___x_3641_);
v___x_3643_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___y_3603_, v___x_3642_, v___x_3641_, v___x_3638_, v___x_3639_);
lean_dec_ref_known(v___x_3642_, 3);
v___x_3644_ = l_Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7(v___x_3640_, v___x_3643_);
v___x_3645_ = l_Lean_Diff_linesToString___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__8(v___x_3644_);
lean_dec_ref(v___x_3644_);
v___y_3570_ = v___y_3601_;
v___y_3571_ = v___y_3603_;
v___y_3572_ = v___y_3605_;
v___y_3573_ = v___y_3607_;
v___y_3574_ = v___x_3645_;
goto v___jp_3569_;
}
}
}
}
else
{
lean_object* v___x_3649_; lean_object* v_env_3650_; lean_object* v_scopes_3651_; lean_object* v_usedQuotCtxts_3652_; lean_object* v_nextMacroScope_3653_; lean_object* v_maxRecDepth_3654_; lean_object* v_ngen_3655_; lean_object* v_auxDeclNGen_3656_; lean_object* v_infoState_3657_; lean_object* v_traceState_3658_; lean_object* v_snapshotTasks_3659_; lean_object* v_prevLinterStates_3660_; lean_object* v_codeQualityEntryTasks_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3671_; 
lean_dec(v___y_3608_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
v___x_3649_ = lean_st_ref_take(v___y_3605_);
v_env_3650_ = lean_ctor_get(v___x_3649_, 0);
v_scopes_3651_ = lean_ctor_get(v___x_3649_, 2);
v_usedQuotCtxts_3652_ = lean_ctor_get(v___x_3649_, 3);
v_nextMacroScope_3653_ = lean_ctor_get(v___x_3649_, 4);
v_maxRecDepth_3654_ = lean_ctor_get(v___x_3649_, 5);
v_ngen_3655_ = lean_ctor_get(v___x_3649_, 6);
v_auxDeclNGen_3656_ = lean_ctor_get(v___x_3649_, 7);
v_infoState_3657_ = lean_ctor_get(v___x_3649_, 8);
v_traceState_3658_ = lean_ctor_get(v___x_3649_, 9);
v_snapshotTasks_3659_ = lean_ctor_get(v___x_3649_, 10);
v_prevLinterStates_3660_ = lean_ctor_get(v___x_3649_, 11);
v_codeQualityEntryTasks_3661_ = lean_ctor_get(v___x_3649_, 12);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3671_ == 0)
{
lean_object* v_unused_3672_; 
v_unused_3672_ = lean_ctor_get(v___x_3649_, 1);
lean_dec(v_unused_3672_);
v___x_3663_ = v___x_3649_;
v_isShared_3664_ = v_isSharedCheck_3671_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3661_);
lean_inc(v_prevLinterStates_3660_);
lean_inc(v_snapshotTasks_3659_);
lean_inc(v_traceState_3658_);
lean_inc(v_infoState_3657_);
lean_inc(v_auxDeclNGen_3656_);
lean_inc(v_ngen_3655_);
lean_inc(v_maxRecDepth_3654_);
lean_inc(v_nextMacroScope_3653_);
lean_inc(v_usedQuotCtxts_3652_);
lean_inc(v_scopes_3651_);
lean_inc(v_env_3650_);
lean_dec(v___x_3649_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3671_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3665_; lean_object* v___x_3667_; 
v___x_3665_ = lean_box(0);
if (v_isShared_3664_ == 0)
{
lean_ctor_set(v___x_3663_, 1, v___y_3604_);
v___x_3667_ = v___x_3663_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_env_3650_);
lean_ctor_set(v_reuseFailAlloc_3670_, 1, v___y_3604_);
lean_ctor_set(v_reuseFailAlloc_3670_, 2, v_scopes_3651_);
lean_ctor_set(v_reuseFailAlloc_3670_, 3, v_usedQuotCtxts_3652_);
lean_ctor_set(v_reuseFailAlloc_3670_, 4, v_nextMacroScope_3653_);
lean_ctor_set(v_reuseFailAlloc_3670_, 5, v_maxRecDepth_3654_);
lean_ctor_set(v_reuseFailAlloc_3670_, 6, v_ngen_3655_);
lean_ctor_set(v_reuseFailAlloc_3670_, 7, v_auxDeclNGen_3656_);
lean_ctor_set(v_reuseFailAlloc_3670_, 8, v_infoState_3657_);
lean_ctor_set(v_reuseFailAlloc_3670_, 9, v_traceState_3658_);
lean_ctor_set(v_reuseFailAlloc_3670_, 10, v_snapshotTasks_3659_);
lean_ctor_set(v_reuseFailAlloc_3670_, 11, v_prevLinterStates_3660_);
lean_ctor_set(v_reuseFailAlloc_3670_, 12, v_codeQualityEntryTasks_3661_);
v___x_3667_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3668_ = lean_st_ref_put(v___y_3605_, v___x_3667_);
v___x_3669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3665_);
return v___x_3669_;
}
}
}
}
v___jp_3673_:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v_a_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v_str_3696_; lean_object* v_startInclusive_3697_; lean_object* v_endExclusive_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3713_; 
v___x_3686_ = l_Lean_MessageLog_toList(v___y_3679_);
lean_dec(v___y_3679_);
v___x_3687_ = lean_box(0);
v___x_3688_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(v___y_3685_, v___x_3686_, v___x_3687_);
lean_dec(v___y_3685_);
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
lean_inc(v_a_3689_);
lean_dec_ref(v___x_3688_);
v___x_3690_ = l_Lean_Elab_Tactic_GuardMsgs_MessageOrdering_apply(v___y_3674_, v_a_3689_);
v___x_3691_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__4));
v___x_3692_ = l_String_intercalate(v___x_3691_, v___x_3690_);
v___x_3693_ = lean_string_utf8_byte_size(v___x_3692_);
lean_inc(v___y_3683_);
v___x_3694_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3692_);
lean_ctor_set(v___x_3694_, 1, v___y_3683_);
lean_ctor_set(v___x_3694_, 2, v___x_3693_);
v___x_3695_ = l_String_Slice_trimAscii(v___x_3694_);
v_str_3696_ = lean_ctor_get(v___x_3695_, 0);
v_startInclusive_3697_ = lean_ctor_get(v___x_3695_, 1);
v_endExclusive_3698_ = lean_ctor_get(v___x_3695_, 2);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3700_ = v___x_3695_;
v_isShared_3701_ = v_isSharedCheck_3713_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_endExclusive_3698_);
lean_inc(v_startInclusive_3697_);
lean_inc(v_str_3696_);
lean_dec(v___x_3695_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3713_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3702_; 
v___x_3702_ = lean_string_utf8_extract_fast(v_str_3696_, v_startInclusive_3697_, v_endExclusive_3698_);
lean_dec(v_endExclusive_3698_);
lean_dec(v_startInclusive_3697_);
lean_dec_ref(v_str_3696_);
if (v___y_3684_ == 0)
{
lean_object* v___x_3703_; lean_object* v___x_3704_; uint8_t v___x_3705_; 
lean_del_object(v___x_3700_);
lean_inc_ref(v___y_3681_);
v___x_3703_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3675_, v___y_3681_);
lean_inc_ref(v___x_3702_);
v___x_3704_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3675_, v___x_3702_);
v___x_3705_ = lean_string_dec_eq(v___x_3703_, v___x_3704_);
lean_dec_ref(v___x_3704_);
lean_dec_ref(v___x_3703_);
v___y_3601_ = v___y_3677_;
v___y_3602_ = v___y_3676_;
v___y_3603_ = v___x_3702_;
v___y_3604_ = v___y_3678_;
v___y_3605_ = v___y_3680_;
v___y_3606_ = v___y_3681_;
v___y_3607_ = v___y_3682_;
v___y_3608_ = v___y_3683_;
v___y_3609_ = v___x_3705_;
goto v___jp_3600_;
}
else
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3710_; 
lean_inc_ref(v___x_3702_);
v___x_3706_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3675_, v___x_3702_);
lean_inc_ref(v___y_3681_);
v___x_3707_ = l_Lean_Elab_Tactic_GuardMsgs_WhitespaceMode_apply(v___y_3675_, v___y_3681_);
v___x_3708_ = lean_string_utf8_byte_size(v___x_3706_);
lean_inc(v___y_3683_);
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 2, v___x_3708_);
lean_ctor_set(v___x_3700_, 1, v___y_3683_);
lean_ctor_set(v___x_3700_, 0, v___x_3706_);
v___x_3710_ = v___x_3700_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3706_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v___y_3683_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
uint8_t v___x_3711_; 
v___x_3711_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9(v___x_3707_, v___x_3710_);
lean_dec_ref(v___x_3710_);
v___y_3601_ = v___y_3677_;
v___y_3602_ = v___y_3676_;
v___y_3603_ = v___x_3702_;
v___y_3604_ = v___y_3678_;
v___y_3605_ = v___y_3680_;
v___y_3606_ = v___y_3681_;
v___y_3607_ = v___y_3682_;
v___y_3608_ = v___y_3683_;
v___y_3609_ = v___x_3711_;
goto v___jp_3600_;
}
}
}
}
v___jp_3714_:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v_str_3725_; lean_object* v_startInclusive_3726_; lean_object* v_endExclusive_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
v___x_3721_ = lean_unsigned_to_nat(0u);
v___x_3722_ = lean_string_utf8_byte_size(v___y_3720_);
v___x_3723_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3723_, 0, v___y_3720_);
lean_ctor_set(v___x_3723_, 1, v___x_3721_);
lean_ctor_set(v___x_3723_, 2, v___x_3722_);
v___x_3724_ = l_String_Slice_trimAscii(v___x_3723_);
v_str_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc_ref(v_str_3725_);
v_startInclusive_3726_ = lean_ctor_get(v___x_3724_, 1);
lean_inc(v_startInclusive_3726_);
v_endExclusive_3727_ = lean_ctor_get(v___x_3724_, 2);
lean_inc(v_endExclusive_3727_);
lean_dec_ref(v___x_3724_);
v___x_3728_ = lean_string_utf8_extract_fast(v_str_3725_, v_startInclusive_3726_, v_endExclusive_3727_);
lean_dec(v_endExclusive_3727_);
lean_dec(v_startInclusive_3726_);
lean_dec_ref(v_str_3725_);
v___x_3729_ = l_Lean_Elab_Tactic_GuardMsgs_removeTrailingWhitespaceMarker(v___x_3728_);
v___x_3730_ = l_Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsSpec(v___y_3715_, v___y_3716_, v___y_3718_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v_a_3731_; lean_object* v_filterFn_3732_; uint8_t v_whitespace_3733_; uint8_t v_ordering_3734_; uint8_t v_reportPositions_3735_; uint8_t v_substring_3736_; lean_object* v___x_3737_; 
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc(v_a_3731_);
lean_dec_ref_known(v___x_3730_, 1);
v_filterFn_3732_ = lean_ctor_get(v_a_3731_, 0);
lean_inc_ref(v_filterFn_3732_);
v_whitespace_3733_ = lean_ctor_get_uint8(v_a_3731_, sizeof(void*)*1);
v_ordering_3734_ = lean_ctor_get_uint8(v_a_3731_, sizeof(void*)*1 + 1);
v_reportPositions_3735_ = lean_ctor_get_uint8(v_a_3731_, sizeof(void*)*1 + 2);
v_substring_3736_ = lean_ctor_get_uint8(v_a_3731_, sizeof(void*)*1 + 3);
lean_dec(v_a_3731_);
v___x_3737_ = l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(v___y_3717_, v___y_3716_, v___y_3718_);
if (lean_obj_tag(v___x_3737_) == 0)
{
lean_object* v_a_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v_a_3742_; 
v_a_3738_ = lean_ctor_get(v___x_3737_, 0);
lean_inc(v_a_3738_);
lean_dec_ref_known(v___x_3737_, 1);
v___x_3739_ = l_Lean_MessageLog_toList(v_a_3738_);
v___x_3740_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5, &l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5_once, _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__5);
v___x_3741_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(v_filterFn_3732_, v___x_3739_, v___x_3740_);
lean_dec(v___x_3739_);
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
lean_inc(v_a_3742_);
lean_dec_ref(v___x_3741_);
if (v_reportPositions_3735_ == 0)
{
lean_object* v_fst_3743_; lean_object* v_snd_3744_; lean_object* v___x_3745_; 
v_fst_3743_ = lean_ctor_get(v_a_3742_, 0);
lean_inc(v_fst_3743_);
v_snd_3744_ = lean_ctor_get(v_a_3742_, 1);
lean_inc(v_snd_3744_);
lean_dec(v_a_3742_);
v___x_3745_ = lean_box(0);
v___y_3674_ = v_ordering_3734_;
v___y_3675_ = v_whitespace_3733_;
v___y_3676_ = v_a_3738_;
v___y_3677_ = v___y_3716_;
v___y_3678_ = v_snd_3744_;
v___y_3679_ = v_fst_3743_;
v___y_3680_ = v___y_3718_;
v___y_3681_ = v___x_3729_;
v___y_3682_ = v___y_3719_;
v___y_3683_ = v___x_3721_;
v___y_3684_ = v_substring_3736_;
v___y_3685_ = v___x_3745_;
goto v___jp_3673_;
}
else
{
lean_object* v_fst_3746_; lean_object* v_snd_3747_; uint8_t v___x_3748_; lean_object* v___x_3749_; 
v_fst_3746_ = lean_ctor_get(v_a_3742_, 0);
lean_inc(v_fst_3746_);
v_snd_3747_ = lean_ctor_get(v_a_3742_, 1);
lean_inc(v_snd_3747_);
lean_dec(v_a_3742_);
v___x_3748_ = 0;
v___x_3749_ = l_Lean_Syntax_getPos_x3f(v___y_3719_, v___x_3748_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_object* v___x_3750_; 
v___x_3750_ = lean_box(0);
v___y_3674_ = v_ordering_3734_;
v___y_3675_ = v_whitespace_3733_;
v___y_3676_ = v_a_3738_;
v___y_3677_ = v___y_3716_;
v___y_3678_ = v_snd_3747_;
v___y_3679_ = v_fst_3746_;
v___y_3680_ = v___y_3718_;
v___y_3681_ = v___x_3729_;
v___y_3682_ = v___y_3719_;
v___y_3683_ = v___x_3721_;
v___y_3684_ = v_substring_3736_;
v___y_3685_ = v___x_3750_;
goto v___jp_3673_;
}
else
{
lean_object* v_val_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3761_; 
v_val_3751_ = lean_ctor_get(v___x_3749_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3749_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3753_ = v___x_3749_;
v_isShared_3754_ = v_isSharedCheck_3761_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_val_3751_);
lean_dec(v___x_3749_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3761_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v_fileMap_3755_; lean_object* v___x_3756_; lean_object* v_line_3757_; lean_object* v___x_3759_; 
v_fileMap_3755_ = lean_ctor_get(v___y_3716_, 1);
lean_inc_ref(v_fileMap_3755_);
v___x_3756_ = l_Lean_FileMap_toPosition(v_fileMap_3755_, v_val_3751_);
lean_dec(v_val_3751_);
v_line_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_line_3757_);
lean_dec_ref(v___x_3756_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 0, v_line_3757_);
v___x_3759_ = v___x_3753_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_line_3757_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
v___y_3674_ = v_ordering_3734_;
v___y_3675_ = v_whitespace_3733_;
v___y_3676_ = v_a_3738_;
v___y_3677_ = v___y_3716_;
v___y_3678_ = v_snd_3747_;
v___y_3679_ = v_fst_3746_;
v___y_3680_ = v___y_3718_;
v___y_3681_ = v___x_3729_;
v___y_3682_ = v___y_3719_;
v___y_3683_ = v___x_3721_;
v___y_3684_ = v_substring_3736_;
v___y_3685_ = v___x_3759_;
goto v___jp_3673_;
}
}
}
}
}
else
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3769_; 
lean_dec_ref(v_filterFn_3732_);
lean_dec_ref(v___x_3729_);
lean_dec(v___y_3719_);
v_a_3762_ = lean_ctor_get(v___x_3737_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v___x_3737_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3764_ = v___x_3737_;
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3737_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_a_3762_);
v___x_3767_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
return v___x_3767_;
}
}
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
lean_dec_ref(v___x_3729_);
lean_dec(v___y_3719_);
lean_dec(v___y_3717_);
v_a_3770_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3730_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3730_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
}
v___jp_3778_:
{
if (lean_obj_tag(v___y_3780_) == 0)
{
lean_object* v___x_3785_; 
v___x_3785_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___y_3715_ = v___y_3784_;
v___y_3716_ = v___y_3779_;
v___y_3717_ = v___y_3781_;
v___y_3718_ = v___y_3782_;
v___y_3719_ = v___y_3783_;
v___y_3720_ = v___x_3785_;
goto v___jp_3714_;
}
else
{
lean_object* v_val_3786_; lean_object* v___x_3787_; 
v_val_3786_ = lean_ctor_get(v___y_3780_, 0);
lean_inc(v_val_3786_);
lean_dec_ref_known(v___y_3780_, 1);
v___x_3787_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10(v_val_3786_, v___y_3779_, v___y_3782_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_a_3788_);
lean_dec_ref_known(v___x_3787_, 1);
v___y_3715_ = v___y_3784_;
v___y_3716_ = v___y_3779_;
v___y_3717_ = v___y_3781_;
v___y_3718_ = v___y_3782_;
v___y_3719_ = v___y_3783_;
v___y_3720_ = v_a_3788_;
goto v___jp_3714_;
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
lean_dec(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec(v___y_3781_);
v_a_3789_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3787_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3787_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
}
v___jp_3797_:
{
lean_object* v___x_3801_; lean_object* v_tk_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3801_ = lean_unsigned_to_nat(1u);
v_tk_3802_ = l_Lean_Syntax_getArg(v_x_3561_, v___x_3801_);
v___x_3803_ = lean_unsigned_to_nat(2u);
v___x_3804_ = l_Lean_Syntax_getArg(v_x_3561_, v___x_3803_);
v___x_3805_ = lean_unsigned_to_nat(4u);
v___x_3806_ = l_Lean_Syntax_getArg(v_x_3561_, v___x_3805_);
lean_dec(v_x_3561_);
v___x_3807_ = l_Lean_Syntax_getOptional_x3f(v___x_3804_);
lean_dec(v___x_3804_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_box(0);
v___y_3779_ = v___y_3799_;
v___y_3780_ = v_dc_x3f_3798_;
v___y_3781_ = v___x_3806_;
v___y_3782_ = v___y_3800_;
v___y_3783_ = v_tk_3802_;
v___y_3784_ = v___x_3808_;
goto v___jp_3778_;
}
else
{
lean_object* v_val_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3816_; 
v_val_3809_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3811_ = v___x_3807_;
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_val_3809_);
lean_dec(v___x_3807_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_val_3809_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
v___y_3779_ = v___y_3799_;
v___y_3780_ = v_dc_x3f_3798_;
v___y_3781_ = v___x_3806_;
v___y_3782_ = v___y_3800_;
v___y_3783_ = v_tk_3802_;
v___y_3784_ = v___x_3814_;
goto v___jp_3778_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___boxed(lean_object* v_x_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs(v_x_3830_, v_a_3831_, v_a_3832_);
lean_dec(v_a_3832_);
lean_dec_ref(v_a_3831_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0(lean_object* v_filterFn_3835_, lean_object* v_as_3836_, lean_object* v_as_x27_3837_, lean_object* v_b_3838_, lean_object* v_a_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v___x_3843_; 
v___x_3843_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___redArg(v_filterFn_3835_, v_as_x27_3837_, v_b_3838_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0___boxed(lean_object* v_filterFn_3844_, lean_object* v_as_3845_, lean_object* v_as_x27_3846_, lean_object* v_b_3847_, lean_object* v_a_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__0(v_filterFn_3844_, v_as_3845_, v_as_x27_3846_, v_b_3847_, v_a_3848_, v___y_3849_, v___y_3850_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v_as_x27_3846_);
lean_dec(v_as_3845_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1(lean_object* v___y_3853_, lean_object* v_x_3854_, lean_object* v_x_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v___x_3859_; 
v___x_3859_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___redArg(v___y_3853_, v_x_3854_, v_x_3855_);
return v___x_3859_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1___boxed(lean_object* v___y_3860_, lean_object* v_x_3861_, lean_object* v_x_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v_res_3866_; 
v_res_3866_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__1(v___y_3860_, v_x_3861_, v_x_3862_, v___y_3863_, v___y_3864_);
lean_dec(v___y_3864_);
lean_dec_ref(v___y_3863_);
lean_dec(v___y_3860_);
return v_res_3866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4(lean_object* v_t_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_){
_start:
{
lean_object* v___x_3871_; 
v___x_3871_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___redArg(v_t_3867_, v___y_3869_);
return v___x_3871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4___boxed(lean_object* v_t_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__3_spec__4(v_t_3872_, v___y_3873_, v___y_3874_);
lean_dec(v___y_3874_);
lean_dec_ref(v___y_3873_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6(lean_object* v___x_3877_, lean_object* v___x_3878_, lean_object* v___x_3879_, lean_object* v_inst_3880_, lean_object* v_R_3881_, lean_object* v_a_3882_, lean_object* v_b_3883_){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___redArg(v___x_3877_, v___x_3878_, v___x_3879_, v_a_3882_, v_b_3883_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6___boxed(lean_object* v___x_3885_, lean_object* v___x_3886_, lean_object* v___x_3887_, lean_object* v_inst_3888_, lean_object* v_R_3889_, lean_object* v_a_3890_, lean_object* v_b_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6(v___x_3885_, v___x_3886_, v___x_3887_, v_inst_3888_, v_R_3889_, v_a_3890_, v_b_3891_);
lean_dec_ref(v___x_3886_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5(lean_object* v_msgData_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_){
_start:
{
lean_object* v___x_3897_; 
v___x_3897_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___redArg(v_msgData_3893_, v___y_3895_);
return v___x_3897_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2_spec__5(v_msgData_3898_, v___y_3899_, v___y_3900_);
lean_dec(v___y_3900_);
lean_dec_ref(v___y_3899_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8(lean_object* v___x_3903_, lean_object* v___x_3904_, lean_object* v___x_3905_, lean_object* v_inst_3906_, lean_object* v_R_3907_, lean_object* v_a_3908_, lean_object* v_b_3909_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___redArg(v___x_3903_, v___x_3904_, v___x_3905_, v_a_3908_, v_b_3909_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8___boxed(lean_object* v___x_3911_, lean_object* v___x_3912_, lean_object* v___x_3913_, lean_object* v_inst_3914_, lean_object* v_R_3915_, lean_object* v_a_3916_, lean_object* v_b_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__6_spec__8(v___x_3911_, v___x_3912_, v___x_3913_, v_inst_3914_, v_R_3915_, v_a_3916_, v_b_3917_);
lean_dec_ref(v___x_3912_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10(lean_object* v___x_3919_, lean_object* v_original_3920_, lean_object* v_a_3921_, lean_object* v_inst_3922_, lean_object* v_a_3923_){
_start:
{
lean_object* v___x_3924_; 
v___x_3924_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___redArg(v___x_3919_, v_original_3920_, v_a_3921_, v_a_3923_);
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10___boxed(lean_object* v___x_3925_, lean_object* v_original_3926_, lean_object* v_a_3927_, lean_object* v_inst_3928_, lean_object* v_a_3929_){
_start:
{
lean_object* v_res_3930_; 
v_res_3930_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__10(v___x_3925_, v_original_3926_, v_a_3927_, v_inst_3928_, v_a_3929_);
lean_dec_ref(v_a_3927_);
lean_dec_ref(v_original_3926_);
lean_dec(v___x_3925_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11(lean_object* v___x_3931_, lean_object* v_edited_3932_, lean_object* v_a_3933_, lean_object* v_inst_3934_, lean_object* v_a_3935_){
_start:
{
lean_object* v___x_3936_; 
v___x_3936_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___redArg(v___x_3931_, v_edited_3932_, v_a_3933_, v_a_3935_);
return v___x_3936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11___boxed(lean_object* v___x_3937_, lean_object* v_edited_3938_, lean_object* v_a_3939_, lean_object* v_inst_3940_, lean_object* v_a_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__11(v___x_3937_, v_edited_3938_, v_a_3939_, v_inst_3940_, v_a_3941_);
lean_dec_ref(v_a_3939_);
lean_dec_ref(v_edited_3938_);
lean_dec(v___x_3937_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14(lean_object* v___x_3943_, lean_object* v_original_3944_, lean_object* v_inst_3945_, lean_object* v_a_3946_){
_start:
{
lean_object* v___x_3947_; 
v___x_3947_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___redArg(v___x_3943_, v_original_3944_, v_a_3946_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14___boxed(lean_object* v___x_3948_, lean_object* v_original_3949_, lean_object* v_inst_3950_, lean_object* v_a_3951_){
_start:
{
lean_object* v_res_3952_; 
v_res_3952_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__14(v___x_3948_, v_original_3949_, v_inst_3950_, v_a_3951_);
lean_dec_ref(v_original_3949_);
lean_dec(v___x_3948_);
return v_res_3952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15(lean_object* v___x_3953_, lean_object* v_edited_3954_, lean_object* v_inst_3955_, lean_object* v_a_3956_){
_start:
{
lean_object* v___x_3957_; 
v___x_3957_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___redArg(v___x_3953_, v_edited_3954_, v_a_3956_);
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15___boxed(lean_object* v___x_3958_, lean_object* v_edited_3959_, lean_object* v_inst_3960_, lean_object* v_a_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__15(v___x_3958_, v_edited_3959_, v_inst_3960_, v_a_3961_);
lean_dec_ref(v_edited_3959_);
lean_dec(v___x_3958_);
return v_res_3962_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21(lean_object* v_s_3963_, lean_object* v_inst_3964_, lean_object* v_R_3965_, lean_object* v_a_3966_, uint8_t v_b_3967_, lean_object* v_c_3968_){
_start:
{
uint8_t v___x_3969_; 
v___x_3969_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_3963_, v_a_3966_, v_b_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___boxed(lean_object* v_s_3970_, lean_object* v_inst_3971_, lean_object* v_R_3972_, lean_object* v_a_3973_, lean_object* v_b_3974_, lean_object* v_c_3975_){
_start:
{
uint8_t v_b_boxed_3976_; uint8_t v_res_3977_; lean_object* v_r_3978_; 
v_b_boxed_3976_ = lean_unbox(v_b_3974_);
v_res_3977_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21(v_s_3970_, v_inst_3971_, v_R_3972_, v_a_3973_, v_b_boxed_3976_, v_c_3975_);
lean_dec_ref(v_s_3970_);
v_r_3978_ = lean_box(v_res_3977_);
return v_r_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23(lean_object* v_00_u03b1_3979_, lean_object* v_ref_3980_, lean_object* v_msg_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_){
_start:
{
lean_object* v___x_3985_; 
v___x_3985_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___redArg(v_ref_3980_, v_msg_3981_, v___y_3982_, v___y_3983_);
return v___x_3985_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23___boxed(lean_object* v_00_u03b1_3986_, lean_object* v_ref_3987_, lean_object* v_msg_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23(v_00_u03b1_3986_, v_ref_3987_, v_msg_3988_, v___y_3989_, v___y_3990_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec(v_ref_3987_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16(lean_object* v_as_3993_, lean_object* v_as_x27_3994_, lean_object* v_b_3995_, lean_object* v_a_3996_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___redArg(v_as_x27_3994_, v_b_3995_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16___boxed(lean_object* v_as_3998_, lean_object* v_as_x27_3999_, lean_object* v_b_4000_, lean_object* v_a_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__16(v_as_3998_, v_as_x27_3999_, v_b_4000_, v_a_4001_);
lean_dec(v_as_x27_3999_);
lean_dec(v_as_3998_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19(lean_object* v_lsize_4003_, lean_object* v_rsize_4004_, lean_object* v_histogram_4005_, lean_object* v_index_4006_, lean_object* v_val_4007_){
_start:
{
lean_object* v___x_4008_; 
v___x_4008_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___redArg(v_histogram_4005_, v_index_4006_, v_val_4007_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19___boxed(lean_object* v_lsize_4009_, lean_object* v_rsize_4010_, lean_object* v_histogram_4011_, lean_object* v_index_4012_, lean_object* v_val_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19(v_lsize_4009_, v_rsize_4010_, v_histogram_4011_, v_index_4012_, v_val_4013_);
lean_dec(v_rsize_4010_);
lean_dec(v_lsize_4009_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20(lean_object* v_upperBound_4015_, lean_object* v___x_4016_, lean_object* v_fst_4017_, lean_object* v___x_4018_, lean_object* v_inst_4019_, lean_object* v_R_4020_, lean_object* v_a_4021_, lean_object* v_b_4022_, lean_object* v_c_4023_){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___redArg(v_upperBound_4015_, v___x_4016_, v_fst_4017_, v___x_4018_, v_a_4021_, v_b_4022_);
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20___boxed(lean_object* v_upperBound_4025_, lean_object* v___x_4026_, lean_object* v_fst_4027_, lean_object* v___x_4028_, lean_object* v_inst_4029_, lean_object* v_R_4030_, lean_object* v_a_4031_, lean_object* v_b_4032_, lean_object* v_c_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__20(v_upperBound_4025_, v___x_4026_, v_fst_4027_, v___x_4028_, v_inst_4029_, v_R_4030_, v_a_4031_, v_b_4032_, v_c_4033_);
lean_dec(v___x_4028_);
lean_dec_ref(v_fst_4027_);
lean_dec(v___x_4026_);
lean_dec(v_upperBound_4025_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21(lean_object* v_lsize_4035_, lean_object* v_rsize_4036_, lean_object* v_histogram_4037_, lean_object* v_index_4038_, lean_object* v_val_4039_){
_start:
{
lean_object* v___x_4040_; 
v___x_4040_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___redArg(v_histogram_4037_, v_index_4038_, v_val_4039_);
return v___x_4040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21___boxed(lean_object* v_lsize_4041_, lean_object* v_rsize_4042_, lean_object* v_histogram_4043_, lean_object* v_index_4044_, lean_object* v_val_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__21(v_lsize_4041_, v_rsize_4042_, v_histogram_4043_, v_index_4044_, v_val_4045_);
lean_dec(v_rsize_4042_);
lean_dec(v_lsize_4041_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22(lean_object* v_upperBound_4047_, lean_object* v_fst_4048_, lean_object* v___x_4049_, lean_object* v_fst_4050_, lean_object* v_inst_4051_, lean_object* v_R_4052_, lean_object* v_a_4053_, lean_object* v_b_4054_, lean_object* v_c_4055_){
_start:
{
lean_object* v___x_4056_; 
v___x_4056_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___redArg(v_upperBound_4047_, v_fst_4048_, v___x_4049_, v_fst_4050_, v_a_4053_, v_b_4054_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22___boxed(lean_object* v_upperBound_4057_, lean_object* v_fst_4058_, lean_object* v___x_4059_, lean_object* v_fst_4060_, lean_object* v_inst_4061_, lean_object* v_R_4062_, lean_object* v_a_4063_, lean_object* v_b_4064_, lean_object* v_c_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__22(v_upperBound_4057_, v_fst_4058_, v___x_4059_, v_fst_4060_, v_inst_4061_, v_R_4062_, v_a_4063_, v_b_4064_, v_c_4065_);
lean_dec_ref(v_fst_4060_);
lean_dec(v___x_4059_);
lean_dec_ref(v_fst_4058_);
lean_dec(v_upperBound_4057_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35(lean_object* v_00_u03b1_4067_, lean_object* v_msg_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v___x_4072_; 
v___x_4072_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___redArg(v_msg_4068_, v___y_4069_, v___y_4070_);
return v___x_4072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35___boxed(lean_object* v_00_u03b1_4073_, lean_object* v_msg_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35(v_00_u03b1_4073_, v_msg_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25(lean_object* v_00_u03b2_4079_, lean_object* v_m_4080_, lean_object* v_a_4081_){
_start:
{
lean_object* v___x_4082_; 
v___x_4082_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___redArg(v_m_4080_, v_a_4081_);
return v___x_4082_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25___boxed(lean_object* v_00_u03b2_4083_, lean_object* v_m_4084_, lean_object* v_a_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25(v_00_u03b2_4083_, v_m_4084_, v_a_4085_);
lean_dec_ref(v_a_4085_);
lean_dec_ref(v_m_4084_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26(lean_object* v_00_u03b2_4087_, lean_object* v_m_4088_, lean_object* v_a_4089_, lean_object* v_b_4090_){
_start:
{
lean_object* v___x_4091_; 
v___x_4091_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26___redArg(v_m_4088_, v_a_4089_, v_b_4090_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40(lean_object* v_msgData_4092_, lean_object* v_macroStack_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v___x_4097_; 
v___x_4097_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___redArg(v_msgData_4092_, v_macroStack_4093_, v___y_4095_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40___boxed(lean_object* v_msgData_4098_, lean_object* v_macroStack_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__10_spec__23_spec__35_spec__40(v_msgData_4098_, v_macroStack_4099_, v___y_4100_, v___y_4101_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29(lean_object* v_inst_4104_, lean_object* v_R_4105_, lean_object* v_a_4106_, lean_object* v_b_4107_){
_start:
{
lean_object* v___x_4108_; 
v___x_4108_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__15_spec__20_spec__29___redArg(v_a_4106_, v_b_4107_);
return v___x_4108_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35(lean_object* v_00_u03b2_4109_, lean_object* v_a_4110_, lean_object* v_x_4111_){
_start:
{
lean_object* v___x_4112_; 
v___x_4112_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___redArg(v_a_4110_, v_x_4111_);
return v___x_4112_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35___boxed(lean_object* v_00_u03b2_4113_, lean_object* v_a_4114_, lean_object* v_x_4115_){
_start:
{
lean_object* v_res_4116_; 
v_res_4116_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__25_spec__35(v_00_u03b2_4113_, v_a_4114_, v_x_4115_);
lean_dec(v_x_4115_);
lean_dec_ref(v_a_4114_);
return v_res_4116_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37(lean_object* v_00_u03b2_4117_, lean_object* v_a_4118_, lean_object* v_x_4119_){
_start:
{
uint8_t v___x_4120_; 
v___x_4120_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___redArg(v_a_4118_, v_x_4119_);
return v___x_4120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37___boxed(lean_object* v_00_u03b2_4121_, lean_object* v_a_4122_, lean_object* v_x_4123_){
_start:
{
uint8_t v_res_4124_; lean_object* v_r_4125_; 
v_res_4124_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__37(v_00_u03b2_4121_, v_a_4122_, v_x_4123_);
lean_dec(v_x_4123_);
lean_dec_ref(v_a_4122_);
v_r_4125_ = lean_box(v_res_4124_);
return v_r_4125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38(lean_object* v_00_u03b2_4126_, lean_object* v_data_4127_){
_start:
{
lean_object* v___x_4128_; 
v___x_4128_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38___redArg(v_data_4127_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39(lean_object* v_00_u03b2_4129_, lean_object* v_a_4130_, lean_object* v_b_4131_, lean_object* v_x_4132_){
_start:
{
lean_object* v___x_4133_; 
v___x_4133_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__39___redArg(v_a_4130_, v_b_4131_, v_x_4132_);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44(lean_object* v_00_u03b2_4134_, lean_object* v_i_4135_, lean_object* v_source_4136_, lean_object* v_target_4137_){
_start:
{
lean_object* v___x_4138_; 
v___x_4138_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44___redArg(v_i_4135_, v_source_4136_, v_target_4137_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46(lean_object* v_00_u03b2_4139_, lean_object* v_x_4140_, lean_object* v_x_4141_){
_start:
{
lean_object* v___x_4142_; 
v___x_4142_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__7_spec__12_spec__19_spec__26_spec__38_spec__44_spec__46___redArg(v_x_4140_, v_x_4141_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1(){
_start:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; 
v___x_4151_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4152_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___closed__1));
v___x_4153_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1));
v___x_4154_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___boxed), 4, 0);
v___x_4155_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4151_, v___x_4152_, v___x_4153_, v___x_4154_);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___boxed(lean_object* v_a_4156_){
_start:
{
lean_object* v_res_4157_; 
v_res_4157_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1();
return v_res_4157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3(){
_start:
{
lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4184_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1___closed__1));
v___x_4185_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___closed__6));
v___x_4186_ = l_Lean_addBuiltinDeclarationRanges(v___x_4184_, v___x_4185_);
return v___x_4186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3___boxed(lean_object* v_a_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3();
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(lean_object* v___y_4189_){
_start:
{
lean_object* v_doc_4191_; lean_object* v___x_4192_; 
v_doc_4191_ = lean_ctor_get(v___y_4189_, 1);
lean_inc_ref(v_doc_4191_);
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v_doc_4191_);
return v___x_4192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1___boxed(lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
lean_object* v_res_4195_; 
v_res_4195_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(v___y_4193_);
lean_dec_ref(v___y_4193_);
return v_res_4195_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(lean_object* v_s_4196_, lean_object* v_a_4197_, uint8_t v_b_4198_){
_start:
{
lean_object* v_str_4199_; lean_object* v_startInclusive_4200_; lean_object* v_endExclusive_4201_; lean_object* v___x_4202_; uint8_t v_decide_4203_; 
v_str_4199_ = lean_ctor_get(v_s_4196_, 0);
v_startInclusive_4200_ = lean_ctor_get(v_s_4196_, 1);
v_endExclusive_4201_ = lean_ctor_get(v_s_4196_, 2);
v___x_4202_ = lean_nat_sub(v_endExclusive_4201_, v_startInclusive_4200_);
v_decide_4203_ = lean_nat_dec_eq(v_a_4197_, v___x_4202_);
lean_dec(v___x_4202_);
if (v_decide_4203_ == 0)
{
lean_object* v___x_4204_; uint32_t v___x_4205_; uint32_t v___x_4206_; uint8_t v___x_4207_; 
v___x_4204_ = lean_nat_add(v_startInclusive_4200_, v_a_4197_);
lean_dec(v_a_4197_);
v___x_4205_ = lean_string_utf8_get_fast(v_str_4199_, v___x_4204_);
v___x_4206_ = 10;
v___x_4207_ = lean_uint32_dec_eq(v___x_4205_, v___x_4206_);
if (v___x_4207_ == 0)
{
lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4208_ = lean_string_utf8_next_fast(v_str_4199_, v___x_4204_);
lean_dec(v___x_4204_);
v___x_4209_ = lean_nat_sub(v___x_4208_, v_startInclusive_4200_);
v_a_4197_ = v___x_4209_;
v_b_4198_ = v___x_4207_;
goto _start;
}
else
{
lean_dec(v___x_4204_);
return v___x_4207_;
}
}
else
{
lean_dec(v_a_4197_);
return v_b_4198_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg___boxed(lean_object* v_s_4211_, lean_object* v_a_4212_, lean_object* v_b_4213_){
_start:
{
uint8_t v_b_boxed_4214_; uint8_t v_res_4215_; lean_object* v_r_4216_; 
v_b_boxed_4214_ = lean_unbox(v_b_4213_);
v_res_4215_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(v_s_4211_, v_a_4212_, v_b_boxed_4214_);
lean_dec_ref(v_s_4211_);
v_r_4216_ = lean_box(v_res_4215_);
return v_r_4216_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(lean_object* v_s_4217_){
_start:
{
lean_object* v_searcher_4218_; uint8_t v___x_4219_; uint8_t v___x_4220_; 
v_searcher_4218_ = lean_unsigned_to_nat(0u);
v___x_4219_ = 0;
v___x_4220_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(v_s_4217_, v_searcher_4218_, v___x_4219_);
return v___x_4220_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2___boxed(lean_object* v_s_4221_){
_start:
{
uint8_t v_res_4222_; lean_object* v_r_4223_; 
v_res_4222_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(v_s_4221_);
lean_dec_ref(v_s_4221_);
v_r_4223_ = lean_box(v_res_4222_);
return v_r_4223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0(lean_object* v___x_4235_, lean_object* v_fst_4236_, uint8_t v___x_4237_, lean_object* v_a_4238_, lean_object* v___x_4239_, lean_object* v___x_4240_, lean_object* v___x_4241_, lean_object* v___x_4242_, lean_object* v___x_4243_, lean_object* v___x_4244_, lean_object* v___x_4245_, lean_object* v___x_4246_, lean_object* v_snd_4247_, lean_object* v___x_4248_){
_start:
{
if (lean_obj_tag(v___x_4235_) == 1)
{
lean_object* v_val_4250_; lean_object* v___x_4252_; uint8_t v_isShared_4253_; uint8_t v_isSharedCheck_4311_; 
v_val_4250_ = lean_ctor_get(v___x_4235_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4235_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4252_ = v___x_4235_;
v_isShared_4253_ = v_isSharedCheck_4311_;
goto v_resetjp_4251_;
}
else
{
lean_inc(v_val_4250_);
lean_dec(v___x_4235_);
v___x_4252_ = lean_box(0);
v_isShared_4253_ = v_isSharedCheck_4311_;
goto v_resetjp_4251_;
}
v_resetjp_4251_:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4254_ = lean_unsigned_to_nat(0u);
v___x_4255_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__2));
v___x_4256_ = l_Lean_Syntax_setArg(v_fst_4236_, v___x_4254_, v___x_4255_);
v___x_4257_ = l_Lean_Syntax_getPos_x3f(v___x_4256_, v___x_4237_);
lean_dec(v___x_4256_);
if (lean_obj_tag(v___x_4257_) == 1)
{
lean_object* v_val_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4307_; 
lean_dec_ref(v___x_4248_);
v_val_4258_ = lean_ctor_get(v___x_4257_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4257_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4260_ = v___x_4257_;
v_isShared_4261_ = v_isSharedCheck_4307_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_val_4258_);
lean_dec(v___x_4257_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4307_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
lean_object* v___y_4263_; lean_object* v___x_4289_; lean_object* v___x_4295_; uint8_t v___x_4296_; 
v___x_4289_ = l_Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace(v_snd_4247_);
v___x_4295_ = lean_string_utf8_byte_size(v___x_4289_);
v___x_4296_ = lean_nat_dec_eq(v___x_4295_, v___x_4254_);
if (v___x_4296_ == 0)
{
lean_object* v___x_4297_; lean_object* v___x_4298_; uint8_t v___x_4299_; 
v___x_4297_ = lean_string_length(v___x_4289_);
v___x_4298_ = lean_unsigned_to_nat(93u);
v___x_4299_ = lean_nat_dec_le(v___x_4297_, v___x_4298_);
if (v___x_4299_ == 0)
{
goto v___jp_4290_;
}
else
{
lean_object* v___x_4300_; uint8_t v___x_4301_; 
lean_inc_ref(v___x_4289_);
v___x_4300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4289_);
lean_ctor_set(v___x_4300_, 1, v___x_4254_);
lean_ctor_set(v___x_4300_, 2, v___x_4295_);
v___x_4301_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2(v___x_4300_);
lean_dec_ref_known(v___x_4300_, 3);
if (v___x_4301_ == 0)
{
lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4302_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__5));
v___x_4303_ = lean_string_append(v___x_4302_, v___x_4289_);
lean_dec_ref(v___x_4289_);
v___x_4304_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__6));
v___x_4305_ = lean_string_append(v___x_4303_, v___x_4304_);
v___y_4263_ = v___x_4305_;
goto v___jp_4262_;
}
else
{
goto v___jp_4290_;
}
}
}
else
{
lean_object* v___x_4306_; 
lean_dec_ref(v___x_4289_);
v___x_4306_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_messageToString___closed__10));
v___y_4263_ = v___x_4306_;
goto v___jp_4262_;
}
v___jp_4262_:
{
lean_object* v_toEditableDocumentCore_4264_; lean_object* v_meta_4265_; lean_object* v___x_4267_; uint8_t v_isShared_4268_; uint8_t v_isSharedCheck_4285_; 
v_toEditableDocumentCore_4264_ = lean_ctor_get(v_a_4238_, 0);
lean_inc_ref(v_toEditableDocumentCore_4264_);
v_meta_4265_ = lean_ctor_get(v_toEditableDocumentCore_4264_, 0);
v_isSharedCheck_4285_ = !lean_is_exclusive(v_toEditableDocumentCore_4264_);
if (v_isSharedCheck_4285_ == 0)
{
lean_object* v_unused_4286_; lean_object* v_unused_4287_; lean_object* v_unused_4288_; 
v_unused_4286_ = lean_ctor_get(v_toEditableDocumentCore_4264_, 3);
lean_dec(v_unused_4286_);
v_unused_4287_ = lean_ctor_get(v_toEditableDocumentCore_4264_, 2);
lean_dec(v_unused_4287_);
v_unused_4288_ = lean_ctor_get(v_toEditableDocumentCore_4264_, 1);
lean_dec(v_unused_4288_);
v___x_4267_ = v_toEditableDocumentCore_4264_;
v_isShared_4268_ = v_isSharedCheck_4285_;
goto v_resetjp_4266_;
}
else
{
lean_inc(v_meta_4265_);
lean_dec(v_toEditableDocumentCore_4264_);
v___x_4267_ = lean_box(0);
v_isShared_4268_ = v_isSharedCheck_4285_;
goto v_resetjp_4266_;
}
v_resetjp_4266_:
{
lean_object* v_text_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4275_; 
v_text_4269_ = lean_ctor_get(v_meta_4265_, 3);
lean_inc_ref(v_text_4269_);
lean_dec_ref(v_meta_4265_);
v___x_4270_ = l_Lean_Server_FileWorker_EditableDocument_versionedIdentifier(v_a_4238_);
v___x_4271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4271_, 0, v_val_4250_);
lean_ctor_set(v___x_4271_, 1, v_val_4258_);
v___x_4272_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_4269_, v___x_4271_);
v___x_4273_ = lean_box(0);
lean_inc(v___x_4239_);
if (v_isShared_4268_ == 0)
{
lean_ctor_set(v___x_4267_, 3, v___x_4239_);
lean_ctor_set(v___x_4267_, 2, v___x_4273_);
lean_ctor_set(v___x_4267_, 1, v___y_4263_);
lean_ctor_set(v___x_4267_, 0, v___x_4272_);
v___x_4275_ = v___x_4267_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4284_; 
v_reuseFailAlloc_4284_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4284_, 0, v___x_4272_);
lean_ctor_set(v_reuseFailAlloc_4284_, 1, v___y_4263_);
lean_ctor_set(v_reuseFailAlloc_4284_, 2, v___x_4273_);
lean_ctor_set(v_reuseFailAlloc_4284_, 3, v___x_4239_);
v___x_4275_ = v_reuseFailAlloc_4284_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
lean_object* v___x_4276_; lean_object* v___x_4278_; 
v___x_4276_ = l_Lean_Lsp_WorkspaceEdit_ofTextEdit(v___x_4270_, v___x_4275_);
if (v_isShared_4261_ == 0)
{
lean_ctor_set(v___x_4260_, 0, v___x_4276_);
v___x_4278_ = v___x_4260_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v___x_4276_);
v___x_4278_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
lean_object* v___x_4279_; lean_object* v___x_4281_; 
lean_inc(v___x_4239_);
v___x_4279_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4239_);
lean_ctor_set(v___x_4279_, 1, v___x_4239_);
lean_ctor_set(v___x_4279_, 2, v___x_4240_);
lean_ctor_set(v___x_4279_, 3, v___x_4241_);
lean_ctor_set(v___x_4279_, 4, v___x_4242_);
lean_ctor_set(v___x_4279_, 5, v___x_4243_);
lean_ctor_set(v___x_4279_, 6, v___x_4244_);
lean_ctor_set(v___x_4279_, 7, v___x_4278_);
lean_ctor_set(v___x_4279_, 8, v___x_4245_);
lean_ctor_set(v___x_4279_, 9, v___x_4246_);
if (v_isShared_4253_ == 0)
{
lean_ctor_set_tag(v___x_4252_, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4279_);
v___x_4281_ = v___x_4252_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v___x_4279_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
}
}
}
v___jp_4290_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v___x_4291_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__3));
v___x_4292_ = lean_string_append(v___x_4291_, v___x_4289_);
lean_dec_ref(v___x_4289_);
v___x_4293_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___closed__4));
v___x_4294_ = lean_string_append(v___x_4292_, v___x_4293_);
v___y_4263_ = v___x_4294_;
goto v___jp_4262_;
}
}
}
else
{
lean_object* v___x_4309_; 
lean_dec(v___x_4257_);
lean_dec(v_val_4250_);
lean_dec_ref(v_snd_4247_);
lean_dec(v___x_4246_);
lean_dec(v___x_4245_);
lean_dec(v___x_4244_);
lean_dec(v___x_4243_);
lean_dec(v___x_4242_);
lean_dec(v___x_4241_);
lean_dec_ref(v___x_4240_);
lean_dec(v___x_4239_);
lean_dec_ref(v_a_4238_);
if (v_isShared_4253_ == 0)
{
lean_ctor_set_tag(v___x_4252_, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4248_);
v___x_4309_ = v___x_4252_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v___x_4248_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
else
{
lean_object* v___x_4312_; 
lean_dec_ref(v_snd_4247_);
lean_dec(v___x_4246_);
lean_dec(v___x_4245_);
lean_dec(v___x_4244_);
lean_dec(v___x_4243_);
lean_dec(v___x_4242_);
lean_dec(v___x_4241_);
lean_dec_ref(v___x_4240_);
lean_dec(v___x_4239_);
lean_dec_ref(v_a_4238_);
lean_dec(v_fst_4236_);
lean_dec(v___x_4235_);
v___x_4312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4248_);
return v___x_4312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___boxed(lean_object* v___x_4313_, lean_object* v_fst_4314_, lean_object* v___x_4315_, lean_object* v_a_4316_, lean_object* v___x_4317_, lean_object* v___x_4318_, lean_object* v___x_4319_, lean_object* v___x_4320_, lean_object* v___x_4321_, lean_object* v___x_4322_, lean_object* v___x_4323_, lean_object* v___x_4324_, lean_object* v_snd_4325_, lean_object* v___x_4326_, lean_object* v___y_4327_){
_start:
{
uint8_t v___x_4489__boxed_4328_; lean_object* v_res_4329_; 
v___x_4489__boxed_4328_ = lean_unbox(v___x_4315_);
v_res_4329_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0(v___x_4313_, v_fst_4314_, v___x_4489__boxed_4328_, v_a_4316_, v___x_4317_, v___x_4318_, v___x_4319_, v___x_4320_, v___x_4321_, v___x_4322_, v___x_4323_, v___x_4324_, v_snd_4325_, v___x_4326_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(lean_object* v_as_4333_, size_t v_sz_4334_, size_t v_i_4335_, lean_object* v_b_4336_){
_start:
{
lean_object* v_a_4338_; uint8_t v___x_4342_; 
v___x_4342_ = lean_usize_dec_lt(v_i_4335_, v_sz_4334_);
if (v___x_4342_ == 0)
{
lean_inc_ref(v_b_4336_);
return v_b_4336_;
}
else
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v_a_4345_; 
v___x_4343_ = lean_box(0);
v___x_4344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_a_4345_ = lean_array_uget(v_as_4333_, v_i_4335_);
if (lean_obj_tag(v_a_4345_) == 1)
{
lean_object* v_i_4346_; lean_object* v___x_4348_; uint8_t v_isShared_4349_; uint8_t v_isSharedCheck_4380_; 
v_i_4346_ = lean_ctor_get(v_a_4345_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v_a_4345_);
if (v_isSharedCheck_4380_ == 0)
{
lean_object* v_unused_4381_; 
v_unused_4381_ = lean_ctor_get(v_a_4345_, 1);
lean_dec(v_unused_4381_);
v___x_4348_ = v_a_4345_;
v_isShared_4349_ = v_isSharedCheck_4380_;
goto v_resetjp_4347_;
}
else
{
lean_inc(v_i_4346_);
lean_dec(v_a_4345_);
v___x_4348_ = lean_box(0);
v_isShared_4349_ = v_isSharedCheck_4380_;
goto v_resetjp_4347_;
}
v_resetjp_4347_:
{
if (lean_obj_tag(v_i_4346_) == 10)
{
lean_object* v_i_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4379_; 
v_i_4350_ = lean_ctor_get(v_i_4346_, 0);
v_isSharedCheck_4379_ = !lean_is_exclusive(v_i_4346_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4352_ = v_i_4346_;
v_isShared_4353_ = v_isSharedCheck_4379_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_i_4350_);
lean_dec(v_i_4346_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4379_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v_stx_4354_; lean_object* v_value_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4378_; 
v_stx_4354_ = lean_ctor_get(v_i_4350_, 0);
v_value_4355_ = lean_ctor_get(v_i_4350_, 1);
v_isSharedCheck_4378_ = !lean_is_exclusive(v_i_4350_);
if (v_isSharedCheck_4378_ == 0)
{
v___x_4357_ = v_i_4350_;
v_isShared_4358_ = v_isSharedCheck_4378_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_value_4355_);
lean_inc(v_stx_4354_);
lean_dec(v_i_4350_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4378_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4359_ = l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_;
v___x_4360_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_4355_, v___x_4359_);
lean_dec(v_value_4355_);
if (lean_obj_tag(v___x_4360_) == 0)
{
lean_del_object(v___x_4357_);
lean_dec(v_stx_4354_);
lean_del_object(v___x_4352_);
lean_del_object(v___x_4348_);
v_a_4338_ = v___x_4344_;
goto v___jp_4337_;
}
else
{
lean_object* v_val_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4377_; 
v_val_4361_ = lean_ctor_get(v___x_4360_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4360_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4363_ = v___x_4360_;
v_isShared_4364_ = v_isSharedCheck_4377_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_val_4361_);
lean_dec(v___x_4360_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4377_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4358_ == 0)
{
lean_ctor_set(v___x_4357_, 1, v_val_4361_);
v___x_4366_ = v___x_4357_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_stx_4354_);
lean_ctor_set(v_reuseFailAlloc_4376_, 1, v_val_4361_);
v___x_4366_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
lean_object* v___x_4368_; 
if (v_isShared_4364_ == 0)
{
lean_ctor_set(v___x_4363_, 0, v___x_4366_);
v___x_4368_ = v___x_4363_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___x_4366_);
v___x_4368_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
lean_object* v___x_4370_; 
if (v_isShared_4353_ == 0)
{
lean_ctor_set_tag(v___x_4352_, 1);
lean_ctor_set(v___x_4352_, 0, v___x_4368_);
v___x_4370_ = v___x_4352_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v___x_4368_);
v___x_4370_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
lean_object* v___x_4372_; 
if (v_isShared_4349_ == 0)
{
lean_ctor_set_tag(v___x_4348_, 0);
lean_ctor_set(v___x_4348_, 1, v___x_4343_);
lean_ctor_set(v___x_4348_, 0, v___x_4370_);
v___x_4372_ = v___x_4348_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v___x_4370_);
lean_ctor_set(v_reuseFailAlloc_4373_, 1, v___x_4343_);
v___x_4372_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
return v___x_4372_;
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
lean_del_object(v___x_4348_);
lean_dec_ref(v_i_4346_);
v_a_4338_ = v___x_4344_;
goto v___jp_4337_;
}
}
}
else
{
lean_dec(v_a_4345_);
v_a_4338_ = v___x_4344_;
goto v___jp_4337_;
}
}
v___jp_4337_:
{
size_t v___x_4339_; size_t v___x_4340_; 
v___x_4339_ = ((size_t)1ULL);
v___x_4340_ = lean_usize_add(v_i_4335_, v___x_4339_);
v_i_4335_ = v___x_4340_;
v_b_4336_ = v_a_4338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___boxed(lean_object* v_as_4382_, lean_object* v_sz_4383_, lean_object* v_i_4384_, lean_object* v_b_4385_){
_start:
{
size_t v_sz_boxed_4386_; size_t v_i_boxed_4387_; lean_object* v_res_4388_; 
v_sz_boxed_4386_ = lean_unbox_usize(v_sz_4383_);
lean_dec(v_sz_4383_);
v_i_boxed_4387_ = lean_unbox_usize(v_i_4384_);
lean_dec(v_i_4384_);
v_res_4388_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(v_as_4382_, v_sz_boxed_4386_, v_i_boxed_4387_, v_b_4385_);
lean_dec_ref(v_b_4385_);
lean_dec_ref(v_as_4382_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(lean_object* v_as_4389_, size_t v_sz_4390_, size_t v_i_4391_, lean_object* v_b_4392_){
_start:
{
lean_object* v_a_4394_; uint8_t v___x_4398_; 
v___x_4398_ = lean_usize_dec_lt(v_i_4391_, v_sz_4390_);
if (v___x_4398_ == 0)
{
lean_inc_ref(v_b_4392_);
return v_b_4392_;
}
else
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v_a_4401_; 
v___x_4399_ = lean_box(0);
v___x_4400_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_a_4401_ = lean_array_uget(v_as_4389_, v_i_4391_);
if (lean_obj_tag(v_a_4401_) == 1)
{
lean_object* v_i_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4436_; 
v_i_4402_ = lean_ctor_get(v_a_4401_, 0);
v_isSharedCheck_4436_ = !lean_is_exclusive(v_a_4401_);
if (v_isSharedCheck_4436_ == 0)
{
lean_object* v_unused_4437_; 
v_unused_4437_ = lean_ctor_get(v_a_4401_, 1);
lean_dec(v_unused_4437_);
v___x_4404_ = v_a_4401_;
v_isShared_4405_ = v_isSharedCheck_4436_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_i_4402_);
lean_dec(v_a_4401_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4436_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
if (lean_obj_tag(v_i_4402_) == 10)
{
lean_object* v_i_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4435_; 
v_i_4406_ = lean_ctor_get(v_i_4402_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v_i_4402_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4408_ = v_i_4402_;
v_isShared_4409_ = v_isSharedCheck_4435_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_i_4406_);
lean_dec(v_i_4402_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4435_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v_stx_4410_; lean_object* v_value_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4434_; 
v_stx_4410_ = lean_ctor_get(v_i_4406_, 0);
v_value_4411_ = lean_ctor_get(v_i_4406_, 1);
v_isSharedCheck_4434_ = !lean_is_exclusive(v_i_4406_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4413_ = v_i_4406_;
v_isShared_4414_ = v_isSharedCheck_4434_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_value_4411_);
lean_inc(v_stx_4410_);
lean_dec(v_i_4406_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4434_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4415_ = l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_;
v___x_4416_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_4411_, v___x_4415_);
lean_dec(v_value_4411_);
if (lean_obj_tag(v___x_4416_) == 0)
{
lean_del_object(v___x_4413_);
lean_dec(v_stx_4410_);
lean_del_object(v___x_4408_);
lean_del_object(v___x_4404_);
v_a_4394_ = v___x_4400_;
goto v___jp_4393_;
}
else
{
lean_object* v_val_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4433_; 
v_val_4417_ = lean_ctor_get(v___x_4416_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4416_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4419_ = v___x_4416_;
v_isShared_4420_ = v_isSharedCheck_4433_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_val_4417_);
lean_dec(v___x_4416_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4433_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4414_ == 0)
{
lean_ctor_set(v___x_4413_, 1, v_val_4417_);
v___x_4422_ = v___x_4413_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_stx_4410_);
lean_ctor_set(v_reuseFailAlloc_4432_, 1, v_val_4417_);
v___x_4422_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
lean_object* v___x_4424_; 
if (v_isShared_4420_ == 0)
{
lean_ctor_set(v___x_4419_, 0, v___x_4422_);
v___x_4424_ = v___x_4419_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v___x_4422_);
v___x_4424_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
lean_object* v___x_4426_; 
if (v_isShared_4409_ == 0)
{
lean_ctor_set_tag(v___x_4408_, 1);
lean_ctor_set(v___x_4408_, 0, v___x_4424_);
v___x_4426_ = v___x_4408_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v___x_4424_);
v___x_4426_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
lean_object* v___x_4428_; 
if (v_isShared_4405_ == 0)
{
lean_ctor_set_tag(v___x_4404_, 0);
lean_ctor_set(v___x_4404_, 1, v___x_4399_);
lean_ctor_set(v___x_4404_, 0, v___x_4426_);
v___x_4428_ = v___x_4404_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v___x_4426_);
lean_ctor_set(v_reuseFailAlloc_4429_, 1, v___x_4399_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
return v___x_4428_;
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
lean_del_object(v___x_4404_);
lean_dec_ref(v_i_4402_);
v_a_4394_ = v___x_4400_;
goto v___jp_4393_;
}
}
}
else
{
lean_dec(v_a_4401_);
v_a_4394_ = v___x_4400_;
goto v___jp_4393_;
}
}
v___jp_4393_:
{
size_t v___x_4395_; size_t v___x_4396_; lean_object* v___x_4397_; 
v___x_4395_ = ((size_t)1ULL);
v___x_4396_ = lean_usize_add(v_i_4391_, v___x_4395_);
v___x_4397_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4(v_as_4389_, v_sz_4390_, v___x_4396_, v_a_4394_);
return v___x_4397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1___boxed(lean_object* v_as_4438_, lean_object* v_sz_4439_, lean_object* v_i_4440_, lean_object* v_b_4441_){
_start:
{
size_t v_sz_boxed_4442_; size_t v_i_boxed_4443_; lean_object* v_res_4444_; 
v_sz_boxed_4442_ = lean_unbox_usize(v_sz_4439_);
lean_dec(v_sz_4439_);
v_i_boxed_4443_ = lean_unbox_usize(v_i_4440_);
lean_dec(v_i_4440_);
v_res_4444_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(v_as_4438_, v_sz_boxed_4442_, v_i_boxed_4443_, v_b_4441_);
lean_dec_ref(v_b_4441_);
lean_dec_ref(v_as_4438_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(lean_object* v_x_4445_){
_start:
{
if (lean_obj_tag(v_x_4445_) == 0)
{
lean_object* v_cs_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; size_t v_sz_4449_; size_t v___x_4450_; lean_object* v___x_4451_; lean_object* v_fst_4452_; 
v_cs_4446_ = lean_ctor_get(v_x_4445_, 0);
v___x_4447_ = lean_box(0);
v___x_4448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_sz_4449_ = lean_array_size(v_cs_4446_);
v___x_4450_ = ((size_t)0ULL);
v___x_4451_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(v_cs_4446_, v_sz_4449_, v___x_4450_, v___x_4448_);
v_fst_4452_ = lean_ctor_get(v___x_4451_, 0);
lean_inc(v_fst_4452_);
lean_dec_ref(v___x_4451_);
if (lean_obj_tag(v_fst_4452_) == 0)
{
return v___x_4447_;
}
else
{
lean_object* v_val_4453_; 
v_val_4453_ = lean_ctor_get(v_fst_4452_, 0);
lean_inc(v_val_4453_);
lean_dec_ref_known(v_fst_4452_, 1);
return v_val_4453_;
}
}
else
{
lean_object* v_vs_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; size_t v_sz_4457_; size_t v___x_4458_; lean_object* v___x_4459_; lean_object* v_fst_4460_; 
v_vs_4454_ = lean_ctor_get(v_x_4445_, 0);
v___x_4455_ = lean_box(0);
v___x_4456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_sz_4457_ = lean_array_size(v_vs_4454_);
v___x_4458_ = ((size_t)0ULL);
v___x_4459_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(v_vs_4454_, v_sz_4457_, v___x_4458_, v___x_4456_);
v_fst_4460_ = lean_ctor_get(v___x_4459_, 0);
lean_inc(v_fst_4460_);
lean_dec_ref(v___x_4459_);
if (lean_obj_tag(v_fst_4460_) == 0)
{
return v___x_4455_;
}
else
{
lean_object* v_val_4461_; 
v_val_4461_ = lean_ctor_get(v_fst_4460_, 0);
lean_inc(v_val_4461_);
lean_dec_ref_known(v_fst_4460_, 1);
return v_val_4461_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(lean_object* v_as_4462_, size_t v_sz_4463_, size_t v_i_4464_, lean_object* v_b_4465_){
_start:
{
uint8_t v___x_4466_; 
v___x_4466_ = lean_usize_dec_lt(v_i_4464_, v_sz_4463_);
if (v___x_4466_ == 0)
{
lean_inc_ref(v_b_4465_);
return v_b_4465_;
}
else
{
lean_object* v___x_4467_; lean_object* v_a_4468_; lean_object* v___x_4469_; 
v___x_4467_ = lean_box(0);
v_a_4468_ = lean_array_uget_borrowed(v_as_4462_, v_i_4464_);
v___x_4469_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(v_a_4468_);
if (lean_obj_tag(v___x_4469_) == 1)
{
lean_object* v___x_4470_; lean_object* v___x_4471_; 
v___x_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4469_);
v___x_4471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4470_);
lean_ctor_set(v___x_4471_, 1, v___x_4467_);
return v___x_4471_;
}
else
{
lean_object* v___x_4472_; size_t v___x_4473_; size_t v___x_4474_; 
lean_dec(v___x_4469_);
v___x_4472_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v___x_4473_ = ((size_t)1ULL);
v___x_4474_ = lean_usize_add(v_i_4464_, v___x_4473_);
v_i_4464_ = v___x_4474_;
v_b_4465_ = v___x_4472_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2___boxed(lean_object* v_as_4476_, lean_object* v_sz_4477_, lean_object* v_i_4478_, lean_object* v_b_4479_){
_start:
{
size_t v_sz_boxed_4480_; size_t v_i_boxed_4481_; lean_object* v_res_4482_; 
v_sz_boxed_4480_ = lean_unbox_usize(v_sz_4477_);
lean_dec(v_sz_4477_);
v_i_boxed_4481_ = lean_unbox_usize(v_i_4478_);
lean_dec(v_i_4478_);
v_res_4482_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0_spec__2(v_as_4476_, v_sz_boxed_4480_, v_i_boxed_4481_, v_b_4479_);
lean_dec_ref(v_b_4479_);
lean_dec_ref(v_as_4476_);
return v_res_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0___boxed(lean_object* v_x_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(v_x_4483_);
lean_dec_ref(v_x_4483_);
return v_res_4484_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(lean_object* v_t_4485_){
_start:
{
lean_object* v_root_4486_; lean_object* v_tail_4487_; lean_object* v___x_4488_; 
v_root_4486_ = lean_ctor_get(v_t_4485_, 0);
v_tail_4487_ = lean_ctor_get(v_t_4485_, 1);
v___x_4488_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__0(v_root_4486_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v___x_4489_; size_t v_sz_4490_; size_t v___x_4491_; lean_object* v___x_4492_; lean_object* v_fst_4493_; 
v___x_4489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1_spec__4___closed__0));
v_sz_4490_ = lean_array_size(v_tail_4487_);
v___x_4491_ = ((size_t)0ULL);
v___x_4492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0_spec__1(v_tail_4487_, v_sz_4490_, v___x_4491_, v___x_4489_);
v_fst_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc(v_fst_4493_);
lean_dec_ref(v___x_4492_);
if (lean_obj_tag(v_fst_4493_) == 0)
{
return v___x_4488_;
}
else
{
lean_object* v_val_4494_; 
v_val_4494_ = lean_ctor_get(v_fst_4493_, 0);
lean_inc(v_val_4494_);
lean_dec_ref_known(v_fst_4493_, 1);
return v_val_4494_;
}
}
else
{
return v___x_4488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0___boxed(lean_object* v_t_4495_){
_start:
{
lean_object* v_res_4496_; 
v_res_4496_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(v_t_4495_);
lean_dec_ref(v_t_4495_);
return v_res_4496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(lean_object* v_node_4511_, lean_object* v_a_4512_){
_start:
{
if (lean_obj_tag(v_node_4511_) == 1)
{
lean_object* v_children_4514_; lean_object* v_res_4515_; 
v_children_4514_ = lean_ctor_get(v_node_4511_, 1);
v_res_4515_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__0(v_children_4514_);
if (lean_obj_tag(v_res_4515_) == 1)
{
lean_object* v_val_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4553_; 
v_val_4516_ = lean_ctor_get(v_res_4515_, 0);
v_isSharedCheck_4553_ = !lean_is_exclusive(v_res_4515_);
if (v_isSharedCheck_4553_ == 0)
{
v___x_4518_ = v_res_4515_;
v_isShared_4519_ = v_isSharedCheck_4553_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_val_4516_);
lean_dec(v_res_4515_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4553_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v_fst_4520_; lean_object* v_snd_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4552_; 
v_fst_4520_ = lean_ctor_get(v_val_4516_, 0);
v_snd_4521_ = lean_ctor_get(v_val_4516_, 1);
v_isSharedCheck_4552_ = !lean_is_exclusive(v_val_4516_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4523_ = v_val_4516_;
v_isShared_4524_ = v_isSharedCheck_4552_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_snd_4521_);
lean_inc(v_fst_4520_);
lean_dec(v_val_4516_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4552_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
lean_object* v___x_4525_; lean_object* v_a_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4551_; 
v___x_4525_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__1(v_a_4512_);
v_a_4526_ = lean_ctor_get(v___x_4525_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4525_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4528_ = v___x_4525_;
v_isShared_4529_ = v_isSharedCheck_4551_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_a_4526_);
lean_dec(v___x_4525_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4551_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; uint8_t v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___y_4538_; lean_object* v___x_4540_; 
v___x_4530_ = lean_box(0);
v___x_4531_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__0));
v___x_4532_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__2));
v___x_4533_ = 1;
v___x_4534_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__3));
v___x_4535_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__4));
v___x_4536_ = l_Lean_Syntax_getPos_x3f(v_fst_4520_, v___x_4533_);
v___x_4537_ = lean_box(v___x_4533_);
v___y_4538_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___lam__0___boxed), 15, 14);
lean_closure_set(v___y_4538_, 0, v___x_4536_);
lean_closure_set(v___y_4538_, 1, v_fst_4520_);
lean_closure_set(v___y_4538_, 2, v___x_4537_);
lean_closure_set(v___y_4538_, 3, v_a_4526_);
lean_closure_set(v___y_4538_, 4, v___x_4530_);
lean_closure_set(v___y_4538_, 5, v___x_4531_);
lean_closure_set(v___y_4538_, 6, v___x_4532_);
lean_closure_set(v___y_4538_, 7, v___x_4530_);
lean_closure_set(v___y_4538_, 8, v___x_4534_);
lean_closure_set(v___y_4538_, 9, v___x_4530_);
lean_closure_set(v___y_4538_, 10, v___x_4530_);
lean_closure_set(v___y_4538_, 11, v___x_4530_);
lean_closure_set(v___y_4538_, 12, v_snd_4521_);
lean_closure_set(v___y_4538_, 13, v___x_4535_);
if (v_isShared_4519_ == 0)
{
lean_ctor_set(v___x_4518_, 0, v___y_4538_);
v___x_4540_ = v___x_4518_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v___y_4538_);
v___x_4540_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
lean_object* v___x_4542_; 
if (v_isShared_4524_ == 0)
{
lean_ctor_set(v___x_4523_, 1, v___x_4540_);
lean_ctor_set(v___x_4523_, 0, v___x_4535_);
v___x_4542_ = v___x_4523_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v___x_4535_);
lean_ctor_set(v_reuseFailAlloc_4549_, 1, v___x_4540_);
v___x_4542_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4547_; 
v___x_4543_ = lean_unsigned_to_nat(1u);
v___x_4544_ = lean_mk_empty_array_with_capacity(v___x_4543_);
v___x_4545_ = lean_array_push(v___x_4544_, v___x_4542_);
if (v_isShared_4529_ == 0)
{
lean_ctor_set(v___x_4528_, 0, v___x_4545_);
v___x_4547_ = v___x_4528_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v___x_4545_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4554_; lean_object* v___x_4555_; 
lean_dec(v_res_4515_);
v___x_4554_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5));
v___x_4555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4555_, 0, v___x_4554_);
return v___x_4555_;
}
}
else
{
lean_object* v___x_4556_; lean_object* v___x_4557_; 
v___x_4556_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___closed__5));
v___x_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4556_);
return v___x_4557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg___boxed(lean_object* v_node_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_){
_start:
{
lean_object* v_res_4561_; 
v_res_4561_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(v_node_4558_, v_a_4559_);
lean_dec_ref(v_a_4559_);
lean_dec_ref(v_node_4558_);
return v_res_4561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction(lean_object* v_x_4562_, lean_object* v_x_4563_, lean_object* v_x_4564_, lean_object* v_node_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v___x_4568_; 
v___x_4568_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___redArg(v_node_4565_, v_a_4566_);
return v___x_4568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___boxed(lean_object* v_x_4569_, lean_object* v_x_4570_, lean_object* v_x_4571_, lean_object* v_node_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_){
_start:
{
lean_object* v_res_4575_; 
v_res_4575_ = l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction(v_x_4569_, v_x_4570_, v_x_4571_, v_node_4572_, v_a_4573_);
lean_dec_ref(v_a_4573_);
lean_dec_ref(v_node_4572_);
lean_dec_ref(v_x_4571_);
lean_dec_ref(v_x_4570_);
lean_dec_ref(v_x_4569_);
return v_res_4575_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4(lean_object* v_s_4576_, lean_object* v_inst_4577_, lean_object* v_R_4578_, lean_object* v_a_4579_, uint8_t v_b_4580_, lean_object* v_c_4581_){
_start:
{
uint8_t v___x_4582_; 
v___x_4582_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___redArg(v_s_4576_, v_a_4579_, v_b_4580_);
return v___x_4582_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4___boxed(lean_object* v_s_4583_, lean_object* v_inst_4584_, lean_object* v_R_4585_, lean_object* v_a_4586_, lean_object* v_b_4587_, lean_object* v_c_4588_){
_start:
{
uint8_t v_b_boxed_4589_; uint8_t v_res_4590_; lean_object* v_r_4591_; 
v_b_boxed_4589_ = lean_unbox(v_b_4587_);
v_res_4590_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_spec__2_spec__4(v_s_4583_, v_inst_4584_, v_R_4585_, v_a_4586_, v_b_boxed_4589_, v_c_4588_);
lean_dec_ref(v_s_4583_);
v_r_4591_ = lean_box(v_res_4590_);
return v_r_4591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355_(){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4597_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1___closed__0_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355_));
v___x_4598_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___boxed), 6, 0);
v___x_4599_ = l_Lean_CodeAction_insertBuiltin(v___x_4597_, v___x_4598_);
return v___x_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355____boxed(lean_object* v_a_4600_){
_start:
{
lean_object* v_res_4601_; 
v_res_4601_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355_();
return v_res_4601_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4603_; lean_object* v___x_4604_; 
v___x_4603_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0));
v___x_4604_ = lean_string_utf8_byte_size(v___x_4603_);
return v___x_4604_;
}
}
static uint8_t _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; uint8_t v___x_4607_; 
v___x_4605_ = lean_unsigned_to_nat(0u);
v___x_4606_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1);
v___x_4607_ = lean_nat_dec_eq(v___x_4606_, v___x_4605_);
return v___x_4607_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4608_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__1);
v___x_4609_ = lean_unsigned_to_nat(0u);
v___x_4610_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__0));
v___x_4611_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
lean_ctor_set(v___x_4611_, 1, v___x_4609_);
lean_ctor_set(v___x_4611_, 2, v___x_4608_);
return v___x_4611_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__4(void){
_start:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; 
v___x_4612_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3);
v___x_4613_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_4612_);
return v___x_4613_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__5(void){
_start:
{
lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4614_ = lean_unsigned_to_nat(0u);
v___x_4615_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__4, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__4_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__4);
v___x_4616_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__3);
v___x_4617_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_4617_, 0, v___x_4616_);
lean_ctor_set(v___x_4617_, 1, v___x_4615_);
lean_ctor_set(v___x_4617_, 2, v___x_4614_);
lean_ctor_set(v___x_4617_, 3, v___x_4614_);
return v___x_4617_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(lean_object* v_s_4618_){
_start:
{
lean_object* v___y_4620_; uint8_t v___x_4623_; 
v___x_4623_ = lean_uint8_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__2);
if (v___x_4623_ == 0)
{
lean_object* v___x_4624_; 
v___x_4624_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__5, &l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__5_once, _init_l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___closed__5);
v___y_4620_ = v___x_4624_;
goto v___jp_4619_;
}
else
{
lean_object* v___x_4625_; 
v___x_4625_ = ((lean_object*)(l_String_Slice_replace___at___00Lean_Elab_Tactic_GuardMsgs_revealTrailingWhitespace_spec__1___redArg___closed__6));
v___y_4620_ = v___x_4625_;
goto v___jp_4619_;
}
v___jp_4619_:
{
uint8_t v___x_4621_; uint8_t v___x_4622_; 
v___x_4621_ = 0;
lean_inc(v___y_4620_);
v___x_4622_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__9_spec__21___redArg(v_s_4618_, v___y_4620_, v___x_4621_);
return v___x_4622_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0___boxed(lean_object* v_s_4626_){
_start:
{
uint8_t v_res_4627_; lean_object* v_r_4628_; 
v_res_4627_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(v_s_4626_);
lean_dec_ref(v_s_4626_);
v_r_4628_ = lean_box(v_res_4627_);
return v_r_4628_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(uint8_t v_foundPanic_4629_, lean_object* v_as_x27_4630_, uint8_t v_b_4631_){
_start:
{
if (lean_obj_tag(v_as_x27_4630_) == 0)
{
lean_object* v___x_4633_; lean_object* v___x_4634_; 
v___x_4633_ = lean_box(v_b_4631_);
v___x_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4633_);
return v___x_4634_;
}
else
{
lean_object* v_head_4635_; uint8_t v_isSilent_4636_; 
v_head_4635_ = lean_ctor_get(v_as_x27_4630_, 0);
v_isSilent_4636_ = lean_ctor_get_uint8(v_head_4635_, sizeof(void*)*5 + 2);
if (v_isSilent_4636_ == 0)
{
lean_object* v_tail_4637_; lean_object* v_data_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; uint8_t v___x_4643_; 
v_tail_4637_ = lean_ctor_get(v_as_x27_4630_, 1);
v_data_4638_ = lean_ctor_get(v_head_4635_, 4);
lean_inc(v_data_4638_);
v___x_4639_ = l_Lean_MessageData_toString(v_data_4638_);
v___x_4640_ = lean_unsigned_to_nat(0u);
v___x_4641_ = lean_string_utf8_byte_size(v___x_4639_);
v___x_4642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4639_);
lean_ctor_set(v___x_4642_, 1, v___x_4640_);
lean_ctor_set(v___x_4642_, 2, v___x_4641_);
v___x_4643_ = l_String_Slice_contains___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__0(v___x_4642_);
lean_dec_ref_known(v___x_4642_, 3);
if (v___x_4643_ == 0)
{
v_as_x27_4630_ = v_tail_4637_;
goto _start;
}
else
{
lean_object* v___x_4645_; lean_object* v___x_4646_; 
v___x_4645_ = lean_box(v_foundPanic_4629_);
v___x_4646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4646_, 0, v___x_4645_);
return v___x_4646_;
}
}
else
{
lean_object* v_tail_4647_; 
v_tail_4647_ = lean_ctor_get(v_as_x27_4630_, 1);
v_as_x27_4630_ = v_tail_4647_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg___boxed(lean_object* v_foundPanic_4649_, lean_object* v_as_x27_4650_, lean_object* v_b_4651_, lean_object* v___y_4652_){
_start:
{
uint8_t v_foundPanic_boxed_4653_; uint8_t v_b_boxed_4654_; lean_object* v_res_4655_; 
v_foundPanic_boxed_4653_ = lean_unbox(v_foundPanic_4649_);
v_b_boxed_4654_ = lean_unbox(v_b_4651_);
v_res_4655_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(v_foundPanic_boxed_4653_, v_as_x27_4650_, v_b_boxed_4654_);
lean_dec(v_as_x27_4650_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(lean_object* v_msgData_4656_, uint8_t v_severity_4657_, uint8_t v_isSilent_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_){
_start:
{
lean_object* v___x_4662_; 
v___x_4662_ = l_Lean_Elab_Command_getRef___redArg(v___y_4659_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4664_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref_known(v___x_4662_, 1);
v___x_4664_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_spec__2_spec__2(v_a_4663_, v_msgData_4656_, v_severity_4657_, v_isSilent_4658_, v___y_4659_, v___y_4660_);
lean_dec(v_a_4663_);
return v___x_4664_;
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
lean_dec_ref(v_msgData_4656_);
v_a_4665_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4662_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4662_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2___boxed(lean_object* v_msgData_4673_, lean_object* v_severity_4674_, lean_object* v_isSilent_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_){
_start:
{
uint8_t v_severity_boxed_4679_; uint8_t v_isSilent_boxed_4680_; lean_object* v_res_4681_; 
v_severity_boxed_4679_ = lean_unbox(v_severity_4674_);
v_isSilent_boxed_4680_ = lean_unbox(v_isSilent_4675_);
v_res_4681_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(v_msgData_4673_, v_severity_boxed_4679_, v_isSilent_boxed_4680_, v___y_4676_, v___y_4677_);
lean_dec(v___y_4677_);
lean_dec_ref(v___y_4676_);
return v_res_4681_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(lean_object* v_msgData_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_){
_start:
{
uint8_t v___x_4686_; uint8_t v___x_4687_; lean_object* v___x_4688_; 
v___x_4686_ = 2;
v___x_4687_ = 0;
v___x_4688_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2_spec__2(v_msgData_4682_, v___x_4686_, v___x_4687_, v___y_4683_, v___y_4684_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2___boxed(lean_object* v_msgData_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v_res_4693_; 
v_res_4693_ = l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(v_msgData_4689_, v___y_4690_, v___y_4691_);
lean_dec(v___y_4691_);
lean_dec_ref(v___y_4690_);
return v_res_4693_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4(void){
_start:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4701_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__3));
v___x_4702_ = l_Lean_MessageData_ofFormat(v___x_4701_);
return v___x_4702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic(lean_object* v_x_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_){
_start:
{
lean_object* v___x_4707_; uint8_t v_foundPanic_4708_; 
v___x_4707_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1));
lean_inc(v_x_4703_);
v_foundPanic_4708_ = l_Lean_Syntax_isOfKind(v_x_4703_, v___x_4707_);
if (v_foundPanic_4708_ == 0)
{
lean_object* v___x_4709_; 
lean_dec(v_x_4703_);
v___x_4709_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_GuardMsgs_parseGuardMsgsFilterAction_spec__0___redArg();
return v___x_4709_;
}
else
{
lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; 
v___x_4710_ = lean_unsigned_to_nat(2u);
v___x_4711_ = l_Lean_Syntax_getArg(v_x_4703_, v___x_4710_);
lean_dec(v_x_4703_);
v___x_4712_ = l_Lean_Elab_Tactic_GuardMsgs_runAndCollectMessages(v___x_4711_, v_a_4704_, v_a_4705_);
if (lean_obj_tag(v___x_4712_) == 0)
{
lean_object* v_a_4713_; uint8_t v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v_a_4717_; lean_object* v___x_4719_; uint8_t v_isShared_4720_; uint8_t v_isSharedCheck_4773_; 
v_a_4713_ = lean_ctor_get(v___x_4712_, 0);
lean_inc(v_a_4713_);
lean_dec_ref_known(v___x_4712_, 1);
v___x_4714_ = 0;
v___x_4715_ = l_Lean_MessageLog_toList(v_a_4713_);
v___x_4716_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(v_foundPanic_4708_, v___x_4715_, v___x_4714_);
lean_dec(v___x_4715_);
v_a_4717_ = lean_ctor_get(v___x_4716_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v___x_4716_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4719_ = v___x_4716_;
v_isShared_4720_ = v_isSharedCheck_4773_;
goto v_resetjp_4718_;
}
else
{
lean_inc(v_a_4717_);
lean_dec(v___x_4716_);
v___x_4719_ = lean_box(0);
v_isShared_4720_ = v_isSharedCheck_4773_;
goto v_resetjp_4718_;
}
v_resetjp_4718_:
{
uint8_t v___x_4721_; 
v___x_4721_ = lean_unbox(v_a_4717_);
lean_dec(v_a_4717_);
if (v___x_4721_ == 0)
{
lean_object* v___x_4722_; lean_object* v_env_4723_; lean_object* v_scopes_4724_; lean_object* v_usedQuotCtxts_4725_; lean_object* v_nextMacroScope_4726_; lean_object* v_maxRecDepth_4727_; lean_object* v_ngen_4728_; lean_object* v_auxDeclNGen_4729_; lean_object* v_infoState_4730_; lean_object* v_traceState_4731_; lean_object* v_snapshotTasks_4732_; lean_object* v_prevLinterStates_4733_; lean_object* v_codeQualityEntryTasks_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4744_; 
lean_del_object(v___x_4719_);
v___x_4722_ = lean_st_ref_take(v_a_4705_);
v_env_4723_ = lean_ctor_get(v___x_4722_, 0);
v_scopes_4724_ = lean_ctor_get(v___x_4722_, 2);
v_usedQuotCtxts_4725_ = lean_ctor_get(v___x_4722_, 3);
v_nextMacroScope_4726_ = lean_ctor_get(v___x_4722_, 4);
v_maxRecDepth_4727_ = lean_ctor_get(v___x_4722_, 5);
v_ngen_4728_ = lean_ctor_get(v___x_4722_, 6);
v_auxDeclNGen_4729_ = lean_ctor_get(v___x_4722_, 7);
v_infoState_4730_ = lean_ctor_get(v___x_4722_, 8);
v_traceState_4731_ = lean_ctor_get(v___x_4722_, 9);
v_snapshotTasks_4732_ = lean_ctor_get(v___x_4722_, 10);
v_prevLinterStates_4733_ = lean_ctor_get(v___x_4722_, 11);
v_codeQualityEntryTasks_4734_ = lean_ctor_get(v___x_4722_, 12);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4722_);
if (v_isSharedCheck_4744_ == 0)
{
lean_object* v_unused_4745_; 
v_unused_4745_ = lean_ctor_get(v___x_4722_, 1);
lean_dec(v_unused_4745_);
v___x_4736_ = v___x_4722_;
v_isShared_4737_ = v_isSharedCheck_4744_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4734_);
lean_inc(v_prevLinterStates_4733_);
lean_inc(v_snapshotTasks_4732_);
lean_inc(v_traceState_4731_);
lean_inc(v_infoState_4730_);
lean_inc(v_auxDeclNGen_4729_);
lean_inc(v_ngen_4728_);
lean_inc(v_maxRecDepth_4727_);
lean_inc(v_nextMacroScope_4726_);
lean_inc(v_usedQuotCtxts_4725_);
lean_inc(v_scopes_4724_);
lean_inc(v_env_4723_);
lean_dec(v___x_4722_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4744_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
lean_ctor_set(v___x_4736_, 1, v_a_4713_);
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_env_4723_);
lean_ctor_set(v_reuseFailAlloc_4743_, 1, v_a_4713_);
lean_ctor_set(v_reuseFailAlloc_4743_, 2, v_scopes_4724_);
lean_ctor_set(v_reuseFailAlloc_4743_, 3, v_usedQuotCtxts_4725_);
lean_ctor_set(v_reuseFailAlloc_4743_, 4, v_nextMacroScope_4726_);
lean_ctor_set(v_reuseFailAlloc_4743_, 5, v_maxRecDepth_4727_);
lean_ctor_set(v_reuseFailAlloc_4743_, 6, v_ngen_4728_);
lean_ctor_set(v_reuseFailAlloc_4743_, 7, v_auxDeclNGen_4729_);
lean_ctor_set(v_reuseFailAlloc_4743_, 8, v_infoState_4730_);
lean_ctor_set(v_reuseFailAlloc_4743_, 9, v_traceState_4731_);
lean_ctor_set(v_reuseFailAlloc_4743_, 10, v_snapshotTasks_4732_);
lean_ctor_set(v_reuseFailAlloc_4743_, 11, v_prevLinterStates_4733_);
lean_ctor_set(v_reuseFailAlloc_4743_, 12, v_codeQualityEntryTasks_4734_);
v___x_4739_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4740_ = lean_st_ref_put(v_a_4705_, v___x_4739_);
v___x_4741_ = lean_obj_once(&l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4, &l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4_once, _init_l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__4);
v___x_4742_ = l_Lean_logError___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__2(v___x_4741_, v_a_4704_, v_a_4705_);
return v___x_4742_;
}
}
}
else
{
lean_object* v___x_4746_; lean_object* v_env_4747_; lean_object* v_scopes_4748_; lean_object* v_usedQuotCtxts_4749_; lean_object* v_nextMacroScope_4750_; lean_object* v_maxRecDepth_4751_; lean_object* v_ngen_4752_; lean_object* v_auxDeclNGen_4753_; lean_object* v_infoState_4754_; lean_object* v_traceState_4755_; lean_object* v_snapshotTasks_4756_; lean_object* v_prevLinterStates_4757_; lean_object* v_codeQualityEntryTasks_4758_; lean_object* v___x_4760_; uint8_t v_isShared_4761_; uint8_t v_isSharedCheck_4771_; 
lean_dec(v_a_4713_);
v___x_4746_ = lean_st_ref_take(v_a_4705_);
v_env_4747_ = lean_ctor_get(v___x_4746_, 0);
v_scopes_4748_ = lean_ctor_get(v___x_4746_, 2);
v_usedQuotCtxts_4749_ = lean_ctor_get(v___x_4746_, 3);
v_nextMacroScope_4750_ = lean_ctor_get(v___x_4746_, 4);
v_maxRecDepth_4751_ = lean_ctor_get(v___x_4746_, 5);
v_ngen_4752_ = lean_ctor_get(v___x_4746_, 6);
v_auxDeclNGen_4753_ = lean_ctor_get(v___x_4746_, 7);
v_infoState_4754_ = lean_ctor_get(v___x_4746_, 8);
v_traceState_4755_ = lean_ctor_get(v___x_4746_, 9);
v_snapshotTasks_4756_ = lean_ctor_get(v___x_4746_, 10);
v_prevLinterStates_4757_ = lean_ctor_get(v___x_4746_, 11);
v_codeQualityEntryTasks_4758_ = lean_ctor_get(v___x_4746_, 12);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4746_);
if (v_isSharedCheck_4771_ == 0)
{
lean_object* v_unused_4772_; 
v_unused_4772_ = lean_ctor_get(v___x_4746_, 1);
lean_dec(v_unused_4772_);
v___x_4760_ = v___x_4746_;
v_isShared_4761_ = v_isSharedCheck_4771_;
goto v_resetjp_4759_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4758_);
lean_inc(v_prevLinterStates_4757_);
lean_inc(v_snapshotTasks_4756_);
lean_inc(v_traceState_4755_);
lean_inc(v_infoState_4754_);
lean_inc(v_auxDeclNGen_4753_);
lean_inc(v_ngen_4752_);
lean_inc(v_maxRecDepth_4751_);
lean_inc(v_nextMacroScope_4750_);
lean_inc(v_usedQuotCtxts_4749_);
lean_inc(v_scopes_4748_);
lean_inc(v_env_4747_);
lean_dec(v___x_4746_);
v___x_4760_ = lean_box(0);
v_isShared_4761_ = v_isSharedCheck_4771_;
goto v_resetjp_4759_;
}
v_resetjp_4759_:
{
lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4765_; 
v___x_4762_ = lean_box(0);
v___x_4763_ = l_Lean_MessageLog_empty;
if (v_isShared_4761_ == 0)
{
lean_ctor_set(v___x_4760_, 1, v___x_4763_);
v___x_4765_ = v___x_4760_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_env_4747_);
lean_ctor_set(v_reuseFailAlloc_4770_, 1, v___x_4763_);
lean_ctor_set(v_reuseFailAlloc_4770_, 2, v_scopes_4748_);
lean_ctor_set(v_reuseFailAlloc_4770_, 3, v_usedQuotCtxts_4749_);
lean_ctor_set(v_reuseFailAlloc_4770_, 4, v_nextMacroScope_4750_);
lean_ctor_set(v_reuseFailAlloc_4770_, 5, v_maxRecDepth_4751_);
lean_ctor_set(v_reuseFailAlloc_4770_, 6, v_ngen_4752_);
lean_ctor_set(v_reuseFailAlloc_4770_, 7, v_auxDeclNGen_4753_);
lean_ctor_set(v_reuseFailAlloc_4770_, 8, v_infoState_4754_);
lean_ctor_set(v_reuseFailAlloc_4770_, 9, v_traceState_4755_);
lean_ctor_set(v_reuseFailAlloc_4770_, 10, v_snapshotTasks_4756_);
lean_ctor_set(v_reuseFailAlloc_4770_, 11, v_prevLinterStates_4757_);
lean_ctor_set(v_reuseFailAlloc_4770_, 12, v_codeQualityEntryTasks_4758_);
v___x_4765_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
lean_object* v___x_4766_; lean_object* v___x_4768_; 
v___x_4766_ = lean_st_ref_put(v_a_4705_, v___x_4765_);
if (v_isShared_4720_ == 0)
{
lean_ctor_set(v___x_4719_, 0, v___x_4762_);
v___x_4768_ = v___x_4719_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v___x_4762_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
return v___x_4768_;
}
}
}
}
}
}
else
{
lean_object* v_a_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4781_; 
v_a_4774_ = lean_ctor_get(v___x_4712_, 0);
v_isSharedCheck_4781_ = !lean_is_exclusive(v___x_4712_);
if (v_isSharedCheck_4781_ == 0)
{
v___x_4776_ = v___x_4712_;
v_isShared_4777_ = v_isSharedCheck_4781_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_a_4774_);
lean_dec(v___x_4712_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4781_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
lean_object* v___x_4779_; 
if (v_isShared_4777_ == 0)
{
v___x_4779_ = v___x_4776_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4780_; 
v_reuseFailAlloc_4780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4780_, 0, v_a_4774_);
v___x_4779_ = v_reuseFailAlloc_4780_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
return v___x_4779_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___boxed(lean_object* v_x_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_){
_start:
{
lean_object* v_res_4786_; 
v_res_4786_ = l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic(v_x_4782_, v_a_4783_, v_a_4784_);
lean_dec(v_a_4784_);
lean_dec_ref(v_a_4783_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1(uint8_t v_foundPanic_4787_, lean_object* v_as_4788_, lean_object* v_as_x27_4789_, uint8_t v_b_4790_, lean_object* v_a_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_){
_start:
{
lean_object* v___x_4795_; 
v___x_4795_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___redArg(v_foundPanic_4787_, v_as_x27_4789_, v_b_4790_);
return v___x_4795_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1___boxed(lean_object* v_foundPanic_4796_, lean_object* v_as_4797_, lean_object* v_as_x27_4798_, lean_object* v_b_4799_, lean_object* v_a_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_){
_start:
{
uint8_t v_foundPanic_boxed_4804_; uint8_t v_b_boxed_4805_; lean_object* v_res_4806_; 
v_foundPanic_boxed_4804_ = lean_unbox(v_foundPanic_4796_);
v_b_boxed_4805_ = lean_unbox(v_b_4799_);
v_res_4806_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_GuardMsgs_elabGuardPanic_spec__1(v_foundPanic_boxed_4804_, v_as_4797_, v_as_x27_4798_, v_b_boxed_4805_, v_a_4800_, v___y_4801_, v___y_4802_);
lean_dec(v___y_4802_);
lean_dec_ref(v___y_4801_);
lean_dec(v_as_x27_4798_);
lean_dec(v_as_4797_);
return v_res_4806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1(){
_start:
{
lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; 
v___x_4815_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_4816_ = ((lean_object*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___closed__1));
v___x_4817_ = ((lean_object*)(l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___closed__1));
v___x_4818_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___boxed), 4, 0);
v___x_4819_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4815_, v___x_4816_, v___x_4817_, v___x_4818_);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1___boxed(lean_object* v_a_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1();
return v_res_4821_;
}
}
lean_object* runtime_initialize_Lean_Elab_Notation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_CodeActions_Attr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_GuardMsgs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_initFn_00___x40_Lean_Elab_GuardMsgs_2868335979____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_guard__msgs_diff = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_guard__msgs_diff);
lean_dec_ref(res);
l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_ = _init_l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_();
lean_mark_persistent(l_Lean_Elab_Tactic_GuardMsgs_instImpl_00___x40_Lean_Elab_GuardMsgs_1707083452____hygCtx___hyg_8_);
l_Lean_Elab_Tactic_GuardMsgs_instTypeNameGuardMsgFailure = _init_l_Lean_Elab_Tactic_GuardMsgs_instTypeNameGuardMsgFailure();
lean_mark_persistent(l_Lean_Elab_Tactic_GuardMsgs_instTypeNameGuardMsgFailure);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardMsgs_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction___regBuiltin_Lean_Elab_Tactic_GuardMsgs_guardMsgsCodeAction_declare__1_00___x40_Lean_Elab_GuardMsgs_1904941021____hygCtx___hyg_355_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_GuardMsgs_0__Lean_Elab_Tactic_GuardMsgs_elabGuardPanic___regBuiltin_Lean_Elab_Tactic_GuardMsgs_elabGuardPanic__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_GuardMsgs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Notation(uint8_t builtin);
lean_object* initialize_Lean_Server_CodeActions_Attr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_GuardMsgs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_GuardMsgs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_GuardMsgs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_GuardMsgs(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Language.Basic
// Imports: public import Lean.Parser.Types public import Lean.Util.Trace import Lean.Elab.InfoTree.Basic
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
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_addTrailing_x3f(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_instInhabitedMessageLog_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
extern lean_object* l_instMonadBaseIO;
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_CancelToken_set(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_addTrailing(lean_object*, lean_object*);
lean_object* lean_io_exit(uint8_t);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* l_Lean_Message_toJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MessageData_kind(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
extern lean_object* l_Lean_MessageLog_empty;
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Elab_InfoTree_addTrailing(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Language_Snapshot_instInhabitedDiagnostics_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_instInhabitedDiagnostics_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_instInhabitedDiagnostics_default;
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_instInhabitedDiagnostics;
static lean_once_cell_t l_Lean_Language_Snapshot_Diagnostics_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_Diagnostics_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_Diagnostics_empty;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__0 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__1 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__1_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__2 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__2_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__3 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__4 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__4_value;
static const lean_array_object l_Lean_Language_Snapshot_desc___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__5 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__5_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__6 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__7 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__7_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__8 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__9 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__9_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__10 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__11 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__12;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__13;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__14 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__14_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__15 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__16 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__16_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__17 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__17_value;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__18_value_aux_0),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__18_value_aux_1),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__18_value_aux_2),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__17_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__18 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__18_value;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__19 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__19_value;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__20;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__21;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__22;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__23;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__24 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__24_value;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__25;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__26;
static const lean_string_object l_Lean_Language_Snapshot_desc___autoParam___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__27 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__27_value;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__28;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__29;
static const lean_ctor_object l_Lean_Language_Snapshot_desc___autoParam___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__27_value),LEAN_SCALAR_PTR_LITERAL(47, 79, 177, 134, 210, 33, 7, 227)}};
static const lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__30 = (const lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__30_value;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__31;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__32;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__33;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__34;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__35;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__36;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__37;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__38;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__39;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__40;
static lean_once_cell_t l_Lean_Language_Snapshot_desc___autoParam___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Snapshot_desc___autoParam___closed__41;
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_desc___autoParam;
static const lean_string_object l_Lean_Language_instInhabitedSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Language_instInhabitedSnapshot___closed__0 = (const lean_object*)&l_Lean_Language_instInhabitedSnapshot___closed__0_value;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshot___closed__1;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshot___closed__2;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshot___closed__3;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshot___closed__4;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshot;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_inherit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_inherit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_some_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_some_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_skip_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_skip_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_instInhabitedReportingRange_default;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_instInhabitedReportingRange;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(lean_object*);
static lean_once_cell_t l_Lean_Language_SnapshotTask_defaultReportingRange___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange___boxed(lean_object*);
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshotTask_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_finished(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_instInhabitedSnapshotTree_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_instInhabitedSnapshotTree_default___closed__0 = (const lean_object*)&l_Lean_Language_instInhabitedSnapshotTree_default___closed__0_value;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshotTree_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshotTree_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTree_default;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTree;
static const lean_string_object l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Language"};
static const lean_object* l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_ = (const lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value;
static const lean_string_object l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "SnapshotTree"};
static const lean_object* l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_ = (const lean_object*)&l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value;
static const lean_ctor_object l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value_aux_0),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value_aux_1),((lean_object*)&l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(233, 91, 117, 52, 192, 104, 64, 53)}};
static const lean_object* l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_ = (const lean_object*)&l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value;
static lean_once_cell_t l_Lean_Language_instImpl___closed__3_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instImpl___closed__3_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_;
LEAN_EXPORT lean_object* l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_;
LEAN_EXPORT lean_object* l_Lean_Language_instTypeNameSnapshotTree;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__0;
static lean_once_cell_t l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform;
LEAN_EXPORT uint8_t l_Lean_Language_SnapshotTreeTransform_isIdentity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_isIdentity___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_transformSyntax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_transformInfoTree(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_transformInfoTree_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_compose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_compose___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_transform___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_transform(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedTransformedSnap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedTransformedSnap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_TransformedSnap_compose___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_TransformedSnap_compose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_instToSnapshotTreeSnapshotTree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_instToSnapshotTreeSnapshotTree___closed__0 = (const lean_object*)&l_Lean_Language_instToSnapshotTreeSnapshotTree___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_instToSnapshotTreeSnapshotTree = (const lean_object*)&l_Lean_Language_instToSnapshotTreeSnapshotTree___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "SnapshotLeaf"};
static const lean_object* l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value;
static const lean_ctor_object l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(145, 226, 163, 148, 17, 100, 140, 218)}};
static const lean_object* l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__value;
static lean_once_cell_t l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Language_instTypeNameSnapshotLeaf;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotLeaf;
static const lean_array_object l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_instToSnapshotTreeSnapshotLeaf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf___closed__0 = (const lean_object*)&l_Lean_Language_instToSnapshotTreeSnapshotLeaf___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf = (const lean_object*)&l_Lean_Language_instToSnapshotTreeSnapshotLeaf___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeDynamicSnapshot___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeDynamicSnapshot___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_instToSnapshotTreeDynamicSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_instToSnapshotTreeDynamicSnapshot___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_instToSnapshotTreeDynamicSnapshot___closed__0 = (const lean_object*)&l_Lean_Language_instToSnapshotTreeDynamicSnapshot___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_instToSnapshotTreeDynamicSnapshot = (const lean_object*)&l_Lean_Language_instToSnapshotTreeDynamicSnapshot___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_instInhabitedDynamicSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "instInhabitedDynamicSnapshot"};
static const lean_object* l_Lean_Language_instInhabitedDynamicSnapshot___closed__0 = (const lean_object*)&l_Lean_Language_instInhabitedDynamicSnapshot___closed__0_value;
static const lean_ctor_object l_Lean_Language_instInhabitedDynamicSnapshot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_instInhabitedDynamicSnapshot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_instInhabitedDynamicSnapshot___closed__1_value_aux_0),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_instInhabitedDynamicSnapshot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_instInhabitedDynamicSnapshot___closed__1_value_aux_1),((lean_object*)&l_Lean_Language_instInhabitedDynamicSnapshot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 233, 253, 247, 44, 199, 244, 14)}};
static const lean_object* l_Lean_Language_instInhabitedDynamicSnapshot___closed__1 = (const lean_object*)&l_Lean_Language_instInhabitedDynamicSnapshot___closed__1_value;
static lean_once_cell_t l_Lean_Language_instInhabitedDynamicSnapshot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedDynamicSnapshot___closed__2;
static lean_once_cell_t l_Lean_Language_instInhabitedDynamicSnapshot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedDynamicSnapshot___closed__3;
static lean_once_cell_t l_Lean_Language_instInhabitedDynamicSnapshot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_instInhabitedDynamicSnapshot___closed__4;
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedDynamicSnapshot;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "printMessageEndPos"};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(132, 21, 81, 184, 167, 123, 94, 166)}};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "print end position of each message in addition to start position"};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(36, 253, 199, 254, 66, 50, 168, 11)}};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_printMessageEndPos;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxErrors"};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(229, 225, 16, 209, 3, 189, 8, 41)}};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "maximum number of errors to report (0 for no limit)"};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__2_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__0_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(69, 143, 131, 92, 100, 78, 143, 101)}};
static const lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_maxErrors;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "maximum number of errors ("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "; from option `maxErrors`) reached, exiting"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_reportMessages(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_reportMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_runAndReport(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_runAndReport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_SnapshotTree_getAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_SnapshotTree_getAll___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTree_getAll___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object*);
static lean_once_cell_t l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_waitAll(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_waitAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instMonadLiftProcessingMProcessingTIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_instMonadLiftProcessingMProcessingTIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_instMonadLiftProcessingMProcessingTIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_instMonadLiftProcessingMProcessingTIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_instMonadLiftProcessingMProcessingTIO___closed__0 = (const lean_object*)&l_Lean_Language_instMonadLiftProcessingMProcessingTIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_instMonadLiftProcessingMProcessingTIO = (const lean_object*)&l_Lean_Language_instMonadLiftProcessingMProcessingTIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_diagnosticsOfHeaderError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l_Lean_Language_diagnosticsOfHeaderError___closed__0 = (const lean_object*)&l_Lean_Language_diagnosticsOfHeaderError___closed__0_value;
static const lean_ctor_object l_Lean_Language_diagnosticsOfHeaderError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Language_diagnosticsOfHeaderError___closed__1 = (const lean_object*)&l_Lean_Language_diagnosticsOfHeaderError___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Language_diagnosticsOfHeaderError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_diagnosticsOfHeaderError___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_withHeaderExceptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "withHeaderExceptions"};
static const lean_object* l_Lean_Language_withHeaderExceptions___redArg___closed__0 = (const lean_object*)&l_Lean_Language_withHeaderExceptions___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Language_withHeaderExceptions___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Language_Snapshot_desc___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_withHeaderExceptions___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_withHeaderExceptions___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Language_instImpl___closed__0_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_withHeaderExceptions___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_withHeaderExceptions___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Language_withHeaderExceptions___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 40, 33, 69, 134, 215, 3, 178)}};
static const lean_object* l_Lean_Language_withHeaderExceptions___redArg___closed__1 = (const lean_object*)&l_Lean_Language_withHeaderExceptions___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Language_withHeaderExceptions___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_withHeaderExceptions___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Language_Snapshot_instInhabitedDiagnostics_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_instInhabitedMessageLog_default;
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_instInhabitedDiagnostics_default(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_Language_Snapshot_instInhabitedDiagnostics_default___closed__0, &l_Lean_Language_Snapshot_instInhabitedDiagnostics_default___closed__0_once, _init_l_Lean_Language_Snapshot_instInhabitedDiagnostics_default___closed__0);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_instInhabitedDiagnostics(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Language_Snapshot_instInhabitedDiagnostics_default;
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_Diagnostics_empty___closed__0(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_box(0);
v___x_7_ = l_Lean_MessageLog_empty;
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_Diagnostics_empty(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_Language_Snapshot_Diagnostics_empty___closed__0, &l_Lean_Language_Snapshot_Diagnostics_empty___closed__0_once, _init_l_Lean_Language_Snapshot_Diagnostics_empty___closed__0);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__12(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__10));
v___x_37_ = l_Lean_mkAtom(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__13(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__12, &l_Lean_Language_Snapshot_desc___autoParam___closed__12_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__12);
v___x_39_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__5));
v___x_40_ = lean_array_push(v___x_39_, v___x_38_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__20(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__19));
v___x_56_ = l_Lean_mkAtom(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__21(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__20, &l_Lean_Language_Snapshot_desc___autoParam___closed__20_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__20);
v___x_58_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__5));
v___x_59_ = lean_array_push(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__22(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__21, &l_Lean_Language_Snapshot_desc___autoParam___closed__21_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__21);
v___x_61_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__18));
v___x_62_ = lean_box(2);
v___x_63_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
lean_ctor_set(v___x_63_, 2, v___x_60_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__23(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__22, &l_Lean_Language_Snapshot_desc___autoParam___closed__22_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__22);
v___x_65_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__5));
v___x_66_ = lean_array_push(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__25(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__24));
v___x_69_ = l_Lean_mkAtom(v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__26(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__25, &l_Lean_Language_Snapshot_desc___autoParam___closed__25_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__25);
v___x_71_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__23, &l_Lean_Language_Snapshot_desc___autoParam___closed__23_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__23);
v___x_72_ = lean_array_push(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__28(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__27));
v___x_75_ = lean_string_utf8_byte_size(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__29(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_76_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__28, &l_Lean_Language_Snapshot_desc___autoParam___closed__28_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__28);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__27));
v___x_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_76_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__31(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_82_ = lean_box(0);
v___x_83_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__30));
v___x_84_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__29, &l_Lean_Language_Snapshot_desc___autoParam___closed__29_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__29);
v___x_85_ = lean_box(2);
v___x_86_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
lean_ctor_set(v___x_86_, 3, v___x_82_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__32(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__31, &l_Lean_Language_Snapshot_desc___autoParam___closed__31_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__31);
v___x_88_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__26, &l_Lean_Language_Snapshot_desc___autoParam___closed__26_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__26);
v___x_89_ = lean_array_push(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__33(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_90_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__32, &l_Lean_Language_Snapshot_desc___autoParam___closed__32_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__32);
v___x_91_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__16));
v___x_92_ = lean_box(2);
v___x_93_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_91_);
lean_ctor_set(v___x_93_, 2, v___x_90_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__34(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__33, &l_Lean_Language_Snapshot_desc___autoParam___closed__33_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__33);
v___x_95_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__13, &l_Lean_Language_Snapshot_desc___autoParam___closed__13_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__13);
v___x_96_ = lean_array_push(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__35(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__34, &l_Lean_Language_Snapshot_desc___autoParam___closed__34_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__34);
v___x_98_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__11));
v___x_99_ = lean_box(2);
v___x_100_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_98_);
lean_ctor_set(v___x_100_, 2, v___x_97_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__36(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__35, &l_Lean_Language_Snapshot_desc___autoParam___closed__35_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__35);
v___x_102_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__5));
v___x_103_ = lean_array_push(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__37(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__36, &l_Lean_Language_Snapshot_desc___autoParam___closed__36_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__36);
v___x_105_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__9));
v___x_106_ = lean_box(2);
v___x_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
lean_ctor_set(v___x_107_, 2, v___x_104_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__38(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__37, &l_Lean_Language_Snapshot_desc___autoParam___closed__37_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__37);
v___x_109_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__5));
v___x_110_ = lean_array_push(v___x_109_, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__39(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_111_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__38, &l_Lean_Language_Snapshot_desc___autoParam___closed__38_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__38);
v___x_112_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__7));
v___x_113_ = lean_box(2);
v___x_114_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_111_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__40(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__39, &l_Lean_Language_Snapshot_desc___autoParam___closed__39_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__39);
v___x_116_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__5));
v___x_117_ = lean_array_push(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam___closed__41(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__40, &l_Lean_Language_Snapshot_desc___autoParam___closed__40_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__40);
v___x_119_ = ((lean_object*)(l_Lean_Language_Snapshot_desc___autoParam___closed__4));
v___x_120_ = lean_box(2);
v___x_121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_118_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Language_Snapshot_desc___autoParam(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lean_Language_Snapshot_desc___autoParam___closed__41, &l_Lean_Language_Snapshot_desc___autoParam___closed__41_once, _init_l_Lean_Language_Snapshot_desc___autoParam___closed__41);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshot___closed__1(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_unsigned_to_nat(32u);
v___x_125_ = lean_mk_empty_array_with_capacity(v___x_124_);
v___x_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshot___closed__2(void){
_start:
{
size_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_127_ = ((size_t)5ULL);
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = lean_unsigned_to_nat(32u);
v___x_130_ = lean_mk_empty_array_with_capacity(v___x_129_);
v___x_131_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__1, &l_Lean_Language_instInhabitedSnapshot___closed__1_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__1);
v___x_132_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_130_);
lean_ctor_set(v___x_132_, 2, v___x_128_);
lean_ctor_set(v___x_132_, 3, v___x_128_);
lean_ctor_set_usize(v___x_132_, 4, v___x_127_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshot___closed__3(void){
_start:
{
lean_object* v___x_133_; uint64_t v___x_134_; lean_object* v___x_135_; 
v___x_133_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__2, &l_Lean_Language_instInhabitedSnapshot___closed__2_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__2);
v___x_134_ = 0ULL;
v___x_135_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_135_, 0, v___x_133_);
lean_ctor_set_uint64(v___x_135_, sizeof(void*)*1, v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshot___closed__4(void){
_start:
{
uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_136_ = 0;
v___x_137_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__3, &l_Lean_Language_instInhabitedSnapshot___closed__3_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__3);
v___x_138_ = lean_box(0);
v___x_139_ = l_Lean_Language_Snapshot_instInhabitedDiagnostics_default;
v___x_140_ = ((lean_object*)(l_Lean_Language_instInhabitedSnapshot___closed__0));
v___x_141_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_139_);
lean_ctor_set(v___x_141_, 2, v___x_138_);
lean_ctor_set(v___x_141_, 3, v___x_137_);
lean_ctor_set_uint8(v___x_141_, sizeof(void*)*4, v___x_136_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshot(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__4, &l_Lean_Language_instInhabitedSnapshot___closed__4_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__4);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorIdx(lean_object* v_x_143_){
_start:
{
switch(lean_obj_tag(v_x_143_))
{
case 0:
{
lean_object* v___x_144_; 
v___x_144_ = lean_unsigned_to_nat(0u);
return v___x_144_;
}
case 1:
{
lean_object* v___x_145_; 
v___x_145_ = lean_unsigned_to_nat(1u);
return v___x_145_;
}
default: 
{
lean_object* v___x_146_; 
v___x_146_ = lean_unsigned_to_nat(2u);
return v___x_146_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorIdx___boxed(lean_object* v_x_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorIdx(v_x_147_);
lean_dec(v_x_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(lean_object* v_t_149_, lean_object* v_k_150_){
_start:
{
if (lean_obj_tag(v_t_149_) == 1)
{
lean_object* v_range_151_; lean_object* v___x_152_; 
v_range_151_ = lean_ctor_get(v_t_149_, 0);
lean_inc_ref(v_range_151_);
lean_dec_ref_known(v_t_149_, 1);
v___x_152_ = lean_apply_1(v_k_150_, v_range_151_);
return v___x_152_;
}
else
{
lean_dec(v_t_149_);
return v_k_150_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorElim(lean_object* v_motive_153_, lean_object* v_ctorIdx_154_, lean_object* v_t_155_, lean_object* v_h_156_, lean_object* v_k_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_155_, v_k_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___boxed(lean_object* v_motive_159_, lean_object* v_ctorIdx_160_, lean_object* v_t_161_, lean_object* v_h_162_, lean_object* v_k_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim(v_motive_159_, v_ctorIdx_160_, v_t_161_, v_h_162_, v_k_163_);
lean_dec(v_ctorIdx_160_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_inherit_elim___redArg(lean_object* v_t_165_, lean_object* v_inherit_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_165_, v_inherit_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_inherit_elim(lean_object* v_motive_168_, lean_object* v_t_169_, lean_object* v_h_170_, lean_object* v_inherit_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_169_, v_inherit_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_some_elim___redArg(lean_object* v_t_173_, lean_object* v_some_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_173_, v_some_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_some_elim(lean_object* v_motive_176_, lean_object* v_t_177_, lean_object* v_h_178_, lean_object* v_some_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_177_, v_some_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_skip_elim___redArg(lean_object* v_t_181_, lean_object* v_skip_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_181_, v_skip_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_skip_elim(lean_object* v_motive_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_skip_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Lean_Language_SnapshotTask_ReportingRange_ctorElim___redArg(v_t_185_, v_skip_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Language_SnapshotTask_instInhabitedReportingRange_default(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(0);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Language_SnapshotTask_instInhabitedReportingRange(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_box(0);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(lean_object* v_x_191_){
_start:
{
if (lean_obj_tag(v_x_191_) == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_box(0);
return v___x_192_;
}
else
{
lean_object* v_val_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
v_val_193_ = lean_ctor_get(v_x_191_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v_x_191_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v_x_191_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_val_193_);
lean_dec(v_x_191_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_val_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
static lean_object* _init_l_Lean_Language_SnapshotTask_defaultReportingRange___closed__0(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_box(0);
v___x_202_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object* v_stx_x3f_203_){
_start:
{
if (lean_obj_tag(v_stx_x3f_203_) == 0)
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l_Lean_Language_SnapshotTask_defaultReportingRange___closed__0, &l_Lean_Language_SnapshotTask_defaultReportingRange___closed__0_once, _init_l_Lean_Language_SnapshotTask_defaultReportingRange___closed__0);
return v___x_204_;
}
else
{
lean_object* v_val_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_val_205_ = lean_ctor_get(v_stx_x3f_203_, 0);
v___x_206_ = 1;
v___x_207_ = l_Lean_Syntax_getRange_x3f(v_val_205_, v___x_206_);
v___x_208_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___x_207_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange___boxed(lean_object* v_stx_x3f_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v_stx_x3f_209_);
lean_dec(v_stx_x3f_209_);
return v_res_210_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTask_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_box(0);
v___x_212_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg(lean_object* v_inst_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_214_ = lean_box(0);
v___x_215_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshotTask_default___redArg___closed__0, &l_Lean_Language_instInhabitedSnapshotTask_default___redArg___closed__0_once, _init_l_Lean_Language_instInhabitedSnapshotTask_default___redArg___closed__0);
v___x_216_ = lean_task_pure(v_inst_213_);
v___x_217_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_217_, 0, v___x_214_);
lean_ctor_set(v___x_217_, 1, v___x_215_);
lean_ctor_set(v___x_217_, 2, v___x_214_);
lean_ctor_set(v___x_217_, 3, v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask_default(lean_object* v_00_u03b1_218_, lean_object* v_inst_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v_inst_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask___redArg(lean_object* v_inst_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v_inst_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedSnapshotTask(lean_object* v_a_223_, lean_object* v_inst_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v_inst_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg(lean_object* v_stx_x3f_226_, lean_object* v_cancelTk_x3f_227_, lean_object* v_reportingRange_228_, lean_object* v_act_229_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_231_ = lean_unsigned_to_nat(0u);
v___x_232_ = lean_io_as_task(v_act_229_, v___x_231_);
v___x_233_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_233_, 0, v_stx_x3f_226_);
lean_ctor_set(v___x_233_, 1, v_reportingRange_228_);
lean_ctor_set(v___x_233_, 2, v_cancelTk_x3f_227_);
lean_ctor_set(v___x_233_, 3, v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg___boxed(lean_object* v_stx_x3f_234_, lean_object* v_cancelTk_x3f_235_, lean_object* v_reportingRange_236_, lean_object* v_act_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v_stx_x3f_234_, v_cancelTk_x3f_235_, v_reportingRange_236_, v_act_237_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO(lean_object* v_00_u03b1_240_, lean_object* v_stx_x3f_241_, lean_object* v_cancelTk_x3f_242_, lean_object* v_reportingRange_243_, lean_object* v_act_244_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v_stx_x3f_241_, v_cancelTk_x3f_242_, v_reportingRange_243_, v_act_244_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_ofIO___boxed(lean_object* v_00_u03b1_247_, lean_object* v_stx_x3f_248_, lean_object* v_cancelTk_x3f_249_, lean_object* v_reportingRange_250_, lean_object* v_act_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Language_SnapshotTask_ofIO(v_00_u03b1_247_, v_stx_x3f_248_, v_cancelTk_x3f_249_, v_reportingRange_250_, v_act_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object* v_stx_x3f_254_, lean_object* v_a_255_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_256_ = lean_box(2);
v___x_257_ = lean_box(0);
v___x_258_ = lean_task_pure(v_a_255_);
v___x_259_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_259_, 0, v_stx_x3f_254_);
lean_ctor_set(v___x_259_, 1, v___x_256_);
lean_ctor_set(v___x_259_, 2, v___x_257_);
lean_ctor_set(v___x_259_, 3, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_finished(lean_object* v_00_u03b1_260_, lean_object* v_stx_x3f_261_, lean_object* v_a_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_Language_SnapshotTask_finished___redArg(v_stx_x3f_261_, v_a_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map___redArg(lean_object* v_t_264_, lean_object* v_f_265_, lean_object* v_stx_x3f_266_, lean_object* v_reportingRange_267_, uint8_t v_sync_268_){
_start:
{
lean_object* v_cancelTk_x3f_269_; lean_object* v_task_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_279_; 
v_cancelTk_x3f_269_ = lean_ctor_get(v_t_264_, 2);
v_task_270_ = lean_ctor_get(v_t_264_, 3);
v_isSharedCheck_279_ = !lean_is_exclusive(v_t_264_);
if (v_isSharedCheck_279_ == 0)
{
lean_object* v_unused_280_; lean_object* v_unused_281_; 
v_unused_280_ = lean_ctor_get(v_t_264_, 1);
lean_dec(v_unused_280_);
v_unused_281_ = lean_ctor_get(v_t_264_, 0);
lean_dec(v_unused_281_);
v___x_272_ = v_t_264_;
v_isShared_273_ = v_isSharedCheck_279_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_task_270_);
lean_inc(v_cancelTk_x3f_269_);
lean_dec(v_t_264_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_279_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = lean_task_map(v_f_265_, v_task_270_, v___x_274_, v_sync_268_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 3, v___x_275_);
lean_ctor_set(v___x_272_, 1, v_reportingRange_267_);
lean_ctor_set(v___x_272_, 0, v_stx_x3f_266_);
v___x_277_ = v___x_272_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_stx_x3f_266_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_reportingRange_267_);
lean_ctor_set(v_reuseFailAlloc_278_, 2, v_cancelTk_x3f_269_);
lean_ctor_set(v_reuseFailAlloc_278_, 3, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map___redArg___boxed(lean_object* v_t_282_, lean_object* v_f_283_, lean_object* v_stx_x3f_284_, lean_object* v_reportingRange_285_, lean_object* v_sync_286_){
_start:
{
uint8_t v_sync_boxed_287_; lean_object* v_res_288_; 
v_sync_boxed_287_ = lean_unbox(v_sync_286_);
v_res_288_ = l_Lean_Language_SnapshotTask_map___redArg(v_t_282_, v_f_283_, v_stx_x3f_284_, v_reportingRange_285_, v_sync_boxed_287_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map(lean_object* v_00_u03b1_289_, lean_object* v_00_u03b2_290_, lean_object* v_t_291_, lean_object* v_f_292_, lean_object* v_stx_x3f_293_, lean_object* v_reportingRange_294_, uint8_t v_sync_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_Language_SnapshotTask_map___redArg(v_t_291_, v_f_292_, v_stx_x3f_293_, v_reportingRange_294_, v_sync_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_map___boxed(lean_object* v_00_u03b1_297_, lean_object* v_00_u03b2_298_, lean_object* v_t_299_, lean_object* v_f_300_, lean_object* v_stx_x3f_301_, lean_object* v_reportingRange_302_, lean_object* v_sync_303_){
_start:
{
uint8_t v_sync_boxed_304_; lean_object* v_res_305_; 
v_sync_boxed_304_ = lean_unbox(v_sync_303_);
v_res_305_ = l_Lean_Language_SnapshotTask_map(v_00_u03b1_297_, v_00_u03b2_298_, v_t_299_, v_f_300_, v_stx_x3f_301_, v_reportingRange_302_, v_sync_boxed_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg___lam__0(lean_object* v_act_306_, lean_object* v_a_307_){
_start:
{
lean_object* v___x_309_; lean_object* v_task_310_; 
v___x_309_ = lean_apply_2(v_act_306_, v_a_307_, lean_box(0));
v_task_310_ = lean_ctor_get(v___x_309_, 3);
lean_inc_ref(v_task_310_);
lean_dec_ref(v___x_309_);
return v_task_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg___lam__0___boxed(lean_object* v_act_311_, lean_object* v_a_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Language_SnapshotTask_bindIO___redArg___lam__0(v_act_311_, v_a_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg(lean_object* v_t_315_, lean_object* v_act_316_, lean_object* v_stx_x3f_317_, lean_object* v_reportingRange_318_, lean_object* v_cancelTk_x3f_319_, uint8_t v_sync_320_){
_start:
{
lean_object* v_task_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_332_; 
v_task_322_ = lean_ctor_get(v_t_315_, 3);
v_isSharedCheck_332_ = !lean_is_exclusive(v_t_315_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; lean_object* v_unused_334_; lean_object* v_unused_335_; 
v_unused_333_ = lean_ctor_get(v_t_315_, 2);
lean_dec(v_unused_333_);
v_unused_334_ = lean_ctor_get(v_t_315_, 1);
lean_dec(v_unused_334_);
v_unused_335_ = lean_ctor_get(v_t_315_, 0);
lean_dec(v_unused_335_);
v___x_324_ = v_t_315_;
v_isShared_325_ = v_isSharedCheck_332_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_task_322_);
lean_dec(v_t_315_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_332_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___f_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
v___f_326_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_326_, 0, v_act_316_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_io_bind_task(v_task_322_, v___f_326_, v___x_327_, v_sync_320_);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 3, v___x_328_);
lean_ctor_set(v___x_324_, 2, v_cancelTk_x3f_319_);
lean_ctor_set(v___x_324_, 1, v_reportingRange_318_);
lean_ctor_set(v___x_324_, 0, v_stx_x3f_317_);
v___x_330_ = v___x_324_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_stx_x3f_317_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_reportingRange_318_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v_cancelTk_x3f_319_);
lean_ctor_set(v_reuseFailAlloc_331_, 3, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg___boxed(lean_object* v_t_336_, lean_object* v_act_337_, lean_object* v_stx_x3f_338_, lean_object* v_reportingRange_339_, lean_object* v_cancelTk_x3f_340_, lean_object* v_sync_341_, lean_object* v_a_342_){
_start:
{
uint8_t v_sync_boxed_343_; lean_object* v_res_344_; 
v_sync_boxed_343_ = lean_unbox(v_sync_341_);
v_res_344_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_t_336_, v_act_337_, v_stx_x3f_338_, v_reportingRange_339_, v_cancelTk_x3f_340_, v_sync_boxed_343_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO(lean_object* v_00_u03b1_345_, lean_object* v_00_u03b2_346_, lean_object* v_t_347_, lean_object* v_act_348_, lean_object* v_stx_x3f_349_, lean_object* v_reportingRange_350_, lean_object* v_cancelTk_x3f_351_, uint8_t v_sync_352_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_t_347_, v_act_348_, v_stx_x3f_349_, v_reportingRange_350_, v_cancelTk_x3f_351_, v_sync_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_bindIO___boxed(lean_object* v_00_u03b1_355_, lean_object* v_00_u03b2_356_, lean_object* v_t_357_, lean_object* v_act_358_, lean_object* v_stx_x3f_359_, lean_object* v_reportingRange_360_, lean_object* v_cancelTk_x3f_361_, lean_object* v_sync_362_, lean_object* v_a_363_){
_start:
{
uint8_t v_sync_boxed_364_; lean_object* v_res_365_; 
v_sync_boxed_364_ = lean_unbox(v_sync_362_);
v_res_365_ = l_Lean_Language_SnapshotTask_bindIO(v_00_u03b1_355_, v_00_u03b2_356_, v_t_357_, v_act_358_, v_stx_x3f_359_, v_reportingRange_360_, v_cancelTk_x3f_361_, v_sync_boxed_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object* v_t_366_){
_start:
{
lean_object* v_task_367_; lean_object* v___x_368_; 
v_task_367_ = lean_ctor_get(v_t_366_, 3);
lean_inc_ref(v_task_367_);
lean_dec_ref(v_t_366_);
v___x_368_ = lean_task_get_own(v_task_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get(lean_object* v_00_u03b1_369_, lean_object* v_t_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Language_SnapshotTask_get___redArg(v_t_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg(lean_object* v_t_372_){
_start:
{
lean_object* v_task_374_; uint8_t v___x_375_; 
v_task_374_ = lean_ctor_get(v_t_372_, 3);
lean_inc_ref(v_task_374_);
lean_dec_ref(v_t_372_);
v___x_375_ = lean_io_get_task_state(v_task_374_);
if (v___x_375_ == 2)
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_task_get_own(v_task_374_);
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
else
{
lean_object* v___x_378_; 
lean_dec_ref(v_task_374_);
v___x_378_ = lean_box(0);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg___boxed(lean_object* v_t_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_t_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f(lean_object* v_00_u03b1_382_, lean_object* v_t_383_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_t_383_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_get_x3f___boxed(lean_object* v_00_u03b1_386_, lean_object* v_t_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Language_SnapshotTask_get_x3f(v_00_u03b1_386_, v_t_387_);
return v_res_389_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTree_default___closed__1(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = ((lean_object*)(l_Lean_Language_instInhabitedSnapshotTree_default___closed__0));
v___x_393_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__4, &l_Lean_Language_instInhabitedSnapshot___closed__4_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__4);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_392_);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTree_default(void){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshotTree_default___closed__1, &l_Lean_Language_instInhabitedSnapshotTree_default___closed__1_once, _init_l_Lean_Language_instInhabitedSnapshotTree_default___closed__1);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTree(void){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_Language_instInhabitedSnapshotTree_default;
return v___x_396_;
}
}
static lean_object* _init_l_Lean_Language_instImpl___closed__3_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = ((lean_object*)(l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_));
v___x_404_ = l_unsafeCast___redArg(v___x_403_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_(void){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&l_Lean_Language_instImpl___closed__3_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_, &l_Lean_Language_instImpl___closed__3_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30__once, _init_l_Lean_Language_instImpl___closed__3_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Language_instTypeNameSnapshotTree(void){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_;
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__0(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(l_Lean_Language_instInhabitedSnapshot___closed__0));
v___x_408_ = lean_string_utf8_byte_size(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__1(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_409_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__0, &l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__0_once, _init_l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__0);
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = ((lean_object*)(l_Lean_Language_instInhabitedSnapshot___closed__0));
v___x_412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_410_);
lean_ctor_set(v___x_412_, 2, v___x_409_);
return v___x_412_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTreeTransform_default(void){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__1, &l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__1_once, _init_l_Lean_Language_instInhabitedSnapshotTreeTransform_default___closed__1);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotTreeTransform(void){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
return v___x_414_;
}
}
LEAN_EXPORT uint8_t l_Lean_Language_SnapshotTreeTransform_isIdentity(lean_object* v_trans_415_){
_start:
{
lean_object* v_startPos_416_; lean_object* v_stopPos_417_; lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_startPos_416_ = lean_ctor_get(v_trans_415_, 1);
v_stopPos_417_ = lean_ctor_get(v_trans_415_, 2);
v___x_418_ = lean_nat_sub(v_stopPos_417_, v_startPos_416_);
v___x_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = lean_nat_dec_eq(v___x_418_, v___x_419_);
lean_dec(v___x_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_isIdentity___boxed(lean_object* v_trans_421_){
_start:
{
uint8_t v_res_422_; lean_object* v_r_423_; 
v_res_422_ = l_Lean_Language_SnapshotTreeTransform_isIdentity(v_trans_421_);
lean_dec_ref(v_trans_421_);
v_r_423_ = lean_box(v_res_422_);
return v_r_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_transformSyntax(lean_object* v_trans_424_, lean_object* v_stx_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_Syntax_addTrailing(v_stx_425_, v_trans_424_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_transformInfoTree(lean_object* v_trans_427_, lean_object* v_t_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_Elab_InfoTree_addTrailing(v_trans_427_, v_t_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_transformInfoTree_x3f(lean_object* v_trans_430_, lean_object* v_t_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Elab_InfoTree_addTrailing_x3f(v_trans_430_, v_t_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_compose(lean_object* v_outer_433_, lean_object* v_inner_434_){
_start:
{
lean_object* v_str_435_; lean_object* v_startPos_436_; lean_object* v_stopPos_437_; lean_object* v_startPos_438_; lean_object* v_stopPos_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_447_; 
v_str_435_ = lean_ctor_get(v_inner_434_, 0);
v_startPos_436_ = lean_ctor_get(v_inner_434_, 1);
v_stopPos_437_ = lean_ctor_get(v_inner_434_, 2);
v_startPos_438_ = lean_ctor_get(v_outer_433_, 1);
v_stopPos_439_ = lean_ctor_get(v_outer_433_, 2);
v_isSharedCheck_447_ = !lean_is_exclusive(v_outer_433_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v_outer_433_, 0);
lean_dec(v_unused_448_);
v___x_441_ = v_outer_433_;
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_stopPos_439_);
lean_inc(v_startPos_438_);
lean_dec(v_outer_433_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint8_t v_decide_443_; 
v_decide_443_ = lean_nat_dec_eq(v_stopPos_437_, v_startPos_438_);
lean_dec(v_startPos_438_);
if (v_decide_443_ == 0)
{
lean_del_object(v___x_441_);
lean_dec(v_stopPos_439_);
lean_inc_ref(v_inner_434_);
return v_inner_434_;
}
else
{
lean_object* v___x_445_; 
lean_inc(v_startPos_436_);
lean_inc_ref(v_str_435_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v_startPos_436_);
lean_ctor_set(v___x_441_, 0, v_str_435_);
v___x_445_ = v___x_441_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_str_435_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_startPos_436_);
lean_ctor_set(v_reuseFailAlloc_446_, 2, v_stopPos_439_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTreeTransform_compose___boxed(lean_object* v_outer_449_, lean_object* v_inner_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Language_SnapshotTreeTransform_compose(v_outer_449_, v_inner_450_);
lean_dec_ref(v_inner_450_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_transform(lean_object* v_s_452_, lean_object* v_a_453_){
_start:
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_Language_SnapshotTreeTransform_isIdentity(v_a_453_);
if (v___x_454_ == 0)
{
lean_object* v_infoTree_x3f_455_; 
v_infoTree_x3f_455_ = lean_ctor_get(v_s_452_, 2);
if (lean_obj_tag(v_infoTree_x3f_455_) == 0)
{
return v_s_452_;
}
else
{
lean_object* v_desc_456_; lean_object* v_diagnostics_457_; lean_object* v_traces_458_; uint8_t v_isFatal_459_; lean_object* v_val_460_; lean_object* v___x_461_; 
v_desc_456_ = lean_ctor_get(v_s_452_, 0);
v_diagnostics_457_ = lean_ctor_get(v_s_452_, 1);
v_traces_458_ = lean_ctor_get(v_s_452_, 3);
v_isFatal_459_ = lean_ctor_get_uint8(v_s_452_, sizeof(void*)*4);
v_val_460_ = lean_ctor_get(v_infoTree_x3f_455_, 0);
lean_inc(v_val_460_);
lean_inc_ref(v_a_453_);
v___x_461_ = l_Lean_Elab_InfoTree_addTrailing_x3f(v_a_453_, v_val_460_);
if (lean_obj_tag(v___x_461_) == 0)
{
return v_s_452_;
}
else
{
lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_inc_ref(v_traces_458_);
lean_inc_ref(v_diagnostics_457_);
lean_inc_ref(v_desc_456_);
v_isSharedCheck_468_ = !lean_is_exclusive(v_s_452_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; lean_object* v_unused_470_; lean_object* v_unused_471_; lean_object* v_unused_472_; 
v_unused_469_ = lean_ctor_get(v_s_452_, 3);
lean_dec(v_unused_469_);
v_unused_470_ = lean_ctor_get(v_s_452_, 2);
lean_dec(v_unused_470_);
v_unused_471_ = lean_ctor_get(v_s_452_, 1);
lean_dec(v_unused_471_);
v_unused_472_ = lean_ctor_get(v_s_452_, 0);
lean_dec(v_unused_472_);
v___x_463_ = v_s_452_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_dec(v_s_452_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 2, v___x_461_);
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_desc_456_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_diagnostics_457_);
lean_ctor_set(v_reuseFailAlloc_467_, 2, v___x_461_);
lean_ctor_set(v_reuseFailAlloc_467_, 3, v_traces_458_);
lean_ctor_set_uint8(v_reuseFailAlloc_467_, sizeof(void*)*4, v_isFatal_459_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
else
{
return v_s_452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_transform___boxed(lean_object* v_s_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Language_Snapshot_transform(v_s_473_, v_a_474_);
lean_dec_ref(v_a_474_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___lam__0___boxed(lean_object* v_a_476_, lean_object* v_x_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___lam__0(v_a_476_, v_x_477_);
lean_dec_ref(v_a_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0(lean_object* v_a_479_, size_t v_sz_480_, size_t v_i_481_, lean_object* v_bs_482_){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = lean_usize_dec_lt(v_i_481_, v_sz_480_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = l_unsafeCast___redArg(v_bs_482_);
lean_dec_ref(v_bs_482_);
return v___x_484_;
}
else
{
lean_object* v_v_485_; lean_object* v___x_486_; lean_object* v_stx_x3f_487_; lean_object* v_reportingRange_488_; lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v_bs_x27_491_; lean_object* v___x_492_; size_t v___x_493_; size_t v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_v_485_ = lean_array_uget_borrowed(v_bs_482_, v_i_481_);
v___x_486_ = l_unsafeCast___redArg(v_v_485_);
v_stx_x3f_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_stx_x3f_487_);
v_reportingRange_488_ = lean_ctor_get(v___x_486_, 1);
lean_inc(v_reportingRange_488_);
lean_inc_ref(v_a_479_);
v___f_489_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_489_, 0, v_a_479_);
v___x_490_ = lean_unsigned_to_nat(0u);
v_bs_x27_491_ = lean_array_uset(v_bs_482_, v_i_481_, v___x_490_);
v___x_492_ = l_Lean_Language_SnapshotTask_map___redArg(v___x_486_, v___f_489_, v_stx_x3f_487_, v_reportingRange_488_, v___x_483_);
v___x_493_ = ((size_t)1ULL);
v___x_494_ = lean_usize_add(v_i_481_, v___x_493_);
v___x_495_ = l_unsafeCast___redArg(v___x_492_);
lean_dec_ref(v___x_492_);
v___x_496_ = lean_array_uset(v_bs_x27_491_, v_i_481_, v___x_495_);
v_i_481_ = v___x_494_;
v_bs_482_ = v___x_496_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_transform(lean_object* v_t_498_, lean_object* v_a_499_){
_start:
{
uint8_t v___x_500_; 
v___x_500_ = l_Lean_Language_SnapshotTreeTransform_isIdentity(v_a_499_);
if (v___x_500_ == 0)
{
lean_object* v_element_501_; lean_object* v_children_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_515_; 
v_element_501_ = lean_ctor_get(v_t_498_, 0);
v_children_502_ = lean_ctor_get(v_t_498_, 1);
v_isSharedCheck_515_ = !lean_is_exclusive(v_t_498_);
if (v_isSharedCheck_515_ == 0)
{
v___x_504_ = v_t_498_;
v_isShared_505_ = v_isSharedCheck_515_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_children_502_);
lean_inc(v_element_501_);
lean_dec(v_t_498_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_515_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; size_t v_sz_507_; size_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_506_ = l_Lean_Language_Snapshot_transform(v_element_501_, v_a_499_);
v_sz_507_ = lean_array_size(v_children_502_);
v___x_508_ = ((size_t)0ULL);
v___x_509_ = l_unsafeCast___redArg(v_children_502_);
lean_dec_ref(v_children_502_);
v___x_510_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0(v_a_499_, v_sz_507_, v___x_508_, v___x_509_);
v___x_511_ = l_unsafeCast___redArg(v___x_510_);
lean_dec_ref(v___x_510_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v___x_511_);
lean_ctor_set(v___x_504_, 0, v___x_506_);
v___x_513_ = v___x_504_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
else
{
return v_t_498_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___lam__0(lean_object* v_a_516_, lean_object* v_x_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Language_SnapshotTree_transform(v_x_517_, v_a_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object* v_t_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_Language_SnapshotTree_transform(v_t_519_, v_a_520_);
lean_dec_ref(v_a_520_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0___boxed(lean_object* v_a_522_, lean_object* v_sz_523_, lean_object* v_i_524_, lean_object* v_bs_525_){
_start:
{
size_t v_sz_boxed_526_; size_t v_i_boxed_527_; lean_object* v_res_528_; 
v_sz_boxed_526_ = lean_unbox_usize(v_sz_523_);
lean_dec(v_sz_523_);
v_i_boxed_527_ = lean_unbox_usize(v_i_524_);
lean_dec(v_i_524_);
v_res_528_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Language_SnapshotTree_transform_spec__0(v_a_522_, v_sz_boxed_526_, v_i_boxed_527_, v_bs_525_);
lean_dec_ref(v_a_522_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___redArg(lean_object* v_inst_529_, lean_object* v_a_530_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_532_ = lean_apply_2(v_inst_529_, v_a_530_, v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree(lean_object* v_00_u03b1_533_, lean_object* v_inst_534_, lean_object* v_a_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lean_Language_toSnapshotTree___redArg(v_inst_534_, v_a_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedTransformedSnap___redArg(lean_object* v_inst_537_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_539_, 0, v_inst_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instInhabitedTransformedSnap(lean_object* v_00_u03b1_540_, lean_object* v_inst_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Language_instInhabitedTransformedSnap___redArg(v_inst_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0(lean_object* v_inst_543_, lean_object* v_s_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_raw_546_; lean_object* v_transform_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_raw_546_ = lean_ctor_get(v_s_544_, 0);
lean_inc(v_raw_546_);
v_transform_547_ = lean_ctor_get(v_s_544_, 1);
lean_inc_ref(v_transform_547_);
lean_dec_ref(v_s_544_);
lean_inc_ref(v___y_545_);
v___x_548_ = l_Lean_Language_SnapshotTreeTransform_compose(v___y_545_, v_transform_547_);
lean_dec_ref(v_transform_547_);
v___x_549_ = lean_apply_2(v_inst_543_, v_raw_546_, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0___boxed(lean_object* v_inst_550_, lean_object* v_s_551_, lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0(v_inst_550_, v_s_551_, v___y_552_);
lean_dec_ref(v___y_552_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg(lean_object* v_inst_554_){
_start:
{
lean_object* v___f_555_; 
v___f_555_ = lean_alloc_closure((void*)(l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_555_, 0, v_inst_554_);
return v___f_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeTransformedSnap(lean_object* v_00_u03b1_556_, lean_object* v_inst_557_){
_start:
{
lean_object* v___f_558_; 
v___f_558_ = lean_alloc_closure((void*)(l_Lean_Language_instToSnapshotTreeTransformedSnap___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_558_, 0, v_inst_557_);
return v___f_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_TransformedSnap_compose___redArg(lean_object* v_outer_559_, lean_object* v_s_560_){
_start:
{
lean_object* v_raw_561_; lean_object* v_transform_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_570_; 
v_raw_561_ = lean_ctor_get(v_s_560_, 0);
v_transform_562_ = lean_ctor_get(v_s_560_, 1);
v_isSharedCheck_570_ = !lean_is_exclusive(v_s_560_);
if (v_isSharedCheck_570_ == 0)
{
v___x_564_ = v_s_560_;
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_transform_562_);
lean_inc(v_raw_561_);
lean_dec(v_s_560_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v___x_568_; 
v___x_566_ = l_Lean_Language_SnapshotTreeTransform_compose(v_outer_559_, v_transform_562_);
lean_dec_ref(v_transform_562_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_566_);
v___x_568_ = v___x_564_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_raw_561_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v___x_566_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_TransformedSnap_compose(lean_object* v_00_u03b1_571_, lean_object* v_outer_572_, lean_object* v_s_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_Language_TransformedSnap_compose___redArg(v_outer_572_, v_s_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg___lam__0(lean_object* v_f_575_, lean_object* v_a_576_, lean_object* v_x_577_){
_start:
{
lean_object* v___x_578_; 
lean_inc_ref(v_a_576_);
v___x_578_ = lean_apply_2(v_f_575_, v_x_577_, v_a_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg___lam__0___boxed(lean_object* v_f_579_, lean_object* v_a_580_, lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Language_SnapshotTask_transformWith___redArg___lam__0(v_f_579_, v_a_580_, v_x_581_);
lean_dec_ref(v_a_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object* v_t_583_, lean_object* v_f_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_stx_x3f_586_; lean_object* v_reportingRange_587_; lean_object* v___f_588_; uint8_t v___x_589_; lean_object* v___x_590_; 
v_stx_x3f_586_ = lean_ctor_get(v_t_583_, 0);
lean_inc(v_stx_x3f_586_);
v_reportingRange_587_ = lean_ctor_get(v_t_583_, 1);
lean_inc(v_reportingRange_587_);
lean_inc_ref(v_a_585_);
v___f_588_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTask_transformWith___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_588_, 0, v_f_584_);
lean_closure_set(v___f_588_, 1, v_a_585_);
v___x_589_ = 1;
v___x_590_ = l_Lean_Language_SnapshotTask_map___redArg(v_t_583_, v___f_588_, v_stx_x3f_586_, v_reportingRange_587_, v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg___boxed(lean_object* v_t_591_, lean_object* v_f_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_591_, v_f_592_, v_a_593_);
lean_dec_ref(v_a_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith(lean_object* v_00_u03b1_595_, lean_object* v_t_596_, lean_object* v_f_597_, lean_object* v_a_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_596_, v_f_597_, v_a_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transformWith___boxed(lean_object* v_00_u03b1_600_, lean_object* v_t_601_, lean_object* v_f_602_, lean_object* v_a_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Language_SnapshotTask_transformWith(v_00_u03b1_600_, v_t_601_, v_f_602_, v_a_603_);
lean_dec_ref(v_a_603_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___redArg(lean_object* v_inst_605_, lean_object* v_t_606_, lean_object* v_a_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_606_, v_inst_605_, v_a_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___redArg___boxed(lean_object* v_inst_609_, lean_object* v_t_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_Language_SnapshotTask_transform___redArg(v_inst_609_, v_t_610_, v_a_611_);
lean_dec_ref(v_a_611_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform(lean_object* v_00_u03b1_613_, lean_object* v_inst_614_, lean_object* v_t_615_, lean_object* v_a_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_615_, v_inst_614_, v_a_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___boxed(lean_object* v_00_u03b1_618_, lean_object* v_inst_619_, lean_object* v_t_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_Language_SnapshotTask_transform(v_00_u03b1_618_, v_inst_619_, v_t_620_, v_a_621_);
lean_dec_ref(v_a_621_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0(lean_object* v_inst_625_, lean_object* v_x_626_, lean_object* v___y_627_){
_start:
{
if (lean_obj_tag(v_x_626_) == 0)
{
lean_object* v___x_628_; 
lean_dec_ref(v_inst_625_);
v___x_628_ = l_Lean_Language_instInhabitedSnapshotTree_default;
return v___x_628_;
}
else
{
lean_object* v_val_629_; lean_object* v___x_630_; 
v_val_629_ = lean_ctor_get(v_x_626_, 0);
lean_inc(v_val_629_);
lean_dec_ref_known(v_x_626_, 1);
lean_inc_ref(v___y_627_);
v___x_630_ = lean_apply_2(v_inst_625_, v_val_629_, v___y_627_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed(lean_object* v_inst_631_, lean_object* v_x_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0(v_inst_631_, v_x_632_, v___y_633_);
lean_dec_ref(v___y_633_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg(lean_object* v_inst_635_){
_start:
{
lean_object* v___f_636_; 
v___f_636_ = lean_alloc_closure((void*)(l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_636_, 0, v_inst_635_);
return v___f_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeOption(lean_object* v_00_u03b1_637_, lean_object* v_inst_638_){
_start:
{
lean_object* v___f_639_; 
v___f_639_ = lean_alloc_closure((void*)(l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_639_, 0, v_inst_638_);
return v___f_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__1(lean_object* v_inst_640_, lean_object* v___x_641_, lean_object* v___f_642_, lean_object* v_snap_643_){
_start:
{
lean_object* v___x_645_; lean_object* v_children_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_645_ = l_Lean_Language_toSnapshotTree___redArg(v_inst_640_, v_snap_643_);
v_children_646_ = lean_ctor_get(v___x_645_, 1);
lean_inc_ref(v_children_646_);
lean_dec_ref(v___x_645_);
v___x_647_ = lean_unsigned_to_nat(0u);
v___x_648_ = lean_array_get_size(v_children_646_);
v___x_649_ = lean_box(0);
v___x_650_ = lean_nat_dec_lt(v___x_647_, v___x_648_);
if (v___x_650_ == 0)
{
lean_dec_ref(v_children_646_);
lean_dec_ref(v___f_642_);
lean_dec_ref(v___x_641_);
return v___x_649_;
}
else
{
uint8_t v___x_651_; 
v___x_651_ = lean_nat_dec_le(v___x_648_, v___x_648_);
if (v___x_651_ == 0)
{
if (v___x_650_ == 0)
{
lean_dec_ref(v_children_646_);
lean_dec_ref(v___f_642_);
lean_dec_ref(v___x_641_);
return v___x_649_;
}
else
{
size_t v___x_652_; size_t v___x_653_; lean_object* v___x_205__overap_654_; lean_object* v___x_655_; 
v___x_652_ = ((size_t)0ULL);
v___x_653_ = lean_usize_of_nat(v___x_648_);
v___x_205__overap_654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_641_, v___f_642_, v_children_646_, v___x_652_, v___x_653_, v___x_649_);
v___x_655_ = lean_apply_1(v___x_205__overap_654_, lean_box(0));
return v___x_655_;
}
}
else
{
size_t v___x_656_; size_t v___x_657_; lean_object* v___x_208__overap_658_; lean_object* v___x_659_; 
v___x_656_ = ((size_t)0ULL);
v___x_657_ = lean_usize_of_nat(v___x_648_);
v___x_208__overap_658_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_641_, v___f_642_, v_children_646_, v___x_656_, v___x_657_, v___x_649_);
v___x_659_ = lean_apply_1(v___x_208__overap_658_, lean_box(0));
return v___x_659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__1___boxed(lean_object* v_inst_660_, lean_object* v___x_661_, lean_object* v___f_662_, lean_object* v_snap_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__1(v_inst_660_, v___x_661_, v___f_662_, v_snap_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__0___boxed(lean_object* v___f_666_, lean_object* v_x_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__0(v___f_666_, v_x_667_, v___y_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg(lean_object* v_inst_671_, lean_object* v_t_672_){
_start:
{
lean_object* v___x_674_; lean_object* v_cancelTk_x3f_675_; lean_object* v_task_676_; lean_object* v___f_677_; lean_object* v___f_678_; lean_object* v___f_679_; 
v___x_674_ = l_instMonadBaseIO;
v_cancelTk_x3f_675_ = lean_ctor_get(v_t_672_, 2);
lean_inc(v_cancelTk_x3f_675_);
v_task_676_ = lean_ctor_get(v_t_672_, 3);
lean_inc_ref(v_task_676_);
lean_dec_ref(v_t_672_);
v___f_677_ = ((lean_object*)(l_Lean_Language_instToSnapshotTreeSnapshotTree___closed__0));
v___f_678_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_678_, 0, v___f_677_);
v___f_679_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_679_, 0, v_inst_671_);
lean_closure_set(v___f_679_, 1, v___x_674_);
lean_closure_set(v___f_679_, 2, v___f_678_);
if (lean_obj_tag(v_cancelTk_x3f_675_) == 1)
{
lean_object* v_val_684_; lean_object* v___x_685_; 
v_val_684_ = lean_ctor_get(v_cancelTk_x3f_675_, 0);
lean_inc(v_val_684_);
lean_dec_ref_known(v_cancelTk_x3f_675_, 1);
v___x_685_ = l_IO_CancelToken_set(v_val_684_);
lean_dec(v_val_684_);
goto v___jp_680_;
}
else
{
lean_dec(v_cancelTk_x3f_675_);
goto v___jp_680_;
}
v___jp_680_:
{
lean_object* v___x_681_; uint8_t v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = 1;
v___x_683_ = l_BaseIO_chainTask___redArg(v_task_676_, v___f_679_, v___x_681_, v___x_682_);
return v___x_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___lam__0(lean_object* v___f_686_, lean_object* v_x_687_, lean_object* v___y_688_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___f_686_, v___y_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg___boxed(lean_object* v_inst_691_, lean_object* v_t_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v_inst_691_, v_t_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec(lean_object* v_00_u03b1_695_, lean_object* v_inst_696_, lean_object* v_t_697_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v_inst_696_, v_t_697_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_cancelRec___boxed(lean_object* v_00_u03b1_700_, lean_object* v_inst_701_, lean_object* v_t_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_Language_SnapshotTask_cancelRec(v_00_u03b1_700_, v_inst_701_, v_t_702_);
return v_res_704_;
}
}
static lean_object* _init_l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l_Lean_Language_instImpl___closed__1_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_));
v___x_711_ = l_unsafeCast___redArg(v___x_710_);
return v___x_711_;
}
}
static lean_object* _init_l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = lean_obj_once(&l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_, &l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8__once, _init_l_Lean_Language_instImpl___closed__2_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_);
return v___x_712_;
}
}
static lean_object* _init_l_Lean_Language_instTypeNameSnapshotLeaf(void){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedSnapshotLeaf(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = lean_unsigned_to_nat(32u);
v___x_715_ = lean_mk_empty_array_with_capacity(v___x_714_);
lean_dec_ref(v___x_715_);
v___x_716_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__4, &l_Lean_Language_instInhabitedSnapshot___closed__4_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__4);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0(lean_object* v_s_719_, lean_object* v___y_720_){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_721_ = l_Lean_Language_Snapshot_transform(v_s_719_, v___y_720_);
v___x_722_ = ((lean_object*)(l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___closed__0));
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0___boxed(lean_object* v_s_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_Language_instToSnapshotTreeSnapshotLeaf___lam__0(v_s_724_, v___y_725_);
lean_dec_ref(v___y_725_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeDynamicSnapshot___lam__0(lean_object* v_s_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_toSnapshotTreeM_731_; lean_object* v___x_732_; 
v_toSnapshotTreeM_731_ = lean_ctor_get(v_s_729_, 1);
lean_inc_ref(v_toSnapshotTreeM_731_);
lean_dec_ref(v_s_729_);
lean_inc_ref(v___y_730_);
v___x_732_ = lean_apply_1(v_toSnapshotTreeM_731_, v___y_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instToSnapshotTreeDynamicSnapshot___lam__0___boxed(lean_object* v_s_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_Language_instToSnapshotTreeDynamicSnapshot___lam__0(v_s_733_, v___y_734_);
lean_dec_ref(v___y_734_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___redArg(lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_val_740_){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_741_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_738_, v_val_740_);
v___x_742_ = lean_apply_1(v_inst_739_, v_val_740_);
v___x_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___redArg___boxed(lean_object* v_inst_744_, lean_object* v_inst_745_, lean_object* v_val_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_Language_DynamicSnapshot_ofTyped___redArg(v_inst_744_, v_inst_745_, v_val_746_);
lean_dec(v_inst_744_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped(lean_object* v_00_u03b1_748_, lean_object* v_inst_749_, lean_object* v_inst_750_, lean_object* v_val_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_Language_DynamicSnapshot_ofTyped___redArg(v_inst_749_, v_inst_750_, v_val_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___boxed(lean_object* v_00_u03b1_753_, lean_object* v_inst_754_, lean_object* v_inst_755_, lean_object* v_val_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_Language_DynamicSnapshot_ofTyped(v_00_u03b1_753_, v_inst_754_, v_inst_755_, v_val_756_);
lean_dec(v_inst_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f___redArg(lean_object* v_inst_758_, lean_object* v_snap_759_){
_start:
{
lean_object* v_val_760_; lean_object* v___x_761_; 
v_val_760_ = lean_ctor_get(v_snap_759_, 0);
v___x_761_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_760_, v_inst_758_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f___redArg___boxed(lean_object* v_inst_762_, lean_object* v_snap_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_Language_DynamicSnapshot_toTyped_x3f___redArg(v_inst_762_, v_snap_763_);
lean_dec_ref(v_snap_763_);
lean_dec(v_inst_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f(lean_object* v_00_u03b1_765_, lean_object* v_inst_766_, lean_object* v_snap_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = l_Lean_Language_DynamicSnapshot_toTyped_x3f___redArg(v_inst_766_, v_snap_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_toTyped_x3f___boxed(lean_object* v_00_u03b1_769_, lean_object* v_inst_770_, lean_object* v_snap_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_Language_DynamicSnapshot_toTyped_x3f(v_00_u03b1_769_, v_inst_770_, v_snap_771_);
lean_dec_ref(v_snap_771_);
lean_dec(v_inst_770_);
return v_res_772_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedDynamicSnapshot___closed__2(void){
_start:
{
uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = 1;
v___x_779_ = ((lean_object*)(l_Lean_Language_instInhabitedDynamicSnapshot___closed__1));
v___x_780_ = l_Lean_Name_toString(v___x_779_, v___x_778_);
return v___x_780_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedDynamicSnapshot___closed__3(void){
_start:
{
uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_781_ = 0;
v___x_782_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__3, &l_Lean_Language_instInhabitedSnapshot___closed__3_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__3);
v___x_783_ = lean_box(0);
v___x_784_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_785_ = lean_obj_once(&l_Lean_Language_instInhabitedDynamicSnapshot___closed__2, &l_Lean_Language_instInhabitedDynamicSnapshot___closed__2_once, _init_l_Lean_Language_instInhabitedDynamicSnapshot___closed__2);
v___x_786_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v___x_784_);
lean_ctor_set(v___x_786_, 2, v___x_783_);
lean_ctor_set(v___x_786_, 3, v___x_782_);
lean_ctor_set_uint8(v___x_786_, sizeof(void*)*4, v___x_781_);
return v___x_786_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedDynamicSnapshot___closed__4(void){
_start:
{
lean_object* v___x_787_; lean_object* v___f_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_787_ = lean_obj_once(&l_Lean_Language_instInhabitedDynamicSnapshot___closed__3, &l_Lean_Language_instInhabitedDynamicSnapshot___closed__3_once, _init_l_Lean_Language_instInhabitedDynamicSnapshot___closed__3);
v___f_788_ = ((lean_object*)(l_Lean_Language_instToSnapshotTreeSnapshotLeaf___closed__0));
v___x_789_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
v___x_790_ = l_Lean_Language_DynamicSnapshot_ofTyped___redArg(v___x_789_, v___f_788_, v___x_787_);
return v___x_790_;
}
}
static lean_object* _init_l_Lean_Language_instInhabitedDynamicSnapshot(void){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = lean_obj_once(&l_Lean_Language_instInhabitedDynamicSnapshot___closed__4, &l_Lean_Language_instInhabitedDynamicSnapshot___closed__4_once, _init_l_Lean_Language_instInhabitedDynamicSnapshot___closed__4);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM___redArg___lam__1(lean_object* v_toApplicative_792_, lean_object* v_children_793_, lean_object* v_inst_794_, lean_object* v___f_795_, lean_object* v_____r_796_){
_start:
{
lean_object* v_toPure_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_toPure_797_ = lean_ctor_get(v_toApplicative_792_, 1);
lean_inc(v_toPure_797_);
lean_dec_ref(v_toApplicative_792_);
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = lean_array_get_size(v_children_793_);
v___x_800_ = lean_box(0);
v___x_801_ = lean_nat_dec_lt(v___x_798_, v___x_799_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; 
lean_dec(v___f_795_);
lean_dec_ref(v_inst_794_);
lean_dec_ref(v_children_793_);
v___x_802_ = lean_apply_2(v_toPure_797_, lean_box(0), v___x_800_);
return v___x_802_;
}
else
{
uint8_t v___x_803_; 
v___x_803_ = lean_nat_dec_le(v___x_799_, v___x_799_);
if (v___x_803_ == 0)
{
if (v___x_801_ == 0)
{
lean_object* v___x_804_; 
lean_dec(v___f_795_);
lean_dec_ref(v_inst_794_);
lean_dec_ref(v_children_793_);
v___x_804_ = lean_apply_2(v_toPure_797_, lean_box(0), v___x_800_);
return v___x_804_;
}
else
{
size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; 
lean_dec(v_toPure_797_);
v___x_805_ = ((size_t)0ULL);
v___x_806_ = lean_usize_of_nat(v___x_799_);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_794_, v___f_795_, v_children_793_, v___x_805_, v___x_806_, v___x_800_);
return v___x_807_;
}
}
else
{
size_t v___x_808_; size_t v___x_809_; lean_object* v___x_810_; 
lean_dec(v_toPure_797_);
v___x_808_ = ((size_t)0ULL);
v___x_809_ = lean_usize_of_nat(v___x_799_);
v___x_810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_794_, v___f_795_, v_children_793_, v___x_808_, v___x_809_, v___x_800_);
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM___redArg(lean_object* v_inst_811_, lean_object* v_s_812_, lean_object* v_f_813_){
_start:
{
lean_object* v_toApplicative_814_; lean_object* v_toBind_815_; lean_object* v_element_816_; lean_object* v_children_817_; lean_object* v___f_818_; lean_object* v___f_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_toApplicative_814_ = lean_ctor_get(v_inst_811_, 0);
lean_inc_ref(v_toApplicative_814_);
v_toBind_815_ = lean_ctor_get(v_inst_811_, 1);
lean_inc(v_toBind_815_);
v_element_816_ = lean_ctor_get(v_s_812_, 0);
lean_inc_ref(v_element_816_);
v_children_817_ = lean_ctor_get(v_s_812_, 1);
lean_inc_ref(v_children_817_);
lean_dec_ref(v_s_812_);
lean_inc(v_f_813_);
lean_inc_ref(v_inst_811_);
v___f_818_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_forM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_818_, 0, v_inst_811_);
lean_closure_set(v___f_818_, 1, v_f_813_);
v___f_819_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_forM___redArg___lam__1), 5, 4);
lean_closure_set(v___f_819_, 0, v_toApplicative_814_);
lean_closure_set(v___f_819_, 1, v_children_817_);
lean_closure_set(v___f_819_, 2, v_inst_811_);
lean_closure_set(v___f_819_, 3, v___f_818_);
v___x_820_ = lean_apply_1(v_f_813_, v_element_816_);
v___x_821_ = lean_apply_4(v_toBind_815_, lean_box(0), lean_box(0), v___x_820_, v___f_819_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM___redArg___lam__0(lean_object* v_inst_822_, lean_object* v_f_823_, lean_object* v_x_824_, lean_object* v___y_825_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = l_Lean_Language_SnapshotTask_get___redArg(v___y_825_);
v___x_827_ = l_Lean_Language_SnapshotTree_forM___redArg(v_inst_822_, v___x_826_, v_f_823_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_forM(lean_object* v_m_828_, lean_object* v_inst_829_, lean_object* v_s_830_, lean_object* v_f_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l_Lean_Language_SnapshotTree_forM___redArg(v_inst_829_, v_s_830_, v_f_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___redArg___lam__1(lean_object* v_toApplicative_833_, lean_object* v_children_834_, lean_object* v_inst_835_, lean_object* v___f_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_toPure_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v_toPure_838_ = lean_ctor_get(v_toApplicative_833_, 1);
lean_inc(v_toPure_838_);
lean_dec_ref(v_toApplicative_833_);
v___x_839_ = lean_unsigned_to_nat(0u);
v___x_840_ = lean_array_get_size(v_children_834_);
v___x_841_ = lean_nat_dec_lt(v___x_839_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
lean_dec(v___f_836_);
lean_dec_ref(v_inst_835_);
lean_dec_ref(v_children_834_);
v___x_842_ = lean_apply_2(v_toPure_838_, lean_box(0), v_a_837_);
return v___x_842_;
}
else
{
uint8_t v___x_843_; 
v___x_843_ = lean_nat_dec_le(v___x_840_, v___x_840_);
if (v___x_843_ == 0)
{
if (v___x_841_ == 0)
{
lean_object* v___x_844_; 
lean_dec(v___f_836_);
lean_dec_ref(v_inst_835_);
lean_dec_ref(v_children_834_);
v___x_844_ = lean_apply_2(v_toPure_838_, lean_box(0), v_a_837_);
return v___x_844_;
}
else
{
size_t v___x_845_; size_t v___x_846_; lean_object* v___x_847_; 
lean_dec(v_toPure_838_);
v___x_845_ = ((size_t)0ULL);
v___x_846_ = lean_usize_of_nat(v___x_840_);
v___x_847_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_835_, v___f_836_, v_children_834_, v___x_845_, v___x_846_, v_a_837_);
return v___x_847_;
}
}
else
{
size_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; 
lean_dec(v_toPure_838_);
v___x_848_ = ((size_t)0ULL);
v___x_849_ = lean_usize_of_nat(v___x_840_);
v___x_850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_835_, v___f_836_, v_children_834_, v___x_848_, v___x_849_, v_a_837_);
return v___x_850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___redArg(lean_object* v_inst_851_, lean_object* v_s_852_, lean_object* v_f_853_, lean_object* v_init_854_){
_start:
{
lean_object* v_toApplicative_855_; lean_object* v_toBind_856_; lean_object* v_element_857_; lean_object* v_children_858_; lean_object* v___f_859_; lean_object* v___f_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_toApplicative_855_ = lean_ctor_get(v_inst_851_, 0);
lean_inc_ref(v_toApplicative_855_);
v_toBind_856_ = lean_ctor_get(v_inst_851_, 1);
lean_inc(v_toBind_856_);
v_element_857_ = lean_ctor_get(v_s_852_, 0);
lean_inc_ref(v_element_857_);
v_children_858_ = lean_ctor_get(v_s_852_, 1);
lean_inc_ref(v_children_858_);
lean_dec_ref(v_s_852_);
lean_inc(v_f_853_);
lean_inc_ref(v_inst_851_);
v___f_859_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_859_, 0, v_inst_851_);
lean_closure_set(v___f_859_, 1, v_f_853_);
v___f_860_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldM___redArg___lam__1), 5, 4);
lean_closure_set(v___f_860_, 0, v_toApplicative_855_);
lean_closure_set(v___f_860_, 1, v_children_858_);
lean_closure_set(v___f_860_, 2, v_inst_851_);
lean_closure_set(v___f_860_, 3, v___f_859_);
v___x_861_ = lean_apply_2(v_f_853_, v_init_854_, v_element_857_);
v___x_862_ = lean_apply_4(v_toBind_856_, lean_box(0), lean_box(0), v___x_861_, v___f_860_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___redArg___lam__0(lean_object* v_inst_863_, lean_object* v_f_864_, lean_object* v_a_865_, lean_object* v_snap_866_){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = l_Lean_Language_SnapshotTask_get___redArg(v_snap_866_);
v___x_868_ = l_Lean_Language_SnapshotTree_foldM___redArg(v_inst_863_, v___x_867_, v_f_864_, v_a_865_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM(lean_object* v_m_869_, lean_object* v_00_u03b1_870_, lean_object* v_inst_871_, lean_object* v_s_872_, lean_object* v_f_873_, lean_object* v_init_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lean_Language_SnapshotTree_foldM___redArg(v_inst_871_, v_s_872_, v_f_873_, v_init_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__spec__0(lean_object* v_name_876_, lean_object* v_decl_877_, lean_object* v_ref_878_){
_start:
{
lean_object* v_defValue_880_; lean_object* v_descr_881_; lean_object* v_deprecation_x3f_882_; lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_defValue_880_ = lean_ctor_get(v_decl_877_, 0);
v_descr_881_ = lean_ctor_get(v_decl_877_, 1);
v_deprecation_x3f_882_ = lean_ctor_get(v_decl_877_, 2);
v___x_883_ = lean_alloc_ctor(1, 0, 1);
v___x_884_ = lean_unbox(v_defValue_880_);
lean_ctor_set_uint8(v___x_883_, 0, v___x_884_);
lean_inc(v_deprecation_x3f_882_);
lean_inc_ref(v_descr_881_);
lean_inc_n(v_name_876_, 2);
v___x_885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_885_, 0, v_name_876_);
lean_ctor_set(v___x_885_, 1, v_ref_878_);
lean_ctor_set(v___x_885_, 2, v___x_883_);
lean_ctor_set(v___x_885_, 3, v_descr_881_);
lean_ctor_set(v___x_885_, 4, v_deprecation_x3f_882_);
v___x_886_ = lean_register_option(v_name_876_, v___x_885_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_894_; 
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_894_ == 0)
{
lean_object* v_unused_895_; 
v_unused_895_ = lean_ctor_get(v___x_886_, 0);
lean_dec(v_unused_895_);
v___x_888_ = v___x_886_;
v_isShared_889_ = v_isSharedCheck_894_;
goto v_resetjp_887_;
}
else
{
lean_dec(v___x_886_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_894_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v___x_892_; 
lean_inc(v_defValue_880_);
v___x_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_890_, 0, v_name_876_);
lean_ctor_set(v___x_890_, 1, v_defValue_880_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_890_);
v___x_892_ = v___x_888_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_name_876_);
v_a_896_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_886_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_886_);
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
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_904_, lean_object* v_decl_905_, lean_object* v_ref_906_, lean_object* v_a_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__spec__0(v_name_904_, v_decl_905_, v_ref_906_);
lean_dec_ref(v_decl_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_923_ = ((lean_object*)(l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_));
v___x_924_ = ((lean_object*)(l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_));
v___x_925_ = ((lean_object*)(l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_));
v___x_926_ = l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4__spec__0(v___x_923_, v___x_924_, v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4____boxed(lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_();
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__spec__0(lean_object* v_name_929_, lean_object* v_decl_930_, lean_object* v_ref_931_){
_start:
{
lean_object* v_defValue_933_; lean_object* v_descr_934_; lean_object* v_deprecation_x3f_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v_defValue_933_ = lean_ctor_get(v_decl_930_, 0);
v_descr_934_ = lean_ctor_get(v_decl_930_, 1);
v_deprecation_x3f_935_ = lean_ctor_get(v_decl_930_, 2);
lean_inc(v_defValue_933_);
v___x_936_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_936_, 0, v_defValue_933_);
lean_inc(v_deprecation_x3f_935_);
lean_inc_ref(v_descr_934_);
lean_inc_n(v_name_929_, 2);
v___x_937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_937_, 0, v_name_929_);
lean_ctor_set(v___x_937_, 1, v_ref_931_);
lean_ctor_set(v___x_937_, 2, v___x_936_);
lean_ctor_set(v___x_937_, 3, v_descr_934_);
lean_ctor_set(v___x_937_, 4, v_deprecation_x3f_935_);
v___x_938_ = lean_register_option(v_name_929_, v___x_937_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_946_; 
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_946_ == 0)
{
lean_object* v_unused_947_; 
v_unused_947_ = lean_ctor_get(v___x_938_, 0);
lean_dec(v_unused_947_);
v___x_940_ = v___x_938_;
v_isShared_941_ = v_isSharedCheck_946_;
goto v_resetjp_939_;
}
else
{
lean_dec(v___x_938_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_946_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_944_; 
lean_inc(v_defValue_933_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v_name_929_);
lean_ctor_set(v___x_942_, 1, v_defValue_933_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 0, v___x_942_);
v___x_944_ = v___x_940_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec(v_name_929_);
v_a_948_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_938_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_938_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_956_, lean_object* v_decl_957_, lean_object* v_ref_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__spec__0(v_name_956_, v_decl_957_, v_ref_958_);
lean_dec_ref(v_decl_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_974_ = ((lean_object*)(l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__1_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_));
v___x_975_ = ((lean_object*)(l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__3_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_));
v___x_976_ = ((lean_object*)(l___private_Lean_Language_Basic_0__Lean_Language_initFn___closed__4_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_));
v___x_977_ = l_Lean_Option_register___at___00__private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4__spec__0(v___x_974_, v___x_975_, v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4____boxed(lean_object* v_a_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_();
return v_res_979_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__0(lean_object* v_opts_980_, lean_object* v_opt_981_){
_start:
{
lean_object* v_name_982_; lean_object* v_defValue_983_; lean_object* v_map_984_; lean_object* v___x_985_; 
v_name_982_ = lean_ctor_get(v_opt_981_, 0);
v_defValue_983_ = lean_ctor_get(v_opt_981_, 1);
v_map_984_ = lean_ctor_get(v_opts_980_, 0);
v___x_985_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_984_, v_name_982_);
if (lean_obj_tag(v___x_985_) == 0)
{
uint8_t v___x_986_; 
v___x_986_ = lean_unbox(v_defValue_983_);
return v___x_986_;
}
else
{
lean_object* v_val_987_; 
v_val_987_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_val_987_);
lean_dec_ref_known(v___x_985_, 1);
if (lean_obj_tag(v_val_987_) == 1)
{
uint8_t v_v_988_; 
v_v_988_ = lean_ctor_get_uint8(v_val_987_, 0);
lean_dec_ref_known(v_val_987_, 0);
return v_v_988_;
}
else
{
uint8_t v___x_989_; 
lean_dec(v_val_987_);
v___x_989_ = lean_unbox(v_defValue_983_);
return v___x_989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__0___boxed(lean_object* v_opts_990_, lean_object* v_opt_991_){
_start:
{
uint8_t v_res_992_; lean_object* v_r_993_; 
v_res_992_ = l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__0(v_opts_990_, v_opt_991_);
lean_dec_ref(v_opt_991_);
lean_dec_ref(v_opts_990_);
v_r_993_ = lean_box(v_res_992_);
return v_r_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__1(lean_object* v_opts_994_, lean_object* v_opt_995_){
_start:
{
lean_object* v_name_996_; lean_object* v_defValue_997_; lean_object* v_map_998_; lean_object* v___x_999_; 
v_name_996_ = lean_ctor_get(v_opt_995_, 0);
v_defValue_997_ = lean_ctor_get(v_opt_995_, 1);
v_map_998_ = lean_ctor_get(v_opts_994_, 0);
v___x_999_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_998_, v_name_996_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_inc(v_defValue_997_);
return v_defValue_997_;
}
else
{
lean_object* v_val_1000_; 
v_val_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_val_1000_);
lean_dec_ref_known(v___x_999_, 1);
if (lean_obj_tag(v_val_1000_) == 3)
{
lean_object* v_v_1001_; 
v_v_1001_ = lean_ctor_get(v_val_1000_, 0);
lean_inc(v_v_1001_);
lean_dec_ref_known(v_val_1000_, 1);
return v_v_1001_;
}
else
{
lean_dec(v_val_1000_);
lean_inc(v_defValue_997_);
return v_defValue_997_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__1___boxed(lean_object* v_opts_1002_, lean_object* v_opt_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__1(v_opts_1002_, v_opt_1003_);
lean_dec_ref(v_opt_1003_);
lean_dec_ref(v_opts_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2(lean_object* v_s_1005_){
_start:
{
lean_object* v___x_1007_; lean_object* v_putStr_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_get_stdout();
v_putStr_1008_ = lean_ctor_get(v___x_1007_, 4);
lean_inc_ref(v_putStr_1008_);
lean_dec_ref(v___x_1007_);
v___x_1009_ = lean_apply_2(v_putStr_1008_, v_s_1005_, lean_box(0));
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2___boxed(lean_object* v_s_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2(v_s_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(lean_object* v_s_1013_){
_start:
{
uint32_t v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = 10;
v___x_1016_ = lean_string_push(v_s_1013_, v___x_1015_);
v___x_1017_ = l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2(v___x_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3___boxed(lean_object* v_s_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v_s_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(lean_object* v_opts_1023_, uint8_t v_json_1024_, uint8_t v_includeEndPos_1025_, lean_object* v_severityOverrides_1026_, lean_object* v_as_1027_, size_t v_i_1028_, size_t v_stop_1029_, lean_object* v_b_1030_){
_start:
{
lean_object* v_a_1033_; uint8_t v___y_1038_; lean_object* v___y_1039_; uint8_t v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; uint8_t v_isSilent_1054_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; uint8_t v___y_1080_; uint8_t v___x_1104_; lean_object* v___y_1106_; lean_object* v___y_1107_; lean_object* v___y_1115_; uint8_t v_severity_1116_; 
v___x_1104_ = lean_usize_dec_eq(v_i_1028_, v_stop_1029_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1119_; lean_object* v_fileName_1120_; lean_object* v_pos_1121_; lean_object* v_endPos_1122_; uint8_t v_keepFullRange_1123_; uint8_t v_isSilent_1124_; lean_object* v_caption_1125_; lean_object* v_data_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1119_ = lean_array_uget(v_as_1027_, v_i_1028_);
v_fileName_1120_ = lean_ctor_get(v___x_1119_, 0);
v_pos_1121_ = lean_ctor_get(v___x_1119_, 1);
v_endPos_1122_ = lean_ctor_get(v___x_1119_, 2);
v_keepFullRange_1123_ = lean_ctor_get_uint8(v___x_1119_, sizeof(void*)*5);
v_isSilent_1124_ = lean_ctor_get_uint8(v___x_1119_, sizeof(void*)*5 + 2);
v_caption_1125_ = lean_ctor_get(v___x_1119_, 3);
v_data_1126_ = lean_ctor_get(v___x_1119_, 4);
v___x_1127_ = l_Lean_MessageData_kind(v_data_1126_);
v___x_1128_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_severityOverrides_1026_, v___x_1127_);
lean_dec(v___x_1127_);
if (lean_obj_tag(v___x_1128_) == 1)
{
lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1138_; 
lean_inc(v_data_1126_);
lean_inc_ref(v_caption_1125_);
lean_inc(v_endPos_1122_);
lean_inc_ref(v_pos_1121_);
lean_inc_ref(v_fileName_1120_);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1138_ == 0)
{
lean_object* v_unused_1139_; lean_object* v_unused_1140_; lean_object* v_unused_1141_; lean_object* v_unused_1142_; lean_object* v_unused_1143_; 
v_unused_1139_ = lean_ctor_get(v___x_1119_, 4);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v___x_1119_, 3);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v___x_1119_, 2);
lean_dec(v_unused_1141_);
v_unused_1142_ = lean_ctor_get(v___x_1119_, 1);
lean_dec(v_unused_1142_);
v_unused_1143_ = lean_ctor_get(v___x_1119_, 0);
lean_dec(v_unused_1143_);
v___x_1130_ = v___x_1119_;
v_isShared_1131_ = v_isSharedCheck_1138_;
goto v_resetjp_1129_;
}
else
{
lean_dec(v___x_1119_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1138_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v_val_1132_; lean_object* v___x_1134_; 
v_val_1132_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_val_1132_);
lean_dec_ref_known(v___x_1128_, 1);
if (v_isShared_1131_ == 0)
{
v___x_1134_ = v___x_1130_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_fileName_1120_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_pos_1121_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_endPos_1122_);
lean_ctor_set(v_reuseFailAlloc_1137_, 3, v_caption_1125_);
lean_ctor_set(v_reuseFailAlloc_1137_, 4, v_data_1126_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*5, v_keepFullRange_1123_);
v___x_1134_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
uint8_t v___x_1135_; uint8_t v___x_1136_; 
v___x_1135_ = lean_unbox(v_val_1132_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*5 + 1, v___x_1135_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*5 + 2, v_isSilent_1124_);
v___x_1136_ = lean_unbox(v_val_1132_);
lean_dec(v_val_1132_);
v___y_1115_ = v___x_1134_;
v_severity_1116_ = v___x_1136_;
goto v___jp_1114_;
}
}
}
else
{
uint8_t v_severity_1144_; 
lean_dec(v___x_1128_);
v_severity_1144_ = lean_ctor_get_uint8(v___x_1119_, sizeof(void*)*5 + 1);
v___y_1115_ = v___x_1119_;
v_severity_1116_ = v_severity_1144_;
goto v___jp_1114_;
}
}
else
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1145_, 0, v_b_1030_);
return v___x_1145_;
}
v___jp_1032_:
{
size_t v___x_1034_; size_t v___x_1035_; 
v___x_1034_ = ((size_t)1ULL);
v___x_1035_ = lean_usize_add(v_i_1028_, v___x_1034_);
v_i_1028_ = v___x_1035_;
v_b_1030_ = v_a_1033_;
goto _start;
}
v___jp_1037_:
{
if (v___y_1038_ == 0)
{
v_a_1033_ = v___y_1039_;
goto v___jp_1032_;
}
else
{
uint8_t v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = 1;
v___x_1041_ = lean_io_exit(v___x_1040_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_dec_ref_known(v___x_1041_, 1);
v_a_1033_ = v___y_1039_;
goto v___jp_1032_;
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec(v___y_1039_);
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1041_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
v___jp_1050_:
{
if (v_isSilent_1054_ == 0)
{
if (v_json_1024_ == 0)
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = l_Lean_Message_toString(v___y_1053_, v_includeEndPos_1025_);
v___x_1056_ = l_IO_print___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__2(v___x_1055_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_dec_ref_known(v___x_1056_, 1);
v___y_1038_ = v___y_1051_;
v___y_1039_ = v___y_1052_;
goto v___jp_1037_;
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec(v___y_1052_);
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
else
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1065_ = l_Lean_Message_toJson(v___y_1053_);
v___x_1066_ = l_Lean_Json_compress(v___x_1065_);
v___x_1067_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v___x_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_dec_ref_known(v___x_1067_, 1);
v___y_1038_ = v___y_1051_;
v___y_1039_ = v___y_1052_;
goto v___jp_1037_;
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec(v___y_1052_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_1053_);
v___y_1038_ = v___y_1051_;
v___y_1039_ = v___y_1052_;
goto v___jp_1037_;
}
}
v___jp_1076_:
{
if (v___y_1080_ == 0)
{
uint8_t v_isSilent_1081_; 
lean_dec(v___y_1079_);
v_isSilent_1081_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*5 + 2);
v___y_1051_ = v___y_1080_;
v___y_1052_ = v___y_1078_;
v___y_1053_ = v___y_1077_;
v_isSilent_1054_ = v_isSilent_1081_;
goto v___jp_1050_;
}
else
{
lean_object* v_fileName_1082_; lean_object* v_pos_1083_; lean_object* v_endPos_1084_; uint8_t v_keepFullRange_1085_; uint8_t v_isSilent_1086_; lean_object* v_caption_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1102_; 
v_fileName_1082_ = lean_ctor_get(v___y_1077_, 0);
v_pos_1083_ = lean_ctor_get(v___y_1077_, 1);
v_endPos_1084_ = lean_ctor_get(v___y_1077_, 2);
v_keepFullRange_1085_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*5);
v_isSilent_1086_ = lean_ctor_get_uint8(v___y_1077_, sizeof(void*)*5 + 2);
v_caption_1087_ = lean_ctor_get(v___y_1077_, 3);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___y_1077_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; 
v_unused_1103_ = lean_ctor_get(v___y_1077_, 4);
lean_dec(v_unused_1103_);
v___x_1089_ = v___y_1077_;
v_isShared_1090_ = v_isSharedCheck_1102_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_caption_1087_);
lean_inc(v_endPos_1084_);
lean_inc(v_pos_1083_);
lean_inc(v_fileName_1082_);
lean_dec(v___y_1077_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1102_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
uint8_t v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1091_ = 2;
v___x_1092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__0));
v___x_1093_ = l_Nat_reprFast(v___y_1079_);
v___x_1094_ = lean_string_append(v___x_1092_, v___x_1093_);
lean_dec_ref(v___x_1093_);
v___x_1095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___closed__1));
v___x_1096_ = lean_string_append(v___x_1094_, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
v___x_1098_ = l_Lean_MessageData_ofFormat(v___x_1097_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 4, v___x_1098_);
v___x_1100_ = v___x_1089_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_fileName_1082_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_pos_1083_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_endPos_1084_);
lean_ctor_set(v_reuseFailAlloc_1101_, 3, v_caption_1087_);
lean_ctor_set(v_reuseFailAlloc_1101_, 4, v___x_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1101_, sizeof(void*)*5, v_keepFullRange_1085_);
lean_ctor_set_uint8(v_reuseFailAlloc_1101_, sizeof(void*)*5 + 2, v_isSilent_1086_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*5 + 1, v___x_1091_);
v___y_1051_ = v___y_1080_;
v___y_1052_ = v___y_1078_;
v___y_1053_ = v___x_1100_;
v_isSilent_1054_ = v_isSilent_1086_;
goto v___jp_1050_;
}
}
}
}
v___jp_1105_:
{
lean_object* v_numErrors_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v_numErrors_1108_ = lean_nat_add(v_b_1030_, v___y_1107_);
lean_dec(v_b_1030_);
v___x_1109_ = l_Lean_Language_maxErrors;
v___x_1110_ = l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__1(v_opts_1023_, v___x_1109_);
v___x_1111_ = lean_unsigned_to_nat(0u);
v___x_1112_ = lean_nat_dec_eq(v___x_1110_, v___x_1111_);
if (v___x_1112_ == 0)
{
uint8_t v___x_1113_; 
v___x_1113_ = lean_nat_dec_lt(v___x_1110_, v_numErrors_1108_);
v___y_1077_ = v___y_1106_;
v___y_1078_ = v_numErrors_1108_;
v___y_1079_ = v___x_1110_;
v___y_1080_ = v___x_1113_;
goto v___jp_1076_;
}
else
{
v___y_1077_ = v___y_1106_;
v___y_1078_ = v_numErrors_1108_;
v___y_1079_ = v___x_1110_;
v___y_1080_ = v___x_1104_;
goto v___jp_1076_;
}
}
v___jp_1114_:
{
if (v_severity_1116_ == 2)
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_unsigned_to_nat(1u);
v___y_1106_ = v___y_1115_;
v___y_1107_ = v___x_1117_;
goto v___jp_1105_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_unsigned_to_nat(0u);
v___y_1106_ = v___y_1115_;
v___y_1107_ = v___x_1118_;
goto v___jp_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5___boxed(lean_object* v_opts_1146_, lean_object* v_json_1147_, lean_object* v_includeEndPos_1148_, lean_object* v_severityOverrides_1149_, lean_object* v_as_1150_, lean_object* v_i_1151_, lean_object* v_stop_1152_, lean_object* v_b_1153_, lean_object* v___y_1154_){
_start:
{
uint8_t v_json_boxed_1155_; uint8_t v_includeEndPos_boxed_1156_; size_t v_i_boxed_1157_; size_t v_stop_boxed_1158_; lean_object* v_res_1159_; 
v_json_boxed_1155_ = lean_unbox(v_json_1147_);
v_includeEndPos_boxed_1156_ = lean_unbox(v_includeEndPos_1148_);
v_i_boxed_1157_ = lean_unbox_usize(v_i_1151_);
lean_dec(v_i_1151_);
v_stop_boxed_1158_ = lean_unbox_usize(v_stop_1152_);
lean_dec(v_stop_1152_);
v_res_1159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(v_opts_1146_, v_json_boxed_1155_, v_includeEndPos_boxed_1156_, v_severityOverrides_1149_, v_as_1150_, v_i_boxed_1157_, v_stop_boxed_1158_, v_b_1153_);
lean_dec_ref(v_as_1150_);
lean_dec(v_severityOverrides_1149_);
lean_dec_ref(v_opts_1146_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6(lean_object* v_opts_1160_, uint8_t v_json_1161_, uint8_t v_includeEndPos_1162_, lean_object* v_severityOverrides_1163_, lean_object* v_x_1164_, lean_object* v_x_1165_){
_start:
{
if (lean_obj_tag(v_x_1164_) == 0)
{
lean_object* v_cs_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1180_; 
v_cs_1167_ = lean_ctor_get(v_x_1164_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_x_1164_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1169_ = v_x_1164_;
v_isShared_1170_ = v_isSharedCheck_1180_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_cs_1167_);
lean_dec(v_x_1164_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1180_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1171_ = lean_unsigned_to_nat(0u);
v___x_1172_ = lean_array_get_size(v_cs_1167_);
v___x_1173_ = lean_nat_dec_lt(v___x_1171_, v___x_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1175_; 
lean_dec_ref(v_cs_1167_);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v_x_1165_);
v___x_1175_ = v___x_1169_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_x_1165_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
else
{
size_t v___x_1177_; size_t v___x_1178_; lean_object* v___x_1179_; 
lean_del_object(v___x_1169_);
v___x_1177_ = ((size_t)0ULL);
v___x_1178_ = lean_usize_of_nat(v___x_1172_);
v___x_1179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5(v_opts_1160_, v_json_1161_, v_includeEndPos_1162_, v_severityOverrides_1163_, v_cs_1167_, v___x_1177_, v___x_1178_, v_x_1165_);
lean_dec_ref(v_cs_1167_);
return v___x_1179_;
}
}
}
else
{
lean_object* v_vs_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1194_; 
v_vs_1181_ = lean_ctor_get(v_x_1164_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_x_1164_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1183_ = v_x_1164_;
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_vs_1181_);
lean_dec(v_x_1164_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1186_ = lean_array_get_size(v_vs_1181_);
v___x_1187_ = lean_nat_dec_lt(v___x_1185_, v___x_1186_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1189_; 
lean_dec_ref(v_vs_1181_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set_tag(v___x_1183_, 0);
lean_ctor_set(v___x_1183_, 0, v_x_1165_);
v___x_1189_ = v___x_1183_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_x_1165_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
else
{
size_t v___x_1191_; size_t v___x_1192_; lean_object* v___x_1193_; 
lean_del_object(v___x_1183_);
v___x_1191_ = ((size_t)0ULL);
v___x_1192_ = lean_usize_of_nat(v___x_1186_);
v___x_1193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(v_opts_1160_, v_json_1161_, v_includeEndPos_1162_, v_severityOverrides_1163_, v_vs_1181_, v___x_1191_, v___x_1192_, v_x_1165_);
lean_dec_ref(v_vs_1181_);
return v___x_1193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5(lean_object* v_opts_1195_, uint8_t v_json_1196_, uint8_t v_includeEndPos_1197_, lean_object* v_severityOverrides_1198_, lean_object* v_as_1199_, size_t v_i_1200_, size_t v_stop_1201_, lean_object* v_b_1202_){
_start:
{
uint8_t v___x_1204_; 
v___x_1204_ = lean_usize_dec_eq(v_i_1200_, v_stop_1201_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = lean_array_uget_borrowed(v_as_1199_, v_i_1200_);
lean_inc(v___x_1205_);
v___x_1206_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6(v_opts_1195_, v_json_1196_, v_includeEndPos_1197_, v_severityOverrides_1198_, v___x_1205_, v_b_1202_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; size_t v___x_1208_; size_t v___x_1209_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1206_, 1);
v___x_1208_ = ((size_t)1ULL);
v___x_1209_ = lean_usize_add(v_i_1200_, v___x_1208_);
v_i_1200_ = v___x_1209_;
v_b_1202_ = v_a_1207_;
goto _start;
}
else
{
return v___x_1206_;
}
}
else
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1211_, 0, v_b_1202_);
return v___x_1211_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5___boxed(lean_object* v_opts_1212_, lean_object* v_json_1213_, lean_object* v_includeEndPos_1214_, lean_object* v_severityOverrides_1215_, lean_object* v_as_1216_, lean_object* v_i_1217_, lean_object* v_stop_1218_, lean_object* v_b_1219_, lean_object* v___y_1220_){
_start:
{
uint8_t v_json_boxed_1221_; uint8_t v_includeEndPos_boxed_1222_; size_t v_i_boxed_1223_; size_t v_stop_boxed_1224_; lean_object* v_res_1225_; 
v_json_boxed_1221_ = lean_unbox(v_json_1213_);
v_includeEndPos_boxed_1222_ = lean_unbox(v_includeEndPos_1214_);
v_i_boxed_1223_ = lean_unbox_usize(v_i_1217_);
lean_dec(v_i_1217_);
v_stop_boxed_1224_ = lean_unbox_usize(v_stop_1218_);
lean_dec(v_stop_1218_);
v_res_1225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5(v_opts_1212_, v_json_boxed_1221_, v_includeEndPos_boxed_1222_, v_severityOverrides_1215_, v_as_1216_, v_i_boxed_1223_, v_stop_boxed_1224_, v_b_1219_);
lean_dec_ref(v_as_1216_);
lean_dec(v_severityOverrides_1215_);
lean_dec_ref(v_opts_1212_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6___boxed(lean_object* v_opts_1226_, lean_object* v_json_1227_, lean_object* v_includeEndPos_1228_, lean_object* v_severityOverrides_1229_, lean_object* v_x_1230_, lean_object* v_x_1231_, lean_object* v___y_1232_){
_start:
{
uint8_t v_json_boxed_1233_; uint8_t v_includeEndPos_boxed_1234_; lean_object* v_res_1235_; 
v_json_boxed_1233_ = lean_unbox(v_json_1227_);
v_includeEndPos_boxed_1234_ = lean_unbox(v_includeEndPos_1228_);
v_res_1235_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6(v_opts_1226_, v_json_boxed_1233_, v_includeEndPos_boxed_1234_, v_severityOverrides_1229_, v_x_1230_, v_x_1231_);
lean_dec(v_severityOverrides_1229_);
lean_dec_ref(v_opts_1226_);
return v_res_1235_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4(lean_object* v_opts_1237_, uint8_t v_json_1238_, uint8_t v_includeEndPos_1239_, lean_object* v_severityOverrides_1240_, lean_object* v_x_1241_, size_t v_x_1242_, size_t v_x_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1241_) == 0)
{
lean_object* v_cs_1246_; lean_object* v___x_1247_; size_t v___x_1248_; lean_object* v_j_1249_; lean_object* v___x_1250_; size_t v___x_1251_; size_t v___x_1252_; size_t v___x_1253_; size_t v___x_1254_; size_t v___x_1255_; size_t v___x_1256_; lean_object* v___x_1257_; 
v_cs_1246_ = lean_ctor_get(v_x_1241_, 0);
lean_inc_ref(v_cs_1246_);
lean_dec_ref_known(v_x_1241_, 1);
v___x_1247_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___closed__0);
v___x_1248_ = lean_usize_shift_right(v_x_1242_, v_x_1243_);
v_j_1249_ = lean_usize_to_nat(v___x_1248_);
v___x_1250_ = lean_array_get_borrowed(v___x_1247_, v_cs_1246_, v_j_1249_);
v___x_1251_ = ((size_t)1ULL);
v___x_1252_ = lean_usize_shift_left(v___x_1251_, v_x_1243_);
v___x_1253_ = lean_usize_sub(v___x_1252_, v___x_1251_);
v___x_1254_ = lean_usize_land(v_x_1242_, v___x_1253_);
v___x_1255_ = ((size_t)5ULL);
v___x_1256_ = lean_usize_sub(v_x_1243_, v___x_1255_);
lean_inc(v___x_1250_);
v___x_1257_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4(v_opts_1237_, v_json_1238_, v_includeEndPos_1239_, v_severityOverrides_1240_, v___x_1250_, v___x_1254_, v___x_1256_, v_x_1244_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
v___x_1259_ = lean_unsigned_to_nat(1u);
v___x_1260_ = lean_nat_add(v_j_1249_, v___x_1259_);
lean_dec(v_j_1249_);
v___x_1261_ = lean_array_get_size(v_cs_1246_);
v___x_1262_ = lean_nat_dec_lt(v___x_1260_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_dec(v___x_1260_);
lean_dec(v_a_1258_);
lean_dec_ref(v_cs_1246_);
return v___x_1257_;
}
else
{
size_t v___x_1263_; size_t v___x_1264_; lean_object* v___x_1265_; 
lean_dec_ref_known(v___x_1257_, 1);
v___x_1263_ = lean_usize_of_nat(v___x_1260_);
lean_dec(v___x_1260_);
v___x_1264_ = lean_usize_of_nat(v___x_1261_);
v___x_1265_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4_spec__5(v_opts_1237_, v_json_1238_, v_includeEndPos_1239_, v_severityOverrides_1240_, v_cs_1246_, v___x_1263_, v___x_1264_, v_a_1258_);
lean_dec_ref(v_cs_1246_);
return v___x_1265_;
}
}
else
{
lean_dec(v_j_1249_);
lean_dec_ref(v_cs_1246_);
return v___x_1257_;
}
}
else
{
lean_object* v_vs_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1279_; 
v_vs_1266_ = lean_ctor_get(v_x_1241_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_x_1241_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1268_ = v_x_1241_;
v_isShared_1269_ = v_isSharedCheck_1279_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_vs_1266_);
lean_dec(v_x_1241_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1279_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; 
v___x_1270_ = lean_usize_to_nat(v_x_1242_);
v___x_1271_ = lean_array_get_size(v_vs_1266_);
v___x_1272_ = lean_nat_dec_lt(v___x_1270_, v___x_1271_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1274_; 
lean_dec(v___x_1270_);
lean_dec_ref(v_vs_1266_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 0);
lean_ctor_set(v___x_1268_, 0, v_x_1244_);
v___x_1274_ = v___x_1268_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_x_1244_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
else
{
size_t v___x_1276_; size_t v___x_1277_; lean_object* v___x_1278_; 
lean_del_object(v___x_1268_);
v___x_1276_ = lean_usize_of_nat(v___x_1270_);
lean_dec(v___x_1270_);
v___x_1277_ = lean_usize_of_nat(v___x_1271_);
v___x_1278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(v_opts_1237_, v_json_1238_, v_includeEndPos_1239_, v_severityOverrides_1240_, v_vs_1266_, v___x_1276_, v___x_1277_, v_x_1244_);
lean_dec_ref(v_vs_1266_);
return v___x_1278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4___boxed(lean_object* v_opts_1280_, lean_object* v_json_1281_, lean_object* v_includeEndPos_1282_, lean_object* v_severityOverrides_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_, lean_object* v___y_1288_){
_start:
{
uint8_t v_json_boxed_1289_; uint8_t v_includeEndPos_boxed_1290_; size_t v_x_2226__boxed_1291_; size_t v_x_2227__boxed_1292_; lean_object* v_res_1293_; 
v_json_boxed_1289_ = lean_unbox(v_json_1281_);
v_includeEndPos_boxed_1290_ = lean_unbox(v_includeEndPos_1282_);
v_x_2226__boxed_1291_ = lean_unbox_usize(v_x_1285_);
lean_dec(v_x_1285_);
v_x_2227__boxed_1292_ = lean_unbox_usize(v_x_1286_);
lean_dec(v_x_1286_);
v_res_1293_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4(v_opts_1280_, v_json_boxed_1289_, v_includeEndPos_boxed_1290_, v_severityOverrides_1283_, v_x_1284_, v_x_2226__boxed_1291_, v_x_2227__boxed_1292_, v_x_1287_);
lean_dec(v_severityOverrides_1283_);
lean_dec_ref(v_opts_1280_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4(lean_object* v_opts_1294_, uint8_t v_json_1295_, uint8_t v_includeEndPos_1296_, lean_object* v_severityOverrides_1297_, lean_object* v_t_1298_, lean_object* v_init_1299_, lean_object* v_start_1300_){
_start:
{
lean_object* v___x_1302_; uint8_t v___x_1303_; 
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = lean_nat_dec_eq(v_start_1300_, v___x_1302_);
if (v___x_1303_ == 0)
{
lean_object* v_root_1304_; lean_object* v_tail_1305_; size_t v_shift_1306_; lean_object* v_tailOff_1307_; uint8_t v___x_1308_; 
v_root_1304_ = lean_ctor_get(v_t_1298_, 0);
lean_inc_ref(v_root_1304_);
v_tail_1305_ = lean_ctor_get(v_t_1298_, 1);
lean_inc_ref(v_tail_1305_);
v_shift_1306_ = lean_ctor_get_usize(v_t_1298_, 4);
v_tailOff_1307_ = lean_ctor_get(v_t_1298_, 3);
lean_inc(v_tailOff_1307_);
lean_dec_ref(v_t_1298_);
v___x_1308_ = lean_nat_dec_le(v_tailOff_1307_, v_start_1300_);
if (v___x_1308_ == 0)
{
size_t v___x_1309_; lean_object* v___x_1310_; 
lean_dec(v_tailOff_1307_);
v___x_1309_ = lean_usize_of_nat(v_start_1300_);
v___x_1310_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__4(v_opts_1294_, v_json_1295_, v_includeEndPos_1296_, v_severityOverrides_1297_, v_root_1304_, v___x_1309_, v_shift_1306_, v_init_1299_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
v___x_1312_ = lean_array_get_size(v_tail_1305_);
v___x_1313_ = lean_nat_dec_lt(v___x_1302_, v___x_1312_);
if (v___x_1313_ == 0)
{
lean_dec(v_a_1311_);
lean_dec_ref(v_tail_1305_);
return v___x_1310_;
}
else
{
size_t v___x_1314_; size_t v___x_1315_; lean_object* v___x_1316_; 
lean_dec_ref_known(v___x_1310_, 1);
v___x_1314_ = ((size_t)0ULL);
v___x_1315_ = lean_usize_of_nat(v___x_1312_);
v___x_1316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(v_opts_1294_, v_json_1295_, v_includeEndPos_1296_, v_severityOverrides_1297_, v_tail_1305_, v___x_1314_, v___x_1315_, v_a_1311_);
lean_dec_ref(v_tail_1305_);
return v___x_1316_;
}
}
else
{
lean_dec_ref(v_tail_1305_);
return v___x_1310_;
}
}
else
{
lean_object* v___x_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
lean_dec_ref(v_root_1304_);
v___x_1317_ = lean_nat_sub(v_start_1300_, v_tailOff_1307_);
lean_dec(v_tailOff_1307_);
v___x_1318_ = lean_array_get_size(v_tail_1305_);
v___x_1319_ = lean_nat_dec_lt(v___x_1317_, v___x_1318_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; 
lean_dec(v___x_1317_);
lean_dec_ref(v_tail_1305_);
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_init_1299_);
return v___x_1320_;
}
else
{
size_t v___x_1321_; size_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = lean_usize_of_nat(v___x_1317_);
lean_dec(v___x_1317_);
v___x_1322_ = lean_usize_of_nat(v___x_1318_);
v___x_1323_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(v_opts_1294_, v_json_1295_, v_includeEndPos_1296_, v_severityOverrides_1297_, v_tail_1305_, v___x_1321_, v___x_1322_, v_init_1299_);
lean_dec_ref(v_tail_1305_);
return v___x_1323_;
}
}
}
else
{
lean_object* v_root_1324_; lean_object* v_tail_1325_; lean_object* v___x_1326_; 
v_root_1324_ = lean_ctor_get(v_t_1298_, 0);
lean_inc_ref(v_root_1324_);
v_tail_1325_ = lean_ctor_get(v_t_1298_, 1);
lean_inc_ref(v_tail_1325_);
lean_dec_ref(v_t_1298_);
v___x_1326_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__6(v_opts_1294_, v_json_1295_, v_includeEndPos_1296_, v_severityOverrides_1297_, v_root_1324_, v_init_1299_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; uint8_t v___x_1329_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
v___x_1328_ = lean_array_get_size(v_tail_1325_);
v___x_1329_ = lean_nat_dec_lt(v___x_1302_, v___x_1328_);
if (v___x_1329_ == 0)
{
lean_dec(v_a_1327_);
lean_dec_ref(v_tail_1325_);
return v___x_1326_;
}
else
{
size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; 
lean_dec_ref_known(v___x_1326_, 1);
v___x_1330_ = ((size_t)0ULL);
v___x_1331_ = lean_usize_of_nat(v___x_1328_);
v___x_1332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4_spec__5(v_opts_1294_, v_json_1295_, v_includeEndPos_1296_, v_severityOverrides_1297_, v_tail_1325_, v___x_1330_, v___x_1331_, v_a_1327_);
lean_dec_ref(v_tail_1325_);
return v___x_1332_;
}
}
else
{
lean_dec_ref(v_tail_1325_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4___boxed(lean_object* v_opts_1333_, lean_object* v_json_1334_, lean_object* v_includeEndPos_1335_, lean_object* v_severityOverrides_1336_, lean_object* v_t_1337_, lean_object* v_init_1338_, lean_object* v_start_1339_, lean_object* v___y_1340_){
_start:
{
uint8_t v_json_boxed_1341_; uint8_t v_includeEndPos_boxed_1342_; lean_object* v_res_1343_; 
v_json_boxed_1341_ = lean_unbox(v_json_1334_);
v_includeEndPos_boxed_1342_ = lean_unbox(v_includeEndPos_1335_);
v_res_1343_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4(v_opts_1333_, v_json_boxed_1341_, v_includeEndPos_boxed_1342_, v_severityOverrides_1336_, v_t_1337_, v_init_1338_, v_start_1339_);
lean_dec(v_start_1339_);
lean_dec(v_severityOverrides_1336_);
lean_dec_ref(v_opts_1333_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_reportMessages(lean_object* v_msgLog_1344_, lean_object* v_opts_1345_, uint8_t v_json_1346_, lean_object* v_severityOverrides_1347_, lean_object* v_numErrors_1348_){
_start:
{
lean_object* v_unreported_1350_; lean_object* v___x_1351_; uint8_t v_includeEndPos_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_unreported_1350_ = lean_ctor_get(v_msgLog_1344_, 1);
lean_inc_ref(v_unreported_1350_);
lean_dec_ref(v_msgLog_1344_);
v___x_1351_ = l_Lean_Language_printMessageEndPos;
v_includeEndPos_1352_ = l_Lean_Option_get___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__0(v_opts_1345_, v___x_1351_);
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__4(v_opts_1345_, v_json_1346_, v_includeEndPos_1352_, v_severityOverrides_1347_, v_unreported_1350_, v_numErrors_1348_, v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_reportMessages___boxed(lean_object* v_msgLog_1355_, lean_object* v_opts_1356_, lean_object* v_json_1357_, lean_object* v_severityOverrides_1358_, lean_object* v_numErrors_1359_, lean_object* v_a_1360_){
_start:
{
uint8_t v_json_boxed_1361_; lean_object* v_res_1362_; 
v_json_boxed_1361_ = lean_unbox(v_json_1357_);
v_res_1362_ = l___private_Lean_Language_Basic_0__Lean_Language_reportMessages(v_msgLog_1355_, v_opts_1356_, v_json_boxed_1361_, v_severityOverrides_1358_, v_numErrors_1359_);
lean_dec(v_severityOverrides_1358_);
lean_dec_ref(v_opts_1356_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0(lean_object* v_opts_1363_, uint8_t v_json_1364_, lean_object* v_severityOverrides_1365_, lean_object* v_s_1366_, lean_object* v_init_1367_){
_start:
{
lean_object* v_element_1369_; lean_object* v_diagnostics_1370_; lean_object* v_children_1371_; lean_object* v_msgLog_1372_; lean_object* v___x_1373_; 
v_element_1369_ = lean_ctor_get(v_s_1366_, 0);
v_diagnostics_1370_ = lean_ctor_get(v_element_1369_, 1);
lean_inc_ref(v_diagnostics_1370_);
v_children_1371_ = lean_ctor_get(v_s_1366_, 1);
lean_inc_ref(v_children_1371_);
lean_dec_ref(v_s_1366_);
v_msgLog_1372_ = lean_ctor_get(v_diagnostics_1370_, 0);
lean_inc_ref(v_msgLog_1372_);
lean_dec_ref(v_diagnostics_1370_);
v___x_1373_ = l___private_Lean_Language_Basic_0__Lean_Language_reportMessages(v_msgLog_1372_, v_opts_1363_, v_json_1364_, v_severityOverrides_1365_, v_init_1367_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_a_1374_);
v___x_1375_ = lean_unsigned_to_nat(0u);
v___x_1376_ = lean_array_get_size(v_children_1371_);
v___x_1377_ = lean_nat_dec_lt(v___x_1375_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_dec(v_a_1374_);
lean_dec_ref(v_children_1371_);
return v___x_1373_;
}
else
{
size_t v___x_1378_; size_t v___x_1379_; lean_object* v___x_1380_; 
lean_dec_ref_known(v___x_1373_, 1);
v___x_1378_ = ((size_t)0ULL);
v___x_1379_ = lean_usize_of_nat(v___x_1376_);
v___x_1380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0_spec__0(v_opts_1363_, v_json_1364_, v_severityOverrides_1365_, v_children_1371_, v___x_1378_, v___x_1379_, v_a_1374_);
lean_dec_ref(v_children_1371_);
return v___x_1380_;
}
}
else
{
lean_dec_ref(v_children_1371_);
return v___x_1373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0_spec__0(lean_object* v_opts_1381_, uint8_t v_json_1382_, lean_object* v_severityOverrides_1383_, lean_object* v_as_1384_, size_t v_i_1385_, size_t v_stop_1386_, lean_object* v_b_1387_){
_start:
{
uint8_t v___x_1389_; 
v___x_1389_ = lean_usize_dec_eq(v_i_1385_, v_stop_1386_);
if (v___x_1389_ == 0)
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1390_ = lean_array_uget_borrowed(v_as_1384_, v_i_1385_);
lean_inc(v___x_1390_);
v___x_1391_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_1390_);
v___x_1392_ = l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0(v_opts_1381_, v_json_1382_, v_severityOverrides_1383_, v___x_1391_, v_b_1387_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; size_t v___x_1394_; size_t v___x_1395_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v___x_1394_ = ((size_t)1ULL);
v___x_1395_ = lean_usize_add(v_i_1385_, v___x_1394_);
v_i_1385_ = v___x_1395_;
v_b_1387_ = v_a_1393_;
goto _start;
}
else
{
return v___x_1392_;
}
}
else
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1397_, 0, v_b_1387_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0_spec__0___boxed(lean_object* v_opts_1398_, lean_object* v_json_1399_, lean_object* v_severityOverrides_1400_, lean_object* v_as_1401_, lean_object* v_i_1402_, lean_object* v_stop_1403_, lean_object* v_b_1404_, lean_object* v___y_1405_){
_start:
{
uint8_t v_json_boxed_1406_; size_t v_i_boxed_1407_; size_t v_stop_boxed_1408_; lean_object* v_res_1409_; 
v_json_boxed_1406_ = lean_unbox(v_json_1399_);
v_i_boxed_1407_ = lean_unbox_usize(v_i_1402_);
lean_dec(v_i_1402_);
v_stop_boxed_1408_ = lean_unbox_usize(v_stop_1403_);
lean_dec(v_stop_1403_);
v_res_1409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0_spec__0(v_opts_1398_, v_json_boxed_1406_, v_severityOverrides_1400_, v_as_1401_, v_i_boxed_1407_, v_stop_boxed_1408_, v_b_1404_);
lean_dec_ref(v_as_1401_);
lean_dec(v_severityOverrides_1400_);
lean_dec_ref(v_opts_1398_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0___boxed(lean_object* v_opts_1410_, lean_object* v_json_1411_, lean_object* v_severityOverrides_1412_, lean_object* v_s_1413_, lean_object* v_init_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v_json_boxed_1416_; lean_object* v_res_1417_; 
v_json_boxed_1416_ = lean_unbox(v_json_1411_);
v_res_1417_ = l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0(v_opts_1410_, v_json_boxed_1416_, v_severityOverrides_1412_, v_s_1413_, v_init_1414_);
lean_dec(v_severityOverrides_1412_);
lean_dec_ref(v_opts_1410_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_runAndReport(lean_object* v_s_1418_, lean_object* v_opts_1419_, uint8_t v_json_1420_, lean_object* v_severityOverrides_1421_){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = lean_unsigned_to_nat(0u);
v___x_1424_ = l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_runAndReport_spec__0(v_opts_1419_, v_json_1420_, v_severityOverrides_1421_, v_s_1418_, v___x_1423_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1434_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1434_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1434_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
uint8_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1432_; 
v___x_1429_ = lean_nat_dec_lt(v___x_1423_, v_a_1425_);
lean_dec(v_a_1425_);
v___x_1430_ = lean_box(v___x_1429_);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1430_);
v___x_1432_ = v___x_1427_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1430_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
v_a_1435_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1424_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1424_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_runAndReport___boxed(lean_object* v_s_1443_, lean_object* v_opts_1444_, lean_object* v_json_1445_, lean_object* v_severityOverrides_1446_, lean_object* v_a_1447_){
_start:
{
uint8_t v_json_boxed_1448_; lean_object* v_res_1449_; 
v_json_boxed_1448_ = lean_unbox(v_json_1445_);
v_res_1449_ = l_Lean_Language_SnapshotTree_runAndReport(v_s_1443_, v_opts_1444_, v_json_boxed_1448_, v_severityOverrides_1446_);
lean_dec(v_severityOverrides_1446_);
lean_dec_ref(v_opts_1444_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0(lean_object* v_s_1450_, lean_object* v_init_1451_){
_start:
{
lean_object* v_element_1452_; lean_object* v_children_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v_element_1452_ = lean_ctor_get(v_s_1450_, 0);
lean_inc_ref(v_element_1452_);
v_children_1453_ = lean_ctor_get(v_s_1450_, 1);
lean_inc_ref(v_children_1453_);
lean_dec_ref(v_s_1450_);
v___x_1454_ = lean_array_push(v_init_1451_, v_element_1452_);
v___x_1455_ = lean_unsigned_to_nat(0u);
v___x_1456_ = lean_array_get_size(v_children_1453_);
v___x_1457_ = lean_nat_dec_lt(v___x_1455_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_dec_ref(v_children_1453_);
return v___x_1454_;
}
else
{
size_t v___x_1458_; size_t v___x_1459_; lean_object* v___x_1460_; 
v___x_1458_ = ((size_t)0ULL);
v___x_1459_ = lean_usize_of_nat(v___x_1456_);
v___x_1460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0_spec__0(v_children_1453_, v___x_1458_, v___x_1459_, v___x_1454_);
lean_dec_ref(v_children_1453_);
return v___x_1460_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0_spec__0(lean_object* v_as_1461_, size_t v_i_1462_, size_t v_stop_1463_, lean_object* v_b_1464_){
_start:
{
uint8_t v___x_1465_; 
v___x_1465_ = lean_usize_dec_eq(v_i_1462_, v_stop_1463_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; size_t v___x_1469_; size_t v___x_1470_; 
v___x_1466_ = lean_array_uget_borrowed(v_as_1461_, v_i_1462_);
lean_inc(v___x_1466_);
v___x_1467_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_1466_);
v___x_1468_ = l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0(v___x_1467_, v_b_1464_);
v___x_1469_ = ((size_t)1ULL);
v___x_1470_ = lean_usize_add(v_i_1462_, v___x_1469_);
v_i_1462_ = v___x_1470_;
v_b_1464_ = v___x_1468_;
goto _start;
}
else
{
return v_b_1464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0_spec__0___boxed(lean_object* v_as_1472_, lean_object* v_i_1473_, lean_object* v_stop_1474_, lean_object* v_b_1475_){
_start:
{
size_t v_i_boxed_1476_; size_t v_stop_boxed_1477_; lean_object* v_res_1478_; 
v_i_boxed_1476_ = lean_unbox_usize(v_i_1473_);
lean_dec(v_i_1473_);
v_stop_boxed_1477_ = lean_unbox_usize(v_stop_1474_);
lean_dec(v_stop_1474_);
v_res_1478_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0_spec__0(v_as_1472_, v_i_boxed_1476_, v_stop_boxed_1477_, v_b_1475_);
lean_dec_ref(v_as_1472_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object* v_s_1481_){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = ((lean_object*)(l_Lean_Language_SnapshotTree_getAll___closed__0));
v___x_1483_ = l_Lean_Language_SnapshotTree_foldM___at___00Lean_Language_SnapshotTree_getAll_spec__0(v_s_1481_, v___x_1482_);
return v___x_1483_;
}
}
static lean_object* _init_l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___closed__0(void){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = lean_box(0);
v___x_1485_ = lean_task_pure(v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___lam__0___boxed(lean_object* v_tail_1486_, lean_object* v_t_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___lam__0(v_tail_1486_, v_t_1487_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go(lean_object* v_a_1490_){
_start:
{
if (lean_obj_tag(v_a_1490_) == 0)
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_obj_once(&l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___closed__0, &l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___closed__0_once, _init_l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___closed__0);
return v___x_1492_;
}
else
{
lean_object* v_head_1493_; lean_object* v_tail_1494_; lean_object* v_task_1495_; lean_object* v___f_1496_; lean_object* v___x_1497_; uint8_t v___x_1498_; lean_object* v___x_1499_; 
v_head_1493_ = lean_ctor_get(v_a_1490_, 0);
lean_inc(v_head_1493_);
v_tail_1494_ = lean_ctor_get(v_a_1490_, 1);
lean_inc(v_tail_1494_);
lean_dec_ref_known(v_a_1490_, 2);
v_task_1495_ = lean_ctor_get(v_head_1493_, 3);
lean_inc_ref(v_task_1495_);
lean_dec(v_head_1493_);
v___f_1496_ = lean_alloc_closure((void*)(l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1496_, 0, v_tail_1494_);
v___x_1497_ = lean_unsigned_to_nat(0u);
v___x_1498_ = 1;
v___x_1499_ = lean_io_bind_task(v_task_1495_, v___f_1496_, v___x_1497_, v___x_1498_);
return v___x_1499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___lam__0(lean_object* v_tail_1500_, lean_object* v_t_1501_){
_start:
{
lean_object* v_children_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_children_1503_ = lean_ctor_get(v_t_1501_, 1);
lean_inc_ref(v_children_1503_);
lean_dec_ref(v_t_1501_);
v___x_1504_ = lean_array_to_list(v_children_1503_);
v___x_1505_ = l_List_appendTR___redArg(v___x_1504_, v_tail_1500_);
v___x_1506_ = l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go(v___x_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go___boxed(lean_object* v_a_1507_, lean_object* v_a_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go(v_a_1507_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_waitAll(lean_object* v_x_1510_){
_start:
{
lean_object* v_children_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v_children_1512_ = lean_ctor_get(v_x_1510_, 1);
lean_inc_ref(v_children_1512_);
lean_dec_ref(v_x_1510_);
v___x_1513_ = lean_array_to_list(v_children_1512_);
v___x_1514_ = l___private_Lean_Language_Basic_0__Lean_Language_SnapshotTree_waitAll_go(v___x_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_waitAll___boxed(lean_object* v_x_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Language_SnapshotTree_waitAll(v_x_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instMonadLiftProcessingMProcessingTIO___lam__0(lean_object* v_00_u03b1_1518_, lean_object* v_act_1519_, lean_object* v_ctx_1520_){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = lean_apply_2(v_act_1519_, v_ctx_1520_, lean_box(0));
v___x_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_instMonadLiftProcessingMProcessingTIO___lam__0___boxed(lean_object* v_00_u03b1_1524_, lean_object* v_act_1525_, lean_object* v_ctx_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_Language_instMonadLiftProcessingMProcessingTIO___lam__0(v_00_u03b1_1524_, v_act_1525_, v_ctx_1526_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(lean_object* v_msgLog_1531_){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_st_mk_ref(v___x_1533_);
v___x_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v_msgLog_1531_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog___boxed(lean_object* v_msgLog_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_msgLog_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_diagnosticsOfHeaderError(lean_object* v_msg_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_fileMap_1547_; lean_object* v_source_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v_fileMap_1547_ = lean_ctor_get(v_a_1545_, 2);
v_source_1548_ = lean_ctor_get(v_fileMap_1547_, 0);
v___x_1549_ = ((lean_object*)(l_Lean_Language_diagnosticsOfHeaderError___closed__0));
v___x_1550_ = ((lean_object*)(l_Lean_Language_diagnosticsOfHeaderError___closed__1));
v___x_1551_ = lean_string_utf8_byte_size(v_source_1548_);
lean_inc_ref(v_fileMap_1547_);
v___x_1552_ = l_Lean_FileMap_toPosition(v_fileMap_1547_, v___x_1551_);
v___x_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
v___x_1554_ = 0;
v___x_1555_ = 2;
v___x_1556_ = ((lean_object*)(l_Lean_Language_instInhabitedSnapshot___closed__0));
v___x_1557_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1557_, 0, v_msg_1544_);
v___x_1558_ = l_Lean_MessageData_ofFormat(v___x_1557_);
v___x_1559_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1559_, 0, v___x_1549_);
lean_ctor_set(v___x_1559_, 1, v___x_1550_);
lean_ctor_set(v___x_1559_, 2, v___x_1553_);
lean_ctor_set(v___x_1559_, 3, v___x_1556_);
lean_ctor_set(v___x_1559_, 4, v___x_1558_);
lean_ctor_set_uint8(v___x_1559_, sizeof(void*)*5, v___x_1554_);
lean_ctor_set_uint8(v___x_1559_, sizeof(void*)*5 + 1, v___x_1555_);
lean_ctor_set_uint8(v___x_1559_, sizeof(void*)*5 + 2, v___x_1554_);
v___x_1560_ = l_Lean_MessageLog_empty;
v___x_1561_ = l_Lean_MessageLog_add(v___x_1559_, v___x_1560_);
v___x_1562_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_diagnosticsOfHeaderError___boxed(lean_object* v_msg_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lean_Language_diagnosticsOfHeaderError(v_msg_1563_, v_a_1564_);
lean_dec_ref(v_a_1564_);
return v_res_1566_;
}
}
static lean_object* _init_l_Lean_Language_withHeaderExceptions___redArg___closed__2(void){
_start:
{
uint8_t v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1572_ = 1;
v___x_1573_ = ((lean_object*)(l_Lean_Language_withHeaderExceptions___redArg___closed__1));
v___x_1574_ = l_Lean_Name_toString(v___x_1573_, v___x_1572_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions___redArg(lean_object* v_ex_1575_, lean_object* v_act_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v___x_1579_; 
lean_inc_ref(v_a_1577_);
v___x_1579_ = lean_apply_2(v_act_1576_, v_a_1577_, lean_box(0));
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; 
lean_dec(v_ex_1575_);
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1579_, 1);
return v_a_1580_;
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v_a_1581_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1579_, 1);
v___x_1582_ = lean_io_error_to_string(v_a_1581_);
v___x_1583_ = l_Lean_Language_diagnosticsOfHeaderError(v___x_1582_, v_a_1577_);
v___x_1584_ = lean_obj_once(&l_Lean_Language_withHeaderExceptions___redArg___closed__2, &l_Lean_Language_withHeaderExceptions___redArg___closed__2_once, _init_l_Lean_Language_withHeaderExceptions___redArg___closed__2);
v___x_1585_ = lean_box(0);
v___x_1586_ = lean_obj_once(&l_Lean_Language_instInhabitedSnapshot___closed__3, &l_Lean_Language_instInhabitedSnapshot___closed__3_once, _init_l_Lean_Language_instInhabitedSnapshot___closed__3);
v___x_1587_ = 0;
v___x_1588_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1588_, 0, v___x_1584_);
lean_ctor_set(v___x_1588_, 1, v___x_1583_);
lean_ctor_set(v___x_1588_, 2, v___x_1585_);
lean_ctor_set(v___x_1588_, 3, v___x_1586_);
lean_ctor_set_uint8(v___x_1588_, sizeof(void*)*4, v___x_1587_);
v___x_1589_ = lean_apply_1(v_ex_1575_, v___x_1588_);
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions___redArg___boxed(lean_object* v_ex_1590_, lean_object* v_act_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lean_Language_withHeaderExceptions___redArg(v_ex_1590_, v_act_1591_, v_a_1592_);
lean_dec_ref(v_a_1592_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions(lean_object* v_00_u03b1_1595_, lean_object* v_ex_1596_, lean_object* v_act_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_Language_withHeaderExceptions___redArg(v_ex_1596_, v_act_1597_, v_a_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_withHeaderExceptions___boxed(lean_object* v_00_u03b1_1601_, lean_object* v_ex_1602_, lean_object* v_act_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lean_Language_withHeaderExceptions(v_00_u03b1_1601_, v_ex_1602_, v_act_1603_, v_a_1604_);
lean_dec_ref(v_a_1604_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg___lam__0(lean_object* v_val_1607_, lean_object* v_process_1608_, lean_object* v_ictx_1609_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1611_ = lean_st_ref_get(v_val_1607_);
v___x_1612_ = lean_apply_3(v_process_1608_, v___x_1611_, v_ictx_1609_, lean_box(0));
lean_inc(v___x_1612_);
v___x_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
v___x_1614_ = lean_st_ref_swap(v_val_1607_, v___x_1613_);
lean_dec(v___x_1614_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg___lam__0___boxed(lean_object* v_val_1615_, lean_object* v_process_1616_, lean_object* v_ictx_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Language_mkIncrementalProcessor___redArg___lam__0(v_val_1615_, v_process_1616_, v_ictx_1617_);
lean_dec(v_val_1615_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg(lean_object* v_process_1620_){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___f_1624_; 
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_st_mk_ref(v___x_1622_);
v___f_1624_ = lean_alloc_closure((void*)(l_Lean_Language_mkIncrementalProcessor___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1624_, 0, v___x_1623_);
lean_closure_set(v___f_1624_, 1, v_process_1620_);
return v___f_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___redArg___boxed(lean_object* v_process_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_Language_mkIncrementalProcessor___redArg(v_process_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor(lean_object* v_InitSnap_1628_, lean_object* v_process_1629_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_Language_mkIncrementalProcessor___redArg(v_process_1629_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_mkIncrementalProcessor___boxed(lean_object* v_InitSnap_1632_, lean_object* v_process_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lean_Language_mkIncrementalProcessor(v_InitSnap_1632_, v_process_1633_);
return v_res_1635_;
}
}
lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Trace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Language_Snapshot_instInhabitedDiagnostics_default = _init_l_Lean_Language_Snapshot_instInhabitedDiagnostics_default();
lean_mark_persistent(l_Lean_Language_Snapshot_instInhabitedDiagnostics_default);
l_Lean_Language_Snapshot_instInhabitedDiagnostics = _init_l_Lean_Language_Snapshot_instInhabitedDiagnostics();
lean_mark_persistent(l_Lean_Language_Snapshot_instInhabitedDiagnostics);
l_Lean_Language_Snapshot_Diagnostics_empty = _init_l_Lean_Language_Snapshot_Diagnostics_empty();
lean_mark_persistent(l_Lean_Language_Snapshot_Diagnostics_empty);
l_Lean_Language_instInhabitedSnapshot = _init_l_Lean_Language_instInhabitedSnapshot();
lean_mark_persistent(l_Lean_Language_instInhabitedSnapshot);
l_Lean_Language_SnapshotTask_instInhabitedReportingRange_default = _init_l_Lean_Language_SnapshotTask_instInhabitedReportingRange_default();
lean_mark_persistent(l_Lean_Language_SnapshotTask_instInhabitedReportingRange_default);
l_Lean_Language_SnapshotTask_instInhabitedReportingRange = _init_l_Lean_Language_SnapshotTask_instInhabitedReportingRange();
lean_mark_persistent(l_Lean_Language_SnapshotTask_instInhabitedReportingRange);
l_Lean_Language_instInhabitedSnapshotTree_default = _init_l_Lean_Language_instInhabitedSnapshotTree_default();
lean_mark_persistent(l_Lean_Language_instInhabitedSnapshotTree_default);
l_Lean_Language_instInhabitedSnapshotTree = _init_l_Lean_Language_instInhabitedSnapshotTree();
lean_mark_persistent(l_Lean_Language_instInhabitedSnapshotTree);
l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_ = _init_l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_();
lean_mark_persistent(l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3470488393____hygCtx___hyg_30_);
l_Lean_Language_instTypeNameSnapshotTree = _init_l_Lean_Language_instTypeNameSnapshotTree();
lean_mark_persistent(l_Lean_Language_instTypeNameSnapshotTree);
l_Lean_Language_instInhabitedSnapshotTreeTransform_default = _init_l_Lean_Language_instInhabitedSnapshotTreeTransform_default();
lean_mark_persistent(l_Lean_Language_instInhabitedSnapshotTreeTransform_default);
l_Lean_Language_instInhabitedSnapshotTreeTransform = _init_l_Lean_Language_instInhabitedSnapshotTreeTransform();
lean_mark_persistent(l_Lean_Language_instInhabitedSnapshotTreeTransform);
l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_ = _init_l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_();
lean_mark_persistent(l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_);
l_Lean_Language_instTypeNameSnapshotLeaf = _init_l_Lean_Language_instTypeNameSnapshotLeaf();
lean_mark_persistent(l_Lean_Language_instTypeNameSnapshotLeaf);
l_Lean_Language_instInhabitedSnapshotLeaf = _init_l_Lean_Language_instInhabitedSnapshotLeaf();
lean_mark_persistent(l_Lean_Language_instInhabitedSnapshotLeaf);
l_Lean_Language_instInhabitedDynamicSnapshot = _init_l_Lean_Language_instInhabitedDynamicSnapshot();
lean_mark_persistent(l_Lean_Language_instInhabitedDynamicSnapshot);
res = l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_1801653074____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Language_printMessageEndPos = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Language_printMessageEndPos);
lean_dec_ref(res);
res = l___private_Lean_Language_Basic_0__Lean_Language_initFn_00___x40_Lean_Language_Basic_709047587____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Language_maxErrors = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Language_maxErrors);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Language_Snapshot_desc___autoParam = _init_l_Lean_Language_Snapshot_desc___autoParam();
lean_mark_persistent(l_Lean_Language_Snapshot_desc___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Types(uint8_t builtin);
lean_object* initialize_Lean_Util_Trace(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Data.Trie
// Imports: public import Lean.Data.Format public import Init.Data.Option.Coe import Init.Omega
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_ByteArray_toList(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node1_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node1_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Data_Trie_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Data_Trie_empty___redArg___closed__0 = (const lean_object*)&l_Lean_Data_Trie_empty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Data_Trie_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_Data_Trie_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Data_Trie_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Data_Trie_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Data_Trie_values___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Data_Trie_values___redArg___closed__0 = (const lean_object*)&l_Lean_Data_Trie_values___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__0 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__0_value;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__1 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__1_value;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__2 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__2_value;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__3 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__4 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__4_value;
static const lean_array_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__5 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__5_value;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__6 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__7 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__7_value;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__8 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__9 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__9_value;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__10 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__11 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__12;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__13;
static const lean_string_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__14 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__14_value;
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value_aux_0),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value_aux_1),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value_aux_2),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__15 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_Data_Trie_matchPrefix___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__9_value),((lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__5_value)}};
static const lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__16 = (const lean_object*)&l_Lean_Data_Trie_matchPrefix___auto__1___closed__16_value;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__17;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__18;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__19;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__20;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__21;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__22;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__23;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__24;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__25;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__26;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__27;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__28;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__29;
static lean_once_cell_t l_Lean_Data_Trie_matchPrefix___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Data_Trie_matchPrefix___auto__1___closed__30;
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___auto__1;
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___closed__0 = (const lean_object*)&l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Data_Trie_instToString___private__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Data_Trie_instToString___private__1___redArg___closed__0 = (const lean_object*)&l_Lean_Data_Trie_instToString___private__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___private__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Data_Trie_instToString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Data_Trie_instToString___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Data_Trie_instToString___redArg___closed__0 = (const lean_object*)&l_Lean_Data_Trie_instToString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___redArg();
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
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
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx___redArg___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Data_Trie_ctorIdx___redArg(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx(lean_object* v_00_u03b1_7_, lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Data_Trie_ctorIdx___redArg(v_x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorIdx___boxed(lean_object* v_00_u03b1_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Data_Trie_ctorIdx(v_00_u03b1_10_, v_x_11_);
lean_dec_ref(v_x_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorElim___redArg(lean_object* v_t_13_, lean_object* v_k_14_){
_start:
{
switch(lean_obj_tag(v_t_13_))
{
case 0:
{
lean_object* v_a_15_; lean_object* v___x_16_; 
v_a_15_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_15_);
lean_dec_ref_known(v_t_13_, 1);
v___x_16_ = lean_apply_1(v_k_14_, v_a_15_);
return v___x_16_;
}
case 1:
{
lean_object* v_a_17_; uint8_t v_a_18_; lean_object* v_a_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_a_17_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_17_);
v_a_18_ = lean_ctor_get_uint8(v_t_13_, sizeof(void*)*2);
v_a_19_ = lean_ctor_get(v_t_13_, 1);
lean_inc_ref(v_a_19_);
lean_dec_ref_known(v_t_13_, 2);
v___x_20_ = lean_box(v_a_18_);
v___x_21_ = lean_apply_3(v_k_14_, v_a_17_, v___x_20_, v_a_19_);
return v___x_21_;
}
default: 
{
lean_object* v_a_22_; lean_object* v_a_23_; lean_object* v_a_24_; lean_object* v___x_25_; 
v_a_22_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_22_);
v_a_23_ = lean_ctor_get(v_t_13_, 1);
lean_inc_ref(v_a_23_);
v_a_24_ = lean_ctor_get(v_t_13_, 2);
lean_inc_ref(v_a_24_);
lean_dec_ref_known(v_t_13_, 3);
v___x_25_ = lean_apply_3(v_k_14_, v_a_22_, v_a_23_, v_a_24_);
return v___x_25_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorElim(lean_object* v_00_u03b1_26_, lean_object* v_motive__1_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_29_, v_k_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_ctorElim___boxed(lean_object* v_00_u03b1_33_, lean_object* v_motive__1_34_, lean_object* v_ctorIdx_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Data_Trie_ctorElim(v_00_u03b1_33_, v_motive__1_34_, v_ctorIdx_35_, v_t_36_, v_h_37_, v_k_38_);
lean_dec(v_ctorIdx_35_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_leaf_elim___redArg(lean_object* v_t_40_, lean_object* v_leaf_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_40_, v_leaf_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_leaf_elim(lean_object* v_00_u03b1_43_, lean_object* v_motive__1_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_leaf_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_45_, v_leaf_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node1_elim___redArg(lean_object* v_t_49_, lean_object* v_node1_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_49_, v_node1_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node1_elim(lean_object* v_00_u03b1_52_, lean_object* v_motive__1_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_node1_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_54_, v_node1_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node_elim___redArg(lean_object* v_t_58_, lean_object* v_node_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_58_, v_node_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_node_elim(lean_object* v_00_u03b1_61_, lean_object* v_motive__1_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_node_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Data_Trie_ctorElim___redArg(v_t_63_, v_node_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_empty___redArg(){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = ((lean_object*)(l_Lean_Data_Trie_empty___redArg___closed__0));
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_empty___redArg___boxed(lean_object* v___dummy_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Data_Trie_empty___redArg();
return v_res_72_;
}
}
static lean_object* _init_l_Lean_Data_Trie_empty___closed__0(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Data_Trie_empty___redArg();
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_empty(lean_object* v_00_u03b1_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instEmptyCollection___redArg___boxed(lean_object* v___dummy_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_Data_Trie_instEmptyCollection___redArg();
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instEmptyCollection(lean_object* v_00_u03b1_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instInhabited___redArg(){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instInhabited___redArg___boxed(lean_object* v___dummy_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Data_Trie_instInhabited___redArg();
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instInhabited(lean_object* v_00_u03b1_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(lean_object* v_s_88_, lean_object* v_f_89_, lean_object* v_i_90_){
_start:
{
lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_91_ = lean_string_utf8_byte_size(v_s_88_);
v___x_92_ = lean_nat_dec_lt(v_i_90_, v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
lean_dec(v_i_90_);
v___x_93_ = lean_box(0);
v___x_94_ = lean_apply_1(v_f_89_, v___x_93_);
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
else
{
uint8_t v_c_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v_t_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
lean_inc(v_i_90_);
v_c_97_ = lean_string_get_byte_fast(v_s_88_, v_i_90_);
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_nat_add(v_i_90_, v___x_98_);
lean_dec(v_i_90_);
v_t_100_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(v_s_88_, v_f_89_, v___x_99_);
v___x_101_ = lean_box(0);
v___x_102_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v_t_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*2, v_c_97_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg___boxed(lean_object* v_s_103_, lean_object* v_f_104_, lean_object* v_i_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(v_s_103_, v_f_104_, v_i_105_);
lean_dec_ref(v_s_103_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty(lean_object* v_00_u03b1_107_, lean_object* v_s_108_, lean_object* v_f_109_, lean_object* v_i_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(v_s_108_, v_f_109_, v_i_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___boxed(lean_object* v_00_u03b1_112_, lean_object* v_s_113_, lean_object* v_f_114_, lean_object* v_i_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty(v_00_u03b1_112_, v_s_113_, v_f_114_, v_i_115_);
lean_dec_ref(v_s_113_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(uint8_t v_c_117_, lean_object* v_a_118_, lean_object* v_i_119_){
_start:
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_byte_array_size(v_a_118_);
v___x_121_ = lean_nat_dec_lt(v_i_119_, v___x_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_dec(v_i_119_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
else
{
uint8_t v___x_123_; uint8_t v___x_124_; 
v___x_123_ = lean_byte_array_fget(v_a_118_, v_i_119_);
v___x_124_ = lean_uint8_dec_eq(v___x_123_, v_c_117_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_add(v_i_119_, v___x_125_);
lean_dec(v_i_119_);
v_i_119_ = v___x_126_;
goto _start;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_128_, 0, v_i_119_);
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0___boxed(lean_object* v_c_129_, lean_object* v_a_130_, lean_object* v_i_131_){
_start:
{
uint8_t v_c_boxed_132_; lean_object* v_res_133_; 
v_c_boxed_132_ = lean_unbox(v_c_129_);
v_res_133_ = l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(v_c_boxed_132_, v_a_130_, v_i_131_);
lean_dec_ref(v_a_130_);
return v_res_133_;
}
}
static lean_object* _init_l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___closed__0(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_box(0);
v___x_135_ = l_unsafeCast___redArg(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(lean_object* v_s_136_, lean_object* v_f_137_, lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
switch(lean_obj_tag(v_x_139_))
{
case 0:
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_156_; 
v_a_140_ = lean_ctor_get(v_x_139_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_156_ == 0)
{
v___x_142_ = v_x_139_;
v_isShared_143_ = v_isSharedCheck_156_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v_x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_156_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_string_utf8_byte_size(v_s_136_);
v___x_145_ = lean_nat_dec_lt(v_x_138_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
lean_dec(v_x_138_);
v___x_146_ = lean_apply_1(v_f_137_, v_a_140_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_147_);
v___x_149_ = v___x_142_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
else
{
uint8_t v_c_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_t_154_; lean_object* v___x_155_; 
lean_del_object(v___x_142_);
lean_inc(v_x_138_);
v_c_151_ = lean_string_get_byte_fast(v_s_136_, v_x_138_);
v___x_152_ = lean_unsigned_to_nat(1u);
v___x_153_ = lean_nat_add(v_x_138_, v___x_152_);
lean_dec(v_x_138_);
v_t_154_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(v_s_136_, v_f_137_, v___x_153_);
v___x_155_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_155_, 0, v_a_140_);
lean_ctor_set(v___x_155_, 1, v_t_154_);
lean_ctor_set_uint8(v___x_155_, sizeof(void*)*2, v_c_151_);
return v___x_155_;
}
}
}
case 1:
{
lean_object* v_a_157_; uint8_t v_a_158_; lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_191_; 
v_a_157_ = lean_ctor_get(v_x_139_, 0);
v_a_158_ = lean_ctor_get_uint8(v_x_139_, sizeof(void*)*2);
v_a_159_ = lean_ctor_get(v_x_139_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_191_ == 0)
{
v___x_161_ = v_x_139_;
v_isShared_162_ = v_isSharedCheck_191_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_inc(v_a_157_);
lean_dec(v_x_139_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_191_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_string_utf8_byte_size(v_s_136_);
v___x_164_ = lean_nat_dec_lt(v_x_138_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_168_; 
lean_dec(v_x_138_);
v___x_165_ = lean_apply_1(v_f_137_, v_a_157_);
v___x_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v___x_166_);
v___x_168_ = v___x_161_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v_a_159_);
lean_ctor_set_uint8(v_reuseFailAlloc_169_, sizeof(void*)*2, v_a_158_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
else
{
uint8_t v_c_170_; uint8_t v___x_171_; 
lean_inc(v_x_138_);
v_c_170_ = lean_string_get_byte_fast(v_s_136_, v_x_138_);
v___x_171_ = lean_uint8_dec_eq(v_c_170_, v_a_158_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v_t_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
lean_del_object(v___x_161_);
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_nat_add(v_x_138_, v___x_172_);
lean_dec(v_x_138_);
v_t_174_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(v_s_136_, v_f_137_, v___x_173_);
v___x_175_ = lean_unsigned_to_nat(2u);
v___x_176_ = lean_mk_empty_array_with_capacity(v___x_175_);
v___x_177_ = lean_box(v_c_170_);
lean_inc_ref(v___x_176_);
v___x_178_ = lean_array_push(v___x_176_, v___x_177_);
v___x_179_ = lean_box(v_a_158_);
v___x_180_ = lean_array_push(v___x_178_, v___x_179_);
v___x_181_ = lean_byte_array_mk(v___x_180_);
v___x_182_ = lean_array_push(v___x_176_, v_t_174_);
v___x_183_ = lean_array_push(v___x_182_, v_a_159_);
v___x_184_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_184_, 0, v_a_157_);
lean_ctor_set(v___x_184_, 1, v___x_181_);
lean_ctor_set(v___x_184_, 2, v___x_183_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = lean_nat_add(v_x_138_, v___x_185_);
lean_dec(v_x_138_);
v___x_187_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(v_s_136_, v_f_137_, v___x_186_, v_a_159_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 1, v___x_187_);
v___x_189_ = v___x_161_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_157_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_190_, sizeof(void*)*2, v_a_158_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
default: 
{
lean_object* v_a_192_; lean_object* v_a_193_; lean_object* v_a_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v_a_192_ = lean_ctor_get(v_x_139_, 0);
v_a_193_ = lean_ctor_get(v_x_139_, 1);
v_a_194_ = lean_ctor_get(v_x_139_, 2);
v___x_195_ = lean_string_utf8_byte_size(v_s_136_);
v___x_196_ = lean_nat_dec_lt(v_x_138_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_205_; 
lean_inc_ref(v_a_194_);
lean_inc_ref(v_a_193_);
lean_inc(v_a_192_);
lean_dec(v_x_138_);
v_isSharedCheck_205_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; lean_object* v_unused_207_; lean_object* v_unused_208_; 
v_unused_206_ = lean_ctor_get(v_x_139_, 2);
lean_dec(v_unused_206_);
v_unused_207_ = lean_ctor_get(v_x_139_, 1);
lean_dec(v_unused_207_);
v_unused_208_ = lean_ctor_get(v_x_139_, 0);
lean_dec(v_unused_208_);
v___x_198_ = v_x_139_;
v_isShared_199_ = v_isSharedCheck_205_;
goto v_resetjp_197_;
}
else
{
lean_dec(v_x_139_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_205_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_200_ = lean_apply_1(v_f_137_, v_a_192_);
v___x_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_201_);
v___x_203_ = v___x_198_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_a_193_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v_a_194_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
else
{
uint8_t v_c_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
lean_inc(v_x_138_);
v_c_209_ = lean_string_get_byte_fast(v_s_136_, v_x_138_);
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(v_c_209_, v_a_193_, v___x_210_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_223_; 
lean_inc_ref(v_a_194_);
lean_inc_ref(v_a_193_);
lean_inc(v_a_192_);
v_isSharedCheck_223_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_223_ == 0)
{
lean_object* v_unused_224_; lean_object* v_unused_225_; lean_object* v_unused_226_; 
v_unused_224_ = lean_ctor_get(v_x_139_, 2);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_x_139_, 1);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_x_139_, 0);
lean_dec(v_unused_226_);
v___x_213_ = v_x_139_;
v_isShared_214_ = v_isSharedCheck_223_;
goto v_resetjp_212_;
}
else
{
lean_dec(v_x_139_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_223_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_t_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v_x_138_, v___x_215_);
lean_dec(v_x_138_);
v_t_217_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_insertEmpty___redArg(v_s_136_, v_f_137_, v___x_216_);
v___x_218_ = lean_byte_array_push(v_a_193_, v_c_209_);
v___x_219_ = lean_array_push(v_a_194_, v_t_217_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 2, v___x_219_);
lean_ctor_set(v___x_213_, 1, v___x_218_);
v___x_221_ = v___x_213_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_192_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
else
{
lean_object* v_val_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_val_227_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_211_, 1);
v___x_228_ = lean_array_get_size(v_a_194_);
v___x_229_ = lean_nat_dec_lt(v_val_227_, v___x_228_);
if (v___x_229_ == 0)
{
lean_dec(v_val_227_);
lean_dec(v_x_138_);
lean_dec(v_f_137_);
return v_x_139_;
}
else
{
lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_243_; 
lean_inc_ref(v_a_194_);
lean_inc_ref(v_a_193_);
lean_inc(v_a_192_);
v_isSharedCheck_243_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; lean_object* v_unused_245_; lean_object* v_unused_246_; 
v_unused_244_ = lean_ctor_get(v_x_139_, 2);
lean_dec(v_unused_244_);
v_unused_245_ = lean_ctor_get(v_x_139_, 1);
lean_dec(v_unused_245_);
v_unused_246_ = lean_ctor_get(v_x_139_, 0);
lean_dec(v_unused_246_);
v___x_231_ = v_x_139_;
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
else
{
lean_dec(v_x_139_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v_v_235_; lean_object* v___x_236_; lean_object* v_xs_x27_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_nat_add(v_x_138_, v___x_233_);
lean_dec(v_x_138_);
v_v_235_ = lean_array_fget(v_a_194_, v_val_227_);
v___x_236_ = lean_obj_once(&l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___closed__0, &l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___closed__0_once, _init_l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___closed__0);
v_xs_x27_237_ = lean_array_fset(v_a_194_, v_val_227_, v___x_236_);
v___x_238_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(v_s_136_, v_f_137_, v___x_234_, v_v_235_);
v___x_239_ = lean_array_fset(v_xs_x27_237_, v_val_227_, v___x_238_);
lean_dec(v_val_227_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 2, v___x_239_);
v___x_241_ = v___x_231_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_192_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_a_193_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg___boxed(lean_object* v_s_247_, lean_object* v_f_248_, lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(v_s_247_, v_f_248_, v_x_249_, v_x_250_);
lean_dec_ref(v_s_247_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop(lean_object* v_00_u03b1_252_, lean_object* v_s_253_, lean_object* v_f_254_, lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(v_s_253_, v_f_254_, v_x_255_, v_x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___boxed(lean_object* v_00_u03b1_258_, lean_object* v_s_259_, lean_object* v_f_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop(v_00_u03b1_258_, v_s_259_, v_f_260_, v_x_261_, v_x_262_);
lean_dec_ref(v_s_259_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert___redArg(lean_object* v_t_264_, lean_object* v_s_265_, lean_object* v_f_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop___redArg(v_s_265_, v_f_266_, v___x_267_, v_t_264_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert___redArg___boxed(lean_object* v_t_269_, lean_object* v_s_270_, lean_object* v_f_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_Data_Trie_upsert___redArg(v_t_269_, v_s_270_, v_f_271_);
lean_dec_ref(v_s_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert(lean_object* v_00_u03b1_273_, lean_object* v_t_274_, lean_object* v_s_275_, lean_object* v_f_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lean_Data_Trie_upsert___redArg(v_t_274_, v_s_275_, v_f_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_upsert___boxed(lean_object* v_00_u03b1_278_, lean_object* v_t_279_, lean_object* v_s_280_, lean_object* v_f_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Data_Trie_upsert(v_00_u03b1_278_, v_t_279_, v_s_280_, v_f_281_);
lean_dec_ref(v_s_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg___lam__0(lean_object* v_val_283_, lean_object* v_x_284_){
_start:
{
lean_inc(v_val_283_);
return v_val_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg___lam__0___boxed(lean_object* v_val_285_, lean_object* v_x_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Data_Trie_insert___redArg___lam__0(v_val_285_, v_x_286_);
lean_dec(v_x_286_);
lean_dec(v_val_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg(lean_object* v_t_288_, lean_object* v_s_289_, lean_object* v_val_290_){
_start:
{
lean_object* v___f_291_; lean_object* v___x_292_; 
v___f_291_ = lean_alloc_closure((void*)(l_Lean_Data_Trie_insert___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_291_, 0, v_val_290_);
v___x_292_ = l_Lean_Data_Trie_upsert___redArg(v_t_288_, v_s_289_, v___f_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___redArg___boxed(lean_object* v_t_293_, lean_object* v_s_294_, lean_object* v_val_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_Data_Trie_insert___redArg(v_t_293_, v_s_294_, v_val_295_);
lean_dec_ref(v_s_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert(lean_object* v_00_u03b1_297_, lean_object* v_t_298_, lean_object* v_s_299_, lean_object* v_val_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Data_Trie_insert___redArg(v_t_298_, v_s_299_, v_val_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_insert___boxed(lean_object* v_00_u03b1_302_, lean_object* v_t_303_, lean_object* v_s_304_, lean_object* v_val_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Data_Trie_insert(v_00_u03b1_302_, v_t_303_, v_s_304_, v_val_305_);
lean_dec_ref(v_s_304_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg(lean_object* v_s_307_, lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
switch(lean_obj_tag(v_x_309_))
{
case 0:
{
lean_object* v_a_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v_a_310_ = lean_ctor_get(v_x_309_, 0);
v___x_311_ = lean_string_utf8_byte_size(v_s_307_);
v___x_312_ = lean_nat_dec_lt(v_x_308_, v___x_311_);
lean_dec(v_x_308_);
if (v___x_312_ == 0)
{
lean_inc(v_a_310_);
return v_a_310_;
}
else
{
lean_object* v___x_313_; 
v___x_313_ = lean_box(0);
return v___x_313_;
}
}
case 1:
{
lean_object* v_a_314_; uint8_t v_a_315_; lean_object* v_a_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v_a_314_ = lean_ctor_get(v_x_309_, 0);
v_a_315_ = lean_ctor_get_uint8(v_x_309_, sizeof(void*)*2);
v_a_316_ = lean_ctor_get(v_x_309_, 1);
v___x_317_ = lean_string_utf8_byte_size(v_s_307_);
v___x_318_ = lean_nat_dec_lt(v_x_308_, v___x_317_);
if (v___x_318_ == 0)
{
lean_dec(v_x_308_);
lean_inc(v_a_314_);
return v_a_314_;
}
else
{
uint8_t v_c_319_; uint8_t v___x_320_; 
lean_inc(v_x_308_);
v_c_319_ = lean_string_get_byte_fast(v_s_307_, v_x_308_);
v___x_320_ = lean_uint8_dec_eq(v_c_319_, v_a_315_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
lean_dec(v_x_308_);
v___x_321_ = lean_box(0);
return v___x_321_;
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_add(v_x_308_, v___x_322_);
lean_dec(v_x_308_);
v_x_308_ = v___x_323_;
v_x_309_ = v_a_316_;
goto _start;
}
}
}
default: 
{
lean_object* v_a_325_; lean_object* v_a_326_; lean_object* v_a_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_a_325_ = lean_ctor_get(v_x_309_, 0);
v_a_326_ = lean_ctor_get(v_x_309_, 1);
v_a_327_ = lean_ctor_get(v_x_309_, 2);
v___x_328_ = lean_string_utf8_byte_size(v_s_307_);
v___x_329_ = lean_nat_dec_lt(v_x_308_, v___x_328_);
if (v___x_329_ == 0)
{
lean_dec(v_x_308_);
lean_inc(v_a_325_);
return v_a_325_;
}
else
{
uint8_t v_c_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
lean_inc(v_x_308_);
v_c_330_ = lean_string_get_byte_fast(v_s_307_, v_x_308_);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(v_c_330_, v_a_326_, v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v___x_333_; 
lean_dec(v_x_308_);
v___x_333_ = lean_box(0);
return v___x_333_;
}
else
{
lean_object* v_val_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_val_334_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v___x_332_, 1);
v___x_335_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_nat_add(v_x_308_, v___x_336_);
lean_dec(v_x_308_);
v___x_338_ = lean_array_get_borrowed(v___x_335_, v_a_327_, v_val_334_);
lean_dec(v_val_334_);
v_x_308_ = v___x_337_;
v_x_309_ = v___x_338_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg___boxed(lean_object* v_s_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg(v_s_340_, v_x_341_, v_x_342_);
lean_dec_ref(v_x_342_);
lean_dec_ref(v_s_340_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop(lean_object* v_00_u03b1_344_, lean_object* v_s_345_, lean_object* v_x_346_, lean_object* v_x_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg(v_s_345_, v_x_346_, v_x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___boxed(lean_object* v_00_u03b1_349_, lean_object* v_s_350_, lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop(v_00_u03b1_349_, v_s_350_, v_x_351_, v_x_352_);
lean_dec_ref(v_x_352_);
lean_dec_ref(v_s_350_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f___redArg(lean_object* v_t_354_, lean_object* v_s_355_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_find_x3f_loop___redArg(v_s_355_, v___x_356_, v_t_354_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f___redArg___boxed(lean_object* v_t_358_, lean_object* v_s_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Data_Trie_find_x3f___redArg(v_t_358_, v_s_359_);
lean_dec_ref(v_s_359_);
lean_dec_ref(v_t_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f(lean_object* v_00_u03b1_361_, lean_object* v_t_362_, lean_object* v_s_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Data_Trie_find_x3f___redArg(v_t_362_, v_s_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_find_x3f___boxed(lean_object* v_00_u03b1_365_, lean_object* v_t_366_, lean_object* v_s_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_Data_Trie_find_x3f(v_00_u03b1_365_, v_t_366_, v_s_367_);
lean_dec_ref(v_s_367_);
lean_dec_ref(v_t_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg(lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
switch(lean_obj_tag(v_a_369_))
{
case 0:
{
lean_object* v_a_371_; 
v_a_371_ = lean_ctor_get(v_a_369_, 0);
if (lean_obj_tag(v_a_371_) == 1)
{
lean_object* v_val_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_val_372_ = lean_ctor_get(v_a_371_, 0);
v___x_373_ = lean_box(0);
lean_inc(v_val_372_);
v___x_374_ = lean_array_push(v_a_370_, v_val_372_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_box(0);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v_a_370_);
return v___x_377_;
}
}
case 1:
{
lean_object* v_a_378_; 
v_a_378_ = lean_ctor_get(v_a_369_, 0);
if (lean_obj_tag(v_a_378_) == 1)
{
lean_object* v_a_379_; lean_object* v_val_380_; lean_object* v___x_381_; 
v_a_379_ = lean_ctor_get(v_a_369_, 1);
v_val_380_ = lean_ctor_get(v_a_378_, 0);
lean_inc(v_val_380_);
v___x_381_ = lean_array_push(v_a_370_, v_val_380_);
v_a_369_ = v_a_379_;
v_a_370_ = v___x_381_;
goto _start;
}
else
{
lean_object* v_a_383_; 
v_a_383_ = lean_ctor_get(v_a_369_, 1);
v_a_369_ = v_a_383_;
goto _start;
}
}
default: 
{
lean_object* v_a_385_; lean_object* v_a_386_; lean_object* v___y_388_; 
v_a_385_ = lean_ctor_get(v_a_369_, 0);
v_a_386_ = lean_ctor_get(v_a_369_, 2);
if (lean_obj_tag(v_a_385_) == 1)
{
lean_object* v_val_402_; lean_object* v___x_403_; 
v_val_402_ = lean_ctor_get(v_a_385_, 0);
lean_inc(v_val_402_);
v___x_403_ = lean_array_push(v_a_370_, v_val_402_);
v___y_388_ = v___x_403_;
goto v___jp_387_;
}
else
{
v___y_388_ = v_a_370_;
goto v___jp_387_;
}
v___jp_387_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = lean_array_get_size(v_a_386_);
v___x_391_ = lean_box(0);
v___x_392_ = lean_nat_dec_lt(v___x_389_, v___x_390_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_391_);
lean_ctor_set(v___x_393_, 1, v___y_388_);
return v___x_393_;
}
else
{
uint8_t v___x_394_; 
v___x_394_ = lean_nat_dec_le(v___x_390_, v___x_390_);
if (v___x_394_ == 0)
{
if (v___x_392_ == 0)
{
lean_object* v___x_395_; 
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_391_);
lean_ctor_set(v___x_395_, 1, v___y_388_);
return v___x_395_;
}
else
{
size_t v___x_396_; size_t v___x_397_; lean_object* v___x_398_; 
v___x_396_ = ((size_t)0ULL);
v___x_397_ = lean_usize_of_nat(v___x_390_);
v___x_398_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg(v_a_386_, v___x_396_, v___x_397_, v___x_391_, v___y_388_);
return v___x_398_;
}
}
else
{
size_t v___x_399_; size_t v___x_400_; lean_object* v___x_401_; 
v___x_399_ = ((size_t)0ULL);
v___x_400_ = lean_usize_of_nat(v___x_390_);
v___x_401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg(v_a_386_, v___x_399_, v___x_400_, v___x_391_, v___y_388_);
return v___x_401_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg(lean_object* v_as_404_, size_t v_i_405_, size_t v_stop_406_, lean_object* v_b_407_, lean_object* v___y_408_){
_start:
{
uint8_t v___x_409_; 
v___x_409_ = lean_usize_dec_eq(v_i_405_, v_stop_406_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v_fst_412_; lean_object* v_snd_413_; size_t v___x_414_; size_t v___x_415_; 
v___x_410_ = lean_array_uget_borrowed(v_as_404_, v_i_405_);
v___x_411_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg(v___x_410_, v___y_408_);
v_fst_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_fst_412_);
v_snd_413_ = lean_ctor_get(v___x_411_, 1);
lean_inc(v_snd_413_);
lean_dec_ref(v___x_411_);
v___x_414_ = ((size_t)1ULL);
v___x_415_ = lean_usize_add(v_i_405_, v___x_414_);
v_i_405_ = v___x_415_;
v_b_407_ = v_fst_412_;
v___y_408_ = v_snd_413_;
goto _start;
}
else
{
lean_object* v___x_417_; 
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v_b_407_);
lean_ctor_set(v___x_417_, 1, v___y_408_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg___boxed(lean_object* v_as_418_, lean_object* v_i_419_, lean_object* v_stop_420_, lean_object* v_b_421_, lean_object* v___y_422_){
_start:
{
size_t v_i_boxed_423_; size_t v_stop_boxed_424_; lean_object* v_res_425_; 
v_i_boxed_423_ = lean_unbox_usize(v_i_419_);
lean_dec(v_i_419_);
v_stop_boxed_424_ = lean_unbox_usize(v_stop_420_);
lean_dec(v_stop_420_);
v_res_425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg(v_as_418_, v_i_boxed_423_, v_stop_boxed_424_, v_b_421_, v___y_422_);
lean_dec_ref(v_as_418_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg___boxed(lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg(v_a_426_, v_a_427_);
lean_dec_ref(v_a_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go(lean_object* v_00_u03b1_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg(v_a_430_, v_a_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___boxed(lean_object* v_00_u03b1_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go(v_00_u03b1_433_, v_a_434_, v_a_435_);
lean_dec_ref(v_a_434_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0(lean_object* v_00_u03b1_437_, lean_object* v_as_438_, size_t v_i_439_, size_t v_stop_440_, lean_object* v_b_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___redArg(v_as_438_, v_i_439_, v_stop_440_, v_b_441_, v___y_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0___boxed(lean_object* v_00_u03b1_444_, lean_object* v_as_445_, lean_object* v_i_446_, lean_object* v_stop_447_, lean_object* v_b_448_, lean_object* v___y_449_){
_start:
{
size_t v_i_boxed_450_; size_t v_stop_boxed_451_; lean_object* v_res_452_; 
v_i_boxed_450_ = lean_unbox_usize(v_i_446_);
lean_dec(v_i_446_);
v_stop_boxed_451_ = lean_unbox_usize(v_stop_447_);
lean_dec(v_stop_447_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_values_go_spec__0(v_00_u03b1_444_, v_as_445_, v_i_boxed_450_, v_stop_boxed_451_, v_b_448_, v___y_449_);
lean_dec_ref(v_as_445_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values___redArg(lean_object* v_t_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v_snd_458_; 
v___x_456_ = ((lean_object*)(l_Lean_Data_Trie_values___redArg___closed__0));
v___x_457_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_values_go___redArg(v_t_455_, v___x_456_);
v_snd_458_ = lean_ctor_get(v___x_457_, 1);
lean_inc(v_snd_458_);
lean_dec_ref(v___x_457_);
return v_snd_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values___redArg___boxed(lean_object* v_t_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_Data_Trie_values___redArg(v_t_459_);
lean_dec_ref(v_t_459_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values(lean_object* v_00_u03b1_461_, lean_object* v_t_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Lean_Data_Trie_values___redArg(v_t_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_values___boxed(lean_object* v_00_u03b1_464_, lean_object* v_t_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_Data_Trie_values(v_00_u03b1_464_, v_t_465_);
lean_dec_ref(v_t_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg(lean_object* v_pre_469_, lean_object* v_t_470_, lean_object* v_i_471_){
_start:
{
lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_472_ = lean_string_utf8_byte_size(v_pre_469_);
v___x_473_ = lean_nat_dec_lt(v_i_471_, v___x_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; 
lean_dec(v_i_471_);
v___x_474_ = l_Lean_Data_Trie_values___redArg(v_t_470_);
return v___x_474_;
}
else
{
uint8_t v_c_475_; 
lean_inc(v_i_471_);
v_c_475_ = lean_string_get_byte_fast(v_pre_469_, v_i_471_);
switch(lean_obj_tag(v_t_470_))
{
case 0:
{
lean_object* v___x_476_; 
lean_dec(v_i_471_);
v___x_476_ = ((lean_object*)(l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___closed__0));
return v___x_476_;
}
case 1:
{
uint8_t v_a_477_; lean_object* v_a_478_; uint8_t v___x_479_; 
v_a_477_ = lean_ctor_get_uint8(v_t_470_, sizeof(void*)*2);
v_a_478_ = lean_ctor_get(v_t_470_, 1);
v___x_479_ = lean_uint8_dec_eq(v_c_475_, v_a_477_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
lean_dec(v_i_471_);
v___x_480_ = ((lean_object*)(l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___closed__0));
return v___x_480_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_unsigned_to_nat(1u);
v___x_482_ = lean_nat_add(v_i_471_, v___x_481_);
lean_dec(v_i_471_);
v_t_470_ = v_a_478_;
v_i_471_ = v___x_482_;
goto _start;
}
}
default: 
{
lean_object* v_a_484_; lean_object* v_a_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v_a_484_ = lean_ctor_get(v_t_470_, 1);
v_a_485_ = lean_ctor_get(v_t_470_, 2);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(v_c_475_, v_a_484_, v___x_486_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v___x_488_; 
lean_dec(v_i_471_);
v___x_488_ = ((lean_object*)(l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___closed__0));
return v___x_488_;
}
else
{
lean_object* v_val_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_val_489_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_val_489_);
lean_dec_ref_known(v___x_487_, 1);
v___x_490_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
v___x_491_ = lean_array_get_borrowed(v___x_490_, v_a_485_, v_val_489_);
lean_dec(v_val_489_);
v___x_492_ = lean_unsigned_to_nat(1u);
v___x_493_ = lean_nat_add(v_i_471_, v___x_492_);
lean_dec(v_i_471_);
v_t_470_ = v___x_491_;
v_i_471_ = v___x_493_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg___boxed(lean_object* v_pre_495_, lean_object* v_t_496_, lean_object* v_i_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg(v_pre_495_, v_t_496_, v_i_497_);
lean_dec_ref(v_t_496_);
lean_dec_ref(v_pre_495_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go(lean_object* v_00_u03b1_499_, lean_object* v_pre_500_, lean_object* v_t_501_, lean_object* v_i_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg(v_pre_500_, v_t_501_, v_i_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___boxed(lean_object* v_00_u03b1_504_, lean_object* v_pre_505_, lean_object* v_t_506_, lean_object* v_i_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go(v_00_u03b1_504_, v_pre_505_, v_t_506_, v_i_507_);
lean_dec_ref(v_t_506_);
lean_dec_ref(v_pre_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix___redArg(lean_object* v_t_509_, lean_object* v_pre_510_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_findPrefix_go___redArg(v_pre_510_, v_t_509_, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix___redArg___boxed(lean_object* v_t_513_, lean_object* v_pre_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_Data_Trie_findPrefix___redArg(v_t_513_, v_pre_514_);
lean_dec_ref(v_pre_514_);
lean_dec_ref(v_t_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix(lean_object* v_00_u03b1_516_, lean_object* v_t_517_, lean_object* v_pre_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = l_Lean_Data_Trie_findPrefix___redArg(v_t_517_, v_pre_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_findPrefix___boxed(lean_object* v_00_u03b1_520_, lean_object* v_t_521_, lean_object* v_pre_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_Data_Trie_findPrefix(v_00_u03b1_520_, v_t_521_, v_pre_522_);
lean_dec_ref(v_pre_522_);
lean_dec_ref(v_t_521_);
return v_res_523_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__12(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__10));
v___x_551_ = l_Lean_mkAtom(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__13(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__12, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__12_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__12);
v___x_553_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__5));
v___x_554_ = lean_array_push(v___x_553_, v___x_552_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__17(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__16));
v___x_566_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__5));
v___x_567_ = lean_array_push(v___x_566_, v___x_565_);
return v___x_567_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__18(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_568_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__17, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__17_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__17);
v___x_569_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__15));
v___x_570_ = lean_box(2);
v___x_571_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
lean_ctor_set(v___x_571_, 1, v___x_569_);
lean_ctor_set(v___x_571_, 2, v___x_568_);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__19(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__18, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__18_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__18);
v___x_573_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__13, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__13_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__13);
v___x_574_ = lean_array_push(v___x_573_, v___x_572_);
return v___x_574_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__20(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__16));
v___x_576_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__19, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__19_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__19);
v___x_577_ = lean_array_push(v___x_576_, v___x_575_);
return v___x_577_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__21(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__16));
v___x_579_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__20, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__20_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__20);
v___x_580_ = lean_array_push(v___x_579_, v___x_578_);
return v___x_580_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__22(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_581_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__16));
v___x_582_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__21, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__21_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__21);
v___x_583_ = lean_array_push(v___x_582_, v___x_581_);
return v___x_583_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__23(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_584_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__16));
v___x_585_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__22, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__22_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__22);
v___x_586_ = lean_array_push(v___x_585_, v___x_584_);
return v___x_586_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__24(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_587_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__23, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__23_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__23);
v___x_588_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__11));
v___x_589_ = lean_box(2);
v___x_590_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set(v___x_590_, 1, v___x_588_);
lean_ctor_set(v___x_590_, 2, v___x_587_);
return v___x_590_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__25(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__24, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__24_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__24);
v___x_592_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__5));
v___x_593_ = lean_array_push(v___x_592_, v___x_591_);
return v___x_593_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__26(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_594_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__25, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__25_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__25);
v___x_595_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__9));
v___x_596_ = lean_box(2);
v___x_597_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___x_595_);
lean_ctor_set(v___x_597_, 2, v___x_594_);
return v___x_597_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__27(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_598_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__26, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__26_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__26);
v___x_599_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__5));
v___x_600_ = lean_array_push(v___x_599_, v___x_598_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__28(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_601_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__27, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__27_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__27);
v___x_602_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__7));
v___x_603_ = lean_box(2);
v___x_604_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set(v___x_604_, 1, v___x_602_);
lean_ctor_set(v___x_604_, 2, v___x_601_);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__29(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_605_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__28, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__28_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__28);
v___x_606_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__5));
v___x_607_ = lean_array_push(v___x_606_, v___x_605_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__30(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_608_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__29, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__29_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__29);
v___x_609_ = ((lean_object*)(l_Lean_Data_Trie_matchPrefix___auto__1___closed__4));
v___x_610_ = lean_box(2);
v___x_611_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
lean_ctor_set(v___x_611_, 1, v___x_609_);
lean_ctor_set(v___x_611_, 2, v___x_608_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_Data_Trie_matchPrefix___auto__1(void){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_obj_once(&l_Lean_Data_Trie_matchPrefix___auto__1___closed__30, &l_Lean_Data_Trie_matchPrefix___auto__1___closed__30_once, _init_l_Lean_Data_Trie_matchPrefix___auto__1___closed__30);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg(lean_object* v_s_613_, lean_object* v_endByte_614_, lean_object* v_x_615_, lean_object* v_x_616_, lean_object* v_x_617_){
_start:
{
switch(lean_obj_tag(v_x_615_))
{
case 0:
{
lean_object* v_a_618_; 
lean_dec(v_x_616_);
v_a_618_ = lean_ctor_get(v_x_615_, 0);
if (lean_obj_tag(v_a_618_) == 0)
{
lean_inc(v_x_617_);
return v_x_617_;
}
else
{
lean_inc_ref(v_a_618_);
return v_a_618_;
}
}
case 1:
{
lean_object* v_a_619_; uint8_t v_a_620_; lean_object* v_a_621_; lean_object* v___y_623_; 
v_a_619_ = lean_ctor_get(v_x_615_, 0);
v_a_620_ = lean_ctor_get_uint8(v_x_615_, sizeof(void*)*2);
v_a_621_ = lean_ctor_get(v_x_615_, 1);
if (lean_obj_tag(v_a_619_) == 0)
{
v___y_623_ = v_x_617_;
goto v___jp_622_;
}
else
{
v___y_623_ = v_a_619_;
goto v___jp_622_;
}
v___jp_622_:
{
uint8_t v___x_624_; 
v___x_624_ = lean_nat_dec_lt(v_x_616_, v_endByte_614_);
if (v___x_624_ == 0)
{
lean_dec(v_x_616_);
lean_inc(v___y_623_);
return v___y_623_;
}
else
{
uint8_t v_c_625_; uint8_t v___x_626_; 
lean_inc(v_x_616_);
v_c_625_ = lean_string_get_byte_fast(v_s_613_, v_x_616_);
v___x_626_ = lean_uint8_dec_eq(v_c_625_, v_a_620_);
if (v___x_626_ == 0)
{
lean_dec(v_x_616_);
lean_inc(v___y_623_);
return v___y_623_;
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_add(v_x_616_, v___x_627_);
lean_dec(v_x_616_);
v_x_615_ = v_a_621_;
v_x_616_ = v___x_628_;
v_x_617_ = v___y_623_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_a_630_; lean_object* v_a_631_; lean_object* v_a_632_; lean_object* v___x_633_; lean_object* v___y_635_; 
v_a_630_ = lean_ctor_get(v_x_615_, 0);
v_a_631_ = lean_ctor_get(v_x_615_, 1);
v_a_632_ = lean_ctor_get(v_x_615_, 2);
v___x_633_ = lean_obj_once(&l_Lean_Data_Trie_empty___closed__0, &l_Lean_Data_Trie_empty___closed__0_once, _init_l_Lean_Data_Trie_empty___closed__0);
if (lean_obj_tag(v_a_630_) == 0)
{
v___y_635_ = v_x_617_;
goto v___jp_634_;
}
else
{
v___y_635_ = v_a_630_;
goto v___jp_634_;
}
v___jp_634_:
{
uint8_t v___x_636_; 
v___x_636_ = lean_nat_dec_lt(v_x_616_, v_endByte_614_);
if (v___x_636_ == 0)
{
lean_dec(v_x_616_);
lean_inc(v___y_635_);
return v___y_635_;
}
else
{
uint8_t v_c_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
lean_inc(v_x_616_);
v_c_637_ = lean_string_get_byte_fast(v_s_613_, v_x_616_);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = l_ByteArray_findIdx_x3f_loop___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_upsert_loop_spec__0(v_c_637_, v_a_631_, v___x_638_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_dec(v_x_616_);
lean_inc(v___y_635_);
return v___y_635_;
}
else
{
lean_object* v_val_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_val_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_val_640_);
lean_dec_ref_known(v___x_639_, 1);
v___x_641_ = lean_array_get_borrowed(v___x_633_, v_a_632_, v_val_640_);
lean_dec(v_val_640_);
v___x_642_ = lean_unsigned_to_nat(1u);
v___x_643_ = lean_nat_add(v_x_616_, v___x_642_);
lean_dec(v_x_616_);
v_x_615_ = v___x_641_;
v_x_616_ = v___x_643_;
v_x_617_ = v___y_635_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg___boxed(lean_object* v_s_645_, lean_object* v_endByte_646_, lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg(v_s_645_, v_endByte_646_, v_x_647_, v_x_648_, v_x_649_);
lean_dec(v_x_649_);
lean_dec_ref(v_x_647_);
lean_dec(v_endByte_646_);
lean_dec_ref(v_s_645_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop(lean_object* v_00_u03b1_651_, lean_object* v_s_652_, lean_object* v_endByte_653_, lean_object* v_endByte__valid_654_, lean_object* v_x_655_, lean_object* v_x_656_, lean_object* v_x_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg(v_s_652_, v_endByte_653_, v_x_655_, v_x_656_, v_x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___boxed(lean_object* v_00_u03b1_659_, lean_object* v_s_660_, lean_object* v_endByte_661_, lean_object* v_endByte__valid_662_, lean_object* v_x_663_, lean_object* v_x_664_, lean_object* v_x_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop(v_00_u03b1_659_, v_s_660_, v_endByte_661_, v_endByte__valid_662_, v_x_663_, v_x_664_, v_x_665_);
lean_dec(v_x_665_);
lean_dec_ref(v_x_663_);
lean_dec(v_endByte_661_);
lean_dec_ref(v_s_660_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___redArg(lean_object* v_s_667_, lean_object* v_t_668_, lean_object* v_i_669_, lean_object* v_endByte_670_){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_box(0);
v___x_672_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_matchPrefix_loop___redArg(v_s_667_, v_endByte_670_, v_t_668_, v_i_669_, v___x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___redArg___boxed(lean_object* v_s_673_, lean_object* v_t_674_, lean_object* v_i_675_, lean_object* v_endByte_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Data_Trie_matchPrefix___redArg(v_s_673_, v_t_674_, v_i_675_, v_endByte_676_);
lean_dec(v_endByte_676_);
lean_dec_ref(v_t_674_);
lean_dec_ref(v_s_673_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix(lean_object* v_00_u03b1_678_, lean_object* v_s_679_, lean_object* v_t_680_, lean_object* v_i_681_, lean_object* v_endByte_682_, lean_object* v_endByte__valid_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_Data_Trie_matchPrefix___redArg(v_s_679_, v_t_680_, v_i_681_, v_endByte_682_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_matchPrefix___boxed(lean_object* v_00_u03b1_685_, lean_object* v_s_686_, lean_object* v_t_687_, lean_object* v_i_688_, lean_object* v_endByte_689_, lean_object* v_endByte__valid_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_Data_Trie_matchPrefix(v_00_u03b1_685_, v_s_686_, v_t_687_, v_i_688_, v_endByte_689_, v_endByte__valid_690_);
lean_dec(v_endByte_689_);
lean_dec_ref(v_t_687_);
lean_dec_ref(v_s_686_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0_spec__0(lean_object* v_x_692_, lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
if (lean_obj_tag(v_x_694_) == 0)
{
lean_dec(v_x_692_);
return v_x_693_;
}
else
{
lean_object* v_head_695_; lean_object* v_tail_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_705_; 
v_head_695_ = lean_ctor_get(v_x_694_, 0);
v_tail_696_ = lean_ctor_get(v_x_694_, 1);
v_isSharedCheck_705_ = !lean_is_exclusive(v_x_694_);
if (v_isSharedCheck_705_ == 0)
{
v___x_698_ = v_x_694_;
v_isShared_699_ = v_isSharedCheck_705_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_tail_696_);
lean_inc(v_head_695_);
lean_dec(v_x_694_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_705_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
lean_inc(v_x_692_);
if (v_isShared_699_ == 0)
{
lean_ctor_set_tag(v___x_698_, 5);
lean_ctor_set(v___x_698_, 1, v_x_692_);
lean_ctor_set(v___x_698_, 0, v_x_693_);
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_x_693_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_x_692_);
v___x_701_ = v_reuseFailAlloc_704_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set(v___x_702_, 1, v_head_695_);
v_x_693_ = v___x_702_;
v_x_694_ = v_tail_696_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0(lean_object* v_x_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_706_) == 0)
{
lean_object* v___x_708_; 
lean_dec(v_x_707_);
v___x_708_ = lean_box(0);
return v___x_708_;
}
else
{
lean_object* v_tail_709_; 
v_tail_709_ = lean_ctor_get(v_x_706_, 1);
if (lean_obj_tag(v_tail_709_) == 0)
{
lean_object* v_head_710_; 
lean_dec(v_x_707_);
v_head_710_ = lean_ctor_get(v_x_706_, 0);
lean_inc(v_head_710_);
lean_dec_ref_known(v_x_706_, 2);
return v_head_710_;
}
else
{
lean_object* v_head_711_; lean_object* v___x_712_; 
lean_inc(v_tail_709_);
v_head_711_ = lean_ctor_get(v_x_706_, 0);
lean_inc(v_head_711_);
lean_dec_ref_known(v_x_706_, 2);
v___x_712_ = l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0_spec__0(v_x_707_, v_head_711_, v_tail_709_);
return v___x_712_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__1(lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
if (lean_obj_tag(v_a_713_) == 0)
{
lean_object* v___x_715_; 
v___x_715_ = lean_array_to_list(v_a_714_);
return v___x_715_;
}
else
{
lean_object* v_head_716_; lean_object* v_tail_717_; lean_object* v___x_718_; 
v_head_716_ = lean_ctor_get(v_a_713_, 0);
lean_inc(v_head_716_);
v_tail_717_ = lean_ctor_get(v_a_713_, 1);
lean_inc(v_tail_717_);
lean_dec_ref_known(v_a_713_, 2);
v___x_718_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_714_, v_head_716_);
v_a_713_ = v_tail_717_;
v_a_714_ = v___x_718_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_unsigned_to_nat(4u);
v___x_721_ = lean_nat_to_int(v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___boxed(lean_object* v_c_722_, lean_object* v_t_723_){
_start:
{
uint8_t v_c_boxed_724_; lean_object* v_res_725_; 
v_c_boxed_724_ = lean_unbox(v_c_722_);
v_res_725_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0(v_c_boxed_724_, v_t_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(lean_object* v_x_728_){
_start:
{
switch(lean_obj_tag(v_x_728_))
{
case 0:
{
lean_object* v___x_729_; 
lean_dec_ref_known(v_x_728_, 1);
v___x_729_ = lean_box(0);
return v___x_729_;
}
case 1:
{
uint8_t v_a_730_; lean_object* v_a_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v_a_730_ = lean_ctor_get_uint8(v_x_728_, sizeof(void*)*2);
v_a_731_ = lean_ctor_get(v_x_728_, 1);
lean_inc_ref(v_a_731_);
lean_dec_ref_known(v_x_728_, 2);
v___x_732_ = lean_uint8_to_nat(v_a_730_);
v___x_733_ = l_Nat_reprFast(v___x_732_);
v___x_734_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
v___x_735_ = lean_obj_once(&l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0, &l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0_once, _init_l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0);
v___x_736_ = lean_box(1);
v___x_737_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(v_a_731_);
v___x_738_ = l_Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0(v___x_737_, v___x_736_);
v___x_739_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_735_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = 0;
v___x_741_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set_uint8(v___x_741_, sizeof(void*)*1, v___x_740_);
v___x_742_ = lean_box(0);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_734_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
return v___x_744_;
}
default: 
{
lean_object* v_a_745_; lean_object* v_a_746_; lean_object* v___f_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_a_745_ = lean_ctor_get(v_x_728_, 1);
lean_inc_ref(v_a_745_);
v_a_746_ = lean_ctor_get(v_x_728_, 2);
lean_inc_ref(v_a_746_);
lean_dec_ref_known(v_x_728_, 3);
v___f_747_ = lean_alloc_closure((void*)(l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___boxed), 2, 0);
v___x_748_ = l_ByteArray_toList(v_a_745_);
lean_dec_ref(v_a_745_);
v___x_749_ = lean_array_to_list(v_a_746_);
v___x_750_ = ((lean_object*)(l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___closed__0));
v___x_751_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_box(0), lean_box(0), lean_box(0), v___f_747_, v___x_748_, v___x_749_, v___x_750_);
v___x_752_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__1(v___x_751_, v___x_750_);
return v___x_752_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0(uint8_t v_c_753_, lean_object* v_t_754_){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_755_ = lean_uint8_to_nat(v_c_753_);
v___x_756_ = l_Nat_reprFast(v___x_755_);
v___x_757_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = lean_obj_once(&l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0, &l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0_once, _init_l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg___lam__0___closed__0);
v___x_759_ = lean_box(1);
v___x_760_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(v_t_754_);
v___x_761_ = l_Std_Format_joinSep___at___00__private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux_spec__0(v___x_760_, v___x_759_);
v___x_762_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_758_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = 0;
v___x_764_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set_uint8(v___x_764_, sizeof(void*)*1, v___x_763_);
v___x_765_ = lean_box(0);
v___x_766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_757_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux(lean_object* v_00_u03b1_768_, lean_object* v_x_769_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(v_x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___private__1___redArg(lean_object* v_t_772_){
_start:
{
lean_object* v___f_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___f_773_ = ((lean_object*)(l_Lean_Data_Trie_instToString___private__1___redArg___closed__0));
v___x_774_ = lean_box(1);
v___x_775_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(v_t_772_);
v___x_776_ = l_Std_Format_joinSep___redArg(v___f_773_, v___x_775_, v___x_774_);
v___x_777_ = l_Std_Format_defWidth;
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = l_Std_Format_pretty(v___x_776_, v___x_777_, v___x_778_, v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___private__1(lean_object* v_00_u03b1_780_, lean_object* v_t_781_){
_start:
{
lean_object* v___f_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___f_782_ = ((lean_object*)(l_Lean_Data_Trie_instToString___private__1___redArg___closed__0));
v___x_783_ = lean_box(1);
v___x_784_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(v_t_781_);
v___x_785_ = l_Std_Format_joinSep___redArg(v___f_782_, v___x_784_, v___x_783_);
v___x_786_ = l_Std_Format_defWidth;
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l_Std_Format_pretty(v___x_785_, v___x_786_, v___x_787_, v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___redArg___lam__0(lean_object* v_t_789_){
_start:
{
lean_object* v___f_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___f_790_ = ((lean_object*)(l_Lean_Data_Trie_instToString___private__1___redArg___closed__0));
v___x_791_ = lean_box(1);
v___x_792_ = l___private_Lean_Data_Trie_0__Lean_Data_Trie_toStringAux___redArg(v_t_789_);
v___x_793_ = l_Std_Format_joinSep___redArg(v___f_790_, v___x_792_, v___x_791_);
v___x_794_ = l_Std_Format_defWidth;
v___x_795_ = lean_unsigned_to_nat(0u);
v___x_796_ = l_Std_Format_pretty(v___x_793_, v___x_794_, v___x_795_, v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___redArg(){
_start:
{
lean_object* v___f_799_; 
v___f_799_ = ((lean_object*)(l_Lean_Data_Trie_instToString___redArg___closed__0));
return v___f_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString___redArg___boxed(lean_object* v___dummy_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_Data_Trie_instToString___redArg();
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_Trie_instToString(lean_object* v_00_u03b1_802_){
_start:
{
lean_object* v___f_803_; 
v___f_803_ = ((lean_object*)(l_Lean_Data_Trie_instToString___redArg___closed__0));
return v___f_803_;
}
}
lean_object* runtime_initialize_Lean_Data_Format(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Trie(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Trie(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Data_Trie_matchPrefix___auto__1 = _init_l_Lean_Data_Trie_matchPrefix___auto__1();
lean_mark_persistent(l_Lean_Data_Trie_matchPrefix___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Format(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Trie(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Trie(builtin);
}
#ifdef __cplusplus
}
#endif

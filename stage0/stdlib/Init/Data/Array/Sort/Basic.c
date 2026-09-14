// Lean compiler output
// Module: Init.Data.Array.Sort.Basic
// Imports: public import Init.Data.Array.Subarray.Split public import Init.Data.Slice.Array import Init.Omega
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4_value;
static const lean_array_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__13;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__19_value;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__20;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__21;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__24_value;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__25;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__26;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__27;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__28;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__29;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__31;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__32;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__33;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_≤_"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__34_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(111, 3, 61, 112, 38, 138, 106, 121)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__35_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__36_value;
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__38_value;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__39;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__40;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__41;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__43;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≤"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__44 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__44_value;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__45;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__46;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__47;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__48;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__49;
static const lean_string_object l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__50 = (const lean_object*)&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__50_value;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__51;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__52;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__53;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__54;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__55;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__56;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__57;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__58;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__59;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__60;
static lean_once_cell_t l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subarray_mergeSort___auto__1;
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Subarray_mergeSort_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_Subarray_mergeSort___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Subarray_mergeSort___redArg___closed__0 = (const lean_object*)&l_Subarray_mergeSort___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Subarray_mergeSort___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subarray_mergeSort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Subarray_mergeSort_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mergeSort___auto__1;
LEAN_EXPORT lean_object* l_Array_mergeSort___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mergeSort(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__10));
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__12, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__12_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__12);
v___x_30_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__20(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__19));
v___x_47_ = l_Lean_mkAtom(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__21(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__20, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__20_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__20);
v___x_49_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_50_ = lean_array_push(v___x_49_, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__25(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__24));
v___x_56_ = lean_string_utf8_byte_size(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__26(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__25, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__25_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__25);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__24));
v___x_60_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_58_);
lean_ctor_set(v___x_60_, 2, v___x_57_);
return v___x_60_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__27(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_box(0);
v___x_62_ = l_unsafeCast___redArg(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__28(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_63_ = lean_box(0);
v___x_64_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__27, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__27_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__27);
v___x_65_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__26, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__26_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__26);
v___x_66_ = lean_box(2);
v___x_67_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set(v___x_67_, 2, v___x_64_);
lean_ctor_set(v___x_67_, 3, v___x_63_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__29(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__28, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__28_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__28);
v___x_69_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_70_ = lean_array_push(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__29, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__29_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__29);
v___x_72_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__23));
v___x_73_ = lean_box(2);
v___x_74_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__31(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30);
v___x_76_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__21, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__21_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__21);
v___x_77_ = lean_array_push(v___x_76_, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__32(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__31, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__31_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__31);
v___x_79_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__18));
v___x_80_ = lean_box(2);
v___x_81_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_79_);
lean_ctor_set(v___x_81_, 2, v___x_78_);
return v___x_81_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__33(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__32, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__32_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__32);
v___x_83_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_84_ = lean_array_push(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__39(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__38));
v___x_96_ = l_Lean_mkAtom(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__40(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__39, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__39_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__39);
v___x_98_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_99_ = lean_array_push(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__41(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__30);
v___x_101_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__40, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__40_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__40);
v___x_102_ = lean_array_push(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__41, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__41_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__41);
v___x_104_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__37));
v___x_105_ = lean_box(2);
v___x_106_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
lean_ctor_set(v___x_106_, 2, v___x_103_);
return v___x_106_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__43(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42);
v___x_108_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_109_ = lean_array_push(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__45(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__44));
v___x_112_ = l_Lean_mkAtom(v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__46(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__45, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__45_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__45);
v___x_114_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__43, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__43_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__43);
v___x_115_ = lean_array_push(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__47(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__42);
v___x_117_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__46, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__46_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__46);
v___x_118_ = lean_array_push(v___x_117_, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__48(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_119_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__47, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__47_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__47);
v___x_120_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__35));
v___x_121_ = lean_box(2);
v___x_122_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
lean_ctor_set(v___x_122_, 2, v___x_119_);
return v___x_122_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__49(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__48, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__48_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__48);
v___x_124_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__33, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__33_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__33);
v___x_125_ = lean_array_push(v___x_124_, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__51(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__50));
v___x_128_ = l_Lean_mkAtom(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__52(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__51, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__51_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__51);
v___x_130_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__49, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__49_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__49);
v___x_131_ = lean_array_push(v___x_130_, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__53(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_132_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__52, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__52_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__52);
v___x_133_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__16));
v___x_134_ = lean_box(2);
v___x_135_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set(v___x_135_, 2, v___x_132_);
return v___x_135_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__54(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__53, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__53_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__53);
v___x_137_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__13, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__13_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__13);
v___x_138_ = lean_array_push(v___x_137_, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__55(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_139_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__54, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__54_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__54);
v___x_140_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__11));
v___x_141_ = lean_box(2);
v___x_142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
lean_ctor_set(v___x_142_, 2, v___x_139_);
return v___x_142_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__56(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_143_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__55, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__55_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__55);
v___x_144_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_145_ = lean_array_push(v___x_144_, v___x_143_);
return v___x_145_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__57(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__56, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__56_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__56);
v___x_147_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__9));
v___x_148_ = lean_box(2);
v___x_149_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v___x_147_);
lean_ctor_set(v___x_149_, 2, v___x_146_);
return v___x_149_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__58(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__57, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__57_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__57);
v___x_151_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_152_ = lean_array_push(v___x_151_, v___x_150_);
return v___x_152_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__59(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_153_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__58, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__58_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__58);
v___x_154_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__7));
v___x_155_ = lean_box(2);
v___x_156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
lean_ctor_set(v___x_156_, 2, v___x_153_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__60(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__59, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__59_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__59);
v___x_158_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__5));
v___x_159_ = lean_array_push(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__60, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__60_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__60);
v___x_161_ = ((lean_object*)(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__4));
v___x_162_ = lean_box(2);
v___x_163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___x_161_);
lean_ctor_set(v___x_163_, 2, v___x_160_);
return v___x_163_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0___redArg(lean_object* v_a_165_, lean_object* v_b_166_){
_start:
{
lean_object* v_array_167_; lean_object* v_start_168_; lean_object* v_stop_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_182_; 
v_array_167_ = lean_ctor_get(v_a_165_, 0);
v_start_168_ = lean_ctor_get(v_a_165_, 1);
v_stop_169_ = lean_ctor_get(v_a_165_, 2);
v_isSharedCheck_182_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_182_ == 0)
{
v___x_171_ = v_a_165_;
v_isShared_172_ = v_isSharedCheck_182_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_stop_169_);
lean_inc(v_start_168_);
lean_inc(v_array_167_);
lean_dec(v_a_165_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_182_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
uint8_t v___x_173_; 
v___x_173_ = lean_nat_dec_lt(v_start_168_, v_stop_169_);
if (v___x_173_ == 0)
{
lean_del_object(v___x_171_);
lean_dec(v_stop_169_);
lean_dec(v_start_168_);
lean_dec_ref(v_array_167_);
return v_b_166_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_174_ = lean_unsigned_to_nat(1u);
v___x_175_ = lean_nat_add(v_start_168_, v___x_174_);
lean_inc_ref(v_array_167_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 1, v___x_175_);
v___x_177_ = v___x_171_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_array_167_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_181_, 2, v_stop_169_);
v___x_177_ = v_reuseFailAlloc_181_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_array_fget(v_array_167_, v_start_168_);
lean_dec(v_start_168_);
lean_dec_ref(v_array_167_);
v___x_179_ = lean_array_push(v_b_166_, v___x_178_);
v_a_165_ = v___x_177_;
v_b_166_ = v___x_179_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go___redArg(lean_object* v_le_183_, lean_object* v_xs_184_, lean_object* v_ys_185_, lean_object* v_acc_186_){
_start:
{
lean_object* v_start_187_; lean_object* v_stop_188_; lean_object* v_start_189_; lean_object* v_stop_190_; lean_object* v___x_191_; lean_object* v_x_192_; lean_object* v_y_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v_start_187_ = lean_ctor_get(v_xs_184_, 1);
v_stop_188_ = lean_ctor_get(v_xs_184_, 2);
v_start_189_ = lean_ctor_get(v_ys_185_, 1);
v_stop_190_ = lean_ctor_get(v_ys_185_, 2);
v___x_191_ = lean_unsigned_to_nat(0u);
v_x_192_ = l_Subarray_get___redArg(v_xs_184_, v___x_191_);
v_y_193_ = l_Subarray_get___redArg(v_ys_185_, v___x_191_);
lean_inc_ref(v_le_183_);
lean_inc(v_y_193_);
lean_inc(v_x_192_);
v___x_194_ = lean_apply_2(v_le_183_, v_x_192_, v_y_193_);
v___x_195_ = lean_unbox(v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
lean_dec(v_x_192_);
v___x_196_ = lean_nat_sub(v_stop_190_, v_start_189_);
v___x_197_ = lean_unsigned_to_nat(1u);
v___x_198_ = lean_nat_dec_lt(v___x_197_, v___x_196_);
lean_dec(v___x_196_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec_ref(v_ys_185_);
lean_dec_ref(v_le_183_);
v___x_199_ = lean_array_push(v_acc_186_, v_y_193_);
v___x_200_ = l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0___redArg(v_xs_184_, v___x_199_);
return v___x_200_;
}
else
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = l_Subarray_drop___redArg(v_ys_185_, v___x_197_);
v___x_202_ = lean_array_push(v_acc_186_, v_y_193_);
v_ys_185_ = v___x_201_;
v_acc_186_ = v___x_202_;
goto _start;
}
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
lean_dec(v_y_193_);
v___x_204_ = lean_nat_sub(v_stop_188_, v_start_187_);
v___x_205_ = lean_unsigned_to_nat(1u);
v___x_206_ = lean_nat_dec_lt(v___x_205_, v___x_204_);
lean_dec(v___x_204_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; 
lean_dec_ref(v_xs_184_);
lean_dec_ref(v_le_183_);
v___x_207_ = lean_array_push(v_acc_186_, v_x_192_);
v___x_208_ = l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0___redArg(v_ys_185_, v___x_207_);
return v___x_208_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = l_Subarray_drop___redArg(v_xs_184_, v___x_205_);
v___x_210_ = lean_array_push(v_acc_186_, v_x_192_);
v_xs_184_ = v___x_209_;
v_acc_186_ = v___x_210_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go(lean_object* v_00_u03b1_212_, lean_object* v_le_213_, lean_object* v_xs_214_, lean_object* v_ys_215_, lean_object* v_hxs_216_, lean_object* v_hys_217_, lean_object* v_acc_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go___redArg(v_le_213_, v_xs_214_, v_ys_215_, v_acc_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0(lean_object* v_00_u03b1_220_, lean_object* v_inst_221_, lean_object* v_R_222_, lean_object* v_a_223_, lean_object* v_b_224_, lean_object* v_c_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_WellFounded_opaqueFix_u2083___at___00__private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go_spec__0___redArg(v_a_223_, v_b_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___redArg(lean_object* v_xs_227_, lean_object* v_ys_228_, lean_object* v_le_229_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = lean_array_get_size(v_xs_227_);
v___x_232_ = lean_nat_dec_lt(v___x_230_, v___x_231_);
if (v___x_232_ == 0)
{
lean_dec_ref(v_le_229_);
lean_dec_ref(v_xs_227_);
return v_ys_228_;
}
else
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = lean_array_get_size(v_ys_228_);
v___x_234_ = lean_nat_dec_lt(v___x_230_, v___x_233_);
if (v___x_234_ == 0)
{
lean_dec_ref(v_le_229_);
lean_dec_ref(v_ys_228_);
return v_xs_227_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_235_ = l_Array_toSubarray___redArg(v_xs_227_, v___x_230_, v___x_231_);
v___x_236_ = l_Array_toSubarray___redArg(v_ys_228_, v___x_230_, v___x_233_);
v___x_237_ = lean_nat_add(v___x_231_, v___x_233_);
v___x_238_ = lean_mk_empty_array_with_capacity(v___x_237_);
lean_dec(v___x_237_);
v___x_239_ = l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge_go___redArg(v_le_229_, v___x_235_, v___x_236_, v___x_238_);
return v___x_239_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge(lean_object* v_00_u03b1_240_, lean_object* v_xs_241_, lean_object* v_ys_242_, lean_object* v_le_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___redArg(v_xs_241_, v_ys_242_, v_le_243_);
return v___x_244_;
}
}
static lean_object* _init_l_Subarray_mergeSort___auto__1(void){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Subarray_mergeSort_spec__0___redArg(lean_object* v_a_246_, lean_object* v_b_247_){
_start:
{
lean_object* v_array_248_; lean_object* v_start_249_; lean_object* v_stop_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_263_; 
v_array_248_ = lean_ctor_get(v_a_246_, 0);
v_start_249_ = lean_ctor_get(v_a_246_, 1);
v_stop_250_ = lean_ctor_get(v_a_246_, 2);
v_isSharedCheck_263_ = !lean_is_exclusive(v_a_246_);
if (v_isSharedCheck_263_ == 0)
{
v___x_252_ = v_a_246_;
v_isShared_253_ = v_isSharedCheck_263_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_stop_250_);
lean_inc(v_start_249_);
lean_inc(v_array_248_);
lean_dec(v_a_246_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_263_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
uint8_t v___x_254_; 
v___x_254_ = lean_nat_dec_lt(v_start_249_, v_stop_250_);
if (v___x_254_ == 0)
{
lean_del_object(v___x_252_);
lean_dec(v_stop_250_);
lean_dec(v_start_249_);
lean_dec_ref(v_array_248_);
return v_b_247_;
}
else
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_258_; 
v___x_255_ = lean_unsigned_to_nat(1u);
v___x_256_ = lean_nat_add(v_start_249_, v___x_255_);
lean_inc_ref(v_array_248_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v___x_256_);
v___x_258_ = v___x_252_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_array_248_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_256_);
lean_ctor_set(v_reuseFailAlloc_262_, 2, v_stop_250_);
v___x_258_ = v_reuseFailAlloc_262_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = lean_array_fget(v_array_248_, v_start_249_);
lean_dec(v_start_249_);
lean_dec_ref(v_array_248_);
v___x_260_ = lean_array_push(v_b_247_, v___x_259_);
v_a_246_ = v___x_258_;
v_b_247_ = v___x_260_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Subarray_mergeSort___redArg(lean_object* v_xs_266_, lean_object* v_le_267_){
_start:
{
lean_object* v_array_268_; lean_object* v_start_269_; lean_object* v_stop_270_; lean_object* v___y_272_; lean_object* v_lower_273_; lean_object* v_upper_274_; lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v_array_268_ = lean_ctor_get(v_xs_266_, 0);
v_start_269_ = lean_ctor_get(v_xs_266_, 1);
v_stop_270_ = lean_ctor_get(v_xs_266_, 2);
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_sub(v_stop_270_, v_start_269_);
v___x_283_ = lean_nat_dec_lt(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec(v___x_282_);
lean_dec_ref(v_le_267_);
v___x_284_ = ((lean_object*)(l_Subarray_mergeSort___redArg___closed__0));
v___x_285_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Subarray_mergeSort_spec__0___redArg(v_xs_266_, v___x_284_);
return v___x_285_;
}
else
{
lean_object* v___x_286_; lean_object* v_splitIdx_287_; lean_object* v_lower_289_; lean_object* v_upper_290_; lean_object* v___x_296_; uint8_t v___x_297_; 
lean_inc(v_start_269_);
lean_inc_ref(v_array_268_);
lean_dec_ref(v_xs_266_);
v___x_286_ = lean_nat_add(v___x_282_, v___x_281_);
v_splitIdx_287_ = lean_nat_shiftr(v___x_286_, v___x_281_);
lean_dec(v___x_286_);
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_nat_dec_le(v_splitIdx_287_, v___x_282_);
if (v___x_297_ == 0)
{
lean_inc(v___x_282_);
v_lower_289_ = v___x_296_;
v_upper_290_ = v___x_282_;
goto v___jp_288_;
}
else
{
lean_inc(v_splitIdx_287_);
v_lower_289_ = v___x_296_;
v_upper_290_ = v_splitIdx_287_;
goto v___jp_288_;
}
v___jp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_291_ = lean_nat_add(v_lower_289_, v_start_269_);
v___x_292_ = lean_nat_add(v_upper_290_, v_start_269_);
lean_dec(v_upper_290_);
lean_inc_ref(v_array_268_);
v___x_293_ = l_Array_toSubarray___redArg(v_array_268_, v___x_291_, v___x_292_);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_nat_dec_le(v_splitIdx_287_, v___x_294_);
if (v___x_295_ == 0)
{
v___y_272_ = v___x_293_;
v_lower_273_ = v_splitIdx_287_;
v_upper_274_ = v___x_282_;
goto v___jp_271_;
}
else
{
lean_dec(v_splitIdx_287_);
v___y_272_ = v___x_293_;
v_lower_273_ = v___x_294_;
v_upper_274_ = v___x_282_;
goto v___jp_271_;
}
}
}
v___jp_271_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_275_ = lean_nat_add(v_lower_273_, v_start_269_);
lean_dec(v_lower_273_);
v___x_276_ = lean_nat_add(v_upper_274_, v_start_269_);
lean_dec(v_start_269_);
lean_dec(v_upper_274_);
v___x_277_ = l_Array_toSubarray___redArg(v_array_268_, v___x_275_, v___x_276_);
lean_inc_ref_n(v_le_267_, 2);
v___x_278_ = l_Subarray_mergeSort___redArg(v___y_272_, v_le_267_);
v___x_279_ = l_Subarray_mergeSort___redArg(v___x_277_, v_le_267_);
v___x_280_ = l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___redArg(v___x_278_, v___x_279_, v_le_267_);
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* l_Subarray_mergeSort(lean_object* v_00_u03b1_298_, lean_object* v_xs_299_, lean_object* v_le_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Subarray_mergeSort___redArg(v_xs_299_, v_le_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Subarray_mergeSort_spec__0(lean_object* v_00_u03b1_302_, lean_object* v_inst_303_, lean_object* v_R_304_, lean_object* v_a_305_, lean_object* v_b_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Subarray_mergeSort_spec__0___redArg(v_a_305_, v_b_306_);
return v___x_307_;
}
}
static lean_object* _init_l_Array_mergeSort___auto__1(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61, &l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61_once, _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1___closed__61);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Array_mergeSort___redArg(lean_object* v_xs_309_, lean_object* v_le_310_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_array_get_size(v_xs_309_);
v___x_313_ = l_Array_toSubarray___redArg(v_xs_309_, v___x_311_, v___x_312_);
v___x_314_ = l_Subarray_mergeSort___redArg(v___x_313_, v_le_310_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Array_mergeSort(lean_object* v_00_u03b1_315_, lean_object* v_xs_316_, lean_object* v_le_317_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = lean_array_get_size(v_xs_316_);
v___x_320_ = l_Array_toSubarray___redArg(v_xs_316_, v___x_318_, v___x_319_);
v___x_321_ = l_Subarray_mergeSort___redArg(v___x_320_, v_le_317_);
return v___x_321_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Subarray_Split(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Sort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Subarray_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Sort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1 = _init_l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1();
lean_mark_persistent(l___private_Init_Data_Array_Sort_Basic_0__Array_MergeSort_Internal_merge___auto__1);
l_Subarray_mergeSort___auto__1 = _init_l_Subarray_mergeSort___auto__1();
lean_mark_persistent(l_Subarray_mergeSort___auto__1);
l_Array_mergeSort___auto__1 = _init_l_Array_mergeSort___auto__1();
lean_mark_persistent(l_Array_mergeSort___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Subarray_Split(uint8_t builtin);
lean_object* initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Sort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Subarray_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Sort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Sort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Sort_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

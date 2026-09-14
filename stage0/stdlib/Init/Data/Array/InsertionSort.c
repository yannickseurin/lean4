// Lean compiler output
// Module: Init.Data.Array.InsertionSort
// Imports: public import Init.Data.Array.Basic
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static const lean_string_object l_Array_insertionSort___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Array_insertionSort___auto__1___closed__0 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__0_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Array_insertionSort___auto__1___closed__1 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__1_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Array_insertionSort___auto__1___closed__2 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__2_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Array_insertionSort___auto__1___closed__3 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__3_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__4_value_aux_0),((lean_object*)&l_Array_insertionSort___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__4_value_aux_1),((lean_object*)&l_Array_insertionSort___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__4_value_aux_2),((lean_object*)&l_Array_insertionSort___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__4 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__4_value;
static const lean_array_object l_Array_insertionSort___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_insertionSort___auto__1___closed__5 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__5_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Array_insertionSort___auto__1___closed__6 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__6_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__7_value_aux_0),((lean_object*)&l_Array_insertionSort___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__7_value_aux_1),((lean_object*)&l_Array_insertionSort___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__7_value_aux_2),((lean_object*)&l_Array_insertionSort___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__7 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__7_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Array_insertionSort___auto__1___closed__8 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__8_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__9 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__9_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Array_insertionSort___auto__1___closed__10 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__10_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__11_value_aux_0),((lean_object*)&l_Array_insertionSort___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__11_value_aux_1),((lean_object*)&l_Array_insertionSort___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__11_value_aux_2),((lean_object*)&l_Array_insertionSort___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__11 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__11_value;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__12;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__13;
static const lean_string_object l_Array_insertionSort___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Array_insertionSort___auto__1___closed__14 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__14_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Array_insertionSort___auto__1___closed__15 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__15_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__16_value_aux_0),((lean_object*)&l_Array_insertionSort___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__16_value_aux_1),((lean_object*)&l_Array_insertionSort___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__16_value_aux_2),((lean_object*)&l_Array_insertionSort___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__16 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__16_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Array_insertionSort___auto__1___closed__17 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__17_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__18_value_aux_0),((lean_object*)&l_Array_insertionSort___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__18_value_aux_1),((lean_object*)&l_Array_insertionSort___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__18_value_aux_2),((lean_object*)&l_Array_insertionSort___auto__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__18 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__18_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Array_insertionSort___auto__1___closed__19 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__19_value;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__20;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__21;
static const lean_string_object l_Array_insertionSort___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Array_insertionSort___auto__1___closed__22 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__22_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__23 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__23_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Array_insertionSort___auto__1___closed__24 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__24_value;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__25;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__26;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__27;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__28;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__29;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__30;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__31;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__32;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__33;
static const lean_string_object l_Array_insertionSort___auto__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_<_"};
static const lean_object* l_Array_insertionSort___auto__1___closed__34 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__34_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(192, 242, 106, 74, 199, 131, 133, 95)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__35 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__35_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l_Array_insertionSort___auto__1___closed__36 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__36_value;
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_insertionSort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__37_value_aux_0),((lean_object*)&l_Array_insertionSort___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__37_value_aux_1),((lean_object*)&l_Array_insertionSort___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Array_insertionSort___auto__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_insertionSort___auto__1___closed__37_value_aux_2),((lean_object*)&l_Array_insertionSort___auto__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l_Array_insertionSort___auto__1___closed__37 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__37_value;
static const lean_string_object l_Array_insertionSort___auto__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l_Array_insertionSort___auto__1___closed__38 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__38_value;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__39;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__40;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__41;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__42;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__43;
static const lean_string_object l_Array_insertionSort___auto__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_Array_insertionSort___auto__1___closed__44 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__44_value;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__45;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__46;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__47;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__48;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__49;
static const lean_string_object l_Array_insertionSort___auto__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Array_insertionSort___auto__1___closed__50 = (const lean_object*)&l_Array_insertionSort___auto__1___closed__50_value;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__51;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__52;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__53;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__54;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__55;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__56;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__57;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__58;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__59;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__60;
static lean_once_cell_t l_Array_insertionSort___auto__1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertionSort___auto__1___closed__61;
LEAN_EXPORT lean_object* l_Array_insertionSort___auto__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertionSort___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertionSort(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Array_insertionSort___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__10));
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__12, &l_Array_insertionSort___auto__1___closed__12_once, _init_l_Array_insertionSort___auto__1___closed__12);
v___x_30_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__20(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__19));
v___x_47_ = l_Lean_mkAtom(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__21(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__20, &l_Array_insertionSort___auto__1___closed__20_once, _init_l_Array_insertionSort___auto__1___closed__20);
v___x_49_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_50_ = lean_array_push(v___x_49_, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__25(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__24));
v___x_56_ = lean_string_utf8_byte_size(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__26(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__25, &l_Array_insertionSort___auto__1___closed__25_once, _init_l_Array_insertionSort___auto__1___closed__25);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__24));
v___x_60_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_58_);
lean_ctor_set(v___x_60_, 2, v___x_57_);
return v___x_60_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__27(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_box(0);
v___x_62_ = l_unsafeCast___redArg(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__28(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_63_ = lean_box(0);
v___x_64_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__27, &l_Array_insertionSort___auto__1___closed__27_once, _init_l_Array_insertionSort___auto__1___closed__27);
v___x_65_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__26, &l_Array_insertionSort___auto__1___closed__26_once, _init_l_Array_insertionSort___auto__1___closed__26);
v___x_66_ = lean_box(2);
v___x_67_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set(v___x_67_, 2, v___x_64_);
lean_ctor_set(v___x_67_, 3, v___x_63_);
return v___x_67_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__29(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__28, &l_Array_insertionSort___auto__1___closed__28_once, _init_l_Array_insertionSort___auto__1___closed__28);
v___x_69_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_70_ = lean_array_push(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__30(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__29, &l_Array_insertionSort___auto__1___closed__29_once, _init_l_Array_insertionSort___auto__1___closed__29);
v___x_72_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__23));
v___x_73_ = lean_box(2);
v___x_74_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__31(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__30, &l_Array_insertionSort___auto__1___closed__30_once, _init_l_Array_insertionSort___auto__1___closed__30);
v___x_76_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__21, &l_Array_insertionSort___auto__1___closed__21_once, _init_l_Array_insertionSort___auto__1___closed__21);
v___x_77_ = lean_array_push(v___x_76_, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__32(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__31, &l_Array_insertionSort___auto__1___closed__31_once, _init_l_Array_insertionSort___auto__1___closed__31);
v___x_79_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__18));
v___x_80_ = lean_box(2);
v___x_81_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_79_);
lean_ctor_set(v___x_81_, 2, v___x_78_);
return v___x_81_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__33(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__32, &l_Array_insertionSort___auto__1___closed__32_once, _init_l_Array_insertionSort___auto__1___closed__32);
v___x_83_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_84_ = lean_array_push(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__39(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__38));
v___x_96_ = l_Lean_mkAtom(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__40(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__39, &l_Array_insertionSort___auto__1___closed__39_once, _init_l_Array_insertionSort___auto__1___closed__39);
v___x_98_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_99_ = lean_array_push(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__41(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__30, &l_Array_insertionSort___auto__1___closed__30_once, _init_l_Array_insertionSort___auto__1___closed__30);
v___x_101_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__40, &l_Array_insertionSort___auto__1___closed__40_once, _init_l_Array_insertionSort___auto__1___closed__40);
v___x_102_ = lean_array_push(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__42(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__41, &l_Array_insertionSort___auto__1___closed__41_once, _init_l_Array_insertionSort___auto__1___closed__41);
v___x_104_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__37));
v___x_105_ = lean_box(2);
v___x_106_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
lean_ctor_set(v___x_106_, 2, v___x_103_);
return v___x_106_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__43(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__42, &l_Array_insertionSort___auto__1___closed__42_once, _init_l_Array_insertionSort___auto__1___closed__42);
v___x_108_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_109_ = lean_array_push(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__45(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__44));
v___x_112_ = l_Lean_mkAtom(v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__46(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__45, &l_Array_insertionSort___auto__1___closed__45_once, _init_l_Array_insertionSort___auto__1___closed__45);
v___x_114_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__43, &l_Array_insertionSort___auto__1___closed__43_once, _init_l_Array_insertionSort___auto__1___closed__43);
v___x_115_ = lean_array_push(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__47(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__42, &l_Array_insertionSort___auto__1___closed__42_once, _init_l_Array_insertionSort___auto__1___closed__42);
v___x_117_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__46, &l_Array_insertionSort___auto__1___closed__46_once, _init_l_Array_insertionSort___auto__1___closed__46);
v___x_118_ = lean_array_push(v___x_117_, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__48(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_119_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__47, &l_Array_insertionSort___auto__1___closed__47_once, _init_l_Array_insertionSort___auto__1___closed__47);
v___x_120_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__35));
v___x_121_ = lean_box(2);
v___x_122_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
lean_ctor_set(v___x_122_, 2, v___x_119_);
return v___x_122_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__49(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__48, &l_Array_insertionSort___auto__1___closed__48_once, _init_l_Array_insertionSort___auto__1___closed__48);
v___x_124_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__33, &l_Array_insertionSort___auto__1___closed__33_once, _init_l_Array_insertionSort___auto__1___closed__33);
v___x_125_ = lean_array_push(v___x_124_, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__51(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__50));
v___x_128_ = l_Lean_mkAtom(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__52(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__51, &l_Array_insertionSort___auto__1___closed__51_once, _init_l_Array_insertionSort___auto__1___closed__51);
v___x_130_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__49, &l_Array_insertionSort___auto__1___closed__49_once, _init_l_Array_insertionSort___auto__1___closed__49);
v___x_131_ = lean_array_push(v___x_130_, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__53(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_132_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__52, &l_Array_insertionSort___auto__1___closed__52_once, _init_l_Array_insertionSort___auto__1___closed__52);
v___x_133_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__16));
v___x_134_ = lean_box(2);
v___x_135_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set(v___x_135_, 2, v___x_132_);
return v___x_135_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__54(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__53, &l_Array_insertionSort___auto__1___closed__53_once, _init_l_Array_insertionSort___auto__1___closed__53);
v___x_137_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__13, &l_Array_insertionSort___auto__1___closed__13_once, _init_l_Array_insertionSort___auto__1___closed__13);
v___x_138_ = lean_array_push(v___x_137_, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__55(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_139_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__54, &l_Array_insertionSort___auto__1___closed__54_once, _init_l_Array_insertionSort___auto__1___closed__54);
v___x_140_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__11));
v___x_141_ = lean_box(2);
v___x_142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
lean_ctor_set(v___x_142_, 2, v___x_139_);
return v___x_142_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__56(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_143_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__55, &l_Array_insertionSort___auto__1___closed__55_once, _init_l_Array_insertionSort___auto__1___closed__55);
v___x_144_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_145_ = lean_array_push(v___x_144_, v___x_143_);
return v___x_145_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__57(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__56, &l_Array_insertionSort___auto__1___closed__56_once, _init_l_Array_insertionSort___auto__1___closed__56);
v___x_147_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__9));
v___x_148_ = lean_box(2);
v___x_149_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v___x_147_);
lean_ctor_set(v___x_149_, 2, v___x_146_);
return v___x_149_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__58(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__57, &l_Array_insertionSort___auto__1___closed__57_once, _init_l_Array_insertionSort___auto__1___closed__57);
v___x_151_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_152_ = lean_array_push(v___x_151_, v___x_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__59(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_153_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__58, &l_Array_insertionSort___auto__1___closed__58_once, _init_l_Array_insertionSort___auto__1___closed__58);
v___x_154_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__7));
v___x_155_ = lean_box(2);
v___x_156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
lean_ctor_set(v___x_156_, 2, v___x_153_);
return v___x_156_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__60(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__59, &l_Array_insertionSort___auto__1___closed__59_once, _init_l_Array_insertionSort___auto__1___closed__59);
v___x_158_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__5));
v___x_159_ = lean_array_push(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1___closed__61(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__60, &l_Array_insertionSort___auto__1___closed__60_once, _init_l_Array_insertionSort___auto__1___closed__60);
v___x_161_ = ((lean_object*)(l_Array_insertionSort___auto__1___closed__4));
v___x_162_ = lean_box(2);
v___x_163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___x_161_);
lean_ctor_set(v___x_163_, 2, v___x_160_);
return v___x_163_;
}
}
static lean_object* _init_l_Array_insertionSort___auto__1(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_Array_insertionSort___auto__1___closed__61, &l_Array_insertionSort___auto__1___closed__61_once, _init_l_Array_insertionSort___auto__1___closed__61);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___redArg(lean_object* v_lt_165_, lean_object* v_xs_166_, lean_object* v_j_167_){
_start:
{
lean_object* v_zero_168_; uint8_t v_isZero_169_; 
v_zero_168_ = lean_unsigned_to_nat(0u);
v_isZero_169_ = lean_nat_dec_eq(v_j_167_, v_zero_168_);
if (v_isZero_169_ == 1)
{
lean_dec(v_j_167_);
lean_dec_ref(v_lt_165_);
return v_xs_166_;
}
else
{
lean_object* v_one_170_; lean_object* v_n_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v_one_170_ = lean_unsigned_to_nat(1u);
v_n_171_ = lean_nat_sub(v_j_167_, v_one_170_);
v___x_172_ = lean_array_fget_borrowed(v_xs_166_, v_j_167_);
v___x_173_ = lean_array_fget_borrowed(v_xs_166_, v_n_171_);
lean_inc_ref(v_lt_165_);
lean_inc(v___x_173_);
lean_inc(v___x_172_);
v___x_174_ = lean_apply_2(v_lt_165_, v___x_172_, v___x_173_);
v___x_175_ = lean_unbox(v___x_174_);
if (v___x_175_ == 0)
{
lean_dec(v_n_171_);
lean_dec(v_j_167_);
lean_dec_ref(v_lt_165_);
return v_xs_166_;
}
else
{
lean_object* v___x_176_; 
v___x_176_ = lean_array_fswap(v_xs_166_, v_j_167_, v_n_171_);
lean_dec(v_j_167_);
v_xs_166_ = v___x_176_;
v_j_167_ = v_n_171_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop(lean_object* v_00_u03b1_178_, lean_object* v_lt_179_, lean_object* v_xs_180_, lean_object* v_j_181_, lean_object* v_h_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___redArg(v_lt_179_, v_xs_180_, v_j_181_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___redArg(lean_object* v_lt_184_, lean_object* v_xs_185_, lean_object* v_i_186_, lean_object* v_fuel_187_){
_start:
{
lean_object* v_zero_188_; uint8_t v_isZero_189_; 
v_zero_188_ = lean_unsigned_to_nat(0u);
v_isZero_189_ = lean_nat_dec_eq(v_fuel_187_, v_zero_188_);
if (v_isZero_189_ == 1)
{
lean_dec(v_fuel_187_);
lean_dec(v_i_186_);
lean_dec_ref(v_lt_184_);
return v_xs_185_;
}
else
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = lean_array_get_size(v_xs_185_);
v___x_191_ = lean_nat_dec_lt(v_i_186_, v___x_190_);
if (v___x_191_ == 0)
{
lean_dec(v_fuel_187_);
lean_dec(v_i_186_);
lean_dec_ref(v_lt_184_);
return v_xs_185_;
}
else
{
lean_object* v_one_192_; lean_object* v_n_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_one_192_ = lean_unsigned_to_nat(1u);
v_n_193_ = lean_nat_sub(v_fuel_187_, v_one_192_);
lean_dec(v_fuel_187_);
lean_inc(v_i_186_);
lean_inc_ref(v_lt_184_);
v___x_194_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___redArg(v_lt_184_, v_xs_185_, v_i_186_);
v___x_195_ = lean_nat_add(v_i_186_, v_one_192_);
lean_dec(v_i_186_);
v_xs_185_ = v___x_194_;
v_i_186_ = v___x_195_;
v_fuel_187_ = v_n_193_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse(lean_object* v_00_u03b1_197_, lean_object* v_lt_198_, lean_object* v_xs_199_, lean_object* v_i_200_, lean_object* v_fuel_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___redArg(v_lt_198_, v_xs_199_, v_i_200_, v_fuel_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Array_insertionSort___redArg(lean_object* v_xs_203_, lean_object* v_lt_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = lean_unsigned_to_nat(0u);
v___x_206_ = lean_array_get_size(v_xs_203_);
v___x_207_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___redArg(v_lt_204_, v_xs_203_, v___x_205_, v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Array_insertionSort(lean_object* v_00_u03b1_208_, lean_object* v_xs_209_, lean_object* v_lt_210_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_unsigned_to_nat(0u);
v___x_212_ = lean_array_get_size(v_xs_209_);
v___x_213_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___redArg(v_lt_210_, v_xs_209_, v___x_211_, v___x_212_);
return v___x_213_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_InsertionSort(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_InsertionSort(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Array_insertionSort___auto__1 = _init_l_Array_insertionSort___auto__1();
lean_mark_persistent(l_Array_insertionSort___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_InsertionSort(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_InsertionSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_InsertionSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_InsertionSort(builtin);
}
#ifdef __cplusplus
}
#endif

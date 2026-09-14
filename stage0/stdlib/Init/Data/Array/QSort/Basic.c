// Lean compiler output
// Module: Init.Data.Array.QSort.Basic
// Imports: public import Init.Data.Vector.Basic public import Init.Data.Ord.Basic import Init.Omega
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
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static const lean_string_object l_Array_qpartition___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Array_qpartition___auto__1___closed__0 = (const lean_object*)&l_Array_qpartition___auto__1___closed__0_value;
static const lean_string_object l_Array_qpartition___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Array_qpartition___auto__1___closed__1 = (const lean_object*)&l_Array_qpartition___auto__1___closed__1_value;
static const lean_string_object l_Array_qpartition___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Array_qpartition___auto__1___closed__2 = (const lean_object*)&l_Array_qpartition___auto__1___closed__2_value;
static const lean_string_object l_Array_qpartition___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Array_qpartition___auto__1___closed__3 = (const lean_object*)&l_Array_qpartition___auto__1___closed__3_value;
static const lean_ctor_object l_Array_qpartition___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__4_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__4_value_aux_1),((lean_object*)&l_Array_qpartition___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__4_value_aux_2),((lean_object*)&l_Array_qpartition___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Array_qpartition___auto__1___closed__4 = (const lean_object*)&l_Array_qpartition___auto__1___closed__4_value;
static const lean_array_object l_Array_qpartition___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_qpartition___auto__1___closed__5 = (const lean_object*)&l_Array_qpartition___auto__1___closed__5_value;
static const lean_string_object l_Array_qpartition___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Array_qpartition___auto__1___closed__6 = (const lean_object*)&l_Array_qpartition___auto__1___closed__6_value;
static const lean_ctor_object l_Array_qpartition___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__7_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__7_value_aux_1),((lean_object*)&l_Array_qpartition___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__7_value_aux_2),((lean_object*)&l_Array_qpartition___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Array_qpartition___auto__1___closed__7 = (const lean_object*)&l_Array_qpartition___auto__1___closed__7_value;
static const lean_string_object l_Array_qpartition___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Array_qpartition___auto__1___closed__8 = (const lean_object*)&l_Array_qpartition___auto__1___closed__8_value;
static const lean_ctor_object l_Array_qpartition___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Array_qpartition___auto__1___closed__9 = (const lean_object*)&l_Array_qpartition___auto__1___closed__9_value;
static const lean_string_object l_Array_qpartition___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* l_Array_qpartition___auto__1___closed__10 = (const lean_object*)&l_Array_qpartition___auto__1___closed__10_value;
static const lean_ctor_object l_Array_qpartition___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__11_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__11_value_aux_1),((lean_object*)&l_Array_qpartition___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__11_value_aux_2),((lean_object*)&l_Array_qpartition___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(138, 49, 229, 237, 137, 52, 176, 206)}};
static const lean_object* l_Array_qpartition___auto__1___closed__11 = (const lean_object*)&l_Array_qpartition___auto__1___closed__11_value;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__12;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__13;
static const lean_string_object l_Array_qpartition___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Array_qpartition___auto__1___closed__14 = (const lean_object*)&l_Array_qpartition___auto__1___closed__14_value;
static const lean_ctor_object l_Array_qpartition___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__15_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__15_value_aux_1),((lean_object*)&l_Array_qpartition___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_qpartition___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qpartition___auto__1___closed__15_value_aux_2),((lean_object*)&l_Array_qpartition___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Array_qpartition___auto__1___closed__15 = (const lean_object*)&l_Array_qpartition___auto__1___closed__15_value;
static const lean_ctor_object l_Array_qpartition___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__9_value),((lean_object*)&l_Array_qpartition___auto__1___closed__5_value)}};
static const lean_object* l_Array_qpartition___auto__1___closed__16 = (const lean_object*)&l_Array_qpartition___auto__1___closed__16_value;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__17;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__18;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__19;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__20;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__21;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__22;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__23;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__24;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__25;
static lean_once_cell_t l_Array_qpartition___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qpartition___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Array_qpartition___auto__1;
LEAN_EXPORT lean_object* l_Array_qpartition___auto__3;
LEAN_EXPORT lean_object* l_Array_qpartition___auto__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qpartition___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qpartition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qpartition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_qsort___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Array_qsort___auto__1___closed__0 = (const lean_object*)&l_Array_qsort___auto__1___closed__0_value;
static const lean_ctor_object l_Array_qsort___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__1_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__1_value_aux_1),((lean_object*)&l_Array_qpartition___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__1_value_aux_2),((lean_object*)&l_Array_qsort___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Array_qsort___auto__1___closed__1 = (const lean_object*)&l_Array_qsort___auto__1___closed__1_value;
static lean_once_cell_t l_Array_qsort___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__2;
static lean_once_cell_t l_Array_qsort___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__3;
static const lean_string_object l_Array_qsort___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Array_qsort___auto__1___closed__4 = (const lean_object*)&l_Array_qsort___auto__1___closed__4_value;
static const lean_string_object l_Array_qsort___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Array_qsort___auto__1___closed__5 = (const lean_object*)&l_Array_qsort___auto__1___closed__5_value;
static const lean_ctor_object l_Array_qsort___auto__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__6_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__6_value_aux_1),((lean_object*)&l_Array_qsort___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__6_value_aux_2),((lean_object*)&l_Array_qsort___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Array_qsort___auto__1___closed__6 = (const lean_object*)&l_Array_qsort___auto__1___closed__6_value;
static const lean_string_object l_Array_qsort___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Array_qsort___auto__1___closed__7 = (const lean_object*)&l_Array_qsort___auto__1___closed__7_value;
static const lean_ctor_object l_Array_qsort___auto__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__8_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__8_value_aux_1),((lean_object*)&l_Array_qsort___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__8_value_aux_2),((lean_object*)&l_Array_qsort___auto__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Array_qsort___auto__1___closed__8 = (const lean_object*)&l_Array_qsort___auto__1___closed__8_value;
static const lean_string_object l_Array_qsort___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Array_qsort___auto__1___closed__9 = (const lean_object*)&l_Array_qsort___auto__1___closed__9_value;
static lean_once_cell_t l_Array_qsort___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__10;
static lean_once_cell_t l_Array_qsort___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__11;
static const lean_string_object l_Array_qsort___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Array_qsort___auto__1___closed__12 = (const lean_object*)&l_Array_qsort___auto__1___closed__12_value;
static const lean_ctor_object l_Array_qsort___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qsort___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Array_qsort___auto__1___closed__13 = (const lean_object*)&l_Array_qsort___auto__1___closed__13_value;
static const lean_string_object l_Array_qsort___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Array_qsort___auto__1___closed__14 = (const lean_object*)&l_Array_qsort___auto__1___closed__14_value;
static lean_once_cell_t l_Array_qsort___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__15;
static lean_once_cell_t l_Array_qsort___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__16;
static lean_once_cell_t l_Array_qsort___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__17;
static lean_once_cell_t l_Array_qsort___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__18;
static lean_once_cell_t l_Array_qsort___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__19;
static lean_once_cell_t l_Array_qsort___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__20;
static lean_once_cell_t l_Array_qsort___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__21;
static lean_once_cell_t l_Array_qsort___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__22;
static lean_once_cell_t l_Array_qsort___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__23;
static const lean_string_object l_Array_qsort___auto__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_<_"};
static const lean_object* l_Array_qsort___auto__1___closed__24 = (const lean_object*)&l_Array_qsort___auto__1___closed__24_value;
static const lean_ctor_object l_Array_qsort___auto__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qsort___auto__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(192, 242, 106, 74, 199, 131, 133, 95)}};
static const lean_object* l_Array_qsort___auto__1___closed__25 = (const lean_object*)&l_Array_qsort___auto__1___closed__25_value;
static const lean_string_object l_Array_qsort___auto__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l_Array_qsort___auto__1___closed__26 = (const lean_object*)&l_Array_qsort___auto__1___closed__26_value;
static const lean_ctor_object l_Array_qsort___auto__1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_qpartition___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__27_value_aux_0),((lean_object*)&l_Array_qpartition___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__27_value_aux_1),((lean_object*)&l_Array_qsort___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Array_qsort___auto__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_qsort___auto__1___closed__27_value_aux_2),((lean_object*)&l_Array_qsort___auto__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l_Array_qsort___auto__1___closed__27 = (const lean_object*)&l_Array_qsort___auto__1___closed__27_value;
static const lean_string_object l_Array_qsort___auto__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l_Array_qsort___auto__1___closed__28 = (const lean_object*)&l_Array_qsort___auto__1___closed__28_value;
static lean_once_cell_t l_Array_qsort___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__29;
static lean_once_cell_t l_Array_qsort___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__30;
static lean_once_cell_t l_Array_qsort___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__31;
static lean_once_cell_t l_Array_qsort___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__32;
static lean_once_cell_t l_Array_qsort___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__33;
static const lean_string_object l_Array_qsort___auto__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_Array_qsort___auto__1___closed__34 = (const lean_object*)&l_Array_qsort___auto__1___closed__34_value;
static lean_once_cell_t l_Array_qsort___auto__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__35;
static lean_once_cell_t l_Array_qsort___auto__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__36;
static lean_once_cell_t l_Array_qsort___auto__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__37;
static lean_once_cell_t l_Array_qsort___auto__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__38;
static lean_once_cell_t l_Array_qsort___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__39;
static const lean_string_object l_Array_qsort___auto__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Array_qsort___auto__1___closed__40 = (const lean_object*)&l_Array_qsort___auto__1___closed__40_value;
static lean_once_cell_t l_Array_qsort___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__41;
static lean_once_cell_t l_Array_qsort___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__42;
static lean_once_cell_t l_Array_qsort___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__43;
static lean_once_cell_t l_Array_qsort___auto__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__44;
static lean_once_cell_t l_Array_qsort___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__45;
static lean_once_cell_t l_Array_qsort___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__46;
static lean_once_cell_t l_Array_qsort___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__47;
static lean_once_cell_t l_Array_qsort___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__48;
static lean_once_cell_t l_Array_qsort___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__49;
static lean_once_cell_t l_Array_qsort___auto__1___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__50;
static lean_once_cell_t l_Array_qsort___auto__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_qsort___auto__1___closed__51;
LEAN_EXPORT lean_object* l_Array_qsort___auto__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_qsortOrd___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsortOrd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsortOrd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsortOrd(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Array_qpartition___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__10));
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__12, &l_Array_qpartition___auto__1___closed__12_once, _init_l_Array_qpartition___auto__1___closed__12);
v___x_30_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__17(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__16));
v___x_43_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_44_ = lean_array_push(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__18(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__17, &l_Array_qpartition___auto__1___closed__17_once, _init_l_Array_qpartition___auto__1___closed__17);
v___x_46_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__15));
v___x_47_ = lean_box(2);
v___x_48_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__19(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__18, &l_Array_qpartition___auto__1___closed__18_once, _init_l_Array_qpartition___auto__1___closed__18);
v___x_50_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__13, &l_Array_qpartition___auto__1___closed__13_once, _init_l_Array_qpartition___auto__1___closed__13);
v___x_51_ = lean_array_push(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__20(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__19, &l_Array_qpartition___auto__1___closed__19_once, _init_l_Array_qpartition___auto__1___closed__19);
v___x_53_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__11));
v___x_54_ = lean_box(2);
v___x_55_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__21(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__20, &l_Array_qpartition___auto__1___closed__20_once, _init_l_Array_qpartition___auto__1___closed__20);
v___x_57_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_58_ = lean_array_push(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__22(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__21, &l_Array_qpartition___auto__1___closed__21_once, _init_l_Array_qpartition___auto__1___closed__21);
v___x_60_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__9));
v___x_61_ = lean_box(2);
v___x_62_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set(v___x_62_, 2, v___x_59_);
return v___x_62_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__23(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__22, &l_Array_qpartition___auto__1___closed__22_once, _init_l_Array_qpartition___auto__1___closed__22);
v___x_64_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_65_ = lean_array_push(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__24(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__23, &l_Array_qpartition___auto__1___closed__23_once, _init_l_Array_qpartition___auto__1___closed__23);
v___x_67_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__7));
v___x_68_ = lean_box(2);
v___x_69_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__25(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__24, &l_Array_qpartition___auto__1___closed__24_once, _init_l_Array_qpartition___auto__1___closed__24);
v___x_71_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_72_ = lean_array_push(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1___closed__26(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_73_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__25, &l_Array_qpartition___auto__1___closed__25_once, _init_l_Array_qpartition___auto__1___closed__25);
v___x_74_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__4));
v___x_75_ = lean_box(2);
v___x_76_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_74_);
lean_ctor_set(v___x_76_, 2, v___x_73_);
return v___x_76_;
}
}
static lean_object* _init_l_Array_qpartition___auto__1(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_77_;
}
}
static lean_object* _init_l_Array_qpartition___auto__3(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_78_;
}
}
static lean_object* _init_l_Array_qpartition___auto__5(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_79_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__2(void){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_80_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__4(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_81_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__6(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(lean_object* v_lt_83_, lean_object* v_hi_84_, lean_object* v_pivot_85_, lean_object* v_as_86_, lean_object* v_i_87_, lean_object* v_k_88_){
_start:
{
uint8_t v___x_89_; 
v___x_89_ = lean_nat_dec_lt(v_k_88_, v_hi_84_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v_k_88_);
lean_dec(v_pivot_85_);
lean_dec_ref(v_lt_83_);
v___x_90_ = lean_array_fswap(v_as_86_, v_i_87_, v_hi_84_);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v_i_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_92_ = lean_array_fget_borrowed(v_as_86_, v_k_88_);
lean_inc_ref(v_lt_83_);
lean_inc(v_pivot_85_);
lean_inc(v___x_92_);
v___x_93_ = lean_apply_2(v_lt_83_, v___x_92_, v_pivot_85_);
v___x_94_ = lean_unbox(v___x_93_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_nat_add(v_k_88_, v___x_95_);
lean_dec(v_k_88_);
v_k_88_ = v___x_96_;
goto _start;
}
else
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lean_array_fswap(v_as_86_, v_i_87_, v_k_88_);
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = lean_nat_add(v_i_87_, v___x_99_);
lean_dec(v_i_87_);
v___x_101_ = lean_nat_add(v_k_88_, v___x_99_);
lean_dec(v_k_88_);
v_as_86_ = v___x_98_;
v_i_87_ = v___x_100_;
v_k_88_ = v___x_101_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg___boxed(lean_object* v_lt_103_, lean_object* v_hi_104_, lean_object* v_pivot_105_, lean_object* v_as_106_, lean_object* v_i_107_, lean_object* v_k_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(v_lt_103_, v_hi_104_, v_pivot_105_, v_as_106_, v_i_107_, v_k_108_);
lean_dec(v_hi_104_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop(lean_object* v_00_u03b1_110_, lean_object* v_n_111_, lean_object* v_lt_112_, lean_object* v_lo_113_, lean_object* v_hi_114_, lean_object* v_hhi_115_, lean_object* v_pivot_116_, lean_object* v_as_117_, lean_object* v_i_118_, lean_object* v_k_119_, lean_object* v_ilo_120_, lean_object* v_ik_121_, lean_object* v_w_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(v_lt_112_, v_hi_114_, v_pivot_116_, v_as_117_, v_i_118_, v_k_119_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___boxed(lean_object* v_00_u03b1_124_, lean_object* v_n_125_, lean_object* v_lt_126_, lean_object* v_lo_127_, lean_object* v_hi_128_, lean_object* v_hhi_129_, lean_object* v_pivot_130_, lean_object* v_as_131_, lean_object* v_i_132_, lean_object* v_k_133_, lean_object* v_ilo_134_, lean_object* v_ik_135_, lean_object* v_w_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop(v_00_u03b1_124_, v_n_125_, v_lt_126_, v_lo_127_, v_hi_128_, v_hhi_129_, v_pivot_130_, v_as_131_, v_i_132_, v_k_133_, v_ilo_134_, v_ik_135_, v_w_136_);
lean_dec(v_hi_128_);
lean_dec(v_lo_127_);
lean_dec(v_n_125_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Array_qpartition___redArg(lean_object* v_as_138_, lean_object* v_lt_139_, lean_object* v_lo_140_, lean_object* v_hi_141_){
_start:
{
lean_object* v___y_143_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v_mid_148_; lean_object* v___y_150_; lean_object* v___y_157_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_146_ = lean_nat_add(v_lo_140_, v_hi_141_);
v___x_147_ = lean_unsigned_to_nat(1u);
v_mid_148_ = lean_nat_shiftr(v___x_146_, v___x_147_);
lean_dec(v___x_146_);
v___x_163_ = lean_array_fget_borrowed(v_as_138_, v_mid_148_);
v___x_164_ = lean_array_fget_borrowed(v_as_138_, v_lo_140_);
lean_inc_ref(v_lt_139_);
lean_inc(v___x_164_);
lean_inc(v___x_163_);
v___x_165_ = lean_apply_2(v_lt_139_, v___x_163_, v___x_164_);
v___x_166_ = lean_unbox(v___x_165_);
if (v___x_166_ == 0)
{
v___y_157_ = v_as_138_;
goto v___jp_156_;
}
else
{
lean_object* v___x_167_; 
v___x_167_ = lean_array_fswap(v_as_138_, v_lo_140_, v_mid_148_);
v___y_157_ = v___x_167_;
goto v___jp_156_;
}
v___jp_142_:
{
lean_object* v_pivot_144_; lean_object* v___x_145_; 
v_pivot_144_ = lean_array_fget(v___y_143_, v_hi_141_);
lean_inc(v_lo_140_);
v___x_145_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(v_lt_139_, v_hi_141_, v_pivot_144_, v___y_143_, v_lo_140_, v_lo_140_);
return v___x_145_;
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_151_ = lean_array_fget_borrowed(v___y_150_, v_mid_148_);
v___x_152_ = lean_array_fget_borrowed(v___y_150_, v_hi_141_);
lean_inc_ref(v_lt_139_);
lean_inc(v___x_152_);
lean_inc(v___x_151_);
v___x_153_ = lean_apply_2(v_lt_139_, v___x_151_, v___x_152_);
v___x_154_ = lean_unbox(v___x_153_);
if (v___x_154_ == 0)
{
lean_dec(v_mid_148_);
v___y_143_ = v___y_150_;
goto v___jp_142_;
}
else
{
lean_object* v___x_155_; 
v___x_155_ = lean_array_fswap(v___y_150_, v_mid_148_, v_hi_141_);
lean_dec(v_mid_148_);
v___y_143_ = v___x_155_;
goto v___jp_142_;
}
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_158_ = lean_array_fget_borrowed(v___y_157_, v_hi_141_);
v___x_159_ = lean_array_fget_borrowed(v___y_157_, v_lo_140_);
lean_inc_ref(v_lt_139_);
lean_inc(v___x_159_);
lean_inc(v___x_158_);
v___x_160_ = lean_apply_2(v_lt_139_, v___x_158_, v___x_159_);
v___x_161_ = lean_unbox(v___x_160_);
if (v___x_161_ == 0)
{
v___y_150_ = v___y_157_;
goto v___jp_149_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = lean_array_fswap(v___y_157_, v_lo_140_, v_hi_141_);
v___y_150_ = v___x_162_;
goto v___jp_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_qpartition___redArg___boxed(lean_object* v_as_168_, lean_object* v_lt_169_, lean_object* v_lo_170_, lean_object* v_hi_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Array_qpartition___redArg(v_as_168_, v_lt_169_, v_lo_170_, v_hi_171_);
lean_dec(v_hi_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Array_qpartition(lean_object* v_00_u03b1_173_, lean_object* v_n_174_, lean_object* v_as_175_, lean_object* v_lt_176_, lean_object* v_lo_177_, lean_object* v_hi_178_, lean_object* v_w_179_, lean_object* v_hlo_180_, lean_object* v_hhi_181_){
_start:
{
lean_object* v___y_183_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v_mid_188_; lean_object* v___y_190_; lean_object* v___y_197_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_186_ = lean_nat_add(v_lo_177_, v_hi_178_);
v___x_187_ = lean_unsigned_to_nat(1u);
v_mid_188_ = lean_nat_shiftr(v___x_186_, v___x_187_);
lean_dec(v___x_186_);
v___x_203_ = lean_array_fget_borrowed(v_as_175_, v_mid_188_);
v___x_204_ = lean_array_fget_borrowed(v_as_175_, v_lo_177_);
lean_inc_ref(v_lt_176_);
lean_inc(v___x_204_);
lean_inc(v___x_203_);
v___x_205_ = lean_apply_2(v_lt_176_, v___x_203_, v___x_204_);
v___x_206_ = lean_unbox(v___x_205_);
if (v___x_206_ == 0)
{
v___y_197_ = v_as_175_;
goto v___jp_196_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = lean_array_fswap(v_as_175_, v_lo_177_, v_mid_188_);
v___y_197_ = v___x_207_;
goto v___jp_196_;
}
v___jp_182_:
{
lean_object* v_pivot_184_; lean_object* v___x_185_; 
v_pivot_184_ = lean_array_fget(v___y_183_, v_hi_178_);
lean_inc(v_lo_177_);
v___x_185_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(v_lt_176_, v_hi_178_, v_pivot_184_, v___y_183_, v_lo_177_, v_lo_177_);
return v___x_185_;
}
v___jp_189_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_191_ = lean_array_fget_borrowed(v___y_190_, v_mid_188_);
v___x_192_ = lean_array_fget_borrowed(v___y_190_, v_hi_178_);
lean_inc_ref(v_lt_176_);
lean_inc(v___x_192_);
lean_inc(v___x_191_);
v___x_193_ = lean_apply_2(v_lt_176_, v___x_191_, v___x_192_);
v___x_194_ = lean_unbox(v___x_193_);
if (v___x_194_ == 0)
{
lean_dec(v_mid_188_);
v___y_183_ = v___y_190_;
goto v___jp_182_;
}
else
{
lean_object* v___x_195_; 
v___x_195_ = lean_array_fswap(v___y_190_, v_mid_188_, v_hi_178_);
lean_dec(v_mid_188_);
v___y_183_ = v___x_195_;
goto v___jp_182_;
}
}
v___jp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_198_ = lean_array_fget_borrowed(v___y_197_, v_hi_178_);
v___x_199_ = lean_array_fget_borrowed(v___y_197_, v_lo_177_);
lean_inc_ref(v_lt_176_);
lean_inc(v___x_199_);
lean_inc(v___x_198_);
v___x_200_ = lean_apply_2(v_lt_176_, v___x_198_, v___x_199_);
v___x_201_ = lean_unbox(v___x_200_);
if (v___x_201_ == 0)
{
v___y_190_ = v___y_197_;
goto v___jp_189_;
}
else
{
lean_object* v___x_202_; 
v___x_202_ = lean_array_fswap(v___y_197_, v_lo_177_, v_hi_178_);
v___y_190_ = v___x_202_;
goto v___jp_189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_qpartition___boxed(lean_object* v_00_u03b1_208_, lean_object* v_n_209_, lean_object* v_as_210_, lean_object* v_lt_211_, lean_object* v_lo_212_, lean_object* v_hi_213_, lean_object* v_w_214_, lean_object* v_hlo_215_, lean_object* v_hhi_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Array_qpartition(v_00_u03b1_208_, v_n_209_, v_as_210_, v_lt_211_, v_lo_212_, v_hi_213_, v_w_214_, v_hlo_215_, v_hhi_216_);
lean_dec(v_hi_213_);
lean_dec(v_n_209_);
return v_res_217_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__2(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = ((lean_object*)(l_Array_qsort___auto__1___closed__0));
v___x_225_ = l_Lean_mkAtom(v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__3(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_226_ = lean_obj_once(&l_Array_qsort___auto__1___closed__2, &l_Array_qsort___auto__1___closed__2_once, _init_l_Array_qsort___auto__1___closed__2);
v___x_227_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_228_ = lean_array_push(v___x_227_, v___x_226_);
return v___x_228_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__10(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = ((lean_object*)(l_Array_qsort___auto__1___closed__9));
v___x_244_ = l_Lean_mkAtom(v___x_243_);
return v___x_244_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__11(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_obj_once(&l_Array_qsort___auto__1___closed__10, &l_Array_qsort___auto__1___closed__10_once, _init_l_Array_qsort___auto__1___closed__10);
v___x_246_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_247_ = lean_array_push(v___x_246_, v___x_245_);
return v___x_247_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__15(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l_Array_qsort___auto__1___closed__14));
v___x_253_ = lean_string_utf8_byte_size(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__16(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_254_ = lean_obj_once(&l_Array_qsort___auto__1___closed__15, &l_Array_qsort___auto__1___closed__15_once, _init_l_Array_qsort___auto__1___closed__15);
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = ((lean_object*)(l_Array_qsort___auto__1___closed__14));
v___x_257_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
lean_ctor_set(v___x_257_, 2, v___x_254_);
return v___x_257_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__17(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_box(0);
v___x_259_ = l_unsafeCast___redArg(v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__18(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_260_ = lean_box(0);
v___x_261_ = lean_obj_once(&l_Array_qsort___auto__1___closed__17, &l_Array_qsort___auto__1___closed__17_once, _init_l_Array_qsort___auto__1___closed__17);
v___x_262_ = lean_obj_once(&l_Array_qsort___auto__1___closed__16, &l_Array_qsort___auto__1___closed__16_once, _init_l_Array_qsort___auto__1___closed__16);
v___x_263_ = lean_box(2);
v___x_264_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v___x_262_);
lean_ctor_set(v___x_264_, 2, v___x_261_);
lean_ctor_set(v___x_264_, 3, v___x_260_);
return v___x_264_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__19(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_obj_once(&l_Array_qsort___auto__1___closed__18, &l_Array_qsort___auto__1___closed__18_once, _init_l_Array_qsort___auto__1___closed__18);
v___x_266_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_267_ = lean_array_push(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__20(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_268_ = lean_obj_once(&l_Array_qsort___auto__1___closed__19, &l_Array_qsort___auto__1___closed__19_once, _init_l_Array_qsort___auto__1___closed__19);
v___x_269_ = ((lean_object*)(l_Array_qsort___auto__1___closed__13));
v___x_270_ = lean_box(2);
v___x_271_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v___x_269_);
lean_ctor_set(v___x_271_, 2, v___x_268_);
return v___x_271_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__21(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_Array_qsort___auto__1___closed__20, &l_Array_qsort___auto__1___closed__20_once, _init_l_Array_qsort___auto__1___closed__20);
v___x_273_ = lean_obj_once(&l_Array_qsort___auto__1___closed__11, &l_Array_qsort___auto__1___closed__11_once, _init_l_Array_qsort___auto__1___closed__11);
v___x_274_ = lean_array_push(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__22(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_275_ = lean_obj_once(&l_Array_qsort___auto__1___closed__21, &l_Array_qsort___auto__1___closed__21_once, _init_l_Array_qsort___auto__1___closed__21);
v___x_276_ = ((lean_object*)(l_Array_qsort___auto__1___closed__8));
v___x_277_ = lean_box(2);
v___x_278_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v___x_276_);
lean_ctor_set(v___x_278_, 2, v___x_275_);
return v___x_278_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__23(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_obj_once(&l_Array_qsort___auto__1___closed__22, &l_Array_qsort___auto__1___closed__22_once, _init_l_Array_qsort___auto__1___closed__22);
v___x_280_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_281_ = lean_array_push(v___x_280_, v___x_279_);
return v___x_281_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__29(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l_Array_qsort___auto__1___closed__28));
v___x_293_ = l_Lean_mkAtom(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__30(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_obj_once(&l_Array_qsort___auto__1___closed__29, &l_Array_qsort___auto__1___closed__29_once, _init_l_Array_qsort___auto__1___closed__29);
v___x_295_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_296_ = lean_array_push(v___x_295_, v___x_294_);
return v___x_296_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__31(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_obj_once(&l_Array_qsort___auto__1___closed__20, &l_Array_qsort___auto__1___closed__20_once, _init_l_Array_qsort___auto__1___closed__20);
v___x_298_ = lean_obj_once(&l_Array_qsort___auto__1___closed__30, &l_Array_qsort___auto__1___closed__30_once, _init_l_Array_qsort___auto__1___closed__30);
v___x_299_ = lean_array_push(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__32(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_300_ = lean_obj_once(&l_Array_qsort___auto__1___closed__31, &l_Array_qsort___auto__1___closed__31_once, _init_l_Array_qsort___auto__1___closed__31);
v___x_301_ = ((lean_object*)(l_Array_qsort___auto__1___closed__27));
v___x_302_ = lean_box(2);
v___x_303_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set(v___x_303_, 1, v___x_301_);
lean_ctor_set(v___x_303_, 2, v___x_300_);
return v___x_303_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__33(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_304_ = lean_obj_once(&l_Array_qsort___auto__1___closed__32, &l_Array_qsort___auto__1___closed__32_once, _init_l_Array_qsort___auto__1___closed__32);
v___x_305_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_306_ = lean_array_push(v___x_305_, v___x_304_);
return v___x_306_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__35(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(l_Array_qsort___auto__1___closed__34));
v___x_309_ = l_Lean_mkAtom(v___x_308_);
return v___x_309_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__36(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l_Array_qsort___auto__1___closed__35, &l_Array_qsort___auto__1___closed__35_once, _init_l_Array_qsort___auto__1___closed__35);
v___x_311_ = lean_obj_once(&l_Array_qsort___auto__1___closed__33, &l_Array_qsort___auto__1___closed__33_once, _init_l_Array_qsort___auto__1___closed__33);
v___x_312_ = lean_array_push(v___x_311_, v___x_310_);
return v___x_312_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__37(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_obj_once(&l_Array_qsort___auto__1___closed__32, &l_Array_qsort___auto__1___closed__32_once, _init_l_Array_qsort___auto__1___closed__32);
v___x_314_ = lean_obj_once(&l_Array_qsort___auto__1___closed__36, &l_Array_qsort___auto__1___closed__36_once, _init_l_Array_qsort___auto__1___closed__36);
v___x_315_ = lean_array_push(v___x_314_, v___x_313_);
return v___x_315_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__38(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_316_ = lean_obj_once(&l_Array_qsort___auto__1___closed__37, &l_Array_qsort___auto__1___closed__37_once, _init_l_Array_qsort___auto__1___closed__37);
v___x_317_ = ((lean_object*)(l_Array_qsort___auto__1___closed__25));
v___x_318_ = lean_box(2);
v___x_319_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
lean_ctor_set(v___x_319_, 2, v___x_316_);
return v___x_319_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__39(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&l_Array_qsort___auto__1___closed__38, &l_Array_qsort___auto__1___closed__38_once, _init_l_Array_qsort___auto__1___closed__38);
v___x_321_ = lean_obj_once(&l_Array_qsort___auto__1___closed__23, &l_Array_qsort___auto__1___closed__23_once, _init_l_Array_qsort___auto__1___closed__23);
v___x_322_ = lean_array_push(v___x_321_, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__41(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(l_Array_qsort___auto__1___closed__40));
v___x_325_ = l_Lean_mkAtom(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__42(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_obj_once(&l_Array_qsort___auto__1___closed__41, &l_Array_qsort___auto__1___closed__41_once, _init_l_Array_qsort___auto__1___closed__41);
v___x_327_ = lean_obj_once(&l_Array_qsort___auto__1___closed__39, &l_Array_qsort___auto__1___closed__39_once, _init_l_Array_qsort___auto__1___closed__39);
v___x_328_ = lean_array_push(v___x_327_, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__43(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_329_ = lean_obj_once(&l_Array_qsort___auto__1___closed__42, &l_Array_qsort___auto__1___closed__42_once, _init_l_Array_qsort___auto__1___closed__42);
v___x_330_ = ((lean_object*)(l_Array_qsort___auto__1___closed__6));
v___x_331_ = lean_box(2);
v___x_332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v___x_330_);
lean_ctor_set(v___x_332_, 2, v___x_329_);
return v___x_332_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__44(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = lean_obj_once(&l_Array_qsort___auto__1___closed__43, &l_Array_qsort___auto__1___closed__43_once, _init_l_Array_qsort___auto__1___closed__43);
v___x_334_ = lean_obj_once(&l_Array_qsort___auto__1___closed__3, &l_Array_qsort___auto__1___closed__3_once, _init_l_Array_qsort___auto__1___closed__3);
v___x_335_ = lean_array_push(v___x_334_, v___x_333_);
return v___x_335_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__45(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_336_ = lean_obj_once(&l_Array_qsort___auto__1___closed__44, &l_Array_qsort___auto__1___closed__44_once, _init_l_Array_qsort___auto__1___closed__44);
v___x_337_ = ((lean_object*)(l_Array_qsort___auto__1___closed__1));
v___x_338_ = lean_box(2);
v___x_339_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
lean_ctor_set(v___x_339_, 2, v___x_336_);
return v___x_339_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__46(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_obj_once(&l_Array_qsort___auto__1___closed__45, &l_Array_qsort___auto__1___closed__45_once, _init_l_Array_qsort___auto__1___closed__45);
v___x_341_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_342_ = lean_array_push(v___x_341_, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__47(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_343_ = lean_obj_once(&l_Array_qsort___auto__1___closed__46, &l_Array_qsort___auto__1___closed__46_once, _init_l_Array_qsort___auto__1___closed__46);
v___x_344_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__9));
v___x_345_ = lean_box(2);
v___x_346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
lean_ctor_set(v___x_346_, 2, v___x_343_);
return v___x_346_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__48(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_obj_once(&l_Array_qsort___auto__1___closed__47, &l_Array_qsort___auto__1___closed__47_once, _init_l_Array_qsort___auto__1___closed__47);
v___x_348_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_349_ = lean_array_push(v___x_348_, v___x_347_);
return v___x_349_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__49(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_350_ = lean_obj_once(&l_Array_qsort___auto__1___closed__48, &l_Array_qsort___auto__1___closed__48_once, _init_l_Array_qsort___auto__1___closed__48);
v___x_351_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__7));
v___x_352_ = lean_box(2);
v___x_353_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v___x_351_);
lean_ctor_set(v___x_353_, 2, v___x_350_);
return v___x_353_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__50(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = lean_obj_once(&l_Array_qsort___auto__1___closed__49, &l_Array_qsort___auto__1___closed__49_once, _init_l_Array_qsort___auto__1___closed__49);
v___x_355_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__5));
v___x_356_ = lean_array_push(v___x_355_, v___x_354_);
return v___x_356_;
}
}
static lean_object* _init_l_Array_qsort___auto__1___closed__51(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_357_ = lean_obj_once(&l_Array_qsort___auto__1___closed__50, &l_Array_qsort___auto__1___closed__50_once, _init_l_Array_qsort___auto__1___closed__50);
v___x_358_ = ((lean_object*)(l_Array_qpartition___auto__1___closed__4));
v___x_359_ = lean_box(2);
v___x_360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_358_);
lean_ctor_set(v___x_360_, 2, v___x_357_);
return v___x_360_;
}
}
static lean_object* _init_l_Array_qsort___auto__1(void){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&l_Array_qsort___auto__1___closed__51, &l_Array_qsort___auto__1___closed__51_once, _init_l_Array_qsort___auto__1___closed__51);
return v___x_361_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__2(void){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_362_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__4(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_363_;
}
}
static lean_object* _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__6(void){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_obj_once(&l_Array_qpartition___auto__1___closed__26, &l_Array_qpartition___auto__1___closed__26_once, _init_l_Array_qpartition___auto__1___closed__26);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(lean_object* v_lt_365_, lean_object* v_as_366_, lean_object* v_lo_367_, lean_object* v_hi_368_){
_start:
{
lean_object* v___y_370_; uint8_t v___x_380_; 
v___x_380_ = lean_nat_dec_lt(v_lo_367_, v_hi_368_);
if (v___x_380_ == 0)
{
lean_dec(v_lo_367_);
lean_dec_ref(v_lt_365_);
return v_as_366_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v_mid_383_; lean_object* v___y_385_; lean_object* v___y_392_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_381_ = lean_nat_add(v_lo_367_, v_hi_368_);
v___x_382_ = lean_unsigned_to_nat(1u);
v_mid_383_ = lean_nat_shiftr(v___x_381_, v___x_382_);
lean_dec(v___x_381_);
v___x_398_ = lean_array_fget_borrowed(v_as_366_, v_mid_383_);
v___x_399_ = lean_array_fget_borrowed(v_as_366_, v_lo_367_);
lean_inc_ref(v_lt_365_);
lean_inc(v___x_399_);
lean_inc(v___x_398_);
v___x_400_ = lean_apply_2(v_lt_365_, v___x_398_, v___x_399_);
v___x_401_ = lean_unbox(v___x_400_);
if (v___x_401_ == 0)
{
v___y_392_ = v_as_366_;
goto v___jp_391_;
}
else
{
lean_object* v___x_402_; 
v___x_402_ = lean_array_fswap(v_as_366_, v_lo_367_, v_mid_383_);
v___y_392_ = v___x_402_;
goto v___jp_391_;
}
v___jp_384_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_386_ = lean_array_fget_borrowed(v___y_385_, v_mid_383_);
v___x_387_ = lean_array_fget_borrowed(v___y_385_, v_hi_368_);
lean_inc_ref(v_lt_365_);
lean_inc(v___x_387_);
lean_inc(v___x_386_);
v___x_388_ = lean_apply_2(v_lt_365_, v___x_386_, v___x_387_);
v___x_389_ = lean_unbox(v___x_388_);
if (v___x_389_ == 0)
{
lean_dec(v_mid_383_);
v___y_370_ = v___y_385_;
goto v___jp_369_;
}
else
{
lean_object* v___x_390_; 
v___x_390_ = lean_array_fswap(v___y_385_, v_mid_383_, v_hi_368_);
lean_dec(v_mid_383_);
v___y_370_ = v___x_390_;
goto v___jp_369_;
}
}
v___jp_391_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_393_ = lean_array_fget_borrowed(v___y_392_, v_hi_368_);
v___x_394_ = lean_array_fget_borrowed(v___y_392_, v_lo_367_);
lean_inc_ref(v_lt_365_);
lean_inc(v___x_394_);
lean_inc(v___x_393_);
v___x_395_ = lean_apply_2(v_lt_365_, v___x_393_, v___x_394_);
v___x_396_ = lean_unbox(v___x_395_);
if (v___x_396_ == 0)
{
v___y_385_ = v___y_392_;
goto v___jp_384_;
}
else
{
lean_object* v___x_397_; 
v___x_397_ = lean_array_fswap(v___y_392_, v_lo_367_, v_hi_368_);
v___y_385_ = v___x_397_;
goto v___jp_384_;
}
}
}
v___jp_369_:
{
lean_object* v_pivot_371_; lean_object* v___x_372_; lean_object* v_fst_373_; lean_object* v_snd_374_; uint8_t v___x_375_; 
v_pivot_371_ = lean_array_fget(v___y_370_, v_hi_368_);
lean_inc_n(v_lo_367_, 2);
lean_inc_ref(v_lt_365_);
v___x_372_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___redArg(v_lt_365_, v_hi_368_, v_pivot_371_, v___y_370_, v_lo_367_, v_lo_367_);
v_fst_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_fst_373_);
v_snd_374_ = lean_ctor_get(v___x_372_, 1);
lean_inc(v_snd_374_);
lean_dec_ref(v___x_372_);
v___x_375_ = lean_nat_dec_le(v_hi_368_, v_fst_373_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
lean_inc_ref(v_lt_365_);
v___x_376_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_365_, v_snd_374_, v_lo_367_, v_fst_373_);
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_378_ = lean_nat_add(v_fst_373_, v___x_377_);
lean_dec(v_fst_373_);
v_as_366_ = v___x_376_;
v_lo_367_ = v___x_378_;
goto _start;
}
else
{
lean_dec(v_fst_373_);
lean_dec(v_lo_367_);
lean_dec_ref(v_lt_365_);
return v_snd_374_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg___boxed(lean_object* v_lt_403_, lean_object* v_as_404_, lean_object* v_lo_405_, lean_object* v_hi_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_403_, v_as_404_, v_lo_405_, v_hi_406_);
lean_dec(v_hi_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object* v_00_u03b1_408_, lean_object* v_lt_409_, lean_object* v_n_410_, lean_object* v_as_411_, lean_object* v_lo_412_, lean_object* v_hi_413_, lean_object* v_w_414_, lean_object* v_hlo_415_, lean_object* v_hhi_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_409_, v_as_411_, v_lo_412_, v_hi_413_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___boxed(lean_object* v_00_u03b1_418_, lean_object* v_lt_419_, lean_object* v_n_420_, lean_object* v_as_421_, lean_object* v_lo_422_, lean_object* v_hi_423_, lean_object* v_w_424_, lean_object* v_hlo_425_, lean_object* v_hhi_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(v_00_u03b1_418_, v_lt_419_, v_n_420_, v_as_421_, v_lo_422_, v_hi_423_, v_w_424_, v_hlo_425_, v_hhi_426_);
lean_dec(v_hi_423_);
lean_dec(v_n_420_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter___redArg(lean_object* v_x_428_, lean_object* v_h__1_429_){
_start:
{
lean_object* v_fst_430_; lean_object* v_snd_431_; lean_object* v___x_432_; 
v_fst_430_ = lean_ctor_get(v_x_428_, 0);
lean_inc(v_fst_430_);
v_snd_431_ = lean_ctor_get(v_x_428_, 1);
lean_inc(v_snd_431_);
lean_dec_ref(v_x_428_);
v___x_432_ = lean_apply_3(v_h__1_429_, v_fst_430_, lean_box(0), v_snd_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter(lean_object* v_00_u03b1_433_, lean_object* v_n_434_, lean_object* v_lo_435_, lean_object* v_hi_436_, lean_object* v_motive_437_, lean_object* v_x_438_, lean_object* v_h__1_439_){
_start:
{
lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_442_; 
v_fst_440_ = lean_ctor_get(v_x_438_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v_x_438_, 1);
lean_inc(v_snd_441_);
lean_dec_ref(v_x_438_);
v___x_442_ = lean_apply_3(v_h__1_439_, v_fst_440_, lean_box(0), v_snd_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter___boxed(lean_object* v_00_u03b1_443_, lean_object* v_n_444_, lean_object* v_lo_445_, lean_object* v_hi_446_, lean_object* v_motive_447_, lean_object* v_x_448_, lean_object* v_h__1_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_match__8_splitter(v_00_u03b1_443_, v_n_444_, v_lo_445_, v_hi_446_, v_motive_447_, v_x_448_, v_h__1_449_);
lean_dec(v_hi_446_);
lean_dec(v_lo_445_);
lean_dec(v_n_444_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Array_qsort___redArg(lean_object* v_as_451_, lean_object* v_lt_452_, lean_object* v_lo_453_, lean_object* v_hi_454_){
_start:
{
lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_461_ = lean_array_get_size(v_as_451_);
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = lean_nat_dec_eq(v___x_461_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___y_467_; uint8_t v___x_469_; 
v___x_464_ = lean_unsigned_to_nat(1u);
v___x_465_ = lean_nat_sub(v___x_461_, v___x_464_);
v___x_469_ = lean_nat_dec_le(v_lo_453_, v___x_465_);
if (v___x_469_ == 0)
{
lean_dec(v_lo_453_);
lean_inc(v___x_465_);
v___y_467_ = v___x_465_;
goto v___jp_466_;
}
else
{
v___y_467_ = v_lo_453_;
goto v___jp_466_;
}
v___jp_466_:
{
uint8_t v___x_468_; 
v___x_468_ = lean_nat_dec_le(v_hi_454_, v___x_465_);
if (v___x_468_ == 0)
{
lean_dec(v_hi_454_);
v___y_456_ = v___y_467_;
v___y_457_ = v___x_465_;
goto v___jp_455_;
}
else
{
lean_dec(v___x_465_);
v___y_456_ = v___y_467_;
v___y_457_ = v_hi_454_;
goto v___jp_455_;
}
}
}
else
{
lean_dec(v_hi_454_);
lean_dec(v_lo_453_);
lean_dec_ref(v_lt_452_);
return v_as_451_;
}
v___jp_455_:
{
uint8_t v___x_458_; 
v___x_458_ = lean_nat_dec_le(v___y_456_, v___y_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
lean_dec(v___y_457_);
lean_inc(v___y_456_);
v___x_459_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_452_, v_as_451_, v___y_456_, v___y_456_);
lean_dec(v___y_456_);
return v___x_459_;
}
else
{
lean_object* v___x_460_; 
v___x_460_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_452_, v_as_451_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_qsort(lean_object* v_00_u03b1_470_, lean_object* v_as_471_, lean_object* v_lt_472_, lean_object* v_lo_473_, lean_object* v_hi_474_){
_start:
{
lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_481_ = lean_array_get_size(v_as_471_);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_nat_dec_eq(v___x_481_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___y_487_; uint8_t v___x_489_; 
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = lean_nat_sub(v___x_481_, v___x_484_);
v___x_489_ = lean_nat_dec_le(v_lo_473_, v___x_485_);
if (v___x_489_ == 0)
{
lean_dec(v_lo_473_);
lean_inc(v___x_485_);
v___y_487_ = v___x_485_;
goto v___jp_486_;
}
else
{
v___y_487_ = v_lo_473_;
goto v___jp_486_;
}
v___jp_486_:
{
uint8_t v___x_488_; 
v___x_488_ = lean_nat_dec_le(v_hi_474_, v___x_485_);
if (v___x_488_ == 0)
{
lean_dec(v_hi_474_);
v___y_476_ = v___y_487_;
v___y_477_ = v___x_485_;
goto v___jp_475_;
}
else
{
lean_dec(v___x_485_);
v___y_476_ = v___y_487_;
v___y_477_ = v_hi_474_;
goto v___jp_475_;
}
}
}
else
{
lean_dec(v_hi_474_);
lean_dec(v_lo_473_);
lean_dec_ref(v_lt_472_);
return v_as_471_;
}
v___jp_475_:
{
uint8_t v___x_478_; 
v___x_478_ = lean_nat_dec_le(v___y_476_, v___y_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
lean_dec(v___y_477_);
lean_inc(v___y_476_);
v___x_479_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_472_, v_as_471_, v___y_476_, v___y_476_);
lean_dec(v___y_476_);
return v___x_479_;
}
else
{
lean_object* v___x_480_; 
v___x_480_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v_lt_472_, v_as_471_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
return v___x_480_;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_qsortOrd___redArg___lam__0(lean_object* v_ord_490_, uint8_t v___x_491_, lean_object* v_x_492_, lean_object* v_y_493_){
_start:
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = lean_apply_2(v_ord_490_, v_x_492_, v_y_493_);
v___x_495_ = lean_unbox(v___x_494_);
if (v___x_495_ == 0)
{
uint8_t v___x_496_; 
v___x_496_ = 1;
return v___x_496_;
}
else
{
return v___x_491_;
}
}
}
LEAN_EXPORT lean_object* l_Array_qsortOrd___redArg___lam__0___boxed(lean_object* v_ord_497_, lean_object* v___x_498_, lean_object* v_x_499_, lean_object* v_y_500_){
_start:
{
uint8_t v___x_66__boxed_501_; uint8_t v_res_502_; lean_object* v_r_503_; 
v___x_66__boxed_501_ = lean_unbox(v___x_498_);
v_res_502_ = l_Array_qsortOrd___redArg___lam__0(v_ord_497_, v___x_66__boxed_501_, v_x_499_, v_y_500_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT lean_object* l_Array_qsortOrd___redArg(lean_object* v_ord_504_, lean_object* v_xs_505_){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_506_ = lean_array_get_size(v_xs_505_);
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_nat_dec_eq(v___x_506_, v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___y_514_; uint8_t v___x_518_; 
v___x_509_ = lean_box(v___x_508_);
v___f_510_ = lean_alloc_closure((void*)(l_Array_qsortOrd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_510_, 0, v_ord_504_);
lean_closure_set(v___f_510_, 1, v___x_509_);
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = lean_nat_sub(v___x_506_, v___x_511_);
v___x_518_ = lean_nat_dec_le(v___x_507_, v___x_512_);
if (v___x_518_ == 0)
{
lean_inc(v___x_512_);
v___y_514_ = v___x_512_;
goto v___jp_513_;
}
else
{
v___y_514_ = v___x_507_;
goto v___jp_513_;
}
v___jp_513_:
{
uint8_t v___x_515_; 
v___x_515_ = lean_nat_dec_le(v___y_514_, v___x_512_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
lean_dec(v___x_512_);
lean_inc(v___y_514_);
v___x_516_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v___f_510_, v_xs_505_, v___y_514_, v___y_514_);
lean_dec(v___y_514_);
return v___x_516_;
}
else
{
lean_object* v___x_517_; 
v___x_517_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___redArg(v___f_510_, v_xs_505_, v___y_514_, v___x_512_);
lean_dec(v___x_512_);
return v___x_517_;
}
}
}
else
{
lean_dec_ref(v_ord_504_);
return v_xs_505_;
}
}
}
LEAN_EXPORT lean_object* l_Array_qsortOrd(lean_object* v_00_u03b1_519_, lean_object* v_ord_520_, lean_object* v_xs_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Array_qsortOrd___redArg(v_ord_520_, v_xs_521_);
return v___x_522_;
}
}
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_QSort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_QSort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Array_qpartition___auto__1 = _init_l_Array_qpartition___auto__1();
lean_mark_persistent(l_Array_qpartition___auto__1);
l_Array_qpartition___auto__3 = _init_l_Array_qpartition___auto__3();
lean_mark_persistent(l_Array_qpartition___auto__3);
l_Array_qpartition___auto__5 = _init_l_Array_qpartition___auto__5();
lean_mark_persistent(l_Array_qpartition___auto__5);
l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__2 = _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__2();
lean_mark_persistent(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__2);
l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__4 = _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__4();
lean_mark_persistent(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__4);
l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__6 = _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__6();
lean_mark_persistent(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition___auto__6);
l_Array_qsort___auto__1 = _init_l_Array_qsort___auto__1();
lean_mark_persistent(l_Array_qsort___auto__1);
l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__2 = _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__2();
lean_mark_persistent(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__2);
l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__4 = _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__4();
lean_mark_persistent(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__4);
l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__6 = _init_l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__6();
lean_mark_persistent(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort___auto__6);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_QSort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_QSort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_QSort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_QSort_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Std.WP.Triple.Basic
// Imports: public import Std.WP.Basic public import Std.WP.EStack
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__3 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__3_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__3_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__5 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__5_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__5_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__7 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__7_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__7_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__8 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__8_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__9 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__9_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__10 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__10_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__11 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__11_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12_value;
LEAN_EXPORT uint8_t l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___boxed(lean_object*);
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__0 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__0_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__2 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__2_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__4 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__4_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__5 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__5_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__6 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__6_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__7 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__7_value;
static lean_once_cell_t l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8;
static lean_once_cell_t l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__12_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__12 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__12_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__12_value)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__13 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__13_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__14 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__14_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__14_value)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__15 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__15_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__16 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__16_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__17_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__16_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__17 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__17_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__17_value)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__18 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__18_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__19 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__19_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__15_value),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__19_value)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__20 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__20_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__13_value),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__20_value)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__21 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__21_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__22 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__22_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__23 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__23_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__23_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__25 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__25_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__25_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__27 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__27_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__27_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__29 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__29_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__30 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__30_value;
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value_aux_1),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value_aux_2),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__30_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__32 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__32_value;
static const lean_string_object l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__33 = (const lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__33_value;
LEAN_EXPORT lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_WP_tripleNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "tripleNotation"};
static const lean_object* l_Std_WP_tripleNotation___closed__0 = (const lean_object*)&l_Std_WP_tripleNotation___closed__0_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP_tripleNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__1_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP_tripleNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__1_value_aux_1),((lean_object*)&l_Std_WP_tripleNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 53, 36, 30, 160, 173, 44, 79)}};
static const lean_object* l_Std_WP_tripleNotation___closed__1 = (const lean_object*)&l_Std_WP_tripleNotation___closed__1_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_WP_tripleNotation___closed__2 = (const lean_object*)&l_Std_WP_tripleNotation___closed__2_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_tripleNotation___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_WP_tripleNotation___closed__3 = (const lean_object*)&l_Std_WP_tripleNotation___closed__3_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⦃ "};
static const lean_object* l_Std_WP_tripleNotation___closed__4 = (const lean_object*)&l_Std_WP_tripleNotation___closed__4_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__4_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__5 = (const lean_object*)&l_Std_WP_tripleNotation___closed__5_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_WP_tripleNotation___closed__6 = (const lean_object*)&l_Std_WP_tripleNotation___closed__6_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_tripleNotation___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_WP_tripleNotation___closed__7 = (const lean_object*)&l_Std_WP_tripleNotation___closed__7_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP_tripleNotation___closed__8 = (const lean_object*)&l_Std_WP_tripleNotation___closed__8_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__5_value),((lean_object*)&l_Std_WP_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__9 = (const lean_object*)&l_Std_WP_tripleNotation___closed__9_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⦄ "};
static const lean_object* l_Std_WP_tripleNotation___closed__10 = (const lean_object*)&l_Std_WP_tripleNotation___closed__10_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__10_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__11 = (const lean_object*)&l_Std_WP_tripleNotation___closed__11_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__9_value),((lean_object*)&l_Std_WP_tripleNotation___closed__11_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__12 = (const lean_object*)&l_Std_WP_tripleNotation___closed__12_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Std_WP_tripleNotation___closed__13 = (const lean_object*)&l_Std_WP_tripleNotation___closed__13_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_tripleNotation___closed__13_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Std_WP_tripleNotation___closed__14 = (const lean_object*)&l_Std_WP_tripleNotation___closed__14_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Std_WP_tripleNotation___closed__15 = (const lean_object*)&l_Std_WP_tripleNotation___closed__15_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_tripleNotation___closed__15_value),LEAN_SCALAR_PTR_LITERAL(56, 145, 113, 208, 127, 167, 216, 55)}};
static const lean_object* l_Std_WP_tripleNotation___closed__16 = (const lean_object*)&l_Std_WP_tripleNotation___closed__16_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__4_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__17 = (const lean_object*)&l_Std_WP_tripleNotation___closed__17_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Std_WP_tripleNotation___closed__18 = (const lean_object*)&l_Std_WP_tripleNotation___closed__18_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_tripleNotation___closed__18_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Std_WP_tripleNotation___closed__19 = (const lean_object*)&l_Std_WP_tripleNotation___closed__19_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__19_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__20 = (const lean_object*)&l_Std_WP_tripleNotation___closed__20_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__17_value),((lean_object*)&l_Std_WP_tripleNotation___closed__20_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__21 = (const lean_object*)&l_Std_WP_tripleNotation___closed__21_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_WP_tripleNotation___closed__22 = (const lean_object*)&l_Std_WP_tripleNotation___closed__22_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__22_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__23 = (const lean_object*)&l_Std_WP_tripleNotation___closed__23_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__21_value),((lean_object*)&l_Std_WP_tripleNotation___closed__23_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__24 = (const lean_object*)&l_Std_WP_tripleNotation___closed__24_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__16_value),((lean_object*)&l_Std_WP_tripleNotation___closed__24_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__25 = (const lean_object*)&l_Std_WP_tripleNotation___closed__25_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__25_value),((lean_object*)&l_Std_WP_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__26 = (const lean_object*)&l_Std_WP_tripleNotation___closed__26_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__33_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__27 = (const lean_object*)&l_Std_WP_tripleNotation___closed__27_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__26_value),((lean_object*)&l_Std_WP_tripleNotation___closed__27_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__28 = (const lean_object*)&l_Std_WP_tripleNotation___closed__28_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__14_value),((lean_object*)&l_Std_WP_tripleNotation___closed__28_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__29 = (const lean_object*)&l_Std_WP_tripleNotation___closed__29_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__12_value),((lean_object*)&l_Std_WP_tripleNotation___closed__29_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__30 = (const lean_object*)&l_Std_WP_tripleNotation___closed__30_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__30_value),((lean_object*)&l_Std_WP_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__31 = (const lean_object*)&l_Std_WP_tripleNotation___closed__31_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⦃ "};
static const lean_object* l_Std_WP_tripleNotation___closed__32 = (const lean_object*)&l_Std_WP_tripleNotation___closed__32_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__32_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__33 = (const lean_object*)&l_Std_WP_tripleNotation___closed__33_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__31_value),((lean_object*)&l_Std_WP_tripleNotation___closed__33_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__34 = (const lean_object*)&l_Std_WP_tripleNotation___closed__34_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__34_value),((lean_object*)&l_Std_WP_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__35 = (const lean_object*)&l_Std_WP_tripleNotation___closed__35_value;
static const lean_string_object l_Std_WP_tripleNotation___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = " ⦄"};
static const lean_object* l_Std_WP_tripleNotation___closed__36 = (const lean_object*)&l_Std_WP_tripleNotation___closed__36_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__36_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__37 = (const lean_object*)&l_Std_WP_tripleNotation___closed__37_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__35_value),((lean_object*)&l_Std_WP_tripleNotation___closed__37_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__38 = (const lean_object*)&l_Std_WP_tripleNotation___closed__38_value;
static const lean_ctor_object l_Std_WP_tripleNotation___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)&l_Std_WP_tripleNotation___closed__38_value)}};
static const lean_object* l_Std_WP_tripleNotation___closed__39 = (const lean_object*)&l_Std_WP_tripleNotation___closed__39_value;
LEAN_EXPORT const lean_object* l_Std_WP_tripleNotation = (const lean_object*)&l_Std_WP_tripleNotation___closed__39_value;
static const lean_string_object l_Std_WP_tripleExceptPost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tripleExceptPost"};
static const lean_object* l_Std_WP_tripleExceptPost___closed__0 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__0_value;
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_tripleExceptPost___closed__1_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_tripleExceptPost___closed__1_value_aux_1),((lean_object*)&l_Std_WP_tripleExceptPost___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 247, 187, 229, 229, 170, 136, 174)}};
static const lean_object* l_Std_WP_tripleExceptPost___closed__1 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__1_value;
static const lean_string_object l_Std_WP_tripleExceptPost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Std_WP_tripleExceptPost___closed__2 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__2_value;
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_tripleExceptPost___closed__2_value)}};
static const lean_object* l_Std_WP_tripleExceptPost___closed__3 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__3_value;
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleNotation___closed__35_value),((lean_object*)&l_Std_WP_tripleExceptPost___closed__3_value)}};
static const lean_object* l_Std_WP_tripleExceptPost___closed__4 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__4_value;
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleExceptPost___closed__4_value),((lean_object*)&l_Std_WP_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_WP_tripleExceptPost___closed__5 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__5_value;
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_tripleNotation___closed__3_value),((lean_object*)&l_Std_WP_tripleExceptPost___closed__5_value),((lean_object*)&l_Std_WP_tripleNotation___closed__37_value)}};
static const lean_object* l_Std_WP_tripleExceptPost___closed__6 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__6_value;
static const lean_ctor_object l_Std_WP_tripleExceptPost___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_WP_tripleExceptPost___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)&l_Std_WP_tripleExceptPost___closed__6_value)}};
static const lean_object* l_Std_WP_tripleExceptPost___closed__7 = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__7_value;
LEAN_EXPORT const lean_object* l_Std_WP_tripleExceptPost = (const lean_object*)&l_Std_WP_tripleExceptPost___closed__7_value;
static const lean_string_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__0 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__0_value;
static lean_once_cell_t l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 148, 225, 137, 79, 125, 168, 172)}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__2 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__2_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 119, 227, 254, 29, 206, 25, 24)}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__4 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__4_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__3_value)}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__5 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__5_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__6 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__6_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__4_value),((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__6_value)}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__7 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__7_value;
static const lean_string_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Order.bot"};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__8 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__8_value;
static lean_once_cell_t l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__9;
static const lean_string_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bot"};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__10 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__10_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__16_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(89, 51, 159, 172, 220, 225, 54, 137)}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__12 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__12_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__13 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__13_value;
static const lean_string_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__14 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__14_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__15 = (const lean_object*)&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__15_value;
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleExceptPost__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleExceptPost__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_WP_unexpandTriple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term⊥"};
static const lean_object* l_Std_WP_unexpandTriple___closed__0 = (const lean_object*)&l_Std_WP_unexpandTriple___closed__0_value;
static const lean_ctor_object l_Std_WP_unexpandTriple___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_WP_unexpandTriple___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_unexpandTriple___closed__1_value_aux_0),((lean_object*)&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__16_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Std_WP_unexpandTriple___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_unexpandTriple___closed__1_value_aux_1),((lean_object*)&l_Std_WP_unexpandTriple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 78, 68, 112, 65, 121, 100, 195)}};
static const lean_object* l_Std_WP_unexpandTriple___closed__1 = (const lean_object*)&l_Std_WP_unexpandTriple___closed__1_value;
static const lean_string_object l_Std_WP_unexpandTriple___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦃"};
static const lean_object* l_Std_WP_unexpandTriple___closed__2 = (const lean_object*)&l_Std_WP_unexpandTriple___closed__2_value;
static const lean_string_object l_Std_WP_unexpandTriple___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦄"};
static const lean_object* l_Std_WP_unexpandTriple___closed__3 = (const lean_object*)&l_Std_WP_unexpandTriple___closed__3_value;
static lean_once_cell_t l_Std_WP_unexpandTriple___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP_unexpandTriple___closed__4;
static const lean_string_object l_Std_WP_unexpandTriple___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Std_WP_unexpandTriple___closed__5 = (const lean_object*)&l_Std_WP_unexpandTriple___closed__5_value;
LEAN_EXPORT lean_object* l_Std_WP_unexpandTriple(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandTriple___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram(lean_object* v_c_28_){
_start:
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__4));
lean_inc(v_c_28_);
v___x_30_ = l_Lean_Syntax_isOfKind(v_c_28_, v___x_29_);
if (v___x_30_ == 0)
{
uint8_t v___x_31_; lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_31_ = 1;
v___x_32_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__6));
lean_inc(v_c_28_);
v___x_33_ = l_Lean_Syntax_isOfKind(v_c_28_, v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__8));
lean_inc(v_c_28_);
v___x_35_ = l_Lean_Syntax_isOfKind(v_c_28_, v___x_34_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; uint8_t v___x_37_; 
v___x_36_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__10));
lean_inc(v_c_28_);
v___x_37_ = l_Lean_Syntax_isOfKind(v_c_28_, v___x_36_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; uint8_t v___x_39_; 
v___x_38_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___closed__12));
v___x_39_ = l_Lean_Syntax_isOfKind(v_c_28_, v___x_38_);
return v___x_39_;
}
else
{
lean_dec(v_c_28_);
return v___x_31_;
}
}
else
{
lean_dec(v_c_28_);
return v___x_31_;
}
}
else
{
lean_dec(v_c_28_);
return v___x_31_;
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_unsigned_to_nat(1u);
v___x_41_ = l_Lean_Syntax_getArg(v_c_28_, v___x_40_);
lean_dec(v_c_28_);
v_c_28_ = v___x_41_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram___boxed(lean_object* v_c_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram(v_c_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
static lean_object* _init_l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__7));
v___x_64_ = l_String_toRawSubstring_x27(v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_box(0);
v___x_66_ = l_unsafeCast___redArg(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram(lean_object* v_c_118_, lean_object* v_m_x3f_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
if (lean_obj_tag(v_m_x3f_119_) == 0)
{
uint8_t v___x_122_; 
lean_inc(v_c_118_);
v___x_122_ = l___private_Std_WP_Triple_Basic_0__Std_WP_isSplitProgram(v_c_118_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v_c_118_);
lean_ctor_set(v___x_123_, 1, v_a_121_);
return v___x_123_;
}
else
{
lean_object* v_quotContext_124_; lean_object* v_currMacroScope_125_; lean_object* v_ref_126_; uint8_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_quotContext_124_ = lean_ctor_get(v_a_120_, 1);
v_currMacroScope_125_ = lean_ctor_get(v_a_120_, 2);
v_ref_126_ = lean_ctor_get(v_a_120_, 5);
v___x_127_ = 0;
v___x_128_ = l_Lean_SourceInfo_fromRef(v_ref_126_, v___x_127_);
v___x_129_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1));
v___x_130_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3));
v___x_131_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__4));
lean_inc_n(v___x_128_, 15);
v___x_132_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_128_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___x_133_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__6));
v___x_134_ = lean_obj_once(&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8, &l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8_once, _init_l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8);
v___x_135_ = lean_obj_once(&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9, &l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9_once, _init_l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9);
lean_inc(v_currMacroScope_125_);
lean_inc(v_quotContext_124_);
v___x_136_ = l_Lean_addMacroScope(v_quotContext_124_, v___x_135_, v_currMacroScope_125_);
v___x_137_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__21));
v___x_138_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_138_, 0, v___x_128_);
lean_ctor_set(v___x_138_, 1, v___x_134_);
lean_ctor_set(v___x_138_, 2, v___x_136_);
lean_ctor_set(v___x_138_, 3, v___x_137_);
v___x_139_ = l_Lean_Syntax_node1(v___x_128_, v___x_133_, v___x_138_);
v___x_140_ = l_Lean_Syntax_node2(v___x_128_, v___x_130_, v___x_132_, v___x_139_);
v___x_141_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__22));
v___x_142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_128_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_144_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26));
v___x_145_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28));
v___x_146_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__29));
v___x_147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_128_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = l_Lean_Syntax_node1(v___x_128_, v___x_145_, v___x_147_);
v___x_149_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__31));
v___x_150_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__32));
v___x_151_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_128_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
lean_inc_n(v___x_148_, 3);
v___x_152_ = l_Lean_Syntax_node3(v___x_128_, v___x_149_, v___x_148_, v___x_151_, v___x_148_);
v___x_153_ = l_Lean_Syntax_node1(v___x_128_, v___x_143_, v___x_152_);
v___x_154_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__33));
v___x_155_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_128_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
lean_inc_ref(v___x_155_);
lean_inc_ref(v___x_142_);
lean_inc(v___x_140_);
v___x_156_ = l_Lean_Syntax_node5(v___x_128_, v___x_129_, v___x_140_, v___x_148_, v___x_142_, v___x_153_, v___x_155_);
v___x_157_ = l_Lean_Syntax_node1(v___x_128_, v___x_143_, v___x_148_);
v___x_158_ = l_Lean_Syntax_node2(v___x_128_, v___x_144_, v___x_156_, v___x_157_);
v___x_159_ = l_Lean_Syntax_node1(v___x_128_, v___x_143_, v___x_158_);
v___x_160_ = l_Lean_Syntax_node5(v___x_128_, v___x_129_, v___x_140_, v_c_118_, v___x_142_, v___x_159_, v___x_155_);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v_a_121_);
return v___x_161_;
}
}
else
{
lean_object* v_val_162_; lean_object* v_quotContext_163_; lean_object* v_currMacroScope_164_; lean_object* v_ref_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_val_162_ = lean_ctor_get(v_m_x3f_119_, 0);
lean_inc(v_val_162_);
lean_dec_ref_known(v_m_x3f_119_, 1);
v_quotContext_163_ = lean_ctor_get(v_a_120_, 1);
v_currMacroScope_164_ = lean_ctor_get(v_a_120_, 2);
v_ref_165_ = lean_ctor_get(v_a_120_, 5);
v___x_166_ = 0;
v___x_167_ = l_Lean_SourceInfo_fromRef(v_ref_165_, v___x_166_);
v___x_168_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__1));
v___x_169_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__3));
v___x_170_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__4));
lean_inc_n(v___x_167_, 11);
v___x_171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_167_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__6));
v___x_173_ = lean_obj_once(&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8, &l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8_once, _init_l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__8);
v___x_174_ = lean_obj_once(&l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9, &l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9_once, _init_l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__9);
lean_inc(v_currMacroScope_164_);
lean_inc(v_quotContext_163_);
v___x_175_ = l_Lean_addMacroScope(v_quotContext_163_, v___x_174_, v_currMacroScope_164_);
v___x_176_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__21));
v___x_177_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_177_, 0, v___x_167_);
lean_ctor_set(v___x_177_, 1, v___x_173_);
lean_ctor_set(v___x_177_, 2, v___x_175_);
lean_ctor_set(v___x_177_, 3, v___x_176_);
v___x_178_ = l_Lean_Syntax_node1(v___x_167_, v___x_172_, v___x_177_);
v___x_179_ = l_Lean_Syntax_node2(v___x_167_, v___x_169_, v___x_171_, v___x_178_);
v___x_180_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__22));
v___x_181_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_167_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_183_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26));
v___x_184_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__28));
v___x_185_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__29));
v___x_186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_167_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = l_Lean_Syntax_node1(v___x_167_, v___x_184_, v___x_186_);
v___x_188_ = l_Lean_Syntax_node1(v___x_167_, v___x_182_, v___x_187_);
v___x_189_ = l_Lean_Syntax_node2(v___x_167_, v___x_183_, v_val_162_, v___x_188_);
v___x_190_ = l_Lean_Syntax_node1(v___x_167_, v___x_182_, v___x_189_);
v___x_191_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__33));
v___x_192_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_167_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = l_Lean_Syntax_node5(v___x_167_, v___x_168_, v___x_179_, v_c_118_, v___x_181_, v___x_190_, v___x_192_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v_a_121_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___boxed(lean_object* v_c_195_, lean_object* v_m_x3f_196_, lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram(v_c_195_, v_m_x3f_196_, v_a_197_, v_a_198_);
lean_dec_ref(v_a_197_);
return v_res_199_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__0));
v___x_326_ = l_String_toRawSubstring_x27(v___x_325_);
return v___x_326_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__9(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__8));
v___x_346_ = l_String_toRawSubstring_x27(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1(lean_object* v_x_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = ((lean_object*)(l_Std_WP_tripleNotation___closed__1));
lean_inc(v_x_361_);
v___x_365_ = l_Lean_Syntax_isOfKind(v_x_361_, v___x_364_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec(v_x_361_);
v___x_366_ = lean_box(1);
v___x_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v_a_363_);
return v___x_367_;
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_m_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_368_ = lean_unsigned_to_nat(1u);
v___x_369_ = l_Lean_Syntax_getArg(v_x_361_, v___x_368_);
v___x_407_ = lean_unsigned_to_nat(3u);
v___x_408_ = l_Lean_Syntax_getArg(v_x_361_, v___x_407_);
v___x_409_ = l_Lean_Syntax_isNone(v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_408_);
v___x_411_ = l_Lean_Syntax_matchesNull(v___x_408_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec(v___x_408_);
lean_dec(v___x_369_);
lean_dec(v_x_361_);
v___x_412_ = lean_box(1);
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v_a_363_);
return v___x_413_;
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_414_ = l_Lean_Syntax_getArg(v___x_408_, v___x_368_);
v___x_415_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__15));
v___x_416_ = l_Lean_Syntax_matchesIdent(v___x_414_, v___x_415_);
lean_dec(v___x_414_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec(v___x_408_);
lean_dec(v___x_369_);
lean_dec(v_x_361_);
v___x_417_ = lean_box(1);
v___x_418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v_a_363_);
return v___x_418_;
}
else
{
lean_object* v_m_419_; lean_object* v___x_420_; 
v_m_419_ = l_Lean_Syntax_getArg(v___x_408_, v___x_407_);
lean_dec(v___x_408_);
v___x_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_420_, 0, v_m_419_);
v_m_371_ = v___x_420_;
v___y_372_ = v_a_362_;
v___y_373_ = v_a_363_;
goto v___jp_370_;
}
}
}
else
{
lean_object* v___x_421_; 
lean_dec(v___x_408_);
v___x_421_ = lean_box(0);
v_m_371_ = v___x_421_;
v___y_372_ = v_a_362_;
v___y_373_ = v_a_363_;
goto v___jp_370_;
}
v___jp_370_:
{
lean_object* v___x_374_; lean_object* v_c_375_; lean_object* v___x_376_; lean_object* v_a_377_; lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_406_; 
v___x_374_ = lean_unsigned_to_nat(4u);
v_c_375_ = l_Lean_Syntax_getArg(v_x_361_, v___x_374_);
v___x_376_ = l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram(v_c_375_, v_m_371_, v___y_372_, v___y_373_);
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_a_378_ = lean_ctor_get(v___x_376_, 1);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_406_ == 0)
{
v___x_380_ = v___x_376_;
v_isShared_381_ = v_isSharedCheck_406_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_406_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v_quotContext_382_; lean_object* v_currMacroScope_383_; lean_object* v_ref_384_; lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v_quotContext_382_ = lean_ctor_get(v___y_372_, 1);
v_currMacroScope_383_ = lean_ctor_get(v___y_372_, 2);
v_ref_384_ = lean_ctor_get(v___y_372_, 5);
v___x_385_ = lean_unsigned_to_nat(6u);
v___x_386_ = l_Lean_Syntax_getArg(v_x_361_, v___x_385_);
lean_dec(v_x_361_);
v___x_387_ = 0;
v___x_388_ = l_Lean_SourceInfo_fromRef(v_ref_384_, v___x_387_);
v___x_389_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26));
v___x_390_ = lean_obj_once(&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1, &l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1_once, _init_l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1);
v___x_391_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__2));
lean_inc_n(v_currMacroScope_383_, 2);
lean_inc_n(v_quotContext_382_, 2);
v___x_392_ = l_Lean_addMacroScope(v_quotContext_382_, v___x_391_, v_currMacroScope_383_);
v___x_393_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__7));
lean_inc_n(v___x_388_, 3);
v___x_394_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_394_, 0, v___x_388_);
lean_ctor_set(v___x_394_, 1, v___x_390_);
lean_ctor_set(v___x_394_, 2, v___x_392_);
lean_ctor_set(v___x_394_, 3, v___x_393_);
v___x_395_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_396_ = lean_obj_once(&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__9, &l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__9_once, _init_l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__9);
v___x_397_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11));
v___x_398_ = l_Lean_addMacroScope(v_quotContext_382_, v___x_397_, v_currMacroScope_383_);
v___x_399_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__13));
v___x_400_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_400_, 0, v___x_388_);
lean_ctor_set(v___x_400_, 1, v___x_396_);
lean_ctor_set(v___x_400_, 2, v___x_398_);
lean_ctor_set(v___x_400_, 3, v___x_399_);
v___x_401_ = l_Lean_Syntax_node4(v___x_388_, v___x_395_, v_a_377_, v___x_369_, v___x_386_, v___x_400_);
v___x_402_ = l_Lean_Syntax_node2(v___x_388_, v___x_389_, v___x_394_, v___x_401_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v___x_402_);
v___x_404_ = v___x_380_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_a_378_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___boxed(lean_object* v_x_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1(v_x_422_, v_a_423_, v_a_424_);
lean_dec_ref(v_a_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleExceptPost__1(lean_object* v_x_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_429_ = ((lean_object*)(l_Std_WP_tripleExceptPost___closed__1));
lean_inc(v_x_426_);
v___x_430_ = l_Lean_Syntax_isOfKind(v_x_426_, v___x_429_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec(v_x_426_);
v___x_431_ = lean_box(1);
v___x_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v_a_428_);
return v___x_432_;
}
else
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v_m_436_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = l_Lean_Syntax_getArg(v_x_426_, v___x_433_);
v___x_469_ = lean_unsigned_to_nat(3u);
v___x_470_ = l_Lean_Syntax_getArg(v_x_426_, v___x_469_);
v___x_471_ = l_Lean_Syntax_isNone(v___x_470_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_472_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_470_);
v___x_473_ = l_Lean_Syntax_matchesNull(v___x_470_, v___x_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v___x_470_);
lean_dec(v___x_434_);
lean_dec(v_x_426_);
v___x_474_ = lean_box(1);
v___x_475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v_a_428_);
return v___x_475_;
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_476_ = l_Lean_Syntax_getArg(v___x_470_, v___x_433_);
v___x_477_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__15));
v___x_478_ = l_Lean_Syntax_matchesIdent(v___x_476_, v___x_477_);
lean_dec(v___x_476_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec(v___x_470_);
lean_dec(v___x_434_);
lean_dec(v_x_426_);
v___x_479_ = lean_box(1);
v___x_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v_a_428_);
return v___x_480_;
}
else
{
lean_object* v_m_481_; lean_object* v___x_482_; 
v_m_481_ = l_Lean_Syntax_getArg(v___x_470_, v___x_469_);
lean_dec(v___x_470_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v_m_481_);
v_m_436_ = v___x_482_;
v___y_437_ = v_a_427_;
v___y_438_ = v_a_428_;
goto v___jp_435_;
}
}
}
else
{
lean_object* v___x_483_; 
lean_dec(v___x_470_);
v___x_483_ = lean_box(0);
v_m_436_ = v___x_483_;
v___y_437_ = v_a_427_;
v___y_438_ = v_a_428_;
goto v___jp_435_;
}
v___jp_435_:
{
lean_object* v___x_439_; lean_object* v_c_440_; lean_object* v___x_441_; lean_object* v_a_442_; lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_468_; 
v___x_439_ = lean_unsigned_to_nat(4u);
v_c_440_ = l_Lean_Syntax_getArg(v_x_426_, v___x_439_);
v___x_441_ = l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram(v_c_440_, v_m_436_, v___y_437_, v___y_438_);
v_a_442_ = lean_ctor_get(v___x_441_, 0);
v_a_443_ = lean_ctor_get(v___x_441_, 1);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_468_ == 0)
{
v___x_445_ = v___x_441_;
v_isShared_446_ = v_isSharedCheck_468_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_inc(v_a_442_);
lean_dec(v___x_441_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_468_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v_quotContext_447_; lean_object* v_currMacroScope_448_; lean_object* v_ref_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v_quotContext_447_ = lean_ctor_get(v___y_437_, 1);
v_currMacroScope_448_ = lean_ctor_get(v___y_437_, 2);
v_ref_449_ = lean_ctor_get(v___y_437_, 5);
v___x_450_ = lean_unsigned_to_nat(6u);
v___x_451_ = l_Lean_Syntax_getArg(v_x_426_, v___x_450_);
v___x_452_ = lean_unsigned_to_nat(8u);
v___x_453_ = l_Lean_Syntax_getArg(v_x_426_, v___x_452_);
lean_dec(v_x_426_);
v___x_454_ = 0;
v___x_455_ = l_Lean_SourceInfo_fromRef(v_ref_449_, v___x_454_);
v___x_456_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26));
v___x_457_ = lean_obj_once(&l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1, &l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1_once, _init_l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__1);
v___x_458_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__2));
lean_inc(v_currMacroScope_448_);
lean_inc(v_quotContext_447_);
v___x_459_ = l_Lean_addMacroScope(v_quotContext_447_, v___x_458_, v_currMacroScope_448_);
v___x_460_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__7));
lean_inc_n(v___x_455_, 2);
v___x_461_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_461_, 0, v___x_455_);
lean_ctor_set(v___x_461_, 1, v___x_457_);
lean_ctor_set(v___x_461_, 2, v___x_459_);
lean_ctor_set(v___x_461_, 3, v___x_460_);
v___x_462_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_463_ = l_Lean_Syntax_node4(v___x_455_, v___x_462_, v_a_442_, v___x_434_, v___x_451_, v___x_453_);
v___x_464_ = l_Lean_Syntax_node2(v___x_455_, v___x_456_, v___x_461_, v___x_463_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_464_);
v___x_466_ = v___x_445_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_a_443_);
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
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleExceptPost__1___boxed(lean_object* v_x_484_, lean_object* v_a_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleExceptPost__1(v_x_484_, v_a_485_, v_a_486_);
lean_dec_ref(v_a_485_);
return v_res_487_;
}
}
static lean_object* _init_l_Std_WP_unexpandTriple___closed__4(void){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Array_mkArray0___redArg();
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandTriple(lean_object* v_x_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__26));
lean_inc(v_x_497_);
v___x_501_ = l_Lean_Syntax_isOfKind(v_x_497_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec(v_x_497_);
v___x_502_ = lean_box(0);
v___x_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v_a_499_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_504_ = lean_unsigned_to_nat(1u);
v___x_505_ = l_Lean_Syntax_getArg(v_x_497_, v___x_504_);
lean_dec(v_x_497_);
v___x_506_ = lean_unsigned_to_nat(4u);
lean_inc(v___x_505_);
v___x_507_ = l_Lean_Syntax_matchesNull(v___x_505_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
lean_ctor_set(v___x_509_, 1, v_a_499_);
return v___x_509_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = l_Lean_Syntax_getArg(v___x_505_, v___x_510_);
v___x_512_ = l_Lean_Syntax_getArg(v___x_505_, v___x_504_);
v___x_513_ = lean_unsigned_to_nat(2u);
v___x_514_ = l_Lean_Syntax_getArg(v___x_505_, v___x_513_);
v___x_515_ = lean_unsigned_to_nat(3u);
v___x_516_ = l_Lean_Syntax_getArg(v___x_505_, v___x_515_);
lean_dec(v___x_505_);
v___x_517_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__1));
lean_inc(v___x_516_);
v___x_518_ = l_Lean_Syntax_isOfKind(v___x_516_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = ((lean_object*)(l_Std_WP___aux__Std__WP__Triple__Basic______macroRules__Std__WP__tripleNotation__1___closed__11));
v___x_520_ = l_Lean_Syntax_matchesIdent(v___x_516_, v___x_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_521_ = l_Lean_SourceInfo_fromRef(v_a_498_, v___x_520_);
v___x_522_ = ((lean_object*)(l_Std_WP_tripleExceptPost___closed__1));
v___x_523_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__2));
lean_inc_n(v___x_521_, 4);
v___x_524_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_521_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
v___x_525_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__3));
v___x_526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_521_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_528_ = lean_obj_once(&l_Std_WP_unexpandTriple___closed__4, &l_Std_WP_unexpandTriple___closed__4_once, _init_l_Std_WP_unexpandTriple___closed__4);
v___x_529_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_529_, 0, v___x_521_);
lean_ctor_set(v___x_529_, 1, v___x_527_);
lean_ctor_set(v___x_529_, 2, v___x_528_);
v___x_530_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__5));
v___x_531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_521_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_unsigned_to_nat(10u);
v___x_533_ = lean_mk_empty_array_with_capacity(v___x_532_);
lean_inc_ref(v___x_524_);
v___x_534_ = lean_array_push(v___x_533_, v___x_524_);
v___x_535_ = lean_array_push(v___x_534_, v___x_512_);
lean_inc_ref(v___x_526_);
v___x_536_ = lean_array_push(v___x_535_, v___x_526_);
v___x_537_ = lean_array_push(v___x_536_, v___x_529_);
v___x_538_ = lean_array_push(v___x_537_, v___x_511_);
v___x_539_ = lean_array_push(v___x_538_, v___x_524_);
v___x_540_ = lean_array_push(v___x_539_, v___x_514_);
v___x_541_ = lean_array_push(v___x_540_, v___x_531_);
v___x_542_ = lean_array_push(v___x_541_, v___x_516_);
v___x_543_ = lean_array_push(v___x_542_, v___x_526_);
v___x_544_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_544_, 0, v___x_521_);
lean_ctor_set(v___x_544_, 1, v___x_522_);
lean_ctor_set(v___x_544_, 2, v___x_543_);
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
lean_ctor_set(v___x_545_, 1, v_a_499_);
return v___x_545_;
}
else
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec(v___x_516_);
v___x_546_ = l_Lean_SourceInfo_fromRef(v_a_498_, v___x_518_);
v___x_547_ = ((lean_object*)(l_Std_WP_tripleNotation___closed__1));
v___x_548_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__2));
lean_inc_n(v___x_546_, 3);
v___x_549_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_546_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__3));
v___x_551_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_546_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_553_ = lean_obj_once(&l_Std_WP_unexpandTriple___closed__4, &l_Std_WP_unexpandTriple___closed__4_once, _init_l_Std_WP_unexpandTriple___closed__4);
v___x_554_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_554_, 0, v___x_546_);
lean_ctor_set(v___x_554_, 1, v___x_552_);
lean_ctor_set(v___x_554_, 2, v___x_553_);
lean_inc_ref(v___x_551_);
lean_inc_ref(v___x_549_);
v___x_555_ = l_Lean_Syntax_node8(v___x_546_, v___x_547_, v___x_549_, v___x_512_, v___x_551_, v___x_554_, v___x_511_, v___x_549_, v___x_514_, v___x_551_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
lean_ctor_set(v___x_556_, 1, v_a_499_);
return v___x_556_;
}
}
else
{
uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec(v___x_516_);
v___x_557_ = 0;
v___x_558_ = l_Lean_SourceInfo_fromRef(v_a_498_, v___x_557_);
v___x_559_ = ((lean_object*)(l_Std_WP_tripleNotation___closed__1));
v___x_560_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__2));
lean_inc_n(v___x_558_, 3);
v___x_561_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_558_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = ((lean_object*)(l_Std_WP_unexpandTriple___closed__3));
v___x_563_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_558_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = ((lean_object*)(l___private_Std_WP_Triple_Basic_0__Std_WP_hintProgram___closed__24));
v___x_565_ = lean_obj_once(&l_Std_WP_unexpandTriple___closed__4, &l_Std_WP_unexpandTriple___closed__4_once, _init_l_Std_WP_unexpandTriple___closed__4);
v___x_566_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_566_, 0, v___x_558_);
lean_ctor_set(v___x_566_, 1, v___x_564_);
lean_ctor_set(v___x_566_, 2, v___x_565_);
lean_inc_ref(v___x_563_);
lean_inc_ref(v___x_561_);
v___x_567_ = l_Lean_Syntax_node8(v___x_558_, v___x_559_, v___x_561_, v___x_512_, v___x_563_, v___x_566_, v___x_511_, v___x_561_, v___x_514_, v___x_563_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
lean_ctor_set(v___x_568_, 1, v_a_499_);
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandTriple___boxed(lean_object* v_x_569_, lean_object* v_a_570_, lean_object* v_a_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Std_WP_unexpandTriple(v_x_569_, v_a_570_, v_a_571_);
lean_dec(v_a_570_);
return v_res_572_;
}
}
lean_object* runtime_initialize_Std_WP_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_WP_EStack(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_WP_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_WP_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP_EStack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_WP_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_WP_Basic(uint8_t builtin);
lean_object* initialize_Std_WP_EStack(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_WP_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_WP_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_WP_EStack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_WP_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_WP_Triple_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

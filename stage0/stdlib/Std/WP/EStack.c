// Lean compiler output
// Module: Std.WP.EStack
// Imports: public import Std.WP.Assertion
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Array_mkArray4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_EStackEnd_mk;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__0 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__0_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__1 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__1_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "termEStack⟨_⟩"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__2 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__2_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__3_value_aux_0),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__3_value_aux_1),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 119, 75, 119, 76, 63, 185, 180)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__3 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__3_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__4 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__4_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__5 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__5_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "EStack⟨"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__6 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__6_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__6_value)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__7 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__7_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__8 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__8_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__9 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__9_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__10 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__10_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__11 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__11_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__12 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__12_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__12_value)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__13 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__13_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__10_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__11_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__13_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__14 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__14_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__5_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__7_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__14_value)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__15 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__15_value;
static const lean_string_object l_Std_WP_termEStack_u27e8___u27e9___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__16 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__16_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__16_value)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__17 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__17_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__5_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__15_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__17_value)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__18 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__18_value;
static const lean_ctor_object l_Std_WP_termEStack_u27e8___u27e9___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__18_value)}};
static const lean_object* l_Std_WP_termEStack_u27e8___u27e9___closed__19 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__19_value;
LEAN_EXPORT const lean_object* l_Std_WP_termEStack_u27e8___u27e9 = (const lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__19_value;
static const lean_string_object l_Std_WP_termEstack_u27e8___u27e9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "termEstack⟨_⟩"};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__0 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__0_value;
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__1_value_aux_0),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__1_value_aux_1),((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 219, 130, 170, 85, 204, 141, 199)}};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__1 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__1_value;
static const lean_string_object l_Std_WP_termEstack_u27e8___u27e9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "estack⟨"};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__2 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__2_value;
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__2_value)}};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__3 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__3_value;
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__5_value),((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__3_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__14_value)}};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__4 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__4_value;
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__5_value),((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__4_value),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__17_value)}};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__5 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__5_value;
static const lean_ctor_object l_Std_WP_termEstack_u27e8___u27e9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__5_value)}};
static const lean_object* l_Std_WP_termEstack_u27e8___u27e9___closed__6 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_WP_termEstack_u27e8___u27e9 = (const lean_object*)&l_Std_WP_termEstack_u27e8___u27e9___closed__6_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__0 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__0_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 7, .m_data = "term_×_"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__2 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__2_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(45, 89, 233, 57, 172, 127, 134, 63)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__3 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__3_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "×"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__4 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__4_value;
static lean_once_cell_t l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "EStackEnd"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6_value;
static lean_once_cell_t l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(77, 203, 246, 103, 128, 122, 54, 177)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__8 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__8_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value_aux_0),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 8, 81, 115, 57, 234, 19, 38)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__10 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__10_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__9_value)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__11 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__11_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__12 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__12_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__10_value),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__12_value)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__13 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__13_value;
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__0 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__0_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__1 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__1_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__2 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__2_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__3 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__3_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value_aux_0),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value_aux_2),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__5 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__5_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value_aux_0),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value_aux_2),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__7 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__7_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__8 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__8_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__9 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__9_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__10 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__10_value;
static lean_once_cell_t l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11;
static lean_once_cell_t l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__13_value_aux_0),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__13 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__13_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__13_value)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__14 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__14_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__15 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__15_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__16 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__16_value;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "EStackEnd.mk"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__17 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__17_value;
static lean_once_cell_t l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18;
static const lean_string_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__19 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__19_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(77, 203, 246, 103, 128, 122, 54, 177)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20_value_aux_0),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(121, 2, 82, 132, 25, 242, 198, 114)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value_aux_0),((lean_object*)&l_Std_WP_termEStack_u27e8___u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 8, 81, 115, 57, 234, 19, 38)}};
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value_aux_2),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(211, 133, 174, 114, 93, 238, 242, 225)}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__22 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__22_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__23 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__23_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__24 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__24_value;
static const lean_ctor_object l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__25 = (const lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__25_value;
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_WP_unexpandEStack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_WP_unexpandEStack___closed__0 = (const lean_object*)&l_Std_WP_unexpandEStack___closed__0_value;
static const lean_ctor_object l_Std_WP_unexpandEStack___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_WP_unexpandEStack___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_unexpandEStack___closed__1_value_aux_0),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_WP_unexpandEStack___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_unexpandEStack___closed__1_value_aux_1),((lean_object*)&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_WP_unexpandEStack___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_WP_unexpandEStack___closed__1_value_aux_2),((lean_object*)&l_Std_WP_unexpandEStack___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_WP_unexpandEStack___closed__1 = (const lean_object*)&l_Std_WP_unexpandEStack___closed__1_value;
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStack(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStack___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackMk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackMk___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_WP_EStackEnd_mk(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Array_mkArray0___redArg();
return v___x_74_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__6));
v___x_77_ = l_String_toRawSubstring_x27(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1(lean_object* v_x_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__3));
lean_inc(v_x_95_);
v___x_99_ = l_Lean_Syntax_isOfKind(v_x_95_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
lean_dec(v_x_95_);
v___x_100_ = lean_box(1);
v___x_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v_a_97_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = l_Lean_Syntax_getArg(v_x_95_, v___x_103_);
lean_dec(v_x_95_);
lean_inc(v___x_104_);
v___x_105_ = l_Lean_Syntax_matchesNull(v___x_104_, v___x_102_);
if (v___x_105_ == 0)
{
uint8_t v___x_106_; 
lean_inc(v___x_104_);
v___x_106_ = l_Lean_Syntax_matchesNull(v___x_104_, v___x_103_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_107_ = lean_unsigned_to_nat(2u);
v___x_108_ = l_Lean_Syntax_getNumArgs(v___x_104_);
v___x_109_ = lean_nat_dec_le(v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v___x_108_);
lean_dec(v___x_104_);
v___x_110_ = lean_box(1);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_97_);
return v___x_111_;
}
else
{
lean_object* v_ref_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_ref_112_ = lean_ctor_get(v_a_96_, 5);
v___x_113_ = l_Lean_Syntax_getArg(v___x_104_, v___x_102_);
v___x_114_ = l_Lean_Syntax_getArgs(v___x_104_);
lean_dec(v___x_104_);
v___x_115_ = l_Array_extract___redArg(v___x_114_, v___x_107_, v___x_108_);
lean_dec_ref(v___x_114_);
v___x_116_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_117_ = lean_box(2);
v___x_118_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_116_);
lean_ctor_set(v___x_118_, 2, v___x_115_);
v___x_119_ = l_Lean_Syntax_getArgs(v___x_118_);
lean_dec_ref_known(v___x_118_, 3);
v___x_120_ = l_Lean_SourceInfo_fromRef(v_ref_112_, v___x_106_);
v___x_121_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__3));
v___x_122_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__4));
lean_inc_n(v___x_120_, 5);
v___x_123_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_120_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__6));
v___x_125_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_120_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5);
v___x_127_ = l_Array_append___redArg(v___x_126_, v___x_119_);
lean_dec_ref(v___x_119_);
v___x_128_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_128_, 0, v___x_120_);
lean_ctor_set(v___x_128_, 1, v___x_116_);
lean_ctor_set(v___x_128_, 2, v___x_127_);
v___x_129_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_130_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_120_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = l_Lean_Syntax_node3(v___x_120_, v___x_98_, v___x_125_, v___x_128_, v___x_130_);
v___x_132_ = l_Lean_Syntax_node3(v___x_120_, v___x_121_, v___x_113_, v___x_123_, v___x_131_);
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v_a_97_);
return v___x_133_;
}
}
else
{
lean_object* v_quotContext_134_; lean_object* v_currMacroScope_135_; lean_object* v_ref_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_quotContext_134_ = lean_ctor_get(v_a_96_, 1);
v_currMacroScope_135_ = lean_ctor_get(v_a_96_, 2);
v_ref_136_ = lean_ctor_get(v_a_96_, 5);
v___x_137_ = l_Lean_Syntax_getArg(v___x_104_, v___x_102_);
lean_dec(v___x_104_);
v___x_138_ = l_Lean_SourceInfo_fromRef(v_ref_136_, v___x_105_);
v___x_139_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__3));
v___x_140_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__4));
lean_inc_n(v___x_138_, 2);
v___x_141_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_138_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7);
v___x_143_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__8));
lean_inc(v_currMacroScope_135_);
lean_inc(v_quotContext_134_);
v___x_144_ = l_Lean_addMacroScope(v_quotContext_134_, v___x_143_, v_currMacroScope_135_);
v___x_145_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__13));
v___x_146_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_146_, 0, v___x_138_);
lean_ctor_set(v___x_146_, 1, v___x_142_);
lean_ctor_set(v___x_146_, 2, v___x_144_);
lean_ctor_set(v___x_146_, 3, v___x_145_);
v___x_147_ = l_Lean_Syntax_node3(v___x_138_, v___x_139_, v___x_137_, v___x_141_, v___x_146_);
v___x_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v_a_97_);
return v___x_148_;
}
}
else
{
lean_object* v_quotContext_149_; lean_object* v_currMacroScope_150_; lean_object* v_ref_151_; uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
lean_dec(v___x_104_);
v_quotContext_149_ = lean_ctor_get(v_a_96_, 1);
v_currMacroScope_150_ = lean_ctor_get(v_a_96_, 2);
v_ref_151_ = lean_ctor_get(v_a_96_, 5);
v___x_152_ = 0;
v___x_153_ = l_Lean_SourceInfo_fromRef(v_ref_151_, v___x_152_);
v___x_154_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__7);
v___x_155_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__8));
lean_inc(v_currMacroScope_150_);
lean_inc(v_quotContext_149_);
v___x_156_ = l_Lean_addMacroScope(v_quotContext_149_, v___x_155_, v_currMacroScope_150_);
v___x_157_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__13));
v___x_158_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_158_, 0, v___x_153_);
lean_ctor_set(v___x_158_, 1, v___x_154_);
lean_ctor_set(v___x_158_, 2, v___x_156_);
lean_ctor_set(v___x_158_, 3, v___x_157_);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
lean_ctor_set(v___x_159_, 1, v_a_97_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___boxed(lean_object* v_x_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1(v_x_160_, v_a_161_, v_a_162_);
lean_dec_ref(v_a_161_);
return v_res_163_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__10));
v___x_185_ = l_String_toRawSubstring_x27(v___x_184_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = l_unsafeCast___redArg(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__17));
v___x_199_ = l_String_toRawSubstring_x27(v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1(lean_object* v_x_221_, lean_object* v_a_222_, lean_object* v_a_223_){
_start:
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__1));
lean_inc(v_x_221_);
v___x_225_ = l_Lean_Syntax_isOfKind(v_x_221_, v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec(v_x_221_);
v___x_226_ = lean_box(1);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v_a_223_);
return v___x_227_;
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = lean_unsigned_to_nat(1u);
v___x_230_ = l_Lean_Syntax_getArg(v_x_221_, v___x_229_);
lean_dec(v_x_221_);
lean_inc(v___x_230_);
v___x_231_ = l_Lean_Syntax_matchesNull(v___x_230_, v___x_228_);
if (v___x_231_ == 0)
{
uint8_t v___x_232_; 
lean_inc(v___x_230_);
v___x_232_ = l_Lean_Syntax_matchesNull(v___x_230_, v___x_229_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_233_ = lean_unsigned_to_nat(2u);
v___x_234_ = l_Lean_Syntax_getNumArgs(v___x_230_);
v___x_235_ = lean_nat_dec_le(v___x_233_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec(v___x_234_);
lean_dec(v___x_230_);
v___x_236_ = lean_box(1);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v_a_223_);
return v___x_237_;
}
else
{
lean_object* v_quotContext_238_; lean_object* v_currMacroScope_239_; lean_object* v_ref_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_quotContext_238_ = lean_ctor_get(v_a_222_, 1);
v_currMacroScope_239_ = lean_ctor_get(v_a_222_, 2);
v_ref_240_ = lean_ctor_get(v_a_222_, 5);
v___x_241_ = l_Lean_Syntax_getArg(v___x_230_, v___x_228_);
v___x_242_ = l_Lean_Syntax_getArgs(v___x_230_);
lean_dec(v___x_230_);
v___x_243_ = l_Array_extract___redArg(v___x_242_, v___x_233_, v___x_234_);
lean_dec_ref(v___x_242_);
v___x_244_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_245_ = lean_box(2);
v___x_246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___x_244_);
lean_ctor_set(v___x_246_, 2, v___x_243_);
v___x_247_ = l_Lean_Syntax_getArgs(v___x_246_);
lean_dec_ref_known(v___x_246_, 3);
v___x_248_ = l_Lean_SourceInfo_fromRef(v_ref_240_, v___x_232_);
v___x_249_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4));
v___x_250_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6));
v___x_251_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__7));
lean_inc_n(v___x_248_, 12);
v___x_252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_248_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__9));
v___x_254_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11);
v___x_255_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12);
lean_inc(v_currMacroScope_239_);
lean_inc(v_quotContext_238_);
v___x_256_ = l_Lean_addMacroScope(v_quotContext_238_, v___x_255_, v_currMacroScope_239_);
v___x_257_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__15));
v___x_258_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_258_, 0, v___x_248_);
lean_ctor_set(v___x_258_, 1, v___x_254_);
lean_ctor_set(v___x_258_, 2, v___x_256_);
lean_ctor_set(v___x_258_, 3, v___x_257_);
v___x_259_ = l_Lean_Syntax_node1(v___x_248_, v___x_253_, v___x_258_);
v___x_260_ = l_Lean_Syntax_node2(v___x_248_, v___x_250_, v___x_252_, v___x_259_);
v___x_261_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__11));
v___x_262_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_248_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__2));
v___x_264_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_248_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5);
v___x_266_ = l_Array_append___redArg(v___x_265_, v___x_247_);
lean_dec_ref(v___x_247_);
v___x_267_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_267_, 0, v___x_248_);
lean_ctor_set(v___x_267_, 1, v___x_244_);
lean_ctor_set(v___x_267_, 2, v___x_266_);
v___x_268_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_269_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_248_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = l_Lean_Syntax_node3(v___x_248_, v___x_224_, v___x_264_, v___x_267_, v___x_269_);
v___x_271_ = l_Lean_Syntax_node1(v___x_248_, v___x_244_, v___x_270_);
v___x_272_ = l_Lean_Syntax_node3(v___x_248_, v___x_244_, v___x_241_, v___x_262_, v___x_271_);
v___x_273_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__16));
v___x_274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_248_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = l_Lean_Syntax_node3(v___x_248_, v___x_249_, v___x_260_, v___x_272_, v___x_274_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v_a_223_);
return v___x_276_;
}
}
else
{
lean_object* v_quotContext_277_; lean_object* v_currMacroScope_278_; lean_object* v_ref_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_quotContext_277_ = lean_ctor_get(v_a_222_, 1);
v_currMacroScope_278_ = lean_ctor_get(v_a_222_, 2);
v_ref_279_ = lean_ctor_get(v_a_222_, 5);
v___x_280_ = l_Lean_Syntax_getArg(v___x_230_, v___x_228_);
lean_dec(v___x_230_);
v___x_281_ = l_Lean_SourceInfo_fromRef(v_ref_279_, v___x_231_);
v___x_282_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__4));
v___x_283_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__6));
v___x_284_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__7));
lean_inc_n(v___x_281_, 9);
v___x_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_281_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__9));
v___x_287_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__11);
v___x_288_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__12);
lean_inc_n(v_currMacroScope_278_, 2);
lean_inc_n(v_quotContext_277_, 2);
v___x_289_ = l_Lean_addMacroScope(v_quotContext_277_, v___x_288_, v_currMacroScope_278_);
v___x_290_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__15));
v___x_291_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_291_, 0, v___x_281_);
lean_ctor_set(v___x_291_, 1, v___x_287_);
lean_ctor_set(v___x_291_, 2, v___x_289_);
lean_ctor_set(v___x_291_, 3, v___x_290_);
v___x_292_ = l_Lean_Syntax_node1(v___x_281_, v___x_286_, v___x_291_);
v___x_293_ = l_Lean_Syntax_node2(v___x_281_, v___x_283_, v___x_285_, v___x_292_);
v___x_294_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_295_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__11));
v___x_296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_281_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18);
v___x_298_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20));
v___x_299_ = l_Lean_addMacroScope(v_quotContext_277_, v___x_298_, v_currMacroScope_278_);
v___x_300_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__23));
v___x_301_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_301_, 0, v___x_281_);
lean_ctor_set(v___x_301_, 1, v___x_297_);
lean_ctor_set(v___x_301_, 2, v___x_299_);
lean_ctor_set(v___x_301_, 3, v___x_300_);
v___x_302_ = l_Lean_Syntax_node1(v___x_281_, v___x_294_, v___x_301_);
v___x_303_ = l_Lean_Syntax_node3(v___x_281_, v___x_294_, v___x_280_, v___x_296_, v___x_302_);
v___x_304_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__16));
v___x_305_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_281_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = l_Lean_Syntax_node3(v___x_281_, v___x_282_, v___x_293_, v___x_303_, v___x_305_);
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v_a_223_);
return v___x_307_;
}
}
else
{
lean_object* v_quotContext_308_; lean_object* v_currMacroScope_309_; lean_object* v_ref_310_; uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
lean_dec(v___x_230_);
v_quotContext_308_ = lean_ctor_get(v_a_222_, 1);
v_currMacroScope_309_ = lean_ctor_get(v_a_222_, 2);
v_ref_310_ = lean_ctor_get(v_a_222_, 5);
v___x_311_ = 0;
v___x_312_ = l_Lean_SourceInfo_fromRef(v_ref_310_, v___x_311_);
v___x_313_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__18);
v___x_314_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__20));
lean_inc(v_currMacroScope_309_);
lean_inc(v_quotContext_308_);
v___x_315_ = l_Lean_addMacroScope(v_quotContext_308_, v___x_314_, v_currMacroScope_309_);
v___x_316_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___closed__25));
v___x_317_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_317_, 0, v___x_312_);
lean_ctor_set(v___x_317_, 1, v___x_313_);
lean_ctor_set(v___x_317_, 2, v___x_315_);
lean_ctor_set(v___x_317_, 3, v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v_a_223_);
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1___boxed(lean_object* v_x_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEstack_u27e8___u27e9__1(v_x_319_, v_a_320_, v_a_321_);
lean_dec_ref(v_a_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd___redArg(lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
uint8_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_325_ = 0;
v___x_326_ = l_Lean_SourceInfo_fromRef(v_a_323_, v___x_325_);
v___x_327_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__3));
v___x_328_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__6));
lean_inc_n(v___x_326_, 3);
v___x_329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_326_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v___x_330_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_331_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5);
v___x_332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_332_, 0, v___x_326_);
lean_ctor_set(v___x_332_, 1, v___x_330_);
lean_ctor_set(v___x_332_, 2, v___x_331_);
v___x_333_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_326_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = l_Lean_Syntax_node3(v___x_326_, v___x_327_, v___x_329_, v___x_332_, v___x_334_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v_a_324_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd___redArg___boxed(lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Std_WP_unexpandEStackEnd___redArg(v_a_337_, v_a_338_);
lean_dec(v_a_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd(lean_object* v_x_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Std_WP_unexpandEStackEnd___redArg(v_a_341_, v_a_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEnd___boxed(lean_object* v_x_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Std_WP_unexpandEStackEnd(v_x_344_, v_a_345_, v_a_346_);
lean_dec(v_a_345_);
lean_dec(v_x_344_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStack(lean_object* v_x_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = ((lean_object*)(l_Std_WP_unexpandEStack___closed__1));
lean_inc(v_x_354_);
v___x_358_ = l_Lean_Syntax_isOfKind(v_x_354_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v_x_354_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_a_356_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = l_Lean_Syntax_getArg(v_x_354_, v___x_361_);
lean_dec(v_x_354_);
v___x_363_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_362_);
v___x_364_ = l_Lean_Syntax_matchesNull(v___x_362_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v___x_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_a_356_);
return v___x_366_;
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_367_ = l_Lean_Syntax_getArg(v___x_362_, v___x_361_);
v___x_368_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__3));
lean_inc(v___x_367_);
v___x_369_ = l_Lean_Syntax_isOfKind(v___x_367_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
lean_dec(v___x_367_);
lean_dec(v___x_362_);
v___x_370_ = lean_box(0);
v___x_371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v_a_356_);
return v___x_371_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = l_Lean_Syntax_getArg(v___x_362_, v___x_372_);
lean_dec(v___x_362_);
v___x_374_ = l_Lean_Syntax_getArg(v___x_367_, v___x_361_);
lean_dec(v___x_367_);
lean_inc(v___x_374_);
v___x_375_ = l_Lean_Syntax_matchesNull(v___x_374_, v___x_372_);
if (v___x_375_ == 0)
{
uint8_t v___x_376_; 
lean_inc(v___x_374_);
v___x_376_ = l_Lean_Syntax_matchesNull(v___x_374_, v___x_361_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_377_ = l_Lean_Syntax_getNumArgs(v___x_374_);
v___x_378_ = lean_nat_dec_le(v___x_363_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_dec(v___x_377_);
lean_dec(v___x_374_);
lean_dec(v___x_373_);
v___x_379_ = lean_box(0);
v___x_380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v_a_356_);
return v___x_380_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_381_ = l_Lean_Syntax_getArg(v___x_374_, v___x_372_);
v___x_382_ = l_Lean_Syntax_getArgs(v___x_374_);
lean_dec(v___x_374_);
v___x_383_ = l_Array_extract___redArg(v___x_382_, v___x_363_, v___x_377_);
lean_dec_ref(v___x_382_);
v___x_384_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_385_ = lean_box(2);
v___x_386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_384_);
lean_ctor_set(v___x_386_, 2, v___x_383_);
v___x_387_ = l_Lean_Syntax_getArgs(v___x_386_);
lean_dec_ref_known(v___x_386_, 3);
v___x_388_ = l_Lean_SourceInfo_fromRef(v_a_355_, v___x_376_);
v___x_389_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__6));
lean_inc_n(v___x_388_, 4);
v___x_390_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__11));
v___x_392_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_388_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
lean_inc_ref(v___x_392_);
v___x_393_ = l_Array_mkArray4___redArg(v___x_373_, v___x_392_, v___x_381_, v___x_392_);
v___x_394_ = l_Array_append___redArg(v___x_393_, v___x_387_);
lean_dec_ref(v___x_387_);
v___x_395_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_395_, 0, v___x_388_);
lean_ctor_set(v___x_395_, 1, v___x_384_);
lean_ctor_set(v___x_395_, 2, v___x_394_);
v___x_396_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_397_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_388_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = l_Lean_Syntax_node3(v___x_388_, v___x_368_, v___x_390_, v___x_395_, v___x_397_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v_a_356_);
return v___x_399_;
}
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_400_ = l_Lean_Syntax_getArg(v___x_374_, v___x_372_);
lean_dec(v___x_374_);
v___x_401_ = l_Lean_SourceInfo_fromRef(v_a_355_, v___x_375_);
v___x_402_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__6));
lean_inc_n(v___x_401_, 4);
v___x_403_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_405_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__11));
v___x_406_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_401_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Lean_Syntax_node3(v___x_401_, v___x_404_, v___x_373_, v___x_406_, v___x_400_);
v___x_408_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_409_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_401_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = l_Lean_Syntax_node3(v___x_401_, v___x_368_, v___x_403_, v___x_407_, v___x_409_);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v_a_356_);
return v___x_411_;
}
}
else
{
uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec(v___x_374_);
v___x_412_ = 0;
v___x_413_ = l_Lean_SourceInfo_fromRef(v_a_355_, v___x_412_);
v___x_414_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__6));
lean_inc_n(v___x_413_, 3);
v___x_415_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_417_ = l_Lean_Syntax_node1(v___x_413_, v___x_416_, v___x_373_);
v___x_418_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_419_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_413_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = l_Lean_Syntax_node3(v___x_413_, v___x_368_, v___x_415_, v___x_417_, v___x_419_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v_a_356_);
return v___x_421_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStack___boxed(lean_object* v_x_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Std_WP_unexpandEStack(v_x_422_, v_a_423_, v_a_424_);
lean_dec(v_a_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk___redArg(lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
uint8_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_428_ = 0;
v___x_429_ = l_Lean_SourceInfo_fromRef(v_a_426_, v___x_428_);
v___x_430_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__1));
v___x_431_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__2));
lean_inc_n(v___x_429_, 3);
v___x_432_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_429_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_434_ = lean_obj_once(&l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5, &l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5_once, _init_l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__5);
v___x_435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_435_, 0, v___x_429_);
lean_ctor_set(v___x_435_, 1, v___x_433_);
lean_ctor_set(v___x_435_, 2, v___x_434_);
v___x_436_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_437_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_429_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = l_Lean_Syntax_node3(v___x_429_, v___x_430_, v___x_432_, v___x_435_, v___x_437_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v_a_427_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk___redArg___boxed(lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Std_WP_unexpandEStackEndMk___redArg(v_a_440_, v_a_441_);
lean_dec(v_a_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk(lean_object* v_x_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Std_WP_unexpandEStackEndMk___redArg(v_a_444_, v_a_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackEndMk___boxed(lean_object* v_x_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Std_WP_unexpandEStackEndMk(v_x_447_, v_a_448_, v_a_449_);
lean_dec(v_a_448_);
lean_dec(v_x_447_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackMk(lean_object* v_x_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = ((lean_object*)(l_Std_WP_unexpandEStack___closed__1));
lean_inc(v_x_451_);
v___x_455_ = l_Lean_Syntax_isOfKind(v_x_451_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v_x_451_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v_a_453_);
return v___x_457_;
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_458_ = lean_unsigned_to_nat(1u);
v___x_459_ = l_Lean_Syntax_getArg(v_x_451_, v___x_458_);
lean_dec(v_x_451_);
v___x_460_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_459_);
v___x_461_ = l_Lean_Syntax_matchesNull(v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v___x_463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v_a_453_);
return v___x_463_;
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_464_ = l_Lean_Syntax_getArg(v___x_459_, v___x_458_);
v___x_465_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__1));
lean_inc(v___x_464_);
v___x_466_ = l_Lean_Syntax_isOfKind(v___x_464_, v___x_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec(v___x_464_);
lean_dec(v___x_459_);
v___x_467_ = lean_box(0);
v___x_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v_a_453_);
return v___x_468_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = l_Lean_Syntax_getArg(v___x_459_, v___x_469_);
lean_dec(v___x_459_);
v___x_471_ = l_Lean_Syntax_getArg(v___x_464_, v___x_458_);
lean_dec(v___x_464_);
lean_inc(v___x_471_);
v___x_472_ = l_Lean_Syntax_matchesNull(v___x_471_, v___x_469_);
if (v___x_472_ == 0)
{
uint8_t v___x_473_; 
lean_inc(v___x_471_);
v___x_473_ = l_Lean_Syntax_matchesNull(v___x_471_, v___x_458_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = l_Lean_Syntax_getNumArgs(v___x_471_);
v___x_475_ = lean_nat_dec_le(v___x_460_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; 
lean_dec(v___x_474_);
lean_dec(v___x_471_);
lean_dec(v___x_470_);
v___x_476_ = lean_box(0);
v___x_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
lean_ctor_set(v___x_477_, 1, v_a_453_);
return v___x_477_;
}
else
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_478_ = l_Lean_Syntax_getArg(v___x_471_, v___x_469_);
v___x_479_ = l_Lean_Syntax_getArgs(v___x_471_);
lean_dec(v___x_471_);
v___x_480_ = l_Array_extract___redArg(v___x_479_, v___x_460_, v___x_474_);
lean_dec_ref(v___x_479_);
v___x_481_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_482_ = lean_box(2);
v___x_483_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___x_481_);
lean_ctor_set(v___x_483_, 2, v___x_480_);
v___x_484_ = l_Lean_Syntax_getArgs(v___x_483_);
lean_dec_ref_known(v___x_483_, 3);
v___x_485_ = l_Lean_SourceInfo_fromRef(v_a_452_, v___x_473_);
v___x_486_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__2));
lean_inc_n(v___x_485_, 4);
v___x_487_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__11));
v___x_489_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_485_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
lean_inc_ref(v___x_489_);
v___x_490_ = l_Array_mkArray4___redArg(v___x_470_, v___x_489_, v___x_478_, v___x_489_);
v___x_491_ = l_Array_append___redArg(v___x_490_, v___x_484_);
lean_dec_ref(v___x_484_);
v___x_492_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_492_, 0, v___x_485_);
lean_ctor_set(v___x_492_, 1, v___x_481_);
lean_ctor_set(v___x_492_, 2, v___x_491_);
v___x_493_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_485_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = l_Lean_Syntax_node3(v___x_485_, v___x_465_, v___x_487_, v___x_492_, v___x_494_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v_a_453_);
return v___x_496_;
}
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_497_ = l_Lean_Syntax_getArg(v___x_471_, v___x_469_);
lean_dec(v___x_471_);
v___x_498_ = l_Lean_SourceInfo_fromRef(v_a_452_, v___x_472_);
v___x_499_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__2));
lean_inc_n(v___x_498_, 4);
v___x_500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_502_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__11));
v___x_503_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_498_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
v___x_504_ = l_Lean_Syntax_node3(v___x_498_, v___x_501_, v___x_470_, v___x_503_, v___x_497_);
v___x_505_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_506_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_498_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = l_Lean_Syntax_node3(v___x_498_, v___x_465_, v___x_500_, v___x_504_, v___x_506_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v_a_453_);
return v___x_508_;
}
}
else
{
uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
lean_dec(v___x_471_);
v___x_509_ = 0;
v___x_510_ = l_Lean_SourceInfo_fromRef(v_a_452_, v___x_509_);
v___x_511_ = ((lean_object*)(l_Std_WP_termEstack_u27e8___u27e9___closed__2));
lean_inc_n(v___x_510_, 3);
v___x_512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = ((lean_object*)(l_Std_WP___aux__Std__WP__EStack______macroRules__Std__WP__termEStack_u27e8___u27e9__1___closed__1));
v___x_514_ = l_Lean_Syntax_node1(v___x_510_, v___x_513_, v___x_470_);
v___x_515_ = ((lean_object*)(l_Std_WP_termEStack_u27e8___u27e9___closed__16));
v___x_516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_510_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = l_Lean_Syntax_node3(v___x_510_, v___x_465_, v___x_512_, v___x_514_, v___x_516_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v_a_453_);
return v___x_518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_WP_unexpandEStackMk___boxed(lean_object* v_x_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Std_WP_unexpandEStackMk(v_x_519_, v_a_520_, v_a_521_);
lean_dec(v_a_520_);
return v_res_522_;
}
}
lean_object* runtime_initialize_Std_WP_Assertion(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_WP_EStack(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_WP_Assertion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_WP_EStackEnd_mk = _init_l_Std_WP_EStackEnd_mk();
lean_mark_persistent(l_Std_WP_EStackEnd_mk);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_WP_EStack(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_WP_Assertion(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_WP_EStack(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_WP_Assertion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP_EStack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_WP_EStack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_WP_EStack(builtin);
}
#ifdef __cplusplus
}
#endif

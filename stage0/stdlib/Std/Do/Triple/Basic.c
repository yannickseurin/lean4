// Lean compiler output
// Module: Std.Do.Triple.Basic
// Imports: public import Std.Do.WP
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_triple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_triple___closed__0 = (const lean_object*)&l_Std_Do_triple___closed__0_value;
static const lean_string_object l_Std_Do_triple___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_triple___closed__1 = (const lean_object*)&l_Std_Do_triple___closed__1_value;
static const lean_string_object l_Std_Do_triple___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "triple"};
static const lean_object* l_Std_Do_triple___closed__2 = (const lean_object*)&l_Std_Do_triple___closed__2_value;
static const lean_ctor_object l_Std_Do_triple___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_triple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_triple___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__3_value_aux_0),((lean_object*)&l_Std_Do_triple___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_triple___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__3_value_aux_1),((lean_object*)&l_Std_Do_triple___closed__2_value),LEAN_SCALAR_PTR_LITERAL(98, 3, 229, 14, 94, 184, 116, 193)}};
static const lean_object* l_Std_Do_triple___closed__3 = (const lean_object*)&l_Std_Do_triple___closed__3_value;
static const lean_string_object l_Std_Do_triple___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_triple___closed__4 = (const lean_object*)&l_Std_Do_triple___closed__4_value;
static const lean_ctor_object l_Std_Do_triple___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_triple___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_triple___closed__5 = (const lean_object*)&l_Std_Do_triple___closed__5_value;
static const lean_string_object l_Std_Do_triple___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦃"};
static const lean_object* l_Std_Do_triple___closed__6 = (const lean_object*)&l_Std_Do_triple___closed__6_value;
static const lean_ctor_object l_Std_Do_triple___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__6_value)}};
static const lean_object* l_Std_Do_triple___closed__7 = (const lean_object*)&l_Std_Do_triple___closed__7_value;
static const lean_string_object l_Std_Do_triple___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_triple___closed__8 = (const lean_object*)&l_Std_Do_triple___closed__8_value;
static const lean_ctor_object l_Std_Do_triple___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_triple___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_triple___closed__9 = (const lean_object*)&l_Std_Do_triple___closed__9_value;
static const lean_ctor_object l_Std_Do_triple___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_triple___closed__10 = (const lean_object*)&l_Std_Do_triple___closed__10_value;
static const lean_ctor_object l_Std_Do_triple___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__5_value),((lean_object*)&l_Std_Do_triple___closed__7_value),((lean_object*)&l_Std_Do_triple___closed__10_value)}};
static const lean_object* l_Std_Do_triple___closed__11 = (const lean_object*)&l_Std_Do_triple___closed__11_value;
static const lean_string_object l_Std_Do_triple___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⦄ "};
static const lean_object* l_Std_Do_triple___closed__12 = (const lean_object*)&l_Std_Do_triple___closed__12_value;
static const lean_ctor_object l_Std_Do_triple___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__12_value)}};
static const lean_object* l_Std_Do_triple___closed__13 = (const lean_object*)&l_Std_Do_triple___closed__13_value;
static const lean_ctor_object l_Std_Do_triple___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__5_value),((lean_object*)&l_Std_Do_triple___closed__11_value),((lean_object*)&l_Std_Do_triple___closed__13_value)}};
static const lean_object* l_Std_Do_triple___closed__14 = (const lean_object*)&l_Std_Do_triple___closed__14_value;
static const lean_ctor_object l_Std_Do_triple___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__9_value),((lean_object*)(((size_t)(1022) << 1) | 1))}};
static const lean_object* l_Std_Do_triple___closed__15 = (const lean_object*)&l_Std_Do_triple___closed__15_value;
static const lean_ctor_object l_Std_Do_triple___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__5_value),((lean_object*)&l_Std_Do_triple___closed__14_value),((lean_object*)&l_Std_Do_triple___closed__15_value)}};
static const lean_object* l_Std_Do_triple___closed__16 = (const lean_object*)&l_Std_Do_triple___closed__16_value;
static const lean_string_object l_Std_Do_triple___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = " ⦃"};
static const lean_object* l_Std_Do_triple___closed__17 = (const lean_object*)&l_Std_Do_triple___closed__17_value;
static const lean_ctor_object l_Std_Do_triple___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__17_value)}};
static const lean_object* l_Std_Do_triple___closed__18 = (const lean_object*)&l_Std_Do_triple___closed__18_value;
static const lean_ctor_object l_Std_Do_triple___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__5_value),((lean_object*)&l_Std_Do_triple___closed__16_value),((lean_object*)&l_Std_Do_triple___closed__18_value)}};
static const lean_object* l_Std_Do_triple___closed__19 = (const lean_object*)&l_Std_Do_triple___closed__19_value;
static const lean_ctor_object l_Std_Do_triple___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__5_value),((lean_object*)&l_Std_Do_triple___closed__19_value),((lean_object*)&l_Std_Do_triple___closed__10_value)}};
static const lean_object* l_Std_Do_triple___closed__20 = (const lean_object*)&l_Std_Do_triple___closed__20_value;
static const lean_string_object l_Std_Do_triple___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦄"};
static const lean_object* l_Std_Do_triple___closed__21 = (const lean_object*)&l_Std_Do_triple___closed__21_value;
static const lean_ctor_object l_Std_Do_triple___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__21_value)}};
static const lean_object* l_Std_Do_triple___closed__22 = (const lean_object*)&l_Std_Do_triple___closed__22_value;
static const lean_ctor_object l_Std_Do_triple___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__5_value),((lean_object*)&l_Std_Do_triple___closed__20_value),((lean_object*)&l_Std_Do_triple___closed__22_value)}};
static const lean_object* l_Std_Do_triple___closed__23 = (const lean_object*)&l_Std_Do_triple___closed__23_value;
static const lean_ctor_object l_Std_Do_triple___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_triple___closed__3_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Std_Do_triple___closed__23_value)}};
static const lean_object* l_Std_Do_triple___closed__24 = (const lean_object*)&l_Std_Do_triple___closed__24_value;
LEAN_EXPORT const lean_object* l_Std_Do_triple = (const lean_object*)&l_Std_Do_triple___closed__24_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "termSpred(_)"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_triple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_value_aux_0),((lean_object*)&l_Std_Do_triple___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 240, 91, 148, 237, 191, 255, 193)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16_value;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_fakeMod"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(168, 44, 241, 255, 153, 255, 67, 53)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21_value;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Notation"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_triple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value_aux_0),((lean_object*)&l_Std_Do_triple___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(66, 246, 126, 200, 193, 235, 124, 8)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_value;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__53 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__53_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_unexpandTriple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Do_unexpandTriple___closed__0 = (const lean_object*)&l_Std_Do_unexpandTriple___closed__0_value;
static const lean_ctor_object l_Std_Do_unexpandTriple___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_unexpandTriple___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_unexpandTriple___closed__1_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_unexpandTriple___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_unexpandTriple___closed__1_value_aux_1),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_unexpandTriple___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_unexpandTriple___closed__1_value_aux_2),((lean_object*)&l_Std_Do_unexpandTriple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Do_unexpandTriple___closed__1 = (const lean_object*)&l_Std_Do_unexpandTriple___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_box(0);
v___x_100_ = l_unsafeCast___redArg(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21));
v___x_107_ = l_String_toRawSubstring_x27(v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17);
v___x_110_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19));
v___x_111_ = l_Lean_addMacroScope(v___x_110_, v___x_109_, v___x_108_);
return v___x_111_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l_Array_mkArray0___redArg();
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(lean_object* v_x_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1));
lean_inc(v_x_173_);
v___x_177_ = l_Lean_Syntax_isOfKind(v_x_173_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6));
lean_inc(v_x_173_);
v___x_179_ = l_Lean_Syntax_isOfKind(v_x_173_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_180_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8));
lean_inc(v_x_173_);
v___x_181_ = l_Lean_Syntax_isOfKind(v_x_173_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_182_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9));
v___x_183_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10));
lean_inc(v_x_173_);
v___x_184_ = l_Lean_Syntax_isOfKind(v_x_173_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12));
lean_inc(v_x_173_);
v___x_186_ = l_Lean_Syntax_isOfKind(v_x_173_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v_x_173_);
lean_ctor_set(v___x_187_, 1, v___y_175_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = l_Lean_Syntax_getArg(v_x_173_, v___x_188_);
v___x_190_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14));
lean_inc(v___x_189_);
v___x_191_ = l_Lean_Syntax_isOfKind(v___x_189_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
lean_dec(v___x_189_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v_x_173_);
lean_ctor_set(v___x_192_, 1, v___y_175_);
return v___x_192_;
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_193_ = lean_unsigned_to_nat(1u);
v___x_194_ = l_Lean_Syntax_getArg(v___x_189_, v___x_193_);
lean_dec(v___x_189_);
v___x_195_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16));
lean_inc(v___x_194_);
v___x_196_ = l_Lean_Syntax_isOfKind(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_dec(v___x_194_);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v_x_173_);
lean_ctor_set(v___x_197_, 1, v___y_175_);
return v___x_197_;
}
else
{
lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_198_ = l_Lean_Syntax_getArg(v___x_194_, v___x_188_);
lean_dec(v___x_194_);
v___x_199_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17);
v___x_200_ = l_Lean_Syntax_matchesIdent(v___x_198_, v___x_199_);
lean_dec(v___x_198_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v_x_173_);
lean_ctor_set(v___x_201_, 1, v___y_175_);
return v___x_201_;
}
else
{
lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_202_ = lean_unsigned_to_nat(3u);
v___x_203_ = l_Lean_Syntax_getArg(v_x_173_, v___x_202_);
lean_inc(v___x_203_);
v___x_204_ = l_Lean_Syntax_matchesNull(v___x_203_, v___x_193_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
lean_dec(v___x_203_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v_x_173_);
lean_ctor_set(v___x_205_, 1, v___y_175_);
return v___x_205_;
}
else
{
lean_object* v_P_206_; lean_object* v___x_207_; 
v_P_206_ = l_Lean_Syntax_getArg(v_x_173_, v___x_193_);
lean_dec(v_x_173_);
v___x_207_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_P_206_, v___y_174_, v___y_175_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_233_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
v_a_209_ = lean_ctor_get(v___x_207_, 1);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_233_ == 0)
{
v___x_211_ = v___x_207_;
v_isShared_212_ = v_isSharedCheck_233_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_inc(v_a_208_);
lean_dec(v___x_207_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_233_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_231_; 
v___x_213_ = l_Lean_Syntax_getArg(v___x_203_, v___x_188_);
lean_dec(v___x_203_);
v___x_214_ = l_Lean_SourceInfo_fromRef(v___y_174_, v___x_184_);
v___x_215_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20));
lean_inc_n(v___x_214_, 7);
v___x_216_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22);
v___x_218_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23);
v___x_219_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42));
v___x_220_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_220_, 0, v___x_214_);
lean_ctor_set(v___x_220_, 1, v___x_217_);
lean_ctor_set(v___x_220_, 2, v___x_218_);
lean_ctor_set(v___x_220_, 3, v___x_219_);
v___x_221_ = l_Lean_Syntax_node1(v___x_214_, v___x_195_, v___x_220_);
v___x_222_ = l_Lean_Syntax_node2(v___x_214_, v___x_190_, v___x_216_, v___x_221_);
v___x_223_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43));
v___x_224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_214_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45));
v___x_226_ = l_Lean_Syntax_node1(v___x_214_, v___x_225_, v___x_213_);
v___x_227_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46));
v___x_228_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_214_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = l_Lean_Syntax_node5(v___x_214_, v___x_185_, v___x_222_, v_a_208_, v___x_224_, v___x_226_, v___x_228_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_229_);
v___x_231_ = v___x_211_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_a_209_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
else
{
lean_dec(v___x_203_);
return v___x_207_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = l_Lean_Syntax_getArg(v_x_173_, v___x_234_);
v___x_236_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48));
lean_inc(v___x_235_);
v___x_237_ = l_Lean_Syntax_isOfKind(v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
lean_dec(v___x_235_);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v_x_173_);
lean_ctor_set(v___x_238_, 1, v___y_175_);
return v___x_238_;
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = l_Lean_Syntax_getArg(v___x_235_, v___x_234_);
v___x_241_ = l_Lean_Syntax_matchesNull(v___x_240_, v___x_239_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
lean_dec(v___x_235_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v_x_173_);
lean_ctor_set(v___x_242_, 1, v___y_175_);
return v___x_242_;
}
else
{
lean_object* v___x_243_; lean_object* v_b_244_; lean_object* v___x_245_; 
lean_dec(v_x_173_);
v___x_243_ = lean_unsigned_to_nat(3u);
v_b_244_ = l_Lean_Syntax_getArg(v___x_235_, v___x_243_);
v___x_245_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_b_244_, v___y_174_, v___y_175_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_269_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
v_a_247_ = lean_ctor_get(v___x_245_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_269_ == 0)
{
v___x_249_ = v___x_245_;
v_isShared_250_ = v_isSharedCheck_269_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_inc(v_a_246_);
lean_dec(v___x_245_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_269_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v_xs_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_251_ = l_Lean_Syntax_getArg(v___x_235_, v___x_239_);
lean_dec(v___x_235_);
v___x_252_ = l_Lean_Syntax_getArgs(v___x_251_);
lean_dec(v___x_251_);
v_xs_253_ = l_unsafeCast___redArg(v___x_252_);
lean_dec_ref(v___x_252_);
v___x_254_ = l_Lean_SourceInfo_fromRef(v___y_174_, v___x_181_);
lean_inc_n(v___x_254_, 5);
v___x_255_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___x_182_);
v___x_256_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45));
v___x_257_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49);
v___x_258_ = l_unsafeCast___redArg(v_xs_253_);
lean_dec(v_xs_253_);
v___x_259_ = l_Array_append___redArg(v___x_257_, v___x_258_);
lean_dec(v___x_258_);
v___x_260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_260_, 0, v___x_254_);
lean_ctor_set(v___x_260_, 1, v___x_256_);
lean_ctor_set(v___x_260_, 2, v___x_259_);
v___x_261_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_261_, 0, v___x_254_);
lean_ctor_set(v___x_261_, 1, v___x_256_);
lean_ctor_set(v___x_261_, 2, v___x_257_);
v___x_262_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50));
v___x_263_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_254_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = l_Lean_Syntax_node4(v___x_254_, v___x_236_, v___x_260_, v___x_261_, v___x_263_, v_a_246_);
v___x_265_ = l_Lean_Syntax_node2(v___x_254_, v___x_183_, v___x_255_, v___x_264_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_265_);
v___x_267_ = v___x_249_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_a_247_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
else
{
lean_dec(v___x_235_);
return v___x_245_;
}
}
}
}
}
else
{
lean_object* v___x_270_; lean_object* v_t_271_; lean_object* v___x_272_; 
v___x_270_ = lean_unsigned_to_nat(3u);
v_t_271_ = l_Lean_Syntax_getArg(v_x_173_, v___x_270_);
v___x_272_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_t_271_, v___y_174_, v___y_175_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_302_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_a_274_ = lean_ctor_get(v___x_272_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_302_ == 0)
{
v___x_276_ = v___x_272_;
v_isShared_277_ = v_isSharedCheck_302_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_302_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v_e_279_; lean_object* v___x_280_; 
v___x_278_ = lean_unsigned_to_nat(5u);
v_e_279_ = l_Lean_Syntax_getArg(v_x_173_, v___x_278_);
v___x_280_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_e_279_, v___y_174_, v_a_274_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_301_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_a_282_ = lean_ctor_get(v___x_280_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_301_ == 0)
{
v___x_284_ = v___x_280_;
v_isShared_285_ = v_isSharedCheck_301_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_301_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_286_ = lean_unsigned_to_nat(1u);
v___x_287_ = l_Lean_Syntax_getArg(v_x_173_, v___x_286_);
lean_dec(v_x_173_);
v___x_288_ = l_Lean_SourceInfo_fromRef(v___y_174_, v___x_179_);
v___x_289_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51));
lean_inc(v___x_288_);
if (v_isShared_277_ == 0)
{
lean_ctor_set_tag(v___x_276_, 2);
lean_ctor_set(v___x_276_, 1, v___x_289_);
lean_ctor_set(v___x_276_, 0, v___x_288_);
v___x_291_ = v___x_276_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_288_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_289_);
v___x_291_ = v_reuseFailAlloc_300_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_292_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52));
lean_inc_n(v___x_288_, 2);
v___x_293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_288_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__53));
v___x_295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_288_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = l_Lean_Syntax_node6(v___x_288_, v___x_180_, v___x_291_, v___x_287_, v___x_293_, v_a_273_, v___x_295_, v_a_281_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v___x_296_);
v___x_298_ = v___x_284_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_a_282_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
lean_del_object(v___x_276_);
lean_dec(v_a_273_);
lean_dec(v_x_173_);
return v___x_280_;
}
}
}
else
{
lean_dec(v_x_173_);
return v___x_272_;
}
}
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = l_Lean_Syntax_getArg(v_x_173_, v___x_303_);
v___x_305_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14));
lean_inc(v___x_304_);
v___x_306_ = l_Lean_Syntax_isOfKind(v___x_304_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
lean_dec(v___x_304_);
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v_x_173_);
lean_ctor_set(v___x_307_, 1, v___y_175_);
return v___x_307_;
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_308_ = lean_unsigned_to_nat(1u);
v___x_309_ = l_Lean_Syntax_getArg(v___x_304_, v___x_308_);
lean_dec(v___x_304_);
v___x_310_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16));
lean_inc(v___x_309_);
v___x_311_ = l_Lean_Syntax_isOfKind(v___x_309_, v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
lean_dec(v___x_309_);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v_x_173_);
lean_ctor_set(v___x_312_, 1, v___y_175_);
return v___x_312_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_313_ = l_Lean_Syntax_getArg(v___x_309_, v___x_303_);
lean_dec(v___x_309_);
v___x_314_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17);
v___x_315_ = l_Lean_Syntax_matchesIdent(v___x_313_, v___x_314_);
lean_dec(v___x_313_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; 
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_x_173_);
lean_ctor_set(v___x_316_, 1, v___y_175_);
return v___x_316_;
}
else
{
lean_object* v_P_317_; lean_object* v___x_318_; 
v_P_317_ = l_Lean_Syntax_getArg(v_x_173_, v___x_308_);
lean_dec(v_x_173_);
v___x_318_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_P_317_, v___y_174_, v___y_175_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_339_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
v_a_320_ = lean_ctor_get(v___x_318_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_339_ == 0)
{
v___x_322_ = v___x_318_;
v_isShared_323_ = v_isSharedCheck_339_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_inc(v_a_319_);
lean_dec(v___x_318_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_339_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_324_ = l_Lean_SourceInfo_fromRef(v___y_174_, v___x_177_);
v___x_325_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20));
lean_inc_n(v___x_324_, 5);
v___x_326_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22);
v___x_328_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23);
v___x_329_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42));
v___x_330_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_330_, 0, v___x_324_);
lean_ctor_set(v___x_330_, 1, v___x_327_);
lean_ctor_set(v___x_330_, 2, v___x_328_);
lean_ctor_set(v___x_330_, 3, v___x_329_);
v___x_331_ = l_Lean_Syntax_node1(v___x_324_, v___x_310_, v___x_330_);
v___x_332_ = l_Lean_Syntax_node2(v___x_324_, v___x_305_, v___x_326_, v___x_331_);
v___x_333_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46));
v___x_334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_324_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = l_Lean_Syntax_node3(v___x_324_, v___x_178_, v___x_332_, v_a_319_, v___x_334_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_335_);
v___x_337_ = v___x_322_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_a_320_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
else
{
return v___x_318_;
}
}
}
}
}
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_unsigned_to_nat(1u);
v___x_341_ = l_Lean_Syntax_getArg(v_x_173_, v___x_340_);
lean_dec(v_x_173_);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___y_175_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___boxed(lean_object* v_x_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_x_343_, v___y_344_, v___y_345_);
lean_dec(v___y_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple(lean_object* v_x_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = ((lean_object*)(l_Std_Do_unexpandTriple___closed__1));
lean_inc(v_x_353_);
v___x_357_ = l_Lean_Syntax_isOfKind(v_x_353_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_dec(v_x_353_);
v___x_358_ = lean_box(0);
v___x_359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v_a_355_);
return v___x_359_;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_360_ = lean_unsigned_to_nat(1u);
v___x_361_ = l_Lean_Syntax_getArg(v_x_353_, v___x_360_);
lean_dec(v_x_353_);
v___x_362_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_361_);
v___x_363_ = l_Lean_Syntax_matchesNull(v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v___x_365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v_a_355_);
return v___x_365_;
}
else
{
lean_object* v_P_366_; lean_object* v___x_367_; 
v_P_366_ = l_Lean_Syntax_getArg(v___x_361_, v___x_360_);
v___x_367_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_P_366_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_388_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_a_369_ = lean_ctor_get(v___x_367_, 1);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_388_ == 0)
{
v___x_371_ = v___x_367_;
v_isShared_372_ = v_isSharedCheck_388_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_388_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = l_Lean_Syntax_getArg(v___x_361_, v___x_373_);
v___x_375_ = lean_unsigned_to_nat(2u);
v___x_376_ = l_Lean_Syntax_getArg(v___x_361_, v___x_375_);
lean_dec(v___x_361_);
v___x_377_ = 0;
v___x_378_ = l_Lean_SourceInfo_fromRef(v_a_354_, v___x_377_);
v___x_379_ = ((lean_object*)(l_Std_Do_triple___closed__3));
v___x_380_ = ((lean_object*)(l_Std_Do_triple___closed__6));
lean_inc_n(v___x_378_, 2);
v___x_381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_378_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = ((lean_object*)(l_Std_Do_triple___closed__21));
v___x_383_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_378_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
lean_inc_ref(v___x_383_);
lean_inc_ref(v___x_381_);
v___x_384_ = l_Lean_Syntax_node7(v___x_378_, v___x_379_, v___x_381_, v_a_368_, v___x_383_, v___x_374_, v___x_381_, v___x_376_, v___x_383_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_384_);
v___x_386_ = v___x_371_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_a_369_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
else
{
lean_object* v_a_389_; lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_dec(v___x_361_);
v_a_389_ = lean_ctor_get(v___x_367_, 0);
v_a_390_ = lean_ctor_get(v___x_367_, 1);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_367_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_inc(v_a_389_);
lean_dec(v___x_367_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_389_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple___boxed(lean_object* v_x_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Std_Do_unexpandTriple(v_x_398_, v_a_399_, v_a_400_);
lean_dec(v_a_399_);
return v_res_401_;
}
}
lean_object* runtime_initialize_Std_Do_WP(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_WP(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_Triple_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

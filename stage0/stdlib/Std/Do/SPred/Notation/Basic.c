// Lean compiler output
// Module: Std.Do.SPred.Notation.Basic
// Imports: public import Std.Do.SPred.SPred
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__0 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__0_value;
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__1 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__1_value;
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "termSpred(_)"};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__2 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__3_value_aux_0),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__3_value_aux_1),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__2_value),LEAN_SCALAR_PTR_LITERAL(76, 240, 91, 148, 237, 191, 255, 193)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__3 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__3_value;
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__4 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__5 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__5_value;
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spred("};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__6 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__6_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__7 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__7_value;
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__8 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__8_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__9 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__9_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__10 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__10_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__5_value),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__7_value),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__10_value)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__11 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__11_value;
static const lean_string_object l_Std_Do_termSpred_x28___x29___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__12 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__12_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__12_value)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__13 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__13_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__5_value),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__11_value),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__13_value)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__14 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__14_value;
static const lean_ctor_object l_Std_Do_termSpred_x28___x29___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__14_value)}};
static const lean_object* l_Std_Do_termSpred_x28___x29___closed__15 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__15_value;
LEAN_EXPORT const lean_object* l_Std_Do_termSpred_x28___x29 = (const lean_object*)&l_Std_Do_termSpred_x28___x29___closed__15_value;
static const lean_string_object l_Std_Do_termTerm_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "termTerm(_)"};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__0 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__1_value_aux_0),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 176, 69, 25, 99, 246, 131, 165)}};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__1 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__1_value;
static const lean_string_object l_Std_Do_termTerm_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "term("};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__2 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__2_value)}};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__3 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__3_value;
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__5_value),((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__3_value),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__10_value)}};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__4 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__5_value),((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__4_value),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__13_value)}};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__5 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Do_termTerm_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_termTerm_x28___x29___closed__5_value)}};
static const lean_object* l_Std_Do_termTerm_x28___x29___closed__6 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Do_termTerm_x28___x29 = (const lean_object*)&l_Std_Do_termTerm_x28___x29___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__7_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__8_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__9_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__9_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__11_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__13 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__13_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__17 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__17_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__19_value_aux_0),((lean_object*)&l_Std_Do_termSpred_x28___x29___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__19_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__19_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__20 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__20_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__21 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__21_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__22_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__22_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__22_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__23 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__23_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__24_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__24 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__24_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__24_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__25 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__25_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__26 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__26_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__27_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__26_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__27 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__27_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__27_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__28 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__28_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__29 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__29_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__29_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__30 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__30_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__31 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__31_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__28_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__31_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__32 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__32_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__25_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__32_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__33 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__33_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__23_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__33_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__34 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__34_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__20_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__34_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__35 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__35_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__36 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__36_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__37 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__37_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__37_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__39 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__39_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__40 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__40_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__41 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__41_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__42 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__42_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__42_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__45 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__45_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__3(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__0_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Notation"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__1 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__18___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1___redArg(lean_object* v_x_57_, lean_object* v_a_58_){
_start:
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__3));
lean_inc(v_x_57_);
v___x_60_ = l_Lean_Syntax_isOfKind(v_x_57_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; lean_object* v___x_62_; 
lean_dec(v_x_57_);
v___x_61_ = lean_box(1);
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v_a_58_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = l_Lean_Syntax_getArg(v_x_57_, v___x_63_);
lean_dec(v_x_57_);
v___x_65_ = ((lean_object*)(l_Std_Do_termTerm_x28___x29___closed__1));
lean_inc(v___x_64_);
v___x_66_ = l_Lean_Syntax_isOfKind(v___x_64_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; 
v___x_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_64_);
lean_ctor_set(v___x_67_, 1, v_a_58_);
return v___x_67_;
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = l_Lean_Syntax_getArg(v___x_64_, v___x_63_);
lean_dec(v___x_64_);
v___x_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v_a_58_);
return v___x_69_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1(lean_object* v_x_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1___redArg(v_x_70_, v_a_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1___boxed(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__1(v_x_74_, v_a_75_, v_a_76_);
lean_dec_ref(v_a_75_);
return v_res_77_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_box(0);
v___x_112_ = l_unsafeCast___redArg(v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__17));
v___x_116_ = l_String_toRawSubstring_x27(v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Array_mkArray0___redArg();
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2(lean_object* v_x_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__3));
lean_inc(v_x_173_);
v___x_177_ = l_Lean_Syntax_isOfKind(v_x_173_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; 
lean_dec(v_x_173_);
v___x_178_ = lean_box(1);
v___x_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v_a_175_);
return v___x_179_;
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = l_Lean_Syntax_getArg(v_x_173_, v___x_181_);
lean_dec(v_x_173_);
v___x_183_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4));
lean_inc(v___x_182_);
v___x_184_ = l_Lean_Syntax_isOfKind(v___x_182_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_185_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__5));
v___x_186_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6));
lean_inc(v___x_182_);
v___x_187_ = l_Lean_Syntax_isOfKind(v___x_182_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__8));
lean_inc(v___x_182_);
v___x_189_ = l_Lean_Syntax_isOfKind(v___x_182_, v___x_188_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10));
lean_inc(v___x_182_);
v___x_191_ = l_Lean_Syntax_isOfKind(v___x_182_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec(v___x_182_);
v___x_192_ = lean_box(1);
v___x_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v_a_175_);
return v___x_193_;
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_194_ = l_Lean_Syntax_getArg(v___x_182_, v___x_180_);
v___x_195_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12));
lean_inc(v___x_194_);
v___x_196_ = l_Lean_Syntax_isOfKind(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
lean_dec(v___x_194_);
lean_dec(v___x_182_);
v___x_197_ = lean_box(1);
v___x_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_a_175_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_199_ = l_Lean_Syntax_getArg(v___x_194_, v___x_181_);
lean_dec(v___x_194_);
v___x_200_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14));
lean_inc(v___x_199_);
v___x_201_ = l_Lean_Syntax_isOfKind(v___x_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec(v___x_199_);
lean_dec(v___x_182_);
v___x_202_ = lean_box(1);
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v_a_175_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_204_ = l_Lean_Syntax_getArg(v___x_199_, v___x_180_);
lean_dec(v___x_199_);
v___x_205_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15);
v___x_206_ = l_Lean_Syntax_matchesIdent(v___x_204_, v___x_205_);
lean_dec(v___x_204_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; 
lean_dec(v___x_182_);
v___x_207_ = lean_box(1);
v___x_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v_a_175_);
return v___x_208_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_209_ = lean_unsigned_to_nat(3u);
v___x_210_ = l_Lean_Syntax_getArg(v___x_182_, v___x_209_);
lean_inc(v___x_210_);
v___x_211_ = l_Lean_Syntax_matchesNull(v___x_210_, v___x_181_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec(v___x_210_);
lean_dec(v___x_182_);
v___x_212_ = lean_box(1);
v___x_213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v_a_175_);
return v___x_213_;
}
else
{
lean_object* v_quotContext_214_; lean_object* v_currMacroScope_215_; lean_object* v_ref_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_quotContext_214_ = lean_ctor_get(v_a_174_, 1);
v_currMacroScope_215_ = lean_ctor_get(v_a_174_, 2);
v_ref_216_ = lean_ctor_get(v_a_174_, 5);
v___x_217_ = l_Lean_Syntax_getArg(v___x_182_, v___x_181_);
lean_dec(v___x_182_);
v___x_218_ = l_Lean_Syntax_getArg(v___x_210_, v___x_180_);
lean_dec(v___x_210_);
v___x_219_ = l_Lean_SourceInfo_fromRef(v_ref_216_, v___x_189_);
v___x_220_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16));
lean_inc_n(v___x_219_, 9);
v___x_221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18);
lean_inc(v_currMacroScope_215_);
lean_inc(v_quotContext_214_);
v___x_223_ = l_Lean_addMacroScope(v_quotContext_214_, v___x_205_, v_currMacroScope_215_);
v___x_224_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__35));
v___x_225_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_225_, 0, v___x_219_);
lean_ctor_set(v___x_225_, 1, v___x_222_);
lean_ctor_set(v___x_225_, 2, v___x_223_);
lean_ctor_set(v___x_225_, 3, v___x_224_);
v___x_226_ = l_Lean_Syntax_node1(v___x_219_, v___x_200_, v___x_225_);
v___x_227_ = l_Lean_Syntax_node2(v___x_219_, v___x_195_, v___x_221_, v___x_226_);
v___x_228_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__6));
v___x_229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_219_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__12));
v___x_231_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_219_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
lean_inc_ref(v___x_231_);
v___x_232_ = l_Lean_Syntax_node3(v___x_219_, v___x_176_, v___x_229_, v___x_217_, v___x_231_);
v___x_233_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__36));
v___x_234_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_219_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38));
v___x_236_ = l_Lean_Syntax_node1(v___x_219_, v___x_235_, v___x_218_);
v___x_237_ = l_Lean_Syntax_node5(v___x_219_, v___x_190_, v___x_227_, v___x_232_, v___x_234_, v___x_236_, v___x_231_);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_a_175_);
return v___x_238_;
}
}
}
}
}
}
else
{
lean_object* v_ref_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_ref_239_ = lean_ctor_get(v_a_174_, 5);
v___x_240_ = l_Lean_Syntax_getArg(v___x_182_, v___x_181_);
v___x_241_ = lean_unsigned_to_nat(3u);
v___x_242_ = l_Lean_Syntax_getArg(v___x_182_, v___x_241_);
v___x_243_ = lean_unsigned_to_nat(5u);
v___x_244_ = l_Lean_Syntax_getArg(v___x_182_, v___x_243_);
lean_dec(v___x_182_);
v___x_245_ = l_Lean_SourceInfo_fromRef(v_ref_239_, v___x_187_);
v___x_246_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__39));
lean_inc_n(v___x_245_, 7);
v___x_247_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__40));
v___x_249_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_245_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__6));
v___x_251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_245_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__12));
v___x_253_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_245_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_inc_ref(v___x_253_);
lean_inc_ref(v___x_251_);
v___x_254_ = l_Lean_Syntax_node3(v___x_245_, v___x_176_, v___x_251_, v___x_242_, v___x_253_);
v___x_255_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__41));
v___x_256_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_245_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = l_Lean_Syntax_node3(v___x_245_, v___x_176_, v___x_251_, v___x_244_, v___x_253_);
v___x_258_ = l_Lean_Syntax_node6(v___x_245_, v___x_188_, v___x_247_, v___x_240_, v___x_249_, v___x_254_, v___x_256_, v___x_257_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v_a_175_);
return v___x_259_;
}
}
else
{
lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_260_ = l_Lean_Syntax_getArg(v___x_182_, v___x_181_);
lean_dec(v___x_182_);
v___x_261_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43));
lean_inc(v___x_260_);
v___x_262_ = l_Lean_Syntax_isOfKind(v___x_260_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_260_);
v___x_263_ = lean_box(1);
v___x_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v_a_175_);
return v___x_264_;
}
else
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = l_Lean_Syntax_getArg(v___x_260_, v___x_181_);
v___x_266_ = l_Lean_Syntax_matchesNull(v___x_265_, v___x_180_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec(v___x_260_);
v___x_267_ = lean_box(1);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v_a_175_);
return v___x_268_;
}
else
{
lean_object* v_ref_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v_xs_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_ref_269_ = lean_ctor_get(v_a_174_, 5);
v___x_270_ = l_Lean_Syntax_getArg(v___x_260_, v___x_180_);
v___x_271_ = lean_unsigned_to_nat(3u);
v___x_272_ = l_Lean_Syntax_getArg(v___x_260_, v___x_271_);
lean_dec(v___x_260_);
v___x_273_ = l_Lean_Syntax_getArgs(v___x_270_);
lean_dec(v___x_270_);
v_xs_274_ = l_unsafeCast___redArg(v___x_273_);
lean_dec_ref(v___x_273_);
v___x_275_ = l_Lean_SourceInfo_fromRef(v_ref_269_, v___x_184_);
lean_inc_n(v___x_275_, 8);
v___x_276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_185_);
v___x_277_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38));
v___x_278_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44);
v___x_279_ = l_unsafeCast___redArg(v_xs_274_);
lean_dec(v_xs_274_);
v___x_280_ = l_Array_append___redArg(v___x_278_, v___x_279_);
lean_dec(v___x_279_);
v___x_281_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_281_, 0, v___x_275_);
lean_ctor_set(v___x_281_, 1, v___x_277_);
lean_ctor_set(v___x_281_, 2, v___x_280_);
v___x_282_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_282_, 0, v___x_275_);
lean_ctor_set(v___x_282_, 1, v___x_277_);
lean_ctor_set(v___x_282_, 2, v___x_278_);
v___x_283_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__45));
v___x_284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_275_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__6));
v___x_286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_275_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__12));
v___x_288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_275_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = l_Lean_Syntax_node3(v___x_275_, v___x_176_, v___x_286_, v___x_272_, v___x_288_);
v___x_290_ = l_Lean_Syntax_node4(v___x_275_, v___x_261_, v___x_281_, v___x_282_, v___x_284_, v___x_289_);
v___x_291_ = l_Lean_Syntax_node2(v___x_275_, v___x_186_, v___x_276_, v___x_290_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v_a_175_);
return v___x_292_;
}
}
}
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_293_ = l_Lean_Syntax_getArg(v___x_182_, v___x_180_);
v___x_294_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12));
lean_inc(v___x_293_);
v___x_295_ = l_Lean_Syntax_isOfKind(v___x_293_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec(v___x_293_);
lean_dec(v___x_182_);
v___x_296_ = lean_box(1);
v___x_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v_a_175_);
return v___x_297_;
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_298_ = l_Lean_Syntax_getArg(v___x_293_, v___x_181_);
lean_dec(v___x_293_);
v___x_299_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14));
lean_inc(v___x_298_);
v___x_300_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec(v___x_298_);
lean_dec(v___x_182_);
v___x_301_ = lean_box(1);
v___x_302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set(v___x_302_, 1, v_a_175_);
return v___x_302_;
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_303_ = l_Lean_Syntax_getArg(v___x_298_, v___x_180_);
lean_dec(v___x_298_);
v___x_304_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15);
v___x_305_ = l_Lean_Syntax_matchesIdent(v___x_303_, v___x_304_);
lean_dec(v___x_303_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec(v___x_182_);
v___x_306_ = lean_box(1);
v___x_307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v_a_175_);
return v___x_307_;
}
else
{
lean_object* v_quotContext_308_; lean_object* v_currMacroScope_309_; lean_object* v_ref_310_; lean_object* v___x_311_; uint8_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_quotContext_308_ = lean_ctor_get(v_a_174_, 1);
v_currMacroScope_309_ = lean_ctor_get(v_a_174_, 2);
v_ref_310_ = lean_ctor_get(v_a_174_, 5);
v___x_311_ = l_Lean_Syntax_getArg(v___x_182_, v___x_181_);
lean_dec(v___x_182_);
v___x_312_ = 0;
v___x_313_ = l_Lean_SourceInfo_fromRef(v_ref_310_, v___x_312_);
v___x_314_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16));
lean_inc_n(v___x_313_, 7);
v___x_315_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_313_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18);
lean_inc(v_currMacroScope_309_);
lean_inc(v_quotContext_308_);
v___x_317_ = l_Lean_addMacroScope(v_quotContext_308_, v___x_304_, v_currMacroScope_309_);
v___x_318_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__35));
v___x_319_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_319_, 0, v___x_313_);
lean_ctor_set(v___x_319_, 1, v___x_316_);
lean_ctor_set(v___x_319_, 2, v___x_317_);
lean_ctor_set(v___x_319_, 3, v___x_318_);
v___x_320_ = l_Lean_Syntax_node1(v___x_313_, v___x_299_, v___x_319_);
v___x_321_ = l_Lean_Syntax_node2(v___x_313_, v___x_294_, v___x_315_, v___x_320_);
v___x_322_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__6));
v___x_323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_313_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__12));
v___x_325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_313_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
lean_inc_ref(v___x_325_);
v___x_326_ = l_Lean_Syntax_node3(v___x_313_, v___x_176_, v___x_323_, v___x_311_, v___x_325_);
v___x_327_ = l_Lean_Syntax_node3(v___x_313_, v___x_183_, v___x_321_, v___x_326_, v___x_325_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v_a_175_);
return v___x_328_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___boxed(lean_object* v_x_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2(v_x_329_, v_a_330_, v_a_331_);
lean_dec_ref(v_a_330_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__0(lean_object* v_toPure_333_, lean_object* v_x_334_, lean_object* v_quotCtx_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_apply_2(v_toPure_333_, lean_box(0), v_x_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed(lean_object* v_toPure_337_, lean_object* v_x_338_, lean_object* v_quotCtx_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__0(v_toPure_337_, v_x_338_, v_quotCtx_339_);
lean_dec(v_quotCtx_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__1(lean_object* v_inst_341_, lean_object* v_toBind_342_, lean_object* v___f_343_, lean_object* v_scp_344_){
_start:
{
lean_object* v_getContext_345_; lean_object* v___x_346_; 
v_getContext_345_ = lean_ctor_get(v_inst_341_, 2);
lean_inc(v_getContext_345_);
lean_dec_ref(v_inst_341_);
v___x_346_ = lean_apply_4(v_toBind_342_, lean_box(0), lean_box(0), v_getContext_345_, v___f_343_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed(lean_object* v_inst_347_, lean_object* v_toBind_348_, lean_object* v___f_349_, lean_object* v_scp_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__1(v_inst_347_, v_toBind_348_, v___f_349_, v_scp_350_);
lean_dec(v_scp_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__2(lean_object* v_inst_352_, lean_object* v_toBind_353_, lean_object* v___f_354_, lean_object* v_info_355_){
_start:
{
lean_object* v_getCurrMacroScope_356_; lean_object* v___x_357_; 
v_getCurrMacroScope_356_ = lean_ctor_get(v_inst_352_, 1);
lean_inc(v_getCurrMacroScope_356_);
lean_dec_ref(v_inst_352_);
v___x_357_ = lean_apply_4(v_toBind_353_, lean_box(0), lean_box(0), v_getCurrMacroScope_356_, v___f_354_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed(lean_object* v_inst_358_, lean_object* v_toBind_359_, lean_object* v___f_360_, lean_object* v_info_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__2(v_inst_358_, v_toBind_359_, v___f_360_, v_info_361_);
lean_dec(v_info_361_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__3(uint8_t v___x_363_, lean_object* v_toPure_364_, lean_object* v_____do__lift_365_){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = l_Lean_SourceInfo_fromRef(v_____do__lift_365_, v___x_363_);
v___x_367_ = lean_apply_2(v_toPure_364_, lean_box(0), v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed(lean_object* v___x_368_, lean_object* v_toPure_369_, lean_object* v_____do__lift_370_){
_start:
{
uint8_t v___x_1571__boxed_371_; lean_object* v_res_372_; 
v___x_1571__boxed_371_ = lean_unbox(v___x_368_);
v_res_372_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__3(v___x_1571__boxed_371_, v_toPure_369_, v_____do__lift_370_);
lean_dec(v_____do__lift_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__21(lean_object* v_info_375_, lean_object* v___x_376_, lean_object* v_scp_377_, lean_object* v___x_378_, lean_object* v___x_379_, lean_object* v___x_380_, lean_object* v___x_381_, lean_object* v___x_382_, lean_object* v___x_383_, lean_object* v___x_384_, lean_object* v___x_385_, lean_object* v_____do__lift_386_, lean_object* v_toPure_387_, lean_object* v_quotCtx_388_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_389_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16));
lean_inc_n(v_info_375_, 7);
v___x_390_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_390_, 0, v_info_375_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18);
v___x_392_ = l_Lean_addMacroScope(v_quotCtx_388_, v___x_376_, v_scp_377_);
v___x_393_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__0));
v___x_394_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__1));
v___x_395_ = l_Lean_Name_mkStr4(v___x_378_, v___x_379_, v___x_393_, v___x_394_);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
v___x_397_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__21));
lean_inc_ref_n(v___x_380_, 3);
v___x_398_ = l_Lean_Name_mkStr2(v___x_380_, v___x_397_);
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
v___x_400_ = l_Lean_Name_mkStr2(v___x_380_, v___x_381_);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
v___x_402_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__26));
v___x_403_ = l_Lean_Name_mkStr2(v___x_380_, v___x_402_);
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
v___x_405_ = l_Lean_Name_mkStr1(v___x_380_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
v___x_407_ = lean_box(0);
v___x_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_406_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
v___x_409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_404_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_401_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_399_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_396_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
v___x_413_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_413_, 0, v_info_375_);
lean_ctor_set(v___x_413_, 1, v___x_391_);
lean_ctor_set(v___x_413_, 2, v___x_392_);
lean_ctor_set(v___x_413_, 3, v___x_412_);
v___x_414_ = l_Lean_Syntax_node1(v_info_375_, v___x_382_, v___x_413_);
v___x_415_ = l_Lean_Syntax_node2(v_info_375_, v___x_383_, v___x_390_, v___x_414_);
v___x_416_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__36));
v___x_417_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_417_, 0, v_info_375_);
lean_ctor_set(v___x_417_, 1, v___x_416_);
v___x_418_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38));
v___x_419_ = l_Lean_Syntax_node1(v_info_375_, v___x_418_, v___x_384_);
v___x_420_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__12));
v___x_421_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_421_, 0, v_info_375_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = l_Lean_Syntax_node5(v_info_375_, v___x_385_, v___x_415_, v_____do__lift_386_, v___x_417_, v___x_419_, v___x_421_);
v___x_423_ = lean_apply_2(v_toPure_387_, lean_box(0), v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__4(lean_object* v_info_424_, lean_object* v___x_425_, lean_object* v___x_426_, lean_object* v___x_427_, lean_object* v___x_428_, lean_object* v___x_429_, lean_object* v___x_430_, lean_object* v___x_431_, lean_object* v___x_432_, lean_object* v___x_433_, lean_object* v_____do__lift_434_, lean_object* v_toPure_435_, lean_object* v_toBind_436_, lean_object* v_getContext_437_, lean_object* v_scp_438_){
_start:
{
lean_object* v___f_439_; lean_object* v___x_440_; 
v___f_439_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__21), 14, 13);
lean_closure_set(v___f_439_, 0, v_info_424_);
lean_closure_set(v___f_439_, 1, v___x_425_);
lean_closure_set(v___f_439_, 2, v_scp_438_);
lean_closure_set(v___f_439_, 3, v___x_426_);
lean_closure_set(v___f_439_, 4, v___x_427_);
lean_closure_set(v___f_439_, 5, v___x_428_);
lean_closure_set(v___f_439_, 6, v___x_429_);
lean_closure_set(v___f_439_, 7, v___x_430_);
lean_closure_set(v___f_439_, 8, v___x_431_);
lean_closure_set(v___f_439_, 9, v___x_432_);
lean_closure_set(v___f_439_, 10, v___x_433_);
lean_closure_set(v___f_439_, 11, v_____do__lift_434_);
lean_closure_set(v___f_439_, 12, v_toPure_435_);
v___x_440_ = lean_apply_4(v_toBind_436_, lean_box(0), lean_box(0), v_getContext_437_, v___f_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__5(lean_object* v_inst_441_, lean_object* v___x_442_, lean_object* v___x_443_, lean_object* v___x_444_, lean_object* v___x_445_, lean_object* v___x_446_, lean_object* v___x_447_, lean_object* v___x_448_, lean_object* v___x_449_, lean_object* v___x_450_, lean_object* v_____do__lift_451_, lean_object* v_toPure_452_, lean_object* v_toBind_453_, lean_object* v_info_454_){
_start:
{
lean_object* v_getCurrMacroScope_455_; lean_object* v_getContext_456_; lean_object* v___f_457_; lean_object* v___x_458_; 
v_getCurrMacroScope_455_ = lean_ctor_get(v_inst_441_, 1);
lean_inc(v_getCurrMacroScope_455_);
v_getContext_456_ = lean_ctor_get(v_inst_441_, 2);
lean_inc(v_getContext_456_);
lean_dec_ref(v_inst_441_);
lean_inc(v_toBind_453_);
v___f_457_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__4), 15, 14);
lean_closure_set(v___f_457_, 0, v_info_454_);
lean_closure_set(v___f_457_, 1, v___x_442_);
lean_closure_set(v___f_457_, 2, v___x_443_);
lean_closure_set(v___f_457_, 3, v___x_444_);
lean_closure_set(v___f_457_, 4, v___x_445_);
lean_closure_set(v___f_457_, 5, v___x_446_);
lean_closure_set(v___f_457_, 6, v___x_447_);
lean_closure_set(v___f_457_, 7, v___x_448_);
lean_closure_set(v___f_457_, 8, v___x_449_);
lean_closure_set(v___f_457_, 9, v___x_450_);
lean_closure_set(v___f_457_, 10, v_____do__lift_451_);
lean_closure_set(v___f_457_, 11, v_toPure_452_);
lean_closure_set(v___f_457_, 12, v_toBind_453_);
lean_closure_set(v___f_457_, 13, v_getContext_456_);
v___x_458_ = lean_apply_4(v_toBind_453_, lean_box(0), lean_box(0), v_getCurrMacroScope_455_, v___f_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__6(lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v___x_461_, lean_object* v___x_462_, lean_object* v___x_463_, lean_object* v___x_464_, lean_object* v___x_465_, lean_object* v___x_466_, lean_object* v___x_467_, lean_object* v___x_468_, lean_object* v___x_469_, lean_object* v_toPure_470_, lean_object* v_toBind_471_, lean_object* v___f_472_, lean_object* v_____do__lift_473_){
_start:
{
lean_object* v_getRef_474_; lean_object* v___f_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_getRef_474_ = lean_ctor_get(v_inst_459_, 0);
lean_inc(v_getRef_474_);
lean_dec_ref(v_inst_459_);
lean_inc_n(v_toBind_471_, 2);
v___f_475_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__5), 14, 13);
lean_closure_set(v___f_475_, 0, v_inst_460_);
lean_closure_set(v___f_475_, 1, v___x_461_);
lean_closure_set(v___f_475_, 2, v___x_462_);
lean_closure_set(v___f_475_, 3, v___x_463_);
lean_closure_set(v___f_475_, 4, v___x_464_);
lean_closure_set(v___f_475_, 5, v___x_465_);
lean_closure_set(v___f_475_, 6, v___x_466_);
lean_closure_set(v___f_475_, 7, v___x_467_);
lean_closure_set(v___f_475_, 8, v___x_468_);
lean_closure_set(v___f_475_, 9, v___x_469_);
lean_closure_set(v___f_475_, 10, v_____do__lift_473_);
lean_closure_set(v___f_475_, 11, v_toPure_470_);
lean_closure_set(v___f_475_, 12, v_toBind_471_);
v___x_476_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_getRef_474_, v___f_472_);
v___x_477_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v___x_476_, v___f_475_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__16(lean_object* v_info_478_, lean_object* v___x_479_, lean_object* v_xs_480_, lean_object* v___x_481_, lean_object* v_b_482_, lean_object* v___x_483_, lean_object* v_toPure_484_, lean_object* v_quotCtx_485_){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
lean_inc_n(v_info_478_, 5);
v___x_486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_486_, 0, v_info_478_);
lean_ctor_set(v___x_486_, 1, v___x_479_);
v___x_487_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__38));
v___x_488_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__44);
v___x_489_ = l_unsafeCast___redArg(v_xs_480_);
v___x_490_ = l_Array_append___redArg(v___x_488_, v___x_489_);
lean_dec(v___x_489_);
v___x_491_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_491_, 0, v_info_478_);
lean_ctor_set(v___x_491_, 1, v___x_487_);
lean_ctor_set(v___x_491_, 2, v___x_490_);
v___x_492_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_492_, 0, v_info_478_);
lean_ctor_set(v___x_492_, 1, v___x_487_);
lean_ctor_set(v___x_492_, 2, v___x_488_);
v___x_493_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__45));
v___x_494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_494_, 0, v_info_478_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = l_Lean_Syntax_node4(v_info_478_, v___x_481_, v___x_491_, v___x_492_, v___x_494_, v_b_482_);
v___x_496_ = l_Lean_Syntax_node2(v_info_478_, v___x_483_, v___x_486_, v___x_495_);
v___x_497_ = lean_apply_2(v_toPure_484_, lean_box(0), v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__16___boxed(lean_object* v_info_498_, lean_object* v___x_499_, lean_object* v_xs_500_, lean_object* v___x_501_, lean_object* v_b_502_, lean_object* v___x_503_, lean_object* v_toPure_504_, lean_object* v_quotCtx_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__16(v_info_498_, v___x_499_, v_xs_500_, v___x_501_, v_b_502_, v___x_503_, v_toPure_504_, v_quotCtx_505_);
lean_dec(v_quotCtx_505_);
lean_dec(v_xs_500_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__7(lean_object* v_toBind_507_, lean_object* v_getContext_508_, lean_object* v___f_509_, lean_object* v_scp_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_apply_4(v_toBind_507_, lean_box(0), lean_box(0), v_getContext_508_, v___f_509_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__7___boxed(lean_object* v_toBind_512_, lean_object* v_getContext_513_, lean_object* v___f_514_, lean_object* v_scp_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__7(v_toBind_512_, v_getContext_513_, v___f_514_, v_scp_515_);
lean_dec(v_scp_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__8(lean_object* v_inst_517_, lean_object* v___x_518_, lean_object* v_xs_519_, lean_object* v___x_520_, lean_object* v_b_521_, lean_object* v___x_522_, lean_object* v_toPure_523_, lean_object* v_toBind_524_, lean_object* v_info_525_){
_start:
{
lean_object* v_getCurrMacroScope_526_; lean_object* v_getContext_527_; lean_object* v___f_528_; lean_object* v___f_529_; lean_object* v___x_530_; 
v_getCurrMacroScope_526_ = lean_ctor_get(v_inst_517_, 1);
lean_inc(v_getCurrMacroScope_526_);
v_getContext_527_ = lean_ctor_get(v_inst_517_, 2);
lean_inc(v_getContext_527_);
lean_dec_ref(v_inst_517_);
v___f_528_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__16___boxed), 8, 7);
lean_closure_set(v___f_528_, 0, v_info_525_);
lean_closure_set(v___f_528_, 1, v___x_518_);
lean_closure_set(v___f_528_, 2, v_xs_519_);
lean_closure_set(v___f_528_, 3, v___x_520_);
lean_closure_set(v___f_528_, 4, v_b_521_);
lean_closure_set(v___f_528_, 5, v___x_522_);
lean_closure_set(v___f_528_, 6, v_toPure_523_);
lean_inc(v_toBind_524_);
v___f_529_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__7___boxed), 4, 3);
lean_closure_set(v___f_529_, 0, v_toBind_524_);
lean_closure_set(v___f_529_, 1, v_getContext_527_);
lean_closure_set(v___f_529_, 2, v___f_528_);
v___x_530_ = lean_apply_4(v_toBind_524_, lean_box(0), lean_box(0), v_getCurrMacroScope_526_, v___f_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__9(lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v___x_533_, lean_object* v_xs_534_, lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v_toPure_537_, lean_object* v_toBind_538_, lean_object* v___f_539_, lean_object* v_b_540_){
_start:
{
lean_object* v_getRef_541_; lean_object* v___f_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_getRef_541_ = lean_ctor_get(v_inst_531_, 0);
lean_inc(v_getRef_541_);
lean_dec_ref(v_inst_531_);
lean_inc_n(v_toBind_538_, 2);
v___f_542_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__8), 9, 8);
lean_closure_set(v___f_542_, 0, v_inst_532_);
lean_closure_set(v___f_542_, 1, v___x_533_);
lean_closure_set(v___f_542_, 2, v_xs_534_);
lean_closure_set(v___f_542_, 3, v___x_535_);
lean_closure_set(v___f_542_, 4, v_b_540_);
lean_closure_set(v___f_542_, 5, v___x_536_);
lean_closure_set(v___f_542_, 6, v_toPure_537_);
lean_closure_set(v___f_542_, 7, v_toBind_538_);
v___x_543_ = lean_apply_4(v_toBind_538_, lean_box(0), lean_box(0), v_getRef_541_, v___f_539_);
v___x_544_ = lean_apply_4(v_toBind_538_, lean_box(0), lean_box(0), v___x_543_, v___f_542_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__11(lean_object* v_info_545_, lean_object* v___x_546_, lean_object* v___x_547_, lean_object* v_t_548_, lean_object* v_e_549_, lean_object* v_toPure_550_, lean_object* v_quotCtx_551_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_552_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__39));
lean_inc_n(v_info_545_, 3);
v___x_553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_553_, 0, v_info_545_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__40));
v___x_555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_555_, 0, v_info_545_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__41));
v___x_557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_557_, 0, v_info_545_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = l_Lean_Syntax_node6(v_info_545_, v___x_546_, v___x_553_, v___x_547_, v___x_555_, v_t_548_, v___x_557_, v_e_549_);
v___x_559_ = lean_apply_2(v_toPure_550_, lean_box(0), v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__11___boxed(lean_object* v_info_560_, lean_object* v___x_561_, lean_object* v___x_562_, lean_object* v_t_563_, lean_object* v_e_564_, lean_object* v_toPure_565_, lean_object* v_quotCtx_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__11(v_info_560_, v___x_561_, v___x_562_, v_t_563_, v_e_564_, v_toPure_565_, v_quotCtx_566_);
lean_dec(v_quotCtx_566_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__12(lean_object* v_inst_568_, lean_object* v___x_569_, lean_object* v___x_570_, lean_object* v_t_571_, lean_object* v_e_572_, lean_object* v_toPure_573_, lean_object* v_toBind_574_, lean_object* v_info_575_){
_start:
{
lean_object* v_getCurrMacroScope_576_; lean_object* v_getContext_577_; lean_object* v___f_578_; lean_object* v___f_579_; lean_object* v___x_580_; 
v_getCurrMacroScope_576_ = lean_ctor_get(v_inst_568_, 1);
lean_inc(v_getCurrMacroScope_576_);
v_getContext_577_ = lean_ctor_get(v_inst_568_, 2);
lean_inc(v_getContext_577_);
lean_dec_ref(v_inst_568_);
v___f_578_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__11___boxed), 7, 6);
lean_closure_set(v___f_578_, 0, v_info_575_);
lean_closure_set(v___f_578_, 1, v___x_569_);
lean_closure_set(v___f_578_, 2, v___x_570_);
lean_closure_set(v___f_578_, 3, v_t_571_);
lean_closure_set(v___f_578_, 4, v_e_572_);
lean_closure_set(v___f_578_, 5, v_toPure_573_);
lean_inc(v_toBind_574_);
v___f_579_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__7___boxed), 4, 3);
lean_closure_set(v___f_579_, 0, v_toBind_574_);
lean_closure_set(v___f_579_, 1, v_getContext_577_);
lean_closure_set(v___f_579_, 2, v___f_578_);
v___x_580_ = lean_apply_4(v_toBind_574_, lean_box(0), lean_box(0), v_getCurrMacroScope_576_, v___f_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__10(lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v___x_583_, lean_object* v___x_584_, lean_object* v_t_585_, lean_object* v_toPure_586_, lean_object* v_toBind_587_, lean_object* v___f_588_, lean_object* v_e_589_){
_start:
{
lean_object* v_getRef_590_; lean_object* v___f_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_getRef_590_ = lean_ctor_get(v_inst_581_, 0);
lean_inc(v_getRef_590_);
lean_dec_ref(v_inst_581_);
lean_inc_n(v_toBind_587_, 2);
v___f_591_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__12), 8, 7);
lean_closure_set(v___f_591_, 0, v_inst_582_);
lean_closure_set(v___f_591_, 1, v___x_583_);
lean_closure_set(v___f_591_, 2, v___x_584_);
lean_closure_set(v___f_591_, 3, v_t_585_);
lean_closure_set(v___f_591_, 4, v_e_589_);
lean_closure_set(v___f_591_, 5, v_toPure_586_);
lean_closure_set(v___f_591_, 6, v_toBind_587_);
v___x_592_ = lean_apply_4(v_toBind_587_, lean_box(0), lean_box(0), v_getRef_590_, v___f_588_);
v___x_593_ = lean_apply_4(v_toBind_587_, lean_box(0), lean_box(0), v___x_592_, v___f_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__19(lean_object* v_toPure_594_, lean_object* v___x_595_, lean_object* v_quotCtx_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_apply_2(v_toPure_594_, lean_box(0), v___x_595_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__19___boxed(lean_object* v_toPure_598_, lean_object* v___x_599_, lean_object* v_quotCtx_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__19(v_toPure_598_, v___x_599_, v_quotCtx_600_);
lean_dec(v_quotCtx_600_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__18(lean_object* v_toPure_602_, lean_object* v_____do__lift_603_){
_start:
{
uint8_t v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = 0;
v___x_605_ = l_Lean_SourceInfo_fromRef(v_____do__lift_603_, v___x_604_);
v___x_606_ = lean_apply_2(v_toPure_602_, lean_box(0), v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__18___boxed(lean_object* v_toPure_607_, lean_object* v_____do__lift_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_Do_SPred_Notation_unpack___redArg___lam__18(v_toPure_607_, v_____do__lift_608_);
lean_dec(v_____do__lift_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__29(lean_object* v_info_610_, lean_object* v___x_611_, lean_object* v_scp_612_, lean_object* v___x_613_, lean_object* v___x_614_, lean_object* v___x_615_, lean_object* v___x_616_, lean_object* v___x_617_, lean_object* v___x_618_, lean_object* v___x_619_, lean_object* v_____do__lift_620_, lean_object* v_toPure_621_, lean_object* v_quotCtx_622_){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_623_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__16));
lean_inc_n(v_info_610_, 5);
v___x_624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_624_, 0, v_info_610_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__18);
v___x_626_ = l_Lean_addMacroScope(v_quotCtx_622_, v___x_611_, v_scp_612_);
v___x_627_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__0));
v___x_628_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__21___closed__1));
v___x_629_ = l_Lean_Name_mkStr4(v___x_613_, v___x_614_, v___x_627_, v___x_628_);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
v___x_631_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__21));
lean_inc_ref_n(v___x_615_, 3);
v___x_632_ = l_Lean_Name_mkStr2(v___x_615_, v___x_631_);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
v___x_634_ = l_Lean_Name_mkStr2(v___x_615_, v___x_616_);
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
v___x_636_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__26));
v___x_637_ = l_Lean_Name_mkStr2(v___x_615_, v___x_636_);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
v___x_639_ = l_Lean_Name_mkStr1(v___x_615_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
v___x_641_ = lean_box(0);
v___x_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_638_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_635_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_633_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_630_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_647_, 0, v_info_610_);
lean_ctor_set(v___x_647_, 1, v___x_625_);
lean_ctor_set(v___x_647_, 2, v___x_626_);
lean_ctor_set(v___x_647_, 3, v___x_646_);
v___x_648_ = l_Lean_Syntax_node1(v_info_610_, v___x_617_, v___x_647_);
v___x_649_ = l_Lean_Syntax_node2(v_info_610_, v___x_618_, v___x_624_, v___x_648_);
v___x_650_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__12));
v___x_651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_651_, 0, v_info_610_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = l_Lean_Syntax_node3(v_info_610_, v___x_619_, v___x_649_, v_____do__lift_620_, v___x_651_);
v___x_653_ = lean_apply_2(v_toPure_621_, lean_box(0), v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__14(lean_object* v_info_654_, lean_object* v___x_655_, lean_object* v___x_656_, lean_object* v___x_657_, lean_object* v___x_658_, lean_object* v___x_659_, lean_object* v___x_660_, lean_object* v___x_661_, lean_object* v___x_662_, lean_object* v_____do__lift_663_, lean_object* v_toPure_664_, lean_object* v_toBind_665_, lean_object* v_getContext_666_, lean_object* v_scp_667_){
_start:
{
lean_object* v___f_668_; lean_object* v___x_669_; 
v___f_668_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__29), 13, 12);
lean_closure_set(v___f_668_, 0, v_info_654_);
lean_closure_set(v___f_668_, 1, v___x_655_);
lean_closure_set(v___f_668_, 2, v_scp_667_);
lean_closure_set(v___f_668_, 3, v___x_656_);
lean_closure_set(v___f_668_, 4, v___x_657_);
lean_closure_set(v___f_668_, 5, v___x_658_);
lean_closure_set(v___f_668_, 6, v___x_659_);
lean_closure_set(v___f_668_, 7, v___x_660_);
lean_closure_set(v___f_668_, 8, v___x_661_);
lean_closure_set(v___f_668_, 9, v___x_662_);
lean_closure_set(v___f_668_, 10, v_____do__lift_663_);
lean_closure_set(v___f_668_, 11, v_toPure_664_);
v___x_669_ = lean_apply_4(v_toBind_665_, lean_box(0), lean_box(0), v_getContext_666_, v___f_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__15(lean_object* v_inst_670_, lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v___x_673_, lean_object* v___x_674_, lean_object* v___x_675_, lean_object* v___x_676_, lean_object* v___x_677_, lean_object* v___x_678_, lean_object* v_____do__lift_679_, lean_object* v_toPure_680_, lean_object* v_toBind_681_, lean_object* v_info_682_){
_start:
{
lean_object* v_getCurrMacroScope_683_; lean_object* v_getContext_684_; lean_object* v___f_685_; lean_object* v___x_686_; 
v_getCurrMacroScope_683_ = lean_ctor_get(v_inst_670_, 1);
lean_inc(v_getCurrMacroScope_683_);
v_getContext_684_ = lean_ctor_get(v_inst_670_, 2);
lean_inc(v_getContext_684_);
lean_dec_ref(v_inst_670_);
lean_inc(v_toBind_681_);
v___f_685_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__14), 14, 13);
lean_closure_set(v___f_685_, 0, v_info_682_);
lean_closure_set(v___f_685_, 1, v___x_671_);
lean_closure_set(v___f_685_, 2, v___x_672_);
lean_closure_set(v___f_685_, 3, v___x_673_);
lean_closure_set(v___f_685_, 4, v___x_674_);
lean_closure_set(v___f_685_, 5, v___x_675_);
lean_closure_set(v___f_685_, 6, v___x_676_);
lean_closure_set(v___f_685_, 7, v___x_677_);
lean_closure_set(v___f_685_, 8, v___x_678_);
lean_closure_set(v___f_685_, 9, v_____do__lift_679_);
lean_closure_set(v___f_685_, 10, v_toPure_680_);
lean_closure_set(v___f_685_, 11, v_toBind_681_);
lean_closure_set(v___f_685_, 12, v_getContext_684_);
v___x_686_ = lean_apply_4(v_toBind_681_, lean_box(0), lean_box(0), v_getCurrMacroScope_683_, v___f_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__17(lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v___x_689_, lean_object* v___x_690_, lean_object* v___x_691_, lean_object* v___x_692_, lean_object* v___x_693_, lean_object* v___x_694_, lean_object* v___x_695_, lean_object* v___x_696_, lean_object* v_toPure_697_, lean_object* v_toBind_698_, lean_object* v___f_699_, lean_object* v_____do__lift_700_){
_start:
{
lean_object* v_getRef_701_; lean_object* v___f_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_getRef_701_ = lean_ctor_get(v_inst_687_, 0);
lean_inc(v_getRef_701_);
lean_dec_ref(v_inst_687_);
lean_inc_n(v_toBind_698_, 2);
v___f_702_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__15), 13, 12);
lean_closure_set(v___f_702_, 0, v_inst_688_);
lean_closure_set(v___f_702_, 1, v___x_689_);
lean_closure_set(v___f_702_, 2, v___x_690_);
lean_closure_set(v___f_702_, 3, v___x_691_);
lean_closure_set(v___f_702_, 4, v___x_692_);
lean_closure_set(v___f_702_, 5, v___x_693_);
lean_closure_set(v___f_702_, 6, v___x_694_);
lean_closure_set(v___f_702_, 7, v___x_695_);
lean_closure_set(v___f_702_, 8, v___x_696_);
lean_closure_set(v___f_702_, 9, v_____do__lift_700_);
lean_closure_set(v___f_702_, 10, v_toPure_697_);
lean_closure_set(v___f_702_, 11, v_toBind_698_);
v___x_703_ = lean_apply_4(v_toBind_698_, lean_box(0), lean_box(0), v_getRef_701_, v___f_699_);
v___x_704_ = lean_apply_4(v_toBind_698_, lean_box(0), lean_box(0), v___x_703_, v___f_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg(lean_object* v_inst_705_, lean_object* v_inst_706_, lean_object* v_inst_707_, lean_object* v_x_708_){
_start:
{
lean_object* v_toApplicative_709_; lean_object* v_toBind_710_; lean_object* v_toPure_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v_toApplicative_709_ = lean_ctor_get(v_inst_705_, 0);
v_toBind_710_ = lean_ctor_get(v_inst_705_, 1);
lean_inc(v_toBind_710_);
v_toPure_711_ = lean_ctor_get(v_toApplicative_709_, 1);
v___x_712_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__0));
v___x_713_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__1));
v___x_714_ = ((lean_object*)(l_Std_Do_termSpred_x28___x29___closed__3));
lean_inc(v_x_708_);
v___x_715_ = l_Lean_Syntax_isOfKind(v_x_708_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_716_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__0));
v___x_717_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__1));
v___x_718_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__4));
lean_inc(v_x_708_);
v___x_719_ = l_Lean_Syntax_isOfKind(v_x_708_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__8));
lean_inc(v_x_708_);
v___x_721_ = l_Lean_Syntax_isOfKind(v_x_708_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_722_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__5));
v___x_723_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__6));
lean_inc(v_x_708_);
v___x_724_ = l_Lean_Syntax_isOfKind(v_x_708_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_725_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__10));
lean_inc(v_x_708_);
v___x_726_ = l_Lean_Syntax_isOfKind(v_x_708_, v___x_725_);
if (v___x_726_ == 0)
{
lean_object* v_getRef_727_; lean_object* v___f_728_; lean_object* v___f_729_; lean_object* v___f_730_; lean_object* v___x_731_; lean_object* v___f_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec_ref(v_inst_705_);
v_getRef_727_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_727_);
lean_dec_ref(v_inst_706_);
v___f_728_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_728_, 0, v_toPure_711_);
lean_closure_set(v___f_728_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_729_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_729_, 0, v_inst_707_);
lean_closure_set(v___f_729_, 1, v_toBind_710_);
lean_closure_set(v___f_729_, 2, v___f_728_);
v___f_730_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_730_, 0, v_inst_707_);
lean_closure_set(v___f_730_, 1, v_toBind_710_);
lean_closure_set(v___f_730_, 2, v___f_729_);
v___x_731_ = lean_box(v___x_726_);
v___f_732_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_732_, 0, v___x_731_);
lean_closure_set(v___f_732_, 1, v_toPure_711_);
v___x_733_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_727_, v___f_732_);
v___x_734_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_733_, v___f_730_);
return v___x_734_;
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_735_ = lean_unsigned_to_nat(0u);
v___x_736_ = l_Lean_Syntax_getArg(v_x_708_, v___x_735_);
v___x_737_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12));
lean_inc(v___x_736_);
v___x_738_ = l_Lean_Syntax_isOfKind(v___x_736_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v_getRef_739_; lean_object* v___f_740_; lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___x_743_; lean_object* v___f_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_736_);
lean_dec_ref(v_inst_705_);
v_getRef_739_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_739_);
lean_dec_ref(v_inst_706_);
v___f_740_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_740_, 0, v_toPure_711_);
lean_closure_set(v___f_740_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_741_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_741_, 0, v_inst_707_);
lean_closure_set(v___f_741_, 1, v_toBind_710_);
lean_closure_set(v___f_741_, 2, v___f_740_);
v___f_742_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_742_, 0, v_inst_707_);
lean_closure_set(v___f_742_, 1, v_toBind_710_);
lean_closure_set(v___f_742_, 2, v___f_741_);
v___x_743_ = lean_box(v___x_738_);
v___f_744_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_744_, 0, v___x_743_);
lean_closure_set(v___f_744_, 1, v_toPure_711_);
v___x_745_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_739_, v___f_744_);
v___x_746_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_745_, v___f_742_);
return v___x_746_;
}
else
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_747_ = lean_unsigned_to_nat(1u);
v___x_748_ = l_Lean_Syntax_getArg(v___x_736_, v___x_747_);
lean_dec(v___x_736_);
v___x_749_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14));
lean_inc(v___x_748_);
v___x_750_ = l_Lean_Syntax_isOfKind(v___x_748_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v_getRef_751_; lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v___x_755_; lean_object* v___f_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_748_);
lean_dec_ref(v_inst_705_);
v_getRef_751_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_751_);
lean_dec_ref(v_inst_706_);
v___f_752_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_752_, 0, v_toPure_711_);
lean_closure_set(v___f_752_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_753_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_753_, 0, v_inst_707_);
lean_closure_set(v___f_753_, 1, v_toBind_710_);
lean_closure_set(v___f_753_, 2, v___f_752_);
v___f_754_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_754_, 0, v_inst_707_);
lean_closure_set(v___f_754_, 1, v_toBind_710_);
lean_closure_set(v___f_754_, 2, v___f_753_);
v___x_755_ = lean_box(v___x_750_);
v___f_756_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_756_, 0, v___x_755_);
lean_closure_set(v___f_756_, 1, v_toPure_711_);
v___x_757_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_751_, v___f_756_);
v___x_758_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_757_, v___f_754_);
return v___x_758_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_759_ = l_Lean_Syntax_getArg(v___x_748_, v___x_735_);
lean_dec(v___x_748_);
v___x_760_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15);
v___x_761_ = l_Lean_Syntax_matchesIdent(v___x_759_, v___x_760_);
lean_dec(v___x_759_);
if (v___x_761_ == 0)
{
lean_object* v_getRef_762_; lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___f_765_; lean_object* v___x_766_; lean_object* v___f_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec_ref(v_inst_705_);
v_getRef_762_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_762_);
lean_dec_ref(v_inst_706_);
v___f_763_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_763_, 0, v_toPure_711_);
lean_closure_set(v___f_763_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_764_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_764_, 0, v_inst_707_);
lean_closure_set(v___f_764_, 1, v_toBind_710_);
lean_closure_set(v___f_764_, 2, v___f_763_);
v___f_765_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_765_, 0, v_inst_707_);
lean_closure_set(v___f_765_, 1, v_toBind_710_);
lean_closure_set(v___f_765_, 2, v___f_764_);
v___x_766_ = lean_box(v___x_761_);
v___f_767_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_767_, 0, v___x_766_);
lean_closure_set(v___f_767_, 1, v_toPure_711_);
v___x_768_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_762_, v___f_767_);
v___x_769_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_768_, v___f_765_);
return v___x_769_;
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_770_ = lean_unsigned_to_nat(3u);
v___x_771_ = l_Lean_Syntax_getArg(v_x_708_, v___x_770_);
lean_inc(v___x_771_);
v___x_772_ = l_Lean_Syntax_matchesNull(v___x_771_, v___x_747_);
if (v___x_772_ == 0)
{
lean_object* v_getRef_773_; lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___f_776_; lean_object* v___x_777_; lean_object* v___f_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_771_);
lean_dec_ref(v_inst_705_);
v_getRef_773_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_773_);
lean_dec_ref(v_inst_706_);
v___f_774_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_774_, 0, v_toPure_711_);
lean_closure_set(v___f_774_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_775_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_775_, 0, v_inst_707_);
lean_closure_set(v___f_775_, 1, v_toBind_710_);
lean_closure_set(v___f_775_, 2, v___f_774_);
v___f_776_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_776_, 0, v_inst_707_);
lean_closure_set(v___f_776_, 1, v_toBind_710_);
lean_closure_set(v___f_776_, 2, v___f_775_);
v___x_777_ = lean_box(v___x_772_);
v___f_778_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_778_, 0, v___x_777_);
lean_closure_set(v___f_778_, 1, v_toPure_711_);
v___x_779_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_773_, v___f_778_);
v___x_780_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_779_, v___f_776_);
return v___x_780_;
}
else
{
lean_object* v___x_781_; lean_object* v___f_782_; lean_object* v_P_783_; lean_object* v___x_784_; lean_object* v___f_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_781_ = lean_box(v___x_724_);
lean_inc_n(v_toPure_711_, 2);
v___f_782_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_782_, 0, v___x_781_);
lean_closure_set(v___f_782_, 1, v_toPure_711_);
v_P_783_ = l_Lean_Syntax_getArg(v_x_708_, v___x_747_);
lean_dec(v_x_708_);
v___x_784_ = l_Lean_Syntax_getArg(v___x_771_, v___x_735_);
lean_dec(v___x_771_);
lean_inc(v_toBind_710_);
lean_inc_ref(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_785_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__6), 15, 14);
lean_closure_set(v___f_785_, 0, v_inst_706_);
lean_closure_set(v___f_785_, 1, v_inst_707_);
lean_closure_set(v___f_785_, 2, v___x_760_);
lean_closure_set(v___f_785_, 3, v___x_712_);
lean_closure_set(v___f_785_, 4, v___x_713_);
lean_closure_set(v___f_785_, 5, v___x_716_);
lean_closure_set(v___f_785_, 6, v___x_717_);
lean_closure_set(v___f_785_, 7, v___x_749_);
lean_closure_set(v___f_785_, 8, v___x_737_);
lean_closure_set(v___f_785_, 9, v___x_784_);
lean_closure_set(v___f_785_, 10, v___x_725_);
lean_closure_set(v___f_785_, 11, v_toPure_711_);
lean_closure_set(v___f_785_, 12, v_toBind_710_);
lean_closure_set(v___f_785_, 13, v___f_782_);
v___x_786_ = l_Std_Do_SPred_Notation_unpack___redArg(v_inst_705_, v_inst_706_, v_inst_707_, v_P_783_);
v___x_787_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_786_, v___f_785_);
return v___x_787_;
}
}
}
}
}
}
else
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_788_ = lean_unsigned_to_nat(1u);
v___x_789_ = l_Lean_Syntax_getArg(v_x_708_, v___x_788_);
v___x_790_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__43));
lean_inc(v___x_789_);
v___x_791_ = l_Lean_Syntax_isOfKind(v___x_789_, v___x_790_);
if (v___x_791_ == 0)
{
lean_object* v_getRef_792_; lean_object* v___f_793_; lean_object* v___f_794_; lean_object* v___f_795_; lean_object* v___x_796_; lean_object* v___f_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_789_);
lean_dec_ref(v_inst_705_);
v_getRef_792_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_792_);
lean_dec_ref(v_inst_706_);
v___f_793_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_793_, 0, v_toPure_711_);
lean_closure_set(v___f_793_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_794_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_794_, 0, v_inst_707_);
lean_closure_set(v___f_794_, 1, v_toBind_710_);
lean_closure_set(v___f_794_, 2, v___f_793_);
v___f_795_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_795_, 0, v_inst_707_);
lean_closure_set(v___f_795_, 1, v_toBind_710_);
lean_closure_set(v___f_795_, 2, v___f_794_);
v___x_796_ = lean_box(v___x_791_);
v___f_797_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_797_, 0, v___x_796_);
lean_closure_set(v___f_797_, 1, v_toPure_711_);
v___x_798_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_792_, v___f_797_);
v___x_799_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_798_, v___f_795_);
return v___x_799_;
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = l_Lean_Syntax_getArg(v___x_789_, v___x_788_);
v___x_802_ = l_Lean_Syntax_matchesNull(v___x_801_, v___x_800_);
if (v___x_802_ == 0)
{
lean_object* v_getRef_803_; lean_object* v___f_804_; lean_object* v___f_805_; lean_object* v___f_806_; lean_object* v___x_807_; lean_object* v___f_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_789_);
lean_dec_ref(v_inst_705_);
v_getRef_803_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_803_);
lean_dec_ref(v_inst_706_);
v___f_804_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_804_, 0, v_toPure_711_);
lean_closure_set(v___f_804_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_805_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_805_, 0, v_inst_707_);
lean_closure_set(v___f_805_, 1, v_toBind_710_);
lean_closure_set(v___f_805_, 2, v___f_804_);
v___f_806_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_806_, 0, v_inst_707_);
lean_closure_set(v___f_806_, 1, v_toBind_710_);
lean_closure_set(v___f_806_, 2, v___f_805_);
v___x_807_ = lean_box(v___x_802_);
v___f_808_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_808_, 0, v___x_807_);
lean_closure_set(v___f_808_, 1, v_toPure_711_);
v___x_809_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_803_, v___f_808_);
v___x_810_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_809_, v___f_806_);
return v___x_810_;
}
else
{
lean_object* v___x_811_; lean_object* v___f_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v_b_815_; lean_object* v___x_816_; lean_object* v_xs_817_; lean_object* v___f_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec(v_x_708_);
v___x_811_ = lean_box(v___x_721_);
lean_inc_n(v_toPure_711_, 2);
v___f_812_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_812_, 0, v___x_811_);
lean_closure_set(v___f_812_, 1, v_toPure_711_);
v___x_813_ = l_Lean_Syntax_getArg(v___x_789_, v___x_800_);
v___x_814_ = lean_unsigned_to_nat(3u);
v_b_815_ = l_Lean_Syntax_getArg(v___x_789_, v___x_814_);
lean_dec(v___x_789_);
v___x_816_ = l_Lean_Syntax_getArgs(v___x_813_);
lean_dec(v___x_813_);
v_xs_817_ = l_unsafeCast___redArg(v___x_816_);
lean_dec_ref(v___x_816_);
lean_inc(v_toBind_710_);
lean_inc_ref(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_818_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__9), 10, 9);
lean_closure_set(v___f_818_, 0, v_inst_706_);
lean_closure_set(v___f_818_, 1, v_inst_707_);
lean_closure_set(v___f_818_, 2, v___x_722_);
lean_closure_set(v___f_818_, 3, v_xs_817_);
lean_closure_set(v___f_818_, 4, v___x_790_);
lean_closure_set(v___f_818_, 5, v___x_723_);
lean_closure_set(v___f_818_, 6, v_toPure_711_);
lean_closure_set(v___f_818_, 7, v_toBind_710_);
lean_closure_set(v___f_818_, 8, v___f_812_);
v___x_819_ = l_Std_Do_SPred_Notation_unpack___redArg(v_inst_705_, v_inst_706_, v_inst_707_, v_b_815_);
v___x_820_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_819_, v___f_818_);
return v___x_820_;
}
}
}
}
else
{
lean_object* v___x_821_; lean_object* v___f_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v_t_826_; lean_object* v___x_827_; lean_object* v_e_828_; lean_object* v___f_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_821_ = lean_box(v___x_719_);
lean_inc_n(v_toPure_711_, 2);
v___f_822_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_822_, 0, v___x_821_);
lean_closure_set(v___f_822_, 1, v_toPure_711_);
v___x_823_ = lean_unsigned_to_nat(1u);
v___x_824_ = l_Lean_Syntax_getArg(v_x_708_, v___x_823_);
v___x_825_ = lean_unsigned_to_nat(3u);
v_t_826_ = l_Lean_Syntax_getArg(v_x_708_, v___x_825_);
v___x_827_ = lean_unsigned_to_nat(5u);
v_e_828_ = l_Lean_Syntax_getArg(v_x_708_, v___x_827_);
lean_dec(v_x_708_);
lean_inc_ref(v_inst_705_);
lean_inc(v_toBind_710_);
lean_inc_ref(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_829_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__13), 10, 9);
lean_closure_set(v___f_829_, 0, v_inst_706_);
lean_closure_set(v___f_829_, 1, v_inst_707_);
lean_closure_set(v___f_829_, 2, v___x_720_);
lean_closure_set(v___f_829_, 3, v___x_824_);
lean_closure_set(v___f_829_, 4, v_toPure_711_);
lean_closure_set(v___f_829_, 5, v_toBind_710_);
lean_closure_set(v___f_829_, 6, v___f_822_);
lean_closure_set(v___f_829_, 7, v_inst_705_);
lean_closure_set(v___f_829_, 8, v_e_828_);
v___x_830_ = l_Std_Do_SPred_Notation_unpack___redArg(v_inst_705_, v_inst_706_, v_inst_707_, v_t_826_);
v___x_831_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_830_, v___f_829_);
return v___x_831_;
}
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = l_Lean_Syntax_getArg(v_x_708_, v___x_832_);
v___x_834_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__12));
lean_inc(v___x_833_);
v___x_835_ = l_Lean_Syntax_isOfKind(v___x_833_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v_getRef_836_; lean_object* v___f_837_; lean_object* v___f_838_; lean_object* v___f_839_; lean_object* v___x_840_; lean_object* v___f_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_833_);
lean_dec_ref(v_inst_705_);
v_getRef_836_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_836_);
lean_dec_ref(v_inst_706_);
v___f_837_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_837_, 0, v_toPure_711_);
lean_closure_set(v___f_837_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_838_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_838_, 0, v_inst_707_);
lean_closure_set(v___f_838_, 1, v_toBind_710_);
lean_closure_set(v___f_838_, 2, v___f_837_);
v___f_839_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_839_, 0, v_inst_707_);
lean_closure_set(v___f_839_, 1, v_toBind_710_);
lean_closure_set(v___f_839_, 2, v___f_838_);
v___x_840_ = lean_box(v___x_835_);
v___f_841_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_841_, 0, v___x_840_);
lean_closure_set(v___f_841_, 1, v_toPure_711_);
v___x_842_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_836_, v___f_841_);
v___x_843_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_842_, v___f_839_);
return v___x_843_;
}
else
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = l_Lean_Syntax_getArg(v___x_833_, v___x_844_);
lean_dec(v___x_833_);
v___x_846_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__14));
lean_inc(v___x_845_);
v___x_847_ = l_Lean_Syntax_isOfKind(v___x_845_, v___x_846_);
if (v___x_847_ == 0)
{
lean_object* v_getRef_848_; lean_object* v___f_849_; lean_object* v___f_850_; lean_object* v___f_851_; lean_object* v___x_852_; lean_object* v___f_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec(v___x_845_);
lean_dec_ref(v_inst_705_);
v_getRef_848_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_848_);
lean_dec_ref(v_inst_706_);
v___f_849_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_849_, 0, v_toPure_711_);
lean_closure_set(v___f_849_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_850_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_850_, 0, v_inst_707_);
lean_closure_set(v___f_850_, 1, v_toBind_710_);
lean_closure_set(v___f_850_, 2, v___f_849_);
v___f_851_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_851_, 0, v_inst_707_);
lean_closure_set(v___f_851_, 1, v_toBind_710_);
lean_closure_set(v___f_851_, 2, v___f_850_);
v___x_852_ = lean_box(v___x_847_);
v___f_853_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_853_, 0, v___x_852_);
lean_closure_set(v___f_853_, 1, v_toPure_711_);
v___x_854_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_848_, v___f_853_);
v___x_855_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_854_, v___f_851_);
return v___x_855_;
}
else
{
lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_856_ = l_Lean_Syntax_getArg(v___x_845_, v___x_832_);
lean_dec(v___x_845_);
v___x_857_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation__Basic______macroRules__Std__Do__termSpred_x28___x29__2___closed__15);
v___x_858_ = l_Lean_Syntax_matchesIdent(v___x_856_, v___x_857_);
lean_dec(v___x_856_);
if (v___x_858_ == 0)
{
lean_object* v_getRef_859_; lean_object* v___f_860_; lean_object* v___f_861_; lean_object* v___f_862_; lean_object* v___x_863_; lean_object* v___f_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec_ref(v_inst_705_);
v_getRef_859_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_859_);
lean_dec_ref(v_inst_706_);
v___f_860_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_860_, 0, v_toPure_711_);
lean_closure_set(v___f_860_, 1, v_x_708_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_861_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_861_, 0, v_inst_707_);
lean_closure_set(v___f_861_, 1, v_toBind_710_);
lean_closure_set(v___f_861_, 2, v___f_860_);
v___f_862_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_862_, 0, v_inst_707_);
lean_closure_set(v___f_862_, 1, v_toBind_710_);
lean_closure_set(v___f_862_, 2, v___f_861_);
v___x_863_ = lean_box(v___x_858_);
v___f_864_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_864_, 0, v___x_863_);
lean_closure_set(v___f_864_, 1, v_toPure_711_);
v___x_865_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_859_, v___f_864_);
v___x_866_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_865_, v___f_862_);
return v___x_866_;
}
else
{
lean_object* v___x_867_; lean_object* v___f_868_; lean_object* v___f_869_; lean_object* v_P_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_867_ = lean_box(v___x_715_);
lean_inc_n(v_toPure_711_, 2);
v___f_868_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_868_, 0, v___x_867_);
lean_closure_set(v___f_868_, 1, v_toPure_711_);
lean_inc(v_toBind_710_);
lean_inc_ref(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_869_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__17), 14, 13);
lean_closure_set(v___f_869_, 0, v_inst_706_);
lean_closure_set(v___f_869_, 1, v_inst_707_);
lean_closure_set(v___f_869_, 2, v___x_857_);
lean_closure_set(v___f_869_, 3, v___x_712_);
lean_closure_set(v___f_869_, 4, v___x_713_);
lean_closure_set(v___f_869_, 5, v___x_716_);
lean_closure_set(v___f_869_, 6, v___x_717_);
lean_closure_set(v___f_869_, 7, v___x_846_);
lean_closure_set(v___f_869_, 8, v___x_834_);
lean_closure_set(v___f_869_, 9, v___x_718_);
lean_closure_set(v___f_869_, 10, v_toPure_711_);
lean_closure_set(v___f_869_, 11, v_toBind_710_);
lean_closure_set(v___f_869_, 12, v___f_868_);
v_P_870_ = l_Lean_Syntax_getArg(v_x_708_, v___x_844_);
lean_dec(v_x_708_);
v___x_871_ = l_Std_Do_SPred_Notation_unpack___redArg(v_inst_705_, v_inst_706_, v_inst_707_, v_P_870_);
v___x_872_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_871_, v___f_869_);
return v___x_872_;
}
}
}
}
}
else
{
lean_object* v_getRef_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___f_877_; lean_object* v___f_878_; lean_object* v___f_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
lean_inc_n(v_toPure_711_, 2);
lean_dec_ref(v_inst_705_);
v_getRef_873_ = lean_ctor_get(v_inst_706_, 0);
lean_inc(v_getRef_873_);
lean_dec_ref(v_inst_706_);
v___f_874_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__18___boxed), 2, 1);
lean_closure_set(v___f_874_, 0, v_toPure_711_);
v___x_875_ = lean_unsigned_to_nat(1u);
v___x_876_ = l_Lean_Syntax_getArg(v_x_708_, v___x_875_);
lean_dec(v_x_708_);
v___f_877_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__19___boxed), 3, 2);
lean_closure_set(v___f_877_, 0, v_toPure_711_);
lean_closure_set(v___f_877_, 1, v___x_876_);
lean_inc_n(v_toBind_710_, 3);
lean_inc_ref(v_inst_707_);
v___f_878_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_878_, 0, v_inst_707_);
lean_closure_set(v___f_878_, 1, v_toBind_710_);
lean_closure_set(v___f_878_, 2, v___f_877_);
v___f_879_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_879_, 0, v_inst_707_);
lean_closure_set(v___f_879_, 1, v_toBind_710_);
lean_closure_set(v___f_879_, 2, v___f_878_);
v___x_880_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v_getRef_873_, v___f_874_);
v___x_881_ = lean_apply_4(v_toBind_710_, lean_box(0), lean_box(0), v___x_880_, v___f_879_);
return v___x_881_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___redArg___lam__13(lean_object* v_inst_882_, lean_object* v_inst_883_, lean_object* v___x_884_, lean_object* v___x_885_, lean_object* v_toPure_886_, lean_object* v_toBind_887_, lean_object* v___f_888_, lean_object* v_inst_889_, lean_object* v_e_890_, lean_object* v_t_891_){
_start:
{
lean_object* v___f_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
lean_inc(v_toBind_887_);
lean_inc_ref(v_inst_883_);
lean_inc_ref(v_inst_882_);
v___f_892_ = lean_alloc_closure((void*)(l_Std_Do_SPred_Notation_unpack___redArg___lam__10), 9, 8);
lean_closure_set(v___f_892_, 0, v_inst_882_);
lean_closure_set(v___f_892_, 1, v_inst_883_);
lean_closure_set(v___f_892_, 2, v___x_884_);
lean_closure_set(v___f_892_, 3, v___x_885_);
lean_closure_set(v___f_892_, 4, v_t_891_);
lean_closure_set(v___f_892_, 5, v_toPure_886_);
lean_closure_set(v___f_892_, 6, v_toBind_887_);
lean_closure_set(v___f_892_, 7, v___f_888_);
v___x_893_ = l_Std_Do_SPred_Notation_unpack___redArg(v_inst_889_, v_inst_882_, v_inst_883_, v_e_890_);
v___x_894_ = lean_apply_4(v_toBind_887_, lean_box(0), lean_box(0), v___x_893_, v___f_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack(lean_object* v_m_895_, lean_object* v_inst_896_, lean_object* v_inst_897_, lean_object* v_inst_898_, lean_object* v_x_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Std_Do_SPred_Notation_unpack___redArg(v_inst_896_, v_inst_897_, v_inst_898_, v_x_899_);
return v___x_900_;
}
}
lean_object* runtime_initialize_Std_Do_SPred_SPred(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_SPred_SPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred_SPred(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred_SPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_SPred_Notation_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

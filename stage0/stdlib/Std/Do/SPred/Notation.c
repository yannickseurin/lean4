// Lean compiler output
// Module: Std.Do.SPred.Notation
// Imports: public meta import Std.Do.SPred.Notation.Basic public import Std.Do.SPred.Notation.Basic
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_expandExplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__0 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__1 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "term⌜_⌝"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__2 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__2_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value_aux_1),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 155, 137, 127, 35, 248, 173, 10)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__3 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__4 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__4_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__5 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⌜"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__6 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__6_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__6_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__7 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__7_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__8 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__8_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__9 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__9_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__10 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__10_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__7_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__10_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__11 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__11_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⌝"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__12 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__12_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__12_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__13 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__13_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__11_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__13_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__14 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__14_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__14_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__15 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__15_value;
LEAN_EXPORT const lean_object* l_Std_Do_term_u231c___u231d = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__15_value;
static const lean_string_object l_Std_Do_term___u22a2_u209b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_⊢ₛ_"};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__0 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 64, 157, 81, 47, 23, 235, 108)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__1 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u22a2_u209b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " ⊢ₛ "};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__2 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__3 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__9_value),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__4 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__5 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__5_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__5_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__6 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u22a2_u209b__ = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__6_value;
static const lean_string_object l_Std_Do_term_u22a2_u209b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "term⊢ₛ_"};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__0 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 33, 26, 243, 26, 184, 240, 184)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__1 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value;
static const lean_string_object l_Std_Do_term_u22a2_u209b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 3, .m_data = "⊢ₛ "};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__2 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__2_value)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__3 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__4 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__5 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term_u22a2_u209b__ = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__5_value;
static const lean_string_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 9, .m_data = "term_⊣⊢ₛ_"};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 122, 29, 216, 46, 173, 32, 216)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 5, .m_data = " ⊣⊢ₛ "};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u22a3_u22a2_u209b__ = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "SPred.pure"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(16, 115, 190, 26, 167, 150, 203, 221)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SPred.entails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(157, 27, 24, 221, 87, 233, 202, 140)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "termSpred(_)"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(76, 240, 91, 148, 237, 191, 255, 193)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spred("};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_∧_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 224, 85, 99, 168, 124, 84, 223)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_∨_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(44, 23, 28, 64, 30, 253, 248, 167)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 6, .m_data = "term¬_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(222, 122, 71, 36, 131, 84, 176, 236)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_↔_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(220, 124, 41, 198, 228, 162, 237, 244)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 8, .m_data = "term∃_,_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(224, 105, 219, 112, 166, 139, 167, 161)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(195, 142, 115, 15, 55, 103, 31, 115)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "SPred.forall"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(189, 183, 85, 87, 105, 38, 9, 95)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(118, 145, 1, 190, 19, 10, 144, 159)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "exists"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(119, 199, 194, 26, 176, 147, 16, 83)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "explicitBinders"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(167, 149, 127, 13, 202, 239, 226, 94)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.iff"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "iff"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(216, 213, 73, 68, 36, 234, 63, 232)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(27, 79, 214, 161, 232, 72, 176, 24)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.imp"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(229, 78, 255, 122, 125, 47, 236, 91)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(254, 180, 127, 119, 35, 232, 80, 131)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.not"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value),LEAN_SCALAR_PTR_LITERAL(75, 43, 215, 201, 164, 208, 115, 204)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value),LEAN_SCALAR_PTR_LITERAL(104, 148, 110, 90, 206, 151, 192, 189)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SPred.or"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value),LEAN_SCALAR_PTR_LITERAL(1, 253, 51, 240, 68, 70, 110, 158)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value),LEAN_SCALAR_PTR_LITERAL(114, 97, 84, 180, 109, 220, 63, 60)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.and"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value),LEAN_SCALAR_PTR_LITERAL(27, 27, 184, 174, 232, 138, 92, 103)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value),LEAN_SCALAR_PTR_LITERAL(216, 97, 27, 109, 96, 85, 230, 202)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__105 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__105_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "SPred.bientails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bientails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(218, 255, 192, 203, 199, 147, 226, 14)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 51, 221, 5, 242, 131, 169, 118)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_fakeMod"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(168, 44, 241, 255, 153, 255, 67, 53)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5_value;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Notation"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(66, 246, 126, 200, 193, 235, 124, 8)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandEntails___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "⊢ₛ"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandEntails___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandEntails___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandBientails___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 3, .m_data = "⊣⊢ₛ"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandBientails___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandBientails___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∧"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandAnd___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandAnd___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandOr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∨"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandOr___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandOr___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandNot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "¬"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandNot___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandNot___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandImp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandImp___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandImp___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∃"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandExists___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__0_value;
static const lean_string_object l_Std_Do_SPred_Notation_unexpandExists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unbracketedExplicitBinders"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandExists___closed__1 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__1_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unexpandExists___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unexpandExists___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__2_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__1_value),LEAN_SCALAR_PTR_LITERAL(187, 220, 119, 82, 242, 112, 119, 200)}};
static const lean_object* l_Std_Do_SPred_Notation_unexpandExists___closed__2 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandIff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "↔"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandIff___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandIff___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5));
v___x_102_ = l_String_toRawSubstring_x27(v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1(lean_object* v_x_127_, lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_130_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
lean_inc(v_x_127_);
v___x_131_ = l_Lean_Syntax_isOfKind(v_x_127_, v___x_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; 
lean_dec(v_x_127_);
v___x_132_ = lean_box(1);
v___x_133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v_a_129_);
return v___x_133_;
}
else
{
lean_object* v_quotContext_134_; lean_object* v_currMacroScope_135_; lean_object* v_ref_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_quotContext_134_ = lean_ctor_get(v_a_128_, 1);
v_currMacroScope_135_ = lean_ctor_get(v_a_128_, 2);
v_ref_136_ = lean_ctor_get(v_a_128_, 5);
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = l_Lean_Syntax_getArg(v_x_127_, v___x_137_);
lean_dec(v_x_127_);
v___x_139_ = 0;
v___x_140_ = l_Lean_SourceInfo_fromRef(v_ref_136_, v___x_139_);
v___x_141_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_142_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6);
v___x_143_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9));
lean_inc(v_currMacroScope_135_);
lean_inc(v_quotContext_134_);
v___x_144_ = l_Lean_addMacroScope(v_quotContext_134_, v___x_143_, v_currMacroScope_135_);
v___x_145_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14));
lean_inc_n(v___x_140_, 2);
v___x_146_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_146_, 0, v___x_140_);
lean_ctor_set(v___x_146_, 1, v___x_142_);
lean_ctor_set(v___x_146_, 2, v___x_144_);
lean_ctor_set(v___x_146_, 3, v___x_145_);
v___x_147_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_148_ = l_Lean_Syntax_node1(v___x_140_, v___x_147_, v___x_138_);
v___x_149_ = l_Lean_Syntax_node2(v___x_140_, v___x_141_, v___x_146_, v___x_148_);
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v_a_129_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___boxed(lean_object* v_x_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1(v_x_151_, v_a_152_, v_a_153_);
lean_dec_ref(v_a_152_);
return v_res_154_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0));
v___x_157_ = l_String_toRawSubstring_x27(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1(lean_object* v_x_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = ((lean_object*)(l_Std_Do_term___u22a2_u209b___00__closed__1));
lean_inc(v_x_185_);
v___x_189_ = l_Lean_Syntax_isOfKind(v_x_185_, v___x_188_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_191_; 
lean_dec(v_x_185_);
v___x_190_ = lean_box(1);
v___x_191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v_a_187_);
return v___x_191_;
}
else
{
lean_object* v_quotContext_192_; lean_object* v_currMacroScope_193_; lean_object* v_ref_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_quotContext_192_ = lean_ctor_get(v_a_186_, 1);
v_currMacroScope_193_ = lean_ctor_get(v_a_186_, 2);
v_ref_194_ = lean_ctor_get(v_a_186_, 5);
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = l_Lean_Syntax_getArg(v_x_185_, v___x_195_);
v___x_197_ = lean_unsigned_to_nat(2u);
v___x_198_ = l_Lean_Syntax_getArg(v_x_185_, v___x_197_);
lean_dec(v_x_185_);
v___x_199_ = 0;
v___x_200_ = l_Lean_SourceInfo_fromRef(v_ref_194_, v___x_199_);
v___x_201_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_202_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1);
v___x_203_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3));
lean_inc(v_currMacroScope_193_);
lean_inc(v_quotContext_192_);
v___x_204_ = l_Lean_addMacroScope(v_quotContext_192_, v___x_203_, v_currMacroScope_193_);
v___x_205_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8));
lean_inc_n(v___x_200_, 6);
v___x_206_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_206_, 0, v___x_200_);
lean_ctor_set(v___x_206_, 1, v___x_202_);
lean_ctor_set(v___x_206_, 2, v___x_204_);
lean_ctor_set(v___x_206_, 3, v___x_205_);
v___x_207_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_208_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_209_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_210_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_200_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_200_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
lean_inc_ref(v___x_212_);
lean_inc_ref(v___x_210_);
v___x_213_ = l_Lean_Syntax_node3(v___x_200_, v___x_208_, v___x_210_, v___x_196_, v___x_212_);
v___x_214_ = l_Lean_Syntax_node3(v___x_200_, v___x_208_, v___x_210_, v___x_198_, v___x_212_);
v___x_215_ = l_Lean_Syntax_node2(v___x_200_, v___x_207_, v___x_213_, v___x_214_);
v___x_216_ = l_Lean_Syntax_node2(v___x_200_, v___x_201_, v___x_206_, v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set(v___x_217_, 1, v_a_187_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___boxed(lean_object* v_x_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1(v_x_218_, v_a_219_, v_a_220_);
lean_dec_ref(v_a_219_);
return v_res_221_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14));
v___x_251_ = l_String_toRawSubstring_x27(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27));
v___x_284_ = l_String_toRawSubstring_x27(v___x_283_);
return v___x_284_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_box(0);
v___x_286_ = l_unsafeCast___redArg(v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Array_mkArray0___redArg();
return v___x_340_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69));
v___x_379_ = l_String_toRawSubstring_x27(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76));
v___x_397_ = l_String_toRawSubstring_x27(v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83));
v___x_415_ = l_String_toRawSubstring_x27(v___x_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92));
v___x_438_ = l_String_toRawSubstring_x27(v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99));
v___x_456_ = l_String_toRawSubstring_x27(v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1(lean_object* v_x_472_, lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
lean_object* v___y_476_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
lean_inc(v_x_472_);
v___x_480_ = l_Lean_Syntax_isOfKind(v_x_472_, v___x_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec(v_x_472_);
v___x_481_ = lean_box(1);
v___x_482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v_a_474_);
return v___x_482_;
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = l_Lean_Syntax_getArg(v_x_472_, v___x_484_);
lean_dec(v_x_472_);
v___x_486_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1));
lean_inc(v___x_485_);
v___x_487_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_488_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3));
lean_inc(v___x_485_);
v___x_489_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5));
lean_inc(v___x_485_);
v___x_491_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7));
lean_inc(v___x_485_);
v___x_493_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9));
lean_inc(v___x_485_);
v___x_495_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_496_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11));
lean_inc(v___x_485_);
v___x_497_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v_x_500_; lean_object* v_xs_501_; lean_object* v_P_502_; lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v_x_557_; lean_object* v_ty_558_; lean_object* v_xs_559_; lean_object* v_P_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v_x_620_; lean_object* v_xs_621_; lean_object* v_ty_622_; lean_object* v_ys_623_; lean_object* v_P_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; uint8_t v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; uint8_t v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; uint8_t v___y_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_726_; lean_object* v___y_727_; lean_object* v___y_738_; lean_object* v___y_739_; uint8_t v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; uint8_t v___y_743_; uint8_t v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; uint8_t v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; uint8_t v___y_794_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_808_; uint8_t v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; uint8_t v___y_813_; lean_object* v___y_814_; uint8_t v___y_815_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; uint8_t v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; uint8_t v___x_846_; 
v___x_498_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13));
lean_inc(v___x_485_);
v___x_846_ = l_Lean_Syntax_isOfKind(v___x_485_, v___x_498_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v___x_485_);
v___x_847_ = lean_box(1);
v___x_848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v_a_474_);
return v___x_848_;
}
else
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = l_Lean_Syntax_getArg(v___x_485_, v___x_484_);
lean_inc(v___x_849_);
v___x_850_ = l_Lean_Syntax_matchesNull(v___x_849_, v___x_484_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_851_ = l_Lean_Syntax_getNumArgs(v___x_849_);
v___x_852_ = lean_nat_dec_le(v___x_484_, v___x_851_);
if (v___x_852_ == 0)
{
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_x_853_; 
v_x_853_ = l_Lean_Syntax_getArg(v___x_849_, v___x_483_);
if (v___x_850_ == 0)
{
lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_853_);
v___x_868_ = l_Lean_Syntax_isOfKind(v_x_853_, v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_869_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59));
lean_inc(v_x_853_);
v___x_870_ = l_Lean_Syntax_isOfKind(v_x_853_, v___x_869_);
if (v___x_870_ == 0)
{
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_871_ = l_Lean_Syntax_getArg(v_x_853_, v___x_484_);
lean_inc(v___x_871_);
v___x_872_ = l_Lean_Syntax_matchesNull(v___x_871_, v___x_484_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_873_ = l_Lean_Syntax_getNumArgs(v___x_871_);
v___x_874_ = lean_nat_dec_le(v___x_484_, v___x_873_);
if (v___x_874_ == 0)
{
lean_dec(v___x_873_);
lean_dec(v___x_871_);
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_x_875_; 
v_x_875_ = l_Lean_Syntax_getArg(v___x_871_, v___x_483_);
if (v___x_872_ == 0)
{
uint8_t v___x_900_; 
lean_inc(v_x_875_);
v___x_900_ = l_Lean_Syntax_isOfKind(v_x_875_, v___x_867_);
if (v___x_900_ == 0)
{
lean_dec(v_x_875_);
lean_dec(v___x_873_);
lean_dec(v___x_871_);
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_876_;
}
}
else
{
goto v___jp_876_;
}
v___jp_876_:
{
lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_877_ = lean_unsigned_to_nat(2u);
v___x_878_ = l_Lean_Syntax_getArg(v_x_853_, v___x_877_);
lean_inc(v___x_878_);
v___x_879_ = l_Lean_Syntax_matchesNull(v___x_878_, v___x_877_);
if (v___x_879_ == 0)
{
lean_dec(v___x_878_);
lean_dec(v_x_875_);
lean_dec(v___x_873_);
lean_dec(v___x_871_);
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; uint8_t v___x_882_; 
v___x_880_ = lean_unsigned_to_nat(3u);
v___x_881_ = l_Lean_Syntax_getArg(v_x_853_, v___x_880_);
lean_dec(v_x_853_);
v___x_882_ = l_Lean_Syntax_matchesNull(v___x_881_, v___x_483_);
if (v___x_882_ == 0)
{
lean_dec(v___x_878_);
lean_dec(v_x_875_);
lean_dec(v___x_873_);
lean_dec(v___x_871_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_883_ = l_Lean_Syntax_getArg(v___x_485_, v___x_877_);
v___x_884_ = l_Lean_Syntax_matchesNull(v___x_883_, v___x_483_);
if (v___x_884_ == 0)
{
lean_dec(v___x_878_);
lean_dec(v_x_875_);
lean_dec(v___x_873_);
lean_dec(v___x_871_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v_ty_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v_P_895_; lean_object* v___x_896_; lean_object* v_ys_897_; lean_object* v___x_898_; lean_object* v_xs_899_; 
v___x_885_ = l_Lean_Syntax_getArgs(v___x_871_);
lean_dec(v___x_871_);
v___x_886_ = l_Array_extract___redArg(v___x_885_, v___x_484_, v___x_873_);
lean_dec_ref(v___x_885_);
v_ty_887_ = l_Lean_Syntax_getArg(v___x_878_, v___x_484_);
lean_dec(v___x_878_);
v___x_888_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_889_ = lean_box(2);
v___x_890_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v___x_888_);
lean_ctor_set(v___x_890_, 2, v___x_886_);
v___x_891_ = lean_unsigned_to_nat(4u);
v___x_892_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_893_ = l_Array_extract___redArg(v___x_892_, v___x_484_, v___x_851_);
lean_dec_ref(v___x_892_);
v___x_894_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_894_, 0, v___x_889_);
lean_ctor_set(v___x_894_, 1, v___x_888_);
lean_ctor_set(v___x_894_, 2, v___x_893_);
v_P_895_ = l_Lean_Syntax_getArg(v___x_485_, v___x_891_);
lean_dec(v___x_485_);
v___x_896_ = l_Lean_Syntax_getArgs(v___x_894_);
lean_dec_ref_known(v___x_894_, 3);
v_ys_897_ = l_unsafeCast___redArg(v___x_896_);
lean_dec_ref(v___x_896_);
v___x_898_ = l_Lean_Syntax_getArgs(v___x_890_);
lean_dec_ref_known(v___x_890_, 3);
v_xs_899_ = l_unsafeCast___redArg(v___x_898_);
lean_dec_ref(v___x_898_);
v_x_620_ = v_x_875_;
v_xs_621_ = v_xs_899_;
v_ty_622_ = v_ty_887_;
v_ys_623_ = v_ys_897_;
v_P_624_ = v_P_895_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
lean_object* v_x_901_; lean_object* v___y_903_; lean_object* v___y_904_; uint8_t v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_923_; uint8_t v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; uint8_t v___y_930_; lean_object* v___y_931_; uint8_t v___y_942_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; uint8_t v___y_946_; uint8_t v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; 
v_x_901_ = l_Lean_Syntax_getArg(v___x_871_, v___x_483_);
if (v___x_850_ == 0)
{
uint8_t v___x_1005_; 
lean_inc(v_x_901_);
v___x_1005_ = l_Lean_Syntax_isOfKind(v_x_901_, v___x_867_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; uint8_t v___x_1007_; 
v___x_1006_ = l_Lean_Syntax_getNumArgs(v___x_871_);
v___x_1007_ = lean_nat_dec_le(v___x_484_, v___x_1006_);
if (v___x_1007_ == 0)
{
lean_dec(v___x_1006_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v_P_1019_; 
v___x_1008_ = lean_unsigned_to_nat(2u);
v___x_1009_ = l_Lean_Syntax_getArg(v_x_853_, v___x_1008_);
v___x_1010_ = lean_unsigned_to_nat(3u);
v___x_1011_ = l_Lean_Syntax_getArg(v_x_853_, v___x_1010_);
lean_dec(v_x_853_);
v___x_1012_ = lean_unsigned_to_nat(4u);
v___x_1013_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1014_ = l_Array_extract___redArg(v___x_1013_, v___x_484_, v___x_851_);
lean_dec_ref(v___x_1013_);
v___x_1015_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1016_ = lean_box(2);
v___x_1017_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___x_1015_);
lean_ctor_set(v___x_1017_, 2, v___x_1014_);
v___x_1018_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1008_);
v_P_1019_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1012_);
lean_dec(v___x_485_);
if (v___x_850_ == 0)
{
if (v___x_1005_ == 0)
{
lean_dec(v_P_1019_);
lean_dec(v___x_1018_);
lean_dec_ref_known(v___x_1017_, 3);
lean_dec(v___x_1011_);
lean_dec(v___x_1009_);
lean_dec(v___x_1006_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_1020_;
}
}
else
{
goto v___jp_1020_;
}
v___jp_1020_:
{
uint8_t v___x_1021_; 
lean_inc(v___x_1009_);
v___x_1021_ = l_Lean_Syntax_matchesNull(v___x_1009_, v___x_1008_);
if (v___x_1021_ == 0)
{
lean_dec(v_P_1019_);
lean_dec(v___x_1018_);
lean_dec_ref_known(v___x_1017_, 3);
lean_dec(v___x_1011_);
lean_dec(v___x_1009_);
lean_dec(v___x_1006_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1022_; 
v___x_1022_ = l_Lean_Syntax_matchesNull(v___x_1011_, v___x_483_);
if (v___x_1022_ == 0)
{
lean_dec(v_P_1019_);
lean_dec(v___x_1018_);
lean_dec_ref_known(v___x_1017_, 3);
lean_dec(v___x_1009_);
lean_dec(v___x_1006_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1023_; 
v___x_1023_ = l_Lean_Syntax_matchesNull(v___x_1018_, v___x_483_);
if (v___x_1023_ == 0)
{
lean_dec(v_P_1019_);
lean_dec_ref_known(v___x_1017_, 3);
lean_dec(v___x_1009_);
lean_dec(v___x_1006_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v_ty_1027_; lean_object* v___x_1028_; lean_object* v_ys_1029_; lean_object* v___x_1030_; lean_object* v_xs_1031_; 
v___x_1024_ = l_Lean_Syntax_getArgs(v___x_871_);
lean_dec(v___x_871_);
v___x_1025_ = l_Array_extract___redArg(v___x_1024_, v___x_484_, v___x_1006_);
lean_dec_ref(v___x_1024_);
v___x_1026_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1016_);
lean_ctor_set(v___x_1026_, 1, v___x_1015_);
lean_ctor_set(v___x_1026_, 2, v___x_1025_);
v_ty_1027_ = l_Lean_Syntax_getArg(v___x_1009_, v___x_484_);
lean_dec(v___x_1009_);
v___x_1028_ = l_Lean_Syntax_getArgs(v___x_1017_);
lean_dec_ref_known(v___x_1017_, 3);
v_ys_1029_ = l_unsafeCast___redArg(v___x_1028_);
lean_dec_ref(v___x_1028_);
v___x_1030_ = l_Lean_Syntax_getArgs(v___x_1026_);
lean_dec_ref_known(v___x_1026_, 3);
v_xs_1031_ = l_unsafeCast___redArg(v___x_1030_);
lean_dec_ref(v___x_1030_);
v_x_620_ = v_x_901_;
v_xs_621_ = v_xs_1031_;
v_ty_622_ = v_ty_1027_;
v_ys_623_ = v_ys_1029_;
v_P_624_ = v_P_1019_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
goto v___jp_958_;
}
}
else
{
goto v___jp_958_;
}
v___jp_902_:
{
if (v___y_905_ == 0)
{
lean_dec(v___y_911_);
lean_dec(v___y_910_);
lean_dec(v___y_909_);
lean_dec(v___y_907_);
lean_dec(v___y_906_);
lean_dec(v___y_903_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_912_; 
v___x_912_ = l_Lean_Syntax_matchesNull(v___y_903_, v___x_483_);
if (v___x_912_ == 0)
{
lean_dec(v___y_911_);
lean_dec(v___y_910_);
lean_dec(v___y_909_);
lean_dec(v___y_907_);
lean_dec(v___y_906_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_913_; 
v___x_913_ = l_Lean_Syntax_matchesNull(v___y_911_, v___x_483_);
if (v___x_913_ == 0)
{
lean_dec(v___y_910_);
lean_dec(v___y_909_);
lean_dec(v___y_907_);
lean_dec(v___y_906_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v_ty_917_; lean_object* v___x_918_; lean_object* v_ys_919_; lean_object* v___x_920_; lean_object* v_xs_921_; 
v___x_914_ = l_Lean_Syntax_getArgs(v___x_871_);
lean_dec(v___x_871_);
v___x_915_ = l_Array_extract___redArg(v___x_914_, v___x_484_, v___y_910_);
lean_dec_ref(v___x_914_);
lean_inc(v___y_904_);
lean_inc(v___y_908_);
v___x_916_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_916_, 0, v___y_908_);
lean_ctor_set(v___x_916_, 1, v___y_904_);
lean_ctor_set(v___x_916_, 2, v___x_915_);
v_ty_917_ = l_Lean_Syntax_getArg(v___y_906_, v___x_484_);
lean_dec(v___y_906_);
v___x_918_ = l_Lean_Syntax_getArgs(v___y_907_);
lean_dec(v___y_907_);
v_ys_919_ = l_unsafeCast___redArg(v___x_918_);
lean_dec_ref(v___x_918_);
v___x_920_ = l_Lean_Syntax_getArgs(v___x_916_);
lean_dec_ref_known(v___x_916_, 3);
v_xs_921_ = l_unsafeCast___redArg(v___x_920_);
lean_dec_ref(v___x_920_);
v_x_620_ = v_x_901_;
v_xs_621_ = v_xs_921_;
v_ty_622_ = v_ty_917_;
v_ys_623_ = v_ys_919_;
v_P_624_ = v___y_909_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_922_:
{
if (v___y_924_ == 0)
{
lean_dec(v___y_931_);
lean_dec(v___y_928_);
lean_dec(v___y_926_);
lean_dec(v___y_925_);
lean_dec(v___y_923_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_930_ == 0)
{
lean_dec(v___y_931_);
lean_dec(v___y_928_);
lean_dec(v___y_926_);
lean_dec(v___y_925_);
lean_dec(v___y_923_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_932_; 
v___x_932_ = l_Lean_Syntax_matchesNull(v___y_928_, v___x_483_);
if (v___x_932_ == 0)
{
lean_dec(v___y_931_);
lean_dec(v___y_926_);
lean_dec(v___y_925_);
lean_dec(v___y_923_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v_ty_936_; lean_object* v___x_937_; lean_object* v_ys_938_; lean_object* v___x_939_; lean_object* v_xs_940_; 
v___x_933_ = l_Lean_Syntax_getArgs(v___x_871_);
lean_dec(v___x_871_);
v___x_934_ = l_Array_extract___redArg(v___x_933_, v___x_484_, v___y_926_);
lean_dec_ref(v___x_933_);
lean_inc(v___y_929_);
lean_inc(v___y_927_);
v___x_935_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_935_, 0, v___y_927_);
lean_ctor_set(v___x_935_, 1, v___y_929_);
lean_ctor_set(v___x_935_, 2, v___x_934_);
v_ty_936_ = l_Lean_Syntax_getArg(v___y_925_, v___x_484_);
lean_dec(v___y_925_);
v___x_937_ = l_Lean_Syntax_getArgs(v___y_931_);
lean_dec(v___y_931_);
v_ys_938_ = l_unsafeCast___redArg(v___x_937_);
lean_dec_ref(v___x_937_);
v___x_939_ = l_Lean_Syntax_getArgs(v___x_935_);
lean_dec_ref_known(v___x_935_, 3);
v_xs_940_ = l_unsafeCast___redArg(v___x_939_);
lean_dec_ref(v___x_939_);
v_x_620_ = v_x_901_;
v_xs_621_ = v_xs_940_;
v_ty_622_ = v_ty_936_;
v_ys_623_ = v_ys_938_;
v_P_624_ = v___y_923_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_941_:
{
if (v___y_946_ == 0)
{
lean_dec(v___y_948_);
lean_dec(v___y_945_);
lean_dec(v___y_944_);
lean_dec(v___y_943_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_947_ == 0)
{
lean_dec(v___y_948_);
lean_dec(v___y_945_);
lean_dec(v___y_944_);
lean_dec(v___y_943_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_942_ == 0)
{
lean_dec(v___y_948_);
lean_dec(v___y_945_);
lean_dec(v___y_944_);
lean_dec(v___y_943_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v_ys_955_; lean_object* v___x_956_; lean_object* v_xs_957_; 
v___x_951_ = l_Lean_Syntax_getArgs(v___x_871_);
lean_dec(v___x_871_);
v___x_952_ = l_Array_extract___redArg(v___x_951_, v___x_484_, v___y_944_);
lean_dec_ref(v___x_951_);
lean_inc(v___y_949_);
lean_inc(v___y_950_);
v___x_953_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_953_, 0, v___y_950_);
lean_ctor_set(v___x_953_, 1, v___y_949_);
lean_ctor_set(v___x_953_, 2, v___x_952_);
v___x_954_ = l_Lean_Syntax_getArgs(v___y_945_);
lean_dec(v___y_945_);
v_ys_955_ = l_unsafeCast___redArg(v___x_954_);
lean_dec_ref(v___x_954_);
v___x_956_ = l_Lean_Syntax_getArgs(v___x_953_);
lean_dec_ref_known(v___x_953_, 3);
v_xs_957_ = l_unsafeCast___redArg(v___x_956_);
lean_dec_ref(v___x_956_);
v_x_620_ = v_x_901_;
v_xs_621_ = v_xs_957_;
v_ty_622_ = v___y_943_;
v_ys_623_ = v_ys_955_;
v_P_624_ = v___y_948_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_958_:
{
lean_object* v___x_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_959_ = lean_unsigned_to_nat(2u);
v___x_960_ = l_Lean_Syntax_getArg(v_x_853_, v___x_959_);
lean_inc(v___x_960_);
v___x_961_ = l_Lean_Syntax_matchesNull(v___x_960_, v___x_959_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_962_ = l_Lean_Syntax_getNumArgs(v___x_871_);
v___x_963_ = lean_nat_dec_le(v___x_484_, v___x_962_);
if (v___x_963_ == 0)
{
lean_dec(v___x_962_);
lean_dec(v___x_960_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v_P_973_; 
v___x_964_ = lean_unsigned_to_nat(3u);
v___x_965_ = l_Lean_Syntax_getArg(v_x_853_, v___x_964_);
lean_dec(v_x_853_);
v___x_966_ = lean_unsigned_to_nat(4u);
v___x_967_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_968_ = l_Array_extract___redArg(v___x_967_, v___x_484_, v___x_851_);
lean_dec_ref(v___x_967_);
v___x_969_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_970_ = lean_box(2);
v___x_971_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
lean_ctor_set(v___x_971_, 1, v___x_969_);
lean_ctor_set(v___x_971_, 2, v___x_968_);
v___x_972_ = l_Lean_Syntax_getArg(v___x_485_, v___x_959_);
v_P_973_ = l_Lean_Syntax_getArg(v___x_485_, v___x_966_);
lean_dec(v___x_485_);
if (v___x_961_ == 0)
{
uint8_t v___x_974_; 
lean_inc(v_x_901_);
v___x_974_ = l_Lean_Syntax_isOfKind(v_x_901_, v___x_867_);
if (v___x_974_ == 0)
{
lean_dec(v_P_973_);
lean_dec(v___x_972_);
lean_dec_ref_known(v___x_971_, 3);
lean_dec(v___x_965_);
lean_dec(v___x_962_);
lean_dec(v___x_960_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_903_ = v___x_965_;
v___y_904_ = v___x_969_;
v___y_905_ = v___x_961_;
v___y_906_ = v___x_960_;
v___y_907_ = v___x_971_;
v___y_908_ = v___x_970_;
v___y_909_ = v_P_973_;
v___y_910_ = v___x_962_;
v___y_911_ = v___x_972_;
goto v___jp_902_;
}
}
else
{
v___y_903_ = v___x_965_;
v___y_904_ = v___x_969_;
v___y_905_ = v___x_961_;
v___y_906_ = v___x_960_;
v___y_907_ = v___x_971_;
v___y_908_ = v___x_970_;
v___y_909_ = v_P_973_;
v___y_910_ = v___x_962_;
v___y_911_ = v___x_972_;
goto v___jp_902_;
}
}
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_975_ = lean_unsigned_to_nat(3u);
v___x_976_ = l_Lean_Syntax_getArg(v_x_853_, v___x_975_);
lean_dec(v_x_853_);
v___x_977_ = l_Lean_Syntax_matchesNull(v___x_976_, v___x_483_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_978_ = l_Lean_Syntax_getNumArgs(v___x_871_);
v___x_979_ = lean_nat_dec_le(v___x_484_, v___x_978_);
if (v___x_979_ == 0)
{
lean_dec(v___x_978_);
lean_dec(v___x_960_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v_P_987_; 
v___x_980_ = lean_unsigned_to_nat(4u);
v___x_981_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_982_ = l_Array_extract___redArg(v___x_981_, v___x_484_, v___x_851_);
lean_dec_ref(v___x_981_);
v___x_983_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_984_ = lean_box(2);
v___x_985_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
lean_ctor_set(v___x_985_, 1, v___x_983_);
lean_ctor_set(v___x_985_, 2, v___x_982_);
v___x_986_ = l_Lean_Syntax_getArg(v___x_485_, v___x_959_);
v_P_987_ = l_Lean_Syntax_getArg(v___x_485_, v___x_980_);
lean_dec(v___x_485_);
if (v___x_977_ == 0)
{
uint8_t v___x_988_; 
lean_inc(v_x_901_);
v___x_988_ = l_Lean_Syntax_isOfKind(v_x_901_, v___x_867_);
if (v___x_988_ == 0)
{
lean_dec(v_P_987_);
lean_dec(v___x_986_);
lean_dec_ref_known(v___x_985_, 3);
lean_dec(v___x_978_);
lean_dec(v___x_960_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_923_ = v_P_987_;
v___y_924_ = v___x_961_;
v___y_925_ = v___x_960_;
v___y_926_ = v___x_978_;
v___y_927_ = v___x_984_;
v___y_928_ = v___x_986_;
v___y_929_ = v___x_983_;
v___y_930_ = v___x_977_;
v___y_931_ = v___x_985_;
goto v___jp_922_;
}
}
else
{
v___y_923_ = v_P_987_;
v___y_924_ = v___x_961_;
v___y_925_ = v___x_960_;
v___y_926_ = v___x_978_;
v___y_927_ = v___x_984_;
v___y_928_ = v___x_986_;
v___y_929_ = v___x_983_;
v___y_930_ = v___x_977_;
v___y_931_ = v___x_985_;
goto v___jp_922_;
}
}
}
else
{
lean_object* v_ty_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v_ty_989_ = l_Lean_Syntax_getArg(v___x_960_, v___x_484_);
lean_dec(v___x_960_);
v___x_990_ = lean_unsigned_to_nat(4u);
v___x_991_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_992_ = l_Array_extract___redArg(v___x_991_, v___x_484_, v___x_851_);
lean_dec_ref(v___x_991_);
v___x_993_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_994_ = lean_box(2);
v___x_995_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v___x_993_);
lean_ctor_set(v___x_995_, 2, v___x_992_);
v___x_996_ = l_Lean_Syntax_getArg(v___x_485_, v___x_959_);
v___x_997_ = l_Lean_Syntax_matchesNull(v___x_996_, v___x_483_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; uint8_t v___x_999_; 
v___x_998_ = l_Lean_Syntax_getNumArgs(v___x_871_);
v___x_999_ = lean_nat_dec_le(v___x_484_, v___x_998_);
if (v___x_999_ == 0)
{
lean_dec(v___x_998_);
lean_dec_ref_known(v___x_995_, 3);
lean_dec(v_ty_989_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_P_1000_; 
v_P_1000_ = l_Lean_Syntax_getArg(v___x_485_, v___x_990_);
lean_dec(v___x_485_);
if (v___x_997_ == 0)
{
uint8_t v___x_1001_; 
lean_inc(v_x_901_);
v___x_1001_ = l_Lean_Syntax_isOfKind(v_x_901_, v___x_867_);
if (v___x_1001_ == 0)
{
lean_dec(v_P_1000_);
lean_dec(v___x_998_);
lean_dec_ref_known(v___x_995_, 3);
lean_dec(v_ty_989_);
lean_dec(v_x_901_);
lean_dec(v___x_871_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_942_ = v___x_997_;
v___y_943_ = v_ty_989_;
v___y_944_ = v___x_998_;
v___y_945_ = v___x_995_;
v___y_946_ = v___x_961_;
v___y_947_ = v___x_977_;
v___y_948_ = v_P_1000_;
v___y_949_ = v___x_993_;
v___y_950_ = v___x_994_;
goto v___jp_941_;
}
}
else
{
v___y_942_ = v___x_997_;
v___y_943_ = v_ty_989_;
v___y_944_ = v___x_998_;
v___y_945_ = v___x_995_;
v___y_946_ = v___x_961_;
v___y_947_ = v___x_977_;
v___y_948_ = v_P_1000_;
v___y_949_ = v___x_993_;
v___y_950_ = v___x_994_;
goto v___jp_941_;
}
}
}
else
{
lean_object* v_P_1002_; lean_object* v___x_1003_; lean_object* v_xs_1004_; 
lean_dec(v___x_871_);
v_P_1002_ = l_Lean_Syntax_getArg(v___x_485_, v___x_990_);
lean_dec(v___x_485_);
v___x_1003_ = l_Lean_Syntax_getArgs(v___x_995_);
lean_dec_ref_known(v___x_995_, 3);
v_xs_1004_ = l_unsafeCast___redArg(v___x_1003_);
lean_dec_ref(v___x_1003_);
v_x_557_ = v_x_901_;
v_ty_558_ = v_ty_989_;
v_xs_559_ = v_xs_1004_;
v_P_560_ = v_P_1002_;
v___y_561_ = v_a_473_;
v___y_562_ = v_a_474_;
goto v___jp_556_;
}
}
}
}
}
}
}
else
{
goto v___jp_854_;
}
}
else
{
goto v___jp_854_;
}
v___jp_854_:
{
lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_855_ = lean_unsigned_to_nat(2u);
v___x_856_ = l_Lean_Syntax_getArg(v___x_485_, v___x_855_);
v___x_857_ = l_Lean_Syntax_matchesNull(v___x_856_, v___x_483_);
if (v___x_857_ == 0)
{
lean_dec(v_x_853_);
lean_dec(v___x_851_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v_P_864_; lean_object* v___x_865_; lean_object* v_xs_866_; 
v___x_858_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_859_ = l_Array_extract___redArg(v___x_858_, v___x_484_, v___x_851_);
lean_dec_ref(v___x_858_);
v___x_860_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_861_ = lean_box(2);
v___x_862_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
lean_ctor_set(v___x_862_, 1, v___x_860_);
lean_ctor_set(v___x_862_, 2, v___x_859_);
v___x_863_ = lean_unsigned_to_nat(4u);
v_P_864_ = l_Lean_Syntax_getArg(v___x_485_, v___x_863_);
lean_dec(v___x_485_);
v___x_865_ = l_Lean_Syntax_getArgs(v___x_862_);
lean_dec_ref_known(v___x_862_, 3);
v_xs_866_ = l_unsafeCast___redArg(v___x_865_);
lean_dec_ref(v___x_865_);
v_x_500_ = v_x_853_;
v_xs_501_ = v_xs_866_;
v_P_502_ = v_P_864_;
v___y_503_ = v_a_473_;
v___y_504_ = v_a_474_;
goto v___jp_499_;
}
}
}
}
else
{
lean_object* v_x_1032_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1122_; lean_object* v___y_1123_; uint8_t v___y_1124_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; uint8_t v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; uint8_t v___y_1165_; lean_object* v___y_1166_; lean_object* v___x_1196_; uint8_t v___x_1197_; lean_object* v_x_1199_; lean_object* v_ty_1200_; lean_object* v_P_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; 
v_x_1032_ = l_Lean_Syntax_getArg(v___x_849_, v___x_483_);
v___x_1196_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63));
lean_inc(v_x_1032_);
v___x_1197_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1250_; lean_object* v_x_1252_; lean_object* v_xs_1253_; lean_object* v_ty_1254_; lean_object* v_P_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v_____discr_1318_; lean_object* v_____discr_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; uint8_t v___x_1346_; 
v___x_1250_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59));
lean_inc(v_x_1032_);
v___x_1346_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_1250_);
if (v___x_1346_ == 0)
{
if (v___x_1346_ == 0)
{
lean_object* v___x_1420_; uint8_t v___x_1421_; 
v___x_1420_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1032_);
v___x_1421_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = l_Lean_Syntax_getNumArgs(v___x_849_);
v___x_1423_ = lean_nat_dec_le(v___x_484_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v_P_1427_; 
v___x_1424_ = lean_unsigned_to_nat(2u);
v___x_1425_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1424_);
v___x_1426_ = lean_unsigned_to_nat(4u);
v_P_1427_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1426_);
lean_dec(v___x_485_);
if (v___x_1346_ == 0)
{
if (v___x_1421_ == 0)
{
if (v___x_1346_ == 0)
{
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1437_ = lean_unsigned_to_nat(3u);
v___x_1438_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_484_);
lean_inc(v___x_1438_);
v___x_1439_ = l_Lean_Syntax_matchesNull(v___x_1438_, v___x_484_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1440_ = l_Lean_Syntax_getNumArgs(v___x_1438_);
v___x_1441_ = lean_nat_dec_le(v___x_484_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_dec(v___x_1440_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_x_1442_; 
v_x_1442_ = l_Lean_Syntax_getArg(v___x_1438_, v___x_483_);
if (v___x_1439_ == 0)
{
uint8_t v___x_1462_; 
lean_inc(v_x_1442_);
v___x_1462_ = l_Lean_Syntax_isOfKind(v_x_1442_, v___x_1420_);
if (v___x_1462_ == 0)
{
lean_dec(v_x_1442_);
lean_dec(v___x_1440_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_1443_;
}
}
else
{
goto v___jp_1443_;
}
v___jp_1443_:
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1424_);
lean_inc(v___x_1444_);
v___x_1445_ = l_Lean_Syntax_matchesNull(v___x_1444_, v___x_1424_);
if (v___x_1445_ == 0)
{
lean_dec(v___x_1444_);
lean_dec(v_x_1442_);
lean_dec(v___x_1440_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1446_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1437_);
lean_dec(v_x_1032_);
v___x_1447_ = l_Lean_Syntax_matchesNull(v___x_1446_, v___x_483_);
if (v___x_1447_ == 0)
{
lean_dec(v___x_1444_);
lean_dec(v_x_1442_);
lean_dec(v___x_1440_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1448_; 
v___x_1448_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___x_483_);
if (v___x_1448_ == 0)
{
lean_dec(v___x_1444_);
lean_dec(v_x_1442_);
lean_dec(v___x_1440_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1422_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v_ty_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v_ys_1459_; lean_object* v___x_1460_; lean_object* v_xs_1461_; 
v___x_1449_ = l_Lean_Syntax_getArgs(v___x_1438_);
lean_dec(v___x_1438_);
v___x_1450_ = l_Array_extract___redArg(v___x_1449_, v___x_484_, v___x_1440_);
lean_dec_ref(v___x_1449_);
v_ty_1451_ = l_Lean_Syntax_getArg(v___x_1444_, v___x_484_);
lean_dec(v___x_1444_);
v___x_1452_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1453_ = lean_box(2);
v___x_1454_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
lean_ctor_set(v___x_1454_, 1, v___x_1452_);
lean_ctor_set(v___x_1454_, 2, v___x_1450_);
v___x_1455_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1456_ = l_Array_extract___redArg(v___x_1455_, v___x_484_, v___x_1422_);
lean_dec_ref(v___x_1455_);
v___x_1457_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1453_);
lean_ctor_set(v___x_1457_, 1, v___x_1452_);
lean_ctor_set(v___x_1457_, 2, v___x_1456_);
v___x_1458_ = l_Lean_Syntax_getArgs(v___x_1457_);
lean_dec_ref_known(v___x_1457_, 3);
v_ys_1459_ = l_unsafeCast___redArg(v___x_1458_);
lean_dec_ref(v___x_1458_);
v___x_1460_ = l_Lean_Syntax_getArgs(v___x_1454_);
lean_dec_ref_known(v___x_1454_, 3);
v_xs_1461_ = l_unsafeCast___redArg(v___x_1460_);
lean_dec_ref(v___x_1460_);
v_x_620_ = v_x_1442_;
v_xs_621_ = v_xs_1461_;
v_ty_622_ = v_ty_1451_;
v_ys_623_ = v_ys_1459_;
v_P_624_ = v_P_1427_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
lean_object* v_x_1463_; lean_object* v___y_1465_; lean_object* v___y_1466_; uint8_t v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; uint8_t v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; uint8_t v___y_1488_; lean_object* v___y_1489_; uint8_t v___y_1500_; lean_object* v___y_1501_; lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___y_1504_; uint8_t v___y_1505_; uint8_t v___y_1506_; lean_object* v___y_1507_; 
v_x_1463_ = l_Lean_Syntax_getArg(v___x_1438_, v___x_483_);
if (v___x_1346_ == 0)
{
uint8_t v___x_1549_; 
lean_inc(v_x_1463_);
v___x_1549_ = l_Lean_Syntax_isOfKind(v_x_1463_, v___x_1420_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = l_Lean_Syntax_getNumArgs(v___x_1438_);
v___x_1551_ = lean_nat_dec_le(v___x_484_, v___x_1550_);
if (v___x_1551_ == 0)
{
lean_dec(v___x_1550_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1552_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1424_);
v___x_1553_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1437_);
lean_dec(v_x_1032_);
v___x_1554_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1555_ = l_Array_extract___redArg(v___x_1554_, v___x_484_, v___x_1422_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1557_ = lean_box(2);
v___x_1558_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
lean_ctor_set(v___x_1558_, 1, v___x_1556_);
lean_ctor_set(v___x_1558_, 2, v___x_1555_);
if (v___x_1346_ == 0)
{
if (v___x_1549_ == 0)
{
lean_dec_ref_known(v___x_1558_, 3);
lean_dec(v___x_1553_);
lean_dec(v___x_1552_);
lean_dec(v___x_1550_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_1559_;
}
}
else
{
goto v___jp_1559_;
}
v___jp_1559_:
{
uint8_t v___x_1560_; 
lean_inc(v___x_1552_);
v___x_1560_ = l_Lean_Syntax_matchesNull(v___x_1552_, v___x_1424_);
if (v___x_1560_ == 0)
{
lean_dec_ref_known(v___x_1558_, 3);
lean_dec(v___x_1553_);
lean_dec(v___x_1552_);
lean_dec(v___x_1550_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1561_; 
v___x_1561_ = l_Lean_Syntax_matchesNull(v___x_1553_, v___x_483_);
if (v___x_1561_ == 0)
{
lean_dec_ref_known(v___x_1558_, 3);
lean_dec(v___x_1552_);
lean_dec(v___x_1550_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1562_; 
v___x_1562_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___x_483_);
if (v___x_1562_ == 0)
{
lean_dec_ref_known(v___x_1558_, 3);
lean_dec(v___x_1552_);
lean_dec(v___x_1550_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v_ty_1566_; lean_object* v___x_1567_; lean_object* v_ys_1568_; lean_object* v___x_1569_; lean_object* v_xs_1570_; 
v___x_1563_ = l_Lean_Syntax_getArgs(v___x_1438_);
lean_dec(v___x_1438_);
v___x_1564_ = l_Array_extract___redArg(v___x_1563_, v___x_484_, v___x_1550_);
lean_dec_ref(v___x_1563_);
v___x_1565_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1557_);
lean_ctor_set(v___x_1565_, 1, v___x_1556_);
lean_ctor_set(v___x_1565_, 2, v___x_1564_);
v_ty_1566_ = l_Lean_Syntax_getArg(v___x_1552_, v___x_484_);
lean_dec(v___x_1552_);
v___x_1567_ = l_Lean_Syntax_getArgs(v___x_1558_);
lean_dec_ref_known(v___x_1558_, 3);
v_ys_1568_ = l_unsafeCast___redArg(v___x_1567_);
lean_dec_ref(v___x_1567_);
v___x_1569_ = l_Lean_Syntax_getArgs(v___x_1565_);
lean_dec_ref_known(v___x_1565_, 3);
v_xs_1570_ = l_unsafeCast___redArg(v___x_1569_);
lean_dec_ref(v___x_1569_);
v_x_620_ = v_x_1463_;
v_xs_621_ = v_xs_1570_;
v_ty_622_ = v_ty_1566_;
v_ys_623_ = v_ys_1568_;
v_P_624_ = v_P_1427_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
goto v___jp_1515_;
}
}
else
{
goto v___jp_1515_;
}
v___jp_1464_:
{
if (v___y_1467_ == 0)
{
lean_dec(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec(v___y_1468_);
lean_dec(v___y_1466_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1472_; 
v___x_1472_ = l_Lean_Syntax_matchesNull(v___y_1468_, v___x_483_);
if (v___x_1472_ == 0)
{
lean_dec(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec(v___y_1466_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1473_; 
v___x_1473_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___x_483_);
if (v___x_1473_ == 0)
{
lean_dec(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec(v___y_1466_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v_ty_1477_; lean_object* v___x_1478_; lean_object* v_ys_1479_; lean_object* v___x_1480_; lean_object* v_xs_1481_; 
v___x_1474_ = l_Lean_Syntax_getArgs(v___x_1438_);
lean_dec(v___x_1438_);
v___x_1475_ = l_Array_extract___redArg(v___x_1474_, v___x_484_, v___y_1471_);
lean_dec_ref(v___x_1474_);
lean_inc(v___y_1465_);
lean_inc(v___y_1469_);
v___x_1476_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1476_, 0, v___y_1469_);
lean_ctor_set(v___x_1476_, 1, v___y_1465_);
lean_ctor_set(v___x_1476_, 2, v___x_1475_);
v_ty_1477_ = l_Lean_Syntax_getArg(v___y_1470_, v___x_484_);
lean_dec(v___y_1470_);
v___x_1478_ = l_Lean_Syntax_getArgs(v___y_1466_);
lean_dec(v___y_1466_);
v_ys_1479_ = l_unsafeCast___redArg(v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = l_Lean_Syntax_getArgs(v___x_1476_);
lean_dec_ref_known(v___x_1476_, 3);
v_xs_1481_ = l_unsafeCast___redArg(v___x_1480_);
lean_dec_ref(v___x_1480_);
v_x_620_ = v_x_1463_;
v_xs_621_ = v_xs_1481_;
v_ty_622_ = v_ty_1477_;
v_ys_623_ = v_ys_1479_;
v_P_624_ = v_P_1427_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_1482_:
{
if (v___y_1488_ == 0)
{
lean_dec(v___y_1489_);
lean_dec(v___y_1487_);
lean_dec(v___y_1485_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_1483_ == 0)
{
lean_dec(v___y_1489_);
lean_dec(v___y_1487_);
lean_dec(v___y_1485_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1490_; 
v___x_1490_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___x_483_);
if (v___x_1490_ == 0)
{
lean_dec(v___y_1489_);
lean_dec(v___y_1487_);
lean_dec(v___y_1485_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v_ty_1494_; lean_object* v___x_1495_; lean_object* v_ys_1496_; lean_object* v___x_1497_; lean_object* v_xs_1498_; 
v___x_1491_ = l_Lean_Syntax_getArgs(v___x_1438_);
lean_dec(v___x_1438_);
v___x_1492_ = l_Array_extract___redArg(v___x_1491_, v___x_484_, v___y_1485_);
lean_dec_ref(v___x_1491_);
lean_inc(v___y_1486_);
lean_inc(v___y_1484_);
v___x_1493_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1493_, 0, v___y_1484_);
lean_ctor_set(v___x_1493_, 1, v___y_1486_);
lean_ctor_set(v___x_1493_, 2, v___x_1492_);
v_ty_1494_ = l_Lean_Syntax_getArg(v___y_1489_, v___x_484_);
lean_dec(v___y_1489_);
v___x_1495_ = l_Lean_Syntax_getArgs(v___y_1487_);
lean_dec(v___y_1487_);
v_ys_1496_ = l_unsafeCast___redArg(v___x_1495_);
lean_dec_ref(v___x_1495_);
v___x_1497_ = l_Lean_Syntax_getArgs(v___x_1493_);
lean_dec_ref_known(v___x_1493_, 3);
v_xs_1498_ = l_unsafeCast___redArg(v___x_1497_);
lean_dec_ref(v___x_1497_);
v_x_620_ = v_x_1463_;
v_xs_621_ = v_xs_1498_;
v_ty_622_ = v_ty_1494_;
v_ys_623_ = v_ys_1496_;
v_P_624_ = v_P_1427_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_1499_:
{
if (v___y_1505_ == 0)
{
lean_dec(v___y_1507_);
lean_dec(v___y_1503_);
lean_dec(v___y_1501_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_1500_ == 0)
{
lean_dec(v___y_1507_);
lean_dec(v___y_1503_);
lean_dec(v___y_1501_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_1506_ == 0)
{
lean_dec(v___y_1507_);
lean_dec(v___y_1503_);
lean_dec(v___y_1501_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v_ys_1512_; lean_object* v___x_1513_; lean_object* v_xs_1514_; 
v___x_1508_ = l_Lean_Syntax_getArgs(v___x_1438_);
lean_dec(v___x_1438_);
v___x_1509_ = l_Array_extract___redArg(v___x_1508_, v___x_484_, v___y_1507_);
lean_dec_ref(v___x_1508_);
lean_inc(v___y_1504_);
lean_inc(v___y_1502_);
v___x_1510_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1510_, 0, v___y_1502_);
lean_ctor_set(v___x_1510_, 1, v___y_1504_);
lean_ctor_set(v___x_1510_, 2, v___x_1509_);
v___x_1511_ = l_Lean_Syntax_getArgs(v___y_1503_);
lean_dec(v___y_1503_);
v_ys_1512_ = l_unsafeCast___redArg(v___x_1511_);
lean_dec_ref(v___x_1511_);
v___x_1513_ = l_Lean_Syntax_getArgs(v___x_1510_);
lean_dec_ref_known(v___x_1510_, 3);
v_xs_1514_ = l_unsafeCast___redArg(v___x_1513_);
lean_dec_ref(v___x_1513_);
v_x_620_ = v_x_1463_;
v_xs_621_ = v_xs_1514_;
v_ty_622_ = v___y_1501_;
v_ys_623_ = v_ys_1512_;
v_P_624_ = v_P_1427_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_1515_:
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1424_);
lean_inc(v___x_1516_);
v___x_1517_ = l_Lean_Syntax_matchesNull(v___x_1516_, v___x_1424_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = l_Lean_Syntax_getNumArgs(v___x_1438_);
v___x_1519_ = lean_nat_dec_le(v___x_484_, v___x_1518_);
if (v___x_1519_ == 0)
{
lean_dec(v___x_1518_);
lean_dec(v___x_1516_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1520_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1437_);
lean_dec(v_x_1032_);
v___x_1521_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1522_ = l_Array_extract___redArg(v___x_1521_, v___x_484_, v___x_1422_);
lean_dec_ref(v___x_1521_);
v___x_1523_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1524_ = lean_box(2);
v___x_1525_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v___x_1523_);
lean_ctor_set(v___x_1525_, 2, v___x_1522_);
if (v___x_1517_ == 0)
{
uint8_t v___x_1526_; 
lean_inc(v_x_1463_);
v___x_1526_ = l_Lean_Syntax_isOfKind(v_x_1463_, v___x_1420_);
if (v___x_1526_ == 0)
{
lean_dec_ref_known(v___x_1525_, 3);
lean_dec(v___x_1520_);
lean_dec(v___x_1518_);
lean_dec(v___x_1516_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_1465_ = v___x_1523_;
v___y_1466_ = v___x_1525_;
v___y_1467_ = v___x_1517_;
v___y_1468_ = v___x_1520_;
v___y_1469_ = v___x_1524_;
v___y_1470_ = v___x_1516_;
v___y_1471_ = v___x_1518_;
goto v___jp_1464_;
}
}
else
{
v___y_1465_ = v___x_1523_;
v___y_1466_ = v___x_1525_;
v___y_1467_ = v___x_1517_;
v___y_1468_ = v___x_1520_;
v___y_1469_ = v___x_1524_;
v___y_1470_ = v___x_1516_;
v___y_1471_ = v___x_1518_;
goto v___jp_1464_;
}
}
}
else
{
lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1527_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1437_);
lean_dec(v_x_1032_);
v___x_1528_ = l_Lean_Syntax_matchesNull(v___x_1527_, v___x_483_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; uint8_t v___x_1530_; 
v___x_1529_ = l_Lean_Syntax_getNumArgs(v___x_1438_);
v___x_1530_ = lean_nat_dec_le(v___x_484_, v___x_1529_);
if (v___x_1530_ == 0)
{
lean_dec(v___x_1529_);
lean_dec(v___x_1516_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
lean_dec(v___x_1422_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1531_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1532_ = l_Array_extract___redArg(v___x_1531_, v___x_484_, v___x_1422_);
lean_dec_ref(v___x_1531_);
v___x_1533_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1534_ = lean_box(2);
v___x_1535_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
lean_ctor_set(v___x_1535_, 1, v___x_1533_);
lean_ctor_set(v___x_1535_, 2, v___x_1532_);
if (v___x_1528_ == 0)
{
uint8_t v___x_1536_; 
lean_inc(v_x_1463_);
v___x_1536_ = l_Lean_Syntax_isOfKind(v_x_1463_, v___x_1420_);
if (v___x_1536_ == 0)
{
lean_dec_ref_known(v___x_1535_, 3);
lean_dec(v___x_1529_);
lean_dec(v___x_1516_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
lean_dec(v___x_1425_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_1483_ = v___x_1528_;
v___y_1484_ = v___x_1534_;
v___y_1485_ = v___x_1529_;
v___y_1486_ = v___x_1533_;
v___y_1487_ = v___x_1535_;
v___y_1488_ = v___x_1517_;
v___y_1489_ = v___x_1516_;
goto v___jp_1482_;
}
}
else
{
v___y_1483_ = v___x_1528_;
v___y_1484_ = v___x_1534_;
v___y_1485_ = v___x_1529_;
v___y_1486_ = v___x_1533_;
v___y_1487_ = v___x_1535_;
v___y_1488_ = v___x_1517_;
v___y_1489_ = v___x_1516_;
goto v___jp_1482_;
}
}
}
else
{
lean_object* v_ty_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; uint8_t v___x_1543_; 
v_ty_1537_ = l_Lean_Syntax_getArg(v___x_1516_, v___x_484_);
lean_dec(v___x_1516_);
v___x_1538_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1539_ = l_Array_extract___redArg(v___x_1538_, v___x_484_, v___x_1422_);
lean_dec_ref(v___x_1538_);
v___x_1540_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1541_ = lean_box(2);
v___x_1542_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
lean_ctor_set(v___x_1542_, 1, v___x_1540_);
lean_ctor_set(v___x_1542_, 2, v___x_1539_);
v___x_1543_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___x_483_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; uint8_t v___x_1545_; 
v___x_1544_ = l_Lean_Syntax_getNumArgs(v___x_1438_);
v___x_1545_ = lean_nat_dec_le(v___x_484_, v___x_1544_);
if (v___x_1545_ == 0)
{
lean_dec(v___x_1544_);
lean_dec_ref_known(v___x_1542_, 3);
lean_dec(v_ty_1537_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_1543_ == 0)
{
uint8_t v___x_1546_; 
lean_inc(v_x_1463_);
v___x_1546_ = l_Lean_Syntax_isOfKind(v_x_1463_, v___x_1420_);
if (v___x_1546_ == 0)
{
lean_dec(v___x_1544_);
lean_dec_ref_known(v___x_1542_, 3);
lean_dec(v_ty_1537_);
lean_dec(v_x_1463_);
lean_dec(v___x_1438_);
lean_dec(v_P_1427_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_1500_ = v___x_1528_;
v___y_1501_ = v_ty_1537_;
v___y_1502_ = v___x_1541_;
v___y_1503_ = v___x_1542_;
v___y_1504_ = v___x_1540_;
v___y_1505_ = v___x_1517_;
v___y_1506_ = v___x_1543_;
v___y_1507_ = v___x_1544_;
goto v___jp_1499_;
}
}
else
{
v___y_1500_ = v___x_1528_;
v___y_1501_ = v_ty_1537_;
v___y_1502_ = v___x_1541_;
v___y_1503_ = v___x_1542_;
v___y_1504_ = v___x_1540_;
v___y_1505_ = v___x_1517_;
v___y_1506_ = v___x_1543_;
v___y_1507_ = v___x_1544_;
goto v___jp_1499_;
}
}
}
else
{
lean_object* v___x_1547_; lean_object* v_xs_1548_; 
lean_dec(v___x_1438_);
v___x_1547_ = l_Lean_Syntax_getArgs(v___x_1542_);
lean_dec_ref_known(v___x_1542_, 3);
v_xs_1548_ = l_unsafeCast___redArg(v___x_1547_);
lean_dec_ref(v___x_1547_);
v_x_557_ = v_x_1463_;
v_ty_558_ = v_ty_1537_;
v_xs_559_ = v_xs_1548_;
v_P_560_ = v_P_1427_;
v___y_561_ = v_a_473_;
v___y_562_ = v_a_474_;
goto v___jp_556_;
}
}
}
}
}
}
}
else
{
goto v___jp_1428_;
}
}
else
{
goto v___jp_1428_;
}
v___jp_1428_:
{
uint8_t v___x_1429_; 
v___x_1429_ = l_Lean_Syntax_matchesNull(v___x_1425_, v___x_483_);
if (v___x_1429_ == 0)
{
lean_dec(v_P_1427_);
lean_dec(v___x_1422_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v_xs_1436_; 
v___x_1430_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1431_ = l_Array_extract___redArg(v___x_1430_, v___x_484_, v___x_1422_);
lean_dec_ref(v___x_1430_);
v___x_1432_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1433_ = lean_box(2);
v___x_1434_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
lean_ctor_set(v___x_1434_, 1, v___x_1432_);
lean_ctor_set(v___x_1434_, 2, v___x_1431_);
v___x_1435_ = l_Lean_Syntax_getArgs(v___x_1434_);
lean_dec_ref_known(v___x_1434_, 3);
v_xs_1436_ = l_unsafeCast___redArg(v___x_1435_);
lean_dec_ref(v___x_1435_);
v_x_500_ = v_x_1032_;
v_xs_501_ = v_xs_1436_;
v_P_502_ = v_P_1427_;
v___y_503_ = v_a_473_;
v___y_504_ = v_a_474_;
goto v___jp_499_;
}
}
}
}
else
{
goto v___jp_1347_;
}
}
else
{
goto v___jp_1347_;
}
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1571_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_484_);
v___x_1572_ = l_Lean_Syntax_getNumArgs(v___x_1571_);
v___x_1573_ = lean_nat_dec_le(v___x_484_, v___x_1572_);
if (v___x_1573_ == 0)
{
uint8_t v___x_1574_; 
lean_inc(v___x_1571_);
v___x_1574_ = l_Lean_Syntax_matchesNull(v___x_1571_, v___x_484_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v___x_1575_ = lean_unsigned_to_nat(2u);
v___x_1576_ = lean_unsigned_to_nat(4u);
v___x_1577_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1575_);
v___x_1578_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1576_);
lean_dec(v___x_485_);
v_____discr_1318_ = v___x_1577_;
v_____discr_1319_ = v___x_1578_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v_x_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; 
v_x_1579_ = l_Lean_Syntax_getArg(v___x_1571_, v___x_483_);
v___x_1580_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1579_);
v___x_1581_ = l_Lean_Syntax_isOfKind(v_x_1579_, v___x_1580_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v_P_1585_; 
v___x_1582_ = lean_unsigned_to_nat(2u);
v___x_1583_ = lean_unsigned_to_nat(4u);
v___x_1584_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1582_);
v_P_1585_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1583_);
lean_dec(v___x_485_);
if (v___x_1573_ == 0)
{
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1584_;
v_____discr_1319_ = v_P_1585_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1581_ == 0)
{
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1584_;
v_____discr_1319_ = v_P_1585_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1586_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1582_);
lean_inc(v___x_1586_);
v___x_1587_ = l_Lean_Syntax_matchesNull(v___x_1586_, v___x_1582_);
if (v___x_1587_ == 0)
{
lean_dec(v___x_1586_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1584_;
v_____discr_1319_ = v_P_1585_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1588_ = lean_unsigned_to_nat(3u);
v___x_1589_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1588_);
v___x_1590_ = l_Lean_Syntax_matchesNull(v___x_1589_, v___x_483_);
if (v___x_1590_ == 0)
{
lean_dec(v___x_1586_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1584_;
v_____discr_1319_ = v_P_1585_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1591_; 
lean_inc(v___x_1584_);
v___x_1591_ = l_Lean_Syntax_matchesNull(v___x_1584_, v___x_483_);
if (v___x_1591_ == 0)
{
lean_dec(v___x_1586_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1584_;
v_____discr_1319_ = v_P_1585_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v_ty_1597_; lean_object* v___x_1598_; lean_object* v_xs_1599_; 
lean_dec(v___x_1584_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1592_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1593_ = l_Array_extract___redArg(v___x_1592_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1592_);
v___x_1594_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1595_ = lean_box(2);
v___x_1596_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1595_);
lean_ctor_set(v___x_1596_, 1, v___x_1594_);
lean_ctor_set(v___x_1596_, 2, v___x_1593_);
v_ty_1597_ = l_Lean_Syntax_getArg(v___x_1586_, v___x_484_);
lean_dec(v___x_1586_);
v___x_1598_ = l_Lean_Syntax_getArgs(v___x_1596_);
lean_dec_ref_known(v___x_1596_, 3);
v_xs_1599_ = l_unsafeCast___redArg(v___x_1598_);
lean_dec_ref(v___x_1598_);
v_x_1252_ = v_x_1579_;
v_xs_1253_ = v_xs_1599_;
v_ty_1254_ = v_ty_1597_;
v_P_1255_ = v_P_1585_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
}
else
{
lean_object* v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1600_ = lean_unsigned_to_nat(2u);
v___x_1601_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1600_);
lean_inc(v___x_1601_);
v___x_1602_ = l_Lean_Syntax_matchesNull(v___x_1601_, v___x_1600_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v_P_1605_; 
v___x_1603_ = lean_unsigned_to_nat(4u);
v___x_1604_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1600_);
v_P_1605_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1603_);
lean_dec(v___x_485_);
if (v___x_1573_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1604_;
v_____discr_1319_ = v_P_1605_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lean_unsigned_to_nat(3u);
v___x_1607_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1606_);
if (v___x_1602_ == 0)
{
if (v___x_1581_ == 0)
{
lean_dec(v___x_1607_);
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1604_;
v_____discr_1319_ = v_P_1605_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1608_;
}
}
else
{
goto v___jp_1608_;
}
v___jp_1608_:
{
if (v___x_1602_ == 0)
{
lean_dec(v___x_1607_);
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1604_;
v_____discr_1319_ = v_P_1605_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1609_; 
v___x_1609_ = l_Lean_Syntax_matchesNull(v___x_1607_, v___x_483_);
if (v___x_1609_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1604_;
v_____discr_1319_ = v_P_1605_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1610_; 
lean_inc(v___x_1604_);
v___x_1610_ = l_Lean_Syntax_matchesNull(v___x_1604_, v___x_483_);
if (v___x_1610_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1604_;
v_____discr_1319_ = v_P_1605_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v_ty_1616_; lean_object* v___x_1617_; lean_object* v_xs_1618_; 
lean_dec(v___x_1604_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1611_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1612_ = l_Array_extract___redArg(v___x_1611_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1611_);
v___x_1613_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1614_ = lean_box(2);
v___x_1615_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
lean_ctor_set(v___x_1615_, 1, v___x_1613_);
lean_ctor_set(v___x_1615_, 2, v___x_1612_);
v_ty_1616_ = l_Lean_Syntax_getArg(v___x_1601_, v___x_484_);
lean_dec(v___x_1601_);
v___x_1617_ = l_Lean_Syntax_getArgs(v___x_1615_);
lean_dec_ref_known(v___x_1615_, 3);
v_xs_1618_ = l_unsafeCast___redArg(v___x_1617_);
lean_dec_ref(v___x_1617_);
v_x_1252_ = v_x_1579_;
v_xs_1253_ = v_xs_1618_;
v_ty_1254_ = v_ty_1616_;
v_P_1255_ = v_P_1605_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
}
else
{
lean_object* v___x_1619_; lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1619_ = lean_unsigned_to_nat(3u);
v___x_1620_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1619_);
v___x_1621_ = l_Lean_Syntax_matchesNull(v___x_1620_, v___x_483_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v_P_1624_; 
v___x_1622_ = lean_unsigned_to_nat(4u);
v___x_1623_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1600_);
v_P_1624_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1622_);
lean_dec(v___x_485_);
if (v___x_1573_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1623_;
v_____discr_1319_ = v_P_1624_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1621_ == 0)
{
if (v___x_1581_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1623_;
v_____discr_1319_ = v_P_1624_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1625_;
}
}
else
{
goto v___jp_1625_;
}
}
v___jp_1625_:
{
if (v___x_1602_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1623_;
v_____discr_1319_ = v_P_1624_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1621_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1623_;
v_____discr_1319_ = v_P_1624_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1626_; 
lean_inc(v___x_1623_);
v___x_1626_ = l_Lean_Syntax_matchesNull(v___x_1623_, v___x_483_);
if (v___x_1626_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1623_;
v_____discr_1319_ = v_P_1624_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v_ty_1632_; lean_object* v___x_1633_; lean_object* v_xs_1634_; 
lean_dec(v___x_1623_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1627_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1628_ = l_Array_extract___redArg(v___x_1627_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1627_);
v___x_1629_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1630_ = lean_box(2);
v___x_1631_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
lean_ctor_set(v___x_1631_, 1, v___x_1629_);
lean_ctor_set(v___x_1631_, 2, v___x_1628_);
v_ty_1632_ = l_Lean_Syntax_getArg(v___x_1601_, v___x_484_);
lean_dec(v___x_1601_);
v___x_1633_ = l_Lean_Syntax_getArgs(v___x_1631_);
lean_dec_ref_known(v___x_1631_, 3);
v_xs_1634_ = l_unsafeCast___redArg(v___x_1633_);
lean_dec_ref(v___x_1633_);
v_x_1252_ = v_x_1579_;
v_xs_1253_ = v_xs_1634_;
v_ty_1254_ = v_ty_1632_;
v_P_1255_ = v_P_1624_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1635_ = lean_unsigned_to_nat(4u);
v___x_1636_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1600_);
lean_inc(v___x_1636_);
v___x_1637_ = l_Lean_Syntax_matchesNull(v___x_1636_, v___x_483_);
if (v___x_1637_ == 0)
{
lean_object* v_P_1638_; 
v_P_1638_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1635_);
lean_dec(v___x_485_);
if (v___x_1573_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1636_;
v_____discr_1319_ = v_P_1638_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1637_ == 0)
{
if (v___x_1581_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1636_;
v_____discr_1319_ = v_P_1638_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1639_;
}
}
else
{
goto v___jp_1639_;
}
}
v___jp_1639_:
{
if (v___x_1602_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1636_;
v_____discr_1319_ = v_P_1638_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1621_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1636_;
v_____discr_1319_ = v_P_1638_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1637_ == 0)
{
lean_dec(v___x_1601_);
lean_dec(v_x_1579_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1636_;
v_____discr_1319_ = v_P_1638_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v_ty_1645_; lean_object* v___x_1646_; lean_object* v_xs_1647_; 
lean_dec(v___x_1636_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1640_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1641_ = l_Array_extract___redArg(v___x_1640_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1640_);
v___x_1642_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1643_ = lean_box(2);
v___x_1644_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
lean_ctor_set(v___x_1644_, 1, v___x_1642_);
lean_ctor_set(v___x_1644_, 2, v___x_1641_);
v_ty_1645_ = l_Lean_Syntax_getArg(v___x_1601_, v___x_484_);
lean_dec(v___x_1601_);
v___x_1646_ = l_Lean_Syntax_getArgs(v___x_1644_);
lean_dec_ref_known(v___x_1644_, 3);
v_xs_1647_ = l_unsafeCast___redArg(v___x_1646_);
lean_dec_ref(v___x_1646_);
v_x_1252_ = v_x_1579_;
v_xs_1253_ = v_xs_1647_;
v_ty_1254_ = v_ty_1645_;
v_P_1255_ = v_P_1638_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
else
{
lean_object* v_ty_1648_; lean_object* v_P_1649_; 
lean_dec(v___x_1636_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_ty_1648_ = l_Lean_Syntax_getArg(v___x_1601_, v___x_484_);
lean_dec(v___x_1601_);
v_P_1649_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1635_);
lean_dec(v___x_485_);
v_x_1199_ = v_x_1579_;
v_ty_1200_ = v_ty_1648_;
v_P_1201_ = v_P_1649_;
v___y_1202_ = v_a_473_;
v___y_1203_ = v_a_474_;
goto v___jp_1198_;
}
}
}
}
}
}
else
{
lean_object* v_x_1650_; uint8_t v___x_1651_; 
v_x_1650_ = l_Lean_Syntax_getArg(v___x_1571_, v___x_483_);
lean_inc(v_x_1650_);
v___x_1651_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1196_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v_P_1658_; uint8_t v___y_1672_; uint8_t v___y_1684_; uint8_t v___y_1685_; uint8_t v___y_1696_; uint8_t v___y_1697_; uint8_t v___y_1698_; uint8_t v___x_1730_; 
v___x_1652_ = lean_unsigned_to_nat(2u);
v___x_1653_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1652_);
v___x_1654_ = lean_unsigned_to_nat(3u);
v___x_1655_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1654_);
v___x_1656_ = lean_unsigned_to_nat(4u);
v___x_1657_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1652_);
v_P_1658_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1656_);
lean_dec(v___x_485_);
lean_inc(v___x_1571_);
v___x_1730_ = l_Lean_Syntax_matchesNull(v___x_1571_, v___x_484_);
if (v___x_1730_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; uint8_t v___x_1732_; 
v___x_1731_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1732_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1731_);
if (v___x_1732_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1718_;
}
}
else
{
goto v___jp_1718_;
}
}
}
else
{
if (v___x_1651_ == 0)
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1734_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1733_);
if (v___x_1734_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1651_ == 0)
{
if (v___x_1734_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1659_;
}
}
else
{
goto v___jp_1659_;
}
}
}
else
{
goto v___jp_1707_;
}
}
else
{
goto v___jp_1707_;
}
}
v___jp_1659_:
{
uint8_t v___x_1660_; 
lean_inc(v___x_1653_);
v___x_1660_ = l_Lean_Syntax_matchesNull(v___x_1653_, v___x_1652_);
if (v___x_1660_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1661_; 
v___x_1661_ = l_Lean_Syntax_matchesNull(v___x_1655_, v___x_483_);
if (v___x_1661_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1662_; 
lean_inc(v___x_1657_);
v___x_1662_ = l_Lean_Syntax_matchesNull(v___x_1657_, v___x_483_);
if (v___x_1662_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v_ty_1668_; lean_object* v___x_1669_; lean_object* v_xs_1670_; 
lean_dec(v___x_1657_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1663_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1664_ = l_Array_extract___redArg(v___x_1663_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1663_);
v___x_1665_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1666_ = lean_box(2);
v___x_1667_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
lean_ctor_set(v___x_1667_, 1, v___x_1665_);
lean_ctor_set(v___x_1667_, 2, v___x_1664_);
v_ty_1668_ = l_Lean_Syntax_getArg(v___x_1653_, v___x_484_);
lean_dec(v___x_1653_);
v___x_1669_ = l_Lean_Syntax_getArgs(v___x_1667_);
lean_dec_ref_known(v___x_1667_, 3);
v_xs_1670_ = l_unsafeCast___redArg(v___x_1669_);
lean_dec_ref(v___x_1669_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1670_;
v_ty_1254_ = v_ty_1668_;
v_P_1255_ = v_P_1658_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1671_:
{
if (v___y_1672_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1673_; 
v___x_1673_ = l_Lean_Syntax_matchesNull(v___x_1655_, v___x_483_);
if (v___x_1673_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1674_; 
lean_inc(v___x_1657_);
v___x_1674_ = l_Lean_Syntax_matchesNull(v___x_1657_, v___x_483_);
if (v___x_1674_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v_ty_1680_; lean_object* v___x_1681_; lean_object* v_xs_1682_; 
lean_dec(v___x_1657_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1675_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1676_ = l_Array_extract___redArg(v___x_1675_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1675_);
v___x_1677_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1678_ = lean_box(2);
v___x_1679_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1677_);
lean_ctor_set(v___x_1679_, 2, v___x_1676_);
v_ty_1680_ = l_Lean_Syntax_getArg(v___x_1653_, v___x_484_);
lean_dec(v___x_1653_);
v___x_1681_ = l_Lean_Syntax_getArgs(v___x_1679_);
lean_dec_ref_known(v___x_1679_, 3);
v_xs_1682_ = l_unsafeCast___redArg(v___x_1681_);
lean_dec_ref(v___x_1681_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1682_;
v_ty_1254_ = v_ty_1680_;
v_P_1255_ = v_P_1658_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1683_:
{
if (v___y_1684_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1685_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1686_; 
lean_inc(v___x_1657_);
v___x_1686_ = l_Lean_Syntax_matchesNull(v___x_1657_, v___x_483_);
if (v___x_1686_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v_ty_1692_; lean_object* v___x_1693_; lean_object* v_xs_1694_; 
lean_dec(v___x_1657_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1687_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1688_ = l_Array_extract___redArg(v___x_1687_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1690_ = lean_box(2);
v___x_1691_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
lean_ctor_set(v___x_1691_, 1, v___x_1689_);
lean_ctor_set(v___x_1691_, 2, v___x_1688_);
v_ty_1692_ = l_Lean_Syntax_getArg(v___x_1653_, v___x_484_);
lean_dec(v___x_1653_);
v___x_1693_ = l_Lean_Syntax_getArgs(v___x_1691_);
lean_dec_ref_known(v___x_1691_, 3);
v_xs_1694_ = l_unsafeCast___redArg(v___x_1693_);
lean_dec_ref(v___x_1693_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1694_;
v_ty_1254_ = v_ty_1692_;
v_P_1255_ = v_P_1658_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1695_:
{
if (v___y_1697_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1698_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1696_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v_ty_1704_; lean_object* v___x_1705_; lean_object* v_xs_1706_; 
lean_dec(v___x_1657_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1699_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1700_ = l_Array_extract___redArg(v___x_1699_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1699_);
v___x_1701_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1702_ = lean_box(2);
v___x_1703_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v___x_1701_);
lean_ctor_set(v___x_1703_, 2, v___x_1700_);
v_ty_1704_ = l_Lean_Syntax_getArg(v___x_1653_, v___x_484_);
lean_dec(v___x_1653_);
v___x_1705_ = l_Lean_Syntax_getArgs(v___x_1703_);
lean_dec_ref_known(v___x_1703_, 3);
v_xs_1706_ = l_unsafeCast___redArg(v___x_1705_);
lean_dec_ref(v___x_1705_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1706_;
v_ty_1254_ = v_ty_1704_;
v_P_1255_ = v_P_1658_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1707_:
{
uint8_t v___x_1708_; 
lean_inc(v___x_1653_);
v___x_1708_ = l_Lean_Syntax_matchesNull(v___x_1653_, v___x_1652_);
if (v___x_1708_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; uint8_t v___x_1710_; 
v___x_1709_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1710_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1709_);
if (v___x_1710_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
v___y_1672_ = v___x_1708_;
goto v___jp_1671_;
}
}
else
{
v___y_1672_ = v___x_1708_;
goto v___jp_1671_;
}
}
}
else
{
uint8_t v___x_1711_; 
v___x_1711_ = l_Lean_Syntax_matchesNull(v___x_1655_, v___x_483_);
if (v___x_1711_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1713_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1712_);
if (v___x_1713_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
v___y_1684_ = v___x_1708_;
v___y_1685_ = v___x_1711_;
goto v___jp_1683_;
}
}
else
{
v___y_1684_ = v___x_1708_;
v___y_1685_ = v___x_1711_;
goto v___jp_1683_;
}
}
}
else
{
uint8_t v___x_1714_; 
lean_inc(v___x_1657_);
v___x_1714_ = l_Lean_Syntax_matchesNull(v___x_1657_, v___x_483_);
if (v___x_1714_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1715_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1716_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
v___y_1696_ = v___x_1714_;
v___y_1697_ = v___x_1708_;
v___y_1698_ = v___x_1711_;
goto v___jp_1695_;
}
}
else
{
v___y_1696_ = v___x_1714_;
v___y_1697_ = v___x_1708_;
v___y_1698_ = v___x_1711_;
goto v___jp_1695_;
}
}
}
else
{
lean_object* v_ty_1717_; 
lean_dec(v___x_1657_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_ty_1717_ = l_Lean_Syntax_getArg(v___x_1653_, v___x_484_);
lean_dec(v___x_1653_);
v_x_1199_ = v_x_1650_;
v_ty_1200_ = v_ty_1717_;
v_P_1201_ = v_P_1658_;
v___y_1202_ = v_a_473_;
v___y_1203_ = v_a_474_;
goto v___jp_1198_;
}
}
}
}
v___jp_1718_:
{
uint8_t v___x_1719_; 
lean_inc(v___x_1653_);
v___x_1719_ = l_Lean_Syntax_matchesNull(v___x_1653_, v___x_1652_);
if (v___x_1719_ == 0)
{
lean_dec(v___x_1655_);
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1720_; 
v___x_1720_ = l_Lean_Syntax_matchesNull(v___x_1655_, v___x_483_);
if (v___x_1720_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1721_; 
lean_inc(v___x_1657_);
v___x_1721_ = l_Lean_Syntax_matchesNull(v___x_1657_, v___x_483_);
if (v___x_1721_ == 0)
{
lean_dec(v___x_1653_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1657_;
v_____discr_1319_ = v_P_1658_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v_ty_1727_; lean_object* v___x_1728_; lean_object* v_xs_1729_; 
lean_dec(v___x_1657_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1722_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1723_ = l_Array_extract___redArg(v___x_1722_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1722_);
v___x_1724_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1725_ = lean_box(2);
v___x_1726_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
lean_ctor_set(v___x_1726_, 1, v___x_1724_);
lean_ctor_set(v___x_1726_, 2, v___x_1723_);
v_ty_1727_ = l_Lean_Syntax_getArg(v___x_1653_, v___x_484_);
lean_dec(v___x_1653_);
v___x_1728_ = l_Lean_Syntax_getArgs(v___x_1726_);
lean_dec_ref_known(v___x_1726_, 3);
v_xs_1729_ = l_unsafeCast___redArg(v___x_1728_);
lean_dec_ref(v___x_1728_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1729_;
v_ty_1254_ = v_ty_1727_;
v_P_1255_ = v_P_1658_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1735_ = lean_unsigned_to_nat(2u);
v___x_1736_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1735_);
lean_inc(v___x_1736_);
v___x_1737_ = l_Lean_Syntax_matchesNull(v___x_1736_, v___x_1735_);
if (v___x_1737_ == 0)
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v_P_1742_; uint8_t v___y_1766_; uint8_t v___y_1777_; uint8_t v___y_1778_; uint8_t v___x_1808_; 
v___x_1738_ = lean_unsigned_to_nat(3u);
v___x_1739_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1738_);
v___x_1740_ = lean_unsigned_to_nat(4u);
v___x_1741_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1735_);
v_P_1742_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1740_);
lean_dec(v___x_485_);
lean_inc(v___x_1571_);
v___x_1808_ = l_Lean_Syntax_matchesNull(v___x_1571_, v___x_484_);
if (v___x_1808_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1810_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1797_;
}
}
else
{
goto v___jp_1797_;
}
}
}
else
{
if (v___x_1737_ == 0)
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1812_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1811_);
if (v___x_1812_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1737_ == 0)
{
if (v___x_1812_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1743_;
}
}
else
{
goto v___jp_1743_;
}
}
}
else
{
goto v___jp_1787_;
}
}
else
{
goto v___jp_1787_;
}
}
v___jp_1743_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1744_; 
v___x_1744_ = l_Lean_Syntax_matchesNull(v___x_1739_, v___x_483_);
if (v___x_1744_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1745_; 
lean_inc(v___x_1741_);
v___x_1745_ = l_Lean_Syntax_matchesNull(v___x_1741_, v___x_483_);
if (v___x_1745_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v_ty_1751_; lean_object* v___x_1752_; lean_object* v_xs_1753_; 
lean_dec(v___x_1741_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1746_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1747_ = l_Array_extract___redArg(v___x_1746_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1746_);
v___x_1748_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1749_ = lean_box(2);
v___x_1750_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1749_);
lean_ctor_set(v___x_1750_, 1, v___x_1748_);
lean_ctor_set(v___x_1750_, 2, v___x_1747_);
v_ty_1751_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1752_ = l_Lean_Syntax_getArgs(v___x_1750_);
lean_dec_ref_known(v___x_1750_, 3);
v_xs_1753_ = l_unsafeCast___redArg(v___x_1752_);
lean_dec_ref(v___x_1752_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1753_;
v_ty_1254_ = v_ty_1751_;
v_P_1255_ = v_P_1742_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1754_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1755_; 
v___x_1755_ = l_Lean_Syntax_matchesNull(v___x_1739_, v___x_483_);
if (v___x_1755_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1756_; 
lean_inc(v___x_1741_);
v___x_1756_ = l_Lean_Syntax_matchesNull(v___x_1741_, v___x_483_);
if (v___x_1756_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v_ty_1762_; lean_object* v___x_1763_; lean_object* v_xs_1764_; 
lean_dec(v___x_1741_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1757_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1758_ = l_Array_extract___redArg(v___x_1757_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1757_);
v___x_1759_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1760_ = lean_box(2);
v___x_1761_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
lean_ctor_set(v___x_1761_, 1, v___x_1759_);
lean_ctor_set(v___x_1761_, 2, v___x_1758_);
v_ty_1762_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1763_ = l_Lean_Syntax_getArgs(v___x_1761_);
lean_dec_ref_known(v___x_1761_, 3);
v_xs_1764_ = l_unsafeCast___redArg(v___x_1763_);
lean_dec_ref(v___x_1763_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1764_;
v_ty_1254_ = v_ty_1762_;
v_P_1255_ = v_P_1742_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1765_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1766_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1767_; 
lean_inc(v___x_1741_);
v___x_1767_ = l_Lean_Syntax_matchesNull(v___x_1741_, v___x_483_);
if (v___x_1767_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v_ty_1773_; lean_object* v___x_1774_; lean_object* v_xs_1775_; 
lean_dec(v___x_1741_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1768_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1769_ = l_Array_extract___redArg(v___x_1768_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1768_);
v___x_1770_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1771_ = lean_box(2);
v___x_1772_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
lean_ctor_set(v___x_1772_, 1, v___x_1770_);
lean_ctor_set(v___x_1772_, 2, v___x_1769_);
v_ty_1773_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1774_ = l_Lean_Syntax_getArgs(v___x_1772_);
lean_dec_ref_known(v___x_1772_, 3);
v_xs_1775_ = l_unsafeCast___redArg(v___x_1774_);
lean_dec_ref(v___x_1774_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1775_;
v_ty_1254_ = v_ty_1773_;
v_P_1255_ = v_P_1742_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1776_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1778_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1777_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v_ty_1784_; lean_object* v___x_1785_; lean_object* v_xs_1786_; 
lean_dec(v___x_1741_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1779_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1780_ = l_Array_extract___redArg(v___x_1779_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1779_);
v___x_1781_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1782_ = lean_box(2);
v___x_1783_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1782_);
lean_ctor_set(v___x_1783_, 1, v___x_1781_);
lean_ctor_set(v___x_1783_, 2, v___x_1780_);
v_ty_1784_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1785_ = l_Lean_Syntax_getArgs(v___x_1783_);
lean_dec_ref_known(v___x_1783_, 3);
v_xs_1786_ = l_unsafeCast___redArg(v___x_1785_);
lean_dec_ref(v___x_1785_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1786_;
v_ty_1254_ = v_ty_1784_;
v_P_1255_ = v_P_1742_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1787_:
{
if (v___x_1737_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1737_ == 0)
{
lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1789_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1754_;
}
}
else
{
goto v___jp_1754_;
}
}
}
else
{
uint8_t v___x_1790_; 
v___x_1790_ = l_Lean_Syntax_matchesNull(v___x_1739_, v___x_483_);
if (v___x_1790_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1790_ == 0)
{
lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1791_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1792_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
v___y_1766_ = v___x_1790_;
goto v___jp_1765_;
}
}
else
{
v___y_1766_ = v___x_1790_;
goto v___jp_1765_;
}
}
}
else
{
uint8_t v___x_1793_; 
lean_inc(v___x_1741_);
v___x_1793_ = l_Lean_Syntax_matchesNull(v___x_1741_, v___x_483_);
if (v___x_1793_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; uint8_t v___x_1795_; 
v___x_1794_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1795_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
v___y_1777_ = v___x_1793_;
v___y_1778_ = v___x_1790_;
goto v___jp_1776_;
}
}
else
{
v___y_1777_ = v___x_1793_;
v___y_1778_ = v___x_1790_;
goto v___jp_1776_;
}
}
}
else
{
lean_object* v_ty_1796_; 
lean_dec(v___x_1741_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_ty_1796_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v_x_1199_ = v_x_1650_;
v_ty_1200_ = v_ty_1796_;
v_P_1201_ = v_P_1742_;
v___y_1202_ = v_a_473_;
v___y_1203_ = v_a_474_;
goto v___jp_1198_;
}
}
}
}
v___jp_1797_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1739_);
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1798_; 
v___x_1798_ = l_Lean_Syntax_matchesNull(v___x_1739_, v___x_483_);
if (v___x_1798_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1799_; 
lean_inc(v___x_1741_);
v___x_1799_ = l_Lean_Syntax_matchesNull(v___x_1741_, v___x_483_);
if (v___x_1799_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1741_;
v_____discr_1319_ = v_P_1742_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v_ty_1805_; lean_object* v___x_1806_; lean_object* v_xs_1807_; 
lean_dec(v___x_1741_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1800_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1801_ = l_Array_extract___redArg(v___x_1800_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1800_);
v___x_1802_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1803_ = lean_box(2);
v___x_1804_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
lean_ctor_set(v___x_1804_, 1, v___x_1802_);
lean_ctor_set(v___x_1804_, 2, v___x_1801_);
v_ty_1805_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1806_ = l_Lean_Syntax_getArgs(v___x_1804_);
lean_dec_ref_known(v___x_1804_, 3);
v_xs_1807_ = l_unsafeCast___redArg(v___x_1806_);
lean_dec_ref(v___x_1806_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1807_;
v_ty_1254_ = v_ty_1805_;
v_P_1255_ = v_P_1742_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
else
{
lean_object* v___x_1813_; lean_object* v___x_1814_; uint8_t v___x_1815_; 
v___x_1813_ = lean_unsigned_to_nat(3u);
v___x_1814_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1813_);
v___x_1815_ = l_Lean_Syntax_matchesNull(v___x_1814_, v___x_483_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v_P_1818_; uint8_t v___y_1850_; uint8_t v___x_1878_; 
v___x_1816_ = lean_unsigned_to_nat(4u);
v___x_1817_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1735_);
v_P_1818_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1816_);
lean_dec(v___x_485_);
lean_inc(v___x_1571_);
v___x_1878_ = l_Lean_Syntax_matchesNull(v___x_1571_, v___x_484_);
if (v___x_1878_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1878_ == 0)
{
lean_object* v___x_1879_; uint8_t v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1880_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1879_);
if (v___x_1880_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1868_;
}
}
else
{
goto v___jp_1868_;
}
}
}
else
{
if (v___x_1815_ == 0)
{
lean_object* v___x_1881_; uint8_t v___x_1882_; 
v___x_1881_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1882_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1881_);
if (v___x_1882_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
if (v___x_1882_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1819_;
}
}
else
{
goto v___jp_1819_;
}
}
}
else
{
goto v___jp_1859_;
}
}
else
{
goto v___jp_1859_;
}
}
v___jp_1819_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1820_; 
lean_inc(v___x_1817_);
v___x_1820_ = l_Lean_Syntax_matchesNull(v___x_1817_, v___x_483_);
if (v___x_1820_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v_ty_1826_; lean_object* v___x_1827_; lean_object* v_xs_1828_; 
lean_dec(v___x_1817_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1821_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1822_ = l_Array_extract___redArg(v___x_1821_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1821_);
v___x_1823_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1824_ = lean_box(2);
v___x_1825_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
lean_ctor_set(v___x_1825_, 1, v___x_1823_);
lean_ctor_set(v___x_1825_, 2, v___x_1822_);
v_ty_1826_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1827_ = l_Lean_Syntax_getArgs(v___x_1825_);
lean_dec_ref_known(v___x_1825_, 3);
v_xs_1828_ = l_unsafeCast___redArg(v___x_1827_);
lean_dec_ref(v___x_1827_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1828_;
v_ty_1254_ = v_ty_1826_;
v_P_1255_ = v_P_1818_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1829_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1830_; 
lean_inc(v___x_1817_);
v___x_1830_ = l_Lean_Syntax_matchesNull(v___x_1817_, v___x_483_);
if (v___x_1830_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v_ty_1836_; lean_object* v___x_1837_; lean_object* v_xs_1838_; 
lean_dec(v___x_1817_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1831_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1832_ = l_Array_extract___redArg(v___x_1831_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1831_);
v___x_1833_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1834_ = lean_box(2);
v___x_1835_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
lean_ctor_set(v___x_1835_, 1, v___x_1833_);
lean_ctor_set(v___x_1835_, 2, v___x_1832_);
v_ty_1836_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1837_ = l_Lean_Syntax_getArgs(v___x_1835_);
lean_dec_ref_known(v___x_1835_, 3);
v_xs_1838_ = l_unsafeCast___redArg(v___x_1837_);
lean_dec_ref(v___x_1837_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1838_;
v_ty_1254_ = v_ty_1836_;
v_P_1255_ = v_P_1818_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1839_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1840_; 
lean_inc(v___x_1817_);
v___x_1840_ = l_Lean_Syntax_matchesNull(v___x_1817_, v___x_483_);
if (v___x_1840_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v_ty_1846_; lean_object* v___x_1847_; lean_object* v_xs_1848_; 
lean_dec(v___x_1817_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1841_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1842_ = l_Array_extract___redArg(v___x_1841_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1841_);
v___x_1843_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1844_ = lean_box(2);
v___x_1845_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
lean_ctor_set(v___x_1845_, 1, v___x_1843_);
lean_ctor_set(v___x_1845_, 2, v___x_1842_);
v_ty_1846_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1847_ = l_Lean_Syntax_getArgs(v___x_1845_);
lean_dec_ref_known(v___x_1845_, 3);
v_xs_1848_ = l_unsafeCast___redArg(v___x_1847_);
lean_dec_ref(v___x_1847_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1848_;
v_ty_1254_ = v_ty_1846_;
v_P_1255_ = v_P_1818_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1849_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___y_1850_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v_ty_1856_; lean_object* v___x_1857_; lean_object* v_xs_1858_; 
lean_dec(v___x_1817_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1851_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1852_ = l_Array_extract___redArg(v___x_1851_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1854_ = lean_box(2);
v___x_1855_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
lean_ctor_set(v___x_1855_, 1, v___x_1853_);
lean_ctor_set(v___x_1855_, 2, v___x_1852_);
v_ty_1856_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1857_ = l_Lean_Syntax_getArgs(v___x_1855_);
lean_dec_ref_known(v___x_1855_, 3);
v_xs_1858_ = l_unsafeCast___redArg(v___x_1857_);
lean_dec_ref(v___x_1857_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1858_;
v_ty_1254_ = v_ty_1856_;
v_P_1255_ = v_P_1818_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1859_:
{
if (v___x_1737_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1737_ == 0)
{
lean_object* v___x_1860_; uint8_t v___x_1861_; 
v___x_1860_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1861_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1860_);
if (v___x_1861_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1829_;
}
}
else
{
goto v___jp_1829_;
}
}
}
else
{
if (v___x_1815_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1863_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1862_);
if (v___x_1863_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1839_;
}
}
else
{
goto v___jp_1839_;
}
}
}
else
{
uint8_t v___x_1864_; 
lean_inc(v___x_1817_);
v___x_1864_ = l_Lean_Syntax_matchesNull(v___x_1817_, v___x_483_);
if (v___x_1864_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1866_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
v___y_1850_ = v___x_1864_;
goto v___jp_1849_;
}
}
else
{
v___y_1850_ = v___x_1864_;
goto v___jp_1849_;
}
}
}
else
{
lean_object* v_ty_1867_; 
lean_dec(v___x_1817_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_ty_1867_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v_x_1199_ = v_x_1650_;
v_ty_1200_ = v_ty_1867_;
v_P_1201_ = v_P_1818_;
v___y_1202_ = v_a_473_;
v___y_1203_ = v_a_474_;
goto v___jp_1198_;
}
}
}
}
v___jp_1868_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
uint8_t v___x_1869_; 
lean_inc(v___x_1817_);
v___x_1869_ = l_Lean_Syntax_matchesNull(v___x_1817_, v___x_483_);
if (v___x_1869_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1817_;
v_____discr_1319_ = v_P_1818_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v_ty_1875_; lean_object* v___x_1876_; lean_object* v_xs_1877_; 
lean_dec(v___x_1817_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1870_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1871_ = l_Array_extract___redArg(v___x_1870_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1870_);
v___x_1872_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1873_ = lean_box(2);
v___x_1874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
lean_ctor_set(v___x_1874_, 1, v___x_1872_);
lean_ctor_set(v___x_1874_, 2, v___x_1871_);
v_ty_1875_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1876_ = l_Lean_Syntax_getArgs(v___x_1874_);
lean_dec_ref_known(v___x_1874_, 3);
v_xs_1877_ = l_unsafeCast___redArg(v___x_1876_);
lean_dec_ref(v___x_1876_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1877_;
v_ty_1254_ = v_ty_1875_;
v_P_1255_ = v_P_1818_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
else
{
lean_object* v___x_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; 
v___x_1883_ = lean_unsigned_to_nat(4u);
v___x_1884_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1735_);
lean_inc(v___x_1884_);
v___x_1885_ = l_Lean_Syntax_matchesNull(v___x_1884_, v___x_483_);
if (v___x_1885_ == 0)
{
lean_object* v_P_1886_; uint8_t v___x_1940_; 
v_P_1886_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1883_);
lean_dec(v___x_485_);
lean_inc(v___x_1571_);
v___x_1940_ = l_Lean_Syntax_matchesNull(v___x_1571_, v___x_484_);
if (v___x_1940_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; uint8_t v___x_1942_; 
v___x_1941_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1942_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1931_;
}
}
else
{
goto v___jp_1931_;
}
}
}
else
{
if (v___x_1885_ == 0)
{
lean_object* v___x_1943_; uint8_t v___x_1944_; 
v___x_1943_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1944_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1943_);
if (v___x_1944_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
if (v___x_1944_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1887_;
}
}
else
{
goto v___jp_1887_;
}
}
}
else
{
goto v___jp_1923_;
}
}
else
{
goto v___jp_1923_;
}
}
v___jp_1887_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v_ty_1893_; lean_object* v___x_1894_; lean_object* v_xs_1895_; 
lean_dec(v___x_1884_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1888_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1889_ = l_Array_extract___redArg(v___x_1888_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1888_);
v___x_1890_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1891_ = lean_box(2);
v___x_1892_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
lean_ctor_set(v___x_1892_, 1, v___x_1890_);
lean_ctor_set(v___x_1892_, 2, v___x_1889_);
v_ty_1893_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1894_ = l_Lean_Syntax_getArgs(v___x_1892_);
lean_dec_ref_known(v___x_1892_, 3);
v_xs_1895_ = l_unsafeCast___redArg(v___x_1894_);
lean_dec_ref(v___x_1894_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1895_;
v_ty_1254_ = v_ty_1893_;
v_P_1255_ = v_P_1886_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1896_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v_ty_1902_; lean_object* v___x_1903_; lean_object* v_xs_1904_; 
lean_dec(v___x_1884_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1897_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1898_ = l_Array_extract___redArg(v___x_1897_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1897_);
v___x_1899_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1900_ = lean_box(2);
v___x_1901_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
lean_ctor_set(v___x_1901_, 1, v___x_1899_);
lean_ctor_set(v___x_1901_, 2, v___x_1898_);
v_ty_1902_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1903_ = l_Lean_Syntax_getArgs(v___x_1901_);
lean_dec_ref_known(v___x_1901_, 3);
v_xs_1904_ = l_unsafeCast___redArg(v___x_1903_);
lean_dec_ref(v___x_1903_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1904_;
v_ty_1254_ = v_ty_1902_;
v_P_1255_ = v_P_1886_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1905_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v_ty_1911_; lean_object* v___x_1912_; lean_object* v_xs_1913_; 
lean_dec(v___x_1884_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1906_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1907_ = l_Array_extract___redArg(v___x_1906_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1906_);
v___x_1908_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1909_ = lean_box(2);
v___x_1910_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
lean_ctor_set(v___x_1910_, 1, v___x_1908_);
lean_ctor_set(v___x_1910_, 2, v___x_1907_);
v_ty_1911_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1912_ = l_Lean_Syntax_getArgs(v___x_1910_);
lean_dec_ref_known(v___x_1910_, 3);
v_xs_1913_ = l_unsafeCast___redArg(v___x_1912_);
lean_dec_ref(v___x_1912_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1913_;
v_ty_1254_ = v_ty_1911_;
v_P_1255_ = v_P_1886_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1914_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v_ty_1920_; lean_object* v___x_1921_; lean_object* v_xs_1922_; 
lean_dec(v___x_1884_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1915_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1916_ = l_Array_extract___redArg(v___x_1915_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1915_);
v___x_1917_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1918_ = lean_box(2);
v___x_1919_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1918_);
lean_ctor_set(v___x_1919_, 1, v___x_1917_);
lean_ctor_set(v___x_1919_, 2, v___x_1916_);
v_ty_1920_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1921_ = l_Lean_Syntax_getArgs(v___x_1919_);
lean_dec_ref_known(v___x_1919_, 3);
v_xs_1922_ = l_unsafeCast___redArg(v___x_1921_);
lean_dec_ref(v___x_1921_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1922_;
v_ty_1254_ = v_ty_1920_;
v_P_1255_ = v_P_1886_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
v___jp_1923_:
{
if (v___x_1737_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1737_ == 0)
{
lean_object* v___x_1924_; uint8_t v___x_1925_; 
v___x_1924_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1925_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1924_);
if (v___x_1925_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1896_;
}
}
else
{
goto v___jp_1896_;
}
}
}
else
{
if (v___x_1815_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_object* v___x_1926_; uint8_t v___x_1927_; 
v___x_1926_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1927_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1926_);
if (v___x_1927_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1905_;
}
}
else
{
goto v___jp_1905_;
}
}
}
else
{
if (v___x_1885_ == 0)
{
if (v___x_1573_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
lean_object* v___x_1928_; uint8_t v___x_1929_; 
v___x_1928_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1650_);
v___x_1929_ = l_Lean_Syntax_isOfKind(v_x_1650_, v___x_1928_);
if (v___x_1929_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
goto v___jp_1914_;
}
}
else
{
goto v___jp_1914_;
}
}
}
else
{
lean_object* v_ty_1930_; 
lean_dec(v___x_1884_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_ty_1930_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v_x_1199_ = v_x_1650_;
v_ty_1200_ = v_ty_1930_;
v_P_1201_ = v_P_1886_;
v___y_1202_ = v_a_473_;
v___y_1203_ = v_a_474_;
goto v___jp_1198_;
}
}
}
}
v___jp_1931_:
{
if (v___x_1737_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1815_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
if (v___x_1885_ == 0)
{
lean_dec(v___x_1736_);
lean_dec(v_x_1650_);
lean_dec(v___x_1572_);
lean_dec(v___x_1571_);
v_____discr_1318_ = v___x_1884_;
v_____discr_1319_ = v_P_1886_;
v___y_1320_ = v_a_473_;
v___y_1321_ = v_a_474_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v_ty_1937_; lean_object* v___x_1938_; lean_object* v_xs_1939_; 
lean_dec(v___x_1884_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___x_1932_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1933_ = l_Array_extract___redArg(v___x_1932_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1932_);
v___x_1934_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1935_ = lean_box(2);
v___x_1936_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1935_);
lean_ctor_set(v___x_1936_, 1, v___x_1934_);
lean_ctor_set(v___x_1936_, 2, v___x_1933_);
v_ty_1937_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1938_ = l_Lean_Syntax_getArgs(v___x_1936_);
lean_dec_ref_known(v___x_1936_, 3);
v_xs_1939_ = l_unsafeCast___redArg(v___x_1938_);
lean_dec_ref(v___x_1938_);
v_x_1252_ = v_x_1650_;
v_xs_1253_ = v_xs_1939_;
v_ty_1254_ = v_ty_1937_;
v_P_1255_ = v_P_1886_;
v___y_1256_ = v_a_473_;
v___y_1257_ = v_a_474_;
goto v___jp_1251_;
}
}
}
}
}
else
{
lean_object* v_quotContext_1945_; lean_object* v_currMacroScope_1946_; lean_object* v_ref_1947_; lean_object* v_tk_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v_xs_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
lean_dec(v___x_1884_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_quotContext_1945_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_1946_ = lean_ctor_get(v_a_473_, 2);
v_ref_1947_ = lean_ctor_get(v_a_473_, 5);
v_tk_1948_ = l_Lean_Syntax_getArg(v_x_1650_, v___x_483_);
lean_dec(v_x_1650_);
v___x_1949_ = l_Lean_Syntax_getArgs(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1950_ = l_Array_extract___redArg(v___x_1949_, v___x_484_, v___x_1572_);
lean_dec_ref(v___x_1949_);
v___x_1951_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1952_ = lean_box(2);
v___x_1953_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
lean_ctor_set(v___x_1953_, 1, v___x_1951_);
lean_ctor_set(v___x_1953_, 2, v___x_1950_);
v___x_1954_ = l_Lean_Syntax_getArg(v___x_1736_, v___x_484_);
lean_dec(v___x_1736_);
v___x_1955_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1883_);
lean_dec(v___x_485_);
v___x_1956_ = l_Lean_Syntax_getArgs(v___x_1953_);
lean_dec_ref_known(v___x_1953_, 3);
v_xs_1957_ = l_unsafeCast___redArg(v___x_1956_);
lean_dec_ref(v___x_1956_);
v___x_1958_ = l_Lean_SourceInfo_fromRef(v_ref_1947_, v___x_1197_);
v___x_1959_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1960_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_1961_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_1946_, 2);
lean_inc_n(v_quotContext_1945_, 2);
v___x_1962_ = l_Lean_addMacroScope(v_quotContext_1945_, v___x_1961_, v_currMacroScope_1946_);
v___x_1963_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_1958_, 27);
v___x_1964_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1958_);
lean_ctor_set(v___x_1964_, 1, v___x_1960_);
lean_ctor_set(v___x_1964_, 2, v___x_1962_);
lean_ctor_set(v___x_1964_, 3, v___x_1963_);
v___x_1965_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_1966_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1967_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_1968_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1958_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_1970_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_1971_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_1972_ = l_Lean_addMacroScope(v_quotContext_1945_, v___x_1971_, v_currMacroScope_1946_);
v___x_1973_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1974_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1958_);
lean_ctor_set(v___x_1974_, 1, v___x_1970_);
lean_ctor_set(v___x_1974_, 2, v___x_1972_);
lean_ctor_set(v___x_1974_, 3, v___x_1973_);
v___x_1975_ = l_Lean_Syntax_node1(v___x_1958_, v___x_1969_, v___x_1974_);
lean_inc_ref(v___x_1968_);
v___x_1976_ = l_Lean_Syntax_node2(v___x_1958_, v___x_1966_, v___x_1968_, v___x_1975_);
v___x_1977_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_1978_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1979_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1958_);
lean_ctor_set(v___x_1979_, 1, v___x_1977_);
v___x_1980_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1981_ = l_Lean_SourceInfo_fromRef(v_tk_1948_, v___x_850_);
lean_dec(v_tk_1948_);
v___x_1982_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64));
v___x_1983_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1981_);
lean_ctor_set(v___x_1983_, 1, v___x_1982_);
v___x_1984_ = l_Lean_Syntax_node1(v___x_1958_, v___x_1196_, v___x_1983_);
v___x_1985_ = l_Lean_Syntax_node1(v___x_1958_, v___x_1951_, v___x_1984_);
v___x_1986_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1987_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_1988_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1958_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
lean_inc(v___x_1954_);
lean_inc_ref(v___x_1988_);
v___x_1989_ = l_Lean_Syntax_node2(v___x_1958_, v___x_1986_, v___x_1988_, v___x_1954_);
v___x_1990_ = l_Lean_Syntax_node1(v___x_1958_, v___x_1951_, v___x_1989_);
v___x_1991_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_1992_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1958_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
v___x_1993_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1958_);
lean_ctor_set(v___x_1994_, 1, v___x_1993_);
v___x_1995_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_1996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1958_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
v___x_1997_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_1998_ = l_unsafeCast___redArg(v_xs_1957_);
lean_dec(v_xs_1957_);
v___x_1999_ = l_Array_append___redArg(v___x_1997_, v___x_1998_);
lean_dec(v___x_1998_);
v___x_2000_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1958_);
lean_ctor_set(v___x_2000_, 1, v___x_1951_);
lean_ctor_set(v___x_2000_, 2, v___x_1999_);
v___x_2001_ = l_Lean_Syntax_node2(v___x_1958_, v___x_1951_, v___x_1988_, v___x_1954_);
v___x_2002_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2002_, 0, v___x_1958_);
lean_ctor_set(v___x_2002_, 1, v___x_1951_);
lean_ctor_set(v___x_2002_, 2, v___x_1997_);
v___x_2003_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_1958_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
lean_inc_ref_n(v___x_2004_, 2);
lean_inc_ref(v___x_2002_);
v___x_2005_ = l_Lean_Syntax_node5(v___x_1958_, v___x_1250_, v___x_1968_, v___x_2000_, v___x_2001_, v___x_2002_, v___x_2004_);
v___x_2006_ = l_Lean_Syntax_node1(v___x_1958_, v___x_1951_, v___x_2005_);
v___x_2007_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_2008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_1958_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = l_Lean_Syntax_node5(v___x_1958_, v___x_498_, v___x_1996_, v___x_2006_, v___x_2002_, v___x_2008_, v___x_1955_);
v___x_2010_ = l_Lean_Syntax_node3(v___x_1958_, v___x_479_, v___x_1994_, v___x_2009_, v___x_2004_);
v___x_2011_ = l_Lean_Syntax_node4(v___x_1958_, v___x_1980_, v___x_1985_, v___x_1990_, v___x_1992_, v___x_2010_);
v___x_2012_ = l_Lean_Syntax_node2(v___x_1958_, v___x_1978_, v___x_1979_, v___x_2011_);
v___x_2013_ = l_Lean_Syntax_node3(v___x_1958_, v___x_1965_, v___x_1976_, v___x_2012_, v___x_2004_);
v___x_2014_ = l_Lean_Syntax_node1(v___x_1958_, v___x_1951_, v___x_2013_);
v___x_2015_ = l_Lean_Syntax_node2(v___x_1958_, v___x_1959_, v___x_1964_, v___x_2014_);
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
lean_ctor_set(v___x_2016_, 1, v_a_474_);
return v___x_2016_;
}
}
}
}
}
}
v___jp_1251_:
{
lean_object* v_quotContext_1258_; lean_object* v_currMacroScope_1259_; lean_object* v_ref_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_quotContext_1258_ = lean_ctor_get(v___y_1256_, 1);
v_currMacroScope_1259_ = lean_ctor_get(v___y_1256_, 2);
v_ref_1260_ = lean_ctor_get(v___y_1256_, 5);
v___x_1261_ = l_Lean_SourceInfo_fromRef(v_ref_1260_, v___x_1197_);
v___x_1262_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1263_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_1264_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_1259_, 2);
lean_inc_n(v_quotContext_1258_, 2);
v___x_1265_ = l_Lean_addMacroScope(v_quotContext_1258_, v___x_1264_, v_currMacroScope_1259_);
v___x_1266_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_1261_, 26);
v___x_1267_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1261_);
lean_ctor_set(v___x_1267_, 1, v___x_1263_);
lean_ctor_set(v___x_1267_, 2, v___x_1265_);
lean_ctor_set(v___x_1267_, 3, v___x_1266_);
v___x_1268_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1269_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_1270_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1271_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_1272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1261_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_1274_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_1275_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_1276_ = l_Lean_addMacroScope(v_quotContext_1258_, v___x_1275_, v_currMacroScope_1259_);
v___x_1277_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1278_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1261_);
lean_ctor_set(v___x_1278_, 1, v___x_1274_);
lean_ctor_set(v___x_1278_, 2, v___x_1276_);
lean_ctor_set(v___x_1278_, 3, v___x_1277_);
v___x_1279_ = l_Lean_Syntax_node1(v___x_1261_, v___x_1273_, v___x_1278_);
lean_inc_ref(v___x_1272_);
v___x_1280_ = l_Lean_Syntax_node2(v___x_1261_, v___x_1270_, v___x_1272_, v___x_1279_);
v___x_1281_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_1282_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1261_);
lean_ctor_set(v___x_1283_, 1, v___x_1281_);
v___x_1284_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1285_ = l_Lean_Syntax_node1(v___x_1261_, v___x_1268_, v_x_1252_);
v___x_1286_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1287_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_1288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1261_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
lean_inc(v_ty_1254_);
lean_inc_ref(v___x_1288_);
v___x_1289_ = l_Lean_Syntax_node2(v___x_1261_, v___x_1286_, v___x_1288_, v_ty_1254_);
v___x_1290_ = l_Lean_Syntax_node1(v___x_1261_, v___x_1268_, v___x_1289_);
v___x_1291_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_1292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1261_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1261_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_1296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1261_);
lean_ctor_set(v___x_1296_, 1, v___x_1295_);
v___x_1297_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_1298_ = l_unsafeCast___redArg(v_xs_1253_);
lean_dec_ref(v_xs_1253_);
v___x_1299_ = l_Array_append___redArg(v___x_1297_, v___x_1298_);
lean_dec(v___x_1298_);
v___x_1300_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1261_);
lean_ctor_set(v___x_1300_, 1, v___x_1268_);
lean_ctor_set(v___x_1300_, 2, v___x_1299_);
v___x_1301_ = l_Lean_Syntax_node2(v___x_1261_, v___x_1268_, v___x_1288_, v_ty_1254_);
v___x_1302_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1261_);
lean_ctor_set(v___x_1302_, 1, v___x_1268_);
lean_ctor_set(v___x_1302_, 2, v___x_1297_);
v___x_1303_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1304_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1261_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
lean_inc_ref_n(v___x_1304_, 2);
lean_inc_ref(v___x_1302_);
v___x_1305_ = l_Lean_Syntax_node5(v___x_1261_, v___x_1250_, v___x_1272_, v___x_1300_, v___x_1301_, v___x_1302_, v___x_1304_);
v___x_1306_ = l_Lean_Syntax_node1(v___x_1261_, v___x_1268_, v___x_1305_);
v___x_1307_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_1308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1261_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = l_Lean_Syntax_node5(v___x_1261_, v___x_498_, v___x_1296_, v___x_1306_, v___x_1302_, v___x_1308_, v_P_1255_);
v___x_1310_ = l_Lean_Syntax_node3(v___x_1261_, v___x_479_, v___x_1294_, v___x_1309_, v___x_1304_);
v___x_1311_ = l_Lean_Syntax_node4(v___x_1261_, v___x_1284_, v___x_1285_, v___x_1290_, v___x_1292_, v___x_1310_);
v___x_1312_ = l_Lean_Syntax_node2(v___x_1261_, v___x_1282_, v___x_1283_, v___x_1311_);
v___x_1313_ = l_Lean_Syntax_node3(v___x_1261_, v___x_1269_, v___x_1280_, v___x_1312_, v___x_1304_);
v___x_1314_ = l_Lean_Syntax_node1(v___x_1261_, v___x_1268_, v___x_1313_);
v___x_1315_ = l_Lean_Syntax_node2(v___x_1261_, v___x_1262_, v___x_1267_, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v___y_1257_);
return v___x_1316_;
}
v___jp_1317_:
{
lean_object* v___x_1322_; uint8_t v___x_1323_; 
v___x_1322_ = l_Lean_Syntax_getNumArgs(v___x_849_);
v___x_1323_ = lean_nat_dec_le(v___x_484_, v___x_1322_);
if (v___x_1323_ == 0)
{
lean_dec(v___x_1322_);
lean_dec(v_____discr_1319_);
lean_dec(v_____discr_1318_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1321_;
goto v___jp_475_;
}
else
{
if (v___x_1197_ == 0)
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1032_);
v___x_1325_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_1324_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; 
lean_inc(v_x_1032_);
v___x_1326_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_1250_);
if (v___x_1326_ == 0)
{
lean_dec(v___x_1322_);
lean_dec(v_____discr_1319_);
lean_dec(v_____discr_1318_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1321_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1327_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_484_);
lean_inc(v___x_1327_);
v___x_1328_ = l_Lean_Syntax_matchesNull(v___x_1327_, v___x_484_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1329_ = l_Lean_Syntax_getNumArgs(v___x_1327_);
v___x_1330_ = lean_nat_dec_le(v___x_484_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_dec(v___x_1329_);
lean_dec(v___x_1327_);
lean_dec(v___x_1322_);
lean_dec(v_____discr_1319_);
lean_dec(v_____discr_1318_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1321_;
goto v___jp_475_;
}
else
{
lean_object* v_x_1331_; 
v_x_1331_ = l_Lean_Syntax_getArg(v___x_1327_, v___x_483_);
if (v___x_1328_ == 0)
{
uint8_t v___x_1332_; 
lean_inc(v_x_1331_);
v___x_1332_ = l_Lean_Syntax_isOfKind(v_x_1331_, v___x_1324_);
if (v___x_1332_ == 0)
{
lean_dec(v_x_1331_);
lean_dec(v___x_1329_);
lean_dec(v___x_1327_);
lean_dec(v___x_1322_);
lean_dec(v_____discr_1319_);
lean_dec(v_____discr_1318_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1321_;
goto v___jp_475_;
}
else
{
v___y_1048_ = v_x_1331_;
v___y_1049_ = v_____discr_1318_;
v___y_1050_ = v___y_1320_;
v___y_1051_ = v___x_1322_;
v___y_1052_ = v___x_1327_;
v___y_1053_ = v___y_1321_;
v___y_1054_ = v_____discr_1319_;
v___y_1055_ = v___x_1329_;
goto v___jp_1047_;
}
}
else
{
v___y_1048_ = v_x_1331_;
v___y_1049_ = v_____discr_1318_;
v___y_1050_ = v___y_1320_;
v___y_1051_ = v___x_1322_;
v___y_1052_ = v___x_1327_;
v___y_1053_ = v___y_1321_;
v___y_1054_ = v_____discr_1319_;
v___y_1055_ = v___x_1329_;
goto v___jp_1047_;
}
}
}
else
{
lean_object* v_x_1333_; 
v_x_1333_ = l_Lean_Syntax_getArg(v___x_1327_, v___x_483_);
if (v___x_1197_ == 0)
{
uint8_t v___x_1334_; 
lean_inc(v_x_1333_);
v___x_1334_ = l_Lean_Syntax_isOfKind(v_x_1333_, v___x_1324_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = l_Lean_Syntax_getNumArgs(v___x_1327_);
v___x_1336_ = lean_nat_dec_le(v___x_484_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_dec(v___x_1335_);
lean_dec(v_x_1333_);
lean_dec(v___x_1327_);
lean_dec(v___x_1322_);
lean_dec(v_____discr_1319_);
lean_dec(v_____discr_1318_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1321_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1337_ = lean_unsigned_to_nat(2u);
v___x_1338_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1337_);
v___x_1339_ = lean_unsigned_to_nat(3u);
v___x_1340_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1339_);
lean_dec(v_x_1032_);
v___x_1341_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1342_ = l_Array_extract___redArg(v___x_1341_, v___x_484_, v___x_1322_);
lean_dec_ref(v___x_1341_);
v___x_1343_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1344_ = lean_box(2);
v___x_1345_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
lean_ctor_set(v___x_1345_, 1, v___x_1343_);
lean_ctor_set(v___x_1345_, 2, v___x_1342_);
if (v___x_1197_ == 0)
{
if (v___x_1334_ == 0)
{
lean_dec_ref_known(v___x_1345_, 3);
lean_dec(v___x_1340_);
lean_dec(v___x_1338_);
lean_dec(v___x_1335_);
lean_dec(v_x_1333_);
lean_dec(v___x_1327_);
lean_dec(v_____discr_1319_);
lean_dec(v_____discr_1318_);
v___y_476_ = v___y_1321_;
goto v___jp_475_;
}
else
{
v___y_759_ = v___x_1335_;
v___y_760_ = v___x_1344_;
v___y_761_ = v___x_1340_;
v___y_762_ = v___x_1345_;
v___y_763_ = v_x_1333_;
v___y_764_ = v___x_1337_;
v___y_765_ = v_____discr_1319_;
v___y_766_ = v___x_1338_;
v___y_767_ = v_____discr_1318_;
v___y_768_ = v___y_1320_;
v___y_769_ = v___x_1343_;
v___y_770_ = v___x_1327_;
v___y_771_ = v___y_1321_;
goto v___jp_758_;
}
}
else
{
v___y_759_ = v___x_1335_;
v___y_760_ = v___x_1344_;
v___y_761_ = v___x_1340_;
v___y_762_ = v___x_1345_;
v___y_763_ = v_x_1333_;
v___y_764_ = v___x_1337_;
v___y_765_ = v_____discr_1319_;
v___y_766_ = v___x_1338_;
v___y_767_ = v_____discr_1318_;
v___y_768_ = v___y_1320_;
v___y_769_ = v___x_1343_;
v___y_770_ = v___x_1327_;
v___y_771_ = v___y_1321_;
goto v___jp_758_;
}
}
}
else
{
v___y_1077_ = v_____discr_1318_;
v___y_1078_ = v___y_1320_;
v___y_1079_ = v___x_1324_;
v___y_1080_ = v___x_1322_;
v___y_1081_ = v___x_1327_;
v___y_1082_ = v_x_1333_;
v___y_1083_ = v___y_1321_;
v___y_1084_ = v_____discr_1319_;
goto v___jp_1076_;
}
}
else
{
v___y_1077_ = v_____discr_1318_;
v___y_1078_ = v___y_1320_;
v___y_1079_ = v___x_1324_;
v___y_1080_ = v___x_1322_;
v___y_1081_ = v___x_1327_;
v___y_1082_ = v_x_1333_;
v___y_1083_ = v___y_1321_;
v___y_1084_ = v_____discr_1319_;
goto v___jp_1076_;
}
}
}
}
else
{
v___y_1034_ = v_____discr_1318_;
v___y_1035_ = v___y_1320_;
v___y_1036_ = v___x_1322_;
v___y_1037_ = v___y_1321_;
v___y_1038_ = v_____discr_1319_;
goto v___jp_1033_;
}
}
else
{
v___y_1034_ = v_____discr_1318_;
v___y_1035_ = v___y_1320_;
v___y_1036_ = v___x_1322_;
v___y_1037_ = v___y_1321_;
v___y_1038_ = v_____discr_1319_;
goto v___jp_1033_;
}
}
}
v___jp_1347_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1348_ = lean_unsigned_to_nat(2u);
v___x_1349_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1348_);
v___x_1350_ = l_Lean_Syntax_matchesNull(v___x_1349_, v___x_483_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = l_Lean_Syntax_getNumArgs(v___x_849_);
v___x_1352_ = lean_nat_dec_le(v___x_484_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_dec(v___x_1351_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1353_; lean_object* v_P_1354_; 
v___x_1353_ = lean_unsigned_to_nat(4u);
v_P_1354_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1353_);
lean_dec(v___x_485_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1355_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1032_);
v___x_1356_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_1355_);
if (v___x_1356_ == 0)
{
if (v___x_1346_ == 0)
{
lean_dec(v_P_1354_);
lean_dec(v___x_1351_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1357_ = lean_unsigned_to_nat(3u);
v___x_1358_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_484_);
lean_inc(v___x_1358_);
v___x_1359_ = l_Lean_Syntax_matchesNull(v___x_1358_, v___x_484_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = l_Lean_Syntax_getNumArgs(v___x_1358_);
v___x_1361_ = lean_nat_dec_le(v___x_484_, v___x_1360_);
if (v___x_1361_ == 0)
{
lean_dec(v___x_1360_);
lean_dec(v___x_1358_);
lean_dec(v_P_1354_);
lean_dec(v___x_1351_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_x_1362_; 
v_x_1362_ = l_Lean_Syntax_getArg(v___x_1358_, v___x_483_);
if (v___x_1359_ == 0)
{
uint8_t v___x_1363_; 
lean_inc(v_x_1362_);
v___x_1363_ = l_Lean_Syntax_isOfKind(v_x_1362_, v___x_1355_);
if (v___x_1363_ == 0)
{
lean_dec(v_x_1362_);
lean_dec(v___x_1360_);
lean_dec(v___x_1358_);
lean_dec(v_P_1354_);
lean_dec(v___x_1351_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_1133_ = v___x_1351_;
v___y_1134_ = v___x_1360_;
v___y_1135_ = v_P_1354_;
v___y_1136_ = v_x_1362_;
v___y_1137_ = v___x_1358_;
v___y_1138_ = v___x_1357_;
v___y_1139_ = v___x_1350_;
v___y_1140_ = v___x_1348_;
goto v___jp_1132_;
}
}
else
{
v___y_1133_ = v___x_1351_;
v___y_1134_ = v___x_1360_;
v___y_1135_ = v_P_1354_;
v___y_1136_ = v_x_1362_;
v___y_1137_ = v___x_1358_;
v___y_1138_ = v___x_1357_;
v___y_1139_ = v___x_1350_;
v___y_1140_ = v___x_1348_;
goto v___jp_1132_;
}
}
}
else
{
lean_object* v_x_1364_; 
v_x_1364_ = l_Lean_Syntax_getArg(v___x_1358_, v___x_483_);
if (v___x_1350_ == 0)
{
uint8_t v___x_1365_; 
lean_inc(v_x_1364_);
v___x_1365_ = l_Lean_Syntax_isOfKind(v_x_1364_, v___x_1355_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = l_Lean_Syntax_getNumArgs(v___x_1358_);
v___x_1367_ = lean_nat_dec_le(v___x_484_, v___x_1366_);
if (v___x_1367_ == 0)
{
lean_dec(v___x_1366_);
lean_dec(v_x_1364_);
lean_dec(v___x_1358_);
lean_dec(v_P_1354_);
lean_dec(v___x_1351_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1368_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1348_);
v___x_1369_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1357_);
lean_dec(v_x_1032_);
v___x_1370_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1371_ = l_Array_extract___redArg(v___x_1370_, v___x_484_, v___x_1351_);
lean_dec_ref(v___x_1370_);
v___x_1372_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1373_ = lean_box(2);
v___x_1374_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___x_1372_);
lean_ctor_set(v___x_1374_, 2, v___x_1371_);
if (v___x_1350_ == 0)
{
if (v___x_1365_ == 0)
{
lean_dec_ref_known(v___x_1374_, 3);
lean_dec(v___x_1369_);
lean_dec(v___x_1368_);
lean_dec(v___x_1366_);
lean_dec(v_x_1364_);
lean_dec(v___x_1358_);
lean_dec(v_P_1354_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_825_ = v_P_1354_;
v___y_826_ = v_x_1364_;
v___y_827_ = v___x_1368_;
v___y_828_ = v___x_1372_;
v___y_829_ = v___x_1358_;
v___y_830_ = v___x_1373_;
v___y_831_ = v___x_1366_;
v___y_832_ = v___x_1374_;
v___y_833_ = v___x_1350_;
v___y_834_ = v___x_1369_;
v___y_835_ = v___x_1348_;
goto v___jp_824_;
}
}
else
{
v___y_825_ = v_P_1354_;
v___y_826_ = v_x_1364_;
v___y_827_ = v___x_1368_;
v___y_828_ = v___x_1372_;
v___y_829_ = v___x_1358_;
v___y_830_ = v___x_1373_;
v___y_831_ = v___x_1366_;
v___y_832_ = v___x_1374_;
v___y_833_ = v___x_1350_;
v___y_834_ = v___x_1369_;
v___y_835_ = v___x_1348_;
goto v___jp_824_;
}
}
}
else
{
v___y_1159_ = v___x_1355_;
v___y_1160_ = v___x_1351_;
v___y_1161_ = v_x_1364_;
v___y_1162_ = v_P_1354_;
v___y_1163_ = v___x_1358_;
v___y_1164_ = v___x_1357_;
v___y_1165_ = v___x_1350_;
v___y_1166_ = v___x_1348_;
goto v___jp_1158_;
}
}
else
{
v___y_1159_ = v___x_1355_;
v___y_1160_ = v___x_1351_;
v___y_1161_ = v_x_1364_;
v___y_1162_ = v_P_1354_;
v___y_1163_ = v___x_1358_;
v___y_1164_ = v___x_1357_;
v___y_1165_ = v___x_1350_;
v___y_1166_ = v___x_1348_;
goto v___jp_1158_;
}
}
}
}
else
{
v___y_1122_ = v___x_1351_;
v___y_1123_ = v_P_1354_;
v___y_1124_ = v___x_1350_;
goto v___jp_1121_;
}
}
else
{
v___y_1122_ = v___x_1351_;
v___y_1123_ = v_P_1354_;
v___y_1124_ = v___x_1350_;
goto v___jp_1121_;
}
}
}
else
{
lean_object* v_quotContext_1375_; lean_object* v_currMacroScope_1376_; lean_object* v_ref_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec(v___x_849_);
v_quotContext_1375_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_1376_ = lean_ctor_get(v_a_473_, 2);
v_ref_1377_ = lean_ctor_get(v_a_473_, 5);
v___x_1378_ = lean_unsigned_to_nat(4u);
v___x_1379_ = l_Lean_Syntax_getArg(v___x_485_, v___x_1378_);
lean_dec(v___x_485_);
v___x_1380_ = l_Lean_SourceInfo_fromRef(v_ref_1377_, v___x_1346_);
v___x_1381_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1382_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_1383_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_1376_, 2);
lean_inc_n(v_quotContext_1375_, 2);
v___x_1384_ = l_Lean_addMacroScope(v_quotContext_1375_, v___x_1383_, v_currMacroScope_1376_);
v___x_1385_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_1380_, 16);
v___x_1386_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1380_);
lean_ctor_set(v___x_1386_, 1, v___x_1382_);
lean_ctor_set(v___x_1386_, 2, v___x_1384_);
lean_ctor_set(v___x_1386_, 3, v___x_1385_);
v___x_1387_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1388_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_1389_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1390_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_1391_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1380_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
v___x_1392_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_1393_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_1394_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_1395_ = l_Lean_addMacroScope(v_quotContext_1375_, v___x_1394_, v_currMacroScope_1376_);
v___x_1396_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1397_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1380_);
lean_ctor_set(v___x_1397_, 1, v___x_1393_);
lean_ctor_set(v___x_1397_, 2, v___x_1395_);
lean_ctor_set(v___x_1397_, 3, v___x_1396_);
v___x_1398_ = l_Lean_Syntax_node1(v___x_1380_, v___x_1392_, v___x_1397_);
v___x_1399_ = l_Lean_Syntax_node2(v___x_1380_, v___x_1389_, v___x_1391_, v___x_1398_);
v___x_1400_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_1401_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1380_);
lean_ctor_set(v___x_1402_, 1, v___x_1400_);
v___x_1403_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1404_ = l_Lean_Syntax_node1(v___x_1380_, v___x_1387_, v_x_1032_);
v___x_1405_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_1406_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1380_);
lean_ctor_set(v___x_1406_, 1, v___x_1387_);
lean_ctor_set(v___x_1406_, 2, v___x_1405_);
v___x_1407_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_1408_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1380_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1410_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1380_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1412_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1380_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
lean_inc_ref(v___x_1412_);
v___x_1413_ = l_Lean_Syntax_node3(v___x_1380_, v___x_479_, v___x_1410_, v___x_1379_, v___x_1412_);
v___x_1414_ = l_Lean_Syntax_node4(v___x_1380_, v___x_1403_, v___x_1404_, v___x_1406_, v___x_1408_, v___x_1413_);
v___x_1415_ = l_Lean_Syntax_node2(v___x_1380_, v___x_1401_, v___x_1402_, v___x_1414_);
v___x_1416_ = l_Lean_Syntax_node3(v___x_1380_, v___x_1388_, v___x_1399_, v___x_1415_, v___x_1412_);
v___x_1417_ = l_Lean_Syntax_node1(v___x_1380_, v___x_1387_, v___x_1416_);
v___x_1418_ = l_Lean_Syntax_node2(v___x_1380_, v___x_1381_, v___x_1386_, v___x_1417_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
lean_ctor_set(v___x_1419_, 1, v_a_474_);
return v___x_1419_;
}
}
}
else
{
lean_object* v_tk_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v_tk_2017_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_483_);
v___x_2018_ = lean_unsigned_to_nat(2u);
v___x_2019_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2018_);
lean_inc(v___x_2019_);
v___x_2020_ = l_Lean_Syntax_matchesNull(v___x_2019_, v___x_483_);
if (v___x_2020_ == 0)
{
uint8_t v___x_2021_; 
lean_inc(v___x_2019_);
v___x_2021_ = l_Lean_Syntax_matchesNull(v___x_2019_, v___x_484_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; uint8_t v___x_2023_; 
lean_dec(v___x_2019_);
lean_dec(v_tk_2017_);
v___x_2022_ = l_Lean_Syntax_getNumArgs(v___x_849_);
v___x_2023_ = lean_nat_dec_le(v___x_484_, v___x_2022_);
if (v___x_2023_ == 0)
{
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2024_; lean_object* v_P_2025_; 
v___x_2024_ = lean_unsigned_to_nat(4u);
v_P_2025_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2024_);
lean_dec(v___x_485_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2034_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1032_);
v___x_2035_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2036_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59));
lean_inc(v_x_1032_);
v___x_2037_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_2036_);
if (v___x_2037_ == 0)
{
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
v___x_2038_ = lean_unsigned_to_nat(3u);
v___x_2039_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_484_);
lean_inc(v___x_2039_);
v___x_2040_ = l_Lean_Syntax_matchesNull(v___x_2039_, v___x_484_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; uint8_t v___x_2042_; 
v___x_2041_ = l_Lean_Syntax_getNumArgs(v___x_2039_);
v___x_2042_ = lean_nat_dec_le(v___x_484_, v___x_2041_);
if (v___x_2042_ == 0)
{
lean_dec(v___x_2041_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_x_2043_; 
v_x_2043_ = l_Lean_Syntax_getArg(v___x_2039_, v___x_483_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2062_; 
lean_inc(v_x_2043_);
v___x_2062_ = l_Lean_Syntax_isOfKind(v_x_2043_, v___x_2034_);
if (v___x_2062_ == 0)
{
lean_dec(v_x_2043_);
lean_dec(v___x_2041_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_2044_;
}
}
else
{
goto v___jp_2044_;
}
v___jp_2044_:
{
lean_object* v___x_2045_; uint8_t v___x_2046_; 
v___x_2045_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2018_);
lean_inc(v___x_2045_);
v___x_2046_ = l_Lean_Syntax_matchesNull(v___x_2045_, v___x_2018_);
if (v___x_2046_ == 0)
{
lean_dec(v___x_2045_);
lean_dec(v_x_2043_);
lean_dec(v___x_2041_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2047_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2038_);
lean_dec(v_x_1032_);
v___x_2048_ = l_Lean_Syntax_matchesNull(v___x_2047_, v___x_483_);
if (v___x_2048_ == 0)
{
lean_dec(v___x_2045_);
lean_dec(v_x_2043_);
lean_dec(v___x_2041_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___x_2045_);
lean_dec(v_x_2043_);
lean_dec(v___x_2041_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v_ty_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v_ys_2059_; lean_object* v___x_2060_; lean_object* v_xs_2061_; 
v___x_2049_ = l_Lean_Syntax_getArgs(v___x_2039_);
lean_dec(v___x_2039_);
v___x_2050_ = l_Array_extract___redArg(v___x_2049_, v___x_484_, v___x_2041_);
lean_dec_ref(v___x_2049_);
v_ty_2051_ = l_Lean_Syntax_getArg(v___x_2045_, v___x_484_);
lean_dec(v___x_2045_);
v___x_2052_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2053_ = lean_box(2);
v___x_2054_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
lean_ctor_set(v___x_2054_, 1, v___x_2052_);
lean_ctor_set(v___x_2054_, 2, v___x_2050_);
v___x_2055_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2056_ = l_Array_extract___redArg(v___x_2055_, v___x_484_, v___x_2022_);
lean_dec_ref(v___x_2055_);
v___x_2057_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2053_);
lean_ctor_set(v___x_2057_, 1, v___x_2052_);
lean_ctor_set(v___x_2057_, 2, v___x_2056_);
v___x_2058_ = l_Lean_Syntax_getArgs(v___x_2057_);
lean_dec_ref_known(v___x_2057_, 3);
v_ys_2059_ = l_unsafeCast___redArg(v___x_2058_);
lean_dec_ref(v___x_2058_);
v___x_2060_ = l_Lean_Syntax_getArgs(v___x_2054_);
lean_dec_ref_known(v___x_2054_, 3);
v_xs_2061_ = l_unsafeCast___redArg(v___x_2060_);
lean_dec_ref(v___x_2060_);
v_x_620_ = v_x_2043_;
v_xs_621_ = v_xs_2061_;
v_ty_622_ = v_ty_2051_;
v_ys_623_ = v_ys_2059_;
v_P_624_ = v_P_2025_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
lean_object* v_x_2063_; lean_object* v___y_2065_; uint8_t v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2071_; uint8_t v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; uint8_t v___y_2085_; lean_object* v___y_2086_; lean_object* v___y_2087_; lean_object* v___y_2088_; lean_object* v___y_2098_; uint8_t v___y_2099_; lean_object* v___y_2100_; uint8_t v___y_2101_; lean_object* v___y_2102_; lean_object* v___y_2103_; lean_object* v___y_2104_; 
v_x_2063_ = l_Lean_Syntax_getArg(v___x_2039_, v___x_483_);
if (v___x_2021_ == 0)
{
uint8_t v___x_2145_; 
lean_inc(v_x_2063_);
v___x_2145_ = l_Lean_Syntax_isOfKind(v_x_2063_, v___x_2034_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2146_ = l_Lean_Syntax_getNumArgs(v___x_2039_);
v___x_2147_ = lean_nat_dec_le(v___x_484_, v___x_2146_);
if (v___x_2147_ == 0)
{
lean_dec(v___x_2146_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2148_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2018_);
v___x_2149_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2038_);
lean_dec(v_x_1032_);
v___x_2150_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2151_ = l_Array_extract___redArg(v___x_2150_, v___x_484_, v___x_2022_);
lean_dec_ref(v___x_2150_);
v___x_2152_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2153_ = lean_box(2);
v___x_2154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
lean_ctor_set(v___x_2154_, 1, v___x_2152_);
lean_ctor_set(v___x_2154_, 2, v___x_2151_);
if (v___x_2021_ == 0)
{
if (v___x_2145_ == 0)
{
lean_dec_ref_known(v___x_2154_, 3);
lean_dec(v___x_2149_);
lean_dec(v___x_2148_);
lean_dec(v___x_2146_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_2155_;
}
}
else
{
goto v___jp_2155_;
}
v___jp_2155_:
{
uint8_t v___x_2156_; 
lean_inc(v___x_2148_);
v___x_2156_ = l_Lean_Syntax_matchesNull(v___x_2148_, v___x_2018_);
if (v___x_2156_ == 0)
{
lean_dec_ref_known(v___x_2154_, 3);
lean_dec(v___x_2149_);
lean_dec(v___x_2148_);
lean_dec(v___x_2146_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_2157_; 
v___x_2157_ = l_Lean_Syntax_matchesNull(v___x_2149_, v___x_483_);
if (v___x_2157_ == 0)
{
lean_dec_ref_known(v___x_2154_, 3);
lean_dec(v___x_2148_);
lean_dec(v___x_2146_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec_ref_known(v___x_2154_, 3);
lean_dec(v___x_2148_);
lean_dec(v___x_2146_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v_ty_2161_; lean_object* v___x_2162_; lean_object* v_ys_2163_; lean_object* v___x_2164_; lean_object* v_xs_2165_; 
v___x_2158_ = l_Lean_Syntax_getArgs(v___x_2039_);
lean_dec(v___x_2039_);
v___x_2159_ = l_Array_extract___redArg(v___x_2158_, v___x_484_, v___x_2146_);
lean_dec_ref(v___x_2158_);
v___x_2160_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2153_);
lean_ctor_set(v___x_2160_, 1, v___x_2152_);
lean_ctor_set(v___x_2160_, 2, v___x_2159_);
v_ty_2161_ = l_Lean_Syntax_getArg(v___x_2148_, v___x_484_);
lean_dec(v___x_2148_);
v___x_2162_ = l_Lean_Syntax_getArgs(v___x_2154_);
lean_dec_ref_known(v___x_2154_, 3);
v_ys_2163_ = l_unsafeCast___redArg(v___x_2162_);
lean_dec_ref(v___x_2162_);
v___x_2164_ = l_Lean_Syntax_getArgs(v___x_2160_);
lean_dec_ref_known(v___x_2160_, 3);
v_xs_2165_ = l_unsafeCast___redArg(v___x_2164_);
lean_dec_ref(v___x_2164_);
v_x_620_ = v_x_2063_;
v_xs_621_ = v_xs_2165_;
v_ty_622_ = v_ty_2161_;
v_ys_623_ = v_ys_2163_;
v_P_624_ = v_P_2025_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
goto v___jp_2112_;
}
}
else
{
goto v___jp_2112_;
}
v___jp_2064_:
{
if (v___y_2066_ == 0)
{
lean_dec(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec(v___y_2067_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_2072_; 
v___x_2072_ = l_Lean_Syntax_matchesNull(v___y_2071_, v___x_483_);
if (v___x_2072_ == 0)
{
lean_dec(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec(v___y_2067_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec(v___y_2067_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v_ty_2076_; lean_object* v___x_2077_; lean_object* v_ys_2078_; lean_object* v___x_2079_; lean_object* v_xs_2080_; 
v___x_2073_ = l_Lean_Syntax_getArgs(v___x_2039_);
lean_dec(v___x_2039_);
v___x_2074_ = l_Array_extract___redArg(v___x_2073_, v___x_484_, v___y_2070_);
lean_dec_ref(v___x_2073_);
lean_inc(v___y_2068_);
lean_inc(v___y_2065_);
v___x_2075_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2075_, 0, v___y_2065_);
lean_ctor_set(v___x_2075_, 1, v___y_2068_);
lean_ctor_set(v___x_2075_, 2, v___x_2074_);
v_ty_2076_ = l_Lean_Syntax_getArg(v___y_2069_, v___x_484_);
lean_dec(v___y_2069_);
v___x_2077_ = l_Lean_Syntax_getArgs(v___y_2067_);
lean_dec(v___y_2067_);
v_ys_2078_ = l_unsafeCast___redArg(v___x_2077_);
lean_dec_ref(v___x_2077_);
v___x_2079_ = l_Lean_Syntax_getArgs(v___x_2075_);
lean_dec_ref_known(v___x_2075_, 3);
v_xs_2080_ = l_unsafeCast___redArg(v___x_2079_);
lean_dec_ref(v___x_2079_);
v_x_620_ = v_x_2063_;
v_xs_621_ = v_xs_2080_;
v_ty_622_ = v_ty_2076_;
v_ys_623_ = v_ys_2078_;
v_P_624_ = v_P_2025_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_2081_:
{
if (v___y_2082_ == 0)
{
lean_dec(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec(v___y_2084_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_2085_ == 0)
{
lean_dec(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec(v___y_2084_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec(v___y_2084_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v_ty_2092_; lean_object* v___x_2093_; lean_object* v_ys_2094_; lean_object* v___x_2095_; lean_object* v_xs_2096_; 
v___x_2089_ = l_Lean_Syntax_getArgs(v___x_2039_);
lean_dec(v___x_2039_);
v___x_2090_ = l_Array_extract___redArg(v___x_2089_, v___x_484_, v___y_2087_);
lean_dec_ref(v___x_2089_);
lean_inc(v___y_2083_);
lean_inc(v___y_2086_);
v___x_2091_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2091_, 0, v___y_2086_);
lean_ctor_set(v___x_2091_, 1, v___y_2083_);
lean_ctor_set(v___x_2091_, 2, v___x_2090_);
v_ty_2092_ = l_Lean_Syntax_getArg(v___y_2084_, v___x_484_);
lean_dec(v___y_2084_);
v___x_2093_ = l_Lean_Syntax_getArgs(v___y_2088_);
lean_dec(v___y_2088_);
v_ys_2094_ = l_unsafeCast___redArg(v___x_2093_);
lean_dec_ref(v___x_2093_);
v___x_2095_ = l_Lean_Syntax_getArgs(v___x_2091_);
lean_dec_ref_known(v___x_2091_, 3);
v_xs_2096_ = l_unsafeCast___redArg(v___x_2095_);
lean_dec_ref(v___x_2095_);
v_x_620_ = v_x_2063_;
v_xs_621_ = v_xs_2096_;
v_ty_622_ = v_ty_2092_;
v_ys_623_ = v_ys_2094_;
v_P_624_ = v_P_2025_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_2097_:
{
if (v___y_2099_ == 0)
{
lean_dec(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec(v___y_2100_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_2101_ == 0)
{
lean_dec(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec(v___y_2100_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec(v___y_2100_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v_ys_2109_; lean_object* v___x_2110_; lean_object* v_xs_2111_; 
v___x_2105_ = l_Lean_Syntax_getArgs(v___x_2039_);
lean_dec(v___x_2039_);
v___x_2106_ = l_Array_extract___redArg(v___x_2105_, v___x_484_, v___y_2102_);
lean_dec_ref(v___x_2105_);
lean_inc(v___y_2098_);
lean_inc(v___y_2104_);
v___x_2107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2107_, 0, v___y_2104_);
lean_ctor_set(v___x_2107_, 1, v___y_2098_);
lean_ctor_set(v___x_2107_, 2, v___x_2106_);
v___x_2108_ = l_Lean_Syntax_getArgs(v___y_2103_);
lean_dec(v___y_2103_);
v_ys_2109_ = l_unsafeCast___redArg(v___x_2108_);
lean_dec_ref(v___x_2108_);
v___x_2110_ = l_Lean_Syntax_getArgs(v___x_2107_);
lean_dec_ref_known(v___x_2107_, 3);
v_xs_2111_ = l_unsafeCast___redArg(v___x_2110_);
lean_dec_ref(v___x_2110_);
v_x_620_ = v_x_2063_;
v_xs_621_ = v_xs_2111_;
v_ty_622_ = v___y_2100_;
v_ys_623_ = v_ys_2109_;
v_P_624_ = v_P_2025_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_2112_:
{
lean_object* v___x_2113_; uint8_t v___x_2114_; 
v___x_2113_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2018_);
lean_inc(v___x_2113_);
v___x_2114_ = l_Lean_Syntax_matchesNull(v___x_2113_, v___x_2018_);
if (v___x_2114_ == 0)
{
lean_object* v___x_2115_; uint8_t v___x_2116_; 
v___x_2115_ = l_Lean_Syntax_getNumArgs(v___x_2039_);
v___x_2116_ = lean_nat_dec_le(v___x_484_, v___x_2115_);
if (v___x_2116_ == 0)
{
lean_dec(v___x_2115_);
lean_dec(v___x_2113_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2117_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2038_);
lean_dec(v_x_1032_);
v___x_2118_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2119_ = l_Array_extract___redArg(v___x_2118_, v___x_484_, v___x_2022_);
lean_dec_ref(v___x_2118_);
v___x_2120_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2121_ = lean_box(2);
v___x_2122_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
lean_ctor_set(v___x_2122_, 1, v___x_2120_);
lean_ctor_set(v___x_2122_, 2, v___x_2119_);
if (v___x_2114_ == 0)
{
uint8_t v___x_2123_; 
lean_inc(v_x_2063_);
v___x_2123_ = l_Lean_Syntax_isOfKind(v_x_2063_, v___x_2034_);
if (v___x_2123_ == 0)
{
lean_dec_ref_known(v___x_2122_, 3);
lean_dec(v___x_2117_);
lean_dec(v___x_2115_);
lean_dec(v___x_2113_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_2065_ = v___x_2121_;
v___y_2066_ = v___x_2114_;
v___y_2067_ = v___x_2122_;
v___y_2068_ = v___x_2120_;
v___y_2069_ = v___x_2113_;
v___y_2070_ = v___x_2115_;
v___y_2071_ = v___x_2117_;
goto v___jp_2064_;
}
}
else
{
v___y_2065_ = v___x_2121_;
v___y_2066_ = v___x_2114_;
v___y_2067_ = v___x_2122_;
v___y_2068_ = v___x_2120_;
v___y_2069_ = v___x_2113_;
v___y_2070_ = v___x_2115_;
v___y_2071_ = v___x_2117_;
goto v___jp_2064_;
}
}
}
else
{
lean_object* v___x_2124_; uint8_t v___x_2125_; 
v___x_2124_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2038_);
lean_dec(v_x_1032_);
v___x_2125_ = l_Lean_Syntax_matchesNull(v___x_2124_, v___x_483_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; uint8_t v___x_2127_; 
v___x_2126_ = l_Lean_Syntax_getNumArgs(v___x_2039_);
v___x_2127_ = lean_nat_dec_le(v___x_484_, v___x_2126_);
if (v___x_2127_ == 0)
{
lean_dec(v___x_2126_);
lean_dec(v___x_2113_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2128_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2129_ = l_Array_extract___redArg(v___x_2128_, v___x_484_, v___x_2022_);
lean_dec_ref(v___x_2128_);
v___x_2130_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2131_ = lean_box(2);
v___x_2132_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2131_);
lean_ctor_set(v___x_2132_, 1, v___x_2130_);
lean_ctor_set(v___x_2132_, 2, v___x_2129_);
if (v___x_2125_ == 0)
{
uint8_t v___x_2133_; 
lean_inc(v_x_2063_);
v___x_2133_ = l_Lean_Syntax_isOfKind(v_x_2063_, v___x_2034_);
if (v___x_2133_ == 0)
{
lean_dec_ref_known(v___x_2132_, 3);
lean_dec(v___x_2126_);
lean_dec(v___x_2113_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_2082_ = v___x_2114_;
v___y_2083_ = v___x_2130_;
v___y_2084_ = v___x_2113_;
v___y_2085_ = v___x_2125_;
v___y_2086_ = v___x_2131_;
v___y_2087_ = v___x_2126_;
v___y_2088_ = v___x_2132_;
goto v___jp_2081_;
}
}
else
{
v___y_2082_ = v___x_2114_;
v___y_2083_ = v___x_2130_;
v___y_2084_ = v___x_2113_;
v___y_2085_ = v___x_2125_;
v___y_2086_ = v___x_2131_;
v___y_2087_ = v___x_2126_;
v___y_2088_ = v___x_2132_;
goto v___jp_2081_;
}
}
}
else
{
lean_object* v_ty_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v_ty_2134_ = l_Lean_Syntax_getArg(v___x_2113_, v___x_484_);
lean_dec(v___x_2113_);
v___x_2135_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2136_ = l_Array_extract___redArg(v___x_2135_, v___x_484_, v___x_2022_);
lean_dec_ref(v___x_2135_);
v___x_2137_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2138_ = lean_box(2);
v___x_2139_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v___x_2137_);
lean_ctor_set(v___x_2139_, 2, v___x_2136_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = l_Lean_Syntax_getNumArgs(v___x_2039_);
v___x_2141_ = lean_nat_dec_le(v___x_484_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_dec(v___x_2140_);
lean_dec_ref_known(v___x_2139_, 3);
lean_dec(v_ty_2134_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
uint8_t v___x_2142_; 
lean_inc(v_x_2063_);
v___x_2142_ = l_Lean_Syntax_isOfKind(v_x_2063_, v___x_2034_);
if (v___x_2142_ == 0)
{
lean_dec(v___x_2140_);
lean_dec_ref_known(v___x_2139_, 3);
lean_dec(v_ty_2134_);
lean_dec(v_x_2063_);
lean_dec(v___x_2039_);
lean_dec(v_P_2025_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_2098_ = v___x_2137_;
v___y_2099_ = v___x_2114_;
v___y_2100_ = v_ty_2134_;
v___y_2101_ = v___x_2125_;
v___y_2102_ = v___x_2140_;
v___y_2103_ = v___x_2139_;
v___y_2104_ = v___x_2138_;
goto v___jp_2097_;
}
}
else
{
v___y_2098_ = v___x_2137_;
v___y_2099_ = v___x_2114_;
v___y_2100_ = v_ty_2134_;
v___y_2101_ = v___x_2125_;
v___y_2102_ = v___x_2140_;
v___y_2103_ = v___x_2139_;
v___y_2104_ = v___x_2138_;
goto v___jp_2097_;
}
}
}
else
{
lean_object* v___x_2143_; lean_object* v_xs_2144_; 
lean_dec(v___x_2039_);
v___x_2143_ = l_Lean_Syntax_getArgs(v___x_2139_);
lean_dec_ref_known(v___x_2139_, 3);
v_xs_2144_ = l_unsafeCast___redArg(v___x_2143_);
lean_dec_ref(v___x_2143_);
v_x_557_ = v_x_2063_;
v_ty_558_ = v_ty_2134_;
v_xs_559_ = v_xs_2144_;
v_P_560_ = v_P_2025_;
v___y_561_ = v_a_473_;
v___y_562_ = v_a_474_;
goto v___jp_556_;
}
}
}
}
}
}
}
else
{
goto v___jp_2026_;
}
}
else
{
goto v___jp_2026_;
}
v___jp_2026_:
{
if (v___x_2020_ == 0)
{
lean_dec(v_P_2025_);
lean_dec(v___x_2022_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v_xs_2033_; 
v___x_2027_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2028_ = l_Array_extract___redArg(v___x_2027_, v___x_484_, v___x_2022_);
lean_dec_ref(v___x_2027_);
v___x_2029_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2030_ = lean_box(2);
v___x_2031_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
lean_ctor_set(v___x_2031_, 1, v___x_2029_);
lean_ctor_set(v___x_2031_, 2, v___x_2028_);
v___x_2032_ = l_Lean_Syntax_getArgs(v___x_2031_);
lean_dec_ref_known(v___x_2031_, 3);
v_xs_2033_ = l_unsafeCast___redArg(v___x_2032_);
lean_dec_ref(v___x_2032_);
v_x_500_ = v_x_1032_;
v_xs_501_ = v_xs_2033_;
v_P_502_ = v_P_2025_;
v___y_503_ = v_a_473_;
v___y_504_ = v_a_474_;
goto v___jp_499_;
}
}
}
}
else
{
lean_object* v___x_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; 
v___x_2166_ = l_Lean_Syntax_getArg(v___x_2019_, v___x_483_);
lean_dec(v___x_2019_);
v___x_2167_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
lean_inc(v___x_2166_);
v___x_2168_ = l_Lean_Syntax_isOfKind(v___x_2166_, v___x_2167_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2169_; uint8_t v___x_2170_; 
lean_dec(v___x_2166_);
lean_dec(v_tk_2017_);
v___x_2169_ = l_Lean_Syntax_getNumArgs(v___x_849_);
v___x_2170_ = lean_nat_dec_le(v___x_484_, v___x_2169_);
if (v___x_2170_ == 0)
{
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
lean_dec(v___x_485_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2171_; lean_object* v_P_2172_; 
v___x_2171_ = lean_unsigned_to_nat(4u);
v_P_2172_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2171_);
lean_dec(v___x_485_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2181_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_x_1032_);
v___x_2182_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59));
lean_inc(v_x_1032_);
v___x_2184_ = l_Lean_Syntax_isOfKind(v_x_1032_, v___x_2183_);
if (v___x_2184_ == 0)
{
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2185_ = lean_unsigned_to_nat(3u);
v___x_2186_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_484_);
lean_inc(v___x_2186_);
v___x_2187_ = l_Lean_Syntax_matchesNull(v___x_2186_, v___x_484_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; uint8_t v___x_2189_; 
v___x_2188_ = l_Lean_Syntax_getNumArgs(v___x_2186_);
v___x_2189_ = lean_nat_dec_le(v___x_484_, v___x_2188_);
if (v___x_2189_ == 0)
{
lean_dec(v___x_2188_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v_x_2190_; 
v_x_2190_ = l_Lean_Syntax_getArg(v___x_2186_, v___x_483_);
if (v___x_2187_ == 0)
{
uint8_t v___x_2209_; 
lean_inc(v_x_2190_);
v___x_2209_ = l_Lean_Syntax_isOfKind(v_x_2190_, v___x_2181_);
if (v___x_2209_ == 0)
{
lean_dec(v_x_2190_);
lean_dec(v___x_2188_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_2191_;
}
}
else
{
goto v___jp_2191_;
}
v___jp_2191_:
{
lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2192_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2018_);
lean_inc(v___x_2192_);
v___x_2193_ = l_Lean_Syntax_matchesNull(v___x_2192_, v___x_2018_);
if (v___x_2193_ == 0)
{
lean_dec(v___x_2192_);
lean_dec(v_x_2190_);
lean_dec(v___x_2188_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2194_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2185_);
lean_dec(v_x_1032_);
v___x_2195_ = l_Lean_Syntax_matchesNull(v___x_2194_, v___x_483_);
if (v___x_2195_ == 0)
{
lean_dec(v___x_2192_);
lean_dec(v_x_2190_);
lean_dec(v___x_2188_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___x_2192_);
lean_dec(v_x_2190_);
lean_dec(v___x_2188_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v_ty_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v_ys_2206_; lean_object* v___x_2207_; lean_object* v_xs_2208_; 
v___x_2196_ = l_Lean_Syntax_getArgs(v___x_2186_);
lean_dec(v___x_2186_);
v___x_2197_ = l_Array_extract___redArg(v___x_2196_, v___x_484_, v___x_2188_);
lean_dec_ref(v___x_2196_);
v_ty_2198_ = l_Lean_Syntax_getArg(v___x_2192_, v___x_484_);
lean_dec(v___x_2192_);
v___x_2199_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2200_ = lean_box(2);
v___x_2201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
lean_ctor_set(v___x_2201_, 1, v___x_2199_);
lean_ctor_set(v___x_2201_, 2, v___x_2197_);
v___x_2202_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2203_ = l_Array_extract___redArg(v___x_2202_, v___x_484_, v___x_2169_);
lean_dec_ref(v___x_2202_);
v___x_2204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2200_);
lean_ctor_set(v___x_2204_, 1, v___x_2199_);
lean_ctor_set(v___x_2204_, 2, v___x_2203_);
v___x_2205_ = l_Lean_Syntax_getArgs(v___x_2204_);
lean_dec_ref_known(v___x_2204_, 3);
v_ys_2206_ = l_unsafeCast___redArg(v___x_2205_);
lean_dec_ref(v___x_2205_);
v___x_2207_ = l_Lean_Syntax_getArgs(v___x_2201_);
lean_dec_ref_known(v___x_2201_, 3);
v_xs_2208_ = l_unsafeCast___redArg(v___x_2207_);
lean_dec_ref(v___x_2207_);
v_x_620_ = v_x_2190_;
v_xs_621_ = v_xs_2208_;
v_ty_622_ = v_ty_2198_;
v_ys_623_ = v_ys_2206_;
v_P_624_ = v_P_2172_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
lean_object* v_x_2210_; lean_object* v___y_2212_; lean_object* v___y_2213_; lean_object* v___y_2214_; lean_object* v___y_2215_; lean_object* v___y_2216_; uint8_t v___y_2217_; lean_object* v___y_2218_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; uint8_t v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; uint8_t v___y_2235_; uint8_t v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; uint8_t v___y_2251_; 
v_x_2210_ = l_Lean_Syntax_getArg(v___x_2186_, v___x_483_);
if (v___x_2168_ == 0)
{
uint8_t v___x_2292_; 
lean_inc(v_x_2210_);
v___x_2292_ = l_Lean_Syntax_isOfKind(v_x_2210_, v___x_2181_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = l_Lean_Syntax_getNumArgs(v___x_2186_);
v___x_2294_ = lean_nat_dec_le(v___x_484_, v___x_2293_);
if (v___x_2294_ == 0)
{
lean_dec(v___x_2293_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2295_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2018_);
v___x_2296_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2185_);
lean_dec(v_x_1032_);
v___x_2297_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2298_ = l_Array_extract___redArg(v___x_2297_, v___x_484_, v___x_2169_);
lean_dec_ref(v___x_2297_);
v___x_2299_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2300_ = lean_box(2);
v___x_2301_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v___x_2299_);
lean_ctor_set(v___x_2301_, 2, v___x_2298_);
if (v___x_2168_ == 0)
{
if (v___x_2292_ == 0)
{
lean_dec_ref_known(v___x_2301_, 3);
lean_dec(v___x_2296_);
lean_dec(v___x_2295_);
lean_dec(v___x_2293_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
goto v___jp_2302_;
}
}
else
{
goto v___jp_2302_;
}
v___jp_2302_:
{
uint8_t v___x_2303_; 
lean_inc(v___x_2295_);
v___x_2303_ = l_Lean_Syntax_matchesNull(v___x_2295_, v___x_2018_);
if (v___x_2303_ == 0)
{
lean_dec_ref_known(v___x_2301_, 3);
lean_dec(v___x_2296_);
lean_dec(v___x_2295_);
lean_dec(v___x_2293_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_2304_; 
v___x_2304_ = l_Lean_Syntax_matchesNull(v___x_2296_, v___x_483_);
if (v___x_2304_ == 0)
{
lean_dec_ref_known(v___x_2301_, 3);
lean_dec(v___x_2295_);
lean_dec(v___x_2293_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec_ref_known(v___x_2301_, 3);
lean_dec(v___x_2295_);
lean_dec(v___x_2293_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_ty_2308_; lean_object* v___x_2309_; lean_object* v_ys_2310_; lean_object* v___x_2311_; lean_object* v_xs_2312_; 
v___x_2305_ = l_Lean_Syntax_getArgs(v___x_2186_);
lean_dec(v___x_2186_);
v___x_2306_ = l_Array_extract___redArg(v___x_2305_, v___x_484_, v___x_2293_);
lean_dec_ref(v___x_2305_);
v___x_2307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2300_);
lean_ctor_set(v___x_2307_, 1, v___x_2299_);
lean_ctor_set(v___x_2307_, 2, v___x_2306_);
v_ty_2308_ = l_Lean_Syntax_getArg(v___x_2295_, v___x_484_);
lean_dec(v___x_2295_);
v___x_2309_ = l_Lean_Syntax_getArgs(v___x_2301_);
lean_dec_ref_known(v___x_2301_, 3);
v_ys_2310_ = l_unsafeCast___redArg(v___x_2309_);
lean_dec_ref(v___x_2309_);
v___x_2311_ = l_Lean_Syntax_getArgs(v___x_2307_);
lean_dec_ref_known(v___x_2307_, 3);
v_xs_2312_ = l_unsafeCast___redArg(v___x_2311_);
lean_dec_ref(v___x_2311_);
v_x_620_ = v_x_2210_;
v_xs_621_ = v_xs_2312_;
v_ty_622_ = v_ty_2308_;
v_ys_623_ = v_ys_2310_;
v_P_624_ = v_P_2172_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
}
else
{
goto v___jp_2259_;
}
}
else
{
goto v___jp_2259_;
}
v___jp_2211_:
{
if (v___y_2217_ == 0)
{
lean_dec(v___y_2218_);
lean_dec(v___y_2216_);
lean_dec(v___y_2214_);
lean_dec(v___y_2213_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_2219_; 
v___x_2219_ = l_Lean_Syntax_matchesNull(v___y_2218_, v___x_483_);
if (v___x_2219_ == 0)
{
lean_dec(v___y_2216_);
lean_dec(v___y_2214_);
lean_dec(v___y_2213_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___y_2216_);
lean_dec(v___y_2214_);
lean_dec(v___y_2213_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v_ty_2223_; lean_object* v___x_2224_; lean_object* v_ys_2225_; lean_object* v___x_2226_; lean_object* v_xs_2227_; 
v___x_2220_ = l_Lean_Syntax_getArgs(v___x_2186_);
lean_dec(v___x_2186_);
v___x_2221_ = l_Array_extract___redArg(v___x_2220_, v___x_484_, v___y_2213_);
lean_dec_ref(v___x_2220_);
lean_inc(v___y_2212_);
lean_inc(v___y_2215_);
v___x_2222_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2222_, 0, v___y_2215_);
lean_ctor_set(v___x_2222_, 1, v___y_2212_);
lean_ctor_set(v___x_2222_, 2, v___x_2221_);
v_ty_2223_ = l_Lean_Syntax_getArg(v___y_2214_, v___x_484_);
lean_dec(v___y_2214_);
v___x_2224_ = l_Lean_Syntax_getArgs(v___y_2216_);
lean_dec(v___y_2216_);
v_ys_2225_ = l_unsafeCast___redArg(v___x_2224_);
lean_dec_ref(v___x_2224_);
v___x_2226_ = l_Lean_Syntax_getArgs(v___x_2222_);
lean_dec_ref_known(v___x_2222_, 3);
v_xs_2227_ = l_unsafeCast___redArg(v___x_2226_);
lean_dec_ref(v___x_2226_);
v_x_620_ = v_x_2210_;
v_xs_621_ = v_xs_2227_;
v_ty_622_ = v_ty_2223_;
v_ys_623_ = v_ys_2225_;
v_P_624_ = v_P_2172_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_2228_:
{
if (v___y_2235_ == 0)
{
lean_dec(v___y_2233_);
lean_dec(v___y_2231_);
lean_dec(v___y_2229_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_2232_ == 0)
{
lean_dec(v___y_2233_);
lean_dec(v___y_2231_);
lean_dec(v___y_2229_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___y_2233_);
lean_dec(v___y_2231_);
lean_dec(v___y_2229_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v_ty_2239_; lean_object* v___x_2240_; lean_object* v_ys_2241_; lean_object* v___x_2242_; lean_object* v_xs_2243_; 
v___x_2236_ = l_Lean_Syntax_getArgs(v___x_2186_);
lean_dec(v___x_2186_);
v___x_2237_ = l_Array_extract___redArg(v___x_2236_, v___x_484_, v___y_2233_);
lean_dec_ref(v___x_2236_);
lean_inc(v___y_2230_);
lean_inc(v___y_2234_);
v___x_2238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2238_, 0, v___y_2234_);
lean_ctor_set(v___x_2238_, 1, v___y_2230_);
lean_ctor_set(v___x_2238_, 2, v___x_2237_);
v_ty_2239_ = l_Lean_Syntax_getArg(v___y_2231_, v___x_484_);
lean_dec(v___y_2231_);
v___x_2240_ = l_Lean_Syntax_getArgs(v___y_2229_);
lean_dec(v___y_2229_);
v_ys_2241_ = l_unsafeCast___redArg(v___x_2240_);
lean_dec_ref(v___x_2240_);
v___x_2242_ = l_Lean_Syntax_getArgs(v___x_2238_);
lean_dec_ref_known(v___x_2238_, 3);
v_xs_2243_ = l_unsafeCast___redArg(v___x_2242_);
lean_dec_ref(v___x_2242_);
v_x_620_ = v_x_2210_;
v_xs_621_ = v_xs_2243_;
v_ty_622_ = v_ty_2239_;
v_ys_623_ = v_ys_2241_;
v_P_624_ = v_P_2172_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_2244_:
{
if (v___y_2251_ == 0)
{
lean_dec(v___y_2249_);
lean_dec(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_2245_ == 0)
{
lean_dec(v___y_2249_);
lean_dec(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
lean_dec(v___y_2249_);
lean_dec(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v_ys_2256_; lean_object* v___x_2257_; lean_object* v_xs_2258_; 
v___x_2252_ = l_Lean_Syntax_getArgs(v___x_2186_);
lean_dec(v___x_2186_);
v___x_2253_ = l_Array_extract___redArg(v___x_2252_, v___x_484_, v___y_2246_);
lean_dec_ref(v___x_2252_);
lean_inc(v___y_2248_);
lean_inc(v___y_2250_);
v___x_2254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2254_, 0, v___y_2250_);
lean_ctor_set(v___x_2254_, 1, v___y_2248_);
lean_ctor_set(v___x_2254_, 2, v___x_2253_);
v___x_2255_ = l_Lean_Syntax_getArgs(v___y_2247_);
lean_dec(v___y_2247_);
v_ys_2256_ = l_unsafeCast___redArg(v___x_2255_);
lean_dec_ref(v___x_2255_);
v___x_2257_ = l_Lean_Syntax_getArgs(v___x_2254_);
lean_dec_ref_known(v___x_2254_, 3);
v_xs_2258_ = l_unsafeCast___redArg(v___x_2257_);
lean_dec_ref(v___x_2257_);
v_x_620_ = v_x_2210_;
v_xs_621_ = v_xs_2258_;
v_ty_622_ = v___y_2249_;
v_ys_623_ = v_ys_2256_;
v_P_624_ = v_P_2172_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_2259_:
{
lean_object* v___x_2260_; uint8_t v___x_2261_; 
v___x_2260_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2018_);
lean_inc(v___x_2260_);
v___x_2261_ = l_Lean_Syntax_matchesNull(v___x_2260_, v___x_2018_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2262_; uint8_t v___x_2263_; 
v___x_2262_ = l_Lean_Syntax_getNumArgs(v___x_2186_);
v___x_2263_ = lean_nat_dec_le(v___x_484_, v___x_2262_);
if (v___x_2263_ == 0)
{
lean_dec(v___x_2262_);
lean_dec(v___x_2260_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2264_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2185_);
lean_dec(v_x_1032_);
v___x_2265_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2266_ = l_Array_extract___redArg(v___x_2265_, v___x_484_, v___x_2169_);
lean_dec_ref(v___x_2265_);
v___x_2267_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2268_ = lean_box(2);
v___x_2269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2268_);
lean_ctor_set(v___x_2269_, 1, v___x_2267_);
lean_ctor_set(v___x_2269_, 2, v___x_2266_);
if (v___x_2261_ == 0)
{
uint8_t v___x_2270_; 
lean_inc(v_x_2210_);
v___x_2270_ = l_Lean_Syntax_isOfKind(v_x_2210_, v___x_2181_);
if (v___x_2270_ == 0)
{
lean_dec_ref_known(v___x_2269_, 3);
lean_dec(v___x_2264_);
lean_dec(v___x_2262_);
lean_dec(v___x_2260_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_2212_ = v___x_2267_;
v___y_2213_ = v___x_2262_;
v___y_2214_ = v___x_2260_;
v___y_2215_ = v___x_2268_;
v___y_2216_ = v___x_2269_;
v___y_2217_ = v___x_2261_;
v___y_2218_ = v___x_2264_;
goto v___jp_2211_;
}
}
else
{
v___y_2212_ = v___x_2267_;
v___y_2213_ = v___x_2262_;
v___y_2214_ = v___x_2260_;
v___y_2215_ = v___x_2268_;
v___y_2216_ = v___x_2269_;
v___y_2217_ = v___x_2261_;
v___y_2218_ = v___x_2264_;
goto v___jp_2211_;
}
}
}
else
{
lean_object* v___x_2271_; uint8_t v___x_2272_; 
v___x_2271_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_2185_);
lean_dec(v_x_1032_);
v___x_2272_ = l_Lean_Syntax_matchesNull(v___x_2271_, v___x_483_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = l_Lean_Syntax_getNumArgs(v___x_2186_);
v___x_2274_ = lean_nat_dec_le(v___x_484_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_dec(v___x_2273_);
lean_dec(v___x_2260_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2275_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2276_ = l_Array_extract___redArg(v___x_2275_, v___x_484_, v___x_2169_);
lean_dec_ref(v___x_2275_);
v___x_2277_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2278_ = lean_box(2);
v___x_2279_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2278_);
lean_ctor_set(v___x_2279_, 1, v___x_2277_);
lean_ctor_set(v___x_2279_, 2, v___x_2276_);
if (v___x_2272_ == 0)
{
uint8_t v___x_2280_; 
lean_inc(v_x_2210_);
v___x_2280_ = l_Lean_Syntax_isOfKind(v_x_2210_, v___x_2181_);
if (v___x_2280_ == 0)
{
lean_dec_ref_known(v___x_2279_, 3);
lean_dec(v___x_2273_);
lean_dec(v___x_2260_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_2229_ = v___x_2279_;
v___y_2230_ = v___x_2277_;
v___y_2231_ = v___x_2260_;
v___y_2232_ = v___x_2272_;
v___y_2233_ = v___x_2273_;
v___y_2234_ = v___x_2278_;
v___y_2235_ = v___x_2261_;
goto v___jp_2228_;
}
}
else
{
v___y_2229_ = v___x_2279_;
v___y_2230_ = v___x_2277_;
v___y_2231_ = v___x_2260_;
v___y_2232_ = v___x_2272_;
v___y_2233_ = v___x_2273_;
v___y_2234_ = v___x_2278_;
v___y_2235_ = v___x_2261_;
goto v___jp_2228_;
}
}
}
else
{
lean_object* v_ty_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v_ty_2281_ = l_Lean_Syntax_getArg(v___x_2260_, v___x_484_);
lean_dec(v___x_2260_);
v___x_2282_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2283_ = l_Array_extract___redArg(v___x_2282_, v___x_484_, v___x_2169_);
lean_dec_ref(v___x_2282_);
v___x_2284_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2285_ = lean_box(2);
v___x_2286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2285_);
lean_ctor_set(v___x_2286_, 1, v___x_2284_);
lean_ctor_set(v___x_2286_, 2, v___x_2283_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2287_; uint8_t v___x_2288_; 
v___x_2287_ = l_Lean_Syntax_getNumArgs(v___x_2186_);
v___x_2288_ = lean_nat_dec_le(v___x_484_, v___x_2287_);
if (v___x_2288_ == 0)
{
lean_dec(v___x_2287_);
lean_dec_ref_known(v___x_2286_, 3);
lean_dec(v_ty_2281_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___x_2020_ == 0)
{
uint8_t v___x_2289_; 
lean_inc(v_x_2210_);
v___x_2289_ = l_Lean_Syntax_isOfKind(v_x_2210_, v___x_2181_);
if (v___x_2289_ == 0)
{
lean_dec(v___x_2287_);
lean_dec_ref_known(v___x_2286_, 3);
lean_dec(v_ty_2281_);
lean_dec(v_x_2210_);
lean_dec(v___x_2186_);
lean_dec(v_P_2172_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_2245_ = v___x_2272_;
v___y_2246_ = v___x_2287_;
v___y_2247_ = v___x_2286_;
v___y_2248_ = v___x_2284_;
v___y_2249_ = v_ty_2281_;
v___y_2250_ = v___x_2285_;
v___y_2251_ = v___x_2261_;
goto v___jp_2244_;
}
}
else
{
v___y_2245_ = v___x_2272_;
v___y_2246_ = v___x_2287_;
v___y_2247_ = v___x_2286_;
v___y_2248_ = v___x_2284_;
v___y_2249_ = v_ty_2281_;
v___y_2250_ = v___x_2285_;
v___y_2251_ = v___x_2261_;
goto v___jp_2244_;
}
}
}
else
{
lean_object* v___x_2290_; lean_object* v_xs_2291_; 
lean_dec(v___x_2186_);
v___x_2290_ = l_Lean_Syntax_getArgs(v___x_2286_);
lean_dec_ref_known(v___x_2286_, 3);
v_xs_2291_ = l_unsafeCast___redArg(v___x_2290_);
lean_dec_ref(v___x_2290_);
v_x_557_ = v_x_2210_;
v_ty_558_ = v_ty_2281_;
v_xs_559_ = v_xs_2291_;
v_P_560_ = v_P_2172_;
v___y_561_ = v_a_473_;
v___y_562_ = v_a_474_;
goto v___jp_556_;
}
}
}
}
}
}
}
else
{
goto v___jp_2173_;
}
}
else
{
goto v___jp_2173_;
}
v___jp_2173_:
{
if (v___x_2020_ == 0)
{
lean_dec(v_P_2172_);
lean_dec(v___x_2169_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v_xs_2180_; 
v___x_2174_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_2175_ = l_Array_extract___redArg(v___x_2174_, v___x_484_, v___x_2169_);
lean_dec_ref(v___x_2174_);
v___x_2176_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2177_ = lean_box(2);
v___x_2178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
lean_ctor_set(v___x_2178_, 1, v___x_2176_);
lean_ctor_set(v___x_2178_, 2, v___x_2175_);
v___x_2179_ = l_Lean_Syntax_getArgs(v___x_2178_);
lean_dec_ref_known(v___x_2178_, 3);
v_xs_2180_ = l_unsafeCast___redArg(v___x_2179_);
lean_dec_ref(v___x_2179_);
v_x_500_ = v_x_1032_;
v_xs_501_ = v_xs_2180_;
v_P_502_ = v_P_2172_;
v___y_503_ = v_a_473_;
v___y_504_ = v_a_474_;
goto v___jp_499_;
}
}
}
}
else
{
lean_object* v_quotContext_2313_; lean_object* v_currMacroScope_2314_; lean_object* v_ref_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_quotContext_2313_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2314_ = lean_ctor_get(v_a_473_, 2);
v_ref_2315_ = lean_ctor_get(v_a_473_, 5);
v___x_2316_ = l_Lean_Syntax_getArg(v___x_2166_, v___x_484_);
lean_dec(v___x_2166_);
v___x_2317_ = lean_unsigned_to_nat(4u);
v___x_2318_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2317_);
lean_dec(v___x_485_);
v___x_2319_ = l_Lean_SourceInfo_fromRef(v_ref_2315_, v___x_2020_);
v___x_2320_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2321_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_2322_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_2314_, 2);
lean_inc_n(v_quotContext_2313_, 2);
v___x_2323_ = l_Lean_addMacroScope(v_quotContext_2313_, v___x_2322_, v_currMacroScope_2314_);
v___x_2324_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_2319_, 19);
v___x_2325_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2319_);
lean_ctor_set(v___x_2325_, 1, v___x_2321_);
lean_ctor_set(v___x_2325_, 2, v___x_2323_);
lean_ctor_set(v___x_2325_, 3, v___x_2324_);
v___x_2326_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2327_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_2328_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_2329_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_2330_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2319_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_2332_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_2333_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_2334_ = l_Lean_addMacroScope(v_quotContext_2313_, v___x_2333_, v_currMacroScope_2314_);
v___x_2335_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_2336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2319_);
lean_ctor_set(v___x_2336_, 1, v___x_2332_);
lean_ctor_set(v___x_2336_, 2, v___x_2334_);
lean_ctor_set(v___x_2336_, 3, v___x_2335_);
v___x_2337_ = l_Lean_Syntax_node1(v___x_2319_, v___x_2331_, v___x_2336_);
v___x_2338_ = l_Lean_Syntax_node2(v___x_2319_, v___x_2328_, v___x_2330_, v___x_2337_);
v___x_2339_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_2340_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_2341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2319_);
lean_ctor_set(v___x_2341_, 1, v___x_2339_);
v___x_2342_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_2343_ = l_Lean_SourceInfo_fromRef(v_tk_2017_, v___x_850_);
lean_dec(v_tk_2017_);
v___x_2344_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64));
v___x_2345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2343_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = l_Lean_Syntax_node1(v___x_2319_, v___x_1196_, v___x_2345_);
v___x_2347_ = l_Lean_Syntax_node1(v___x_2319_, v___x_2326_, v___x_2346_);
v___x_2348_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_2349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2319_);
lean_ctor_set(v___x_2349_, 1, v___x_2348_);
v___x_2350_ = l_Lean_Syntax_node2(v___x_2319_, v___x_2167_, v___x_2349_, v___x_2316_);
v___x_2351_ = l_Lean_Syntax_node1(v___x_2319_, v___x_2326_, v___x_2350_);
v___x_2352_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2353_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2319_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2355_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2319_);
lean_ctor_set(v___x_2355_, 1, v___x_2354_);
v___x_2356_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2357_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2319_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
lean_inc_ref(v___x_2357_);
v___x_2358_ = l_Lean_Syntax_node3(v___x_2319_, v___x_479_, v___x_2355_, v___x_2318_, v___x_2357_);
v___x_2359_ = l_Lean_Syntax_node4(v___x_2319_, v___x_2342_, v___x_2347_, v___x_2351_, v___x_2353_, v___x_2358_);
v___x_2360_ = l_Lean_Syntax_node2(v___x_2319_, v___x_2340_, v___x_2341_, v___x_2359_);
v___x_2361_ = l_Lean_Syntax_node3(v___x_2319_, v___x_2327_, v___x_2338_, v___x_2360_, v___x_2357_);
v___x_2362_ = l_Lean_Syntax_node1(v___x_2319_, v___x_2326_, v___x_2361_);
v___x_2363_ = l_Lean_Syntax_node2(v___x_2319_, v___x_2320_, v___x_2325_, v___x_2362_);
v___x_2364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
lean_ctor_set(v___x_2364_, 1, v_a_474_);
return v___x_2364_;
}
}
}
else
{
lean_object* v_quotContext_2365_; lean_object* v_currMacroScope_2366_; lean_object* v_ref_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
lean_dec(v___x_2019_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v_quotContext_2365_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2366_ = lean_ctor_get(v_a_473_, 2);
v_ref_2367_ = lean_ctor_get(v_a_473_, 5);
v___x_2368_ = lean_unsigned_to_nat(4u);
v___x_2369_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2368_);
lean_dec(v___x_485_);
v___x_2370_ = l_Lean_SourceInfo_fromRef(v_ref_2367_, v___x_497_);
v___x_2371_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2372_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_2373_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_2366_, 2);
lean_inc_n(v_quotContext_2365_, 2);
v___x_2374_ = l_Lean_addMacroScope(v_quotContext_2365_, v___x_2373_, v_currMacroScope_2366_);
v___x_2375_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_2370_, 17);
v___x_2376_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2370_);
lean_ctor_set(v___x_2376_, 1, v___x_2372_);
lean_ctor_set(v___x_2376_, 2, v___x_2374_);
lean_ctor_set(v___x_2376_, 3, v___x_2375_);
v___x_2377_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2378_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_2379_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_2380_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_2381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2370_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_2383_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_2384_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_2385_ = l_Lean_addMacroScope(v_quotContext_2365_, v___x_2384_, v_currMacroScope_2366_);
v___x_2386_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_2387_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2370_);
lean_ctor_set(v___x_2387_, 1, v___x_2383_);
lean_ctor_set(v___x_2387_, 2, v___x_2385_);
lean_ctor_set(v___x_2387_, 3, v___x_2386_);
v___x_2388_ = l_Lean_Syntax_node1(v___x_2370_, v___x_2382_, v___x_2387_);
v___x_2389_ = l_Lean_Syntax_node2(v___x_2370_, v___x_2379_, v___x_2381_, v___x_2388_);
v___x_2390_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_2391_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_2392_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2370_);
lean_ctor_set(v___x_2392_, 1, v___x_2390_);
v___x_2393_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_2394_ = l_Lean_SourceInfo_fromRef(v_tk_2017_, v___x_850_);
lean_dec(v_tk_2017_);
v___x_2395_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64));
v___x_2396_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2394_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = l_Lean_Syntax_node1(v___x_2370_, v___x_1196_, v___x_2396_);
v___x_2398_ = l_Lean_Syntax_node1(v___x_2370_, v___x_2377_, v___x_2397_);
v___x_2399_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_2400_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2370_);
lean_ctor_set(v___x_2400_, 1, v___x_2377_);
lean_ctor_set(v___x_2400_, 2, v___x_2399_);
v___x_2401_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2370_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
v___x_2403_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2404_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2370_);
lean_ctor_set(v___x_2404_, 1, v___x_2403_);
v___x_2405_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2406_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2370_);
lean_ctor_set(v___x_2406_, 1, v___x_2405_);
lean_inc_ref(v___x_2406_);
v___x_2407_ = l_Lean_Syntax_node3(v___x_2370_, v___x_479_, v___x_2404_, v___x_2369_, v___x_2406_);
v___x_2408_ = l_Lean_Syntax_node4(v___x_2370_, v___x_2393_, v___x_2398_, v___x_2400_, v___x_2402_, v___x_2407_);
v___x_2409_ = l_Lean_Syntax_node2(v___x_2370_, v___x_2391_, v___x_2392_, v___x_2408_);
v___x_2410_ = l_Lean_Syntax_node3(v___x_2370_, v___x_2378_, v___x_2389_, v___x_2409_, v___x_2406_);
v___x_2411_ = l_Lean_Syntax_node1(v___x_2370_, v___x_2377_, v___x_2410_);
v___x_2412_ = l_Lean_Syntax_node2(v___x_2370_, v___x_2371_, v___x_2376_, v___x_2411_);
v___x_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2412_);
lean_ctor_set(v___x_2413_, 1, v_a_474_);
return v___x_2413_;
}
}
v___jp_1033_:
{
uint8_t v___x_1039_; 
v___x_1039_ = l_Lean_Syntax_matchesNull(v___y_1034_, v___x_483_);
if (v___x_1039_ == 0)
{
lean_dec(v___y_1038_);
lean_dec(v___y_1036_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1037_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v_xs_1046_; 
v___x_1040_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1041_ = l_Array_extract___redArg(v___x_1040_, v___x_484_, v___y_1036_);
lean_dec_ref(v___x_1040_);
v___x_1042_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1043_ = lean_box(2);
v___x_1044_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1042_);
lean_ctor_set(v___x_1044_, 2, v___x_1041_);
v___x_1045_ = l_Lean_Syntax_getArgs(v___x_1044_);
lean_dec_ref_known(v___x_1044_, 3);
v_xs_1046_ = l_unsafeCast___redArg(v___x_1045_);
lean_dec_ref(v___x_1045_);
v_x_500_ = v_x_1032_;
v_xs_501_ = v_xs_1046_;
v_P_502_ = v___y_1038_;
v___y_503_ = v___y_1035_;
v___y_504_ = v___y_1037_;
goto v___jp_499_;
}
}
v___jp_1047_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v___x_1056_ = lean_unsigned_to_nat(2u);
v___x_1057_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1056_);
lean_inc(v___x_1057_);
v___x_1058_ = l_Lean_Syntax_matchesNull(v___x_1057_, v___x_1056_);
if (v___x_1058_ == 0)
{
lean_dec(v___x_1057_);
lean_dec(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1053_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1059_ = lean_unsigned_to_nat(3u);
v___x_1060_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1059_);
lean_dec(v_x_1032_);
v___x_1061_ = l_Lean_Syntax_matchesNull(v___x_1060_, v___x_483_);
if (v___x_1061_ == 0)
{
lean_dec(v___x_1057_);
lean_dec(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1053_;
goto v___jp_475_;
}
else
{
uint8_t v___x_1062_; 
v___x_1062_ = l_Lean_Syntax_matchesNull(v___y_1049_, v___x_483_);
if (v___x_1062_ == 0)
{
lean_dec(v___x_1057_);
lean_dec(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec(v___y_1048_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1053_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v_ty_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v_ys_1073_; lean_object* v___x_1074_; lean_object* v_xs_1075_; 
v___x_1063_ = l_Lean_Syntax_getArgs(v___y_1052_);
lean_dec(v___y_1052_);
v___x_1064_ = l_Array_extract___redArg(v___x_1063_, v___x_484_, v___y_1055_);
lean_dec_ref(v___x_1063_);
v_ty_1065_ = l_Lean_Syntax_getArg(v___x_1057_, v___x_484_);
lean_dec(v___x_1057_);
v___x_1066_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1067_ = lean_box(2);
v___x_1068_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
lean_ctor_set(v___x_1068_, 1, v___x_1066_);
lean_ctor_set(v___x_1068_, 2, v___x_1064_);
v___x_1069_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1070_ = l_Array_extract___redArg(v___x_1069_, v___x_484_, v___y_1051_);
lean_dec_ref(v___x_1069_);
v___x_1071_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1067_);
lean_ctor_set(v___x_1071_, 1, v___x_1066_);
lean_ctor_set(v___x_1071_, 2, v___x_1070_);
v___x_1072_ = l_Lean_Syntax_getArgs(v___x_1071_);
lean_dec_ref_known(v___x_1071_, 3);
v_ys_1073_ = l_unsafeCast___redArg(v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = l_Lean_Syntax_getArgs(v___x_1068_);
lean_dec_ref_known(v___x_1068_, 3);
v_xs_1075_ = l_unsafeCast___redArg(v___x_1074_);
lean_dec_ref(v___x_1074_);
v_x_620_ = v___y_1048_;
v_xs_621_ = v_xs_1075_;
v_ty_622_ = v_ty_1065_;
v_ys_623_ = v_ys_1073_;
v_P_624_ = v___y_1054_;
v___y_625_ = v___y_1050_;
v___y_626_ = v___y_1053_;
goto v___jp_619_;
}
}
}
}
v___jp_1076_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1085_ = lean_unsigned_to_nat(2u);
v___x_1086_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1085_);
lean_inc(v___x_1086_);
v___x_1087_ = l_Lean_Syntax_matchesNull(v___x_1086_, v___x_1085_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = l_Lean_Syntax_getNumArgs(v___y_1081_);
v___x_1089_ = lean_nat_dec_le(v___x_484_, v___x_1088_);
if (v___x_1089_ == 0)
{
lean_dec(v___x_1088_);
lean_dec(v___x_1086_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec(v___y_1077_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1083_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1090_ = lean_unsigned_to_nat(3u);
v___x_1091_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1090_);
lean_dec(v_x_1032_);
v___x_1092_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1093_ = l_Array_extract___redArg(v___x_1092_, v___x_484_, v___y_1080_);
lean_dec_ref(v___x_1092_);
v___x_1094_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1095_ = lean_box(2);
v___x_1096_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
lean_ctor_set(v___x_1096_, 1, v___x_1094_);
lean_ctor_set(v___x_1096_, 2, v___x_1093_);
if (v___x_1087_ == 0)
{
uint8_t v___x_1097_; 
lean_inc(v___y_1082_);
v___x_1097_ = l_Lean_Syntax_isOfKind(v___y_1082_, v___y_1079_);
if (v___x_1097_ == 0)
{
lean_dec_ref_known(v___x_1096_, 3);
lean_dec(v___x_1091_);
lean_dec(v___x_1088_);
lean_dec(v___x_1086_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1077_);
v___y_476_ = v___y_1083_;
goto v___jp_475_;
}
else
{
v___y_691_ = v___x_1095_;
v___y_692_ = v___x_1088_;
v___y_693_ = v___y_1082_;
v___y_694_ = v___y_1084_;
v___y_695_ = v___x_1086_;
v___y_696_ = v___x_1091_;
v___y_697_ = v___y_1077_;
v___y_698_ = v___x_1087_;
v___y_699_ = v___x_1096_;
v___y_700_ = v___y_1078_;
v___y_701_ = v___y_1081_;
v___y_702_ = v___x_1094_;
v___y_703_ = v___y_1083_;
goto v___jp_690_;
}
}
else
{
v___y_691_ = v___x_1095_;
v___y_692_ = v___x_1088_;
v___y_693_ = v___y_1082_;
v___y_694_ = v___y_1084_;
v___y_695_ = v___x_1086_;
v___y_696_ = v___x_1091_;
v___y_697_ = v___y_1077_;
v___y_698_ = v___x_1087_;
v___y_699_ = v___x_1096_;
v___y_700_ = v___y_1078_;
v___y_701_ = v___y_1081_;
v___y_702_ = v___x_1094_;
v___y_703_ = v___y_1083_;
goto v___jp_690_;
}
}
}
else
{
lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1098_ = lean_unsigned_to_nat(3u);
v___x_1099_ = l_Lean_Syntax_getArg(v_x_1032_, v___x_1098_);
lean_dec(v_x_1032_);
v___x_1100_ = l_Lean_Syntax_matchesNull(v___x_1099_, v___x_483_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = l_Lean_Syntax_getNumArgs(v___y_1081_);
v___x_1102_ = lean_nat_dec_le(v___x_484_, v___x_1101_);
if (v___x_1102_ == 0)
{
lean_dec(v___x_1101_);
lean_dec(v___x_1086_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec(v___y_1077_);
lean_dec(v___x_849_);
v___y_476_ = v___y_1083_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1103_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1104_ = l_Array_extract___redArg(v___x_1103_, v___x_484_, v___y_1080_);
lean_dec_ref(v___x_1103_);
v___x_1105_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1106_ = lean_box(2);
v___x_1107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v___x_1105_);
lean_ctor_set(v___x_1107_, 2, v___x_1104_);
if (v___x_1100_ == 0)
{
uint8_t v___x_1108_; 
lean_inc(v___y_1082_);
v___x_1108_ = l_Lean_Syntax_isOfKind(v___y_1082_, v___y_1079_);
if (v___x_1108_ == 0)
{
lean_dec_ref_known(v___x_1107_, 3);
lean_dec(v___x_1101_);
lean_dec(v___x_1086_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1077_);
v___y_476_ = v___y_1083_;
goto v___jp_475_;
}
else
{
v___y_715_ = v___x_1101_;
v___y_716_ = v___x_1105_;
v___y_717_ = v___y_1082_;
v___y_718_ = v___y_1084_;
v___y_719_ = v___x_1100_;
v___y_720_ = v___x_1106_;
v___y_721_ = v___x_1086_;
v___y_722_ = v___y_1077_;
v___y_723_ = v___x_1087_;
v___y_724_ = v___y_1078_;
v___y_725_ = v___x_1107_;
v___y_726_ = v___y_1081_;
v___y_727_ = v___y_1083_;
goto v___jp_714_;
}
}
else
{
v___y_715_ = v___x_1101_;
v___y_716_ = v___x_1105_;
v___y_717_ = v___y_1082_;
v___y_718_ = v___y_1084_;
v___y_719_ = v___x_1100_;
v___y_720_ = v___x_1106_;
v___y_721_ = v___x_1086_;
v___y_722_ = v___y_1077_;
v___y_723_ = v___x_1087_;
v___y_724_ = v___y_1078_;
v___y_725_ = v___x_1107_;
v___y_726_ = v___y_1081_;
v___y_727_ = v___y_1083_;
goto v___jp_714_;
}
}
}
else
{
lean_object* v_ty_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; uint8_t v___x_1115_; 
v_ty_1109_ = l_Lean_Syntax_getArg(v___x_1086_, v___x_484_);
lean_dec(v___x_1086_);
v___x_1110_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1111_ = l_Array_extract___redArg(v___x_1110_, v___x_484_, v___y_1080_);
lean_dec_ref(v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1113_ = lean_box(2);
v___x_1114_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___x_1112_);
lean_ctor_set(v___x_1114_, 2, v___x_1111_);
v___x_1115_ = l_Lean_Syntax_matchesNull(v___y_1077_, v___x_483_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1116_ = l_Lean_Syntax_getNumArgs(v___y_1081_);
v___x_1117_ = lean_nat_dec_le(v___x_484_, v___x_1116_);
if (v___x_1117_ == 0)
{
lean_dec(v___x_1116_);
lean_dec_ref_known(v___x_1114_, 3);
lean_dec(v_ty_1109_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
v___y_476_ = v___y_1083_;
goto v___jp_475_;
}
else
{
if (v___x_1115_ == 0)
{
uint8_t v___x_1118_; 
lean_inc(v___y_1082_);
v___x_1118_ = l_Lean_Syntax_isOfKind(v___y_1082_, v___y_1079_);
if (v___x_1118_ == 0)
{
lean_dec(v___x_1116_);
lean_dec_ref_known(v___x_1114_, 3);
lean_dec(v_ty_1109_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
v___y_476_ = v___y_1083_;
goto v___jp_475_;
}
else
{
v___y_738_ = v___x_1114_;
v___y_739_ = v___y_1082_;
v___y_740_ = v___x_1115_;
v___y_741_ = v___x_1116_;
v___y_742_ = v___y_1084_;
v___y_743_ = v___x_1100_;
v___y_744_ = v___x_1087_;
v___y_745_ = v___x_1113_;
v___y_746_ = v___y_1078_;
v___y_747_ = v___y_1081_;
v___y_748_ = v___y_1083_;
v___y_749_ = v_ty_1109_;
v___y_750_ = v___x_1112_;
goto v___jp_737_;
}
}
else
{
v___y_738_ = v___x_1114_;
v___y_739_ = v___y_1082_;
v___y_740_ = v___x_1115_;
v___y_741_ = v___x_1116_;
v___y_742_ = v___y_1084_;
v___y_743_ = v___x_1100_;
v___y_744_ = v___x_1087_;
v___y_745_ = v___x_1113_;
v___y_746_ = v___y_1078_;
v___y_747_ = v___y_1081_;
v___y_748_ = v___y_1083_;
v___y_749_ = v_ty_1109_;
v___y_750_ = v___x_1112_;
goto v___jp_737_;
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v_xs_1120_; 
lean_dec(v___y_1081_);
v___x_1119_ = l_Lean_Syntax_getArgs(v___x_1114_);
lean_dec_ref_known(v___x_1114_, 3);
v_xs_1120_ = l_unsafeCast___redArg(v___x_1119_);
lean_dec_ref(v___x_1119_);
v_x_557_ = v___y_1082_;
v_ty_558_ = v_ty_1109_;
v_xs_559_ = v_xs_1120_;
v_P_560_ = v___y_1084_;
v___y_561_ = v___y_1078_;
v___y_562_ = v___y_1083_;
goto v___jp_556_;
}
}
}
}
v___jp_1121_:
{
if (v___y_1124_ == 0)
{
lean_dec(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v_xs_1131_; 
v___x_1125_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1126_ = l_Array_extract___redArg(v___x_1125_, v___x_484_, v___y_1122_);
lean_dec_ref(v___x_1125_);
v___x_1127_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1128_ = lean_box(2);
v___x_1129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
lean_ctor_set(v___x_1129_, 1, v___x_1127_);
lean_ctor_set(v___x_1129_, 2, v___x_1126_);
v___x_1130_ = l_Lean_Syntax_getArgs(v___x_1129_);
lean_dec_ref_known(v___x_1129_, 3);
v_xs_1131_ = l_unsafeCast___redArg(v___x_1130_);
lean_dec_ref(v___x_1130_);
v_x_500_ = v_x_1032_;
v_xs_501_ = v_xs_1131_;
v_P_502_ = v___y_1123_;
v___y_503_ = v_a_473_;
v___y_504_ = v_a_474_;
goto v___jp_499_;
}
}
v___jp_1132_:
{
lean_object* v___x_1141_; uint8_t v___x_1142_; 
v___x_1141_ = l_Lean_Syntax_getArg(v_x_1032_, v___y_1140_);
lean_inc(v___x_1141_);
v___x_1142_ = l_Lean_Syntax_matchesNull(v___x_1141_, v___y_1140_);
if (v___x_1142_ == 0)
{
lean_dec(v___x_1141_);
lean_dec(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1143_; uint8_t v___x_1144_; 
v___x_1143_ = l_Lean_Syntax_getArg(v_x_1032_, v___y_1138_);
lean_dec(v_x_1032_);
v___x_1144_ = l_Lean_Syntax_matchesNull(v___x_1143_, v___x_483_);
if (v___x_1144_ == 0)
{
lean_dec(v___x_1141_);
lean_dec(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_1139_ == 0)
{
lean_dec(v___x_1141_);
lean_dec(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v_ty_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v_ys_1155_; lean_object* v___x_1156_; lean_object* v_xs_1157_; 
v___x_1145_ = l_Lean_Syntax_getArgs(v___y_1137_);
lean_dec(v___y_1137_);
v___x_1146_ = l_Array_extract___redArg(v___x_1145_, v___x_484_, v___y_1134_);
lean_dec_ref(v___x_1145_);
v_ty_1147_ = l_Lean_Syntax_getArg(v___x_1141_, v___x_484_);
lean_dec(v___x_1141_);
v___x_1148_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1149_ = lean_box(2);
v___x_1150_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v___x_1148_);
lean_ctor_set(v___x_1150_, 2, v___x_1146_);
v___x_1151_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1152_ = l_Array_extract___redArg(v___x_1151_, v___x_484_, v___y_1133_);
lean_dec_ref(v___x_1151_);
v___x_1153_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1149_);
lean_ctor_set(v___x_1153_, 1, v___x_1148_);
lean_ctor_set(v___x_1153_, 2, v___x_1152_);
v___x_1154_ = l_Lean_Syntax_getArgs(v___x_1153_);
lean_dec_ref_known(v___x_1153_, 3);
v_ys_1155_ = l_unsafeCast___redArg(v___x_1154_);
lean_dec_ref(v___x_1154_);
v___x_1156_ = l_Lean_Syntax_getArgs(v___x_1150_);
lean_dec_ref_known(v___x_1150_, 3);
v_xs_1157_ = l_unsafeCast___redArg(v___x_1156_);
lean_dec_ref(v___x_1156_);
v_x_620_ = v___y_1136_;
v_xs_621_ = v_xs_1157_;
v_ty_622_ = v_ty_1147_;
v_ys_623_ = v_ys_1155_;
v_P_624_ = v___y_1135_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_1158_:
{
lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = l_Lean_Syntax_getArg(v_x_1032_, v___y_1166_);
lean_inc(v___x_1167_);
v___x_1168_ = l_Lean_Syntax_matchesNull(v___x_1167_, v___y_1166_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; uint8_t v___x_1170_; 
v___x_1169_ = l_Lean_Syntax_getNumArgs(v___y_1163_);
v___x_1170_ = lean_nat_dec_le(v___x_484_, v___x_1169_);
if (v___x_1170_ == 0)
{
lean_dec(v___x_1169_);
lean_dec(v___x_1167_);
lean_dec(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec(v_x_1032_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1171_ = l_Lean_Syntax_getArg(v_x_1032_, v___y_1164_);
lean_dec(v_x_1032_);
v___x_1172_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1173_ = l_Array_extract___redArg(v___x_1172_, v___x_484_, v___y_1160_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1175_ = lean_box(2);
v___x_1176_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1174_);
lean_ctor_set(v___x_1176_, 2, v___x_1173_);
if (v___x_1168_ == 0)
{
uint8_t v___x_1177_; 
lean_inc(v___y_1161_);
v___x_1177_ = l_Lean_Syntax_isOfKind(v___y_1161_, v___y_1159_);
if (v___x_1177_ == 0)
{
lean_dec_ref_known(v___x_1176_, 3);
lean_dec(v___x_1171_);
lean_dec(v___x_1169_);
lean_dec(v___x_1167_);
lean_dec(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_784_ = v___x_1175_;
v___y_785_ = v___y_1162_;
v___y_786_ = v___y_1161_;
v___y_787_ = v___x_1168_;
v___y_788_ = v___y_1163_;
v___y_789_ = v___x_1171_;
v___y_790_ = v___x_1167_;
v___y_791_ = v___x_1174_;
v___y_792_ = v___x_1169_;
v___y_793_ = v___x_1176_;
v___y_794_ = v___y_1165_;
goto v___jp_783_;
}
}
else
{
v___y_784_ = v___x_1175_;
v___y_785_ = v___y_1162_;
v___y_786_ = v___y_1161_;
v___y_787_ = v___x_1168_;
v___y_788_ = v___y_1163_;
v___y_789_ = v___x_1171_;
v___y_790_ = v___x_1167_;
v___y_791_ = v___x_1174_;
v___y_792_ = v___x_1169_;
v___y_793_ = v___x_1176_;
v___y_794_ = v___y_1165_;
goto v___jp_783_;
}
}
}
else
{
lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1178_ = l_Lean_Syntax_getArg(v_x_1032_, v___y_1164_);
lean_dec(v_x_1032_);
v___x_1179_ = l_Lean_Syntax_matchesNull(v___x_1178_, v___x_483_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; uint8_t v___x_1181_; 
v___x_1180_ = l_Lean_Syntax_getNumArgs(v___y_1163_);
v___x_1181_ = lean_nat_dec_le(v___x_484_, v___x_1180_);
if (v___x_1181_ == 0)
{
lean_dec(v___x_1180_);
lean_dec(v___x_1167_);
lean_dec(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1182_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1183_ = l_Array_extract___redArg(v___x_1182_, v___x_484_, v___y_1160_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1185_ = lean_box(2);
v___x_1186_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v___x_1184_);
lean_ctor_set(v___x_1186_, 2, v___x_1183_);
if (v___x_1179_ == 0)
{
uint8_t v___x_1187_; 
lean_inc(v___y_1161_);
v___x_1187_ = l_Lean_Syntax_isOfKind(v___y_1161_, v___y_1159_);
if (v___x_1187_ == 0)
{
lean_dec_ref_known(v___x_1186_, 3);
lean_dec(v___x_1180_);
lean_dec(v___x_1167_);
lean_dec(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
v___y_805_ = v___x_1180_;
v___y_806_ = v___y_1162_;
v___y_807_ = v___y_1161_;
v___y_808_ = v___x_1185_;
v___y_809_ = v___x_1168_;
v___y_810_ = v___x_1184_;
v___y_811_ = v___y_1163_;
v___y_812_ = v___x_1167_;
v___y_813_ = v___x_1179_;
v___y_814_ = v___x_1186_;
v___y_815_ = v___y_1165_;
goto v___jp_804_;
}
}
else
{
v___y_805_ = v___x_1180_;
v___y_806_ = v___y_1162_;
v___y_807_ = v___y_1161_;
v___y_808_ = v___x_1185_;
v___y_809_ = v___x_1168_;
v___y_810_ = v___x_1184_;
v___y_811_ = v___y_1163_;
v___y_812_ = v___x_1167_;
v___y_813_ = v___x_1179_;
v___y_814_ = v___x_1186_;
v___y_815_ = v___y_1165_;
goto v___jp_804_;
}
}
}
else
{
lean_object* v_ty_1188_; 
lean_dec(v___y_1163_);
v_ty_1188_ = l_Lean_Syntax_getArg(v___x_1167_, v___x_484_);
lean_dec(v___x_1167_);
if (v___y_1165_ == 0)
{
lean_dec(v_ty_1188_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec(v___x_849_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v_xs_1195_; 
v___x_1189_ = l_Lean_Syntax_getArgs(v___x_849_);
lean_dec(v___x_849_);
v___x_1190_ = l_Array_extract___redArg(v___x_1189_, v___x_484_, v___y_1160_);
lean_dec_ref(v___x_1189_);
v___x_1191_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1192_ = lean_box(2);
v___x_1193_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
lean_ctor_set(v___x_1193_, 1, v___x_1191_);
lean_ctor_set(v___x_1193_, 2, v___x_1190_);
v___x_1194_ = l_Lean_Syntax_getArgs(v___x_1193_);
lean_dec_ref_known(v___x_1193_, 3);
v_xs_1195_ = l_unsafeCast___redArg(v___x_1194_);
lean_dec_ref(v___x_1194_);
v_x_557_ = v___y_1161_;
v_ty_558_ = v_ty_1188_;
v_xs_559_ = v_xs_1195_;
v_P_560_ = v___y_1162_;
v___y_561_ = v_a_473_;
v___y_562_ = v_a_474_;
goto v___jp_556_;
}
}
}
}
v___jp_1198_:
{
lean_object* v_quotContext_1204_; lean_object* v_currMacroScope_1205_; lean_object* v_ref_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_quotContext_1204_ = lean_ctor_get(v___y_1202_, 1);
v_currMacroScope_1205_ = lean_ctor_get(v___y_1202_, 2);
v_ref_1206_ = lean_ctor_get(v___y_1202_, 5);
v___x_1207_ = l_Lean_SourceInfo_fromRef(v_ref_1206_, v___x_1197_);
v___x_1208_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1209_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_1210_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_1205_, 2);
lean_inc_n(v_quotContext_1204_, 2);
v___x_1211_ = l_Lean_addMacroScope(v_quotContext_1204_, v___x_1210_, v_currMacroScope_1205_);
v___x_1212_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_1207_, 18);
v___x_1213_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1207_);
lean_ctor_set(v___x_1213_, 1, v___x_1209_);
lean_ctor_set(v___x_1213_, 2, v___x_1211_);
lean_ctor_set(v___x_1213_, 3, v___x_1212_);
v___x_1214_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1215_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_1216_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1217_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_1218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1207_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_1220_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_1221_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_1222_ = l_Lean_addMacroScope(v_quotContext_1204_, v___x_1221_, v_currMacroScope_1205_);
v___x_1223_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1207_);
lean_ctor_set(v___x_1224_, 1, v___x_1220_);
lean_ctor_set(v___x_1224_, 2, v___x_1222_);
lean_ctor_set(v___x_1224_, 3, v___x_1223_);
v___x_1225_ = l_Lean_Syntax_node1(v___x_1207_, v___x_1219_, v___x_1224_);
v___x_1226_ = l_Lean_Syntax_node2(v___x_1207_, v___x_1216_, v___x_1218_, v___x_1225_);
v___x_1227_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_1228_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1207_);
lean_ctor_set(v___x_1229_, 1, v___x_1227_);
v___x_1230_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1231_ = l_Lean_Syntax_node1(v___x_1207_, v___x_1214_, v_x_1199_);
v___x_1232_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1233_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_1234_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1207_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = l_Lean_Syntax_node2(v___x_1207_, v___x_1232_, v___x_1234_, v_ty_1200_);
v___x_1236_ = l_Lean_Syntax_node1(v___x_1207_, v___x_1214_, v___x_1235_);
v___x_1237_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_1238_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1207_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1207_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1242_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1207_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
lean_inc_ref(v___x_1242_);
v___x_1243_ = l_Lean_Syntax_node3(v___x_1207_, v___x_479_, v___x_1240_, v_P_1201_, v___x_1242_);
v___x_1244_ = l_Lean_Syntax_node4(v___x_1207_, v___x_1230_, v___x_1231_, v___x_1236_, v___x_1238_, v___x_1243_);
v___x_1245_ = l_Lean_Syntax_node2(v___x_1207_, v___x_1228_, v___x_1229_, v___x_1244_);
v___x_1246_ = l_Lean_Syntax_node3(v___x_1207_, v___x_1215_, v___x_1226_, v___x_1245_, v___x_1242_);
v___x_1247_ = l_Lean_Syntax_node1(v___x_1207_, v___x_1214_, v___x_1246_);
v___x_1248_ = l_Lean_Syntax_node2(v___x_1207_, v___x_1208_, v___x_1213_, v___x_1247_);
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
lean_ctor_set(v___x_1249_, 1, v___y_1203_);
return v___x_1249_;
}
}
}
v___jp_499_:
{
lean_object* v_quotContext_505_; lean_object* v_currMacroScope_506_; lean_object* v_ref_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v_quotContext_505_ = lean_ctor_get(v___y_503_, 1);
v_currMacroScope_506_ = lean_ctor_get(v___y_503_, 2);
v_ref_507_ = lean_ctor_get(v___y_503_, 5);
v___x_508_ = l_Lean_SourceInfo_fromRef(v_ref_507_, v___x_497_);
v___x_509_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_510_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_511_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_506_, 2);
lean_inc_n(v_quotContext_505_, 2);
v___x_512_ = l_Lean_addMacroScope(v_quotContext_505_, v___x_511_, v_currMacroScope_506_);
v___x_513_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_508_, 20);
v___x_514_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_514_, 0, v___x_508_);
lean_ctor_set(v___x_514_, 1, v___x_510_);
lean_ctor_set(v___x_514_, 2, v___x_512_);
lean_ctor_set(v___x_514_, 3, v___x_513_);
v___x_515_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_516_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_517_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_518_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_519_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_508_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_521_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_522_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_523_ = l_Lean_addMacroScope(v_quotContext_505_, v___x_522_, v_currMacroScope_506_);
v___x_524_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_525_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_525_, 0, v___x_508_);
lean_ctor_set(v___x_525_, 1, v___x_521_);
lean_ctor_set(v___x_525_, 2, v___x_523_);
lean_ctor_set(v___x_525_, 3, v___x_524_);
v___x_526_ = l_Lean_Syntax_node1(v___x_508_, v___x_520_, v___x_525_);
v___x_527_ = l_Lean_Syntax_node2(v___x_508_, v___x_517_, v___x_519_, v___x_526_);
v___x_528_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_529_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_530_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_508_);
lean_ctor_set(v___x_530_, 1, v___x_528_);
v___x_531_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_532_ = l_Lean_Syntax_node1(v___x_508_, v___x_515_, v_x_500_);
v___x_533_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_534_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_534_, 0, v___x_508_);
lean_ctor_set(v___x_534_, 1, v___x_515_);
lean_ctor_set(v___x_534_, 2, v___x_533_);
v___x_535_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_536_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_508_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_538_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_508_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_540_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_508_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = l_unsafeCast___redArg(v_xs_501_);
lean_dec_ref(v_xs_501_);
v___x_542_ = l_Array_append___redArg(v___x_533_, v___x_541_);
lean_dec(v___x_541_);
v___x_543_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_543_, 0, v___x_508_);
lean_ctor_set(v___x_543_, 1, v___x_515_);
lean_ctor_set(v___x_543_, 2, v___x_542_);
v___x_544_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_508_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
lean_inc_ref(v___x_534_);
v___x_546_ = l_Lean_Syntax_node5(v___x_508_, v___x_498_, v___x_540_, v___x_543_, v___x_534_, v___x_545_, v_P_502_);
v___x_547_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_548_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_508_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
lean_inc_ref(v___x_548_);
v___x_549_ = l_Lean_Syntax_node3(v___x_508_, v___x_479_, v___x_538_, v___x_546_, v___x_548_);
v___x_550_ = l_Lean_Syntax_node4(v___x_508_, v___x_531_, v___x_532_, v___x_534_, v___x_536_, v___x_549_);
v___x_551_ = l_Lean_Syntax_node2(v___x_508_, v___x_529_, v___x_530_, v___x_550_);
v___x_552_ = l_Lean_Syntax_node3(v___x_508_, v___x_516_, v___x_527_, v___x_551_, v___x_548_);
v___x_553_ = l_Lean_Syntax_node1(v___x_508_, v___x_515_, v___x_552_);
v___x_554_ = l_Lean_Syntax_node2(v___x_508_, v___x_509_, v___x_514_, v___x_553_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___y_504_);
return v___x_555_;
}
v___jp_556_:
{
lean_object* v_quotContext_563_; lean_object* v_currMacroScope_564_; lean_object* v_ref_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_quotContext_563_ = lean_ctor_get(v___y_561_, 1);
v_currMacroScope_564_ = lean_ctor_get(v___y_561_, 2);
v_ref_565_ = lean_ctor_get(v___y_561_, 5);
v___x_566_ = l_Lean_SourceInfo_fromRef(v_ref_565_, v___x_497_);
v___x_567_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_568_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_569_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_564_, 2);
lean_inc_n(v_quotContext_563_, 2);
v___x_570_ = l_Lean_addMacroScope(v_quotContext_563_, v___x_569_, v_currMacroScope_564_);
v___x_571_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_566_, 23);
v___x_572_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_572_, 0, v___x_566_);
lean_ctor_set(v___x_572_, 1, v___x_568_);
lean_ctor_set(v___x_572_, 2, v___x_570_);
lean_ctor_set(v___x_572_, 3, v___x_571_);
v___x_573_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_574_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_575_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_576_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_566_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_579_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_580_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_581_ = l_Lean_addMacroScope(v_quotContext_563_, v___x_580_, v_currMacroScope_564_);
v___x_582_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_583_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_583_, 0, v___x_566_);
lean_ctor_set(v___x_583_, 1, v___x_579_);
lean_ctor_set(v___x_583_, 2, v___x_581_);
lean_ctor_set(v___x_583_, 3, v___x_582_);
v___x_584_ = l_Lean_Syntax_node1(v___x_566_, v___x_578_, v___x_583_);
v___x_585_ = l_Lean_Syntax_node2(v___x_566_, v___x_575_, v___x_577_, v___x_584_);
v___x_586_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_587_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_566_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
v___x_589_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_590_ = l_Lean_Syntax_node1(v___x_566_, v___x_573_, v_x_557_);
v___x_591_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_592_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_593_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_566_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = l_Lean_Syntax_node2(v___x_566_, v___x_591_, v___x_593_, v_ty_558_);
v___x_595_ = l_Lean_Syntax_node1(v___x_566_, v___x_573_, v___x_594_);
v___x_596_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_597_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_566_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_566_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_566_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_603_ = l_unsafeCast___redArg(v_xs_559_);
lean_dec_ref(v_xs_559_);
v___x_604_ = l_Array_append___redArg(v___x_602_, v___x_603_);
lean_dec(v___x_603_);
v___x_605_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_605_, 0, v___x_566_);
lean_ctor_set(v___x_605_, 1, v___x_573_);
lean_ctor_set(v___x_605_, 2, v___x_604_);
v___x_606_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_606_, 0, v___x_566_);
lean_ctor_set(v___x_606_, 1, v___x_573_);
lean_ctor_set(v___x_606_, 2, v___x_602_);
v___x_607_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_608_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_566_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = l_Lean_Syntax_node5(v___x_566_, v___x_498_, v___x_601_, v___x_605_, v___x_606_, v___x_608_, v_P_560_);
v___x_610_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_611_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_566_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
lean_inc_ref(v___x_611_);
v___x_612_ = l_Lean_Syntax_node3(v___x_566_, v___x_479_, v___x_599_, v___x_609_, v___x_611_);
v___x_613_ = l_Lean_Syntax_node4(v___x_566_, v___x_589_, v___x_590_, v___x_595_, v___x_597_, v___x_612_);
v___x_614_ = l_Lean_Syntax_node2(v___x_566_, v___x_587_, v___x_588_, v___x_613_);
v___x_615_ = l_Lean_Syntax_node3(v___x_566_, v___x_574_, v___x_585_, v___x_614_, v___x_611_);
v___x_616_ = l_Lean_Syntax_node1(v___x_566_, v___x_573_, v___x_615_);
v___x_617_ = l_Lean_Syntax_node2(v___x_566_, v___x_567_, v___x_572_, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___y_562_);
return v___x_618_;
}
v___jp_619_:
{
lean_object* v_quotContext_627_; lean_object* v_currMacroScope_628_; lean_object* v_ref_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_quotContext_627_ = lean_ctor_get(v___y_625_, 1);
v_currMacroScope_628_ = lean_ctor_get(v___y_625_, 2);
v_ref_629_ = lean_ctor_get(v___y_625_, 5);
v___x_630_ = l_Lean_SourceInfo_fromRef(v_ref_629_, v___x_497_);
v___x_631_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_632_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15);
v___x_633_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16));
lean_inc_n(v_currMacroScope_628_, 2);
lean_inc_n(v_quotContext_627_, 2);
v___x_634_ = l_Lean_addMacroScope(v_quotContext_627_, v___x_633_, v_currMacroScope_628_);
v___x_635_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19));
lean_inc_n(v___x_630_, 26);
v___x_636_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_636_, 0, v___x_630_);
lean_ctor_set(v___x_636_, 1, v___x_632_);
lean_ctor_set(v___x_636_, 2, v___x_634_);
lean_ctor_set(v___x_636_, 3, v___x_635_);
v___x_637_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_638_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
v___x_639_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_640_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
v___x_641_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_630_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_643_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_644_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_645_ = l_Lean_addMacroScope(v_quotContext_627_, v___x_644_, v_currMacroScope_628_);
v___x_646_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_647_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_647_, 0, v___x_630_);
lean_ctor_set(v___x_647_, 1, v___x_643_);
lean_ctor_set(v___x_647_, 2, v___x_645_);
lean_ctor_set(v___x_647_, 3, v___x_646_);
v___x_648_ = l_Lean_Syntax_node1(v___x_630_, v___x_642_, v___x_647_);
lean_inc_ref(v___x_641_);
v___x_649_ = l_Lean_Syntax_node2(v___x_630_, v___x_639_, v___x_641_, v___x_648_);
v___x_650_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_651_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_630_);
lean_ctor_set(v___x_652_, 1, v___x_650_);
v___x_653_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_654_ = l_Lean_Syntax_node1(v___x_630_, v___x_637_, v_x_620_);
v___x_655_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_656_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_657_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_630_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
lean_inc(v_ty_622_);
lean_inc_ref(v___x_657_);
v___x_658_ = l_Lean_Syntax_node2(v___x_630_, v___x_655_, v___x_657_, v_ty_622_);
v___x_659_ = l_Lean_Syntax_node1(v___x_630_, v___x_637_, v___x_658_);
v___x_660_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_661_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_630_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_630_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_665_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_630_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
v___x_666_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59));
v___x_667_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_668_ = l_unsafeCast___redArg(v_xs_621_);
lean_dec_ref(v_xs_621_);
v___x_669_ = l_Array_append___redArg(v___x_667_, v___x_668_);
lean_dec(v___x_668_);
v___x_670_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_670_, 0, v___x_630_);
lean_ctor_set(v___x_670_, 1, v___x_637_);
lean_ctor_set(v___x_670_, 2, v___x_669_);
v___x_671_ = l_Lean_Syntax_node2(v___x_630_, v___x_637_, v___x_657_, v_ty_622_);
v___x_672_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_672_, 0, v___x_630_);
lean_ctor_set(v___x_672_, 1, v___x_637_);
lean_ctor_set(v___x_672_, 2, v___x_667_);
v___x_673_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_674_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_630_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
lean_inc_ref_n(v___x_674_, 2);
lean_inc_ref(v___x_672_);
v___x_675_ = l_Lean_Syntax_node5(v___x_630_, v___x_666_, v___x_641_, v___x_670_, v___x_671_, v___x_672_, v___x_674_);
v___x_676_ = l_Array_mkArray1___redArg(v___x_675_);
v___x_677_ = l_unsafeCast___redArg(v_ys_623_);
lean_dec_ref(v_ys_623_);
v___x_678_ = l_Array_append___redArg(v___x_676_, v___x_677_);
lean_dec(v___x_677_);
v___x_679_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_679_, 0, v___x_630_);
lean_ctor_set(v___x_679_, 1, v___x_637_);
lean_ctor_set(v___x_679_, 2, v___x_678_);
v___x_680_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_630_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_Syntax_node5(v___x_630_, v___x_498_, v___x_665_, v___x_679_, v___x_672_, v___x_681_, v_P_624_);
v___x_683_ = l_Lean_Syntax_node3(v___x_630_, v___x_479_, v___x_663_, v___x_682_, v___x_674_);
v___x_684_ = l_Lean_Syntax_node4(v___x_630_, v___x_653_, v___x_654_, v___x_659_, v___x_661_, v___x_683_);
v___x_685_ = l_Lean_Syntax_node2(v___x_630_, v___x_651_, v___x_652_, v___x_684_);
v___x_686_ = l_Lean_Syntax_node3(v___x_630_, v___x_638_, v___x_649_, v___x_685_, v___x_674_);
v___x_687_ = l_Lean_Syntax_node1(v___x_630_, v___x_637_, v___x_686_);
v___x_688_ = l_Lean_Syntax_node2(v___x_630_, v___x_631_, v___x_636_, v___x_687_);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___y_626_);
return v___x_689_;
}
v___jp_690_:
{
if (v___y_698_ == 0)
{
lean_dec(v___y_701_);
lean_dec(v___y_699_);
lean_dec(v___y_697_);
lean_dec(v___y_696_);
lean_dec(v___y_695_);
lean_dec(v___y_694_);
lean_dec(v___y_693_);
lean_dec(v___y_692_);
v___y_476_ = v___y_703_;
goto v___jp_475_;
}
else
{
uint8_t v___x_704_; 
v___x_704_ = l_Lean_Syntax_matchesNull(v___y_696_, v___x_483_);
if (v___x_704_ == 0)
{
lean_dec(v___y_701_);
lean_dec(v___y_699_);
lean_dec(v___y_697_);
lean_dec(v___y_695_);
lean_dec(v___y_694_);
lean_dec(v___y_693_);
lean_dec(v___y_692_);
v___y_476_ = v___y_703_;
goto v___jp_475_;
}
else
{
uint8_t v___x_705_; 
v___x_705_ = l_Lean_Syntax_matchesNull(v___y_697_, v___x_483_);
if (v___x_705_ == 0)
{
lean_dec(v___y_701_);
lean_dec(v___y_699_);
lean_dec(v___y_695_);
lean_dec(v___y_694_);
lean_dec(v___y_693_);
lean_dec(v___y_692_);
v___y_476_ = v___y_703_;
goto v___jp_475_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v_ty_709_; lean_object* v___x_710_; lean_object* v_ys_711_; lean_object* v___x_712_; lean_object* v_xs_713_; 
v___x_706_ = l_Lean_Syntax_getArgs(v___y_701_);
lean_dec(v___y_701_);
v___x_707_ = l_Array_extract___redArg(v___x_706_, v___x_484_, v___y_692_);
lean_dec_ref(v___x_706_);
lean_inc(v___y_702_);
lean_inc(v___y_691_);
v___x_708_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_708_, 0, v___y_691_);
lean_ctor_set(v___x_708_, 1, v___y_702_);
lean_ctor_set(v___x_708_, 2, v___x_707_);
v_ty_709_ = l_Lean_Syntax_getArg(v___y_695_, v___x_484_);
lean_dec(v___y_695_);
v___x_710_ = l_Lean_Syntax_getArgs(v___y_699_);
lean_dec(v___y_699_);
v_ys_711_ = l_unsafeCast___redArg(v___x_710_);
lean_dec_ref(v___x_710_);
v___x_712_ = l_Lean_Syntax_getArgs(v___x_708_);
lean_dec_ref_known(v___x_708_, 3);
v_xs_713_ = l_unsafeCast___redArg(v___x_712_);
lean_dec_ref(v___x_712_);
v_x_620_ = v___y_693_;
v_xs_621_ = v_xs_713_;
v_ty_622_ = v_ty_709_;
v_ys_623_ = v_ys_711_;
v_P_624_ = v___y_694_;
v___y_625_ = v___y_700_;
v___y_626_ = v___y_703_;
goto v___jp_619_;
}
}
}
}
v___jp_714_:
{
if (v___y_723_ == 0)
{
lean_dec(v___y_726_);
lean_dec(v___y_725_);
lean_dec(v___y_722_);
lean_dec(v___y_721_);
lean_dec(v___y_718_);
lean_dec(v___y_717_);
lean_dec(v___y_715_);
v___y_476_ = v___y_727_;
goto v___jp_475_;
}
else
{
if (v___y_719_ == 0)
{
lean_dec(v___y_726_);
lean_dec(v___y_725_);
lean_dec(v___y_722_);
lean_dec(v___y_721_);
lean_dec(v___y_718_);
lean_dec(v___y_717_);
lean_dec(v___y_715_);
v___y_476_ = v___y_727_;
goto v___jp_475_;
}
else
{
uint8_t v___x_728_; 
v___x_728_ = l_Lean_Syntax_matchesNull(v___y_722_, v___x_483_);
if (v___x_728_ == 0)
{
lean_dec(v___y_726_);
lean_dec(v___y_725_);
lean_dec(v___y_721_);
lean_dec(v___y_718_);
lean_dec(v___y_717_);
lean_dec(v___y_715_);
v___y_476_ = v___y_727_;
goto v___jp_475_;
}
else
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v_ty_732_; lean_object* v___x_733_; lean_object* v_ys_734_; lean_object* v___x_735_; lean_object* v_xs_736_; 
v___x_729_ = l_Lean_Syntax_getArgs(v___y_726_);
lean_dec(v___y_726_);
v___x_730_ = l_Array_extract___redArg(v___x_729_, v___x_484_, v___y_715_);
lean_dec_ref(v___x_729_);
lean_inc(v___y_716_);
lean_inc(v___y_720_);
v___x_731_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_731_, 0, v___y_720_);
lean_ctor_set(v___x_731_, 1, v___y_716_);
lean_ctor_set(v___x_731_, 2, v___x_730_);
v_ty_732_ = l_Lean_Syntax_getArg(v___y_721_, v___x_484_);
lean_dec(v___y_721_);
v___x_733_ = l_Lean_Syntax_getArgs(v___y_725_);
lean_dec(v___y_725_);
v_ys_734_ = l_unsafeCast___redArg(v___x_733_);
lean_dec_ref(v___x_733_);
v___x_735_ = l_Lean_Syntax_getArgs(v___x_731_);
lean_dec_ref_known(v___x_731_, 3);
v_xs_736_ = l_unsafeCast___redArg(v___x_735_);
lean_dec_ref(v___x_735_);
v_x_620_ = v___y_717_;
v_xs_621_ = v_xs_736_;
v_ty_622_ = v_ty_732_;
v_ys_623_ = v_ys_734_;
v_P_624_ = v___y_718_;
v___y_625_ = v___y_724_;
v___y_626_ = v___y_727_;
goto v___jp_619_;
}
}
}
}
v___jp_737_:
{
if (v___y_744_ == 0)
{
lean_dec(v___y_749_);
lean_dec(v___y_747_);
lean_dec(v___y_742_);
lean_dec(v___y_741_);
lean_dec(v___y_739_);
lean_dec(v___y_738_);
v___y_476_ = v___y_748_;
goto v___jp_475_;
}
else
{
if (v___y_743_ == 0)
{
lean_dec(v___y_749_);
lean_dec(v___y_747_);
lean_dec(v___y_742_);
lean_dec(v___y_741_);
lean_dec(v___y_739_);
lean_dec(v___y_738_);
v___y_476_ = v___y_748_;
goto v___jp_475_;
}
else
{
if (v___y_740_ == 0)
{
lean_dec(v___y_749_);
lean_dec(v___y_747_);
lean_dec(v___y_742_);
lean_dec(v___y_741_);
lean_dec(v___y_739_);
lean_dec(v___y_738_);
v___y_476_ = v___y_748_;
goto v___jp_475_;
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v_ys_755_; lean_object* v___x_756_; lean_object* v_xs_757_; 
v___x_751_ = l_Lean_Syntax_getArgs(v___y_747_);
lean_dec(v___y_747_);
v___x_752_ = l_Array_extract___redArg(v___x_751_, v___x_484_, v___y_741_);
lean_dec_ref(v___x_751_);
lean_inc(v___y_750_);
lean_inc(v___y_745_);
v___x_753_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_753_, 0, v___y_745_);
lean_ctor_set(v___x_753_, 1, v___y_750_);
lean_ctor_set(v___x_753_, 2, v___x_752_);
v___x_754_ = l_Lean_Syntax_getArgs(v___y_738_);
lean_dec(v___y_738_);
v_ys_755_ = l_unsafeCast___redArg(v___x_754_);
lean_dec_ref(v___x_754_);
v___x_756_ = l_Lean_Syntax_getArgs(v___x_753_);
lean_dec_ref_known(v___x_753_, 3);
v_xs_757_ = l_unsafeCast___redArg(v___x_756_);
lean_dec_ref(v___x_756_);
v_x_620_ = v___y_739_;
v_xs_621_ = v_xs_757_;
v_ty_622_ = v___y_749_;
v_ys_623_ = v_ys_755_;
v_P_624_ = v___y_742_;
v___y_625_ = v___y_746_;
v___y_626_ = v___y_748_;
goto v___jp_619_;
}
}
}
}
v___jp_758_:
{
uint8_t v___x_772_; 
lean_inc(v___y_766_);
v___x_772_ = l_Lean_Syntax_matchesNull(v___y_766_, v___y_764_);
if (v___x_772_ == 0)
{
lean_dec(v___y_770_);
lean_dec(v___y_767_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
lean_dec(v___y_763_);
lean_dec(v___y_762_);
lean_dec(v___y_761_);
lean_dec(v___y_759_);
v___y_476_ = v___y_771_;
goto v___jp_475_;
}
else
{
uint8_t v___x_773_; 
v___x_773_ = l_Lean_Syntax_matchesNull(v___y_761_, v___x_483_);
if (v___x_773_ == 0)
{
lean_dec(v___y_770_);
lean_dec(v___y_767_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
lean_dec(v___y_763_);
lean_dec(v___y_762_);
lean_dec(v___y_759_);
v___y_476_ = v___y_771_;
goto v___jp_475_;
}
else
{
uint8_t v___x_774_; 
v___x_774_ = l_Lean_Syntax_matchesNull(v___y_767_, v___x_483_);
if (v___x_774_ == 0)
{
lean_dec(v___y_770_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
lean_dec(v___y_763_);
lean_dec(v___y_762_);
lean_dec(v___y_759_);
v___y_476_ = v___y_771_;
goto v___jp_475_;
}
else
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v_ty_778_; lean_object* v___x_779_; lean_object* v_ys_780_; lean_object* v___x_781_; lean_object* v_xs_782_; 
v___x_775_ = l_Lean_Syntax_getArgs(v___y_770_);
lean_dec(v___y_770_);
v___x_776_ = l_Array_extract___redArg(v___x_775_, v___x_484_, v___y_759_);
lean_dec_ref(v___x_775_);
lean_inc(v___y_769_);
lean_inc(v___y_760_);
v___x_777_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_777_, 0, v___y_760_);
lean_ctor_set(v___x_777_, 1, v___y_769_);
lean_ctor_set(v___x_777_, 2, v___x_776_);
v_ty_778_ = l_Lean_Syntax_getArg(v___y_766_, v___x_484_);
lean_dec(v___y_766_);
v___x_779_ = l_Lean_Syntax_getArgs(v___y_762_);
lean_dec(v___y_762_);
v_ys_780_ = l_unsafeCast___redArg(v___x_779_);
lean_dec_ref(v___x_779_);
v___x_781_ = l_Lean_Syntax_getArgs(v___x_777_);
lean_dec_ref_known(v___x_777_, 3);
v_xs_782_ = l_unsafeCast___redArg(v___x_781_);
lean_dec_ref(v___x_781_);
v_x_620_ = v___y_763_;
v_xs_621_ = v_xs_782_;
v_ty_622_ = v_ty_778_;
v_ys_623_ = v_ys_780_;
v_P_624_ = v___y_765_;
v___y_625_ = v___y_768_;
v___y_626_ = v___y_771_;
goto v___jp_619_;
}
}
}
}
v___jp_783_:
{
if (v___y_787_ == 0)
{
lean_dec(v___y_793_);
lean_dec(v___y_792_);
lean_dec(v___y_790_);
lean_dec(v___y_789_);
lean_dec(v___y_788_);
lean_dec(v___y_786_);
lean_dec(v___y_785_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_795_; 
v___x_795_ = l_Lean_Syntax_matchesNull(v___y_789_, v___x_483_);
if (v___x_795_ == 0)
{
lean_dec(v___y_793_);
lean_dec(v___y_792_);
lean_dec(v___y_790_);
lean_dec(v___y_788_);
lean_dec(v___y_786_);
lean_dec(v___y_785_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_794_ == 0)
{
lean_dec(v___y_793_);
lean_dec(v___y_792_);
lean_dec(v___y_790_);
lean_dec(v___y_788_);
lean_dec(v___y_786_);
lean_dec(v___y_785_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_ty_799_; lean_object* v___x_800_; lean_object* v_ys_801_; lean_object* v___x_802_; lean_object* v_xs_803_; 
v___x_796_ = l_Lean_Syntax_getArgs(v___y_788_);
lean_dec(v___y_788_);
v___x_797_ = l_Array_extract___redArg(v___x_796_, v___x_484_, v___y_792_);
lean_dec_ref(v___x_796_);
lean_inc(v___y_791_);
lean_inc(v___y_784_);
v___x_798_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_798_, 0, v___y_784_);
lean_ctor_set(v___x_798_, 1, v___y_791_);
lean_ctor_set(v___x_798_, 2, v___x_797_);
v_ty_799_ = l_Lean_Syntax_getArg(v___y_790_, v___x_484_);
lean_dec(v___y_790_);
v___x_800_ = l_Lean_Syntax_getArgs(v___y_793_);
lean_dec(v___y_793_);
v_ys_801_ = l_unsafeCast___redArg(v___x_800_);
lean_dec_ref(v___x_800_);
v___x_802_ = l_Lean_Syntax_getArgs(v___x_798_);
lean_dec_ref_known(v___x_798_, 3);
v_xs_803_ = l_unsafeCast___redArg(v___x_802_);
lean_dec_ref(v___x_802_);
v_x_620_ = v___y_786_;
v_xs_621_ = v_xs_803_;
v_ty_622_ = v_ty_799_;
v_ys_623_ = v_ys_801_;
v_P_624_ = v___y_785_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_804_:
{
if (v___y_809_ == 0)
{
lean_dec(v___y_814_);
lean_dec(v___y_812_);
lean_dec(v___y_811_);
lean_dec(v___y_807_);
lean_dec(v___y_806_);
lean_dec(v___y_805_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_813_ == 0)
{
lean_dec(v___y_814_);
lean_dec(v___y_812_);
lean_dec(v___y_811_);
lean_dec(v___y_807_);
lean_dec(v___y_806_);
lean_dec(v___y_805_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_815_ == 0)
{
lean_dec(v___y_814_);
lean_dec(v___y_812_);
lean_dec(v___y_811_);
lean_dec(v___y_807_);
lean_dec(v___y_806_);
lean_dec(v___y_805_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v_ty_819_; lean_object* v___x_820_; lean_object* v_ys_821_; lean_object* v___x_822_; lean_object* v_xs_823_; 
v___x_816_ = l_Lean_Syntax_getArgs(v___y_811_);
lean_dec(v___y_811_);
v___x_817_ = l_Array_extract___redArg(v___x_816_, v___x_484_, v___y_805_);
lean_dec_ref(v___x_816_);
lean_inc(v___y_810_);
lean_inc(v___y_808_);
v___x_818_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_818_, 0, v___y_808_);
lean_ctor_set(v___x_818_, 1, v___y_810_);
lean_ctor_set(v___x_818_, 2, v___x_817_);
v_ty_819_ = l_Lean_Syntax_getArg(v___y_812_, v___x_484_);
lean_dec(v___y_812_);
v___x_820_ = l_Lean_Syntax_getArgs(v___y_814_);
lean_dec(v___y_814_);
v_ys_821_ = l_unsafeCast___redArg(v___x_820_);
lean_dec_ref(v___x_820_);
v___x_822_ = l_Lean_Syntax_getArgs(v___x_818_);
lean_dec_ref_known(v___x_818_, 3);
v_xs_823_ = l_unsafeCast___redArg(v___x_822_);
lean_dec_ref(v___x_822_);
v_x_620_ = v___y_807_;
v_xs_621_ = v_xs_823_;
v_ty_622_ = v_ty_819_;
v_ys_623_ = v_ys_821_;
v_P_624_ = v___y_806_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
v___jp_824_:
{
uint8_t v___x_836_; 
lean_inc(v___y_827_);
v___x_836_ = l_Lean_Syntax_matchesNull(v___y_827_, v___y_835_);
if (v___x_836_ == 0)
{
lean_dec(v___y_834_);
lean_dec(v___y_832_);
lean_dec(v___y_831_);
lean_dec(v___y_829_);
lean_dec(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
uint8_t v___x_837_; 
v___x_837_ = l_Lean_Syntax_matchesNull(v___y_834_, v___x_483_);
if (v___x_837_ == 0)
{
lean_dec(v___y_832_);
lean_dec(v___y_831_);
lean_dec(v___y_829_);
lean_dec(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
if (v___y_833_ == 0)
{
lean_dec(v___y_832_);
lean_dec(v___y_831_);
lean_dec(v___y_829_);
lean_dec(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
v___y_476_ = v_a_474_;
goto v___jp_475_;
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v_ty_841_; lean_object* v___x_842_; lean_object* v_ys_843_; lean_object* v___x_844_; lean_object* v_xs_845_; 
v___x_838_ = l_Lean_Syntax_getArgs(v___y_829_);
lean_dec(v___y_829_);
v___x_839_ = l_Array_extract___redArg(v___x_838_, v___x_484_, v___y_831_);
lean_dec_ref(v___x_838_);
lean_inc(v___y_828_);
lean_inc(v___y_830_);
v___x_840_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_840_, 0, v___y_830_);
lean_ctor_set(v___x_840_, 1, v___y_828_);
lean_ctor_set(v___x_840_, 2, v___x_839_);
v_ty_841_ = l_Lean_Syntax_getArg(v___y_827_, v___x_484_);
lean_dec(v___y_827_);
v___x_842_ = l_Lean_Syntax_getArgs(v___y_832_);
lean_dec(v___y_832_);
v_ys_843_ = l_unsafeCast___redArg(v___x_842_);
lean_dec_ref(v___x_842_);
v___x_844_ = l_Lean_Syntax_getArgs(v___x_840_);
lean_dec_ref_known(v___x_840_, 3);
v_xs_845_ = l_unsafeCast___redArg(v___x_844_);
lean_dec_ref(v___x_844_);
v_x_620_ = v___y_826_;
v_xs_621_ = v_xs_845_;
v_ty_622_ = v_ty_841_;
v_ys_623_ = v_ys_843_;
v_P_624_ = v___y_825_;
v___y_625_ = v_a_473_;
v___y_626_ = v_a_474_;
goto v___jp_619_;
}
}
}
}
}
else
{
lean_object* v___x_2414_; 
v___x_2414_ = l_Lean_Syntax_getArg(v___x_485_, v___x_484_);
if (v___x_495_ == 0)
{
lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2427_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68));
lean_inc(v___x_2414_);
v___x_2428_ = l_Lean_Syntax_isOfKind(v___x_2414_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
lean_dec(v___x_2414_);
lean_dec(v___x_485_);
v___x_2429_ = lean_box(1);
v___x_2430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2429_);
lean_ctor_set(v___x_2430_, 1, v_a_474_);
return v___x_2430_;
}
else
{
goto v___jp_2415_;
}
}
else
{
goto v___jp_2415_;
}
v___jp_2415_:
{
lean_object* v_ref_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v_ref_2416_ = lean_ctor_get(v_a_473_, 5);
v___x_2417_ = lean_unsigned_to_nat(3u);
v___x_2418_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2417_);
lean_dec(v___x_485_);
v___x_2419_ = l_Lean_SourceInfo_fromRef(v_ref_2416_, v___x_495_);
v___x_2420_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2419_, 2);
v___x_2421_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2419_);
lean_ctor_set(v___x_2421_, 1, v___x_2420_);
v___x_2422_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2423_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2419_);
lean_ctor_set(v___x_2423_, 1, v___x_2422_);
v___x_2424_ = l_Lean_Syntax_node3(v___x_2419_, v___x_479_, v___x_2421_, v___x_2418_, v___x_2423_);
v___x_2425_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66));
v___x_2426_ = l_Lean_expandExplicitBinders(v___x_2425_, v___x_2414_, v___x_2424_, v_a_473_, v_a_474_);
lean_dec(v___x_2414_);
return v___x_2426_;
}
}
}
else
{
lean_object* v_quotContext_2431_; lean_object* v_currMacroScope_2432_; lean_object* v_ref_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v_quotContext_2431_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2432_ = lean_ctor_get(v_a_473_, 2);
v_ref_2433_ = lean_ctor_get(v_a_473_, 5);
v___x_2434_ = l_Lean_Syntax_getArg(v___x_485_, v___x_483_);
v___x_2435_ = lean_unsigned_to_nat(2u);
v___x_2436_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2435_);
lean_dec(v___x_485_);
v___x_2437_ = l_Lean_SourceInfo_fromRef(v_ref_2433_, v___x_493_);
v___x_2438_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2439_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70);
v___x_2440_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72));
lean_inc(v_currMacroScope_2432_);
lean_inc(v_quotContext_2431_);
v___x_2441_ = l_Lean_addMacroScope(v_quotContext_2431_, v___x_2440_, v_currMacroScope_2432_);
v___x_2442_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75));
lean_inc_n(v___x_2437_, 6);
v___x_2443_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2437_);
lean_ctor_set(v___x_2443_, 1, v___x_2439_);
lean_ctor_set(v___x_2443_, 2, v___x_2441_);
lean_ctor_set(v___x_2443_, 3, v___x_2442_);
v___x_2444_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2445_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2446_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2437_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2448_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2437_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
lean_inc_ref(v___x_2448_);
lean_inc_ref(v___x_2446_);
v___x_2449_ = l_Lean_Syntax_node3(v___x_2437_, v___x_479_, v___x_2446_, v___x_2434_, v___x_2448_);
v___x_2450_ = l_Lean_Syntax_node3(v___x_2437_, v___x_479_, v___x_2446_, v___x_2436_, v___x_2448_);
v___x_2451_ = l_Lean_Syntax_node2(v___x_2437_, v___x_2444_, v___x_2449_, v___x_2450_);
v___x_2452_ = l_Lean_Syntax_node2(v___x_2437_, v___x_2438_, v___x_2443_, v___x_2451_);
v___x_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
lean_ctor_set(v___x_2453_, 1, v_a_474_);
return v___x_2453_;
}
}
else
{
lean_object* v_quotContext_2454_; lean_object* v_currMacroScope_2455_; lean_object* v_ref_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_quotContext_2454_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2455_ = lean_ctor_get(v_a_473_, 2);
v_ref_2456_ = lean_ctor_get(v_a_473_, 5);
v___x_2457_ = l_Lean_Syntax_getArg(v___x_485_, v___x_483_);
v___x_2458_ = lean_unsigned_to_nat(2u);
v___x_2459_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2458_);
lean_dec(v___x_485_);
v___x_2460_ = l_Lean_SourceInfo_fromRef(v_ref_2456_, v___x_491_);
v___x_2461_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2462_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77);
v___x_2463_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79));
lean_inc(v_currMacroScope_2455_);
lean_inc(v_quotContext_2454_);
v___x_2464_ = l_Lean_addMacroScope(v_quotContext_2454_, v___x_2463_, v_currMacroScope_2455_);
v___x_2465_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82));
lean_inc_n(v___x_2460_, 6);
v___x_2466_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2460_);
lean_ctor_set(v___x_2466_, 1, v___x_2462_);
lean_ctor_set(v___x_2466_, 2, v___x_2464_);
lean_ctor_set(v___x_2466_, 3, v___x_2465_);
v___x_2467_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2468_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2460_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2471_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2460_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
lean_inc_ref(v___x_2471_);
lean_inc_ref(v___x_2469_);
v___x_2472_ = l_Lean_Syntax_node3(v___x_2460_, v___x_479_, v___x_2469_, v___x_2457_, v___x_2471_);
v___x_2473_ = l_Lean_Syntax_node3(v___x_2460_, v___x_479_, v___x_2469_, v___x_2459_, v___x_2471_);
v___x_2474_ = l_Lean_Syntax_node2(v___x_2460_, v___x_2467_, v___x_2472_, v___x_2473_);
v___x_2475_ = l_Lean_Syntax_node2(v___x_2460_, v___x_2461_, v___x_2466_, v___x_2474_);
v___x_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2475_);
lean_ctor_set(v___x_2476_, 1, v_a_474_);
return v___x_2476_;
}
}
else
{
lean_object* v_quotContext_2477_; lean_object* v_currMacroScope_2478_; lean_object* v_ref_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v_quotContext_2477_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2478_ = lean_ctor_get(v_a_473_, 2);
v_ref_2479_ = lean_ctor_get(v_a_473_, 5);
v___x_2480_ = l_Lean_Syntax_getArg(v___x_485_, v___x_484_);
lean_dec(v___x_485_);
v___x_2481_ = l_Lean_SourceInfo_fromRef(v_ref_2479_, v___x_489_);
v___x_2482_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2483_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84);
v___x_2484_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86));
lean_inc(v_currMacroScope_2478_);
lean_inc(v_quotContext_2477_);
v___x_2485_ = l_Lean_addMacroScope(v_quotContext_2477_, v___x_2484_, v_currMacroScope_2478_);
v___x_2486_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91));
lean_inc_n(v___x_2481_, 5);
v___x_2487_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2481_);
lean_ctor_set(v___x_2487_, 1, v___x_2483_);
lean_ctor_set(v___x_2487_, 2, v___x_2485_);
lean_ctor_set(v___x_2487_, 3, v___x_2486_);
v___x_2488_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2489_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2481_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2492_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2481_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v___x_2493_ = l_Lean_Syntax_node3(v___x_2481_, v___x_479_, v___x_2490_, v___x_2480_, v___x_2492_);
v___x_2494_ = l_Lean_Syntax_node1(v___x_2481_, v___x_2488_, v___x_2493_);
v___x_2495_ = l_Lean_Syntax_node2(v___x_2481_, v___x_2482_, v___x_2487_, v___x_2494_);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
lean_ctor_set(v___x_2496_, 1, v_a_474_);
return v___x_2496_;
}
}
else
{
lean_object* v_quotContext_2497_; lean_object* v_currMacroScope_2498_; lean_object* v_ref_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v_quotContext_2497_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2498_ = lean_ctor_get(v_a_473_, 2);
v_ref_2499_ = lean_ctor_get(v_a_473_, 5);
v___x_2500_ = l_Lean_Syntax_getArg(v___x_485_, v___x_483_);
v___x_2501_ = lean_unsigned_to_nat(2u);
v___x_2502_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2501_);
lean_dec(v___x_485_);
v___x_2503_ = l_Lean_SourceInfo_fromRef(v_ref_2499_, v___x_487_);
v___x_2504_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2505_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93);
v___x_2506_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95));
lean_inc(v_currMacroScope_2498_);
lean_inc(v_quotContext_2497_);
v___x_2507_ = l_Lean_addMacroScope(v_quotContext_2497_, v___x_2506_, v_currMacroScope_2498_);
v___x_2508_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98));
lean_inc_n(v___x_2503_, 6);
v___x_2509_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2503_);
lean_ctor_set(v___x_2509_, 1, v___x_2505_);
lean_ctor_set(v___x_2509_, 2, v___x_2507_);
lean_ctor_set(v___x_2509_, 3, v___x_2508_);
v___x_2510_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2511_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2503_);
lean_ctor_set(v___x_2512_, 1, v___x_2511_);
v___x_2513_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2503_);
lean_ctor_set(v___x_2514_, 1, v___x_2513_);
lean_inc_ref(v___x_2514_);
lean_inc_ref(v___x_2512_);
v___x_2515_ = l_Lean_Syntax_node3(v___x_2503_, v___x_479_, v___x_2512_, v___x_2500_, v___x_2514_);
v___x_2516_ = l_Lean_Syntax_node3(v___x_2503_, v___x_479_, v___x_2512_, v___x_2502_, v___x_2514_);
v___x_2517_ = l_Lean_Syntax_node2(v___x_2503_, v___x_2510_, v___x_2515_, v___x_2516_);
v___x_2518_ = l_Lean_Syntax_node2(v___x_2503_, v___x_2504_, v___x_2509_, v___x_2517_);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2518_);
lean_ctor_set(v___x_2519_, 1, v_a_474_);
return v___x_2519_;
}
}
else
{
lean_object* v_quotContext_2520_; lean_object* v_currMacroScope_2521_; lean_object* v_ref_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; uint8_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v_quotContext_2520_ = lean_ctor_get(v_a_473_, 1);
v_currMacroScope_2521_ = lean_ctor_get(v_a_473_, 2);
v_ref_2522_ = lean_ctor_get(v_a_473_, 5);
v___x_2523_ = l_Lean_Syntax_getArg(v___x_485_, v___x_483_);
v___x_2524_ = lean_unsigned_to_nat(2u);
v___x_2525_ = l_Lean_Syntax_getArg(v___x_485_, v___x_2524_);
lean_dec(v___x_485_);
v___x_2526_ = 0;
v___x_2527_ = l_Lean_SourceInfo_fromRef(v_ref_2522_, v___x_2526_);
v___x_2528_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2529_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100);
v___x_2530_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102));
lean_inc(v_currMacroScope_2521_);
lean_inc(v_quotContext_2520_);
v___x_2531_ = l_Lean_addMacroScope(v_quotContext_2520_, v___x_2530_, v_currMacroScope_2521_);
v___x_2532_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__105));
lean_inc_n(v___x_2527_, 6);
v___x_2533_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2527_);
lean_ctor_set(v___x_2533_, 1, v___x_2529_);
lean_ctor_set(v___x_2533_, 2, v___x_2531_);
lean_ctor_set(v___x_2533_, 3, v___x_2532_);
v___x_2534_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2535_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2536_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2527_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v___x_2537_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2538_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2527_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
lean_inc_ref(v___x_2538_);
lean_inc_ref(v___x_2536_);
v___x_2539_ = l_Lean_Syntax_node3(v___x_2527_, v___x_479_, v___x_2536_, v___x_2523_, v___x_2538_);
v___x_2540_ = l_Lean_Syntax_node3(v___x_2527_, v___x_479_, v___x_2536_, v___x_2525_, v___x_2538_);
v___x_2541_ = l_Lean_Syntax_node2(v___x_2527_, v___x_2534_, v___x_2539_, v___x_2540_);
v___x_2542_ = l_Lean_Syntax_node2(v___x_2527_, v___x_2528_, v___x_2533_, v___x_2541_);
v___x_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
lean_ctor_set(v___x_2543_, 1, v_a_474_);
return v___x_2543_;
}
}
v___jp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_box(1);
v___x_478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
lean_ctor_set(v___x_478_, 1, v___y_476_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___boxed(lean_object* v_x_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1(v_x_2544_, v_a_2545_, v_a_2546_);
lean_dec_ref(v_a_2545_);
return v_res_2547_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1(void){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0));
v___x_2550_ = l_String_toRawSubstring_x27(v___x_2549_);
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1(lean_object* v_x_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_){
_start:
{
lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2567_ = ((lean_object*)(l_Std_Do_term_u22a2_u209b___00__closed__1));
lean_inc(v_x_2564_);
v___x_2568_ = l_Lean_Syntax_isOfKind(v_x_2564_, v___x_2567_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; lean_object* v___x_2570_; 
lean_dec(v_x_2564_);
v___x_2569_ = lean_box(1);
v___x_2570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
lean_ctor_set(v___x_2570_, 1, v_a_2566_);
return v___x_2570_;
}
else
{
lean_object* v_quotContext_2571_; lean_object* v_currMacroScope_2572_; lean_object* v_ref_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v_quotContext_2571_ = lean_ctor_get(v_a_2565_, 1);
v_currMacroScope_2572_ = lean_ctor_get(v_a_2565_, 2);
v_ref_2573_ = lean_ctor_get(v_a_2565_, 5);
v___x_2574_ = lean_unsigned_to_nat(1u);
v___x_2575_ = l_Lean_Syntax_getArg(v_x_2564_, v___x_2574_);
lean_dec(v_x_2564_);
v___x_2576_ = 0;
v___x_2577_ = l_Lean_SourceInfo_fromRef(v_ref_2573_, v___x_2576_);
v___x_2578_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2579_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1);
v___x_2580_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3));
lean_inc_n(v_currMacroScope_2572_, 2);
lean_inc_n(v_quotContext_2571_, 2);
v___x_2581_ = l_Lean_addMacroScope(v_quotContext_2571_, v___x_2580_, v_currMacroScope_2572_);
v___x_2582_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8));
lean_inc_n(v___x_2577_, 9);
v___x_2583_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2577_);
lean_ctor_set(v___x_2583_, 1, v___x_2579_);
lean_ctor_set(v___x_2583_, 2, v___x_2581_);
lean_ctor_set(v___x_2583_, 3, v___x_2582_);
v___x_2584_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2585_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
v___x_2586_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__6));
v___x_2587_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2577_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___x_2588_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1);
v___x_2589_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2));
v___x_2590_ = l_Lean_addMacroScope(v_quotContext_2571_, v___x_2589_, v_currMacroScope_2572_);
v___x_2591_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6));
v___x_2592_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2577_);
lean_ctor_set(v___x_2592_, 1, v___x_2588_);
lean_ctor_set(v___x_2592_, 2, v___x_2590_);
lean_ctor_set(v___x_2592_, 3, v___x_2591_);
v___x_2593_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__12));
v___x_2594_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2577_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = l_Lean_Syntax_node3(v___x_2577_, v___x_2585_, v___x_2587_, v___x_2592_, v___x_2594_);
v___x_2596_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2597_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2598_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2577_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2600_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2577_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = l_Lean_Syntax_node3(v___x_2577_, v___x_2596_, v___x_2598_, v___x_2575_, v___x_2600_);
v___x_2602_ = l_Lean_Syntax_node2(v___x_2577_, v___x_2584_, v___x_2595_, v___x_2601_);
v___x_2603_ = l_Lean_Syntax_node2(v___x_2577_, v___x_2578_, v___x_2583_, v___x_2602_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v_a_2566_);
return v___x_2604_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___boxed(lean_object* v_x_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1(v_x_2605_, v_a_2606_, v_a_2607_);
lean_dec_ref(v_a_2606_);
return v_res_2608_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1(void){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0));
v___x_2611_ = l_String_toRawSubstring_x27(v___x_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1(lean_object* v_x_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v___x_2630_; uint8_t v___x_2631_; 
v___x_2630_ = ((lean_object*)(l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1));
lean_inc(v_x_2627_);
v___x_2631_ = l_Lean_Syntax_isOfKind(v_x_2627_, v___x_2630_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_dec(v_x_2627_);
v___x_2632_ = lean_box(1);
v___x_2633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2632_);
lean_ctor_set(v___x_2633_, 1, v_a_2629_);
return v___x_2633_;
}
else
{
lean_object* v_quotContext_2634_; lean_object* v_currMacroScope_2635_; lean_object* v_ref_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v_quotContext_2634_ = lean_ctor_get(v_a_2628_, 1);
v_currMacroScope_2635_ = lean_ctor_get(v_a_2628_, 2);
v_ref_2636_ = lean_ctor_get(v_a_2628_, 5);
v___x_2637_ = lean_unsigned_to_nat(0u);
v___x_2638_ = l_Lean_Syntax_getArg(v_x_2627_, v___x_2637_);
v___x_2639_ = lean_unsigned_to_nat(2u);
v___x_2640_ = l_Lean_Syntax_getArg(v_x_2627_, v___x_2639_);
lean_dec(v_x_2627_);
v___x_2641_ = 0;
v___x_2642_ = l_Lean_SourceInfo_fromRef(v_ref_2636_, v___x_2641_);
v___x_2643_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_2644_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1);
v___x_2645_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3));
lean_inc(v_currMacroScope_2635_);
lean_inc(v_quotContext_2634_);
v___x_2646_ = l_Lean_addMacroScope(v_quotContext_2634_, v___x_2645_, v_currMacroScope_2635_);
v___x_2647_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6));
lean_inc_n(v___x_2642_, 6);
v___x_2648_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2642_);
lean_ctor_set(v___x_2648_, 1, v___x_2644_);
lean_ctor_set(v___x_2648_, 2, v___x_2646_);
lean_ctor_set(v___x_2648_, 3, v___x_2647_);
v___x_2649_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2650_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2651_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_2652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2642_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2642_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
lean_inc_ref(v___x_2654_);
lean_inc_ref(v___x_2652_);
v___x_2655_ = l_Lean_Syntax_node3(v___x_2642_, v___x_2650_, v___x_2652_, v___x_2638_, v___x_2654_);
v___x_2656_ = l_Lean_Syntax_node3(v___x_2642_, v___x_2650_, v___x_2652_, v___x_2640_, v___x_2654_);
v___x_2657_ = l_Lean_Syntax_node2(v___x_2642_, v___x_2649_, v___x_2655_, v___x_2656_);
v___x_2658_ = l_Lean_Syntax_node2(v___x_2642_, v___x_2643_, v___x_2648_, v___x_2657_);
v___x_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2658_);
lean_ctor_set(v___x_2659_, 1, v_a_2629_);
return v___x_2659_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___boxed(lean_object* v_x_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1(v_x_2660_, v_a_2661_, v_a_2662_);
lean_dec_ref(v_a_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure(lean_object* v_x_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_){
_start:
{
lean_object* v___x_2667_; uint8_t v___x_2668_; 
v___x_2667_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2664_);
v___x_2668_ = l_Lean_Syntax_isOfKind(v_x_2664_, v___x_2667_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; lean_object* v___x_2670_; 
lean_dec(v_x_2664_);
v___x_2669_ = lean_box(0);
v___x_2670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
lean_ctor_set(v___x_2670_, 1, v_a_2666_);
return v___x_2670_;
}
else
{
lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; uint8_t v___x_2674_; 
v___x_2671_ = lean_unsigned_to_nat(1u);
v___x_2672_ = l_Lean_Syntax_getArg(v_x_2664_, v___x_2671_);
lean_dec(v_x_2664_);
v___x_2673_ = l_Lean_Syntax_getNumArgs(v___x_2672_);
v___x_2674_ = lean_nat_dec_le(v___x_2671_, v___x_2673_);
if (v___x_2674_ == 0)
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
lean_dec(v___x_2673_);
lean_dec(v___x_2672_);
v___x_2675_ = lean_box(0);
v___x_2676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v_a_2666_);
return v___x_2676_;
}
else
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v_ts_2685_; lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = l_Lean_Syntax_getArg(v___x_2672_, v___x_2677_);
v___x_2679_ = l_Lean_Syntax_getArgs(v___x_2672_);
lean_dec(v___x_2672_);
v___x_2680_ = l_Array_extract___redArg(v___x_2679_, v___x_2671_, v___x_2673_);
lean_dec_ref(v___x_2679_);
v___x_2681_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2682_ = lean_box(2);
v___x_2683_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2682_);
lean_ctor_set(v___x_2683_, 1, v___x_2681_);
lean_ctor_set(v___x_2683_, 2, v___x_2680_);
v___x_2684_ = l_Lean_Syntax_getArgs(v___x_2683_);
lean_dec_ref_known(v___x_2683_, 3);
v_ts_2685_ = l_unsafeCast___redArg(v___x_2684_);
lean_dec_ref(v___x_2684_);
v___x_2686_ = lean_array_get_size(v_ts_2685_);
v___x_2687_ = lean_nat_dec_eq(v___x_2686_, v___x_2677_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2688_ = l_Lean_SourceInfo_fromRef(v_a_2665_, v___x_2687_);
v___x_2689_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
v___x_2690_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__6));
lean_inc_n(v___x_2688_, 4);
v___x_2691_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2688_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__12));
v___x_2693_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2688_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = l_Lean_Syntax_node3(v___x_2688_, v___x_2689_, v___x_2691_, v___x_2678_, v___x_2693_);
v___x_2695_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_2696_ = l_unsafeCast___redArg(v_ts_2685_);
lean_dec(v_ts_2685_);
v___x_2697_ = l_Array_append___redArg(v___x_2695_, v___x_2696_);
lean_dec(v___x_2696_);
v___x_2698_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2688_);
lean_ctor_set(v___x_2698_, 1, v___x_2681_);
lean_ctor_set(v___x_2698_, 2, v___x_2697_);
v___x_2699_ = l_Lean_Syntax_node2(v___x_2688_, v___x_2667_, v___x_2694_, v___x_2698_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
lean_ctor_set(v___x_2700_, 1, v_a_2666_);
return v___x_2700_;
}
else
{
uint8_t v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
lean_dec(v_ts_2685_);
v___x_2701_ = 0;
v___x_2702_ = l_Lean_SourceInfo_fromRef(v_a_2665_, v___x_2701_);
v___x_2703_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
v___x_2704_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__6));
lean_inc_n(v___x_2702_, 2);
v___x_2705_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2702_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__12));
v___x_2707_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2702_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
v___x_2708_ = l_Lean_Syntax_node3(v___x_2702_, v___x_2703_, v___x_2705_, v___x_2678_, v___x_2707_);
v___x_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
lean_ctor_set(v___x_2709_, 1, v_a_2666_);
return v___x_2709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure___boxed(lean_object* v_x_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Std_Do_SPred_Notation_unexpandPure(v_x_2710_, v_a_2711_, v_a_2712_);
lean_dec(v_a_2711_);
return v_res_2713_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6(void){
_start:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2726_ = lean_unsigned_to_nat(0u);
v___x_2727_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_2728_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5));
v___x_2729_ = l_Lean_addMacroScope(v___x_2728_, v___x_2727_, v___x_2726_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(lean_object* v_x_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2759_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
lean_inc(v_x_2756_);
v___x_2760_ = l_Lean_Syntax_isOfKind(v_x_2756_, v___x_2759_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; uint8_t v___x_2762_; 
v___x_2761_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21));
lean_inc(v_x_2756_);
v___x_2762_ = l_Lean_Syntax_isOfKind(v_x_2756_, v___x_2761_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; uint8_t v___x_2764_; 
v___x_2763_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1));
lean_inc(v_x_2756_);
v___x_2764_ = l_Lean_Syntax_isOfKind(v_x_2756_, v___x_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; 
v___x_2765_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47));
v___x_2766_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
lean_inc(v_x_2756_);
v___x_2767_ = l_Lean_Syntax_isOfKind(v_x_2756_, v___x_2766_);
if (v___x_2767_ == 0)
{
lean_object* v___x_2768_; uint8_t v___x_2769_; 
v___x_2768_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3));
lean_inc(v_x_2756_);
v___x_2769_ = l_Lean_Syntax_isOfKind(v_x_2756_, v___x_2768_);
if (v___x_2769_ == 0)
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v_x_2756_);
lean_ctor_set(v___x_2770_, 1, v___y_2758_);
return v___x_2770_;
}
else
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; 
v___x_2771_ = lean_unsigned_to_nat(0u);
v___x_2772_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2771_);
v___x_2773_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
lean_inc(v___x_2772_);
v___x_2774_ = l_Lean_Syntax_isOfKind(v___x_2772_, v___x_2773_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; 
lean_dec(v___x_2772_);
v___x_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2775_, 0, v_x_2756_);
lean_ctor_set(v___x_2775_, 1, v___y_2758_);
return v___x_2775_;
}
else
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; 
v___x_2776_ = lean_unsigned_to_nat(1u);
v___x_2777_ = l_Lean_Syntax_getArg(v___x_2772_, v___x_2776_);
lean_dec(v___x_2772_);
v___x_2778_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
lean_inc(v___x_2777_);
v___x_2779_ = l_Lean_Syntax_isOfKind(v___x_2777_, v___x_2778_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; 
lean_dec(v___x_2777_);
v___x_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2780_, 0, v_x_2756_);
lean_ctor_set(v___x_2780_, 1, v___y_2758_);
return v___x_2780_;
}
else
{
lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; 
v___x_2781_ = l_Lean_Syntax_getArg(v___x_2777_, v___x_2771_);
lean_dec(v___x_2777_);
v___x_2782_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_2783_ = l_Lean_Syntax_matchesIdent(v___x_2781_, v___x_2782_);
lean_dec(v___x_2781_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; 
v___x_2784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2784_, 0, v_x_2756_);
lean_ctor_set(v___x_2784_, 1, v___y_2758_);
return v___x_2784_;
}
else
{
lean_object* v___x_2785_; lean_object* v___x_2786_; uint8_t v___x_2787_; 
v___x_2785_ = lean_unsigned_to_nat(3u);
v___x_2786_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2785_);
lean_inc(v___x_2786_);
v___x_2787_ = l_Lean_Syntax_matchesNull(v___x_2786_, v___x_2776_);
if (v___x_2787_ == 0)
{
lean_object* v___x_2788_; 
lean_dec(v___x_2786_);
v___x_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2788_, 0, v_x_2756_);
lean_ctor_set(v___x_2788_, 1, v___y_2758_);
return v___x_2788_;
}
else
{
lean_object* v_P_2789_; lean_object* v___x_2790_; 
v_P_2789_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2776_);
lean_dec(v_x_2756_);
v___x_2790_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_2789_, v___y_2757_, v___y_2758_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2816_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
v_a_2792_ = lean_ctor_get(v___x_2790_, 1);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2794_ = v___x_2790_;
v_isShared_2795_ = v_isSharedCheck_2816_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_inc(v_a_2791_);
lean_dec(v___x_2790_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2816_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2814_; 
v___x_2796_ = l_Lean_Syntax_getArg(v___x_2786_, v___x_2771_);
lean_dec(v___x_2786_);
v___x_2797_ = l_Lean_SourceInfo_fromRef(v___y_2757_, v___x_2767_);
v___x_2798_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
lean_inc_n(v___x_2797_, 7);
v___x_2799_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2797_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_2801_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6);
v___x_2802_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14));
v___x_2803_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2797_);
lean_ctor_set(v___x_2803_, 1, v___x_2800_);
lean_ctor_set(v___x_2803_, 2, v___x_2801_);
lean_ctor_set(v___x_2803_, 3, v___x_2802_);
v___x_2804_ = l_Lean_Syntax_node1(v___x_2797_, v___x_2778_, v___x_2803_);
v___x_2805_ = l_Lean_Syntax_node2(v___x_2797_, v___x_2773_, v___x_2799_, v___x_2804_);
v___x_2806_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57));
v___x_2807_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2797_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2809_ = l_Lean_Syntax_node1(v___x_2797_, v___x_2808_, v___x_2796_);
v___x_2810_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2811_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2797_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = l_Lean_Syntax_node5(v___x_2797_, v___x_2768_, v___x_2805_, v_a_2791_, v___x_2807_, v___x_2809_, v___x_2811_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2812_);
v___x_2814_ = v___x_2794_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2812_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v_a_2792_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
else
{
lean_dec(v___x_2786_);
return v___x_2790_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; 
v___x_2817_ = lean_unsigned_to_nat(1u);
v___x_2818_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2817_);
v___x_2819_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
lean_inc(v___x_2818_);
v___x_2820_ = l_Lean_Syntax_isOfKind(v___x_2818_, v___x_2819_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; 
lean_dec(v___x_2818_);
v___x_2821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2821_, 0, v_x_2756_);
lean_ctor_set(v___x_2821_, 1, v___y_2758_);
return v___x_2821_;
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; 
v___x_2822_ = lean_unsigned_to_nat(0u);
v___x_2823_ = l_Lean_Syntax_getArg(v___x_2818_, v___x_2817_);
v___x_2824_ = l_Lean_Syntax_matchesNull(v___x_2823_, v___x_2822_);
if (v___x_2824_ == 0)
{
lean_object* v___x_2825_; 
lean_dec(v___x_2818_);
v___x_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2825_, 0, v_x_2756_);
lean_ctor_set(v___x_2825_, 1, v___y_2758_);
return v___x_2825_;
}
else
{
lean_object* v___x_2826_; lean_object* v_b_2827_; lean_object* v___x_2828_; 
lean_dec(v_x_2756_);
v___x_2826_ = lean_unsigned_to_nat(3u);
v_b_2827_ = l_Lean_Syntax_getArg(v___x_2818_, v___x_2826_);
v___x_2828_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_b_2827_, v___y_2757_, v___y_2758_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v_a_2829_; lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2852_; 
v_a_2829_ = lean_ctor_get(v___x_2828_, 0);
v_a_2830_ = lean_ctor_get(v___x_2828_, 1);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2832_ = v___x_2828_;
v_isShared_2833_ = v_isSharedCheck_2852_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_inc(v_a_2829_);
lean_dec(v___x_2828_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2852_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v_xs_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2834_ = l_Lean_Syntax_getArg(v___x_2818_, v___x_2822_);
lean_dec(v___x_2818_);
v___x_2835_ = l_Lean_Syntax_getArgs(v___x_2834_);
lean_dec(v___x_2834_);
v_xs_2836_ = l_unsafeCast___redArg(v___x_2835_);
lean_dec_ref(v___x_2835_);
v___x_2837_ = l_Lean_SourceInfo_fromRef(v___y_2757_, v___x_2764_);
lean_inc_n(v___x_2837_, 5);
v___x_2838_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
lean_ctor_set(v___x_2838_, 1, v___x_2765_);
v___x_2839_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2840_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_2841_ = l_unsafeCast___redArg(v_xs_2836_);
lean_dec(v_xs_2836_);
v___x_2842_ = l_Array_append___redArg(v___x_2840_, v___x_2841_);
lean_dec(v___x_2841_);
v___x_2843_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2837_);
lean_ctor_set(v___x_2843_, 1, v___x_2839_);
lean_ctor_set(v___x_2843_, 2, v___x_2842_);
v___x_2844_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2837_);
lean_ctor_set(v___x_2844_, 1, v___x_2839_);
lean_ctor_set(v___x_2844_, 2, v___x_2840_);
v___x_2845_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2846_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2837_);
lean_ctor_set(v___x_2846_, 1, v___x_2845_);
v___x_2847_ = l_Lean_Syntax_node4(v___x_2837_, v___x_2819_, v___x_2843_, v___x_2844_, v___x_2846_, v_a_2829_);
v___x_2848_ = l_Lean_Syntax_node2(v___x_2837_, v___x_2766_, v___x_2838_, v___x_2847_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 0, v___x_2848_);
v___x_2850_ = v___x_2832_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2848_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v_a_2830_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
else
{
lean_dec(v___x_2818_);
return v___x_2828_;
}
}
}
}
}
else
{
lean_object* v___x_2853_; lean_object* v_t_2854_; lean_object* v___x_2855_; 
v___x_2853_ = lean_unsigned_to_nat(3u);
v_t_2854_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2853_);
v___x_2855_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_t_2854_, v___y_2757_, v___y_2758_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2885_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
v_a_2857_ = lean_ctor_get(v___x_2855_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2855_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2859_ = v___x_2855_;
v_isShared_2860_ = v_isSharedCheck_2885_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_inc(v_a_2856_);
lean_dec(v___x_2855_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2885_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2861_; lean_object* v_e_2862_; lean_object* v___x_2863_; 
v___x_2861_ = lean_unsigned_to_nat(5u);
v_e_2862_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2861_);
v___x_2863_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_e_2862_, v___y_2757_, v_a_2857_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2884_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_a_2865_ = lean_ctor_get(v___x_2863_, 1);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2867_ = v___x_2863_;
v_isShared_2868_ = v_isSharedCheck_2884_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2884_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2874_; 
v___x_2869_ = lean_unsigned_to_nat(1u);
v___x_2870_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2869_);
lean_dec(v_x_2756_);
v___x_2871_ = l_Lean_SourceInfo_fromRef(v___y_2757_, v___x_2762_);
v___x_2872_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15));
lean_inc(v___x_2871_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set_tag(v___x_2859_, 2);
lean_ctor_set(v___x_2859_, 1, v___x_2872_);
lean_ctor_set(v___x_2859_, 0, v___x_2871_);
v___x_2874_ = v___x_2859_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2871_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2881_; 
v___x_2875_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16));
lean_inc_n(v___x_2871_, 2);
v___x_2876_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2871_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17));
v___x_2878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2871_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
v___x_2879_ = l_Lean_Syntax_node6(v___x_2871_, v___x_2763_, v___x_2874_, v___x_2870_, v___x_2876_, v_a_2856_, v___x_2878_, v_a_2864_);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 0, v___x_2879_);
v___x_2881_ = v___x_2867_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2879_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v_a_2865_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
}
else
{
lean_del_object(v___x_2859_);
lean_dec(v_a_2856_);
lean_dec(v_x_2756_);
return v___x_2863_;
}
}
}
else
{
lean_dec(v_x_2756_);
return v___x_2855_;
}
}
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; uint8_t v___x_2889_; 
v___x_2886_ = lean_unsigned_to_nat(0u);
v___x_2887_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2886_);
v___x_2888_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
lean_inc(v___x_2887_);
v___x_2889_ = l_Lean_Syntax_isOfKind(v___x_2887_, v___x_2888_);
if (v___x_2889_ == 0)
{
lean_object* v___x_2890_; 
lean_dec(v___x_2887_);
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v_x_2756_);
lean_ctor_set(v___x_2890_, 1, v___y_2758_);
return v___x_2890_;
}
else
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; 
v___x_2891_ = lean_unsigned_to_nat(1u);
v___x_2892_ = l_Lean_Syntax_getArg(v___x_2887_, v___x_2891_);
lean_dec(v___x_2887_);
v___x_2893_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
lean_inc(v___x_2892_);
v___x_2894_ = l_Lean_Syntax_isOfKind(v___x_2892_, v___x_2893_);
if (v___x_2894_ == 0)
{
lean_object* v___x_2895_; 
lean_dec(v___x_2892_);
v___x_2895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2895_, 0, v_x_2756_);
lean_ctor_set(v___x_2895_, 1, v___y_2758_);
return v___x_2895_;
}
else
{
lean_object* v___x_2896_; lean_object* v___x_2897_; uint8_t v___x_2898_; 
v___x_2896_ = l_Lean_Syntax_getArg(v___x_2892_, v___x_2886_);
lean_dec(v___x_2892_);
v___x_2897_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29);
v___x_2898_ = l_Lean_Syntax_matchesIdent(v___x_2896_, v___x_2897_);
lean_dec(v___x_2896_);
if (v___x_2898_ == 0)
{
lean_object* v___x_2899_; 
v___x_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2899_, 0, v_x_2756_);
lean_ctor_set(v___x_2899_, 1, v___y_2758_);
return v___x_2899_;
}
else
{
lean_object* v_P_2900_; lean_object* v___x_2901_; 
v_P_2900_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2891_);
lean_dec(v_x_2756_);
v___x_2901_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_2900_, v___y_2757_, v___y_2758_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2922_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
v_a_2903_ = lean_ctor_get(v___x_2901_, 1);
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2905_ = v___x_2901_;
v_isShared_2906_ = v_isSharedCheck_2922_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_inc(v_a_2902_);
lean_dec(v___x_2901_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2922_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2920_; 
v___x_2907_ = l_Lean_SourceInfo_fromRef(v___y_2757_, v___x_2760_);
v___x_2908_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24));
lean_inc_n(v___x_2907_, 5);
v___x_2909_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2907_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28);
v___x_2911_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6);
v___x_2912_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14));
v___x_2913_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2907_);
lean_ctor_set(v___x_2913_, 1, v___x_2910_);
lean_ctor_set(v___x_2913_, 2, v___x_2911_);
lean_ctor_set(v___x_2913_, 3, v___x_2912_);
v___x_2914_ = l_Lean_Syntax_node1(v___x_2907_, v___x_2893_, v___x_2913_);
v___x_2915_ = l_Lean_Syntax_node2(v___x_2907_, v___x_2888_, v___x_2909_, v___x_2914_);
v___x_2916_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2917_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2907_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
v___x_2918_ = l_Lean_Syntax_node3(v___x_2907_, v___x_2761_, v___x_2915_, v_a_2902_, v___x_2917_);
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 0, v___x_2918_);
v___x_2920_ = v___x_2905_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2918_);
lean_ctor_set(v_reuseFailAlloc_2921_, 1, v_a_2903_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
else
{
return v___x_2901_;
}
}
}
}
}
}
else
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2923_ = lean_unsigned_to_nat(1u);
v___x_2924_ = l_Lean_Syntax_getArg(v_x_2756_, v___x_2923_);
lean_dec(v_x_2756_);
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2924_);
lean_ctor_set(v___x_2925_, 1, v___y_2758_);
return v___x_2925_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___boxed(lean_object* v_x_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_x_2926_, v___y_2927_, v___y_2928_);
lean_dec(v___y_2927_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails(lean_object* v_x_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_){
_start:
{
lean_object* v___x_2934_; uint8_t v___x_2935_; 
v___x_2934_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2931_);
v___x_2935_ = l_Lean_Syntax_isOfKind(v_x_2931_, v___x_2934_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
lean_dec(v_x_2931_);
v___x_2936_ = lean_box(0);
v___x_2937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
lean_ctor_set(v___x_2937_, 1, v_a_2933_);
return v___x_2937_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2938_ = lean_unsigned_to_nat(1u);
v___x_2939_ = l_Lean_Syntax_getArg(v_x_2931_, v___x_2938_);
lean_dec(v_x_2931_);
v___x_2940_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2939_);
v___x_2941_ = l_Lean_Syntax_matchesNull(v___x_2939_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_dec(v___x_2939_);
v___x_2942_ = lean_box(0);
v___x_2943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
lean_ctor_set(v___x_2943_, 1, v_a_2933_);
return v___x_2943_;
}
else
{
lean_object* v___x_2944_; lean_object* v_P_2945_; lean_object* v___x_2946_; 
v___x_2944_ = lean_unsigned_to_nat(0u);
v_P_2945_ = l_Lean_Syntax_getArg(v___x_2939_, v___x_2944_);
v___x_2946_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_2945_, v_a_2932_, v_a_2933_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v_a_2948_; lean_object* v_Q_2949_; lean_object* v___x_2950_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
v_a_2948_ = lean_ctor_get(v___x_2946_, 1);
lean_inc(v_a_2948_);
lean_dec_ref_known(v___x_2946_, 2);
v_Q_2949_ = l_Lean_Syntax_getArg(v___x_2939_, v___x_2938_);
lean_dec(v___x_2939_);
v___x_2950_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_2949_, v_a_2932_, v_a_2948_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2986_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
v_a_2952_ = lean_ctor_get(v___x_2950_, 1);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2954_ = v___x_2950_;
v_isShared_2955_ = v_isSharedCheck_2986_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_inc(v_a_2951_);
lean_dec(v___x_2950_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2986_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2956_; uint8_t v___x_2957_; 
v___x_2956_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
lean_inc(v_a_2947_);
v___x_2957_ = l_Lean_Syntax_isOfKind(v_a_2947_, v___x_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2964_; 
v___x_2958_ = l_Lean_SourceInfo_fromRef(v_a_2932_, v___x_2957_);
v___x_2959_ = ((lean_object*)(l_Std_Do_term___u22a2_u209b___00__closed__1));
v___x_2960_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandEntails___closed__0));
lean_inc(v___x_2958_);
v___x_2961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2958_);
lean_ctor_set(v___x_2961_, 1, v___x_2960_);
v___x_2962_ = l_Lean_Syntax_node3(v___x_2958_, v___x_2959_, v_a_2947_, v___x_2961_, v_a_2951_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v___x_2962_);
v___x_2964_ = v___x_2954_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v_a_2952_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
else
{
lean_object* v___x_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2966_ = l_Lean_Syntax_getArg(v_a_2947_, v___x_2938_);
v___x_2967_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2));
v___x_2968_ = l_Lean_Syntax_matchesIdent(v___x_2966_, v___x_2967_);
lean_dec(v___x_2966_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2975_; 
v___x_2969_ = l_Lean_SourceInfo_fromRef(v_a_2932_, v___x_2968_);
v___x_2970_ = ((lean_object*)(l_Std_Do_term___u22a2_u209b___00__closed__1));
v___x_2971_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandEntails___closed__0));
lean_inc(v___x_2969_);
v___x_2972_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2969_);
lean_ctor_set(v___x_2972_, 1, v___x_2971_);
v___x_2973_ = l_Lean_Syntax_node3(v___x_2969_, v___x_2970_, v_a_2947_, v___x_2972_, v_a_2951_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v___x_2973_);
v___x_2975_ = v___x_2954_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_2976_, 1, v_a_2952_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
else
{
uint8_t v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2984_; 
lean_dec(v_a_2947_);
v___x_2977_ = 0;
v___x_2978_ = l_Lean_SourceInfo_fromRef(v_a_2932_, v___x_2977_);
v___x_2979_ = ((lean_object*)(l_Std_Do_term_u22a2_u209b___00__closed__1));
v___x_2980_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandEntails___closed__0));
lean_inc(v___x_2978_);
v___x_2981_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2978_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = l_Lean_Syntax_node2(v___x_2978_, v___x_2979_, v___x_2981_, v_a_2951_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v___x_2982_);
v___x_2984_ = v___x_2954_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v___x_2982_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_a_2952_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec(v_a_2947_);
v_a_2987_ = lean_ctor_get(v___x_2950_, 0);
v_a_2988_ = lean_ctor_get(v___x_2950_, 1);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2950_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_inc(v_a_2987_);
lean_dec(v___x_2950_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2987_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
lean_dec(v___x_2939_);
v_a_2996_ = lean_ctor_get(v___x_2946_, 0);
v_a_2997_ = lean_ctor_get(v___x_2946_, 1);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2946_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_inc(v_a_2996_);
lean_dec(v___x_2946_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2996_);
lean_ctor_set(v_reuseFailAlloc_3003_, 1, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails___boxed(lean_object* v_x_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l_Std_Do_SPred_Notation_unexpandEntails(v_x_3005_, v_a_3006_, v_a_3007_);
lean_dec(v_a_3006_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails(lean_object* v_x_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_){
_start:
{
lean_object* v___x_3013_; uint8_t v___x_3014_; 
v___x_3013_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3010_);
v___x_3014_ = l_Lean_Syntax_isOfKind(v_x_3010_, v___x_3013_);
if (v___x_3014_ == 0)
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
lean_dec(v_x_3010_);
v___x_3015_ = lean_box(0);
v___x_3016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3015_);
lean_ctor_set(v___x_3016_, 1, v_a_3012_);
return v___x_3016_;
}
else
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; 
v___x_3017_ = lean_unsigned_to_nat(1u);
v___x_3018_ = l_Lean_Syntax_getArg(v_x_3010_, v___x_3017_);
lean_dec(v_x_3010_);
v___x_3019_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3018_);
v___x_3020_ = l_Lean_Syntax_matchesNull(v___x_3018_, v___x_3019_);
if (v___x_3020_ == 0)
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
lean_dec(v___x_3018_);
v___x_3021_ = lean_box(0);
v___x_3022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
lean_ctor_set(v___x_3022_, 1, v_a_3012_);
return v___x_3022_;
}
else
{
lean_object* v___x_3023_; lean_object* v_P_3024_; lean_object* v___x_3025_; 
v___x_3023_ = lean_unsigned_to_nat(0u);
v_P_3024_ = l_Lean_Syntax_getArg(v___x_3018_, v___x_3023_);
v___x_3025_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_3024_, v_a_3011_, v_a_3012_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v_a_3027_; lean_object* v_Q_3028_; lean_object* v___x_3029_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_a_3026_);
v_a_3027_ = lean_ctor_get(v___x_3025_, 1);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3025_, 2);
v_Q_3028_ = l_Lean_Syntax_getArg(v___x_3018_, v___x_3017_);
lean_dec(v___x_3018_);
v___x_3029_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_3028_, v_a_3011_, v_a_3027_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3044_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
v_a_3031_ = lean_ctor_get(v___x_3029_, 1);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3033_ = v___x_3029_;
v_isShared_3034_ = v_isSharedCheck_3044_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_inc(v_a_3030_);
lean_dec(v___x_3029_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3044_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
uint8_t v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3042_; 
v___x_3035_ = 0;
v___x_3036_ = l_Lean_SourceInfo_fromRef(v_a_3011_, v___x_3035_);
v___x_3037_ = ((lean_object*)(l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1));
v___x_3038_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandBientails___closed__0));
lean_inc(v___x_3036_);
v___x_3039_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3036_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3037_, v_a_3026_, v___x_3039_, v_a_3030_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v___x_3040_);
v___x_3042_ = v___x_3033_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v___x_3040_);
lean_ctor_set(v_reuseFailAlloc_3043_, 1, v_a_3031_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
else
{
lean_object* v_a_3045_; lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec(v_a_3026_);
v_a_3045_ = lean_ctor_get(v___x_3029_, 0);
v_a_3046_ = lean_ctor_get(v___x_3029_, 1);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3029_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_inc(v_a_3045_);
lean_dec(v___x_3029_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3045_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
else
{
lean_object* v_a_3054_; lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
lean_dec(v___x_3018_);
v_a_3054_ = lean_ctor_get(v___x_3025_, 0);
v_a_3055_ = lean_ctor_get(v___x_3025_, 1);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3025_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_inc(v_a_3054_);
lean_dec(v___x_3025_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3054_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails___boxed(lean_object* v_x_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l_Std_Do_SPred_Notation_unexpandBientails(v_x_3063_, v_a_3064_, v_a_3065_);
lean_dec(v_a_3064_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd(lean_object* v_x_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_){
_start:
{
lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3071_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3068_);
v___x_3072_ = l_Lean_Syntax_isOfKind(v_x_3068_, v___x_3071_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; lean_object* v___x_3074_; 
lean_dec(v_x_3068_);
v___x_3073_ = lean_box(0);
v___x_3074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
lean_ctor_set(v___x_3074_, 1, v_a_3070_);
return v___x_3074_;
}
else
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3075_ = lean_unsigned_to_nat(1u);
v___x_3076_ = l_Lean_Syntax_getArg(v_x_3068_, v___x_3075_);
lean_dec(v_x_3068_);
v___x_3077_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3076_);
v___x_3078_ = l_Lean_Syntax_matchesNull(v___x_3076_, v___x_3077_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3079_);
lean_ctor_set(v___x_3080_, 1, v_a_3070_);
return v___x_3080_;
}
else
{
lean_object* v___x_3081_; lean_object* v_P_3082_; lean_object* v___x_3083_; 
v___x_3081_ = lean_unsigned_to_nat(0u);
v_P_3082_ = l_Lean_Syntax_getArg(v___x_3076_, v___x_3081_);
v___x_3083_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_3082_, v_a_3069_, v_a_3070_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v_a_3085_; lean_object* v_Q_3086_; lean_object* v___x_3087_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
v_a_3085_ = lean_ctor_get(v___x_3083_, 1);
lean_inc(v_a_3085_);
lean_dec_ref_known(v___x_3083_, 2);
v_Q_3086_ = l_Lean_Syntax_getArg(v___x_3076_, v___x_3075_);
lean_dec(v___x_3076_);
v___x_3087_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_3086_, v_a_3069_, v_a_3085_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3108_; 
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
v_a_3089_ = lean_ctor_get(v___x_3087_, 1);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3091_ = v___x_3087_;
v_isShared_3092_ = v_isSharedCheck_3108_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_inc(v_a_3088_);
lean_dec(v___x_3087_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3108_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
uint8_t v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3106_; 
v___x_3093_ = 0;
v___x_3094_ = l_Lean_SourceInfo_fromRef(v_a_3069_, v___x_3093_);
v___x_3095_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3096_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3094_, 4);
v___x_3097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3094_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1));
v___x_3099_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandAnd___closed__0));
v___x_3100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3094_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = l_Lean_Syntax_node3(v___x_3094_, v___x_3098_, v_a_3084_, v___x_3100_, v_a_3088_);
v___x_3102_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3094_);
lean_ctor_set(v___x_3103_, 1, v___x_3102_);
v___x_3104_ = l_Lean_Syntax_node3(v___x_3094_, v___x_3095_, v___x_3097_, v___x_3101_, v___x_3103_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 0, v___x_3104_);
v___x_3106_ = v___x_3091_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3107_, 1, v_a_3089_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
else
{
lean_object* v_a_3109_; lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3117_; 
lean_dec(v_a_3084_);
v_a_3109_ = lean_ctor_get(v___x_3087_, 0);
v_a_3110_ = lean_ctor_get(v___x_3087_, 1);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3112_ = v___x_3087_;
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_inc(v_a_3109_);
lean_dec(v___x_3087_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3109_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v_a_3110_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
}
else
{
lean_object* v_a_3118_; lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_dec(v___x_3076_);
v_a_3118_ = lean_ctor_get(v___x_3083_, 0);
v_a_3119_ = lean_ctor_get(v___x_3083_, 1);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3083_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_inc(v_a_3118_);
lean_dec(v___x_3083_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3118_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd___boxed(lean_object* v_x_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l_Std_Do_SPred_Notation_unexpandAnd(v_x_3127_, v_a_3128_, v_a_3129_);
lean_dec(v_a_3128_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr(lean_object* v_x_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_){
_start:
{
lean_object* v___x_3135_; uint8_t v___x_3136_; 
v___x_3135_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3132_);
v___x_3136_ = l_Lean_Syntax_isOfKind(v_x_3132_, v___x_3135_);
if (v___x_3136_ == 0)
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
lean_dec(v_x_3132_);
v___x_3137_ = lean_box(0);
v___x_3138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
lean_ctor_set(v___x_3138_, 1, v_a_3134_);
return v___x_3138_;
}
else
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; uint8_t v___x_3142_; 
v___x_3139_ = lean_unsigned_to_nat(1u);
v___x_3140_ = l_Lean_Syntax_getArg(v_x_3132_, v___x_3139_);
lean_dec(v_x_3132_);
v___x_3141_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3140_);
v___x_3142_ = l_Lean_Syntax_matchesNull(v___x_3140_, v___x_3141_);
if (v___x_3142_ == 0)
{
lean_object* v___x_3143_; lean_object* v___x_3144_; 
lean_dec(v___x_3140_);
v___x_3143_ = lean_box(0);
v___x_3144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set(v___x_3144_, 1, v_a_3134_);
return v___x_3144_;
}
else
{
lean_object* v___x_3145_; lean_object* v_P_3146_; lean_object* v___x_3147_; 
v___x_3145_ = lean_unsigned_to_nat(0u);
v_P_3146_ = l_Lean_Syntax_getArg(v___x_3140_, v___x_3145_);
v___x_3147_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_3146_, v_a_3133_, v_a_3134_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; lean_object* v_a_3149_; lean_object* v_Q_3150_; lean_object* v___x_3151_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
v_a_3149_ = lean_ctor_get(v___x_3147_, 1);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3147_, 2);
v_Q_3150_ = l_Lean_Syntax_getArg(v___x_3140_, v___x_3139_);
lean_dec(v___x_3140_);
v___x_3151_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_3150_, v_a_3133_, v_a_3149_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3172_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
v_a_3153_ = lean_ctor_get(v___x_3151_, 1);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3151_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3155_ = v___x_3151_;
v_isShared_3156_ = v_isSharedCheck_3172_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_inc(v_a_3152_);
lean_dec(v___x_3151_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3172_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
uint8_t v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3170_; 
v___x_3157_ = 0;
v___x_3158_ = l_Lean_SourceInfo_fromRef(v_a_3133_, v___x_3157_);
v___x_3159_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3160_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3158_, 4);
v___x_3161_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3158_);
lean_ctor_set(v___x_3161_, 1, v___x_3160_);
v___x_3162_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3));
v___x_3163_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandOr___closed__0));
v___x_3164_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3158_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = l_Lean_Syntax_node3(v___x_3158_, v___x_3162_, v_a_3148_, v___x_3164_, v_a_3152_);
v___x_3166_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3167_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3158_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = l_Lean_Syntax_node3(v___x_3158_, v___x_3159_, v___x_3161_, v___x_3165_, v___x_3167_);
if (v_isShared_3156_ == 0)
{
lean_ctor_set(v___x_3155_, 0, v___x_3168_);
v___x_3170_ = v___x_3155_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3168_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_a_3153_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
else
{
lean_object* v_a_3173_; lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3181_; 
lean_dec(v_a_3148_);
v_a_3173_ = lean_ctor_get(v___x_3151_, 0);
v_a_3174_ = lean_ctor_get(v___x_3151_, 1);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3151_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3176_ = v___x_3151_;
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_inc(v_a_3173_);
lean_dec(v___x_3151_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3179_; 
if (v_isShared_3177_ == 0)
{
v___x_3179_ = v___x_3176_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_a_3173_);
lean_ctor_set(v_reuseFailAlloc_3180_, 1, v_a_3174_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
}
}
else
{
lean_object* v_a_3182_; lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
lean_dec(v___x_3140_);
v_a_3182_ = lean_ctor_get(v___x_3147_, 0);
v_a_3183_ = lean_ctor_get(v___x_3147_, 1);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3147_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_inc(v_a_3182_);
lean_dec(v___x_3147_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3182_);
lean_ctor_set(v_reuseFailAlloc_3189_, 1, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr___boxed(lean_object* v_x_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Std_Do_SPred_Notation_unexpandOr(v_x_3191_, v_a_3192_, v_a_3193_);
lean_dec(v_a_3192_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot(lean_object* v_x_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_){
_start:
{
lean_object* v___x_3199_; uint8_t v___x_3200_; 
v___x_3199_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3196_);
v___x_3200_ = l_Lean_Syntax_isOfKind(v_x_3196_, v___x_3199_);
if (v___x_3200_ == 0)
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
lean_dec(v_x_3196_);
v___x_3201_ = lean_box(0);
v___x_3202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
lean_ctor_set(v___x_3202_, 1, v_a_3198_);
return v___x_3202_;
}
else
{
lean_object* v___x_3203_; lean_object* v___x_3204_; uint8_t v___x_3205_; 
v___x_3203_ = lean_unsigned_to_nat(1u);
v___x_3204_ = l_Lean_Syntax_getArg(v_x_3196_, v___x_3203_);
lean_dec(v_x_3196_);
lean_inc(v___x_3204_);
v___x_3205_ = l_Lean_Syntax_matchesNull(v___x_3204_, v___x_3203_);
if (v___x_3205_ == 0)
{
lean_object* v___x_3206_; lean_object* v___x_3207_; 
lean_dec(v___x_3204_);
v___x_3206_ = lean_box(0);
v___x_3207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
lean_ctor_set(v___x_3207_, 1, v_a_3198_);
return v___x_3207_;
}
else
{
lean_object* v___x_3208_; lean_object* v_P_3209_; lean_object* v___x_3210_; 
v___x_3208_ = lean_unsigned_to_nat(0u);
v_P_3209_ = l_Lean_Syntax_getArg(v___x_3204_, v___x_3208_);
lean_dec(v___x_3204_);
v___x_3210_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_3209_, v_a_3197_, v_a_3198_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3231_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v_a_3212_ = lean_ctor_get(v___x_3210_, 1);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3214_ = v___x_3210_;
v_isShared_3215_ = v_isSharedCheck_3231_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_inc(v_a_3211_);
lean_dec(v___x_3210_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3231_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
uint8_t v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3229_; 
v___x_3216_ = 0;
v___x_3217_ = l_Lean_SourceInfo_fromRef(v_a_3197_, v___x_3216_);
v___x_3218_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3219_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3217_, 4);
v___x_3220_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3220_, 0, v___x_3217_);
lean_ctor_set(v___x_3220_, 1, v___x_3219_);
v___x_3221_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5));
v___x_3222_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandNot___closed__0));
v___x_3223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3217_);
lean_ctor_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = l_Lean_Syntax_node2(v___x_3217_, v___x_3221_, v___x_3223_, v_a_3211_);
v___x_3225_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3217_);
lean_ctor_set(v___x_3226_, 1, v___x_3225_);
v___x_3227_ = l_Lean_Syntax_node3(v___x_3217_, v___x_3218_, v___x_3220_, v___x_3224_, v___x_3226_);
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 0, v___x_3227_);
v___x_3229_ = v___x_3214_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v___x_3227_);
lean_ctor_set(v_reuseFailAlloc_3230_, 1, v_a_3212_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
else
{
lean_object* v_a_3232_; lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
v_a_3232_ = lean_ctor_get(v___x_3210_, 0);
v_a_3233_ = lean_ctor_get(v___x_3210_, 1);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3210_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_inc(v_a_3232_);
lean_dec(v___x_3210_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3232_);
lean_ctor_set(v_reuseFailAlloc_3239_, 1, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot___boxed(lean_object* v_x_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Std_Do_SPred_Notation_unexpandNot(v_x_3241_, v_a_3242_, v_a_3243_);
lean_dec(v_a_3242_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp(lean_object* v_x_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v___x_3249_; uint8_t v___x_3250_; 
v___x_3249_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3246_);
v___x_3250_ = l_Lean_Syntax_isOfKind(v_x_3246_, v___x_3249_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
lean_dec(v_x_3246_);
v___x_3251_ = lean_box(0);
v___x_3252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
lean_ctor_set(v___x_3252_, 1, v_a_3248_);
return v___x_3252_;
}
else
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___x_3253_ = lean_unsigned_to_nat(1u);
v___x_3254_ = l_Lean_Syntax_getArg(v_x_3246_, v___x_3253_);
lean_dec(v_x_3246_);
v___x_3255_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3254_);
v___x_3256_ = l_Lean_Syntax_matchesNull(v___x_3254_, v___x_3255_);
if (v___x_3256_ == 0)
{
lean_object* v___x_3257_; lean_object* v___x_3258_; 
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v___x_3258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3257_);
lean_ctor_set(v___x_3258_, 1, v_a_3248_);
return v___x_3258_;
}
else
{
lean_object* v___x_3259_; lean_object* v_P_3260_; lean_object* v___x_3261_; 
v___x_3259_ = lean_unsigned_to_nat(0u);
v_P_3260_ = l_Lean_Syntax_getArg(v___x_3254_, v___x_3259_);
v___x_3261_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_3260_, v_a_3247_, v_a_3248_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v_a_3263_; lean_object* v_Q_3264_; lean_object* v___x_3265_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
v_a_3263_ = lean_ctor_get(v___x_3261_, 1);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3261_, 2);
v_Q_3264_ = l_Lean_Syntax_getArg(v___x_3254_, v___x_3253_);
lean_dec(v___x_3254_);
v___x_3265_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_3264_, v_a_3247_, v_a_3263_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v_a_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3286_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
v_a_3267_ = lean_ctor_get(v___x_3265_, 1);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3269_ = v___x_3265_;
v_isShared_3270_ = v_isSharedCheck_3286_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_a_3267_);
lean_inc(v_a_3266_);
lean_dec(v___x_3265_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3286_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
uint8_t v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
v___x_3271_ = 0;
v___x_3272_ = l_Lean_SourceInfo_fromRef(v_a_3247_, v___x_3271_);
v___x_3273_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3274_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3272_, 4);
v___x_3275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3272_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
v___x_3276_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7));
v___x_3277_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandImp___closed__0));
v___x_3278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3272_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = l_Lean_Syntax_node3(v___x_3272_, v___x_3276_, v_a_3262_, v___x_3278_, v_a_3266_);
v___x_3280_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3281_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3272_);
lean_ctor_set(v___x_3281_, 1, v___x_3280_);
v___x_3282_ = l_Lean_Syntax_node3(v___x_3272_, v___x_3273_, v___x_3275_, v___x_3279_, v___x_3281_);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v___x_3282_);
v___x_3284_ = v___x_3269_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3282_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v_a_3267_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
else
{
lean_object* v_a_3287_; lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
lean_dec(v_a_3262_);
v_a_3287_ = lean_ctor_get(v___x_3265_, 0);
v_a_3288_ = lean_ctor_get(v___x_3265_, 1);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3265_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_inc(v_a_3287_);
lean_dec(v___x_3265_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3287_);
lean_ctor_set(v_reuseFailAlloc_3294_, 1, v_a_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
else
{
lean_object* v_a_3296_; lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3304_; 
lean_dec(v___x_3254_);
v_a_3296_ = lean_ctor_get(v___x_3261_, 0);
v_a_3297_ = lean_ctor_get(v___x_3261_, 1);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___x_3261_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_inc(v_a_3296_);
lean_dec(v___x_3261_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3302_; 
if (v_isShared_3300_ == 0)
{
v___x_3302_ = v___x_3299_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v_a_3296_);
lean_ctor_set(v_reuseFailAlloc_3303_, 1, v_a_3297_);
v___x_3302_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
return v___x_3302_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp___boxed(lean_object* v_x_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Std_Do_SPred_Notation_unexpandImp(v_x_3305_, v_a_3306_, v_a_3307_);
lean_dec(v_a_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(size_t v_sz_3309_, size_t v_i_3310_, lean_object* v_bs_3311_){
_start:
{
uint8_t v___x_3312_; 
v___x_3312_ = lean_usize_dec_lt(v_i_3310_, v_sz_3309_);
if (v___x_3312_ == 0)
{
lean_object* v___x_3313_; 
v___x_3313_ = l_unsafeCast___redArg(v_bs_3311_);
lean_dec_ref(v_bs_3311_);
return v___x_3313_;
}
else
{
lean_object* v_v_3314_; lean_object* v___x_3315_; lean_object* v_bs_x27_3316_; lean_object* v___x_3317_; size_t v___x_3318_; size_t v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v_v_3314_ = lean_array_uget(v_bs_3311_, v_i_3310_);
v___x_3315_ = lean_unsigned_to_nat(0u);
v_bs_x27_3316_ = lean_array_uset(v_bs_3311_, v_i_3310_, v___x_3315_);
v___x_3317_ = l_unsafeCast___redArg(v_v_3314_);
lean_dec(v_v_3314_);
v___x_3318_ = ((size_t)1ULL);
v___x_3319_ = lean_usize_add(v_i_3310_, v___x_3318_);
v___x_3320_ = l_unsafeCast___redArg(v___x_3317_);
lean_dec(v___x_3317_);
v___x_3321_ = lean_array_uset(v_bs_x27_3316_, v_i_3310_, v___x_3320_);
v_i_3310_ = v___x_3319_;
v_bs_3311_ = v___x_3321_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1___boxed(lean_object* v_sz_3323_, lean_object* v_i_3324_, lean_object* v_bs_3325_){
_start:
{
size_t v_sz_boxed_3326_; size_t v_i_boxed_3327_; lean_object* v_res_3328_; 
v_sz_boxed_3326_ = lean_unbox_usize(v_sz_3323_);
lean_dec(v_sz_3323_);
v_i_boxed_3327_ = lean_unbox_usize(v_i_3324_);
lean_dec(v_i_3324_);
v_res_3328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(v_sz_boxed_3326_, v_i_boxed_3327_, v_bs_3325_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(size_t v_sz_3329_, size_t v_i_3330_, lean_object* v_bs_3331_){
_start:
{
uint8_t v___x_3332_; 
v___x_3332_ = lean_usize_dec_lt(v_i_3330_, v_sz_3329_);
if (v___x_3332_ == 0)
{
lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3333_ = l_unsafeCast___redArg(v_bs_3331_);
lean_dec_ref(v_bs_3331_);
v___x_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3333_);
return v___x_3334_;
}
else
{
lean_object* v_v_3335_; lean_object* v_z_3336_; lean_object* v___x_3337_; uint8_t v___x_3338_; 
v_v_3335_ = lean_array_uget_borrowed(v_bs_3331_, v_i_3330_);
v_z_3336_ = l_unsafeCast___redArg(v_v_3335_);
v___x_3337_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_z_3336_);
v___x_3338_ = l_Lean_Syntax_isOfKind(v_z_3336_, v___x_3337_);
if (v___x_3338_ == 0)
{
lean_object* v___x_3339_; 
lean_dec(v_z_3336_);
lean_dec_ref(v_bs_3331_);
v___x_3339_ = lean_box(0);
return v___x_3339_;
}
else
{
lean_object* v___x_3340_; lean_object* v_bs_x27_3341_; size_t v___x_3342_; size_t v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; 
v___x_3340_ = lean_unsigned_to_nat(0u);
v_bs_x27_3341_ = lean_array_uset(v_bs_3331_, v_i_3330_, v___x_3340_);
v___x_3342_ = ((size_t)1ULL);
v___x_3343_ = lean_usize_add(v_i_3330_, v___x_3342_);
v___x_3344_ = l_unsafeCast___redArg(v_z_3336_);
lean_dec(v_z_3336_);
v___x_3345_ = lean_array_uset(v_bs_x27_3341_, v_i_3330_, v___x_3344_);
v_i_3330_ = v___x_3343_;
v_bs_3331_ = v___x_3345_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0___boxed(lean_object* v_sz_3347_, lean_object* v_i_3348_, lean_object* v_bs_3349_){
_start:
{
size_t v_sz_boxed_3350_; size_t v_i_boxed_3351_; lean_object* v_res_3352_; 
v_sz_boxed_3350_ = lean_unbox_usize(v_sz_3347_);
lean_dec(v_sz_3347_);
v_i_boxed_3351_ = lean_unbox_usize(v_i_3348_);
lean_dec(v_i_3348_);
v_res_3352_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(v_sz_boxed_3350_, v_i_boxed_3351_, v_bs_3349_);
return v_res_3352_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall(lean_object* v_x_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_){
_start:
{
lean_object* v___x_3356_; uint8_t v___x_3357_; 
v___x_3356_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3353_);
v___x_3357_ = l_Lean_Syntax_isOfKind(v_x_3353_, v___x_3356_);
if (v___x_3357_ == 0)
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
lean_dec(v_x_3353_);
v___x_3358_ = lean_box(0);
v___x_3359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
lean_ctor_set(v___x_3359_, 1, v_a_3355_);
return v___x_3359_;
}
else
{
lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v___x_3360_ = lean_unsigned_to_nat(1u);
v___x_3361_ = l_Lean_Syntax_getArg(v_x_3353_, v___x_3360_);
lean_dec(v_x_3353_);
lean_inc(v___x_3361_);
v___x_3362_ = l_Lean_Syntax_matchesNull(v___x_3361_, v___x_3360_);
if (v___x_3362_ == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
lean_dec(v___x_3361_);
v___x_3363_ = lean_box(0);
v___x_3364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
lean_ctor_set(v___x_3364_, 1, v_a_3355_);
return v___x_3364_;
}
else
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3365_ = lean_unsigned_to_nat(0u);
v___x_3366_ = l_Lean_Syntax_getArg(v___x_3361_, v___x_3365_);
lean_dec(v___x_3361_);
v___x_3367_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
lean_inc(v___x_3366_);
v___x_3368_ = l_Lean_Syntax_isOfKind(v___x_3366_, v___x_3367_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
lean_dec(v___x_3366_);
v___x_3369_ = lean_box(0);
v___x_3370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
lean_ctor_set(v___x_3370_, 1, v_a_3355_);
return v___x_3370_;
}
else
{
lean_object* v___x_3371_; lean_object* v___x_3372_; uint8_t v___x_3373_; 
v___x_3371_ = l_Lean_Syntax_getArg(v___x_3366_, v___x_3360_);
lean_dec(v___x_3366_);
v___x_3372_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
lean_inc(v___x_3371_);
v___x_3373_ = l_Lean_Syntax_isOfKind(v___x_3371_, v___x_3372_);
if (v___x_3373_ == 0)
{
lean_object* v___x_3374_; lean_object* v___x_3375_; 
lean_dec(v___x_3371_);
v___x_3374_ = lean_box(0);
v___x_3375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
lean_ctor_set(v___x_3375_, 1, v_a_3355_);
return v___x_3375_;
}
else
{
lean_object* v___x_3376_; uint8_t v___x_3377_; 
v___x_3376_ = l_Lean_Syntax_getArg(v___x_3371_, v___x_3365_);
lean_inc(v___x_3376_);
v___x_3377_ = l_Lean_Syntax_matchesNull(v___x_3376_, v___x_3360_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
lean_dec(v___x_3376_);
lean_dec(v___x_3371_);
v___x_3378_ = lean_box(0);
v___x_3379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
lean_ctor_set(v___x_3379_, 1, v_a_3355_);
return v___x_3379_;
}
else
{
lean_object* v___x_3380_; lean_object* v___x_3381_; uint8_t v___x_3382_; 
v___x_3380_ = l_Lean_Syntax_getArg(v___x_3376_, v___x_3365_);
lean_dec(v___x_3376_);
v___x_3381_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v___x_3380_);
v___x_3382_ = l_Lean_Syntax_isOfKind(v___x_3380_, v___x_3381_);
if (v___x_3382_ == 0)
{
lean_object* v___x_3383_; lean_object* v___x_3384_; 
lean_dec(v___x_3380_);
lean_dec(v___x_3371_);
v___x_3383_ = lean_box(0);
v___x_3384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
lean_ctor_set(v___x_3384_, 1, v_a_3355_);
return v___x_3384_;
}
else
{
lean_object* v___x_3385_; uint8_t v___x_3386_; 
v___x_3385_ = l_Lean_Syntax_getArg(v___x_3371_, v___x_3360_);
v___x_3386_ = l_Lean_Syntax_matchesNull(v___x_3385_, v___x_3365_);
if (v___x_3386_ == 0)
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
lean_dec(v___x_3380_);
lean_dec(v___x_3371_);
v___x_3387_ = lean_box(0);
v___x_3388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v_a_3355_);
return v___x_3388_;
}
else
{
lean_object* v___x_3389_; lean_object* v_00_u03a8_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v___x_3389_ = lean_unsigned_to_nat(3u);
v_00_u03a8_3390_ = l_Lean_Syntax_getArg(v___x_3371_, v___x_3389_);
lean_dec(v___x_3371_);
v___x_3391_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13));
lean_inc(v_00_u03a8_3390_);
v___x_3392_ = l_Lean_Syntax_isOfKind(v_00_u03a8_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; 
v___x_3393_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3390_, v_a_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3418_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
v_a_3395_ = lean_ctor_get(v___x_3393_, 1);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3397_ = v___x_3393_;
v_isShared_3398_ = v_isSharedCheck_3418_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_inc(v_a_3394_);
lean_dec(v___x_3393_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3418_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3399_ = l_Lean_SourceInfo_fromRef(v_a_3354_, v___x_3392_);
v___x_3400_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3401_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3399_, 7);
v___x_3402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3399_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
v___x_3403_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_3404_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3399_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3405_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3406_ = l_Lean_Syntax_node1(v___x_3399_, v___x_3405_, v___x_3380_);
v___x_3407_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3408_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3399_);
lean_ctor_set(v___x_3408_, 1, v___x_3405_);
lean_ctor_set(v___x_3408_, 2, v___x_3407_);
v___x_3409_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3410_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3399_);
lean_ctor_set(v___x_3410_, 1, v___x_3409_);
v___x_3411_ = l_Lean_Syntax_node5(v___x_3399_, v___x_3391_, v___x_3404_, v___x_3406_, v___x_3408_, v___x_3410_, v_a_3394_);
v___x_3412_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3413_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3399_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
v___x_3414_ = l_Lean_Syntax_node3(v___x_3399_, v___x_3400_, v___x_3402_, v___x_3411_, v___x_3413_);
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 0, v___x_3414_);
v___x_3416_ = v___x_3397_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v___x_3414_);
lean_ctor_set(v_reuseFailAlloc_3417_, 1, v_a_3395_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
else
{
lean_object* v_a_3419_; lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec(v___x_3380_);
v_a_3419_ = lean_ctor_get(v___x_3393_, 0);
v_a_3420_ = lean_ctor_get(v___x_3393_, 1);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3393_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_inc(v_a_3419_);
lean_dec(v___x_3393_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3419_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
else
{
lean_object* v___x_3428_; lean_object* v___x_3429_; uint8_t v___x_3430_; 
v___x_3428_ = l_Lean_Syntax_getArg(v_00_u03a8_3390_, v___x_3360_);
v___x_3429_ = l_Lean_Syntax_getNumArgs(v___x_3428_);
v___x_3430_ = lean_nat_dec_le(v___x_3360_, v___x_3429_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; 
lean_dec(v___x_3429_);
lean_dec(v___x_3428_);
v___x_3431_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3390_, v_a_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3456_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
v_a_3433_ = lean_ctor_get(v___x_3431_, 1);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3435_ = v___x_3431_;
v_isShared_3436_ = v_isSharedCheck_3456_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_inc(v_a_3432_);
lean_dec(v___x_3431_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3456_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3454_; 
v___x_3437_ = l_Lean_SourceInfo_fromRef(v_a_3354_, v___x_3430_);
v___x_3438_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3439_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3437_, 7);
v___x_3440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3437_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
v___x_3441_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_3442_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3437_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3444_ = l_Lean_Syntax_node1(v___x_3437_, v___x_3443_, v___x_3380_);
v___x_3445_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3446_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3437_);
lean_ctor_set(v___x_3446_, 1, v___x_3443_);
lean_ctor_set(v___x_3446_, 2, v___x_3445_);
v___x_3447_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3448_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3437_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = l_Lean_Syntax_node5(v___x_3437_, v___x_3391_, v___x_3442_, v___x_3444_, v___x_3446_, v___x_3448_, v_a_3432_);
v___x_3450_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3437_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = l_Lean_Syntax_node3(v___x_3437_, v___x_3438_, v___x_3440_, v___x_3449_, v___x_3451_);
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 0, v___x_3452_);
v___x_3454_ = v___x_3435_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3452_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_a_3433_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3465_; 
lean_dec(v___x_3380_);
v_a_3457_ = lean_ctor_get(v___x_3431_, 0);
v_a_3458_ = lean_ctor_get(v___x_3431_, 1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3460_ = v___x_3431_;
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_inc(v_a_3457_);
lean_dec(v___x_3431_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3463_; 
if (v_isShared_3461_ == 0)
{
v___x_3463_ = v___x_3460_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_a_3457_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_a_3458_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
}
else
{
lean_object* v___x_3466_; uint8_t v___x_3467_; 
v___x_3466_ = l_Lean_Syntax_getArg(v___x_3428_, v___x_3365_);
lean_inc(v___x_3466_);
v___x_3467_ = l_Lean_Syntax_isOfKind(v___x_3466_, v___x_3381_);
if (v___x_3467_ == 0)
{
lean_object* v___x_3468_; 
lean_dec(v___x_3466_);
lean_dec(v___x_3429_);
lean_dec(v___x_3428_);
v___x_3468_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3390_, v_a_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3469_; lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3493_; 
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
v_a_3470_ = lean_ctor_get(v___x_3468_, 1);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3472_ = v___x_3468_;
v_isShared_3473_ = v_isSharedCheck_3493_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_inc(v_a_3469_);
lean_dec(v___x_3468_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3493_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3491_; 
v___x_3474_ = l_Lean_SourceInfo_fromRef(v_a_3354_, v___x_3467_);
v___x_3475_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3476_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3474_, 7);
v___x_3477_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3474_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
v___x_3478_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_3479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3474_);
lean_ctor_set(v___x_3479_, 1, v___x_3478_);
v___x_3480_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3481_ = l_Lean_Syntax_node1(v___x_3474_, v___x_3480_, v___x_3380_);
v___x_3482_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3483_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3474_);
lean_ctor_set(v___x_3483_, 1, v___x_3480_);
lean_ctor_set(v___x_3483_, 2, v___x_3482_);
v___x_3484_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3485_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3474_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = l_Lean_Syntax_node5(v___x_3474_, v___x_3391_, v___x_3479_, v___x_3481_, v___x_3483_, v___x_3485_, v_a_3469_);
v___x_3487_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3474_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = l_Lean_Syntax_node3(v___x_3474_, v___x_3475_, v___x_3477_, v___x_3486_, v___x_3488_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 0, v___x_3489_);
v___x_3491_ = v___x_3472_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___x_3489_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v_a_3470_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
else
{
lean_object* v_a_3494_; lean_object* v_a_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3502_; 
lean_dec(v___x_3380_);
v_a_3494_ = lean_ctor_get(v___x_3468_, 0);
v_a_3495_ = lean_ctor_get(v___x_3468_, 1);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3497_ = v___x_3468_;
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_a_3495_);
lean_inc(v_a_3494_);
lean_dec(v___x_3468_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3500_; 
if (v_isShared_3498_ == 0)
{
v___x_3500_ = v___x_3497_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_a_3494_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v_a_3495_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
}
}
else
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; size_t v_sz_3509_; size_t v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3503_ = l_Lean_Syntax_getArgs(v___x_3428_);
lean_dec(v___x_3428_);
v___x_3504_ = l_Array_extract___redArg(v___x_3503_, v___x_3360_, v___x_3429_);
lean_dec_ref(v___x_3503_);
v___x_3505_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3506_ = lean_box(2);
v___x_3507_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
lean_ctor_set(v___x_3507_, 1, v___x_3505_);
lean_ctor_set(v___x_3507_, 2, v___x_3504_);
v___x_3508_ = l_Lean_Syntax_getArgs(v___x_3507_);
lean_dec_ref_known(v___x_3507_, 3);
v_sz_3509_ = lean_array_size(v___x_3508_);
v___x_3510_ = ((size_t)0ULL);
v___x_3511_ = l_unsafeCast___redArg(v___x_3508_);
lean_dec_ref(v___x_3508_);
v___x_3512_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(v_sz_3509_, v___x_3510_, v___x_3511_);
v___x_3513_ = l_unsafeCast___redArg(v___x_3512_);
lean_dec(v___x_3512_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v___x_3514_; 
lean_dec(v___x_3466_);
v___x_3514_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3390_, v_a_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3539_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
v_a_3516_ = lean_ctor_get(v___x_3514_, 1);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3518_ = v___x_3514_;
v_isShared_3519_ = v_isSharedCheck_3539_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_inc(v_a_3515_);
lean_dec(v___x_3514_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3539_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
uint8_t v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3537_; 
v___x_3520_ = 0;
v___x_3521_ = l_Lean_SourceInfo_fromRef(v_a_3354_, v___x_3520_);
v___x_3522_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3523_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3521_, 7);
v___x_3524_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3521_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_3526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3521_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = l_Lean_Syntax_node1(v___x_3521_, v___x_3505_, v___x_3380_);
v___x_3528_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3529_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3521_);
lean_ctor_set(v___x_3529_, 1, v___x_3505_);
lean_ctor_set(v___x_3529_, 2, v___x_3528_);
v___x_3530_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3521_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = l_Lean_Syntax_node5(v___x_3521_, v___x_3391_, v___x_3526_, v___x_3527_, v___x_3529_, v___x_3531_, v_a_3515_);
v___x_3533_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3534_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3521_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
v___x_3535_ = l_Lean_Syntax_node3(v___x_3521_, v___x_3522_, v___x_3524_, v___x_3532_, v___x_3534_);
if (v_isShared_3519_ == 0)
{
lean_ctor_set(v___x_3518_, 0, v___x_3535_);
v___x_3537_ = v___x_3518_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3535_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v_a_3516_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec(v___x_3380_);
v_a_3540_ = lean_ctor_get(v___x_3514_, 0);
v_a_3541_ = lean_ctor_get(v___x_3514_, 1);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3514_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_inc(v_a_3540_);
lean_dec(v___x_3514_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3540_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
else
{
lean_object* v_val_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; uint8_t v___x_3552_; 
v_val_3549_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_val_3549_);
lean_dec_ref_known(v___x_3513_, 1);
v___x_3550_ = lean_unsigned_to_nat(2u);
v___x_3551_ = l_Lean_Syntax_getArg(v_00_u03a8_3390_, v___x_3550_);
v___x_3552_ = l_Lean_Syntax_matchesNull(v___x_3551_, v___x_3365_);
if (v___x_3552_ == 0)
{
lean_object* v___x_3553_; 
lean_dec(v_val_3549_);
lean_dec(v___x_3466_);
v___x_3553_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3390_, v_a_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3577_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
v_a_3555_ = lean_ctor_get(v___x_3553_, 1);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3557_ = v___x_3553_;
v_isShared_3558_ = v_isSharedCheck_3577_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_inc(v_a_3554_);
lean_dec(v___x_3553_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3577_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3575_; 
v___x_3559_ = l_Lean_SourceInfo_fromRef(v_a_3354_, v___x_3552_);
v___x_3560_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3561_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3559_, 7);
v___x_3562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3559_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v___x_3563_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_3564_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3559_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = l_Lean_Syntax_node1(v___x_3559_, v___x_3505_, v___x_3380_);
v___x_3566_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3567_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3559_);
lean_ctor_set(v___x_3567_, 1, v___x_3505_);
lean_ctor_set(v___x_3567_, 2, v___x_3566_);
v___x_3568_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3569_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3559_);
lean_ctor_set(v___x_3569_, 1, v___x_3568_);
v___x_3570_ = l_Lean_Syntax_node5(v___x_3559_, v___x_3391_, v___x_3564_, v___x_3565_, v___x_3567_, v___x_3569_, v_a_3554_);
v___x_3571_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3572_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3559_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = l_Lean_Syntax_node3(v___x_3559_, v___x_3560_, v___x_3562_, v___x_3570_, v___x_3572_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3573_);
v___x_3575_ = v___x_3557_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3573_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v_a_3555_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
else
{
lean_object* v_a_3578_; lean_object* v_a_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3586_; 
lean_dec(v___x_3380_);
v_a_3578_ = lean_ctor_get(v___x_3553_, 0);
v_a_3579_ = lean_ctor_get(v___x_3553_, 1);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3581_ = v___x_3553_;
v_isShared_3582_ = v_isSharedCheck_3586_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_a_3579_);
lean_inc(v_a_3578_);
lean_dec(v___x_3553_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3586_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3584_; 
if (v_isShared_3582_ == 0)
{
v___x_3584_ = v___x_3581_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_a_3578_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_a_3579_);
v___x_3584_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
return v___x_3584_;
}
}
}
}
else
{
lean_object* v___x_3587_; lean_object* v_00_u03a8_3588_; lean_object* v___x_3589_; 
v___x_3587_ = lean_unsigned_to_nat(4u);
v_00_u03a8_3588_ = l_Lean_Syntax_getArg(v_00_u03a8_3390_, v___x_3587_);
lean_dec(v_00_u03a8_3390_);
v___x_3589_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3588_, v_a_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3620_; 
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
v_a_3591_ = lean_ctor_get(v___x_3589_, 1);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3593_ = v___x_3589_;
v_isShared_3594_ = v_isSharedCheck_3620_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_inc(v_a_3590_);
lean_dec(v___x_3589_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3620_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
uint8_t v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; size_t v_sz_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3618_; 
v___x_3595_ = 0;
v___x_3596_ = l_Lean_SourceInfo_fromRef(v_a_3354_, v___x_3595_);
v___x_3597_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3598_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3596_, 7);
v___x_3599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3596_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_3601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3596_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v___x_3602_ = l_Array_mkArray2___redArg(v___x_3380_, v___x_3466_);
v_sz_3603_ = lean_array_size(v_val_3549_);
v___x_3604_ = l_unsafeCast___redArg(v_val_3549_);
lean_dec(v_val_3549_);
v___x_3605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(v_sz_3603_, v___x_3510_, v___x_3604_);
v___x_3606_ = l_unsafeCast___redArg(v___x_3605_);
lean_dec_ref(v___x_3605_);
v___x_3607_ = l_Array_append___redArg(v___x_3602_, v___x_3606_);
lean_dec(v___x_3606_);
v___x_3608_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3596_);
lean_ctor_set(v___x_3608_, 1, v___x_3505_);
lean_ctor_set(v___x_3608_, 2, v___x_3607_);
v___x_3609_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3610_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3596_);
lean_ctor_set(v___x_3610_, 1, v___x_3505_);
lean_ctor_set(v___x_3610_, 2, v___x_3609_);
v___x_3611_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3612_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3596_);
lean_ctor_set(v___x_3612_, 1, v___x_3611_);
v___x_3613_ = l_Lean_Syntax_node5(v___x_3596_, v___x_3391_, v___x_3601_, v___x_3608_, v___x_3610_, v___x_3612_, v_a_3590_);
v___x_3614_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3615_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3596_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
v___x_3616_ = l_Lean_Syntax_node3(v___x_3596_, v___x_3597_, v___x_3599_, v___x_3613_, v___x_3615_);
if (v_isShared_3594_ == 0)
{
lean_ctor_set(v___x_3593_, 0, v___x_3616_);
v___x_3618_ = v___x_3593_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3616_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v_a_3591_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
else
{
lean_object* v_a_3621_; lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
lean_dec(v_val_3549_);
lean_dec(v___x_3466_);
lean_dec(v___x_3380_);
v_a_3621_ = lean_ctor_get(v___x_3589_, 0);
v_a_3622_ = lean_ctor_get(v___x_3589_, 1);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3624_ = v___x_3589_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_inc(v_a_3621_);
lean_dec(v___x_3589_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3621_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall___boxed(lean_object* v_x_3630_, lean_object* v_a_3631_, lean_object* v_a_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Std_Do_SPred_Notation_unexpandForall(v_x_3630_, v_a_3631_, v_a_3632_);
lean_dec(v_a_3631_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(lean_object* v___x_3638_, size_t v_sz_3639_, size_t v_i_3640_, lean_object* v_bs_3641_){
_start:
{
uint8_t v___x_3642_; 
v___x_3642_ = lean_usize_dec_lt(v_i_3640_, v_sz_3639_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
lean_dec(v___x_3638_);
v___x_3643_ = l_unsafeCast___redArg(v_bs_3641_);
lean_dec_ref(v_bs_3641_);
return v___x_3643_;
}
else
{
lean_object* v___x_3644_; lean_object* v_v_3645_; lean_object* v___x_3646_; lean_object* v_bs_x27_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; size_t v___x_3650_; size_t v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
v___x_3644_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v_v_3645_ = lean_array_uget(v_bs_3641_, v_i_3640_);
v___x_3646_ = lean_unsigned_to_nat(0u);
v_bs_x27_3647_ = lean_array_uset(v_bs_3641_, v_i_3640_, v___x_3646_);
v___x_3648_ = l_unsafeCast___redArg(v_v_3645_);
lean_dec(v_v_3645_);
lean_inc(v___x_3638_);
v___x_3649_ = l_Lean_Syntax_node1(v___x_3638_, v___x_3644_, v___x_3648_);
v___x_3650_ = ((size_t)1ULL);
v___x_3651_ = lean_usize_add(v_i_3640_, v___x_3650_);
v___x_3652_ = l_unsafeCast___redArg(v___x_3649_);
lean_dec(v___x_3649_);
v___x_3653_ = lean_array_uset(v_bs_x27_3647_, v_i_3640_, v___x_3652_);
v_i_3640_ = v___x_3651_;
v_bs_3641_ = v___x_3653_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___boxed(lean_object* v___x_3655_, lean_object* v_sz_3656_, lean_object* v_i_3657_, lean_object* v_bs_3658_){
_start:
{
size_t v_sz_boxed_3659_; size_t v_i_boxed_3660_; lean_object* v_res_3661_; 
v_sz_boxed_3659_ = lean_unbox_usize(v_sz_3656_);
lean_dec(v_sz_3656_);
v_i_boxed_3660_ = lean_unbox_usize(v_i_3657_);
lean_dec(v_i_3657_);
v_res_3661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(v___x_3655_, v_sz_boxed_3659_, v_i_boxed_3660_, v_bs_3658_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(size_t v_sz_3662_, size_t v_i_3663_, lean_object* v_bs_3664_){
_start:
{
uint8_t v___x_3665_; 
v___x_3665_ = lean_usize_dec_lt(v_i_3663_, v_sz_3662_);
if (v___x_3665_ == 0)
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = l_unsafeCast___redArg(v_bs_3664_);
lean_dec_ref(v_bs_3664_);
v___x_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
return v___x_3667_;
}
else
{
lean_object* v___x_3668_; lean_object* v_v_3669_; lean_object* v___x_3670_; uint8_t v___x_3671_; 
v___x_3668_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v_v_3669_ = lean_array_uget_borrowed(v_bs_3664_, v_i_3663_);
v___x_3670_ = l_unsafeCast___redArg(v_v_3669_);
lean_inc(v___x_3670_);
v___x_3671_ = l_Lean_Syntax_isOfKind(v___x_3670_, v___x_3668_);
if (v___x_3671_ == 0)
{
lean_object* v___x_3672_; 
lean_dec(v___x_3670_);
lean_dec_ref(v_bs_3664_);
v___x_3672_ = lean_box(0);
return v___x_3672_;
}
else
{
lean_object* v___x_3673_; lean_object* v_z_3674_; lean_object* v___x_3675_; uint8_t v___x_3676_; 
v___x_3673_ = lean_unsigned_to_nat(0u);
v_z_3674_ = l_Lean_Syntax_getArg(v___x_3670_, v___x_3673_);
lean_dec(v___x_3670_);
v___x_3675_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v_z_3674_);
v___x_3676_ = l_Lean_Syntax_isOfKind(v_z_3674_, v___x_3675_);
if (v___x_3676_ == 0)
{
lean_object* v___x_3677_; 
lean_dec(v_z_3674_);
lean_dec_ref(v_bs_3664_);
v___x_3677_ = lean_box(0);
return v___x_3677_;
}
else
{
lean_object* v_bs_x27_3678_; size_t v___x_3679_; size_t v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v_bs_x27_3678_ = lean_array_uset(v_bs_3664_, v_i_3663_, v___x_3673_);
v___x_3679_ = ((size_t)1ULL);
v___x_3680_ = lean_usize_add(v_i_3663_, v___x_3679_);
v___x_3681_ = l_unsafeCast___redArg(v_z_3674_);
lean_dec(v_z_3674_);
v___x_3682_ = lean_array_uset(v_bs_x27_3678_, v_i_3663_, v___x_3681_);
v_i_3663_ = v___x_3680_;
v_bs_3664_ = v___x_3682_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0___boxed(lean_object* v_sz_3684_, lean_object* v_i_3685_, lean_object* v_bs_3686_){
_start:
{
size_t v_sz_boxed_3687_; size_t v_i_boxed_3688_; lean_object* v_res_3689_; 
v_sz_boxed_3687_ = lean_unbox_usize(v_sz_3684_);
lean_dec(v_sz_3684_);
v_i_boxed_3688_ = lean_unbox_usize(v_i_3685_);
lean_dec(v_i_3685_);
v_res_3689_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(v_sz_boxed_3687_, v_i_boxed_3688_, v_bs_3686_);
return v_res_3689_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists(lean_object* v_x_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v___x_3698_; uint8_t v___x_3699_; 
v___x_3698_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_3695_);
v___x_3699_ = l_Lean_Syntax_isOfKind(v_x_3695_, v___x_3698_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3700_; lean_object* v___x_3701_; 
lean_dec(v_x_3695_);
v___x_3700_ = lean_box(0);
v___x_3701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3700_);
lean_ctor_set(v___x_3701_, 1, v_a_3697_);
return v___x_3701_;
}
else
{
lean_object* v___x_3702_; lean_object* v___x_3703_; uint8_t v___x_3704_; 
v___x_3702_ = lean_unsigned_to_nat(1u);
v___x_3703_ = l_Lean_Syntax_getArg(v_x_3695_, v___x_3702_);
lean_dec(v_x_3695_);
lean_inc(v___x_3703_);
v___x_3704_ = l_Lean_Syntax_matchesNull(v___x_3703_, v___x_3702_);
if (v___x_3704_ == 0)
{
lean_object* v___x_3705_; lean_object* v___x_3706_; 
lean_dec(v___x_3703_);
v___x_3705_ = lean_box(0);
v___x_3706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
lean_ctor_set(v___x_3706_, 1, v_a_3697_);
return v___x_3706_;
}
else
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; uint8_t v___x_3710_; 
v___x_3707_ = lean_unsigned_to_nat(0u);
v___x_3708_ = l_Lean_Syntax_getArg(v___x_3703_, v___x_3707_);
lean_dec(v___x_3703_);
v___x_3709_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
lean_inc(v___x_3708_);
v___x_3710_ = l_Lean_Syntax_isOfKind(v___x_3708_, v___x_3709_);
if (v___x_3710_ == 0)
{
lean_object* v___x_3711_; lean_object* v___x_3712_; 
lean_dec(v___x_3708_);
v___x_3711_ = lean_box(0);
v___x_3712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
lean_ctor_set(v___x_3712_, 1, v_a_3697_);
return v___x_3712_;
}
else
{
lean_object* v___x_3713_; lean_object* v___x_3714_; uint8_t v___x_3715_; 
v___x_3713_ = l_Lean_Syntax_getArg(v___x_3708_, v___x_3702_);
lean_dec(v___x_3708_);
v___x_3714_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
lean_inc(v___x_3713_);
v___x_3715_ = l_Lean_Syntax_isOfKind(v___x_3713_, v___x_3714_);
if (v___x_3715_ == 0)
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
lean_dec(v___x_3713_);
v___x_3716_ = lean_box(0);
v___x_3717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
lean_ctor_set(v___x_3717_, 1, v_a_3697_);
return v___x_3717_;
}
else
{
lean_object* v___x_3718_; uint8_t v___x_3719_; 
v___x_3718_ = l_Lean_Syntax_getArg(v___x_3713_, v___x_3707_);
lean_inc(v___x_3718_);
v___x_3719_ = l_Lean_Syntax_matchesNull(v___x_3718_, v___x_3702_);
if (v___x_3719_ == 0)
{
lean_object* v___x_3720_; lean_object* v___x_3721_; 
lean_dec(v___x_3718_);
lean_dec(v___x_3713_);
v___x_3720_ = lean_box(0);
v___x_3721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
lean_ctor_set(v___x_3721_, 1, v_a_3697_);
return v___x_3721_;
}
else
{
lean_object* v___x_3722_; lean_object* v___x_3723_; uint8_t v___x_3724_; 
v___x_3722_ = l_Lean_Syntax_getArg(v___x_3718_, v___x_3707_);
lean_dec(v___x_3718_);
v___x_3723_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61));
lean_inc(v___x_3722_);
v___x_3724_ = l_Lean_Syntax_isOfKind(v___x_3722_, v___x_3723_);
if (v___x_3724_ == 0)
{
lean_object* v___x_3725_; lean_object* v___x_3726_; 
lean_dec(v___x_3722_);
lean_dec(v___x_3713_);
v___x_3725_ = lean_box(0);
v___x_3726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3725_);
lean_ctor_set(v___x_3726_, 1, v_a_3697_);
return v___x_3726_;
}
else
{
lean_object* v___x_3727_; uint8_t v___x_3728_; 
v___x_3727_ = l_Lean_Syntax_getArg(v___x_3713_, v___x_3702_);
v___x_3728_ = l_Lean_Syntax_matchesNull(v___x_3727_, v___x_3707_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; lean_object* v___x_3730_; 
lean_dec(v___x_3722_);
lean_dec(v___x_3713_);
v___x_3729_ = lean_box(0);
v___x_3730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3729_);
lean_ctor_set(v___x_3730_, 1, v_a_3697_);
return v___x_3730_;
}
else
{
lean_object* v___x_3731_; lean_object* v_00_u03a8_3732_; lean_object* v___x_3733_; uint8_t v___x_3734_; 
v___x_3731_ = lean_unsigned_to_nat(3u);
v_00_u03a8_3732_ = l_Lean_Syntax_getArg(v___x_3713_, v___x_3731_);
lean_dec(v___x_3713_);
v___x_3733_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11));
lean_inc(v_00_u03a8_3732_);
v___x_3734_ = l_Lean_Syntax_isOfKind(v_00_u03a8_3732_, v___x_3733_);
if (v___x_3734_ == 0)
{
lean_object* v___x_3735_; 
v___x_3735_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v_a_3736_; lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3766_; 
v_a_3736_ = lean_ctor_get(v___x_3735_, 0);
v_a_3737_ = lean_ctor_get(v___x_3735_, 1);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3739_ = v___x_3735_;
v_isShared_3740_ = v_isSharedCheck_3766_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_inc(v_a_3736_);
lean_dec(v___x_3735_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3766_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3764_; 
v___x_3741_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_3734_);
v___x_3742_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3743_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3741_, 10);
v___x_3744_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3741_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_3746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3741_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68));
v___x_3748_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__2));
v___x_3749_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_3751_ = l_Lean_Syntax_node1(v___x_3741_, v___x_3750_, v___x_3722_);
v___x_3752_ = l_Lean_Syntax_node1(v___x_3741_, v___x_3749_, v___x_3751_);
v___x_3753_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3754_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3741_);
lean_ctor_set(v___x_3754_, 1, v___x_3749_);
lean_ctor_set(v___x_3754_, 2, v___x_3753_);
v___x_3755_ = l_Lean_Syntax_node2(v___x_3741_, v___x_3748_, v___x_3752_, v___x_3754_);
v___x_3756_ = l_Lean_Syntax_node1(v___x_3741_, v___x_3747_, v___x_3755_);
v___x_3757_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3758_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3741_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = l_Lean_Syntax_node4(v___x_3741_, v___x_3733_, v___x_3746_, v___x_3756_, v___x_3758_, v_a_3736_);
v___x_3760_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3761_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3741_);
lean_ctor_set(v___x_3761_, 1, v___x_3760_);
v___x_3762_ = l_Lean_Syntax_node3(v___x_3741_, v___x_3742_, v___x_3744_, v___x_3759_, v___x_3761_);
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 0, v___x_3762_);
v___x_3764_ = v___x_3739_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v___x_3762_);
lean_ctor_set(v_reuseFailAlloc_3765_, 1, v_a_3737_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
else
{
lean_object* v_a_3767_; lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
lean_dec(v___x_3722_);
v_a_3767_ = lean_ctor_get(v___x_3735_, 0);
v_a_3768_ = lean_ctor_get(v___x_3735_, 1);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3735_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_inc(v_a_3767_);
lean_dec(v___x_3735_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3767_);
lean_ctor_set(v_reuseFailAlloc_3774_, 1, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
else
{
lean_object* v___x_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; 
v___x_3776_ = l_Lean_Syntax_getArg(v_00_u03a8_3732_, v___x_3702_);
v___x_3777_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68));
lean_inc(v___x_3776_);
v___x_3778_ = l_Lean_Syntax_isOfKind(v___x_3776_, v___x_3777_);
if (v___x_3778_ == 0)
{
lean_object* v___x_3779_; 
lean_dec(v___x_3776_);
v___x_3779_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v_a_3780_; lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3809_; 
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
v_a_3781_ = lean_ctor_get(v___x_3779_, 1);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3783_ = v___x_3779_;
v_isShared_3784_ = v_isSharedCheck_3809_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_inc(v_a_3780_);
lean_dec(v___x_3779_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3809_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3785_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_3778_);
v___x_3786_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3787_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3785_, 10);
v___x_3788_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3785_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_3790_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3785_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
v___x_3791_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__2));
v___x_3792_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_3794_ = l_Lean_Syntax_node1(v___x_3785_, v___x_3793_, v___x_3722_);
v___x_3795_ = l_Lean_Syntax_node1(v___x_3785_, v___x_3792_, v___x_3794_);
v___x_3796_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3797_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3785_);
lean_ctor_set(v___x_3797_, 1, v___x_3792_);
lean_ctor_set(v___x_3797_, 2, v___x_3796_);
v___x_3798_ = l_Lean_Syntax_node2(v___x_3785_, v___x_3791_, v___x_3795_, v___x_3797_);
v___x_3799_ = l_Lean_Syntax_node1(v___x_3785_, v___x_3777_, v___x_3798_);
v___x_3800_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3785_);
lean_ctor_set(v___x_3801_, 1, v___x_3800_);
v___x_3802_ = l_Lean_Syntax_node4(v___x_3785_, v___x_3733_, v___x_3790_, v___x_3799_, v___x_3801_, v_a_3780_);
v___x_3803_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3804_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3785_);
lean_ctor_set(v___x_3804_, 1, v___x_3803_);
v___x_3805_ = l_Lean_Syntax_node3(v___x_3785_, v___x_3786_, v___x_3788_, v___x_3802_, v___x_3804_);
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 0, v___x_3805_);
v___x_3807_ = v___x_3783_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3805_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v_a_3781_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
else
{
lean_object* v_a_3810_; lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3818_; 
lean_dec(v___x_3722_);
v_a_3810_ = lean_ctor_get(v___x_3779_, 0);
v_a_3811_ = lean_ctor_get(v___x_3779_, 1);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3813_ = v___x_3779_;
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_inc(v_a_3810_);
lean_dec(v___x_3779_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3810_);
lean_ctor_set(v_reuseFailAlloc_3817_, 1, v_a_3811_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
else
{
lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; 
v___x_3819_ = l_Lean_Syntax_getArg(v___x_3776_, v___x_3707_);
lean_dec(v___x_3776_);
v___x_3820_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__2));
lean_inc(v___x_3819_);
v___x_3821_ = l_Lean_Syntax_isOfKind(v___x_3819_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3822_; 
lean_dec(v___x_3819_);
v___x_3822_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3851_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
v_a_3824_ = lean_ctor_get(v___x_3822_, 1);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3826_ = v___x_3822_;
v_isShared_3827_ = v_isSharedCheck_3851_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_inc(v_a_3823_);
lean_dec(v___x_3822_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3851_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3849_; 
v___x_3828_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_3821_);
v___x_3829_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3830_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3828_, 10);
v___x_3831_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3828_);
lean_ctor_set(v___x_3831_, 1, v___x_3830_);
v___x_3832_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_3833_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3828_);
lean_ctor_set(v___x_3833_, 1, v___x_3832_);
v___x_3834_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3835_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_3836_ = l_Lean_Syntax_node1(v___x_3828_, v___x_3835_, v___x_3722_);
v___x_3837_ = l_Lean_Syntax_node1(v___x_3828_, v___x_3834_, v___x_3836_);
v___x_3838_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3839_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3839_, 0, v___x_3828_);
lean_ctor_set(v___x_3839_, 1, v___x_3834_);
lean_ctor_set(v___x_3839_, 2, v___x_3838_);
v___x_3840_ = l_Lean_Syntax_node2(v___x_3828_, v___x_3820_, v___x_3837_, v___x_3839_);
v___x_3841_ = l_Lean_Syntax_node1(v___x_3828_, v___x_3777_, v___x_3840_);
v___x_3842_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3828_);
lean_ctor_set(v___x_3843_, 1, v___x_3842_);
v___x_3844_ = l_Lean_Syntax_node4(v___x_3828_, v___x_3733_, v___x_3833_, v___x_3841_, v___x_3843_, v_a_3823_);
v___x_3845_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3846_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3828_);
lean_ctor_set(v___x_3846_, 1, v___x_3845_);
v___x_3847_ = l_Lean_Syntax_node3(v___x_3828_, v___x_3829_, v___x_3831_, v___x_3844_, v___x_3846_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 0, v___x_3847_);
v___x_3849_ = v___x_3826_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3847_);
lean_ctor_set(v_reuseFailAlloc_3850_, 1, v_a_3824_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
lean_dec(v___x_3722_);
v_a_3852_ = lean_ctor_get(v___x_3822_, 0);
v_a_3853_ = lean_ctor_get(v___x_3822_, 1);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3855_ = v___x_3822_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_inc(v_a_3852_);
lean_dec(v___x_3822_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_a_3852_);
lean_ctor_set(v_reuseFailAlloc_3859_, 1, v_a_3853_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
else
{
lean_object* v___x_3861_; lean_object* v___x_3862_; uint8_t v___x_3863_; 
v___x_3861_ = l_Lean_Syntax_getArg(v___x_3819_, v___x_3707_);
v___x_3862_ = l_Lean_Syntax_getNumArgs(v___x_3861_);
v___x_3863_ = lean_nat_dec_le(v___x_3702_, v___x_3862_);
if (v___x_3863_ == 0)
{
lean_object* v___x_3864_; 
lean_dec(v___x_3862_);
lean_dec(v___x_3861_);
lean_dec(v___x_3819_);
v___x_3864_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3893_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
v_a_3866_ = lean_ctor_get(v___x_3864_, 1);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3868_ = v___x_3864_;
v_isShared_3869_ = v_isSharedCheck_3893_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_inc(v_a_3865_);
lean_dec(v___x_3864_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3893_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3891_; 
v___x_3870_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_3863_);
v___x_3871_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3872_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3870_, 10);
v___x_3873_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3870_);
lean_ctor_set(v___x_3873_, 1, v___x_3872_);
v___x_3874_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_3875_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3870_);
lean_ctor_set(v___x_3875_, 1, v___x_3874_);
v___x_3876_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_3878_ = l_Lean_Syntax_node1(v___x_3870_, v___x_3877_, v___x_3722_);
v___x_3879_ = l_Lean_Syntax_node1(v___x_3870_, v___x_3876_, v___x_3878_);
v___x_3880_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3870_);
lean_ctor_set(v___x_3881_, 1, v___x_3876_);
lean_ctor_set(v___x_3881_, 2, v___x_3880_);
v___x_3882_ = l_Lean_Syntax_node2(v___x_3870_, v___x_3820_, v___x_3879_, v___x_3881_);
v___x_3883_ = l_Lean_Syntax_node1(v___x_3870_, v___x_3777_, v___x_3882_);
v___x_3884_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3885_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3870_);
lean_ctor_set(v___x_3885_, 1, v___x_3884_);
v___x_3886_ = l_Lean_Syntax_node4(v___x_3870_, v___x_3733_, v___x_3875_, v___x_3883_, v___x_3885_, v_a_3865_);
v___x_3887_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3888_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3870_);
lean_ctor_set(v___x_3888_, 1, v___x_3887_);
v___x_3889_ = l_Lean_Syntax_node3(v___x_3870_, v___x_3871_, v___x_3873_, v___x_3886_, v___x_3888_);
if (v_isShared_3869_ == 0)
{
lean_ctor_set(v___x_3868_, 0, v___x_3889_);
v___x_3891_ = v___x_3868_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v___x_3889_);
lean_ctor_set(v_reuseFailAlloc_3892_, 1, v_a_3866_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
else
{
lean_object* v_a_3894_; lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3902_; 
lean_dec(v___x_3722_);
v_a_3894_ = lean_ctor_get(v___x_3864_, 0);
v_a_3895_ = lean_ctor_get(v___x_3864_, 1);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3897_ = v___x_3864_;
v_isShared_3898_ = v_isSharedCheck_3902_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_inc(v_a_3894_);
lean_dec(v___x_3864_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3902_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3900_; 
if (v_isShared_3898_ == 0)
{
v___x_3900_ = v___x_3897_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_a_3894_);
lean_ctor_set(v_reuseFailAlloc_3901_, 1, v_a_3895_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
else
{
lean_object* v___x_3903_; lean_object* v___x_3904_; uint8_t v___x_3905_; 
v___x_3903_ = l_Lean_Syntax_getArg(v___x_3861_, v___x_3707_);
v___x_3904_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
lean_inc(v___x_3903_);
v___x_3905_ = l_Lean_Syntax_isOfKind(v___x_3903_, v___x_3904_);
if (v___x_3905_ == 0)
{
lean_object* v___x_3906_; 
lean_dec(v___x_3903_);
lean_dec(v___x_3862_);
lean_dec(v___x_3861_);
lean_dec(v___x_3819_);
v___x_3906_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v_a_3907_; lean_object* v_a_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3934_; 
v_a_3907_ = lean_ctor_get(v___x_3906_, 0);
v_a_3908_ = lean_ctor_get(v___x_3906_, 1);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3910_ = v___x_3906_;
v_isShared_3911_ = v_isSharedCheck_3934_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_a_3908_);
lean_inc(v_a_3907_);
lean_dec(v___x_3906_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3934_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3912_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_3905_);
v___x_3913_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3914_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3912_, 10);
v___x_3915_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3912_);
lean_ctor_set(v___x_3915_, 1, v___x_3914_);
v___x_3916_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_3917_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3912_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
v___x_3918_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3919_ = l_Lean_Syntax_node1(v___x_3912_, v___x_3904_, v___x_3722_);
v___x_3920_ = l_Lean_Syntax_node1(v___x_3912_, v___x_3918_, v___x_3919_);
v___x_3921_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3922_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3912_);
lean_ctor_set(v___x_3922_, 1, v___x_3918_);
lean_ctor_set(v___x_3922_, 2, v___x_3921_);
v___x_3923_ = l_Lean_Syntax_node2(v___x_3912_, v___x_3820_, v___x_3920_, v___x_3922_);
v___x_3924_ = l_Lean_Syntax_node1(v___x_3912_, v___x_3777_, v___x_3923_);
v___x_3925_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3926_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3912_);
lean_ctor_set(v___x_3926_, 1, v___x_3925_);
v___x_3927_ = l_Lean_Syntax_node4(v___x_3912_, v___x_3733_, v___x_3917_, v___x_3924_, v___x_3926_, v_a_3907_);
v___x_3928_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3929_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3912_);
lean_ctor_set(v___x_3929_, 1, v___x_3928_);
v___x_3930_ = l_Lean_Syntax_node3(v___x_3912_, v___x_3913_, v___x_3915_, v___x_3927_, v___x_3929_);
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 0, v___x_3930_);
v___x_3932_ = v___x_3910_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3930_);
lean_ctor_set(v_reuseFailAlloc_3933_, 1, v_a_3908_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
else
{
lean_object* v_a_3935_; lean_object* v_a_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3943_; 
lean_dec(v___x_3722_);
v_a_3935_ = lean_ctor_get(v___x_3906_, 0);
v_a_3936_ = lean_ctor_get(v___x_3906_, 1);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3938_ = v___x_3906_;
v_isShared_3939_ = v_isSharedCheck_3943_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_a_3936_);
lean_inc(v_a_3935_);
lean_dec(v___x_3906_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3943_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v___x_3941_; 
if (v_isShared_3939_ == 0)
{
v___x_3941_ = v___x_3938_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_a_3935_);
lean_ctor_set(v_reuseFailAlloc_3942_, 1, v_a_3936_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
}
else
{
lean_object* v___x_3944_; uint8_t v___x_3945_; 
v___x_3944_ = l_Lean_Syntax_getArg(v___x_3903_, v___x_3707_);
lean_dec(v___x_3903_);
lean_inc(v___x_3944_);
v___x_3945_ = l_Lean_Syntax_isOfKind(v___x_3944_, v___x_3723_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; 
lean_dec(v___x_3944_);
lean_dec(v___x_3862_);
lean_dec(v___x_3861_);
lean_dec(v___x_3819_);
v___x_3946_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3946_) == 0)
{
lean_object* v_a_3947_; lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3974_; 
v_a_3947_ = lean_ctor_get(v___x_3946_, 0);
v_a_3948_ = lean_ctor_get(v___x_3946_, 1);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3946_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3950_ = v___x_3946_;
v_isShared_3951_ = v_isSharedCheck_3974_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_inc(v_a_3947_);
lean_dec(v___x_3946_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3974_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3972_; 
v___x_3952_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_3945_);
v___x_3953_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_3954_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_3952_, 10);
v___x_3955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3952_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_3957_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3952_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3959_ = l_Lean_Syntax_node1(v___x_3952_, v___x_3904_, v___x_3722_);
v___x_3960_ = l_Lean_Syntax_node1(v___x_3952_, v___x_3958_, v___x_3959_);
v___x_3961_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_3962_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3952_);
lean_ctor_set(v___x_3962_, 1, v___x_3958_);
lean_ctor_set(v___x_3962_, 2, v___x_3961_);
v___x_3963_ = l_Lean_Syntax_node2(v___x_3952_, v___x_3820_, v___x_3960_, v___x_3962_);
v___x_3964_ = l_Lean_Syntax_node1(v___x_3952_, v___x_3777_, v___x_3963_);
v___x_3965_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_3966_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3952_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = l_Lean_Syntax_node4(v___x_3952_, v___x_3733_, v___x_3957_, v___x_3964_, v___x_3966_, v_a_3947_);
v___x_3968_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_3969_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3952_);
lean_ctor_set(v___x_3969_, 1, v___x_3968_);
v___x_3970_ = l_Lean_Syntax_node3(v___x_3952_, v___x_3953_, v___x_3955_, v___x_3967_, v___x_3969_);
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 0, v___x_3970_);
v___x_3972_ = v___x_3950_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v___x_3970_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v_a_3948_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
else
{
lean_object* v_a_3975_; lean_object* v_a_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3983_; 
lean_dec(v___x_3722_);
v_a_3975_ = lean_ctor_get(v___x_3946_, 0);
v_a_3976_ = lean_ctor_get(v___x_3946_, 1);
v_isSharedCheck_3983_ = !lean_is_exclusive(v___x_3946_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3978_ = v___x_3946_;
v_isShared_3979_ = v_isSharedCheck_3983_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_a_3976_);
lean_inc(v_a_3975_);
lean_dec(v___x_3946_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3983_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3981_; 
if (v_isShared_3979_ == 0)
{
v___x_3981_ = v___x_3978_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_a_3975_);
lean_ctor_set(v_reuseFailAlloc_3982_, 1, v_a_3976_);
v___x_3981_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
return v___x_3981_;
}
}
}
}
else
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; size_t v_sz_3990_; size_t v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; 
v___x_3984_ = l_Lean_Syntax_getArgs(v___x_3861_);
lean_dec(v___x_3861_);
v___x_3985_ = l_Array_extract___redArg(v___x_3984_, v___x_3702_, v___x_3862_);
lean_dec_ref(v___x_3984_);
v___x_3986_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_3987_ = lean_box(2);
v___x_3988_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
lean_ctor_set(v___x_3988_, 1, v___x_3986_);
lean_ctor_set(v___x_3988_, 2, v___x_3985_);
v___x_3989_ = l_Lean_Syntax_getArgs(v___x_3988_);
lean_dec_ref_known(v___x_3988_, 3);
v_sz_3990_ = lean_array_size(v___x_3989_);
v___x_3991_ = ((size_t)0ULL);
v___x_3992_ = l_unsafeCast___redArg(v___x_3989_);
lean_dec_ref(v___x_3989_);
v___x_3993_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(v_sz_3990_, v___x_3991_, v___x_3992_);
v___x_3994_ = l_unsafeCast___redArg(v___x_3993_);
lean_dec(v___x_3993_);
if (lean_obj_tag(v___x_3994_) == 0)
{
lean_object* v___x_3995_; 
lean_dec(v___x_3944_);
lean_dec(v___x_3819_);
v___x_3995_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_3995_) == 0)
{
lean_object* v_a_3996_; lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4023_; 
v_a_3996_ = lean_ctor_get(v___x_3995_, 0);
v_a_3997_ = lean_ctor_get(v___x_3995_, 1);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_3995_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_3999_ = v___x_3995_;
v_isShared_4000_ = v_isSharedCheck_4023_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_inc(v_a_3996_);
lean_dec(v___x_3995_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4023_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
uint8_t v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4021_; 
v___x_4001_ = 0;
v___x_4002_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_4001_);
v___x_4003_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_4004_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_4002_, 10);
v___x_4005_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4002_);
lean_ctor_set(v___x_4005_, 1, v___x_4004_);
v___x_4006_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_4007_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4002_);
lean_ctor_set(v___x_4007_, 1, v___x_4006_);
v___x_4008_ = l_Lean_Syntax_node1(v___x_4002_, v___x_3904_, v___x_3722_);
v___x_4009_ = l_Lean_Syntax_node1(v___x_4002_, v___x_3986_, v___x_4008_);
v___x_4010_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_4011_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4002_);
lean_ctor_set(v___x_4011_, 1, v___x_3986_);
lean_ctor_set(v___x_4011_, 2, v___x_4010_);
v___x_4012_ = l_Lean_Syntax_node2(v___x_4002_, v___x_3820_, v___x_4009_, v___x_4011_);
v___x_4013_ = l_Lean_Syntax_node1(v___x_4002_, v___x_3777_, v___x_4012_);
v___x_4014_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_4015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4002_);
lean_ctor_set(v___x_4015_, 1, v___x_4014_);
v___x_4016_ = l_Lean_Syntax_node4(v___x_4002_, v___x_3733_, v___x_4007_, v___x_4013_, v___x_4015_, v_a_3996_);
v___x_4017_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_4018_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4002_);
lean_ctor_set(v___x_4018_, 1, v___x_4017_);
v___x_4019_ = l_Lean_Syntax_node3(v___x_4002_, v___x_4003_, v___x_4005_, v___x_4016_, v___x_4018_);
if (v_isShared_4000_ == 0)
{
lean_ctor_set(v___x_3999_, 0, v___x_4019_);
v___x_4021_ = v___x_3999_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4019_);
lean_ctor_set(v_reuseFailAlloc_4022_, 1, v_a_3997_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
else
{
lean_object* v_a_4024_; lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4032_; 
lean_dec(v___x_3722_);
v_a_4024_ = lean_ctor_get(v___x_3995_, 0);
v_a_4025_ = lean_ctor_get(v___x_3995_, 1);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_3995_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4027_ = v___x_3995_;
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_inc(v_a_4024_);
lean_dec(v___x_3995_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4024_);
lean_ctor_set(v_reuseFailAlloc_4031_, 1, v_a_4025_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
else
{
lean_object* v_val_4033_; lean_object* v___x_4034_; uint8_t v___x_4035_; 
v_val_4033_ = lean_ctor_get(v___x_3994_, 0);
lean_inc(v_val_4033_);
lean_dec_ref_known(v___x_3994_, 1);
v___x_4034_ = l_Lean_Syntax_getArg(v___x_3819_, v___x_3702_);
lean_dec(v___x_3819_);
v___x_4035_ = l_Lean_Syntax_matchesNull(v___x_4034_, v___x_3707_);
if (v___x_4035_ == 0)
{
lean_object* v___x_4036_; 
lean_dec(v_val_4033_);
lean_dec(v___x_3944_);
v___x_4036_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_3732_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_4036_) == 0)
{
lean_object* v_a_4037_; lean_object* v_a_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4063_; 
v_a_4037_ = lean_ctor_get(v___x_4036_, 0);
v_a_4038_ = lean_ctor_get(v___x_4036_, 1);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_4036_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4040_ = v___x_4036_;
v_isShared_4041_ = v_isSharedCheck_4063_;
goto v_resetjp_4039_;
}
else
{
lean_inc(v_a_4038_);
lean_inc(v_a_4037_);
lean_dec(v___x_4036_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4063_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
v___x_4042_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_4035_);
v___x_4043_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_4044_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_4042_, 10);
v___x_4045_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4042_);
lean_ctor_set(v___x_4045_, 1, v___x_4044_);
v___x_4046_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_4047_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4047_, 0, v___x_4042_);
lean_ctor_set(v___x_4047_, 1, v___x_4046_);
v___x_4048_ = l_Lean_Syntax_node1(v___x_4042_, v___x_3904_, v___x_3722_);
v___x_4049_ = l_Lean_Syntax_node1(v___x_4042_, v___x_3986_, v___x_4048_);
v___x_4050_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_4051_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4051_, 0, v___x_4042_);
lean_ctor_set(v___x_4051_, 1, v___x_3986_);
lean_ctor_set(v___x_4051_, 2, v___x_4050_);
v___x_4052_ = l_Lean_Syntax_node2(v___x_4042_, v___x_3820_, v___x_4049_, v___x_4051_);
v___x_4053_ = l_Lean_Syntax_node1(v___x_4042_, v___x_3777_, v___x_4052_);
v___x_4054_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_4055_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4042_);
lean_ctor_set(v___x_4055_, 1, v___x_4054_);
v___x_4056_ = l_Lean_Syntax_node4(v___x_4042_, v___x_3733_, v___x_4047_, v___x_4053_, v___x_4055_, v_a_4037_);
v___x_4057_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_4058_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4042_);
lean_ctor_set(v___x_4058_, 1, v___x_4057_);
v___x_4059_ = l_Lean_Syntax_node3(v___x_4042_, v___x_4043_, v___x_4045_, v___x_4056_, v___x_4058_);
if (v_isShared_4041_ == 0)
{
lean_ctor_set(v___x_4040_, 0, v___x_4059_);
v___x_4061_ = v___x_4040_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4059_);
lean_ctor_set(v_reuseFailAlloc_4062_, 1, v_a_4038_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
else
{
lean_object* v_a_4064_; lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4072_; 
lean_dec(v___x_3722_);
v_a_4064_ = lean_ctor_get(v___x_4036_, 0);
v_a_4065_ = lean_ctor_get(v___x_4036_, 1);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4036_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4067_ = v___x_4036_;
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_inc(v_a_4064_);
lean_dec(v___x_4036_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4070_; 
if (v_isShared_4068_ == 0)
{
v___x_4070_ = v___x_4067_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4064_);
lean_ctor_set(v_reuseFailAlloc_4071_, 1, v_a_4065_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
return v___x_4070_;
}
}
}
}
else
{
lean_object* v_00_u03a8_4073_; lean_object* v___x_4074_; 
v_00_u03a8_4073_ = l_Lean_Syntax_getArg(v_00_u03a8_3732_, v___x_3731_);
lean_dec(v_00_u03a8_3732_);
v___x_4074_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_4073_, v_a_3696_, v_a_3697_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4109_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
v_a_4076_ = lean_ctor_get(v___x_4074_, 1);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4078_ = v___x_4074_;
v_isShared_4079_ = v_isSharedCheck_4109_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_inc(v_a_4075_);
lean_dec(v___x_4074_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4109_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
uint8_t v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; size_t v_sz_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4107_; 
v___x_4080_ = 0;
v___x_4081_ = l_Lean_SourceInfo_fromRef(v_a_3696_, v___x_4080_);
v___x_4082_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_4083_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_4081_, 12);
v___x_4084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4081_);
lean_ctor_set(v___x_4084_, 1, v___x_4083_);
v___x_4085_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_4086_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4081_);
lean_ctor_set(v___x_4086_, 1, v___x_4085_);
v___x_4087_ = l_Lean_Syntax_node1(v___x_4081_, v___x_3904_, v___x_3722_);
v___x_4088_ = l_Lean_Syntax_node1(v___x_4081_, v___x_3904_, v___x_3944_);
v___x_4089_ = l_Array_mkArray2___redArg(v___x_4087_, v___x_4088_);
v_sz_4090_ = lean_array_size(v_val_4033_);
v___x_4091_ = l_unsafeCast___redArg(v_val_4033_);
lean_dec(v_val_4033_);
v___x_4092_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(v___x_4081_, v_sz_4090_, v___x_3991_, v___x_4091_);
v___x_4093_ = l_unsafeCast___redArg(v___x_4092_);
lean_dec_ref(v___x_4092_);
v___x_4094_ = l_Array_append___redArg(v___x_4089_, v___x_4093_);
lean_dec(v___x_4093_);
v___x_4095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4095_, 0, v___x_4081_);
lean_ctor_set(v___x_4095_, 1, v___x_3986_);
lean_ctor_set(v___x_4095_, 2, v___x_4094_);
v___x_4096_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51);
v___x_4097_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4081_);
lean_ctor_set(v___x_4097_, 1, v___x_3986_);
lean_ctor_set(v___x_4097_, 2, v___x_4096_);
v___x_4098_ = l_Lean_Syntax_node2(v___x_4081_, v___x_3820_, v___x_4095_, v___x_4097_);
v___x_4099_ = l_Lean_Syntax_node1(v___x_4081_, v___x_3777_, v___x_4098_);
v___x_4100_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54));
v___x_4101_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4081_);
lean_ctor_set(v___x_4101_, 1, v___x_4100_);
v___x_4102_ = l_Lean_Syntax_node4(v___x_4081_, v___x_3733_, v___x_4086_, v___x_4099_, v___x_4101_, v_a_4075_);
v___x_4103_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_4104_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4081_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
v___x_4105_ = l_Lean_Syntax_node3(v___x_4081_, v___x_4082_, v___x_4084_, v___x_4102_, v___x_4104_);
if (v_isShared_4079_ == 0)
{
lean_ctor_set(v___x_4078_, 0, v___x_4105_);
v___x_4107_ = v___x_4078_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v___x_4105_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v_a_4076_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
else
{
lean_object* v_a_4110_; lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
lean_dec(v_val_4033_);
lean_dec(v___x_3944_);
lean_dec(v___x_3722_);
v_a_4110_ = lean_ctor_get(v___x_4074_, 0);
v_a_4111_ = lean_ctor_get(v___x_4074_, 1);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_4074_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_inc(v_a_4110_);
lean_dec(v___x_4074_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4110_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
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
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists___boxed(lean_object* v_x_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_){
_start:
{
lean_object* v_res_4122_; 
v_res_4122_ = l_Std_Do_SPred_Notation_unexpandExists(v_x_4119_, v_a_4120_, v_a_4121_);
lean_dec(v_a_4120_);
return v_res_4122_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff(lean_object* v_x_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_){
_start:
{
lean_object* v___x_4127_; uint8_t v___x_4128_; 
v___x_4127_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_4124_);
v___x_4128_ = l_Lean_Syntax_isOfKind(v_x_4124_, v___x_4127_);
if (v___x_4128_ == 0)
{
lean_object* v___x_4129_; lean_object* v___x_4130_; 
lean_dec(v_x_4124_);
v___x_4129_ = lean_box(0);
v___x_4130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
lean_ctor_set(v___x_4130_, 1, v_a_4126_);
return v___x_4130_;
}
else
{
lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; uint8_t v___x_4134_; 
v___x_4131_ = lean_unsigned_to_nat(1u);
v___x_4132_ = l_Lean_Syntax_getArg(v_x_4124_, v___x_4131_);
lean_dec(v_x_4124_);
v___x_4133_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_4132_);
v___x_4134_ = l_Lean_Syntax_matchesNull(v___x_4132_, v___x_4133_);
if (v___x_4134_ == 0)
{
lean_object* v___x_4135_; lean_object* v___x_4136_; 
lean_dec(v___x_4132_);
v___x_4135_ = lean_box(0);
v___x_4136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4135_);
lean_ctor_set(v___x_4136_, 1, v_a_4126_);
return v___x_4136_;
}
else
{
lean_object* v___x_4137_; lean_object* v_P_4138_; lean_object* v___x_4139_; 
v___x_4137_ = lean_unsigned_to_nat(0u);
v_P_4138_ = l_Lean_Syntax_getArg(v___x_4132_, v___x_4137_);
v___x_4139_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_4138_, v_a_4125_, v_a_4126_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4140_; lean_object* v_a_4141_; lean_object* v_Q_4142_; lean_object* v___x_4143_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
lean_inc(v_a_4140_);
v_a_4141_ = lean_ctor_get(v___x_4139_, 1);
lean_inc(v_a_4141_);
lean_dec_ref_known(v___x_4139_, 2);
v_Q_4142_ = l_Lean_Syntax_getArg(v___x_4132_, v___x_4131_);
lean_dec(v___x_4132_);
v___x_4143_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_4142_, v_a_4125_, v_a_4141_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4164_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
v_a_4145_ = lean_ctor_get(v___x_4143_, 1);
v_isSharedCheck_4164_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4147_ = v___x_4143_;
v_isShared_4148_ = v_isSharedCheck_4164_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_inc(v_a_4144_);
lean_dec(v___x_4143_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4164_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
uint8_t v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4162_; 
v___x_4149_ = 0;
v___x_4150_ = l_Lean_SourceInfo_fromRef(v_a_4125_, v___x_4149_);
v___x_4151_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_4152_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_4150_, 4);
v___x_4153_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4150_);
lean_ctor_set(v___x_4153_, 1, v___x_4152_);
v___x_4154_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9));
v___x_4155_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandIff___closed__0));
v___x_4156_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4150_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
v___x_4157_ = l_Lean_Syntax_node3(v___x_4150_, v___x_4154_, v_a_4140_, v___x_4156_, v_a_4144_);
v___x_4158_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_4159_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4150_);
lean_ctor_set(v___x_4159_, 1, v___x_4158_);
v___x_4160_ = l_Lean_Syntax_node3(v___x_4150_, v___x_4151_, v___x_4153_, v___x_4157_, v___x_4159_);
if (v_isShared_4148_ == 0)
{
lean_ctor_set(v___x_4147_, 0, v___x_4160_);
v___x_4162_ = v___x_4147_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4160_);
lean_ctor_set(v_reuseFailAlloc_4163_, 1, v_a_4145_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
else
{
lean_object* v_a_4165_; lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
lean_dec(v_a_4140_);
v_a_4165_ = lean_ctor_get(v___x_4143_, 0);
v_a_4166_ = lean_ctor_get(v___x_4143_, 1);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4143_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_inc(v_a_4165_);
lean_dec(v___x_4143_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4165_);
lean_ctor_set(v_reuseFailAlloc_4172_, 1, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4182_; 
lean_dec(v___x_4132_);
v_a_4174_ = lean_ctor_get(v___x_4139_, 0);
v_a_4175_ = lean_ctor_get(v___x_4139_, 1);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4177_ = v___x_4139_;
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_inc(v_a_4174_);
lean_dec(v___x_4139_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4174_);
lean_ctor_set(v_reuseFailAlloc_4181_, 1, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff___boxed(lean_object* v_x_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_){
_start:
{
lean_object* v_res_4186_; 
v_res_4186_ = l_Std_Do_SPred_Notation_unexpandIff(v_x_4183_, v_a_4184_, v_a_4185_);
lean_dec(v_a_4184_);
return v_res_4186_;
}
}
lean_object* runtime_initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_SPred_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_SPred_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
lean_object* initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_SPred_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_SPred_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_SPred_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_SPred_Notation(builtin);
}
#ifdef __cplusplus
}
#endif

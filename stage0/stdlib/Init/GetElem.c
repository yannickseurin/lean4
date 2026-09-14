// Lean compiler output
// Module: Init.GetElem
// Imports: public import Init.Util public import Init.Data.Option.Basic
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_outOfBounds___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Init.GetElem"};
static const lean_object* l_outOfBounds___redArg___closed__0 = (const lean_object*)&l_outOfBounds___redArg___closed__0_value;
static const lean_string_object l_outOfBounds___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "outOfBounds"};
static const lean_object* l_outOfBounds___redArg___closed__1 = (const lean_object*)&l_outOfBounds___redArg___closed__1_value;
static const lean_string_object l_outOfBounds___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "index out of bounds"};
static const lean_object* l_outOfBounds___redArg___closed__2 = (const lean_object*)&l_outOfBounds___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_outOfBounds___redArg(lean_object*);
LEAN_EXPORT lean_object* l_outOfBounds___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_outOfBounds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_outOfBounds___boxed(lean_object*, lean_object*);
static const lean_string_object l_term_____x5b___x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term__[_]"};
static const lean_object* l_term_____x5b___x5d___closed__0 = (const lean_object*)&l_term_____x5b___x5d___closed__0_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 146, 84, 128, 183, 70, 246)}};
static const lean_object* l_term_____x5b___x5d___closed__1 = (const lean_object*)&l_term_____x5b___x5d___closed__1_value;
static const lean_string_object l_term_____x5b___x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_term_____x5b___x5d___closed__2 = (const lean_object*)&l_term_____x5b___x5d___closed__2_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_term_____x5b___x5d___closed__3 = (const lean_object*)&l_term_____x5b___x5d___closed__3_value;
static const lean_string_object l_term_____x5b___x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "noWs"};
static const lean_object* l_term_____x5b___x5d___closed__4 = (const lean_object*)&l_term_____x5b___x5d___closed__4_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___closed__4_value),LEAN_SCALAR_PTR_LITERAL(92, 29, 204, 148, 167, 109, 242, 21)}};
static const lean_object* l_term_____x5b___x5d___closed__5 = (const lean_object*)&l_term_____x5b___x5d___closed__5_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__5_value)}};
static const lean_object* l_term_____x5b___x5d___closed__6 = (const lean_object*)&l_term_____x5b___x5d___closed__6_value;
static const lean_string_object l_term_____x5b___x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_term_____x5b___x5d___closed__7 = (const lean_object*)&l_term_____x5b___x5d___closed__7_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__7_value)}};
static const lean_object* l_term_____x5b___x5d___closed__8 = (const lean_object*)&l_term_____x5b___x5d___closed__8_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___closed__6_value),((lean_object*)&l_term_____x5b___x5d___closed__8_value)}};
static const lean_object* l_term_____x5b___x5d___closed__9 = (const lean_object*)&l_term_____x5b___x5d___closed__9_value;
static const lean_string_object l_term_____x5b___x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_term_____x5b___x5d___closed__10 = (const lean_object*)&l_term_____x5b___x5d___closed__10_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___closed__10_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_term_____x5b___x5d___closed__11 = (const lean_object*)&l_term_____x5b___x5d___closed__11_value;
static const lean_string_object l_term_____x5b___x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_term_____x5b___x5d___closed__12 = (const lean_object*)&l_term_____x5b___x5d___closed__12_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___closed__12_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_term_____x5b___x5d___closed__13 = (const lean_object*)&l_term_____x5b___x5d___closed__13_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_term_____x5b___x5d___closed__14 = (const lean_object*)&l_term_____x5b___x5d___closed__14_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__11_value),((lean_object*)&l_term_____x5b___x5d___closed__14_value)}};
static const lean_object* l_term_____x5b___x5d___closed__15 = (const lean_object*)&l_term_____x5b___x5d___closed__15_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___closed__9_value),((lean_object*)&l_term_____x5b___x5d___closed__15_value)}};
static const lean_object* l_term_____x5b___x5d___closed__16 = (const lean_object*)&l_term_____x5b___x5d___closed__16_value;
static const lean_string_object l_term_____x5b___x5d___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_term_____x5b___x5d___closed__17 = (const lean_object*)&l_term_____x5b___x5d___closed__17_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__17_value)}};
static const lean_object* l_term_____x5b___x5d___closed__18 = (const lean_object*)&l_term_____x5b___x5d___closed__18_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___closed__16_value),((lean_object*)&l_term_____x5b___x5d___closed__18_value)}};
static const lean_object* l_term_____x5b___x5d___closed__19 = (const lean_object*)&l_term_____x5b___x5d___closed__19_value;
static const lean_ctor_object l_term_____x5b___x5d___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___closed__19_value)}};
static const lean_object* l_term_____x5b___x5d___closed__20 = (const lean_object*)&l_term_____x5b___x5d___closed__20_value;
LEAN_EXPORT const lean_object* l_term_____x5b___x5d = (const lean_object*)&l_term_____x5b___x5d___closed__20_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__3 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__3_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getElem"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__5 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__5_value;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(134, 42, 44, 29, 5, 206, 236, 250)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__7 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__7_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "GetElem"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__8 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__8_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(111, 233, 51, 226, 114, 128, 218, 11)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__9_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 164, 165, 74, 8, 252, 37, 122)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__9 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__9_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__10 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__10_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__11 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__11_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__12 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__12_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__14 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__14_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__16 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__16_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__18 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__18_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__19 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__19_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__20 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__20_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__21 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__21_value;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__22;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__24;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__25;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__26 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__26_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__28 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__28_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__30 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__30_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__32 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__32_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticGet_elem_tactic"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__34 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__34_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(141, 31, 109, 153, 11, 229, 201, 51)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__35 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__35_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "get_elem_tactic"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__36 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__36_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__37 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__37_value;
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_____x5b___x5d_x27___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term__[_]'_"};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__0 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__0_value;
static const lean_ctor_object l_term_____x5b___x5d_x27___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d_x27___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 98, 175, 4, 199, 28, 246, 201)}};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__1 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__1_value;
static const lean_string_object l_term_____x5b___x5d_x27___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]'"};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__2 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__2_value;
static const lean_ctor_object l_term_____x5b___x5d_x27___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_____x5b___x5d_x27___00__closed__2_value)}};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__3 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__3_value;
static const lean_ctor_object l_term_____x5b___x5d_x27___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___closed__16_value),((lean_object*)&l_term_____x5b___x5d_x27___00__closed__3_value)}};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__4 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__4_value;
static const lean_ctor_object l_term_____x5b___x5d_x27___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__13_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__5 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__5_value;
static const lean_ctor_object l_term_____x5b___x5d_x27___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d_x27___00__closed__4_value),((lean_object*)&l_term_____x5b___x5d_x27___00__closed__5_value)}};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__6 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__6_value;
static const lean_ctor_object l_term_____x5b___x5d_x27___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_term_____x5b___x5d_x27___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d_x27___00__closed__6_value)}};
static const lean_object* l_term_____x5b___x5d_x27___00__closed__7 = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__7_value;
LEAN_EXPORT const lean_object* l_term_____x5b___x5d_x27__ = (const lean_object*)&l_term_____x5b___x5d_x27___00__closed__7_value;
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d_x27____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d_x27____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableGetElem_x3f___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_decidableGetElem_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_decidableGetElem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_decidableGetElem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_____x5b___x5d___x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term__[_]_\?"};
static const lean_object* l_term_____x5b___x5d___x3f___closed__0 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__0_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 178, 109, 68, 161, 229, 23, 17)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__1 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__1_value;
static const lean_string_object l_term_____x5b___x5d___x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_term_____x5b___x5d___x3f___closed__2 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__2_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__3 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__3_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___x3f___closed__3_value),((lean_object*)&l_term_____x5b___x5d___closed__6_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__4 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__4_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__4_value),((lean_object*)&l_term_____x5b___x5d___closed__8_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__5 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__5_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__5_value),((lean_object*)&l_term_____x5b___x5d___closed__14_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__6 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__6_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__6_value),((lean_object*)&l_term_____x5b___x5d___closed__18_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__7 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__7_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__7_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__4_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__8 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__8_value;
static const lean_string_object l_term_____x5b___x5d___x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_term_____x5b___x5d___x3f___closed__9 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__9_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___x3f___closed__9_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__10 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__10_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__8_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__10_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__11 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__11_value;
static const lean_ctor_object l_term_____x5b___x5d___x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___x3f___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___x3f___closed__11_value)}};
static const lean_object* l_term_____x5b___x5d___x3f___closed__12 = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__12_value;
LEAN_EXPORT const lean_object* l_term_____x5b___x5d___x3f = (const lean_object*)&l_term_____x5b___x5d___x3f___closed__12_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "getElem\?"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0_value;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__1;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 221, 90, 49, 49, 121, 142, 170)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__2 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__2_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "GetElem\?"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__3 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__3_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(76, 182, 194, 21, 171, 76, 210, 17)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 231, 183, 124, 210, 168, 65, 205)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__4 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__4_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__5 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__5_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__6 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__6_value;
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_____x5b___x5d___x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term__[_]_!"};
static const lean_object* l_term_____x5b___x5d___x21___closed__0 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__0_value;
static const lean_ctor_object l_term_____x5b___x5d___x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___x21___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 145, 92, 47, 59, 8, 18, 13)}};
static const lean_object* l_term_____x5b___x5d___x21___closed__1 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__1_value;
static const lean_string_object l_term_____x5b___x5d___x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l_term_____x5b___x5d___x21___closed__2 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__2_value;
static const lean_ctor_object l_term_____x5b___x5d___x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___x21___closed__2_value)}};
static const lean_object* l_term_____x5b___x5d___x21___closed__3 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__3_value;
static const lean_ctor_object l_term_____x5b___x5d___x21___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___closed__3_value),((lean_object*)&l_term_____x5b___x5d___x3f___closed__8_value),((lean_object*)&l_term_____x5b___x5d___x21___closed__3_value)}};
static const lean_object* l_term_____x5b___x5d___x21___closed__4 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__4_value;
static const lean_ctor_object l_term_____x5b___x5d___x21___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_term_____x5b___x5d___x21___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_____x5b___x5d___x21___closed__4_value)}};
static const lean_object* l_term_____x5b___x5d___x21___closed__5 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__5_value;
LEAN_EXPORT const lean_object* l_term_____x5b___x5d___x21 = (const lean_object*)&l_term_____x5b___x5d___x21___closed__5_value;
static const lean_string_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "getElem!"};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0_value;
static lean_once_cell_t l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__1;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 78, 92, 164, 205, 1, 45, 205)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__2 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__2_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(76, 182, 194, 21, 171, 76, 210, 17)}};
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__3_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 107, 135, 132, 224, 239, 185, 227)}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__3 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__3_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__4 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__4_value;
static const lean_ctor_object l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__5 = (const lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__5_value;
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0_value;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "intros"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__1 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__1_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 175, 18, 116, 252, 50, 128, 45)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__3;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__4;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13_value),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0_value)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__6;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__7;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__8;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tacticTry_"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__10 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__10_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(34, 109, 187, 155, 23, 130, 33, 152)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11_value;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__12 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__12_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__13;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__14;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_<;>_"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__15 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__15_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(31, 118, 44, 159, 195, 11, 47, 176)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16_value;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__17 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__17_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__17_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__19;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__20;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__21 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__21_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__21_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__24;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__25;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__26;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "only"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__27 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__27_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__28;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__29;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__30;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__32;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__34 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__34_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__34_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__37;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__38;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__39;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__40;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__42;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__43;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__44;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__46;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__47;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__48;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__49;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__50;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__51;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<;>"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__52 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__52_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__53;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__54;
static const lean_string_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__55 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__55_value;
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value_aux_2),((lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__55_value),LEAN_SCALAR_PTR_LITERAL(41, 88, 242, 177, 210, 111, 166, 107)}};
static const lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56 = (const lean_object*)&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__57;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__58;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__59;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__60;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__61;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__62;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__63;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__64;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__65;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__66;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__67;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__68;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__69;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__70;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__71;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__72;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__73;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__74;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__75;
static lean_once_cell_t l_LawfulGetElem_getElem_x3f__def___autoParam___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam___closed__76;
LEAN_EXPORT lean_object* l_LawfulGetElem_getElem_x3f__def___autoParam;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__0;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__1;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__2;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__3;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__4;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__5;
static const lean_string_object l_LawfulGetElem_getElem_x21__def___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__6 = (const lean_object*)&l_LawfulGetElem_getElem_x21__def___autoParam___closed__6_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__7;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__8;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__9;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__10;
static const lean_string_object l_LawfulGetElem_getElem_x21__def___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "outOfBounds_eq_default"};
static const lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__11 = (const lean_object*)&l_LawfulGetElem_getElem_x21__def___autoParam___closed__11_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__12;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__13;
static const lean_ctor_object l_LawfulGetElem_getElem_x21__def___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LawfulGetElem_getElem_x21__def___autoParam___closed__11_value),LEAN_SCALAR_PTR_LITERAL(243, 130, 123, 167, 75, 248, 230, 65)}};
static const lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__14 = (const lean_object*)&l_LawfulGetElem_getElem_x21__def___autoParam___closed__14_value;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__15;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__16;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__17;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__18;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__19;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__20;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__21;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__22;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__23;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__24;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__25;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__26;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__27;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__28;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__29;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__30;
static lean_once_cell_t l_LawfulGetElem_getElem_x21__def___autoParam___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LawfulGetElem_getElem_x21__def___autoParam___closed__31;
LEAN_EXPORT lean_object* l_LawfulGetElem_getElem_x21__def___autoParam;
LEAN_EXPORT lean_object* l___private_Init_GetElem_0__GetElem_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_GetElem_0__GetElem_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "tacticGet_elem_tactic_extensible"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__0 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__0_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 80, 20, 121, 148, 193, 237, 106)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__1 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__1_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seq1"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__2 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__2_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value_aux_2),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withReducible"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__5 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__5_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value_aux_2),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(197, 44, 223, 192, 8, 197, 146, 83)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "with_reducible"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__7 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__7_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__8 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__8_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value_aux_2),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Fin.val_lt_of_le"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__10 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__10_value;
static lean_once_cell_t l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__11;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__12 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__12_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "val_lt_of_le"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__13 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__13_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14_value_aux_0),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(58, 50, 241, 227, 148, 57, 233, 165)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__15 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__15_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__16 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__16_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__17 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__17_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "get_elem_tactic_extensible"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__18 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__18_value;
static const lean_string_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__19 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__19_value;
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value_aux_0),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value_aux_1),((lean_object*)&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value_aux_2),((lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 179, 82, 204, 87, 48, 123)}};
static const lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20 = (const lean_object*)&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20_value;
LEAN_EXPORT lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_instGetElemNatLtLength___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_instGetElemNatLtLength___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_instGetElemNatLtLength___redArg___closed__0 = (const lean_object*)&l_List_instGetElemNatLtLength___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg();
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength(lean_object*);
LEAN_EXPORT lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_get_x3fInternal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_get_x3fInternal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_get_x3fInternal___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_get_x21Internal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "List.get!Internal"};
static const lean_object* l_List_get_x21Internal___redArg___closed__0 = (const lean_object*)&l_List_get_x21Internal___redArg___closed__0_value;
static const lean_string_object l_List_get_x21Internal___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid index"};
static const lean_object* l_List_get_x21Internal___redArg___closed__1 = (const lean_object*)&l_List_get_x21Internal___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_get_x21Internal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_get_x21Internal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_get_x21Internal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_instGetElem_x3fNatLtLength___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_get_x3fInternal___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_instGetElem_x3fNatLtLength___redArg___closed__0 = (const lean_object*)&l_List_instGetElem_x3fNatLtLength___redArg___closed__0_value;
static const lean_closure_object l_List_instGetElem_x3fNatLtLength___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_get_x21Internal___redArg___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_instGetElem_x3fNatLtLength___redArg___closed__1 = (const lean_object*)&l_List_instGetElem_x3fNatLtLength___redArg___closed__1_value;
static const lean_ctor_object l_List_instGetElem_x3fNatLtLength___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_instGetElemNatLtLength___redArg___closed__0_value),((lean_object*)&l_List_instGetElem_x3fNatLtLength___redArg___closed__0_value),((lean_object*)&l_List_instGetElem_x3fNatLtLength___redArg___closed__1_value)}};
static const lean_object* l_List_instGetElem_x3fNatLtLength___redArg___closed__2 = (const lean_object*)&l_List_instGetElem_x3fNatLtLength___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_instGetElem_x3fNatLtLength___redArg();
LEAN_EXPORT lean_object* l_List_instGetElem_x3fNatLtLength___redArg___boxed(lean_object*);
static lean_once_cell_t l_List_instGetElem_x3fNatLtLength___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_instGetElem_x3fNatLtLength___closed__0;
LEAN_EXPORT lean_object* l_List_instGetElem_x3fNatLtLength(lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instGetElemNatLtSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instGetElemNatLtSize___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instGetElemNatLtSize___redArg___closed__0 = (const lean_object*)&l_Array_instGetElemNatLtSize___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg();
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize(lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instGetElem_x3fNatLtSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instGetElem_x3fNatLtSize___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___closed__0 = (const lean_object*)&l_Array_instGetElem_x3fNatLtSize___redArg___closed__0_value;
static const lean_closure_object l_Array_instGetElem_x3fNatLtSize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instGetElem_x3fNatLtSize___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___closed__1 = (const lean_object*)&l_Array_instGetElem_x3fNatLtSize___redArg___closed__1_value;
static const lean_ctor_object l_Array_instGetElem_x3fNatLtSize___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_instGetElemNatLtSize___redArg___closed__0_value),((lean_object*)&l_Array_instGetElem_x3fNatLtSize___redArg___closed__0_value),((lean_object*)&l_Array_instGetElem_x3fNatLtSize___redArg___closed__1_value)}};
static const lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___closed__2 = (const lean_object*)&l_Array_instGetElem_x3fNatLtSize___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg();
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instGetElem_x3fNatLtSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instGetElem_x3fNatLtSize___closed__0;
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instGetElemNatTrue___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instGetElemNatTrue___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instGetElemNatTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instGetElemNatTrue___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instGetElemNatTrue___closed__0 = (const lean_object*)&l_Lean_Syntax_instGetElemNatTrue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instGetElemNatTrue = (const lean_object*)&l_Lean_Syntax_instGetElemNatTrue___closed__0_value;
LEAN_EXPORT lean_object* l_outOfBounds___redArg(lean_object* v_inst_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_5_ = ((lean_object*)(l_outOfBounds___redArg___closed__0));
v___x_6_ = ((lean_object*)(l_outOfBounds___redArg___closed__1));
v___x_7_ = lean_unsigned_to_nat(18u);
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = ((lean_object*)(l_outOfBounds___redArg___closed__2));
v___x_10_ = l_mkPanicMessageWithDecl(v___x_5_, v___x_6_, v___x_7_, v___x_8_, v___x_9_);
v___x_11_ = l_panic___redArg(v_inst_4_, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_outOfBounds___redArg___boxed(lean_object* v_inst_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_outOfBounds___redArg(v_inst_12_);
lean_dec(v_inst_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_outOfBounds(lean_object* v_00_u03b1_14_, lean_object* v_inst_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_outOfBounds___redArg(v_inst_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_outOfBounds___boxed(lean_object* v_00_u03b1_17_, lean_object* v_inst_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_outOfBounds(v_00_u03b1_17_, v_inst_18_);
lean_dec(v_inst_18_);
return v_res_19_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__5));
v___x_78_ = l_String_toRawSubstring_x27(v___x_77_);
return v___x_78_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__22(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__21));
v___x_112_ = l_String_toRawSubstring_x27(v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_box(0);
v___x_114_ = l_unsafeCast___redArg(v___x_113_);
return v___x_114_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__24(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__25(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_box(0);
v___x_118_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__24, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__24_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__24);
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1(lean_object* v_x_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = ((lean_object*)(l_term_____x5b___x5d___closed__1));
lean_inc(v_x_145_);
v___x_149_ = l_Lean_Syntax_isOfKind(v_x_145_, v___x_148_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec(v_x_145_);
v___x_150_ = lean_box(1);
v___x_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v_a_147_);
return v___x_151_;
}
else
{
lean_object* v_quotContext_152_; lean_object* v_currMacroScope_153_; lean_object* v_ref_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_quotContext_152_ = lean_ctor_get(v_a_146_, 1);
v_currMacroScope_153_ = lean_ctor_get(v_a_146_, 2);
v_ref_154_ = lean_ctor_get(v_a_146_, 5);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = l_Lean_Syntax_getArg(v_x_145_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(2u);
v___x_158_ = l_Lean_Syntax_getArg(v_x_145_, v___x_157_);
lean_dec(v_x_145_);
v___x_159_ = 0;
v___x_160_ = l_Lean_SourceInfo_fromRef(v_ref_154_, v___x_159_);
v___x_161_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4));
v___x_162_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6);
v___x_163_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__7));
lean_inc_n(v_currMacroScope_153_, 2);
lean_inc_n(v_quotContext_152_, 2);
v___x_164_ = l_Lean_addMacroScope(v_quotContext_152_, v___x_163_, v_currMacroScope_153_);
v___x_165_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__11));
lean_inc_n(v___x_160_, 15);
v___x_166_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_166_, 0, v___x_160_);
lean_ctor_set(v___x_166_, 1, v___x_162_);
lean_ctor_set(v___x_166_, 2, v___x_164_);
lean_ctor_set(v___x_166_, 3, v___x_165_);
v___x_167_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_168_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__15));
v___x_169_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__17));
v___x_170_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__18));
v___x_171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_160_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__20));
v___x_173_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__22, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__22_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__22);
v___x_174_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__23);
v___x_175_ = l_Lean_addMacroScope(v_quotContext_152_, v___x_174_, v_currMacroScope_153_);
v___x_176_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__25, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__25_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__25);
v___x_177_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_177_, 0, v___x_160_);
lean_ctor_set(v___x_177_, 1, v___x_173_);
lean_ctor_set(v___x_177_, 2, v___x_175_);
lean_ctor_set(v___x_177_, 3, v___x_176_);
v___x_178_ = l_Lean_Syntax_node1(v___x_160_, v___x_172_, v___x_177_);
v___x_179_ = l_Lean_Syntax_node2(v___x_160_, v___x_169_, v___x_171_, v___x_178_);
v___x_180_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__27));
v___x_181_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__28));
v___x_182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_160_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
v___x_183_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31));
v___x_184_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33));
v___x_185_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__35));
v___x_186_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__36));
v___x_187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_160_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = l_Lean_Syntax_node1(v___x_160_, v___x_185_, v___x_187_);
v___x_189_ = l_Lean_Syntax_node1(v___x_160_, v___x_167_, v___x_188_);
v___x_190_ = l_Lean_Syntax_node1(v___x_160_, v___x_184_, v___x_189_);
v___x_191_ = l_Lean_Syntax_node1(v___x_160_, v___x_183_, v___x_190_);
v___x_192_ = l_Lean_Syntax_node2(v___x_160_, v___x_180_, v___x_182_, v___x_191_);
v___x_193_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__37));
v___x_194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_160_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = l_Lean_Syntax_node3(v___x_160_, v___x_168_, v___x_179_, v___x_192_, v___x_194_);
v___x_196_ = l_Lean_Syntax_node3(v___x_160_, v___x_167_, v___x_156_, v___x_158_, v___x_195_);
v___x_197_ = l_Lean_Syntax_node2(v___x_160_, v___x_161_, v___x_166_, v___x_196_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_a_147_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___boxed(lean_object* v_x_199_, lean_object* v_a_200_, lean_object* v_a_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1(v_x_199_, v_a_200_, v_a_201_);
lean_dec_ref(v_a_200_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d_x27____1(lean_object* v_x_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = ((lean_object*)(l_term_____x5b___x5d_x27___00__closed__1));
lean_inc(v_x_226_);
v___x_230_ = l_Lean_Syntax_isOfKind(v_x_226_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; 
lean_dec(v_x_226_);
v___x_231_ = lean_box(1);
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v_a_228_);
return v___x_232_;
}
else
{
lean_object* v_quotContext_233_; lean_object* v_currMacroScope_234_; lean_object* v_ref_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_quotContext_233_ = lean_ctor_get(v_a_227_, 1);
v_currMacroScope_234_ = lean_ctor_get(v_a_227_, 2);
v_ref_235_ = lean_ctor_get(v_a_227_, 5);
v___x_236_ = lean_unsigned_to_nat(0u);
v___x_237_ = l_Lean_Syntax_getArg(v_x_226_, v___x_236_);
v___x_238_ = lean_unsigned_to_nat(2u);
v___x_239_ = l_Lean_Syntax_getArg(v_x_226_, v___x_238_);
v___x_240_ = lean_unsigned_to_nat(4u);
v___x_241_ = l_Lean_Syntax_getArg(v_x_226_, v___x_240_);
lean_dec(v_x_226_);
v___x_242_ = 0;
v___x_243_ = l_Lean_SourceInfo_fromRef(v_ref_235_, v___x_242_);
v___x_244_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4));
v___x_245_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__6);
v___x_246_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__7));
lean_inc(v_currMacroScope_234_);
lean_inc(v_quotContext_233_);
v___x_247_ = l_Lean_addMacroScope(v_quotContext_233_, v___x_246_, v_currMacroScope_234_);
v___x_248_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__11));
lean_inc_n(v___x_243_, 2);
v___x_249_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_249_, 0, v___x_243_);
lean_ctor_set(v___x_249_, 1, v___x_245_);
lean_ctor_set(v___x_249_, 2, v___x_247_);
lean_ctor_set(v___x_249_, 3, v___x_248_);
v___x_250_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_251_ = l_Lean_Syntax_node3(v___x_243_, v___x_250_, v___x_237_, v___x_239_, v___x_241_);
v___x_252_ = l_Lean_Syntax_node2(v___x_243_, v___x_244_, v___x_249_, v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_a_228_);
return v___x_253_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d_x27____1___boxed(lean_object* v_x_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___aux__Init__GetElem______macroRules__term_____x5b___x5d_x27____1(v_x_254_, v_a_255_, v_a_256_);
lean_dec_ref(v_a_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_decidableGetElem_x3f___redArg(lean_object* v_inst_258_, lean_object* v_xs_259_, lean_object* v_i_260_, uint8_t v_inst_261_){
_start:
{
if (v_inst_261_ == 0)
{
lean_object* v___x_262_; 
lean_dec(v_i_260_);
lean_dec(v_xs_259_);
lean_dec(v_inst_258_);
v___x_262_ = lean_box(0);
return v___x_262_;
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = lean_apply_3(v_inst_258_, v_xs_259_, v_i_260_, lean_box(0));
v___x_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
return v___x_264_;
}
}
}
LEAN_EXPORT lean_object* l_decidableGetElem_x3f___redArg___boxed(lean_object* v_inst_265_, lean_object* v_xs_266_, lean_object* v_i_267_, lean_object* v_inst_268_){
_start:
{
uint8_t v_inst_17__boxed_269_; lean_object* v_res_270_; 
v_inst_17__boxed_269_ = lean_unbox(v_inst_268_);
v_res_270_ = l_decidableGetElem_x3f___redArg(v_inst_265_, v_xs_266_, v_i_267_, v_inst_17__boxed_269_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_decidableGetElem_x3f(lean_object* v_coll_271_, lean_object* v_idx_272_, lean_object* v_elem_273_, lean_object* v_valid_274_, lean_object* v_inst_275_, lean_object* v_xs_276_, lean_object* v_i_277_, uint8_t v_inst_278_){
_start:
{
if (v_inst_278_ == 0)
{
lean_object* v___x_279_; 
lean_dec(v_i_277_);
lean_dec(v_xs_276_);
lean_dec(v_inst_275_);
v___x_279_ = lean_box(0);
return v___x_279_;
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_apply_3(v_inst_275_, v_xs_276_, v_i_277_, lean_box(0));
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_decidableGetElem_x3f___boxed(lean_object* v_coll_282_, lean_object* v_idx_283_, lean_object* v_elem_284_, lean_object* v_valid_285_, lean_object* v_inst_286_, lean_object* v_xs_287_, lean_object* v_i_288_, lean_object* v_inst_289_){
_start:
{
uint8_t v_inst_29__boxed_290_; lean_object* v_res_291_; 
v_inst_29__boxed_290_ = lean_unbox(v_inst_289_);
v_res_291_ = l_decidableGetElem_x3f(v_coll_282_, v_idx_283_, v_elem_284_, v_valid_285_, v_inst_286_, v_xs_287_, v_i_288_, v_inst_29__boxed_290_);
return v_res_291_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__1(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0));
v___x_332_ = l_String_toRawSubstring_x27(v___x_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1(lean_object* v_x_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l_term_____x5b___x5d___x3f___closed__1));
lean_inc(v_x_345_);
v___x_349_ = l_Lean_Syntax_isOfKind(v_x_345_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; lean_object* v___x_351_; 
lean_dec(v_x_345_);
v___x_350_ = lean_box(1);
v___x_351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v_a_347_);
return v___x_351_;
}
else
{
lean_object* v_quotContext_352_; lean_object* v_currMacroScope_353_; lean_object* v_ref_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_quotContext_352_ = lean_ctor_get(v_a_346_, 1);
v_currMacroScope_353_ = lean_ctor_get(v_a_346_, 2);
v_ref_354_ = lean_ctor_get(v_a_346_, 5);
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = l_Lean_Syntax_getArg(v_x_345_, v___x_355_);
v___x_357_ = lean_unsigned_to_nat(3u);
v___x_358_ = l_Lean_Syntax_getArg(v_x_345_, v___x_357_);
lean_dec(v_x_345_);
v___x_359_ = 0;
v___x_360_ = l_Lean_SourceInfo_fromRef(v_ref_354_, v___x_359_);
v___x_361_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4));
v___x_362_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__1, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__1_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__1);
v___x_363_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__2));
lean_inc(v_currMacroScope_353_);
lean_inc(v_quotContext_352_);
v___x_364_ = l_Lean_addMacroScope(v_quotContext_352_, v___x_363_, v_currMacroScope_353_);
v___x_365_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__6));
lean_inc_n(v___x_360_, 2);
v___x_366_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_366_, 0, v___x_360_);
lean_ctor_set(v___x_366_, 1, v___x_362_);
lean_ctor_set(v___x_366_, 2, v___x_364_);
lean_ctor_set(v___x_366_, 3, v___x_365_);
v___x_367_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_368_ = l_Lean_Syntax_node2(v___x_360_, v___x_367_, v___x_356_, v___x_358_);
v___x_369_ = l_Lean_Syntax_node2(v___x_360_, v___x_361_, v___x_366_, v___x_368_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
lean_ctor_set(v___x_370_, 1, v_a_347_);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___boxed(lean_object* v_x_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1(v_x_371_, v_a_372_, v_a_373_);
lean_dec_ref(v_a_372_);
return v_res_374_;
}
}
static lean_object* _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__1(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0));
v___x_393_ = l_String_toRawSubstring_x27(v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1(lean_object* v_x_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(l_term_____x5b___x5d___x21___closed__1));
lean_inc(v_x_405_);
v___x_409_ = l_Lean_Syntax_isOfKind(v_x_405_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec(v_x_405_);
v___x_410_ = lean_box(1);
v___x_411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v_a_407_);
return v___x_411_;
}
else
{
lean_object* v_quotContext_412_; lean_object* v_currMacroScope_413_; lean_object* v_ref_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_quotContext_412_ = lean_ctor_get(v_a_406_, 1);
v_currMacroScope_413_ = lean_ctor_get(v_a_406_, 2);
v_ref_414_ = lean_ctor_get(v_a_406_, 5);
v___x_415_ = lean_unsigned_to_nat(0u);
v___x_416_ = l_Lean_Syntax_getArg(v_x_405_, v___x_415_);
v___x_417_ = lean_unsigned_to_nat(3u);
v___x_418_ = l_Lean_Syntax_getArg(v_x_405_, v___x_417_);
lean_dec(v_x_405_);
v___x_419_ = 0;
v___x_420_ = l_Lean_SourceInfo_fromRef(v_ref_414_, v___x_419_);
v___x_421_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__4));
v___x_422_ = lean_obj_once(&l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__1, &l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__1_once, _init_l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__1);
v___x_423_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__2));
lean_inc(v_currMacroScope_413_);
lean_inc(v_quotContext_412_);
v___x_424_ = l_Lean_addMacroScope(v_quotContext_412_, v___x_423_, v_currMacroScope_413_);
v___x_425_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__5));
lean_inc_n(v___x_420_, 2);
v___x_426_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_426_, 0, v___x_420_);
lean_ctor_set(v___x_426_, 1, v___x_422_);
lean_ctor_set(v___x_426_, 2, v___x_424_);
lean_ctor_set(v___x_426_, 3, v___x_425_);
v___x_427_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_428_ = l_Lean_Syntax_node2(v___x_420_, v___x_427_, v___x_416_, v___x_418_);
v___x_429_ = l_Lean_Syntax_node2(v___x_420_, v___x_421_, v___x_426_, v___x_428_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v_a_407_);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___boxed(lean_object* v_x_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1(v_x_431_, v_a_432_, v_a_433_);
lean_dec_ref(v_a_432_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__0(lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_xs_437_, lean_object* v_i_438_){
_start:
{
lean_object* v___x_439_; uint8_t v___x_440_; 
lean_inc(v_i_438_);
lean_inc(v_xs_437_);
v___x_439_ = lean_apply_2(v_inst_435_, v_xs_437_, v_i_438_);
v___x_440_ = lean_unbox(v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
lean_dec(v_i_438_);
lean_dec(v_xs_437_);
lean_dec(v_inst_436_);
v___x_441_ = lean_box(0);
return v___x_441_;
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_apply_3(v_inst_436_, v_xs_437_, v_i_438_, lean_box(0));
v___x_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__1(lean_object* v___f_444_, lean_object* v_inst_445_, lean_object* v_xs_446_, lean_object* v_i_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lean_apply_2(v___f_444_, v_xs_446_, v_i_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_449_; 
v___x_449_ = l_outOfBounds___redArg(v_inst_445_);
return v___x_449_;
}
else
{
lean_object* v_val_450_; 
v_val_450_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_val_450_);
lean_dec_ref_known(v___x_448_, 1);
return v_val_450_;
}
}
}
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__1___boxed(lean_object* v___f_451_, lean_object* v_inst_452_, lean_object* v_xs_453_, lean_object* v_i_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__1(v___f_451_, v_inst_452_, v_xs_453_, v_i_454_);
lean_dec(v_inst_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable___redArg(lean_object* v_inst_456_, lean_object* v_inst_457_){
_start:
{
lean_object* v___f_458_; lean_object* v___f_459_; lean_object* v___x_460_; 
lean_inc(v_inst_456_);
v___f_458_ = lean_alloc_closure((void*)(l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__0), 4, 2);
lean_closure_set(v___f_458_, 0, v_inst_457_);
lean_closure_set(v___f_458_, 1, v_inst_456_);
lean_inc_ref(v___f_458_);
v___f_459_ = lean_alloc_closure((void*)(l_instGetElem_x3fOfGetElemOfDecidable___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_459_, 0, v___f_458_);
v___x_460_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_460_, 0, v_inst_456_);
lean_ctor_set(v___x_460_, 1, v___f_458_);
lean_ctor_set(v___x_460_, 2, v___f_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_instGetElem_x3fOfGetElemOfDecidable(lean_object* v_coll_461_, lean_object* v_idx_462_, lean_object* v_elem_463_, lean_object* v_valid_464_, lean_object* v_inst_465_, lean_object* v_inst_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_instGetElem_x3fOfGetElemOfDecidable___redArg(v_inst_465_, v_inst_466_);
return v___x_467_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__3(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__1));
v___x_477_ = l_Lean_mkAtom(v___x_476_);
return v___x_477_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__4(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__3, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__3_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__3);
v___x_479_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_480_ = lean_array_push(v___x_479_, v___x_478_);
return v___x_480_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__6(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_485_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_486_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__4, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__4_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__4);
v___x_487_ = lean_array_push(v___x_486_, v___x_485_);
return v___x_487_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__7(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_488_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__6, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__6_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__6);
v___x_489_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__2));
v___x_490_ = lean_box(2);
v___x_491_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_489_);
lean_ctor_set(v___x_491_, 2, v___x_488_);
return v___x_491_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__8(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__7, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__7_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__7);
v___x_493_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_494_ = lean_array_push(v___x_493_, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_496_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__8, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__8_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__8);
v___x_497_ = lean_array_push(v___x_496_, v___x_495_);
return v___x_497_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__13(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__12));
v___x_506_ = l_Lean_mkAtom(v___x_505_);
return v___x_506_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__14(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__13, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__13_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__13);
v___x_508_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_509_ = lean_array_push(v___x_508_, v___x_507_);
return v___x_509_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__19(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__17));
v___x_523_ = l_Lean_mkAtom(v___x_522_);
return v___x_523_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__20(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_524_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__19, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__19_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__19);
v___x_525_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_526_ = lean_array_push(v___x_525_, v___x_524_);
return v___x_526_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_534_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_535_ = lean_array_push(v___x_534_, v___x_533_);
return v___x_535_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__24(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23);
v___x_537_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__22));
v___x_538_ = lean_box(2);
v___x_539_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
lean_ctor_set(v___x_539_, 1, v___x_537_);
lean_ctor_set(v___x_539_, 2, v___x_536_);
return v___x_539_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__25(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__24, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__24_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__24);
v___x_541_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__20, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__20_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__20);
v___x_542_ = lean_array_push(v___x_541_, v___x_540_);
return v___x_542_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__26(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_544_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__25, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__25_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__25);
v___x_545_ = lean_array_push(v___x_544_, v___x_543_);
return v___x_545_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__28(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__27));
v___x_548_ = l_Lean_mkAtom(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__29(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_549_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__28, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__28_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__28);
v___x_550_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_551_ = lean_array_push(v___x_550_, v___x_549_);
return v___x_551_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__30(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_552_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__29, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__29_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__29);
v___x_553_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_554_ = lean_box(2);
v___x_555_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___x_553_);
lean_ctor_set(v___x_555_, 2, v___x_552_);
return v___x_555_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__30, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__30_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__30);
v___x_557_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__26, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__26_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__26);
v___x_558_ = lean_array_push(v___x_557_, v___x_556_);
return v___x_558_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__32(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_term_____x5b___x5d___closed__7));
v___x_560_ = l_Lean_mkAtom(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__32, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__32_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__32);
v___x_562_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_563_ = lean_array_push(v___x_562_, v___x_561_);
return v___x_563_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_570_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_571_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__23);
v___x_572_ = lean_array_push(v___x_571_, v___x_570_);
return v___x_572_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__37(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0));
v___x_574_ = lean_string_utf8_byte_size(v___x_573_);
return v___x_574_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__38(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_575_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__37, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__37_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__37);
v___x_576_ = lean_unsigned_to_nat(0u);
v___x_577_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__0));
v___x_578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v___x_576_);
lean_ctor_set(v___x_578_, 2, v___x_575_);
return v___x_578_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__39(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_579_ = lean_box(0);
v___x_580_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x3f__1___closed__2));
v___x_581_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__38, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__38_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__38);
v___x_582_ = lean_box(2);
v___x_583_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v___x_581_);
lean_ctor_set(v___x_583_, 2, v___x_580_);
lean_ctor_set(v___x_583_, 3, v___x_579_);
return v___x_583_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__40(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_584_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__39, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__39_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__39);
v___x_585_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36);
v___x_586_ = lean_array_push(v___x_585_, v___x_584_);
return v___x_586_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_587_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__40, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__40_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__40);
v___x_588_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35));
v___x_589_ = lean_box(2);
v___x_590_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set(v___x_590_, 1, v___x_588_);
lean_ctor_set(v___x_590_, 2, v___x_587_);
return v___x_590_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__42(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41);
v___x_592_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_593_ = lean_array_push(v___x_592_, v___x_591_);
return v___x_593_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__43(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_594_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__42, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__42_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__42);
v___x_595_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_596_ = lean_box(2);
v___x_597_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___x_595_);
lean_ctor_set(v___x_597_, 2, v___x_594_);
return v___x_597_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__44(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_598_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__43, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__43_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__43);
v___x_599_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33);
v___x_600_ = lean_array_push(v___x_599_, v___x_598_);
return v___x_600_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = ((lean_object*)(l_term_____x5b___x5d___closed__17));
v___x_602_ = l_Lean_mkAtom(v___x_601_);
return v___x_602_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__46(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_603_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45);
v___x_604_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__44, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__44_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__44);
v___x_605_ = lean_array_push(v___x_604_, v___x_603_);
return v___x_605_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__47(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__46, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__46_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__46);
v___x_607_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_608_ = lean_box(2);
v___x_609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
lean_ctor_set(v___x_609_, 1, v___x_607_);
lean_ctor_set(v___x_609_, 2, v___x_606_);
return v___x_609_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__48(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__47, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__47_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__47);
v___x_611_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31);
v___x_612_ = lean_array_push(v___x_611_, v___x_610_);
return v___x_612_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__49(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_614_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__48, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__48_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__48);
v___x_615_ = lean_array_push(v___x_614_, v___x_613_);
return v___x_615_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__50(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_616_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__49, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__49_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__49);
v___x_617_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18));
v___x_618_ = lean_box(2);
v___x_619_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_617_);
lean_ctor_set(v___x_619_, 2, v___x_616_);
return v___x_619_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__51(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_620_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__50, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__50_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__50);
v___x_621_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_622_ = lean_array_push(v___x_621_, v___x_620_);
return v___x_622_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__53(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__52));
v___x_625_ = l_Lean_mkAtom(v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__54(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__53, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__53_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__53);
v___x_627_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__51, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__51_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__51);
v___x_628_ = lean_array_push(v___x_627_, v___x_626_);
return v___x_628_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__57(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__55));
v___x_636_ = l_Lean_mkAtom(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__58(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_637_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__57, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__57_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__57);
v___x_638_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_639_ = lean_array_push(v___x_638_, v___x_637_);
return v___x_639_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__59(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_640_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_641_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__58, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__58_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__58);
v___x_642_ = lean_array_push(v___x_641_, v___x_640_);
return v___x_642_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__60(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_643_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__59, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__59_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__59);
v___x_644_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__56));
v___x_645_ = lean_box(2);
v___x_646_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set(v___x_646_, 1, v___x_644_);
lean_ctor_set(v___x_646_, 2, v___x_643_);
return v___x_646_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__61(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_647_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__60, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__60_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__60);
v___x_648_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__54, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__54_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__54);
v___x_649_ = lean_array_push(v___x_648_, v___x_647_);
return v___x_649_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__62(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_650_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__61, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__61_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__61);
v___x_651_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__16));
v___x_652_ = lean_box(2);
v___x_653_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
lean_ctor_set(v___x_653_, 1, v___x_651_);
lean_ctor_set(v___x_653_, 2, v___x_650_);
return v___x_653_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__63(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__62, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__62_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__62);
v___x_655_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_656_ = lean_array_push(v___x_655_, v___x_654_);
return v___x_656_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__64(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_657_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__63, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__63_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__63);
v___x_658_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_659_ = lean_box(2);
v___x_660_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v___x_658_);
lean_ctor_set(v___x_660_, 2, v___x_657_);
return v___x_660_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__65(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_661_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__64, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__64_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__64);
v___x_662_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_663_ = lean_array_push(v___x_662_, v___x_661_);
return v___x_663_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__66(void){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_664_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__65, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__65_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__65);
v___x_665_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33));
v___x_666_ = lean_box(2);
v___x_667_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_665_);
lean_ctor_set(v___x_667_, 2, v___x_664_);
return v___x_667_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__67(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_668_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__66, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__66_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__66);
v___x_669_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_670_ = lean_array_push(v___x_669_, v___x_668_);
return v___x_670_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__68(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_671_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__67, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__67_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__67);
v___x_672_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31));
v___x_673_ = lean_box(2);
v___x_674_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___x_672_);
lean_ctor_set(v___x_674_, 2, v___x_671_);
return v___x_674_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__69(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__68, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__68_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__68);
v___x_676_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__14, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__14_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__14);
v___x_677_ = lean_array_push(v___x_676_, v___x_675_);
return v___x_677_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__70(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_678_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__69, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__69_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__69);
v___x_679_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__11));
v___x_680_ = lean_box(2);
v___x_681_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_679_);
lean_ctor_set(v___x_681_, 2, v___x_678_);
return v___x_681_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__71(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__70, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__70_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__70);
v___x_683_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9);
v___x_684_ = lean_array_push(v___x_683_, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__72(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_685_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__71, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__71_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__71);
v___x_686_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_687_ = lean_box(2);
v___x_688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_686_);
lean_ctor_set(v___x_688_, 2, v___x_685_);
return v___x_688_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__73(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__72, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__72_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__72);
v___x_690_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_691_ = lean_array_push(v___x_690_, v___x_689_);
return v___x_691_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__74(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_692_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__73, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__73_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__73);
v___x_693_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33));
v___x_694_ = lean_box(2);
v___x_695_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v___x_693_);
lean_ctor_set(v___x_695_, 2, v___x_692_);
return v___x_695_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__75(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__74, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__74_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__74);
v___x_697_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_698_ = lean_array_push(v___x_697_, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__76(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_699_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__75, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__75_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__75);
v___x_700_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31));
v___x_701_ = lean_box(2);
v___x_702_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set(v___x_702_, 1, v___x_700_);
lean_ctor_set(v___x_702_, 2, v___x_699_);
return v___x_702_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x3f__def___autoParam(void){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__76, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__76_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__76);
return v___x_703_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__0(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0));
v___x_705_ = lean_string_utf8_byte_size(v___x_704_);
return v___x_705_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__1(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_706_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__0, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__0_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__0);
v___x_707_ = lean_unsigned_to_nat(0u);
v___x_708_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__0));
v___x_709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___x_707_);
lean_ctor_set(v___x_709_, 2, v___x_706_);
return v___x_709_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__2(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_710_ = lean_box(0);
v___x_711_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d___x21__1___closed__2));
v___x_712_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__1, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__1_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__1);
v___x_713_ = lean_box(2);
v___x_714_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
lean_ctor_set(v___x_714_, 1, v___x_712_);
lean_ctor_set(v___x_714_, 2, v___x_711_);
lean_ctor_set(v___x_714_, 3, v___x_710_);
return v___x_714_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__3(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__2, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__2_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__2);
v___x_716_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36);
v___x_717_ = lean_array_push(v___x_716_, v___x_715_);
return v___x_717_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__4(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_718_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__3, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__3_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__3);
v___x_719_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35));
v___x_720_ = lean_box(2);
v___x_721_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v___x_719_);
lean_ctor_set(v___x_721_, 2, v___x_718_);
return v___x_721_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__5(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_722_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__4, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__4_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__4);
v___x_723_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_724_ = lean_array_push(v___x_723_, v___x_722_);
return v___x_724_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__7(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = ((lean_object*)(l_LawfulGetElem_getElem_x21__def___autoParam___closed__6));
v___x_727_ = l_Lean_mkAtom(v___x_726_);
return v___x_727_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__8(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_728_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__7, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__7_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__7);
v___x_729_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__5, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__5_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__5);
v___x_730_ = lean_array_push(v___x_729_, v___x_728_);
return v___x_730_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__9(void){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__41);
v___x_732_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__8, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__8_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__8);
v___x_733_ = lean_array_push(v___x_732_, v___x_731_);
return v___x_733_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__10(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__7, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__7_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__7);
v___x_735_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__9, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__9_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__9);
v___x_736_ = lean_array_push(v___x_735_, v___x_734_);
return v___x_736_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__12(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = ((lean_object*)(l_LawfulGetElem_getElem_x21__def___autoParam___closed__11));
v___x_739_ = lean_string_utf8_byte_size(v___x_738_);
return v___x_739_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__13(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_740_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__12, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__12_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__12);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = ((lean_object*)(l_LawfulGetElem_getElem_x21__def___autoParam___closed__11));
v___x_743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
lean_ctor_set(v___x_743_, 1, v___x_741_);
lean_ctor_set(v___x_743_, 2, v___x_740_);
return v___x_743_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__15(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_746_ = lean_box(0);
v___x_747_ = ((lean_object*)(l_LawfulGetElem_getElem_x21__def___autoParam___closed__14));
v___x_748_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__13, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__13_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__13);
v___x_749_ = lean_box(2);
v___x_750_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v___x_748_);
lean_ctor_set(v___x_750_, 2, v___x_747_);
lean_ctor_set(v___x_750_, 3, v___x_746_);
return v___x_750_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__16(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__15, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__15_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__15);
v___x_752_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__36);
v___x_753_ = lean_array_push(v___x_752_, v___x_751_);
return v___x_753_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__17(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_754_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__16, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__16_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__16);
v___x_755_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__35));
v___x_756_ = lean_box(2);
v___x_757_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
lean_ctor_set(v___x_757_, 1, v___x_755_);
lean_ctor_set(v___x_757_, 2, v___x_754_);
return v___x_757_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__18(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_758_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__17, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__17_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__17);
v___x_759_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__10, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__10_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__10);
v___x_760_ = lean_array_push(v___x_759_, v___x_758_);
return v___x_760_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__19(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_761_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__18, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__18_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__18);
v___x_762_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_763_ = lean_box(2);
v___x_764_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v___x_762_);
lean_ctor_set(v___x_764_, 2, v___x_761_);
return v___x_764_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__20(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__19, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__19_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__19);
v___x_766_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__33);
v___x_767_ = lean_array_push(v___x_766_, v___x_765_);
return v___x_767_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__21(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__45);
v___x_769_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__20, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__20_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__20);
v___x_770_ = lean_array_push(v___x_769_, v___x_768_);
return v___x_770_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__22(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_771_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__21, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__21_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__21);
v___x_772_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_773_ = lean_box(2);
v___x_774_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
lean_ctor_set(v___x_774_, 1, v___x_772_);
lean_ctor_set(v___x_774_, 2, v___x_771_);
return v___x_774_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__23(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__22, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__22_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__22);
v___x_776_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__31);
v___x_777_ = lean_array_push(v___x_776_, v___x_775_);
return v___x_777_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__24(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__5));
v___x_779_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__23, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__23_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__23);
v___x_780_ = lean_array_push(v___x_779_, v___x_778_);
return v___x_780_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__25(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_781_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__24, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__24_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__24);
v___x_782_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__18));
v___x_783_ = lean_box(2);
v___x_784_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_782_);
lean_ctor_set(v___x_784_, 2, v___x_781_);
return v___x_784_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__26(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_785_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__25, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__25_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__25);
v___x_786_ = lean_obj_once(&l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9, &l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9_once, _init_l_LawfulGetElem_getElem_x3f__def___autoParam___closed__9);
v___x_787_ = lean_array_push(v___x_786_, v___x_785_);
return v___x_787_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__27(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_788_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__26, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__26_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__26);
v___x_789_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_790_ = lean_box(2);
v___x_791_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
lean_ctor_set(v___x_791_, 1, v___x_789_);
lean_ctor_set(v___x_791_, 2, v___x_788_);
return v___x_791_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__28(void){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_792_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__27, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__27_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__27);
v___x_793_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_794_ = lean_array_push(v___x_793_, v___x_792_);
return v___x_794_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__29(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_795_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__28, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__28_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__28);
v___x_796_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33));
v___x_797_ = lean_box(2);
v___x_798_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
lean_ctor_set(v___x_798_, 1, v___x_796_);
lean_ctor_set(v___x_798_, 2, v___x_795_);
return v___x_798_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__30(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__29, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__29_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__29);
v___x_800_ = ((lean_object*)(l_LawfulGetElem_getElem_x3f__def___autoParam___closed__0));
v___x_801_ = lean_array_push(v___x_800_, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__31(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_802_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__30, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__30_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__30);
v___x_803_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31));
v___x_804_ = lean_box(2);
v___x_805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
lean_ctor_set(v___x_805_, 1, v___x_803_);
lean_ctor_set(v___x_805_, 2, v___x_802_);
return v___x_805_;
}
}
static lean_object* _init_l_LawfulGetElem_getElem_x21__def___autoParam(void){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = lean_obj_once(&l_LawfulGetElem_getElem_x21__def___autoParam___closed__31, &l_LawfulGetElem_getElem_x21__def___autoParam___closed__31_once, _init_l_LawfulGetElem_getElem_x21__def___autoParam___closed__31);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_GetElem_0__GetElem_x3f_match__1_splitter___redArg(lean_object* v_x_807_, lean_object* v_h__1_808_, lean_object* v_h__2_809_){
_start:
{
if (lean_obj_tag(v_x_807_) == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; 
lean_dec(v_h__1_808_);
v___x_810_ = lean_box(0);
v___x_811_ = lean_apply_1(v_h__2_809_, v___x_810_);
return v___x_811_;
}
else
{
lean_object* v_val_812_; lean_object* v___x_813_; 
lean_dec(v_h__2_809_);
v_val_812_ = lean_ctor_get(v_x_807_, 0);
lean_inc(v_val_812_);
lean_dec_ref_known(v_x_807_, 1);
v___x_813_ = lean_apply_1(v_h__1_808_, v_val_812_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_GetElem_0__GetElem_x3f_match__1_splitter(lean_object* v_elem_814_, lean_object* v_motive_815_, lean_object* v_x_816_, lean_object* v_h__1_817_, lean_object* v_h__2_818_){
_start:
{
if (lean_obj_tag(v_x_816_) == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec(v_h__1_817_);
v___x_819_ = lean_box(0);
v___x_820_ = lean_apply_1(v_h__2_818_, v___x_819_);
return v___x_820_;
}
else
{
lean_object* v_val_821_; lean_object* v___x_822_; 
lean_dec(v_h__2_818_);
v_val_821_ = lean_ctor_get(v_x_816_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v_x_816_, 1);
v___x_822_ = lean_apply_1(v_h__1_817_, v_val_821_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal___redArg___lam__0(lean_object* v_inst_823_, lean_object* v_xs_824_, lean_object* v_i_825_, lean_object* v_h_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = lean_apply_3(v_inst_823_, v_xs_824_, v_i_825_, lean_box(0));
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal___redArg(lean_object* v_inst_828_){
_start:
{
lean_object* v___f_829_; 
v___f_829_ = lean_alloc_closure((void*)(l_Fin_instGetElemFinVal___redArg___lam__0), 4, 1);
lean_closure_set(v___f_829_, 0, v_inst_828_);
return v___f_829_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal(lean_object* v_cont_830_, lean_object* v_elem_831_, lean_object* v_dom_832_, lean_object* v_n_833_, lean_object* v_inst_834_){
_start:
{
lean_object* v___f_835_; 
v___f_835_ = lean_alloc_closure((void*)(l_Fin_instGetElemFinVal___redArg___lam__0), 4, 1);
lean_closure_set(v___f_835_, 0, v_inst_834_);
return v___f_835_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElemFinVal___boxed(lean_object* v_cont_836_, lean_object* v_elem_837_, lean_object* v_dom_838_, lean_object* v_n_839_, lean_object* v_inst_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Fin_instGetElemFinVal(v_cont_836_, v_elem_837_, v_dom_838_, v_n_839_, v_inst_840_);
lean_dec(v_n_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___redArg___lam__0(lean_object* v_getElem_x3f_842_, lean_object* v_xs_843_, lean_object* v_i_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_apply_2(v_getElem_x3f_842_, v_xs_843_, v_i_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___redArg___lam__1(lean_object* v_getElem_x21_846_, lean_object* v_inst_847_, lean_object* v_xs_848_, lean_object* v_i_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = lean_apply_3(v_getElem_x21_846_, v_inst_847_, v_xs_848_, v_i_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___redArg(lean_object* v_inst_851_){
_start:
{
lean_object* v_toGetElem_852_; lean_object* v_getElem_x3f_853_; lean_object* v_getElem_x21_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_864_; 
v_toGetElem_852_ = lean_ctor_get(v_inst_851_, 0);
v_getElem_x3f_853_ = lean_ctor_get(v_inst_851_, 1);
v_getElem_x21_854_ = lean_ctor_get(v_inst_851_, 2);
v_isSharedCheck_864_ = !lean_is_exclusive(v_inst_851_);
if (v_isSharedCheck_864_ == 0)
{
v___x_856_ = v_inst_851_;
v_isShared_857_ = v_isSharedCheck_864_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_getElem_x21_854_);
lean_inc(v_getElem_x3f_853_);
lean_inc(v_toGetElem_852_);
lean_dec(v_inst_851_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_864_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___f_858_; lean_object* v___f_859_; lean_object* v___f_860_; lean_object* v___x_862_; 
v___f_858_ = lean_alloc_closure((void*)(l_Fin_instGetElem_x3fFinVal___redArg___lam__0), 3, 1);
lean_closure_set(v___f_858_, 0, v_getElem_x3f_853_);
v___f_859_ = lean_alloc_closure((void*)(l_Fin_instGetElem_x3fFinVal___redArg___lam__1), 4, 1);
lean_closure_set(v___f_859_, 0, v_getElem_x21_854_);
v___f_860_ = lean_alloc_closure((void*)(l_Fin_instGetElemFinVal___redArg___lam__0), 4, 1);
lean_closure_set(v___f_860_, 0, v_toGetElem_852_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 2, v___f_859_);
lean_ctor_set(v___x_856_, 1, v___f_858_);
lean_ctor_set(v___x_856_, 0, v___f_860_);
v___x_862_ = v___x_856_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___f_860_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v___f_858_);
lean_ctor_set(v_reuseFailAlloc_863_, 2, v___f_859_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal(lean_object* v_cont_865_, lean_object* v_elem_866_, lean_object* v_dom_867_, lean_object* v_n_868_, lean_object* v_inst_869_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Fin_instGetElem_x3fFinVal___redArg(v_inst_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Fin_instGetElem_x3fFinVal___boxed(lean_object* v_cont_871_, lean_object* v_elem_872_, lean_object* v_dom_873_, lean_object* v_n_874_, lean_object* v_inst_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Fin_instGetElem_x3fFinVal(v_cont_871_, v_elem_872_, v_dom_873_, v_n_874_, v_inst_875_);
lean_dec(v_n_874_);
return v_res_876_;
}
}
static lean_object* _init_l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__11(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__10));
v___x_906_ = l_String_toRawSubstring_x27(v___x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1(lean_object* v_x_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_929_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__1));
v___x_930_ = l_Lean_Syntax_isOfKind(v_x_926_, v___x_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = lean_box(1);
v___x_932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_931_);
lean_ctor_set(v___x_932_, 1, v_a_928_);
return v___x_932_;
}
else
{
lean_object* v_quotContext_933_; lean_object* v_currMacroScope_934_; lean_object* v_ref_935_; uint8_t v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_quotContext_933_ = lean_ctor_get(v_a_927_, 1);
v_currMacroScope_934_ = lean_ctor_get(v_a_927_, 2);
v_ref_935_ = lean_ctor_get(v_a_927_, 5);
v___x_936_ = 0;
v___x_937_ = l_Lean_SourceInfo_fromRef(v_ref_935_, v___x_936_);
v___x_938_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__3));
v___x_939_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__13));
v___x_940_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__4));
v___x_941_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__18));
lean_inc_n(v___x_937_, 20);
v___x_942_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_937_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__31));
v___x_944_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__33));
v___x_945_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__6));
v___x_946_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__7));
v___x_947_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_937_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__8));
v___x_949_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__9));
v___x_950_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_937_);
lean_ctor_set(v___x_950_, 1, v___x_948_);
v___x_951_ = lean_obj_once(&l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__11, &l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__11_once, _init_l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__11);
v___x_952_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__14));
lean_inc(v_currMacroScope_934_);
lean_inc(v_quotContext_933_);
v___x_953_ = l_Lean_addMacroScope(v_quotContext_933_, v___x_952_, v_currMacroScope_934_);
v___x_954_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__16));
v___x_955_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_955_, 0, v___x_937_);
lean_ctor_set(v___x_955_, 1, v___x_951_);
lean_ctor_set(v___x_955_, 2, v___x_953_);
lean_ctor_set(v___x_955_, 3, v___x_954_);
v___x_956_ = l_Lean_Syntax_node2(v___x_937_, v___x_949_, v___x_950_, v___x_955_);
v___x_957_ = l_Lean_Syntax_node1(v___x_937_, v___x_939_, v___x_956_);
v___x_958_ = l_Lean_Syntax_node1(v___x_937_, v___x_944_, v___x_957_);
v___x_959_ = l_Lean_Syntax_node1(v___x_937_, v___x_943_, v___x_958_);
v___x_960_ = l_Lean_Syntax_node2(v___x_937_, v___x_945_, v___x_947_, v___x_959_);
v___x_961_ = l_Lean_Syntax_node1(v___x_937_, v___x_939_, v___x_960_);
v___x_962_ = l_Lean_Syntax_node1(v___x_937_, v___x_944_, v___x_961_);
v___x_963_ = l_Lean_Syntax_node1(v___x_937_, v___x_943_, v___x_962_);
v___x_964_ = ((lean_object*)(l___aux__Init__GetElem______macroRules__term_____x5b___x5d__1___closed__37));
v___x_965_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_937_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_Syntax_node3(v___x_937_, v___x_940_, v___x_942_, v___x_963_, v___x_965_);
v___x_967_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__17));
v___x_968_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_937_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__18));
v___x_970_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_937_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = l_Lean_Syntax_node1(v___x_937_, v___x_929_, v___x_970_);
v___x_972_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__19));
v___x_973_ = ((lean_object*)(l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___closed__20));
v___x_974_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_937_);
lean_ctor_set(v___x_974_, 1, v___x_972_);
v___x_975_ = l_Lean_Syntax_node1(v___x_937_, v___x_973_, v___x_974_);
lean_inc_ref(v___x_968_);
v___x_976_ = l_Lean_Syntax_node5(v___x_937_, v___x_939_, v___x_966_, v___x_968_, v___x_971_, v___x_968_, v___x_975_);
v___x_977_ = l_Lean_Syntax_node1(v___x_937_, v___x_938_, v___x_976_);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v_a_928_);
return v___x_978_;
}
}
}
LEAN_EXPORT lean_object* l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1___boxed(lean_object* v_x_979_, lean_object* v_a_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Fin___aux__Init__GetElem______macroRules__tacticGet__elem__tactic__extensible__1(v_x_979_, v_a_980_, v_a_981_);
lean_dec_ref(v_a_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg___lam__0(lean_object* v_as_983_, lean_object* v_i_984_, lean_object* v_h_985_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_List_get___redArg(v_as_983_, v_i_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg___lam__0___boxed(lean_object* v_as_987_, lean_object* v_i_988_, lean_object* v_h_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_List_instGetElemNatLtLength___redArg___lam__0(v_as_987_, v_i_988_, v_h_989_);
lean_dec(v_as_987_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg(){
_start:
{
lean_object* v___f_993_; 
v___f_993_ = ((lean_object*)(l_List_instGetElemNatLtLength___redArg___closed__0));
return v___f_993_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength___redArg___boxed(lean_object* v___dummy_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_List_instGetElemNatLtLength___redArg();
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElemNatLtLength(lean_object* v_00_u03b1_996_){
_start:
{
lean_object* v___f_997_; 
v___f_997_ = ((lean_object*)(l_List_instGetElemNatLtLength___redArg___closed__0));
return v___f_997_;
}
}
LEAN_EXPORT lean_object* l_List_get_x3fInternal___redArg(lean_object* v_x_998_, lean_object* v_x_999_){
_start:
{
if (lean_obj_tag(v_x_998_) == 1)
{
lean_object* v_head_1000_; lean_object* v_tail_1001_; lean_object* v_zero_1002_; uint8_t v_isZero_1003_; 
v_head_1000_ = lean_ctor_get(v_x_998_, 0);
v_tail_1001_ = lean_ctor_get(v_x_998_, 1);
v_zero_1002_ = lean_unsigned_to_nat(0u);
v_isZero_1003_ = lean_nat_dec_eq(v_x_999_, v_zero_1002_);
if (v_isZero_1003_ == 1)
{
lean_object* v___x_1004_; 
lean_dec(v_x_999_);
lean_inc(v_head_1000_);
v___x_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_head_1000_);
return v___x_1004_;
}
else
{
lean_object* v_one_1005_; lean_object* v_n_1006_; 
v_one_1005_ = lean_unsigned_to_nat(1u);
v_n_1006_ = lean_nat_sub(v_x_999_, v_one_1005_);
lean_dec(v_x_999_);
v_x_998_ = v_tail_1001_;
v_x_999_ = v_n_1006_;
goto _start;
}
}
else
{
lean_object* v___x_1008_; 
lean_dec(v_x_999_);
v___x_1008_ = lean_box(0);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* l_List_get_x3fInternal___redArg___boxed(lean_object* v_x_1009_, lean_object* v_x_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_List_get_x3fInternal___redArg(v_x_1009_, v_x_1010_);
lean_dec(v_x_1009_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_List_get_x3fInternal(lean_object* v_00_u03b1_1012_, lean_object* v_x_1013_, lean_object* v_x_1014_){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = l_List_get_x3fInternal___redArg(v_x_1013_, v_x_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_List_get_x3fInternal___boxed(lean_object* v_00_u03b1_1016_, lean_object* v_x_1017_, lean_object* v_x_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_List_get_x3fInternal(v_00_u03b1_1016_, v_x_1017_, v_x_1018_);
lean_dec(v_x_1017_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_List_get_x21Internal___redArg(lean_object* v_inst_1022_, lean_object* v_x_1023_, lean_object* v_x_1024_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 1)
{
lean_object* v_head_1025_; lean_object* v_tail_1026_; lean_object* v_zero_1027_; uint8_t v_isZero_1028_; 
v_head_1025_ = lean_ctor_get(v_x_1023_, 0);
v_tail_1026_ = lean_ctor_get(v_x_1023_, 1);
v_zero_1027_ = lean_unsigned_to_nat(0u);
v_isZero_1028_ = lean_nat_dec_eq(v_x_1024_, v_zero_1027_);
if (v_isZero_1028_ == 1)
{
lean_dec(v_x_1024_);
lean_inc(v_head_1025_);
return v_head_1025_;
}
else
{
lean_object* v_one_1029_; lean_object* v_n_1030_; 
v_one_1029_ = lean_unsigned_to_nat(1u);
v_n_1030_ = lean_nat_sub(v_x_1024_, v_one_1029_);
lean_dec(v_x_1024_);
v_x_1023_ = v_tail_1026_;
v_x_1024_ = v_n_1030_;
goto _start;
}
}
else
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
lean_dec(v_x_1024_);
v___x_1032_ = ((lean_object*)(l_outOfBounds___redArg___closed__0));
v___x_1033_ = ((lean_object*)(l_List_get_x21Internal___redArg___closed__0));
v___x_1034_ = lean_unsigned_to_nat(333u);
v___x_1035_ = lean_unsigned_to_nat(18u);
v___x_1036_ = ((lean_object*)(l_List_get_x21Internal___redArg___closed__1));
v___x_1037_ = l_mkPanicMessageWithDecl(v___x_1032_, v___x_1033_, v___x_1034_, v___x_1035_, v___x_1036_);
v___x_1038_ = l_panic___redArg(v_inst_1022_, v___x_1037_);
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l_List_get_x21Internal___redArg___boxed(lean_object* v_inst_1039_, lean_object* v_x_1040_, lean_object* v_x_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_List_get_x21Internal___redArg(v_inst_1039_, v_x_1040_, v_x_1041_);
lean_dec(v_x_1040_);
lean_dec(v_inst_1039_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_List_get_x21Internal(lean_object* v_00_u03b1_1043_, lean_object* v_inst_1044_, lean_object* v_x_1045_, lean_object* v_x_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_List_get_x21Internal___redArg(v_inst_1044_, v_x_1045_, v_x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_List_get_x21Internal___boxed(lean_object* v_00_u03b1_1048_, lean_object* v_inst_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_List_get_x21Internal(v_00_u03b1_1048_, v_inst_1049_, v_x_1050_, v_x_1051_);
lean_dec(v_x_1050_);
lean_dec(v_inst_1049_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElem_x3fNatLtLength___redArg(){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = ((lean_object*)(l_List_instGetElem_x3fNatLtLength___redArg___closed__2));
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElem_x3fNatLtLength___redArg___boxed(lean_object* v___dummy_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_List_instGetElem_x3fNatLtLength___redArg();
return v_res_1062_;
}
}
static lean_object* _init_l_List_instGetElem_x3fNatLtLength___closed__0(void){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_List_instGetElem_x3fNatLtLength___redArg();
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_List_instGetElem_x3fNatLtLength(lean_object* v_00_u03b1_1064_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_obj_once(&l_List_instGetElem_x3fNatLtLength___closed__0, &l_List_instGetElem_x3fNatLtLength___closed__0_once, _init_l_List_instGetElem_x3fNatLtLength___closed__0);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg___lam__0(lean_object* v_xs_1066_, lean_object* v_i_1067_, lean_object* v_h_1068_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_array_fget_borrowed(v_xs_1066_, v_i_1067_);
lean_inc(v___x_1069_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg___lam__0___boxed(lean_object* v_xs_1070_, lean_object* v_i_1071_, lean_object* v_h_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Array_instGetElemNatLtSize___redArg___lam__0(v_xs_1070_, v_i_1071_, v_h_1072_);
lean_dec(v_i_1071_);
lean_dec_ref(v_xs_1070_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg(){
_start:
{
lean_object* v___f_1076_; 
v___f_1076_ = ((lean_object*)(l_Array_instGetElemNatLtSize___redArg___closed__0));
return v___f_1076_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize___redArg___boxed(lean_object* v___dummy_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Array_instGetElemNatLtSize___redArg();
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemNatLtSize(lean_object* v_00_u03b1_1079_){
_start:
{
lean_object* v___f_1080_; 
v___f_1080_ = ((lean_object*)(l_Array_instGetElemNatLtSize___redArg___closed__0));
return v___f_1080_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__0(lean_object* v_xs_1081_, lean_object* v_i_1082_){
_start:
{
lean_object* v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = lean_array_get_size(v_xs_1081_);
v___x_1084_ = lean_nat_dec_lt(v_i_1082_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_box(0);
return v___x_1085_;
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_array_fget_borrowed(v_xs_1081_, v_i_1082_);
lean_inc(v___x_1086_);
v___x_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__0___boxed(lean_object* v_xs_1088_, lean_object* v_i_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Array_instGetElem_x3fNatLtSize___redArg___lam__0(v_xs_1088_, v_i_1089_);
lean_dec(v_i_1089_);
lean_dec_ref(v_xs_1088_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__1(lean_object* v_inst_1091_, lean_object* v_xs_1092_, lean_object* v_i_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_array_get_borrowed(v_inst_1091_, v_xs_1092_, v_i_1093_);
lean_inc(v___x_1094_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___lam__1___boxed(lean_object* v_inst_1095_, lean_object* v_xs_1096_, lean_object* v_i_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Array_instGetElem_x3fNatLtSize___redArg___lam__1(v_inst_1095_, v_xs_1096_, v_i_1097_);
lean_dec(v_i_1097_);
lean_dec_ref(v_xs_1096_);
lean_dec(v_inst_1095_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg(){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = ((lean_object*)(l_Array_instGetElem_x3fNatLtSize___redArg___closed__2));
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize___redArg___boxed(lean_object* v___dummy_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Array_instGetElem_x3fNatLtSize___redArg();
return v_res_1108_;
}
}
static lean_object* _init_l_Array_instGetElem_x3fNatLtSize___closed__0(void){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Array_instGetElem_x3fNatLtSize___redArg();
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElem_x3fNatLtSize(lean_object* v_00_u03b1_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_obj_once(&l_Array_instGetElem_x3fNatLtSize___closed__0, &l_Array_instGetElem_x3fNatLtSize___closed__0_once, _init_l_Array_instGetElem_x3fNatLtSize___closed__0);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instGetElemNatTrue___lam__0(lean_object* v_stx_1112_, lean_object* v_i_1113_, lean_object* v_x_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lean_Syntax_getArg(v_stx_1112_, v_i_1113_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instGetElemNatTrue___lam__0___boxed(lean_object* v_stx_1116_, lean_object* v_i_1117_, lean_object* v_x_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Syntax_instGetElemNatTrue___lam__0(v_stx_1116_, v_i_1117_, v_x_1118_);
lean_dec(v_i_1117_);
lean_dec(v_stx_1116_);
return v_res_1119_;
}
}
lean_object* runtime_initialize_Init_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_GetElem(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_GetElem(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_LawfulGetElem_getElem_x3f__def___autoParam = _init_l_LawfulGetElem_getElem_x3f__def___autoParam();
lean_mark_persistent(l_LawfulGetElem_getElem_x3f__def___autoParam);
l_LawfulGetElem_getElem_x21__def___autoParam = _init_l_LawfulGetElem_getElem_x21__def___autoParam();
lean_mark_persistent(l_LawfulGetElem_getElem_x21__def___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_GetElem(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_GetElem(builtin);
}
#ifdef __cplusplus
}
#endif
